#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int numbers(int n) {
  int count = 0;
  while (n > 0) {
    n /= 10;
    count++;
  }
  return count;
}

std::string incrementString(const std::string &str) {
  std::string s;
  std::string nums;
  int count = 0;
  int zeroes = 0;

  for (int i = str.size() - 1; i >= 0; i--) {
    if (!isdigit(str[i]))
      break;
    nums += str[i];
    count++;
  }

  std::reverse(nums.begin(), nums.end());

  for (auto c : nums) {
    if (c != '0')
      break;
    zeroes++;
  }

  for (int i = 0; i < str.size() - count; i++) {
    s += str[i];
  }

  if (nums.empty())
    s += '1';
  else {
    int tmp = atoi(nums.c_str());
    tmp++;
    if (numbers(tmp) > (count - zeroes))
      zeroes--;

    for (int i = 0; i < zeroes; i++)
      s += '0';
    s += std::to_string(tmp);
  }
  return s; 
}
