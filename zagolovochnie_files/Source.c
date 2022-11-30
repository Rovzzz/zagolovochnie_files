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
		printf_s("\n\n 1 - Сложение чисел\n 2 - Вычитание чисел\n 3 - Умножение чисел\n 4 - Деление чисел\n 5 - Объединения двух указателей на массив символов\n 6 - Преобразования числа в строку \n 7 - Строку в число\n");
		printf("Выберите задание: ");
		scanf_s("%d", &select);
		int a, b;
		char c1, c2;
		char* answer = concaten("Hello", "World");
		switch (select)
		{
		case 1:
			printf_s("\n\nВведите а и b: ");
			scanf_s("%d%d", &a, &b);
			printf_s("Ответ: %d", plus(a, b));
			break;
		case 2:
			printf_s("\n\nВведите а и b: ");
			scanf_s("%d%d", &a, &b);
			printf_s("Ответ: %d", minus(a, b));
			break;
		case 3:
			printf_s("\n\nВведите а и b: ");
			scanf_s("%d%d", &a, &b);
			printf_s("Ответ: %d", multiplication(a, b));
			break;
		case 4:
			printf_s("\n\nВведите а и b: ");
			scanf_s("%d%d", &a, &b);
			printf_s("Ответ: %d", division(a, b));
			break;
		case 5:
			printf("\n\n%s", answer);
			free(answer);
			break;
		case 6:
			printf_s("\n\nВведите число для преобразования в строку: ");
			scanf_s("%d", &a);
			number_string(a);
			break;
		case 7:
			string_number();
			break;
		default:
			printf("\n\nВведите номер задания еще раз!\n\n");
			break;
		}
		printf("\n\nВы хотите продолжить?\n1-да\n0-нет\n");
		scanf_s("%d", &exit);
	}
	return 0;

}
