#include <stdio.h>
#include <stdlib.h>
#include <time.h>

srand(time(0)); // ���� �õ� ����
int targetNumber = rand() % 100 + 1; // 1���� 100������ ���� ����
printf("���� ���ڸ� �����߽��ϴ�: %d\n", targetNumber); // �׽�Ʈ ���

int guess;
printf("���ڸ� �Է��ϼ���: ");
scanf("%d", &guess);
printf("�Է��� ����: %d\n", guess); // �׽�Ʈ ���

if (scanf("%d", &guess) != 1) {
    while (getchar() != '\n'); // �Է� ���� ����
    printf("��ȿ�� ���ڸ� �Է��ϼ���!\n");
}

char playAgain;
do {
    // ���� ���� ���� ����
    printf("������ �ٽ� �����Ͻðڽ��ϱ�? (y/n): ");
    while (getchar() != '\n'); // �Է� ���� ����
    scanf("%c", &playAgain);
} while (playAgain == 'y' || playAgain == 'Y');

int main() {
    printf("���� ���� ���ӿ� ���� ���� ȯ���մϴ�!\n");
    return 0;
}
