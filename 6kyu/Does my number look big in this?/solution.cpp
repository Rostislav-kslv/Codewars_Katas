#include <string> 
#include <math.h>
#include <iostream>

bool narcissistic( int value ){
  std::string s = std::to_string(value);
  int res = 0;
  for(int i = 0; i < static_cast<int>(s.size()); i++){
    res += pow(static_cast<int>(s[i]) - 48, s.size());
  }
  return res == value;
}
