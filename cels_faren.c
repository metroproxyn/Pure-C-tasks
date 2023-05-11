#include <stdio.h>

/* print the Celsius and Fahrenheit temperature table for fahr = 0, 20, ..., 300 */

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /* table bottom */
	upper = 300; /* table top */
	step = 20; /* step */

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf ("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}