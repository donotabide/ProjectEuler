#include <iostream>
#include <vector>
#include <stdio.h>

int main(){

  int digit, rev=0;
  int n, num, palin=0;
  for(int i=999; i >= 100; i--){
    for(int j=999; j>=100; j--){
      num=i*j;
      n = num;
      do{
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
      } while (num != 0);

      printf("%dx%d=%d rev: %d\n", i, j, n, rev);
      if(n==rev && palin < n){
        palin=n;
        break;
      }
      rev = 0;
    }
  }
  printf("Largest Palindrome: %d\n",palin);
}
