/*
�� ���� ��ǥ�� �Է¹޴´�.
������ �μ��� �̿��ؼ� ���� ��ȯ


#include<stdio.h>

int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept)
{
	*slope = (float)(y2 - y1) / (float)(x2 - x1);
	*yintercept = y1 - (*slope) * x1;
	return 0;
}

int main()
{
	float s = 0;
	float y = 0;

	int x1, y1, x2, y2;
	printf("ù ��° ��ǥ�� �Է��Ͻÿ�.\n");
	scanf_s("%d %d", &x1, &y1);
	printf("�� ��° ��ǥ�� �Է��Ͻÿ�.\n");
	scanf_s("%d %d", &x2, &y2);

	get_line_parameter(x1, y1, x2, y2, &s, &y);
	printf("����: %f, y����: %f\n", s, y);

	return 0;
}
*/