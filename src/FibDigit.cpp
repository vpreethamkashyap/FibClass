/* *********************************************************************************************************************
  included header files
***********************************************************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "FibDigit.hpp"

/* *********************************************************************************************************************
  class member functions
***********************************************************************************************************************/
void
FibDigit::genFibonacciSeq(void)
{

	listnodeinsert(fib1);
	listnodeinsert(fib2);
	while(fib1 + fib2 < length)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		listnodeinsert(fib3);
	}
}

void
FibDigit::listnodeinsert(unsigned int data)
{

	node* temp1 = HEAD;
	node* temp2 = (node*)malloc(sizeof(node));

	temp2->data = data;
	temp2->next = null;

	if(temp1 == null){
		HEAD = temp2;
		return;
	}

	while(temp1->next != null){
		temp1 = temp1->next;
	}

	temp1->next = temp2;

}

void
FibDigit::listnodedelete(unsigned int n)
{

	node* temp1 = HEAD;
	node* temp2 = null;

	if(n == 1){
		HEAD = temp1->next;
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
FibDigit::listprint()
{

	node* temp = HEAD;

	unsigned int nodecount =0;

	while(temp != null){
		printf("The data in the node %d is %d\n", ++nodecount, temp->data);
		temp = temp->next;
	}
}

void
FibDigit::push(unsigned int data)
{
	node* temp = (node*)malloc(sizeof(node));
	temp->data =data;
	temp->next = TOP;
	TOP = temp;
}

void
FibDigit::pop(void)
{
	node* temp = TOP;
	TOP = temp->next;
	free(temp);
	temp = null;
}


void
FibDigit::runStatistics()
{

	/*Convert the data in linked list to single digits*/
	node* temp = HEAD;
	unsigned int count = 0;
	unsigned int* temparr = (unsigned int*)malloc(length);

	while(temp != null){
		unsigned int number = temp->data;
		while(number > 0){
			unsigned char digit = number%10;
			number /= 10;
			push(digit);
		}
		while(TOP != NULL){
			 unsigned int digit = TOP->data;
			 pop();
			 temparr[count++] = digit;
		}
		temp = temp->next;
		temparr[count++] = 'e';
		count--;
	}

	printf("\n number of digits count = %d\n", count);

	unsigned int i =0;
	printf("{ ");
	while(temparr[i] != 'e'){
		printf("%d, ", temparr[i]);
		i++;
	}
	printf("}\n\n");

	printf("The histogram for the individual distribution of digits\n\n");

	for(i=0; i<count; i++){
		printf("%d \t\t %d \t\t", i, temparr[i]);
		for(unsigned int j=1; j<= temparr[i]; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf(" Mean value of all individual digits\n");

	unsigned int sum = 0;
	for(i=0; i<count; i++){
		sum += temparr[i];
	}

	unsigned int avg = (sum)/(count);

	printf(" Mean = %d", avg);

	printf("\n");

	printf(" Standard deviation of all individual digits\n");

	unsigned int diff;
	unsigned int diffsq;
	unsigned int sumdiffsq =0;

	for (i=0;i<count;i++) {
		diff = (temparr[i]-avg);
		diffsq = diff*diff;
		sumdiffsq = sumdiffsq + diffsq;
	}

	unsigned int stdev = sqrt(sumdiffsq/(count-1));

	printf(" Standard deviation = %d", stdev);
}
