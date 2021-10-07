#include <iostream>

#include <libmy/my.hxx>

int main (int argc, char* argv[])
{
  using namespace std;

  if (argc < 2)
  {
    cerr << "error: missing name" << endl;
    return 1;
  }
  my::something();

  cout << "Hello, " << argv[1] << '!' << endl;

}
