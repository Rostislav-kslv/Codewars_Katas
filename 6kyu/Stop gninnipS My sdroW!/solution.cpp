#include <string>

std::string spinWords(const std::string &str)
{ 
  std::string tmp = "";
  std::istringstream iss(str);
  std::string token;
  
  while(iss>>token){
    if(token.size() >= 5){
      std::string s(token.rbegin(), token.rend());
      tmp += s + " ";
    }
    else tmp += token + " ";
  }
  tmp.pop_back();
  return tmp;
}
