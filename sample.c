#include<stdi0.h>
class A

{
  virtual foo (int i=0){
     cout<<"A"<<i;
}

class B
{
  virtual foo (int i=1){
     cout<<"B"<<i;
}


void foo(B &a)
{ 
 a.foo();
}


int main()
{
 A a;

 foo(a);
}


