/* Author: Allison Delgado
 * Last updated 9/16/20
 * Palindromes is a program that reads in a character array
 * and determines whether or not this is a palindrome.
 */


#include <iostream>
using namespace std;

int main() {

  //get user input and account for null characters
  bool isGoodSoFar = true;
  char str[80];
  char str2[80];
  cout << "Welcome to Palindromes! Enter input: " << endl;
  cin.get(str, 80);
  cin.get();
  int length = strlen(str);
  
  cout << length << endl;

  
  //format input to all lower case 
  for (int i = 0; i < length; i++){
    str[i] = tolower(str[i]);
 
    //ALLY REMOVE ALL SPACES HERE!! LOOK AT ME !! HERE!
  }

  //reverse string
  int count = length;
  for (int j = 0; j < length; j++){
    str2[j] = str[count-1]; //count = length, so -1 writes array backwards
    count--;
  }

  //compare strings using strcmp()
  if (strcmp(str, str2) == 0){
    cout << "This is a Palindrome!" << endl;
  } else {
    cout << "This is not a Palindrome." << endl;
  }
  
  



  return 0;
}


/*
Program: 
cout welcome messages
create a bool about isGoodSoFar
cin a character array
formulate input (delete spaces,  make to lowercase)

for i in range strlen to 0, write new array (backwards) 
strcomp(the 2 strings)
else cout not a palindrome

 */
