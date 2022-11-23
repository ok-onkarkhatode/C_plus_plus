#include<iostream>
#include<conio.h>

class A
{
public:
  int a;
  A()
  {
    this -> a = 10;
  }
};

class B
{
public:
  int b;
  B()
  {
    this -> b = 20;
  }
};

class C
{
public:
  int c;
  C()
  {
    this -> c = 30;
  }
};

class D : public A, public B, public C
{
public:
  int d;
  D()
  {

    this -> d = 40;
  }
};

int main()
{
  /*
  //copy one object into another object
  A a;
  std::cout<<a.a <<std::endl;
  D d;
  a = d;
  std::cout<<a.a <<std::endl;
   */

/*
object sliceing using reference variable
  D dobj;
  A& pa = dobj;
  pa.a;
  pa.b;
  pa.c; //b ani c data member access krnar nahi
*/

// object slicing using pointer
  /*
  D dobj;
  A* pa = &dobj;
  B* pb = &dobj;
  C* pc = &dobj;
  D* pd = &dobj;

  std::cout<<"object "<<&dobj <<std::endl;
  std::cout<<"pa pointer "<<pa <<std::endl;
  std::cout<<"pb pointer "<<pb <<std::endl;
  std::cout<<"pc pointer "<<pc <<std::endl;

  std::cout<<"value of a :"<<pa->a <<std::endl;
  std::cout<<"value of a :"<<pb->b <<std::endl;
  std::cout<<"value of a :"<<pc->c <<std::endl;

    std::cout<<"value of a b c : "<<pd->a <<" "<<pd->b <<" "<<pd->c <<std::endl;
	*/
	//down casting

	A pc;
	D* dptr = static_cast<D*>(&pc);
	std::cout<< dptr ->a<<std::endl;
	
	_getch();
  return 0;
}