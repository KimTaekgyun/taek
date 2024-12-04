#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 숫자 추측 게임 함수
void playGame(int maxAttempts) {
    srand(time(0)); // 랜덤 숫자 생성을 위한 시드
    int targetNumber = rand() % 100 + 1; // 1부터 100까지의 랜덤 숫자
    int guess;
    int attempts = 0;

    printf("숫자 추측 게임을 시작합니다!\n");
    printf("1부터 100까지의 숫자를 맞춰보세요!\n");

    // 게임 루프
    while (attempts < maxAttempts) {
        printf("숫자를 입력하세요: ");
        if (scanf("%d", &guess) != 1) { // 입력 검증
            while (getchar() != '\n'); // 입력 버퍼 비우기
            printf("유효한 숫자를 입력하세요!\n");
            continue;
        }

        attempts++;

        if (guess == targetNumber) {
            printf("축하합니다! 정답입니다!\n");
            return;
        }
        else if (guess < targetNumber) {
            printf("더 큰 숫자를 입력하세요.\n");
        }
        else {
            printf("더 작은 숫자를 입력하세요.\n");
        }
    }

    // 시도 횟수 초과
    printf("기회를 모두 소진했습니다. 정답은 %d였습니다.\n", targetNumber);
}

int main() {
    const int maxAttempts = 5; // 최대 시도 횟수
    char playAgain;

    do {
        playGame(maxAttempts); // 게임 실행
        printf("게임을 다시 시작하시겠습니까? (y/n): ");
        while (getchar() != '\n'); // 입력 버퍼 비우기
        scanf("%c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("게임을 종료합니다. 감사합니다!\n");

    return 0;
}
