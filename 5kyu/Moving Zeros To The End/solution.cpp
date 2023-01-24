#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> v;
  int counter = 0;
  for(int i = 0; i < (int)input.size(); i++){
    if(input[i] == 0){
      counter++;
    }
    else v.push_back(input[i]);
  }
  for(int i = 1; i  <= counter; i++) v.push_back(0);
  return v;
}
