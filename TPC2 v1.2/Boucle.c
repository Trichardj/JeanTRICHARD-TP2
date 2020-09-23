#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
    unsigned short int n = 0, count1 = 0, count2 = 0, count3 = 0;
    printf("Jusqu'a quel nombre voulez vous faire la somme ?\n");
    scanf_s("%hu", &n);
    int i;
	for (i = 0; i <= n; i++)
	{
		count1 = count1 + i;
	}
	printf("boucle for : %hu\n", count1);
	
    int j = 0;
    while (j <= n)
    {
        count2 = count2 + j;
        j = j + 1;
    }
    printf("boucle while : %hu\n", count2);

    int k = 0;
    do {
        count3 = count3 + k;
        k = k + 1;
    } while (k <= n);
    printf("boucle do while : %hu\n", count3);

    printf("unsigned short : min = 0 ; max = %u.\n", USHRT_MAX); //les limites du short

	system("pause");
	return(EXIT_SUCCESS);
}






