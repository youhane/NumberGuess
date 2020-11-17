#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num, a, ctr = 0;	//a = user input, ctr = banyak percobaan
    srand(time(0)); /* bikin random */
    num = rand() % 100 + 1; /* antara 1 sampe 100 */

    printf("Guess My Number Game\n\n");

    do
    {
        printf("Enter a guess between 1 and 100 : ");
        scanf("%d", &a);
        ctr++;

        if (a > num)
        {
            printf("Lower!\n\n");
        }
        else if (a < num)
        {
            printf("Higher!\n\n");
        }
        else
        {
            printf("\nThat's it! You got it in %d tries!\n", ctr);
        }
		
    }while (a != num);

    return 0;
}
