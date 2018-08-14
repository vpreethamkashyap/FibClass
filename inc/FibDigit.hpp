#ifndef FIBDIGIT_HPP
#define FIBDIGIT_HPP

#define null 0

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
	unsigned int positions;

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
		if(length > 1023){
			length = 1023;
		}
	}

	/**
	 * Deconstructor
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
	virtual void listnodeinsert(unsigned int data);

	/**
	 * @brief Removal of nth entry in original data structure (list)
	 * @param nth node to be deleted, should be with in positions value
	 * @return void
	 */
	virtual void listnodedelete(unsigned int n);

	/**
	 * @brief To return fionacci sequence before and after filtering
	 * @param void
	 * @return void
	 */
	virtual void listprint(void);

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
};


#endif
