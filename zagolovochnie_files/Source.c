#include <stdio.h>
#include <locale.h>
#include "UserHeaderFile.h"


int main()
{
	int exit = 1;
	while (exit == 1)
	{
		setlocale(LC_ALL, "Rus");
		int select;
		printf_s("\n\n 1 - �������� �����\n 2 - ��������� �����\n 3 - ��������� �����\n 4 - ������� �����\n 5 - ����������� ���� ���������� �� ������ ��������\n 6 - �������������� ����� � ������ \n 7 - ������ � �����\n");
		printf("�������� �������: ");
		scanf_s("%d", &select);
		int a, b;
		char c1, c2;
		char* answer = concaten("Hello", "World");
		switch (select)
		{
		case 1:
			printf_s("\n\n������� � � b: ");
			scanf_s("%d%d", &a, &b);
			printf_s("�����: %d", plus(a, b));
			break;
		case 2:
			printf_s("\n\n������� � � b: ");
			scanf_s("%d%d", &a, &b);
			printf_s("�����: %d", minus(a, b));
			break;
		case 3:
			printf_s("\n\n������� � � b: ");
			scanf_s("%d%d", &a, &b);
			printf_s("�����: %d", multiplication(a, b));
			break;
		case 4:
			printf_s("\n\n������� � � b: ");
			scanf_s("%d%d", &a, &b);
			printf_s("�����: %d", division(a, b));
			break;
		case 5:
			printf("\n\n%s", answer);
			free(answer);
			break;
		case 6:
			printf_s("\n\n������� ����� ��� �������������� � ������: ");
			scanf_s("%d", &a);
			number_string(a);
			break;
		case 7:
			string_number();
			break;
		default:
			printf("\n\n������� ����� ������� ��� ���!\n\n");
			break;
		}
		printf("\n\n�� ������ ����������?\n1-��\n0-���\n");
		scanf_s("%d", &exit);
	}
	return 0;

}
