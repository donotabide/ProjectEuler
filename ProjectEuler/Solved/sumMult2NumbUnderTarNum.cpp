#include <math.h>
#include <iostream>
#include <string>

int main(){
  int num1;
  int num2;
  int target;
  int sum = 0;
  std::cout << "Enter the first number"<< std::endl;
  std::cin >> num1;
  std::cout << "Enter the second number"<< std::endl;
  std::cin >> num2;
  std::cout << "Enter target number"<< std::endl;
  std::cin >> target;

  //std::cout << "The sum of the multiples of "<< num1 <<" or "<< num2<< " under "<< target;
  target--;
  while(target>0){
    if(target < num1 && target < num2){
      break;
    }

    // if(target % num1==0 && target % num2==0){
    //   sum+=target;
    // } else
    if (target % num1==0 || target%num2==0){
      sum+=target;
      std::cout << target << std::endl;
    }
    target--;

  }

  std::cout << " is: "<< sum << std::endl;

}
