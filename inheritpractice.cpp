#include <iostream>
using namespace std;
class PARENT
{
public:
  void multi(int a, int b)
  {
    cout << "multiply" << a * b;
  }
};
class SON : public PARENT
{

public:
  void add(int a, int b)
  {
    cout << "add" << a + b;
  }
};
class GRANDSON : public SON
{
public:
  void hello()
  {
    cout << "acess";
  }
};
int main()
{
  GRANDSON obj;
  int x, y;
  cin >> x >> y;
  obj.multi(x, y);
  obj.add(x, y);
  obj.hello();

  return 0;
}