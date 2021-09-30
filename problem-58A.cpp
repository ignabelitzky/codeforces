#include <iostream>
#include <string>
 
int main(int argc, char **argv) {
  std::string s = "", subString = "hello";
  std::cin >> s;
  int j = 0;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == subString[j]) {
      ++j;
    }
  }
  if (j == 5) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}
