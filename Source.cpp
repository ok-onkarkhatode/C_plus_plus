/*
#include<iostream>
#include<conio.h>

int main()
{  
	int n,i;
	int a[4]={1,2,3,4};
//	int a=20,b=30,c=40;
 // std::cout<<"hello world";
 std::cout<<"please enter value";
// std::cin>>n;

 for(i=0;i<4;i++)
 {
   std::cout<<std::hex<<100;
 }

 _getch();
 return 0;
 
}
*/

/*
#include<iostream>
#include<conio.h>
 class Demo
{
  public :
  int a;
  static int b;
   Demo()
   {
   
   }

};
int Demo::b=20;

int main()
{
	Demo d1;
	d1.a=10;
	d1.a++;
	d1.b++;
	std::cout<<d1.a<<std::endl<<d1.b;

	Demo d2;
	d2.a++;
	d2.b++;
	std::cout<<d2.a<<std::endl<<d2.b;

	Demo d3;
	d3.a++;
	d3.b++;
	std::cout<<d3.a<<std::endl<<d3.b;

	_getch();
 return 0;

 */



#include<iostream>
#include<conio.h>
 class Parent
{
private:
	 int a;
protected:
	 int b;
  public :
       int c;


 };

 class Child:Parent
 {
   int x;
   int y;

 public:
	 void fun()
	 {
        std::cout<<c<<b;
	 }
 };

 class Dindi
 {
   int s1;
   int s2;

   Parent p;
   void 
   {
   
   }
 };

 int main()
 {
  Child c;
  c.fun();

  _getch();
  return 0;
 }