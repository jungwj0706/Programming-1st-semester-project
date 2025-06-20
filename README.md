# Programming Project: 컴퓨팅 사고력을 활용한 문제 해결

> 본 프로젝트는 선린인터넷고등학교 2025년 1학기 프로그래밍 과제로,
> 
> 
> 컴퓨팅 사고력을 활용해서 순열 문제를 해결합니다.
> 

---

## 문제 설명

![문제 이미지](https://github.com/jungwj0706/Programming-1st-semester-project/blob/main/programming-project-question.png)

---

## 핵심 아이디어

- `a ~ e`로 만들 수 있는 모든 문자열은 5! = 120개입니다.
- '사전식 배열'이므로 왼쪽부터 하나씩 보며,**앞에 더 빠른 글자가 올 수 있는 경우를 모두 세어 더하면** 구하고자 하는 순번을 구할 수 있습니다.

---

## 실행 방법

사용 환경:

- Mac + VS Code + GCC
- Windows + VS Code + MinGW (또는 기타 GCC 환경)

### Mac 환경

1. Visual Studio Code 내 터미널 또는 Mac 터미널 열기
2. 아래 명령어 입력

```bash
gcc main.c -o programming-project
./programming-project

```

### Windows 환경

1. Visual Studio Code 내 터미널 또는 CMD 열기
2. 아래 명령어 입력

```bash
gcc main.c -o programming-project.exe
programming-project.exe

```
