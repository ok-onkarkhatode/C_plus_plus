#include<iostream>

class Demo
{
public:
  /*
  Demo fun()
  {
    std::cout<<"fun  ";
    return (*this);
  }

  Demo gun()
  {
    std::cout<<"gun  ";
    return (*this);
  }

  Demo run()
  {
    std::cout<<"run  ";
    return (*this);
  }
  */

  Demo* fun()
  {
    std::cout<<"fun  ";
    return this;
  }

  Demo* gun()
  {
    std::cout<<"gun  ";
    return this;
  }

  Demo* run()
  {
    std::cout<<"run  ";
    return this;
  }
};

int main()
{

  Demo d;
  //d.fun().gun().run();  //using direct accesing operator
    d.fun()->gun()->run();
  return 0;
}
