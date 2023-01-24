#include <string>

char make_ch(char a, char b, bool& inc){
  char ch = a + b - '0';
    if(inc){
      ch++;
      inc = false;
    }
    if(ch > '9'){
      ch -= 10;
      inc = true;
    }
  return ch;
}

std::string add(const std::string& a, const std::string& b) {
  std::string res;
  bool inc = false;
  int ai = a.size() - 1, bi = b.size() - 1;
  while(ai >= 0 && bi >= 0){
    res += make_ch(a[ai], b[bi], inc);
    ai--;
    bi--;
  }
  if(a.size() > b.size()){
    for(int i = ai; i >= 0; i--){
      res += make_ch(a[i], '0', inc);
    }
  }
  else if(a.size()<b.size()){
    for(int i = bi; i >= 0; i--){
      res += make_ch(b[i], '0', inc);
    }
  }
  if(inc) res += '1';
  std::reverse(res.begin(), res.end());
  return res;
}
