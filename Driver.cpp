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
	unsigned int Mrange = pidigit.getpositions();

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

	//Initialize random number generator
	srand(time(null));

	unsigned int minimum_number = 0;
	unsigned int maximum_number = M -1;

	// To generate filter array of size N and populate the array with random values ranging from 0 to M-1
	for(unsigned int i = 0; i<N; i++){
		filter[i] = rand() % (maximum_number + 1 - minimum_number) + minimum_number;
	}

	// Now lets delete the Duplicate elements from the array
	for(unsigned int i = 0; i<N; i++)
	{
		for(unsigned int j = i+1; j<N; j++)
		{
			if(filter[i] == filter[j])
			{
				for(unsigned int k = j; k< N; k++)
				{
					filter[k] = filter[k+1];
				}
				N--;
				j--;
			}
		}
	}

	printf("Size of Modified N is %d \n", N);

	// Filter the nodes from pi linked list
	for(unsigned int i =0; i<N; i++)
	{
		printf("%d ", filter[i]);
		pidigit.filterdata(filter[i]);
	}

	//Print Pi estimate
	printf("\n");
	pidigit.pidatatraversal(M);

	//Print statistics
	pidigit.runStatistics();


	return 0;

}
