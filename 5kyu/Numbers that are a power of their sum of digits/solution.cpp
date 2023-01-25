#include <vector>
#include <math.h>
#include <algorithm>

std::vector<unsigned long> m;
bool filled = false;



int sum(unsigned long c){
  int result = 0;
  while(c > 0){
    result += c % 10;
    c /= 10;
  }
  return result;
}

void fill(){
  
  for(int i = 2; i <= 99; i++){
    for(int j = 2; j <= 42; j++){
      unsigned long c = pow(i,j);
      if(i == sum(c)){
        m.push_back(c);
      }
    }
  }
    filled = true;
}

unsigned long powerSumDigTerm(unsigned int n) {
 if(!filled) fill();
  std::sort(m.begin(),m.end());
  return m[n -1];
}
