#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ���� ���� ���� �Լ�
void playGame(int maxAttempts) {
    srand(time(0)); // ���� ���� ������ ���� �õ�
    int targetNumber = rand() % 100 + 1; // 1���� 100������ ���� ����
    int guess;
    int attempts = 0;

    printf("���� ���� ������ �����մϴ�!\n");
    printf("1���� 100������ ���ڸ� ���纸����!\n");

    // ���� ����
    while (attempts < maxAttempts) {
        printf("���ڸ� �Է��ϼ���: ");
        if (scanf("%d", &guess) != 1) { // �Է� ����
            while (getchar() != '\n'); // �Է� ���� ����
            printf("��ȿ�� ���ڸ� �Է��ϼ���!\n");
            continue;
        }

        attempts++;

        if (guess == targetNumber) {
            printf("�����մϴ�! �����Դϴ�!\n");
            return;
        }
        else if (guess < targetNumber) {
            printf("�� ū ���ڸ� �Է��ϼ���.\n");
        }
        else {
            printf("�� ���� ���ڸ� �Է��ϼ���.\n");
        }
    }

    // �õ� Ƚ�� �ʰ�
    printf("��ȸ�� ��� �����߽��ϴ�. ������ %d�����ϴ�.\n", targetNumber);
}

int main() {
    const int maxAttempts = 5; // �ִ� �õ� Ƚ��
    char playAgain;

    do {
        playGame(maxAttempts); // ���� ����
        printf("������ �ٽ� �����Ͻðڽ��ϱ�? (y/n): ");
        while (getchar() != '\n'); // �Է� ���� ����
        scanf("%c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("������ �����մϴ�. �����մϴ�!\n");

    return 0;
}
