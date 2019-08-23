#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
  vector <string> foo;
  for (int i = 0; i < argc; i++) {
    foo.push_back(argv[i]);
  }
  cout << foo.size();
  return 0;
}
