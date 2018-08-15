#ifndef PIDIGIT_HPP
#define PIDIGIT_HPP

#include "FibDigit.hpp"

class PiDigit : public FibDigit
{
protected:

	struct mynode{

		double data;
		mynode* next;
	};

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
	mynode* HEAD = null;

	/**
	 * @brief Position holder for linked list
	 */
	unsigned int positions = 0;

public:

	/**
	 * Constructor
	 */
	PiDigit(unsigned int length = 0):
		FibDigit(length),
		length(length),
		positions(0)
{
		FibDigit::genFibonacciSeq();
		FibDigit::runStatistics();
}

	/**
	 * De-constructor
	 */
	virtual ~PiDigit(void){}

	/**
	 * @brief To estimate pi to <length> digits.
	 * @param void
	 * @return void
	 */
	virtual void estimatePi(void);

	/**
	 * @brief
	 * @param data value to be inserted
	 * @return void
	 */
	virtual void listnodeinsert(mynode** head, double data);

	/**
	 * @brief
	 * @param nth node to be deleted, should be with in positions value
	 * @return void
	*/
	virtual void listnodedelete(mynode** head, unsigned int n);

	/**
	 * @brief
	 * @param void
	 * @return void
	*/
	virtual void listprint(mynode** head, unsigned int precision);

	/**
	 * @brief Perform some statistical analysis
	 * @param void
	 * @return void
	 */
	virtual void runStatistics(void);

	/**
	 * @brief Perform some statistical analysis
	 * @param void
	 * @return void
	 */
	unsigned int getpositions(void){return this->positions;}

	/**
	 * @brief Perform some statistical analysis
	 * @param void
	 * @return void
	 */
	void filterdata(unsigned int n) {listnodedelete(&HEAD, n);}

	/**
	 * @brief Perform some statistical analysis
	 * @param void
	 * @return void
	 */
	void pidatatraversal(unsigned int precision) {listprint(&HEAD, precision);}
};

#endif
