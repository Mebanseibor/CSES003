# README
A Repository of the training that was attained during the summer term training of 2025

## Lessons day-wise
### 2025-06-16 (Monday)
- Introduction to git, github, vs-code and minGW

- Git tool:
    - Commands taught for git:
        - To clone a remote repository with the provided link onto your local machine
            ```bash
            git clone "https://github.com/user/repo.git"
            ```

        - To add all files to the staging phase
            ```bash
            git add .
            ```

        - To commit the staged files with a given message
            ```bash
            git commit -m "Message"
            ```

        - To push to commited files to a remote repository
            ```bash
            git push
            ```

    - Explained what the `.gitignore` file does
    - Explained what the `.git` folder does

- Revision on the basics:
    - Datatype
    - Variable
    - Garbage value
    - Range of the different datatypes
    - Hinted at `unsigned` datatypes to save space
    - const property of a variable
    - Demonstrated taking input and output from the user
    - Demonstrated conditional statements like if, if-else
    - Demonstrated prefix and postfix operators



### 2025-06-17 (Tuesday)
- Introduction about Loops:
    - For loops
    - Nested loops
    - Breaks and continue in nested loops
    - While loop
    - Do-while loop
    - Indefinite loops

- Patterns using nested loops

- Switch statements

- Functions:
    - Order of functions that are being called
    - Forward declaration
    - Return functions
    - Arguments and parameters
    - Signature of a function
    - Overloading
    - Scope
    - Default values


### 2025-06-18 (Wednesday)
- pass-by-value and pass-by-reference

- Poitners and addresses
    - Addresses of a variable
    - Pointers
    - Dereferencing a pointer
    - Pointer to a pointer: \*(\*pointer)

- Memory:
    - Stack memory:
        - For compile time
        - Pointers can point to heap memory
    - Heap Memory:
        - Bigger in size
        - For run time
    - Allocation and deallocation of memory
    - Dynamic allocation

- Arrays:
    - Index

- Intro to Generics

- Vectors:
    - Inserting
    - Accessing
    - Iterating
    - Removing

- Map:
    - Intro to maps
    - Keys and values
    - Operations:
        - Inserting
        - Updating
        - Displaying the size
        - Iterating throught the key and value pairs



### 2025-06-19 (Thursday)
- Classes and objects:
    - Data members
    - Member function
    - Size of an object
    - Access Specifiers
    - Operations:
        - Creating an object
        - Updating the value of an object
        - Calling member functions
        - Access private members
        - Constructor:
            - Default constructor
            - Parameterized constructor

- Arrays:
    - Operations:
        - Declaration
        - Initialization
        - Index and position
        - Iteration
        - Input from the user
        - Passing an array to a function



### 2025-06-20 (Friday)
- Array:
    - Finding the minimum and maximum numbers in an array
        - [Find the hightest altitude][wl-leetcode-1732]
    - Finding the sum of even and odd numbers in an array
    - Reverse and array
    - Find the second largest number in an array
    - Find the first repeating element
    - Check if the array is sorted or not
    - Find the occurence of ones and zeroes in an array
    - Find the number of elements that are greater than a given number



### 2025-06-23 (Monday)
- Array:
    - Linear Searching in an array
    - Sorting an array
        - Selection sort
        - Bubble sort
        - Insertion sort

- Introduction to time and space complexity:
    - Relation between time complexity and constants
    - Relation between time complexity and loops:
        - Between unnested loop
        - Between nested loops



### 2025-06-24 (Tuesday)
- Time and space complexity
    - Briefly evaluated: `O(n)`, `O(n^2)`, `O(n^3)`, `O(log(n))`, `O(n log(n))`, `O(2^n)`
    - Space complexity

- Searching:
    - Binary Search
        - Seaching the first orrurrence of an element in a sorted array
        - Seaching the last orrurrence of an element in a sorted array
        - Seaching the first and last orrurrence of an element in a sorted array
        - Seaching the total orrurrence of an element in a sorted array

- LeetCode:
    - [Two Sum][wl-leetcode-0001]
    - [Missing Number][wl-leetcode-0268]
    - [Best Time to Buy and Sell Stock][wl-leetcode-0121]



### 2025-06-25 (Wednesday)
- LeetCode:
    - [Maximum Subarray][wl-leetcode-0053]
    - [Remove Duplicates from Sorted Array][wl-leetcode-0026]
    - [Sort Colors][wl-leetcode-0075]
    - [Koko Eating Bananas][wl-leetcode-0875]



### 2025-06-26 (Thursday)
- 2D Arrays/Matrix:
    - Operations:
        - Declaring
        - Initiating
        - Taking input from the user
        - Sum of rows and columns
        - Traversal:
            - Row-wise
            - Column-wise
            - Wave traversal
            - Spiral traversal

- Recursion:
    - Practice problems:
        - Factorial of a given number
        - Printing natural numbers from n to 1


---



## Links
- Learn more about CPP:
    - Official Website: [c++][wl-cplusplus-website]


### LeetCode Questions:
- [Two Sum][wl-leetcode-0001]
- [Remove Duplicates from Sorted Array][wl-leetcode-0026]
- [Maximum Subarray][wl-leetcode-0053]
- [Sort Colors][wl-leetcode-0075]
- [Missing Number][wl-leetcode-0268]
- [Best Time to Buy and Sell Stock][wl-leetcode-0121]
- [Koko Eating Bananas][wl-leetcode-0875]
- [Find the hightest altitude][wl-leetcode-1732]


---



<!-- links -->
[wl-cplusplus-website]: https://cplusplus.com/
[wl-leetcode-0001]: https://leetcode.com/problems/two-sum/
[wl-leetcode-0026]: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
[wl-leetcode-0053]: https://leetcode.com/problems/maximum-subarray/
[wl-leetcode-0075]: https://leetcode.com/problems/sort-colors/
[wl-leetcode-0121]: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
[wl-leetcode-0268]: https://leetcode.com/problems/missing-number/
[wl-leetcode-0875]: https://leetcode.com/problems/koko-eating-bananas/
[wl-leetcode-1732]: https://leetcode.com/problems/find-the-highest-altitude/
