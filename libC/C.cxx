module;
#include <godot_cpp/classes/sprite2d.hpp>
#include <ostream>
#include <stdexcept>


module C;

using namespace std;


namespace C
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
