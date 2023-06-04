#include <iostream>

using namespace std;

template <typename ...Args>
void foo()
{
  cout << __PRETTY_FUNCTION__ << endl;
  cout << sizeof...(Args) << endl;
}

int
main()
{
  foo<>();
  foo<int>();
  foo<bool, double>();
}
