// ============= Assignments(8) =============
#include <iostream>

int main()
{
 // Output Needed
 // 2
 // 6
 // 14
 // 30
 // 62
 // 126

 // For loop
 for (int i = 2; i <= 126; i = i * 2 + 2)
 {
  std::cout << i << '\n';
 }

 std::cout << "============\n";

 // While loop
 int i = 2;

 while (i <= 126)
 {
  std::cout << i << '\n';

  i = i * 2 + 2;
 }

 return 0;
}
