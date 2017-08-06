/*

  The prime factors of 13195 are 5, 7, 13
  and 29. What is the largest prime factor
  of the number 600851475143?

*/
#include <iostream>
#include <vector>


int main(){

  long getNumb = 600851475143;

  std::cout<<"Factoring out "<<getNumb<<"\nStarting... \n";
  getNumb = getNumb/71;
  getNumb = getNumb/839;
  getNumb = getNumb/1471;
  std::cout<<"div1 "<<getNumb<<std::endl;
  for(long i = 3; i < getNumb/2; i+=2){
    if(getNumb%i==0){
      std::cout<<i<<" ";
      break;
    }
  }
  std::cout<<"done"<<std::endl;

}
