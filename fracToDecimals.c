#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int randomNum();

int main()
{
    srand(time(NULL));
    int i, randNum1, randNum2;
    float solution;
    FILE *fp;
    FILE *fp2;

    for (i = 0; i < 100; i = i + 1)
    {
	randNum1 = randomNum();
	randNum2 = randomNum();
	solution = randNum1 / randNum2;

	fp = fopen("fracToDecimals.html", "a");
	fp2 = fopen("fracToDecimalsSol.html", "a");

	fprintf(fp, "<h3>Problem %d</h3>\n", i + 1);
	fprintf(fp, "<p>Rewrite as a decimal rounded");	
	fprintf(fp, " to two decimal places: <sup>%d</sup>/<sub>%d</sub></p>\n", randNum1, randNum2);
	fprintf(fp2, "<h3>Problem %d</h3>\n<p>Solution: %1.2f</p>\n", i + 1, solution);
    }

    fclose(fp);
    fclose(fp2);

    return(0);
}

int randomNum()
{
    int randomNumber;
    randomNumber = rand() % 20 + 1;
    return randomNumber;
}
