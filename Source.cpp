/*
#include<iostream>
#include<conio.h>
class Demo
{
  public:
   int a;
   int b;
   Demo(int a,int b)
     {
       this->a=a;
       this->b=b;
     }
  Demo* operator +(const Demo& other)
     {

       Demo* temp=(Demo*)malloc(sizeof(Demo));
       temp->a=this->a + other.a;
       temp->b=this->b + other.b;


    return temp;
    }
  Demo* operator - (const Demo& other)
     {

       Demo* temp=(Demo*)malloc(sizeof(Demo));
       temp->a=this->a - other.a;
       temp->b=this->b - other.b;


    return temp;
    }
  Demo* operator * (const Demo& other)
     {

       Demo* temp=(Demo*)malloc(sizeof(Demo));
       temp->a=this->a * other.a;
       temp->b=this->b * other.b;


    return temp;
    }

  Demo* operator / (const Demo& other)
     {

       Demo* temp=(Demo*)malloc(sizeof(Demo));
       temp->a=this->a / other.a;
       temp->b=this->b / other.b;


    return temp;
    }
  Demo* operator % (const Demo& other)
     {

       Demo* temp=(Demo*)malloc(sizeof(Demo));
       temp->a=this->a % other.a;
       temp->b=this->b % other.b;


    return temp;
    }
};
int main()
{
 Demo d1(10,20);
 Demo d2(20,30);
// Demo *p=d1+d2; //addition opertor overloading
 // Demo *p=d1-d2;
  Demo *p=d1*d2;
 // Demo *p=d1/d2;
 // Demo *p=d1%d2;

 Demo d3=*p;
 std::cout<<d3.a<<std::endl;
 std::cout<<d3.b<<std::endl;
 
 _getch();
return 0;
}*/


#include<iostream>
#include<conio.h>

class Demo
{
  public:
  int a;
  int b;
  

   Demo(int a,int b)
   {
      this->a=a;
	  this->b=b;
   }
  friend std::ostream& operator <<( std::ostream & os,const Demo & other);
  friend std::istream& operator >>( std::istream & is,Demo & other);
  Demo()
  {
  }

};

std::ostream& operator <<( std::ostream & os,const Demo & other)
{
  os<<other.a<<std::endl;
  os<<other.b<<std::endl;
   return os;
}

std::istream& operator>>( std::istream& is,Demo& other)
{
  is>>other.a;
  is>>other.b;
   return is;
}

int main()
{
 Demo d1(10,20);
 Demo d2(10,20);
 std::cout<<d1<<d2;
 Demo d3(40,50);
 std::cin>>d3;
  std::cout<<d3<<std::endl;

 _getch();
return 0;
}