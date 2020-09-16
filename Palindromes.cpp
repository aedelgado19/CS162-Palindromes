/* Author: Allison Delgado
 * Last updated 9/16/20
 * Palindromes is a program that reads in a character array
 * and determines whether or not this is a palindrome.
 */


#include <iostream>
using namespace std;

int main() {

  cout << "Hello World!" << endl;



  return 0;
}


/*
Program: 
cout welcome messages
create a bool about isGoodSoFar
cin a character array

for loop to put it in an array, watch for null characters to find length
for i in range of 0-length-1 separate for loop to create a second array
for i in range length-1 to 0, write new array 
for i in range of 0-length-1, compare slot a of array 1 to slot a of array 2
^ inside this for loop, if equal, set isGoodSoFar to true, else set to false

if isGoodSoFar is true, cout palindrome
else cout not a palindrome

 */
