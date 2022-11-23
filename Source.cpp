
#include<iostream>
#include<conio.h>

class Demo
{
public:
 int a;
 int b;
 int c;

 Demo(int a, int b, int c)
 {
  this->a = a;
  this->b = b;
  this->c = c;
 }
 bool operator==(const Demo& other)
 {
  return(this->a == other.a && this->b == other.b && this->c == other.c);
 }
 bool operator>=(const Demo& other)
 {
  return(this->a >= other.a && this->b >= other.b && this->c >= other.c);
 }
};

int main()
{
 Demo d1(10, 20, 30);
 Demo d2(23, 34, 45);
 Demo d3(10, 20, 30);
 /*if (d1 == d2)
 {
  std::cout << "d1 is equal to d2" << std::endl;
 }
 else if(d3==d1)
 {
  std::cout << "d3 is equal to d1" << std::endl;
 }*/
	
 if (d1 >= d2)
 {
  std::cout << "d2 is greter than equal to d1" << std::endl;
 }
 else if (d3 >= d1)
 {
  std::cout << "d3 is greter than equal to d1" << std::endl;
 }
 _getch();
 return 0;
}



/*#include<iostream>
#include<conio.h>

class Demo
{
private:
 int a;
 int b;
 int c;
public:
 Demo()
 {
  std::cout<<"this is the non-paramatrize constructor"<<std::endl;
 }
 Demo(int a, int b , int c)
 {
  this->a=a;
  this->b=b;
  this->c=c;
 }



 void operator=(const Demo& other) 
 {
 this->a=other.a;
 this->b=other.b;
 this->c=other.c;
 }
 Demo& operator-(const Demo& other)
 {
  Demo* d1;
  d1= (Demo*)malloc(sizeof(Demo));
  d1->a=this->a-other.a;
  d1->b = this->b - other.b;
  d1->c=this->c-other.c;
  return *d1;
 }

 Demo& operator++()
 {
  this->a++;
  this->b++;
  this->c++;

  return*this;
 }

 Demo& operator++(int )
 {
  Demo* other = (Demo*)malloc(sizeof(Demo));
  other=this;
  this->a++;
  this->b++;
  this->c++;

  return*other;
 }


 Demo& operator--()
 {
  this->a++;
  this->b++;
  this->c++;

  return*this;
 }

 Demo& operator--(int )
 {
  Demo* other = (Demo*)malloc(sizeof(Demo));
  other=this;

  this->a++;
  this->b++;
  this->c++;

  return*other;
 }




 friend std::ostream& operator<<(std::ostream& os, const Demo& other);
 friend std::istream& operator>>(std::istream& is, Demo& other);
};

std::istream& operator>>(std::istream& is, Demo& other)
{
 is>>other.a;
 is>>other.b;
 is>>other.c;

 return is;
}

 std::ostream& operator<<(std::ostream& os, const Demo& other)
{
 os<<other.a;
 os<<other.b;
 os<<other.c;

 return os;
}

int main()
{
 Demo D1(10,20,30);
 Demo d2(10,20,30);
 Demo d3 = d2;
 std::cout<<d3<<std::endl;
 d3=d3++;
 std::cout<<d3<<std::endl;
 _getch();
 return 0;
}
*/
