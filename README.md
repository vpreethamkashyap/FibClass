# Data analysis

This is a sample project that demonstrates C++ inheritence and polymorphism. 

# The base class will perform the following operations
- Takes as a constructor parameter and ​ unsigned int <length> ​ , with 0 < ​ <length> ​ <
  2^10-1. The default constructor value for​ <length> ​ should be 0, if no argument is
  given.
- Has a method that generates a Fibonacci sequence to the size of ​ <length> ​ . The
  results of this operation should be stored in some sort of useful data structure
  that maintains ordering ( If the candidate is applying for an
  embedded/microcontroller programming position, please use a linked list).
- Has a method that enables the filtering (removal) of the n-th entry in the original
  data structure. This method should be able to be called multiple times with
  altering or having its result altered by previous calls of this method.
- Has a method to return the sequence before and after filtering.
- A statistics method to be run on the ​ digits ( ​ ​ digit i ​ s defined by each individual
  number the Fib sequence. For example 144, 233 should be 6 ​ digits ​ : 1,4,4,2,3,3.)
  that returns the following
- The total number of ​ digits ​ before and after filtering.
- A histogram giving the individual distribution of ​ digits ​ in the Fibonacci
  sequence before and after filtering
- The mean value of all individual ​ digits ​ before and after filtering.
- The standard deviation of all individual ​ digits ​ before and after filtering.

# The derived class will perform the following below operations

- Constructor can override ​ unsigned int <length>
- Has a method that estimates pi to ​ <length> ​ ​ digits ​ . Each ​ digit ​ of pi should be
  stored separately.
- Has a method that enables the filtering (removal) of every n-th ​ digit ​ in the pi
  estimate.
- Has a method to return the pi estimate as a float before and after filtering.
- Inherits the statistics described above, using ​ digits ​ from the pi estimate.
  
# The driver code perform the below operations

The program will generate a random array, ​ filter[] ​ , of size N of unordered integer random
numbers in the range {0..​ M-1 ​ }.
For each n in N, the program should do the following:
1. Filters ​ digits ​ of pi given by the sequence ​ filter[0], filter[1], ​ ..., ​ filter[n]
2. Print Pi estimate, to the precision of ​ M before and after filtering
3. Print the stats (count, histogram, mean, sigma) - before and after filtering.

