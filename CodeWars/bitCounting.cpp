//Brian Kernighan’s Algorithm
unsigned int countBits(unsigned long long n){

  // base case 
    if (n == 0) 
        return 0; 
    else
        return 1 + countBits(n & (n - 1));
}
//Time Complexity: O(logn)
/*
Subtraction of 1 from a number toggles all the bits (from right to left)
 till the rightmost set bit(including the rightmost set bit). So if we
  subtract a number by 1 and do bitwise & with itself (n & (n-1)), we 
  unset the rightmost set bit. If we do n & (n-1) in a loop and count 
  the no of times loop executes we get the set bit count.
*/