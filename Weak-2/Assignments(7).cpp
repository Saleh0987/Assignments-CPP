// ============= Assignments(7) =============
#include <iostream>
using namespace std;

int num = 100;

int read()
{
  int num = 50;
  cout << num;
  return 0;
}

int play()
{
  // Change the following line to use the global variable "num"
  cout << num;
  return 0;
}

int main()
{
  play();
  return 0;
}
