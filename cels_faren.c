#include <stdio.h>

/* печать таблицы температур по Цельсию и Фаренгейту для fahr = 0, 20, ..., 300 */

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /* нижняя граница таблицы */
	upper = 300; /* верхняя граница таблицы */
	step = 20; /* шаг */

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf ("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}