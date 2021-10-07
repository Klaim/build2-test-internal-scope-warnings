#include <libmy/my.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace my
{
  int say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    int x;

    o << "Hello, " << n << '!' << endl;

    return x;
  }
}
