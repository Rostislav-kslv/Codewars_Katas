#include <list>
#include <math.h>
#include <iostream>

using namespace std;

int last_digit(std::list<int> array) {
  if(array.empty()) return 1;
  long long result = 1;
  while(!array.empty()){
    int power;
    int base;
    
    if(result < 4){
      power = result;
    }
    else {
      power = result % 4 + 4;
    }

    if(array.back() < 20){
      base = array.back();
    }
    else{
      base = array.back() % 20 + 20;
    }
    array.pop_back();

    result = pow(base, power);
  }
  return result % 10;
}
