#include <vector>
#include <algorithm>

int findOdd(const std::vector<int>& numbers){
  std::vector v = numbers;
  sort(v.begin(), v.end());
  int counter = 0;
  for(int i = 0; i < v.size(); i++){
    for(int j = 0; j < v.size(); j++){
      if(v[i] == v[j]) counter++;
    }
    if(counter % 2 == 1) return v[i];
  }
}
