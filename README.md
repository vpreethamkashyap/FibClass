# Data analysis

This is a sample project that demonstrates C++ inheritence and polymorphism. Project is developed in eclipse c/c++ environment and linux x86 toolset. The compiled results are shared below.

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

# Brief

- I have used Monte Carlo method to estimate Pi as i felt it could give precise value for each digit.

- The maximum values the user could input for M and N, will be number of linked list nodes generated after estimaiting pi. 

- I have used Doxygen to generate documentation of class showing class relations and member access levels. 

- I have also supporting unit test google framework application for this project. 

# Runtime output of the project

The generated fibonocci sequence for value 1023

The data in the node 1 is 0
The data in the node 2 is 1
The data in the node 3 is 1
The data in the node 4 is 2
The data in the node 5 is 3
The data in the node 6 is 5
The data in the node 7 is 8
The data in the node 8 is 13
The data in the node 9 is 21
The data in the node 10 is 34
The data in the node 11 is 55
The data in the node 12 is 89
The data in the node 13 is 144
The data in the node 14 is 233
The data in the node 15 is 377
The data in the node 16 is 610
The data in the node 17 is 987

 number of digits count = 31
{ 1, 1, 2, 3, 5, 8, 1, 3, 2, 1, 3, 4, 5, 5, 8, 9, 1, 4, 4, 2, 3, 3, 3, 7, 7, 6, 1, 0, 9, 8, 7, }

The histogram for the individual distribution of digits

0 		 1 		*
1 		 1 		*
2 		 2 		**
3 		 3 		***
4 		 5 		*****
5 		 8 		********
6 		 1 		*
7 		 3 		***
8 		 2 		**
9 		 1 		*
10 		 3 		***
11 		 4 		****
12 		 5 		*****
13 		 5 		*****
14 		 8 		********
15 		 9 		*********
16 		 1 		*
17 		 4 		****
18 		 4 		****
19 		 2 		**
20 		 3 		***
21 		 3 		***
22 		 3 		***
23 		 7 		*******
24 		 7 		*******
25 		 6 		******
26 		 1 		*
27 		 0 		
28 		 9 		*********
29 		 8 		********
30 		 7 		*******

 Mean value of all individual digits
 Mean = 4
 Standard deviation of all individual digits
 Standard deviation = 2
 
The data in the node 1 is 4.0000000000000000000000000000000
The data in the node 2 is 4.0000000000000000000000000000000
The data in the node 3 is 2.0000000000000000000000000000000
The data in the node 4 is 2.6666666666666665186369300499791
The data in the node 5 is 3.0400000000000000355271367880050
The data in the node 6 is 3.1250000000000000000000000000000
The data in the node 7 is 4.0000000000000000000000000000000
The data in the node 8 is 2.6666666666666665186369300499791
The data in the node 9 is 2.0000000000000000000000000000000
The data in the node 10 is 4.0000000000000000000000000000000
The data in the node 11 is 2.6666666666666665186369300499791
The data in the node 12 is 2.0000000000000000000000000000000
The data in the node 13 is 3.0400000000000000355271367880050
The data in the node 14 is 3.0400000000000000355271367880050
The data in the node 15 is 3.1250000000000000000000000000000
The data in the node 16 is 3.1111111111111111604543566500070
The data in the node 17 is 4.0000000000000000000000000000000
The data in the node 18 is 2.0000000000000000000000000000000
The data in the node 19 is 2.0000000000000000000000000000000
The data in the node 20 is 2.0000000000000000000000000000000
The data in the node 21 is 2.6666666666666665186369300499791
The data in the node 22 is 2.6666666666666665186369300499791
The data in the node 23 is 2.6666666666666665186369300499791
The data in the node 24 is 2.6122448979591834650193504785420
The data in the node 25 is 2.6122448979591834650193504785420
The data in the node 26 is 3.3333333333333334813630699500209
The data in the node 27 is 4.0000000000000000000000000000000
The data in the node 28 is 4.0000000000000000000000000000000
The data in the node 29 is 3.1111111111111111604543566500070
The data in the node 30 is 3.1250000000000000000000000000000
The data in the node 31 is 2.6122448979591834650193504785420

 number of digits count = 31
The histogram for the individual distribution of digits

0 		 4.000000 		****
1 		 4.000000 		****
2 		 2.000000 		**
3 		 2.666667 		**
4 		 3.040000 		***
5 		 3.125000 		***
6 		 4.000000 		****
7 		 2.666667 		**
8 		 2.000000 		**
9 		 4.000000 		****
10 		 2.666667 		**
11 		 2.000000 		**
12 		 3.040000 		***
13 		 3.040000 		***
14 		 3.125000 		***
15 		 3.111111 		***
16 		 4.000000 		****
17 		 2.000000 		**
18 		 2.000000 		**
19 		 2.000000 		**
20 		 2.666667 		**
21 		 2.666667 		**
22 		 2.666667 		**
23 		 2.612245 		**
24 		 2.612245 		**
25 		 3.333333 		***
26 		 4.000000 		****
27 		 4.000000 		****
28 		 3.111111 		***
29 		 3.125000 		***
30 		 2.612245 		**

 Mean value of all individual digits
 Mean = 2.964106
 Standard deviation of all individual digits
 Standard deviation = 0.689572
 
Enter N such that max range could be 31 
31
Entered value of N is 31
Enter M such that max range could be 31 
31
Entered value of M is 31

Size of Modified N is 24 

The values to be filtered after removing the duplicates
18 24 15 2 20 26 6 19 3 1 5 27 17 7 14 22 21 9 29 30 23 10 11 28 

The data in the node 1 is 4.0000000000000000000000000000000
The data in the node 2 is 2.6666666666666665186369300499791
The data in the node 3 is 3.1250000000000000000000000000000
The data in the node 4 is 4.0000000000000000000000000000000
The data in the node 5 is 2.0000000000000000000000000000000
The data in the node 6 is 2.6666666666666665186369300499791
The data in the node 7 is 2.0000000000000000000000000000000
The data in the node 8 is 3.0400000000000000355271367880050
The data in the node 9 is 3.1250000000000000000000000000000
The data in the node 10 is 2.0000000000000000000000000000000
The data in the node 11 is 2.6666666666666665186369300499791
The data in the node 12 is 4.0000000000000000000000000000000
The data in the node 13 is 3.1111111111111111604543566500070
The data in the node 14 is 3.1250000000000000000000000000000
The data in the node 15 is 2.6122448979591834650193504785420

The histogram for the individual distribution of digits

0 		 4.000000 		****
1 		 2.666667 		**
2 		 3.125000 		***
3 		 4.000000 		****
4 		 2.000000 		**
5 		 2.666667 		**
6 		 2.000000 		**
7 		 3.040000 		***
8 		 3.125000 		***
9 		 2.000000 		**
10 		 2.666667 		**
11 		 4.000000 		****
12 		 3.111111 		***
13 		 3.125000 		***
14 		 2.612245 		**

 Mean value of all individual digits
 Mean = 2.942557
 Standard deviation of all individual digits
 Standard deviation = 0.681124
