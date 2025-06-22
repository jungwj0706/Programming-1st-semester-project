#include <stdio.h>

int factorial(int x) {
    int f = 1;
    for (int i = 2; i <= x; i++) 
        f *= i;
    return f;
}

int main() {
    char P[] = {'c','d','e','a','b'};
    char L[] = {'a','b','c','d','e'};
    int n = 5;
    int rank = 1;

    for (int i = 0; i < n; i++) {
        // L에서 P[i]가 몇 번째(0-based)인지 찾기
        int k = 0;
        for (int j = 0; j < n - i; j++) {
            if (L[j] == P[i]) break;
            k++;
        }
        rank += k * factorial(n - i - 1);
        // L에서 P[i] 제거: 뒤의 요소 한 칸씩 당기기
        for (int j = k; j < n - i - 1; j++) {
            L[j] = L[j+1];
        }
    }

    printf("결과: %d\n", rank); 
    return 0;
}
