// ============= Assignments(15) =============
#include <iostream>

int main()
{
 int help_num = 4;
 int nums[] = {2, 4, 5, 6, 10};

 // Output Needed
 // "2 + 10 = 12"
 // "4 + 6 = 10"
 // "5 + 5 = 10"
 // "6 + 4 = 10"
 // "10 + 2 = 12"

 for (int i = help_num - help_num; i <= help_num; i++)
 {
  // Read the note in the start of file
  std::cout
      << nums[i] << " + " << nums[help_num - i]
      << " = " << nums[i] + nums[help_num - i] << '\n';
 }

 return 0;
}
