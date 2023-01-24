unsigned int countBits(unsigned long long n){
  int counter = 0;
  while(n > 0){
    if(n%2 == 0)
      n/=2;
    if (n%2 == 1){
      counter++;
      n/=2;
    }
  }
  return counter;
}
