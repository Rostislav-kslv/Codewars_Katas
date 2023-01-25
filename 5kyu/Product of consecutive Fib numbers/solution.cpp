#include <vector>

typedef unsigned long long ull;

class ProdFib
{
public:
  static ull Fibon(int n){
   ull prev = 0;
   ull next = 1;
    if(n == 0) return 0;
    if(n == 1) return 1;
    for(int i = 2; i <= n; i++){
      ull tmp = prev;
      prev = next;
      next = next + tmp;
    }
    return next;
  }
  
  static std::vector<ull> productFib(ull prod){
    std::vector<ull> result;
    int n = 0;
    while(true){
      if(Fibon(n)*Fibon(n+1) == prod){
        result.push_back(Fibon(n));
        result.push_back(Fibon(n+1));
        result.push_back(true);
        return result;
      }
      if(Fibon(n)*Fibon(n+1) > prod){
        result.push_back(Fibon(n));
        result.push_back(Fibon(n+1));
        result.push_back(false);
        return result;
      }
      n++;
    }
  }
};
