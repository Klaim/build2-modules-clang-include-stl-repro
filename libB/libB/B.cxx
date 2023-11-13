module;
#include <ostream>
#include <stdexcept>

module B;

import A;

using namespace std;

namespace B
{
  void say_hello (ostream& o, const string& n)
  {
    return A::say_hello(o, n);
  }
}
