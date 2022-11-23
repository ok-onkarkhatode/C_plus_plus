#include<iostream>

class Demo
{
private:

  int a;
  int b;
  int c;

  public:
    Demo()
    {
      a = 10;
      b = 20;
      c = 30;

      return ;
    }

    /*
    // first way to change value
    int* ret_address()
    {
      return (&a);
    }
    */

    void display()
    {
      std::cout<< a <<" " << b  <<" " << c << std::endl;
    }


};

int main()
{
  Demo d;
  d.display();

  /*
  // first way to change value
     int* p = d.ret_address();
     (*p)++;
  */
  
  // second way using casting
  int* p = reinterpret_cast<int*>(&d);

  (*(p+0))++;
  (*(p+1))++;
  (*(p+2))++;

  d.display();
  return 0;




}
