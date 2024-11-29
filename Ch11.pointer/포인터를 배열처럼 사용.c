/*#include<stdio.h>

int main()
{
	int a[] = { 10, 20, 30, 40, 50 };
	int* p;
	p = a;

	for (int i = 0;i < 5;i++)
	{
		printf("%u ", &a[i]);
	}
	printf("\n");

	for (int j = 0;j < 5;j++)
	{
		printf("%u ", &p[j]);
	}
	printf("\n");
	p[1] = 1;
	p[2] = 2;
	for (int i = 0;i < 5;i++)
	{
		printf("%u ", &a[i]);
	}
	printf("\n");

	for (int j = 0;j < 5;j++)
	{
		printf("%u ", &p[j]);
	}
	printf("\n");
	return 0;
}

#include <stdio.h>

int main() {
	int a[] = { 10, 20, 30, 40, 50 };
	int* p;

	p = a;
	printf("%d %d %d\n", a[0], a[1], a[2]);
	printf("%d %d %d\n\n", p[0], p[1], p[2]);

	p[0] = 60;
	p[1] = 70;
	p[2] = 80;

	printf("%d %d %d\n", a[0], a[1], a[2]);
	printf("%d %d %d\n\n", p[0], p[1], p[2]);

	return 0;
}*/
