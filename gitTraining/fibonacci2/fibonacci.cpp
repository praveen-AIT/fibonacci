#include <iostream>
#include "fibonacci.h"

int fibonacci(int n){
  
  try{
    if(n==1 || n == 0){
      return n;
    }

    else if(n < 1){
      throw -1;
    }

    else{
      return fibonacci(n-1) + fibonacci(n-2);
    }
  }
  catch(int){
    std::cerr << "Error: Please enter a number greater than equal to 1" << std::endl;
    exit(-1);
  }  
}
