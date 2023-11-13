module;

#include <ostream>
#include <stdexcept>

module A;

using namespace std;

namespace A
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
