#include <libB/B.hxx>

#include <libA/A.hxx>

using namespace std;

namespace B
{
  void say_hello (ostream& o, const string& n)
  {
    return A::say_hello(o, n);
  }
}
