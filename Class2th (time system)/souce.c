#include <stdio.h>

void shuffle(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;
		int random = array[seed];
		array[seed] = array[i];
		array[i] = random;
	}
}

int main()
{

#pragma region 의사 난수
	// 0 ~ 32767 사이의 의사 난수 값을 반환하는 함수입니다.

	// UTC 기준으로 1970년 1월 1일 0시 0분 0초부터 경과된
	// 시간을 초(sec)로 반환하는 함수입니다.

	// srand : rand()가 사용할 초기값(seed)을 설정하는 함수입니다.

	// srand(time(NULL));

	// int random = rand();

	// random = rand() % 10;

	// random = rand() % 10 + 1;

	// printf("%d\n", random);

#pragma endregion

#pragma region 셔플 함수
	// int * array == int array[]

	// int list[] = { 1, 2, 3, 4, 5 , 6, 7, 8, 9, 10};
	// 
	// int size = sizeof(list) / sizeof(list[0]);
	// 
	// shuffle(list, size);
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("변경전 값 : %d\n", list[i]);
	// }
	// printf("\n\n");




#pragma endregion

#pragma region Guess the number
	srand(time(NULL));


	int computer = rand() % 50 + 1;

	int answer = 0;

	int life = 5;

	printf("숫자 맞추기 게임 시작합니다.\n");
	printf("%d", computer);
	while (life > 0)
	{
		printf("Life : %d\n", life);

		printf("enter your guess : ");

		scanf_s("%d", &answer);

		printf("\n");

		if (answer == computer)
		{
			break;
		}
		else if (answer < computer)
		{
			life--;
			printf("더 높은 숫자입니다.\n");

		}
		else if (answer > computer)
		{
			life--;
			printf("더 낮은 숫자입니다.\n");
		}
		printf("\n");
	}

	if (life <= 0)
	{
		printf("D E F E A T");
	}
	else
	{
		printf("V I C T O R Y");
	}


#pragma endregion


	return 0;
}