#include <stdio.h>
#include <stdlib.h>
#include <time.h>

srand(time(0)); // 랜덤 시드 설정
int targetNumber = rand() % 100 + 1; // 1부터 100까지의 랜덤 숫자
printf("랜덤 숫자를 생성했습니다: %d\n", targetNumber); // 테스트 출력

int main() {
    printf("숫자 추측 게임에 오신 것을 환영합니다!\n");
    return 0;
}
