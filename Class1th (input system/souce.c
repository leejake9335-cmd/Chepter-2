#include <stdio.h>
#include <windows.h>	

#define SIZE 10

int main()
{
#pragma region 포인터 배열
	const char* texts[SIZE] = { NULL, };

	texts[0] = "반갑습니다";
	texts[1] = "안녕하세요";
	texts[2] = "저는 sbs 아카데미 학생입니다";
	texts[3] = "저는 sbs 아카데미 강사입니다";
	texts[4] = "안녕하세요 선생님 잘 부탁드립니다";
	texts[5] = "잘 해봅시다";
	texts[6] = "네";
	texts[7] = "오늘 배울 내용은 포인터 배열입니다";
	texts[8] = "포인터 배열";
	texts[9] = "간단하게 설명하자면";

	// for (int i = 0; i < SIZE; i++)
	// {
	// 	printf("%s\n", texts[i]);
	// }

	// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태

	// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태

	// 0x8000 : 이전에 누른 적이 없고 호출 시점에는 눌려있는 상태

	// 0x8001 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태
	int i = 0;
	while (i < SIZE)
	{
		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{

			if (i % 2 == 0)
			{
				printf("[학생]   %s\n", texts[i]);
			}
			else
			{

				printf("[강사]   %s\n", texts[i]);
			}
			i++;
		}
	}

	printf("대화가 끝났습니다.\n");
#pragma endregion


	return 0;
}