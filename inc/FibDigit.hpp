#ifndef FIBDIGIT_HPP
#define FIBDIGIT_HPP

#define null 0
#define MAXLIMIT 1023

struct node
{
	unsigned int data;
	node* next;
};

class FibDigit
{
private:

	/**
	 * @brief The parameter that defines the size of fibonacci sequence
	 *
	 * 0 < length < 2^(9)
	 */
	unsigned int length;


	/**
	 * @brief Linked list data structure to store fibonacci sequence
	 */
	node* HEAD = null;

	/**
	 * @brief stack data structure to store fibonacci sequence
	 */
	node* TOP = null;

	/**
	 * @brief First three numbers of the sequence are already known
	 */
	unsigned int fib1, fib2, fib3;

	/**
	 * @brief Position holder for linked list
	 */
	unsigned int positions = 0;

protected:

	/**
	 * @brief Temporary dynamic array to hold the digits generated
	 */
	unsigned int* temparr = null;

	/**
	 * @brief value to hold the number of digits generated
	 */
	unsigned int count = 0;

public:

	/**
	 * Constructor
	 */
	FibDigit(unsigned int length = 0):
		length(length),
		fib1(0),
		fib2(1),
		fib3(1),
		positions(0)

{
		if(this->length > MAXLIMIT){
			this->length = MAXLIMIT;
		}
}

	/**
	 * De-constructor
	 */
	virtual ~FibDigit(void){}

	/**
	 * @brief To generate fionacci sequence
	 * @param void
	 * @return void
	 */
	virtual void genFibonacciSeq(void);

	/**
	 * @brief Removal of nth entry in original data structure (list)
	 * @param data value to be inserted
	 * @return void
	 */
	virtual void listnodeinsert(node** head, unsigned int data);

	/**
	 * @brief Removal of nth entry in original data structure (list)
	 * @param nth node to be deleted, should be with in positions value
	 * @return void
	 */
	virtual void listnodedelete(node** head, unsigned int n);

	/**
	 * @brief To return fionacci sequence before and after filtering
	 * @param void
	 * @return void
	 */
	virtual void listprint(node** head);

	/**
	 * @brief To return fionacci sequence before and after filtering
	 * @param data value to be inserted
	 * @return void
	 */
	virtual void push(unsigned int data);

	/**
	 * @brief To return fionacci sequence before and after filtering
	 * @param void
	 * @return void
	 */
	virtual void pop();

	/**
	 * @brief Perform some statistical analysis
	 * @param void
	 * @return void
	 */
	virtual void runStatistics(void);

	/**
	 * @brief return the value of positions variable
	 * @param void
	 * @return unsigned int
	 */
	unsigned int getpositions(void){return positions;}

	/**
	 * @brief return the value of positions variable
	 * @param void
	 * @return unsigned int
	 */
	unsigned int getcount(void){return this->count;}

	/**
	 * @brief return the value of positions variable
	 * @param void
	 * @return unsigned int
	 */
	void setlength(unsigned int length)
	{
		if(length > MAXLIMIT)
		{
			this->length = MAXLIMIT;
		}
		else
		{
			this->length = length;
		}
	}

	/**
	 * @brief return the value of positions variable
	 * @param void
	 * @return unsigned int
	 */
	unsigned int getlength(void) {return this->length;}


};


#endif
