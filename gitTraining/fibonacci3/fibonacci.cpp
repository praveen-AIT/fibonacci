#include <iostream>
#include "fibonacci.h"

long long fibonacci(long long n){
  
  try{
    if(n==1 || n == 0){
      return n;
    }

    else if(n < 1){
      throw -1;
    }

    else{
      long long n1=0, n2=1, num, i;
      
      for(i=2; i<=n; i++){
        num=n1+n2;
        n1=n2;
        n2=num;
      }
      return n2;
    }
  }
  catch(long long){
    std::cerr << "Error: Please enter a number greater than equal to 1" << std::endl;
    exit(-1);
  }  
}
