#include <iostream>

int main()
{

  std::cout << INT8_MAX << std::endl;
  for (unsigned char ch = 0; ch <= INT8_MAX; ++ch)
  {
    std::cout << (int)ch << " -> " << ch << std::endl;
  }
  return 0;
}