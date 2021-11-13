#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int randomNum, randomNum2, i;

    FILE *fp;
    FILE *fp2;
    fp = fopen("oneStep.html", "a+");
    fp2 = fopen("oneStepSol.html", "a+");

    for(i = 0; i < 100; i++)
    {
	randomNum = rand() % 20 + 1;
	randomNum2 = rand() % 20 + 1;

	fprintf(fp, "<h3>Problem %d</h3>\n<p>Solve for x: x + %d = %d\n", i, randomNum, randomNum2);
	fprintf(fp2, "<h3>Problem %d</h3>\n<p>Solution: %d\n", i, randomNum2 - randomNum);
	
    }

    fclose(fp);
    fclose(fp2);
    
    return(0);
}
