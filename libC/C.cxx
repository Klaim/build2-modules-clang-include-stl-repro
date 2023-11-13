#include <C.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

import A;

namespace C
{
  void say_hello (ostream& o, const string& n)
  {
    return A::say_hello(o, n);
  }
}
