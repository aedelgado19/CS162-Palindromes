/* Author: Allison Delgado
 * Last updated 9/21/20
 * Palindromes is a program that reads in a character array
 * and determines whether or not this is a palindrome.
 */


#include <iostream>
using namespace std;

int isValid(char ch); 

int main() {

  char str[80];//original str
  char str2[80]; //will be backwards of original str
  char newStr[80]; //str formatted w/o spaces and all lower case
  cout << "Welcome to Palindromes! Enter input: " << endl;
  cin.get(str, 80);
  cin.get();
  int length = strlen(str);
  
  int c = 0; //counter variable

  //handle input (delete spaces, punctuation, etc)
  for (int i = 0; i < length; i++){
    if (isValid(str[i])){ //check if character is alphanumeric
	newStr[c] = str[i];
	c++;
    }
  }

  //format input to all lower case 
  for (int j = 0; j < c; j++){
    newStr[j] = tolower(newStr[j]);
  }
  length = c; //save c to variable length before it gets changed
  
  //reverse string
  for (int k = 0; k < length; k++){
    str2[k] = newStr[c-1]; //c = length, so -1 writes array backwards
    c--;
  }

  //compare strings using memcmp()
  if (memcmp(newStr, str2, length) == 0){ //compare memory
    cout << "Palindrome." << endl;
  } else {
    cout << "Not a Palindrome." << endl;
  } 
 return 0;
}

//checks if alphanumeric
int isValid(char ch){
  //check if num (48 = 0, 57 = 9)
  if (ch >= 48 && ch <= 57){
    return 1; //valid  
  }
  //check if letter (65 = A, 122 = z)
  else if (ch >= 65 && ch <=122){
    return 1; //valid
  }
  else {
    return 0; //not valid
  }
}




