#include <iostream>
#include "fibonacci.h"

int main(int argc, char *argv[]){
 
  int num;
  std::cout << "Enter a Number: ";
  std::cin >> num;

  std::cout << fibonacci(num) << std::endl;
}
