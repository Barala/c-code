#include <stdio.h>
 
class Base {
public:
    int x;
};
 
struct Derived : Base { }; // is equilalent to struct Derived : public Base {}
 
int main()
{
  Derived d;
  d.x = 20; // works fine becuase inheritance is public
  printf("%d\n",d.x);
  getchar();
  return 0;
}