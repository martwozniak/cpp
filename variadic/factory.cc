#include <iostream>
#include <string>
#include <vector>

template <typename T, typename ...Args>
auto
factory(Args ...args)
{
  return T{args...};
}

int
main()
{
  std::cout << factory<std::string>("Hello!") << std::endl;
  auto p = factory<std::vector<int>>(1, 2, 3);
}
