/*출력하는 함수의 반복 루프도, 밝기를 올려주는 함수의 반복 루프도 모두 포인터를 활용해보자*/
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
			p++; //처음에 *p++라고 적었다. 1만큼 뒤에 있는 주소를 참조할 거면 굳이 간접 참조 연산자를 붙일 필요가 없다. 나중에 오류 발생하기 쉬움.
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