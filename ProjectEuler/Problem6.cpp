#include <stdio.h>
#include <math.h>
/*
  Find the difference between the
  sum of the squares of the first
  one hundred natural numbers and
  the square of the sum.
*/

int main(){
  long sumSq = 0;
  long sqSum = 0;

  for(int i = 0; i <= 100; i++){
    sumSq += pow(i, 2);
    sqSum += i;
  }

  sqSum = pow(sqSum, 2);
  long diff = sqSum-sumSq;

  printf("\nDifference: %ld-%ld=%ld\n\n", sqSum, sumSq, diff);

}
