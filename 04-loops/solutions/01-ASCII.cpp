#include <iostream>
#include <iomanip>

int main()
{

  std::cout << INT8_MAX;
  for (unsigned char ch = 0; ch <= INT8_MAX; ++ch)
  {
    std::cout << (int)ch << " -> " << ch << std::endl;
  }
  return 0;
}