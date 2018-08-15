/* *********************************************************************************************************************
  included header files
***********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "FibDigit.hpp"
#include "PiDigit.hpp"


/* *********************************************************************************************************************
  start of main()
***********************************************************************************************************************/
int main (void)
{
	PiDigit pidigit(1023);
	pidigit.estimatePi();

	unsigned int Nrange = pidigit.getpositions();

	unsigned int Mrange = pidigit.getcount();

	// The user input values for M and N should be with in Mrange and Nrange respectively

	printf("\nEnter N such that max range could be %d \n", Nrange);
	unsigned int N = 0;
	scanf("%d", &N);
	printf("Entered value of N is %d\n", N);
	if(N > Nrange){
		printf("Range of N exceeded No operations will be performed");
	}

	printf("Enter M such that max range could be %d \n", Mrange);
	unsigned int M = 0;
	scanf("%d", &M);
	printf("Entered value of M is %d\n", M);
	if(M > Mrange){
		printf("Range of M exceeded No operations will be performed");
	}

	unsigned int* filter = (unsigned int*)malloc(N);

	srand(time(null));

	unsigned int minimum_number = 0;
	unsigned int maximum_number = M -1;

	for(unsigned int i = 0; i<N; i++){
		filter[i] = rand() % (maximum_number + 1 - minimum_number) + minimum_number;;
	}
	for(unsigned int i = 0; i<N; i++){
		printf("%d ", filter[i]);
	}

	return 0;

}
