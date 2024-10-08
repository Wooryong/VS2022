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
void probD(void);

// *** ���� 1 (�Ϸ�) ***
// 1-1. scanf �Լ��� �̿��Ͽ� ���ڿ��� �Է¹޾� �� ���ھ� �� ����Ͻÿ�
void prob1(void)
{
	char str[100]; // ���ڿ��� �Է¹��� char�� �迭 ����

	printf("���ڿ��� �Է��ϼ��� (��ҹ��� ȥ������) : ");
	scanf("%s", str); // scanf �Լ��� ���ڿ� �Է¹��� 

	int str_length = strlen(str); // �Է¹��� ���ڿ��� ����
	// printf("%d \n", str_length);

	printf("�Է¹��� ���ڿ� : \"");

	int i;
	for (i = 0; i < str_length; i++)
	{
		printf("%c", str[i]);

	}
	printf("\"  ==>  ����ó���� ���ڿ� : \"");

	for (i = 0; i < str_length; i++)
	{
		printf("%c ", str[i]); // �迭��� �ϳ��� ���, ��� �ø��� �ڿ� ���� ��ĭ��
	}
	printf("\"\n");

	// 1-2. ��ҹ��ڰ� ȥ�յ� �Է¹��� ���ڿ��� ��� �빮�ڷ� �ϰ� ��ȯ�ϱ�

	// char str[100]; // ���ڿ��� �Է¹��� char�� �迭 ����
	// scanf("%s", str); // scanf �Լ��� ���ڿ� �Է¹��� 

	// int str_length = strlen(str); // �Է¹��� ���ڿ��� ����
	// printf("%d \n", str_length);

	printf("�Է¹��� ���ڿ� : \"");
	// int i;
	for (i = 0; i < str_length; i++)
	{
		printf("%c", str[i]);
	}
	printf("\"  ==>  �빮�ڷ� �ϰ� ��ȯ�� ���ڿ� : \"");
	for (i = 0; i < str_length; i++)
	{
		if (str[i] >= 'a') // �� �迭��Ҹ��� ��ҹ��� �Ǻ� 
		{
			str[i] = str[i] - ('a' - 'A'); // �ҹ����� ��� �빮�ڷ� ��ȯ 
		}

		printf("%c", str[i]);
		// printf("%c ", str[i]);
	}
	printf("\"\n");
}

// *** ���� 2 (�Ϸ�) ***
// ���ڸ� �̿��� �Լ��� �׷���
// 2-1. Sin � + cos, tan
void prob2(void)
{
	const double Pi = 3.14; // pi = 3.141592
	double SIN_val, COS_val, TAN_val;
	int Coord_SIN, Coord_COS, Coord_TAN;
	int i, j;

	for (i = 0; i <= 360; i += 10) // 0 - 360������ 10�� ��������
	{
		SIN_val = sin((i * (Pi / 180))); // ������ Radian ������ 
		Coord_SIN = (int)((SIN_val / 0.01) / 4);
		// ���� ��ǥ�� ��ȯ (Value : -1 ~ 1 <-> ������ǥ : -25 ~ 25)

		printf("SIN(%4d) = %+.2lf", i, SIN_val);

		for (j = -30; j < Coord_SIN; j++) // �׷����� ©���� ���� ������  
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
		Coord_TAN = (int)((TAN_val / 0.01) / 200);
		// tan�Լ� ���� ������ ũ�Ƿ� ���� �ٸ��� 200���� ������

		printf("TAN(%4d) = %+.2lf", i, TAN_val);

		for (j = -30; j < Coord_TAN; j++)
		{
			printf(" ");
		}

		printf("*");
		printf("\n");
	}

	// 2-2. ���� �׷�����
	int rad;
	printf("���� �������� ����(����)�� �Է��ϼ��� : ");
	scanf("%d", &rad);
	//int rad = 10;
	int dia = 2 * rad;

	// int i, j;
	double x_val;
	int x_cor;
	for (i = 1; i < dia + 2; i++)
	{
		if ((i % dia) == 1)
		{
			for (j = -40; j < (rad); j++)
				printf(" ");

			printf("*");
		}
		else
		{
			x_val = sqrt((rad * rad) - ((i - (rad + 1)) * (i - (rad + 1))));
			// X^2 + Y^2 = R^2 <=> X^2 = R^2 - Y^2 <=> X = sqrt(R^2 - Y^2)
			x_cor = (int)((x_val / 0.01) / 40);
			for (j = -40; j < (rad - x_cor); j++)
				printf(" ");

			printf("*");

			for (j = 0; j < 2 * x_cor; j++)
				printf(" ");

			printf("*");
		}
		printf("\n");
	}
}

// *** ���� 3 (�Ϸ�) ***
// ASCII �ڵ�ǥ�� ����ϴ� ���α׷��� �ۼ��϶�.
// ASCII �ڵ�ǥ ����� : ���ڰ� / (Hex) / ����
// Ư������(ǥ�ۼ�)�� �̿��ؼ� ǥ �����
void prob3(void)
{
	int i;

	for (i = 0; i < 128; i++) // ASCII ���� �� 128���̹Ƿ�
	{
		if ((i != 0) && ((i % 3) == 0))
			// 1�ٿ� 3���� ����ϰ� �ٹٲ� 
			printf("\n");

		printf("|  %4c  |  %4X  |  %4d  ||", i, i, i);
		printf("\t");
	}
}

// *** ���� 4 (�Ϸ�) ***
// ������ �־��� ���ڿ����� ȸ���� �ִ� ��츦 �˻��Ͽ� �ִ� ȸ���� ���̸� ���Ͻÿ�
void prob4(void)
{
	char str[100];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);
	int str_len = strlen(str);

	int count = 1;
	int max_count = 0;

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
						max_count = count * 2 - 1;

					count = 1;
					break;
				}
			}
			// printf("i = %d \t Ȧ�� %d \n", i , max_count);
		}
		if (str[i] == str[i + 1])
		{
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
			// printf("i = %d \t ¦�� %d \n", i, max_count);
		}
	}
	if (max_count == 0)
		printf("�Էµ� ���ڿ����� ȸ���� �������� �ʽ��ϴ�.");
	else
		printf("�Էµ� ���ڿ����� �ִ� ȸ���� ���̴� %d �Դϴ�.", max_count);
}

// *** ���� 5 (�Ϸ�) ***
// �� ���� �Է¹޾� �ִ������� ����ϴ� ���α׷��� �ۼ��϶�
void prob5(void)
{
	int a, b;
	printf("�ִ������� ã�� �� ���ڸ� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b); // �ִ������� ã�� �� ���� �Է�

	// �Է��� �� ���� ����� ���� ã�´�.
	int i;
	printf("%d : ", a);
	for (i = 1; i < a; i++)
	{
		if ((a % i) == 0)
			printf("%d\, ", i);
	}
	printf("%d", a);

	printf("\n");

	printf("%d : ", b);
	for (i = 1; i < b; i++)
	{
		if ((b % i) == 0)
			printf("%d\, ", i);
	}
	printf("%d", b);

	// ������� �� ���� ��� ������ �������� ��
	// 1���� �����Ͽ� 1�� �����ϸ� ���� ���ڱ��� ������� ã�´�
	// ���������� ������Ʈ�� ������� �ִ������� �ȴ�.

	int small = a;
	if (a > b)
		small = b; // �� ���� �� ���� ���ڸ� ���� ã�´�.

	printf("\n");

	int GCF = 1; // �ִ����� (Greatest Common Factor) / �ʱⰪ�� 1�� ����
	for (i = 1; i <= small; i++)
	{
		if (((a % i) == 0) && ((b % i) == 0))
		{
			GCF = i; // ����� ã�� ������ ������Ʈ 
			// printf("%d ", GCF); 
		}
	}
	printf("�Էµ� �� ���� %d %d�� �ִ������� %d�Դϴ�.", a, b, GCF);
}

// *** ���� 6 (�Ϸ�) ***
//Ű����κ��� ������ ���ڸ� �Է¹ް� �� ���ں��� ���ĺ� ������ 
// ���� ��� ���ڸ� ����ϴ� ���α׷��� �ۼ��϶�.
void prob6(void)
{
	char ch;
	printf("�����ڸ� �Է����ּ��� : ");
	scanf("%c", &ch);

	int rank; // �Է��� ���ĺ��� ����
	if (ch >= 'a')
		rank = ch - 'a'; // �ҹ����� ��� a�� ��
	else
		rank = ch - 'A'; // �빮���� ��� A�� ��
	// printf("%d\n", index);

	int i, j;
	for (i = 0; i <= rank; i++) // 
	{
		for (j = 0; j <= rank - i; j++)
		{
			printf("%c", ch - rank + j);
			// a(A)���� ���ĺ� ������� / �� �ٸ��� �� ���� ���� ���ĺ��� ���
		}
		printf("\n");
	}
}

// *** ���� 7 (�Ϸ�) ***
// swap �Լ�
// �� ���� �Է¹޾� ������ ������ �����Ͽ� ����ϰ�, �� ������ ����
// ���� �ٲپ� �ٽ� �����ϰ� ����϶�
void prob7(void)
{
	int a, b;
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);

	printf("swap �� [0001] %d --- [0002] %d \n", a, b);

	int temp = a; // temp ������ �߰��Ű��� a, b�� �� Swap
	a = b;
	b = temp;

	printf("swap �� [0001] %d --- [0002] %d", a, b);
}

// *** ���� 8 (�Ϸ�) ***
// sorting �Լ�
// Ű����κ��� 3�� �̻��� ������ �Է¹޾� �迭�� �����Ͽ� ����ϰ�,
// �����ϴ� ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
void prob8(void)
{
	char str[100];
	int int_arr[100] = { 0 }; // �ʱⰪ ��� 0���� (�ӽð�)

	printf("������ ������ �������� �Է��ϼ��� (���� ������ ��������) : ");
	gets(str); // ������(���ڸ� ��)�� ����(����) ��θ� ������ �迭�� �޴´�.
	// scanf("%s", str);

	int i, j;
	int count = 0;
	// ������ �迭�� �迭��ҵ��� �ϳ��� �˻��Ͽ� 
	// ������ ��� ���ο� ������ �迭�� �޴´�.
	for (i = 0; i < 100; i++)
	{
		// printf("%d ", str[i]);
		if ((str[i] >= '0') && (str[i] <= '9')) // 0 ~ 9������ ����
		{
			int_arr[count] = str[i] - '0'; // �Է��� �������� �����´� 
			count++; // �Էµ� ������ ����
		}
	}

	// printf("\n %d \n", count);
	printf("�Է¼��� : ");

	for (i = 0; i < count; i++)
		printf("%d ", int_arr[i]);

	int temp = 0;
	// ������ �迭 ��ҳ��� ���Ͽ� ���� ������ ������ ���Բ� Swap 
	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (int_arr[j] < int_arr[i])
			{
				temp = int_arr[i]; // ���Ͽ� ū ���ڸ� temp�� �ӽ����� 
				int_arr[i] = int_arr[j];
				int_arr[j] = temp;
			}
		}
	}

	printf("\n���� �� : ");
	for (i = 0; i < count; i++)
		printf("%d ", int_arr[i]);
}

// *** ���� 9 (�Ϸ�) ***
// Ȧ���� �Ѱ� �Է¹޾ơ�*��ǥ �Ƕ�̵带 ����϶�
void prob9(void)
{
	int odd_num;
	printf("����(Ȧ��)�� �Է��Ͻÿ� : ");

	scanf("%d", &odd_num);

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

	// ���� 9 - A(�Ϸ�)
	// ���ڸ� �Ѱ� �Է¹޾� ������ ���·� ����϶�

	char ch;

	getchar(); // ���� ����
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &ch);

	int index;
	if (ch >= 'a')
		index = ch - 'a';
	else
		index = ch - 'A';

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

// *** ���� C ���� (�Ϸ�) ***
// 3���� �̻��� ���ĸ޴��� ������ �Է¹ް�
// �� �� 2������ �޴��� �ֹ��Ѵٰ� �� ��, ������ ��� �ֹ���
// �����Ͻÿ�.�� �� ����� ������ �Բ� �����Ͻÿ�.
void probC(void)
{
	// (1) �޴�, ���� �Է¹ޱ�
	char menu[10][20]; // �޴����� �Է¹��� �迭(2����) ����
	// �޴��� 10�� �̳�, ���ڼ��� 20�� �̳��� ����
	int price[10]; // ������ �Է¹��� �迭 ����

	int count = 0; // �� �Էµ� �޴����� ��
	while (1)
	{
		printf("�޴��� �Է��ϼ��� : ");
		scanf("%s", &menu[count]); // �޴����� ���ڿ��� ���·� �Է¹޾� ����
		//getchar(); // ���ۿ� ���๮�� ����

		printf("������ �Է��ϼ��� (�Է��� ����ġ�÷��� 0�� �Է����ּ���) : ");
		scanf("%d", &price[count]); // ������ �Է¹޾� ����
		// getchar(): // ���ۿ� ���๮�� ����

		// ���� 0 �Է� �� ���� Ż�� 
		// �޴����� �Է� ������ ������ ������� ���� (�ε���)
		if (price[count] == 0) break;

		count++;
	}

	// (2) �Է¹��� �޴���, ���� ���� (����)
	int i, j;
	for (i = 0; i < count; i++)
		printf("%s %d ", menu[i], price[i]); // �߰��� �������� ����

	printf("\n");

	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
			printf("%s + %s \t %d \n", menu[i], menu[j], price[i] + price[j]);
	}
}

// *** ���� D (�Ϸ�) ***
// 3���� �̻��� ���� ������ ����� �޴��� ǥ���ϰ�, �޴� ���ý�
// �ش� ����� �����ϵ��� ���α׷��� �����϶�
// Switch - case ������ ������ �Լ��� ����
void probD(void)
{
	printf("*** ���� ������ �Լ����� ��� *** \n");
	printf("==========================================\n");
	printf("1) ASCII �ڵ�ǥ�� ����ϱ� \n"); // prob3
	printf("2) ���ڿ����� ȸ�� �Ǻ� �� ȸ�� �ִ���� ���ϱ� \n"); // prob4
	printf("3) �� ���� �ִ����� ���ϱ� \n"); // prob5
	printf("4) Swap �Լ� - �� ������ ���� �ٲپ� ����ϱ� \n"); // prob7
	printf("5) �������� �Է¹޾� �������� �����Ͽ� ����ϱ� \n"); // prob8
	printf("0) ���� \n");
	printf("==========================================\n");

	int n;
	while (1)
	{
		printf("�����ϰ� ���� �Լ��� �������ּ��� : ");
		scanf("%d", &n);
		printf("\n");
		getchar(); // �Է� ���� ����
		switch (n)
		{
		case 1: prob3(); break;
		case 2: prob4(); break;
		case 3: prob5(); break;
		case 4: prob7(); break;
		case 5:prob8(); break;
		case 0: exit(0);
		}
		printf("\n\n");
	}
}
