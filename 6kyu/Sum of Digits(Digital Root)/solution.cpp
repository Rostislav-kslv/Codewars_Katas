#include <math.h>

int s(int n){
  int sum = 0;
    int count = 0;
  int x = n;
    while((x/=10 )> 0){
    count++;  
    }
  
  for(int i = count; i > 0; i--){
    sum+= n / (int)pow(10, i);
    n %= (int)pow(10,i);
  }
  sum+=n;
  return sum;
}

int digital_root(int n)
{
    int sum = 0;
    sum = s(n);
    while(sum / 10 > 0){
      sum = s(sum);
    }
  return sum;

}
