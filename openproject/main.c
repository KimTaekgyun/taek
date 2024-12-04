#include <stdio.h>
#include <stdlib.h>
#include <time.h>

srand(time(0)); // 랜덤 시드 설정
int targetNumber = rand() % 100 + 1; // 1부터 100까지의 랜덤 숫자
printf("랜덤 숫자를 생성했습니다: %d\n", targetNumber); // 테스트 출력

int guess;
printf("숫자를 입력하세요: ");
scanf("%d", &guess);
printf("입력한 숫자: %d\n", guess); // 테스트 출력

if (scanf("%d", &guess) != 1) {
    while (getchar() != '\n'); // 입력 버퍼 비우기
    printf("유효한 숫자를 입력하세요!\n");
}

char playAgain;
do {
    // 기존 게임 로직 실행
    printf("게임을 다시 시작하시겠습니까? (y/n): ");
    while (getchar() != '\n'); // 입력 버퍼 비우기
    scanf("%c", &playAgain);
} while (playAgain == 'y' || playAgain == 'Y');

int main() {
    printf("숫자 추측 게임에 오신 것을 환영합니다!\n");
    return 0;
}
