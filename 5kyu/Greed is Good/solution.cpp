#include <vector>
#include <algorithm>

int score(const std::vector<int>& dice) {
  int result = 0;
  int d[6] = {0};
  for(auto el : dice){
    d[el-1]++; 
  }
  result = d[0]/3*1000 + d[0]%3*100 + d[1]/3*200 + d[2]/3*300 + d[3]/3*400 + d[4]/3*500 + d[4]%3*50 + d[5]/3*600;
  return result; 
}
