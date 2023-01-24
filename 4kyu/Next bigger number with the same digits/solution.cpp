std::vector<int> nextPermutation(std::vector<int> v)
{
    int n = v.size();
    if (n == 1)
        return {-1};
    int i = 0;
    for (i = n - 1; i > 0; i--) {
        if (v[i] > v[i - 1])
            break;
    }
    if (i != 0) {
        for (int j = n - 1; j >= i; j--) {
            if (v[i - 1] < v[j]) {
                std::swap(v[i - 1], v[j]);
                break;
            }
        }
    }
    else return {-1};
    reverse(v.begin() + i, v.end());
    return v;
}

std::vector<int> nums(long n){
  std::vector<int> v;
  while(n > 0){
    v.push_back(n%10);
    n /= 10;
  }
  std::reverse(v.begin(), v.end());
  return v;
}

long nextBigger(long n) {
    std::vector<int> res = nextPermutation(nums(n));
    long result = 0;
    for (int i = 0; i < res.size(); i++) {
        result = result * 10 + res[i];
    }
  return result;
}
