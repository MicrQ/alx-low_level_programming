#include <stdio.h7>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int days_[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i = 0;

	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		days_[1] = 29;
	}
	while (i < month - 1)
	{
		day += days_[i];
	}
	printf("Dayvof the year: %d\n", day);
	printf("Remaining days: %d\n", (days_[1] == 29 ? 366 : 365) - day);
}
