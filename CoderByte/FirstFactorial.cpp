#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num) { 

  if(num <= 0)
  {
    return 1;
  }
  else
  {
    return num * FirstFactorial(num-1);
  }
            
}

int main() { 
  
  // keep this function call here
  cout << FirstFactorial(gets(stdin));
  return 0;
    
}

/* Solved using Direct Recursion */
//algorithm is linear, running in O(n) time.

/*

This is the case because it executes once every 
time it decrements the value n, and it decrements 
the value n until it reaches 0, meaning the function 
is called recursively n times. This is assuming, of 
course, that both decrementation and multiplication 
are constant operations.


As there is no extra space taken during the 
recursive calls,the space complexity is O(N).


*/