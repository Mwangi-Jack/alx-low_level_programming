# 0x1E. C -  Search Algorithms

## Search Algorithms
- A Search Algorithm is an algorithm used to solve a search problem
- The work to retrieve information stored within a particular data structure, or calculated in the search space of a problem domain, with either descrete or continous values
- The appropriate search algorithm to use often depend on the data structure beign searched
- Search algorithms can be classified based on their mechanisms of searching into three types of algorithms;

 * Linear Search Algorithm
	- Checks every record for the one associated with a target key in a linear fashion
* Binary Search Algorithm
	- Repeatedly target the center of the search space in half
	- This can be applied on data structures with a defined order
* Hashing Algorithm
	- Directly maps keys to records based on a hash function

- Algorithms are often evaluated by;
	* Their computational complexity (i.e the amount of resources required to run the algorithm)
	* Maximum theoritical runtime


## Space Complexity
- Space complexity of an algorithm is the total space taken by the algorithm with respect to the input size.
- Space complexity includes:
	* Auxiliary Space
		- The extraor temporary space used by an algorithm
	* Space used by input

## Linear VS Binary Search
- Linear Search works for both sorted and unsorted arrays while Binary Search only works for sorted arrays.
- Time complexity of linear Search is O(n) whil time complexity of Binary Search is log n
- Linear algorithm uses sequential access while Binary algorithm uses random access
