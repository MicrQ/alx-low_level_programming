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
	int doy;
	int cum_days[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
	
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		for (int i = 2; i < 13; i++)
		{
			cum_days[i]++;
		}
	}
	doy = cum_days[month - 1] + day;
	printf("Day of the year: %d\n", doy);
	printf("Remaining days: %d\n", cum_days[12] - doy);
}

