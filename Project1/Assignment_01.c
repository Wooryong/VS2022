#include <stdio.h>
#include <string.h>
#include <math.h>

void prob1(void);
void prob2(void);
void prob3(void);
void prob4(void);
void prob5(void);
void prob6(void);
void prob7(void);
void prob8(void);
void prob9(void);
void probC(void);

int main()
{
	// (ctrl + k) + (ctrl + c) = 주석처리
	// (ctrl + k) + (ctrl + u) = 주석해제
		// prob1();
		// prob2();
		// prob3();
		prob4();
		// prob5();
		// prob6();
		// prob7();
		// prob8();
		// prob9();
		// probC();
	return 0;
}

// *** 문제 1 (완료) ***
// 1-1. scanf 함수를 이용하여 문자열을 입력받아 한 문자씩 띄어서 출력하시오
void prob1(void)
{
	char str[100]; // 문자열을 입력받을 char형 배열 선언

	printf("문자열을 입력하세요 (대소문자 혼합으로) : ");
	scanf("%s", str); // scanf 함수로 문자열 입력받음 

	int str_length = strlen(str); // 입력받은 문자열의 길이
	// printf("%d \n", str_length);

	printf("입력받은 문자열 : \"");

	int i;
	for (i = 0; i < str_length; i++)
	{
		printf("%c", str[i]);

	}

	printf("\"");
	printf("  ==>  ");
	printf("공백처리된 문자열 : \"");

	for (i = 0; i < str_length; i++)
	{
		printf("%c ", str[i]); // 배열요소 하나씩 출력, 출력 시마다 뒤에 공백 한칸씩
	}

	printf("\"");
	printf("\n");

	// 1-2. 대소문자가 혼합된 입력받은 문자열을 모두 대문자로 일괄 변환하기

		// char str[100]; // 문자열을 입력받을 char형 배열 선언
		// scanf("%s", str); // scanf 함수로 문자열 입력받음 

		// int str_length = strlen(str); // 입력받은 문자열의 길이
		// printf("%d \n", str_length);

	printf("입력받은 문자열 : \"");
	// int i;
	for (i = 0; i < str_length; i++)
	{
		printf("%c", str[i]);

	}

	printf("\"");
	printf("  ==>  ");
	printf("대문자로 일괄 변환된 문자열 : \"");

	for (i = 0; i < str_length; i++)
	{
		if (str[i] >= 'a') // 각 배열요소마다 대소문자 판별 
		{
			str[i] = str[i] - ('a' - 'A'); // 소문자일 경우 대문자로 변환 
		}

		printf("%c", str[i]);
		// printf("%c ", str[i]);
	}

	printf("\"");
	printf("\n");

}

// *** 문제 2 (완료) ***
// 문자를 이용한 함수의 그래프
// 2-1. Sin 곡선 + cos, tan
void prob2(void)
{

	const double Pi = 3.14; // pi = 3.141592

	double SIN_val, COS_val, TAN_val;
	int Coord_SIN, Coord_COS, Coord_TAN;

	int i, j;

	for (i = 0; i <= 360; i += 10) // 0 - 360도까지 10도 간격으로
	{
		SIN_val = sin((i * (Pi / 180))); // 각도는 Radian 단위로 
		Coord_SIN = (int)((SIN_val / 0.01) / 4); // 정수 좌표로 변환 (Value : -1 ~ 1 <-> 정수좌표 : -25 ~ 25)

		printf("SIN(%4d) = %+.2lf", i, SIN_val);

		for (j = -30; j < Coord_SIN; j++) // 그래프가 짤리지 않을 정도로  
		{
			printf(" ");
		}

		printf("*");
		printf("\n");
	}

	printf("\n\n");
	printf("============================================");
	printf("============================================");
	printf("\n\n");

	for (i = 0; i <= 360; i += 10)
	{
		COS_val = cos((i * (Pi / 180)));
		Coord_COS = (int)((COS_val / 0.01) / 4);

		printf("COS(%4d) = %+.2lf", i, COS_val);

		for (j = -30; j < Coord_COS; j++)
		{
			printf(" ");
		}

		printf("*");
		printf("\n");
	}

	printf("\n\n");
	printf("============================================");
	printf("============================================");
	printf("\n\n");

	for (i = 0; i <= 360; i += 10)
	{
		TAN_val = tan((i * (Pi / 180)));
		Coord_TAN = (int)((TAN_val / 0.01) / 100); // tan함수 값의 범위가 크므로 전과 다르게 100으로 나눠줌

		printf("TAN(%4d) = %+.2lf", i, TAN_val);

		for (j = -30; j < Coord_TAN; j++)
		{
			printf(" ");
		}

		printf("*");
		printf("\n");
	}

	// 2-2. 원을 그려보자
	// 입력으로 반지름, 원의 중심좌표 필요

	int rad = 10;
	// int rad;
	// printf("원의 반지름의 길이(정수)를 입력하세요 : ");
	// scanf("%d", &rad);
	int dia = 2 * rad;

	// int i, j;
	double x_val;
	int x_cor;
	for (i = 1; i < dia + 2; i++)
	{
		if ((i % dia) == 1)
		{
			for (j = -20; j < (rad); j++)
				printf(" ");

			printf("*");
		}
		else
		{
			x_val = sqrt((rad * rad) - ((i - (rad + 1)) * (i - (rad + 1))));
			x_cor = (int)((x_val / 0.01) / 40);
			for (j = -20; j < (rad - x_cor); j++)
				printf(" ");

			printf("*");

			for (j = 0; j < 2 * x_cor; j++)
				printf(" ");

			printf("*");
		}

		printf("\n");
	}
}

// *** 문제 3 (완료) ***
// ASCII 코드표를 출력하는 프로그램을 작성하라.
// ASCII 코드표 만들기 : 글자값 / (Hex) / 문자
// 특수문자(표작성)를 이용해서 표 만들기
void prob3(void)
{
	int i;

	for (i = 0; i < 128; i++) // ASCII 문자 총 128개이므로
	{
		if ((i != 0) && ((i % 3) == 0)) // 1줄에 3개씩 출력하고 줄바꿈 
			printf("\n");

		printf("|  %4c  |  %4X  |  %4d  ||", i, i, i);
		printf("\t");
	}
}

// *** 문제 4 (주석추가) ***
// 임의의 주어진 문자열에서 회문이 있는 경우를 검색하여 최대 회문의 길이를 구하시오
void prob4(void)
{
	//char str[100];

	//printf("문자열을 입력하세요 : ");
	//scanf("%s", str);

	//int str_length = strlen(str);

	//int i;
	////for (i = 0; i < str_length; i++)
	////{
	////	printf("%c", str[i]);
	////}

	//// 회문 여부 판별
	//int index = str_length / 2;
	//int count = 0;

	//for (i = 0; i < index; i++)
	//{
	//	if (str[i] == str[str_length - 1 - i])
	//		count++;
	//}

	//if (count == index)
	//	printf("입력한 문자열 \"%s\"은 회문이고 최대길이는 %d입니다.", str, index);
	//else
	//	printf("입력한 문자열 \"%s\"은 회문이 아닙니다.", str);

// ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
// 0. 문자열 입력 받을 문자형 배열 선언 > char str[100];
// 1. 문자열 입력 > scanf("%s", str);
// 2. 문자열의 길이 확인 > strlen(str);

// 회문 판별 알고리즘
// 문자열 길이 홀수일 때와 짝수일 때가 다르다?
	
	char str[100];

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	int str_len = strlen(str);

	// 처음으로 같은 문자 나오는 위치 확인 (회문의 판별 기준점 찾기)
	int count = 1;
	int max_count = 0;
	//int even_length = 0;
	//int odd_length = 0;
	int length = 0;
	int i;
	for (i = 0; i < str_len; i++)
	{
		if (str[i - 1] == str[i + 1])
		{
			count++;

			while (1)
			{
				if (str[i - count] == str[i + count])
					count++;
				else
				{
					if (max_count < count * 2 - 1)
						max_count = count * 2 -1;
					
					count = 1;
					break;
				}
					
			}
			// printf("i = %d \t 홀수 %d \n", i , max_count);
		}

		if (str[i] == str[i + 1])
		{
			// count++;

			while (1)
			{
				if (str[i - count] == str[(i + 1) + count])
					count++;
				else
				{
					if (max_count < count * 2)
						max_count = count * 2;

					count = 1;
					break;
				}

			}
			// printf("i = %d \t 짝수 %d \n", i, max_count);
		}

	}

	if (max_count == 0)
		printf("입력된 문자열에는 회문이 존재하지 않습니다");
	else
		printf("입력된 문자열에서 최대 회문의 길이는 %d입니다", max_count);

}

// *** 문제 5 (완료) ***
// 두 수를 입력받아 최대공약수를 출력하는 프로그램을 작성하라
void prob5(void)
{
	int a, b;
	printf("최대공약수를 찾을 두 숫자를 입력하세요 : ");
	scanf("%d %d", &a, &b); // 최대공약수를 찾을 두 숫자 입력

	// 입력한 두 수의 약수를 각각 찾는다.
	int i;
	printf("%d : ", a);
	for (i = 1; i <= a; i++)
	{
		if ((a % i) == 0)
			printf("%d ", i);
	}

	printf("\n");

	printf("%d : ", b);
	for (i = 1; i <= b; i++)
	{
		if ((b % i) == 0)
			printf("%d ", i);
	}

	// 공약수는 두 숫자 모두 나누어 떨어지는 수
	// 1부터 시작하여 1씩 증가하며 작은 숫자까지 공약수를 찾는다
	// 최종적으로 업데이트된 공약수가 최대공약수가 된다.

	int small = a;
	if (a > b)
		small = b; // 두 숫자 중 작은 숫자를 먼저 찾는다.

	printf("\n");

	int GCF = 1; // 최대공약수 (Greatest Common Factor) / 초기값은 1로 시작
	for (i = 1; i <= small; i++)
	{
		if (((a % i) == 0) && ((b % i) == 0))
		{
			GCF = i; // 공약수 찾을 때마다 업데이트 
			// printf("%d ", GCF); 
		}
	}

	printf("입력된 두 숫자 %d %d의 최대공약수는 %d입니다.", a, b, GCF);

}

// *** 문제 6 (완료) ***
//키보드로부터 임의의 문자를 입력받고 그 문자보다 알파벳 순위가 
// 낮은 모든 문자를 출력하는 프로그램을 작성하라.
void prob6(void)
{
	char ch;
	printf("영문자를 입력해주세요 : ");
	scanf("%c", &ch);

	int rank; // 입력한 알파벳의 순위
	if (ch >= 'a')
		rank = ch - 'a'; // 소문자인 경우 a와 비교
	else
		rank = ch - 'A'; // 대문자인 경우 A와 비교

	// printf("%d\n", index);

	int i, j;
	for (i = 0; i <= rank; i++) // 
	{
		for (j = 0; j <= rank - i; j++)
		{
			printf("%c", ch - rank + j); // a(A)부터 알파벳 순서대로 / 각 줄마다 더 낮은 순위 알파벳만 출력
		}

		printf("\n");
	}
}

// *** 문제 7 (완료) ***
// swap 함수
// 두 수를 입력받아 각각의 변수에 저장하여 출력하고, 두 변수의 값을
// 각각 바꾸어 다시 저장하고 출력하라
void prob7(void)
{
	int a, b;
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	printf("swap 전 [0001] %d --- [0002] %d \n", a, b);

	int temp = a; // temp 변수를 중간매개로 a, b의 값 Swap
	a = b;
	b = temp;

	printf("swap 후 [0001] %d --- [0002] %d", a, b);

}

// *** 문제 8 (완료) ***
// sorting 함수
// 키보드로부터 3개 이상의 정수를 입력받아 배열에 저장하여 출력하고,
// 증가하는 순서로 정렬하여 출력하는 프로그램을 작성하라.
void prob8(void)
{
	char str[100];
	int int_arr[100] = { 0 }; // 초기값 모두 0으로 (임시값)

	printf("순서를 정렬할 정수들을 입력하세요 (숫자 구분은 공백으로) : ");
	gets(str); // 정수들(한자리 수)과 띄어쓰기(공백) 모두를 문자형 배열로 받는다.
	// scanf("%s", str);

	int i, j;
	int count = 0;
	// 문자형 배열의 배열요소들을 하나씩 검사하여 
	// 숫자인 경우 새로운 정수형 배열로 받는다.
	for (i = 0; i < 100; i++)
	{
		// printf("%d ", str[i]);
		if ((str[i] >= '0') && (str[i] <= '9')) // 0 ~ 9까지의 숫자
		{
			int_arr[count] = str[i] - '0'; // 입력한 정수들을 가져온다 
			count++; // 입력된 정수의 개수
		}
	}

	// printf("\n %d \n", count);
	printf("\n");

	printf("입력순서 : ");

	for (i = 0; i < count; i++)
	{
		printf("%d ", int_arr[i]);
	}

	int temp = 0;
	// 정수형 배열 요소끼리 비교하여 작은 정수가 앞으로 오게끔 Swap 
	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (int_arr[j] < int_arr[i])
			{
				temp = int_arr[i]; // 비교하여 큰 숫자를 temp에 임시저장 
				int_arr[i] = int_arr[j];
				int_arr[j] = temp;
			}

		}
	}

	printf("\n");

	printf("정렬 후 : ");
	for (i = 0; i < count; i++)
	{
		printf("%d ", int_arr[i]);
	}

}

// *** 문제 9 (완료) ***
// 홀수를 한개 입력받아‘*’표 피라미드를 출력하라
void prob9(void)
{
	int odd_num;
	printf("숫자(홀수)를 입력하시오 : ");

	scanf("%d", &odd_num);

	printf("\n");

	int line_num = (odd_num / 2) + 1;
	// printf("%d \n", line_num);

	int i, j;
	for (i = 1; i <= line_num; i++)
	{
		for (j = 1; j <= odd_num; j++)
		{
			if (j <= line_num - i)
				printf(" ");
			else if (j >= line_num + i)
				break;
			else
				printf("*");
		}

		printf("\n");

	}

	printf("\n");

	// 문제 9 - A(완료)
	// 문자를 한개 입력받아 다음의 형태로 출력하라

	char ch;

	getchar(); // 버퍼 비우기

	printf("문자를 입력하시오 : ");
	scanf("%c", &ch);

	int index;
	if (ch >= 'a')
		index = ch - 'a';
	else
		index = ch - 'A';

	printf("\n");

	//	int i, j;
	for (i = 0; i < index + 1; i++)
	{
		for (j = 0; j < index + 1; j++)
		{
			if (j < i)
				printf(" ");
			else
				printf("%c", ch - index + i);
		}

		printf("\n");
	}

}

// *** 문제 C 순열 (완료) ***
// 3가지 이상의 음식메뉴와 가격을 입력받고
// 이 중 2가지의 메뉴를 주문한다고 할 때, 가능한 모든 주문을
// 나열하시오.또 그 경우의 가격을 함께 나열하시오.
void probC(void)
{
	// (1) 메뉴, 가격 입력받기

	char menu[10][20]; // 메뉴명을 입력받을 배열(2차원) 정의
	// 메뉴는 10개 이내, 글자수도 20자 이내로 가정
	int price[10]; // 가격을 입력받을 배열 정의

	int count = 0; // 총 입력된 메뉴들의 수
	while (1)
	{
		printf("메뉴를 입력하세요 : ");
		scanf("%s", &menu[count]); // 메뉴명을 문자열의 형태로 입력받아 저장
		//getchar(); // 버퍼에 개행문자 제거

		printf("가격을 입력하세요 (입력을 끝마치시려면 0을 입력해주세요) : ");
		scanf("%d", &price[count]); // 가격을 입력받아 저장
		// getchar(): // 버퍼에 개행문자 제거

		// 가격 0 입력 시 루프 탈출 
		// 메뉴명은 입력 받지만 앞으로 사용하지 않음 (인덱스)
		if (price[count] == 0) break;

		count++;
	}

	// (2) 입력받은 메뉴명, 가격 나열 (선택)
	int i, j;
	for (i = 0; i < count; i++)
	{
		printf("%s %d ", menu[i], price[i]); // 중간에 공백으로 구분
	}

	printf("\n");

	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			printf("%s + %s \t %d", menu[i], menu[j], price[i] + price[j]);
			printf("\n");
		}
	}
}

// *** 문제 D (진행 중) ***
// 3가지 이상의 수행 가능한 기능을 메뉴로 표시하고, 메뉴 선택시
// 해당 기능을 수행하도록 프로그램을 구성하라
// Switch - case 문으로 실행할 함수를 선택
//void probD(void)
//{
//	printf(" \n");
//	printf(" \n");
//
//	int n;
//	scanf("%d", &n);
//
//	switch (n)
//	{
//	case 1: prob1(); break;
//	case 2: prob2(); break;
//	case 3: prob3(); break;
//	default: printf(" "); break;
//	}
//
//}

// *** 문제 E ***
// 작성한 프로그램을 재사용 가능한 형태의 함수로 정의하고 MyHeader.h 파일을 이용하여
// 저장하고 활용할 수 있도록 작성하세요