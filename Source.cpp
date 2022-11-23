

#include<iostream>
#include<conio.h>

class Demo
{
public:
	int a;
	int b;
	int c;

	Demo(int a,int b,int c)
	{
	   this->a=a;
	   this->b=b;
	   this->c=c;
	}

	Demo& operator++()
	{
	 (this->a)++;  
	 (this->b)++;  
	 (this->c)++;  
	  return *this;
	}


	Demo& operator++(int )
	{
	 (this->a)++;  
	 (this->b)++;  
	 (this->c)++;  
	  return *this;
	}

};

int main()
{
 Demo d1(10,20,30);
 Demo d2=++d1;
  std::cout<<d2.a<<d2.b<<d2.c;

  Demo d3=d1++;

 std::cout<<d1.a<<d1.b<<d1.c;
 _getch();
  return 0;
}