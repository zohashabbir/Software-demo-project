# Software-demo-project
This is my first github repository
<br>
author-zoha shabbir
#Stack-based String Reversal and Palindrome Check in C++
Overview
This C++ program demonstrates two important operations on strings using a stack data structure:

String Reversal: Reverses a given string using a custom Stack class.
Palindrome Check: Determines if a given string is a palindrome by pushing each character onto a stack and comparing the reversed version to the original string.
The program uses basic stack operations such as push(), pop(), and peek() to achieve these tasks.
#Features
Stack Implementation: The stack is implemented using a dynamic array with standard stack operations like push, pop, peek, and isEmpty.
String Reversal: A string is pushed onto the stack and then popped to reverse the order of characters.
Palindrome Check: The program checks if a string reads the same forward and backward using the stack.
Code Explanation
Stack Class
push(char c): Adds a character to the stack.
pop(): Removes and returns the top character from the stack.
isEmpty(): Returns whether the stack is empty.
peek(): Returns the top element without removing it from the stack.
Main Functions
reverseString(char str[], int n): Reverses the string using the stack.
isPalindrome(const string& str): Checks if the input string is a palindrome by comparing it with its reverse.
Requirements
A C++ compiler like g++.
Basic knowledge of stack data structures.
Future Enhancements
Add support for different types of data in the stack.
Optimize palindrome check for case-insensitive comparisons.
Implement additional string manipulation features using stacks.
