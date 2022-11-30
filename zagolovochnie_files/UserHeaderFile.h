#pragma once
#ifndef  USERHEADERFILE_H_INCLUDED
#define  USERHEADERFILE_H_INCLUDED

#include <stdio.h>
#include <locale.h>
int plus(int a, int b)
{
	int c = a + b;
	return c;
}
int minus(int a, int b)
{
	int c = a - b;
	return c;
}
int multiplication(int a, int b)
{
	int c = a * b;
	return c;
}
int division(int a, int b)
{
	int c = a / b;
	return c;
}
char* concaten(const char* str1, const char* str2)
{
	int i = 0, j = 0;
	char* result = malloc(strlen(str1) + strlen(str2) + 1); // оставьте место для нулевого ограничителя
	while (*str1) {
		result[i++] = *str1++; // Увеличьте только i единожды и "str1" один раз
	}
	while (*str2) {
		result[i + j++] = *str2++; // Увеличьте только i единожды и "str1" один раз
	}
	result[i + j] = '\0'; // Добавьте необходимый нуль-ограничитель
	return result;
}
int number_string(int number)
{
	char str[50];
	sprintf(str, "%d", number);
	printf("%s",&str);
}
int string_number()
{
	int i;
	char c [50];
	printf("Введите число: ");
	scanf("%s", &c);
	i = atoi(c);
	printf("%d", i);
}
#endif // USERHEADERFILE_H_INCLUDED
