/*
두 점의 좌표를 입력받는다.
포인터 인수를 이용해서 값을 반환


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
	printf("첫 번째 좌표를 입력하시오.\n");
	scanf_s("%d %d", &x1, &y1);
	printf("두 번째 좌표를 입력하시오.\n");
	scanf_s("%d %d", &x2, &y2);

	get_line_parameter(x1, y1, x2, y2, &s, &y);
	printf("기울기: %f, y절편: %f\n", s, y);

	return 0;
}
*/