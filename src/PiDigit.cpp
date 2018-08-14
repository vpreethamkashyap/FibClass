#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
#include <limits>
#include <iostream>
*/

#include <math.h>

#include "PiDigit.hpp"

void
PiDigit::estimatePi(void)
{
	printf("\n");

	unsigned int i =0;
	while(FibDigit::temparr[i] != 'e')
	{

		// Estimate pi for individual digit ranges, using Monte carlo approach !

		unsigned int interval = FibDigit::temparr[i]; i++;
		double rand_x, rand_y, origin_dist, pi;
		unsigned int circle_points = 0, square_points = 0;

		// Initializing rand()
		srand(time(null));

		// Total random number generated = possible x values * possible y values
		for(unsigned int j=0; j< (interval * interval); j++)
		{
			//Randomly generated x and y values
			rand_x = double(rand() % (interval + 1)) / interval;
			rand_y = double(rand() % (interval + 1)) / interval;

			//Distance between (x,y) from the origin
			origin_dist = rand_x * rand_x + rand_y * rand_y;

			//checking if(x,y) lies inside the define circle with R=1
			if(origin_dist <=1)
			{
				circle_points++;
			}

			//Total number of points generated
			square_points++;

			// estimated pi after this iteration
			pi = double(4 * circle_points) / square_points;

		}

		listnodeinsert(&HEAD, pi);
		positions++;
	}
	listprint(&HEAD);

	this->runStatistics();

	/*double d = 3.14159265358979;
	std::cout.precision(17);
	std::cout << "Pi: " << std::fixed << d << std::endl;*/
}

void
PiDigit::runStatistics(void)
{
	printf("\n number of digits count = %d\n", count);

	mynode* temp = HEAD;

	unsigned int i =0;

	printf("The histogram for the individual distribution of digits\n\n");

	for(i=0; i<positions && temp != null; i++){
		printf("%d \t\t %f \t\t", i, temp->data);
		for(unsigned int j=1; j<= (unsigned int)temp->data; j++){
			printf("*");
		}
		printf("\n");
		temp = temp->next;
	}
	printf("\n");

	printf(" Mean value of all individual digits\n");

	temp = HEAD;
	double sum = 0.0f;
	for(i=0; i<positions && temp != null; i++){
		sum += temp->data;
		temp = temp->next;
	}

	double avg = (double)(sum)/(positions);

	printf(" Mean = %f", avg);

	printf("\n");

	printf(" Standard deviation of all individual digits\n");

	temp = HEAD;
	double diff;
	double diffsq;
	double sumdiffsq =0.0f;

	for (i=0;i<positions && temp != null ;i++) {
		diff = (temp->data - avg);
		diffsq = diff*diff;
		sumdiffsq = sumdiffsq + diffsq;
		temp = temp->next;
	}

	double stdev = sqrt(sumdiffsq/(positions - 1.0f));

	printf(" Standard deviation = %f", stdev);

}

void
PiDigit::listnodeinsert(mynode** head, double data)
{
	mynode* temp1 = *head;
	mynode* temp2 = (mynode*)malloc(sizeof(mynode));

	temp2->data = data;
	temp2->next = null;

	if(temp1 == null){
		*head = temp2;
		return;
	}

	while(temp1->next != null){
		temp1 = temp1->next;
	}

	temp1->next = temp2;

}

void
PiDigit::listnodedelete(mynode** head, unsigned int n)
{
	mynode* temp1 = *head;
	mynode* temp2 = null;

	if(n == 1){
		*head = temp1->next;
		free(temp1);
		temp1 = null;
		return;
	}

	for(unsigned int i = 0; i < n-2; i++){
		temp1 = temp1->next;
	}

	temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
	temp2 = null;
}

void
PiDigit::listprint(mynode** head)
{
	mynode* temp = *head;

	unsigned int nodecount =0;

	while(temp != null){
		printf("The data in the node %d is %f\n", ++nodecount, temp->data);
		temp = temp->next;
	}

}
