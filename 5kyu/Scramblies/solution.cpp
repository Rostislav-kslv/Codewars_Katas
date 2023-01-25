#include<string>
#include<algorithm>

bool scramble(const std::string& s1, const std::string& s2){
  std::string tmp1 = s1;
  std::string tmp2 = s2;
  std::sort(tmp1.begin(), tmp1.end());
  std::sort(tmp2.begin(), tmp2.end());
  auto it = tmp1.begin();
  for(auto ch : tmp2){
    it = std::find(it, tmp1.end(), ch);
    if(it == tmp1.end()){
      return false;
    }else{
      it++;
    }
  }
  return true;
}
