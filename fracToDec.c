#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));

	int i, random1, random2;
	float solution;

	FILE *fp;
	FILE *fp2;
	fp = fopen("fracToDec.html", "a");
	fp2 = fopen("fracToDecSol.html", "a");

	for (i = 0; i < 100; i++) {
		random1 = rand() % 20 + 1;
		random2 = rand() % 20 + 1;
		float float1 = random1 * 1.0;
		float float2 = random2 * 1.0;
		solution = float1 / float2;

		fprintf(fp, "<h3>Problem %d</h3>\n", i + 1);
		fprintf(fp, "<p><sup>%d</sup>/<sub>%d</sub></p>\n", random1, random2);
		fprintf(fp2, "<h3>Problem %d</h3>\n", i + 1);
		fprintf(fp2, "<p>Solution: %1.2f</p>\n", solution);
	}

	fclose(fp);
	fclose(fp2);

	return(0);
}
