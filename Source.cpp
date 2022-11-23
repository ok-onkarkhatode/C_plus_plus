
//#include<iostream>
//#include<conio.h>

/*
class Demo
{
public:
	const int a;
	 mutable int b;
   
public:
    Demo():a(10)
	{
	   b=20;
	}

	void display()
	{
	std::cout<< a <<std::endl;
	std::cout<< b <<std::endl;

	}

	void fun() const
	{
	a++;
	b++;
	}
};


int main()
{
	Demo d;
	d.display();
	d.fun();

	//const int a=10;
	//int *p= &a;
	//int *p = const_cast<int*>(&a);
	(*p)++;
	_getch();
	//return 0;
};
*/
/*
class Demo
{
public:
 void fun() const
 {
 
 
 }
public:
 void gun()
 {
 
 }
};


int main()
{

  // const Demo d;//const objech const function
  // d.fun();
  // d.gun();//const ni fakt non const la call karu shakt nahi
 
	//Demo d1;
	//d1.fun();
	//d1.gun();
	_getch();
	return 0;
}
*/

/*
class Demo
{
public:
	int a;
	int b;
	int *p;
   
	Demo()//default constructor
	{
	//std::cout<<this default constaructor;
	}
	

	Demo(int a,int b,int c)//param
	{
	 this->a = a;
	 this->b = b;
	 (this->p)=(int*)malloc(sizeof(int));
	 *(this->p)=c;

	 //std::cout<<a<<b<<*(this->p)<<std::endl;
	}

	Demo(const Demo& other)//deep copy
	{
	 this->a=other.a;
	 this->b=other.b;
	 (this->p)=(int*)malloc(sizeof(int));
	 *(this->p)=*(other.p);
	}

	void operator=(const Demo& other)
	{
	   this->a=other.a;
	   this->b=other.b;
	   (this->p)=(int*)malloc(sizeof(int));
	  *(this->p)=*(other.p);
	
	}
};

int main()
{
    //explicit copy constructor
	//Demo d1;
	Demo d1(10,20,30);
	//(d1.a)++;
	//(d1.b)++;
	//(*(d1.p))++;
	//std::cout<<d1.a<<d1.b<<*(d1.p)<<std::endl;

	/*Demo d2(d1);//synthesis copy const shadow copy
    std::cout<<d1.a<<d1.b<<*(d1.p)<<std::endl;
	std::cout<<d2.a<<d2.b<<*(d2.p)<<std::endl;*/
	

	//Demo d2=d1;
	//std::cout<<d1.a<<d1.b<<*(d1.p)<<std::endl;
	//std::cout<<d2.a<<d2.b<<*(d2.p)<<std::endl;

   /*
	Demo d3;
	d3=d1; //deep copy
	//(d1.a)++;
	//(d1.b)++;k
	(*(d1.p))++;
	std::cout<<"deep copy"<<std::endl;
	std::cout<<d1.a<<d1.b<<*(d1.p)<<std::endl;
    std::cout<<d3.a<<d3.b<<*(d3.p)<<std::endl;




	_getch();
	return 0;

}

*/

#include<iostream>
#include<conio.h>

class Demo
{
  int a;
  int b;
  int c;


  Demo(int a,int b,int c)
  {
   this->a=a;
   this->b=b;
   this->c=c;
   
  }

  Demo* opertar +(const Demo& other)
  {
	 Demo* d=(Demo*)malloc(sizeof(Demo));
    d->a=this->a + other.a;
    d->b=this->b + other.b;
    d->c=this->c + other.c;
	return d;
  }

};

int main()
{
  Demo d1(10,20,30);
  Demo d2(40,50,60);
  Demo d3= d2+d1;


}