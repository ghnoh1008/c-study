/*����ϴ� �Լ��� �ݺ� ������, ��⸦ �÷��ִ� �Լ��� �ݺ� ������ ��� �����͸� Ȱ���غ���*/
#include <stdio.h>
#define COL 5

void show_video(int a[COL][COL])
{
	
	int* p = a;

	for (int i = 0;i < COL;i++) 
	{
		for (int j = 0;j < COL;j++)
		{
			printf("%d ", *p++);
		}
		printf("\n");
	}
	printf("\n");
}

void brightness_up(int a[COL][COL])
{
	int* p = a;

	for (int i = 0;i < COL;i++)
	{
		for (int j = 0;j < COL;j++)
		{
			*p += 10;
			p++; //ó���� *p++��� ������. 1��ŭ �ڿ� �ִ� �ּҸ� ������ �Ÿ� ���� ���� ���� �����ڸ� ���� �ʿ䰡 ����. ���߿� ���� �߻��ϱ� ����.
		}
	}
}

int main()
{
	int video_data[COL][COL] = 
	{
		{10, 20, 30, 40, 50},
		{11, 20, 30, 40, 50},
		{12, 20, 30, 40, 50},
		{13, 20, 30, 40, 50},
		{14, 20, 30, 40, 50}
	};

	show_video(video_data);
	brightness_up(video_data);
	show_video(video_data);

	return 0;
}