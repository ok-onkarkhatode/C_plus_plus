#include<iostream>

class Parent
{
  private:
    int a;
  protected:
    int b;
  public:
    int c;

};

class Child : Parent
{
  int x;
  int y;

  public:
  void fun()
  {
    std::cout<<b<<c<< std::endl;
  }
};

class Dindi
{
    int s1;
    int s2;
    Parent p;

  public:
    void fun()
    {
      std::cout<<p.c <<std::endl;
    }
};

int main()
{

  Child pradip;
//  pradip.fun();

//  std::cout<<sizeof(pradip) <<std::endl;


 Dindi sairam;
 sairam.fun();
std::cout<<sizeof(sairam) <<std::endl;
std::cout<<sizeof(sairam) <<std::endl;

  return 0;
}
