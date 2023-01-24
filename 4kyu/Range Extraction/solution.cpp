#include <string>
#include <vector>
 
std::string range_extraction(std::vector<int> v) {
  std::string result;
  int count = 0;
  
  for(int i = 0; i < v.size() - 1; i++){
    if(v[i+1] - v[i] == 1){
      count++;
      if(count == 1 && i == 0){
        result += std::to_string(v[i]);
      }
    }
    else{
      if(count == 0 && i != 0){
        result += ',' + std::to_string(v[i + 1]);
        continue;
      }
      if(count == 1){
        result += ',';
      }else if (count >= 2){
        result += '-';
      }
      result += std::to_string(v[i]) + "," + std::to_string(v[i + 1]);
      count = 0;
    }
  }
  if(count == 1){
        result += ',' + std::to_string(v[v.size() - 1]);
  }else if (count >= 2){
        result += '-' + std::to_string(v[v.size() - 1]);
  }
  
  
  return result;
}
