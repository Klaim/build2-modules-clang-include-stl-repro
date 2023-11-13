module;
#include <ostream>
#include <stdexcept>

module C;

import A;

using namespace std;


namespace C
{
  void say_hello (ostream& o, const string& n)
  {
    return A::say_hello(o, n);
  }
}
