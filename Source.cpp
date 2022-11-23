/*
#include<iostream>
#include<conio.h>

template<class T,class T1>

	T add(T a,int b)
	{
	  return a+b;
	
	}

	int main()
	{
	 // std::cout<<add<int >(10,20)<<std::endl;
	 //std::cout<<add<int ,char>(10,'a')<<std::endl;
	  std::cout<<add<int ,double >(10,20.0)<<std::endl;

	_getch();
	return 0;
	}
	*/


/*
//template function
#include<iostream>
#include<conio.h>

class Demo
{
public:
	template<class T1,class T2>
	T1 fun(T1 a,T2 b)
	{
	 return a+b;
	}
};

int main()
{
	Demo d;
	std::cout<<d.fun<int ,int>(10 , 20)<<std::endl;
	_getch();
 return 0;
}
*/

#include<iostream>
#include<conio.h>

template<class T>
class Demo
{
  


 T fun()
{

  
}

};

int main()
{

	Demo<int,int>(10,20);
	d.fun();
 return 0;
}