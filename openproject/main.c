#include <stdio.h>
#include <stdlib.h>
#include <time.h>

srand(time(0)); // ���� �õ� ����
int targetNumber = rand() % 100 + 1; // 1���� 100������ ���� ����
printf("���� ���ڸ� �����߽��ϴ�: %d\n", targetNumber); // �׽�Ʈ ���

int main() {
    printf("���� ���� ���ӿ� ���� ���� ȯ���մϴ�!\n");
    return 0;
}
