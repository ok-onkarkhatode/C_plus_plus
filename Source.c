/*
#include<stdio.h> 
#include<stdlib.h>
#include<conio.h>

void main() 
{ 
	char* str = NULL; char ch; 
	int size = 1; int i = 0; 
	int flag = 0;

str = (char*)malloc(sizeof(char));
*str = '\0'; 
printf("Enter the character\n"); 
do 
{ 
  scanf("%c", &ch); 
  if (ch != '\n') 
   { size++; str = (char*)realloc(str, size * sizeof(char)); 
    *(str + i) = ch; 
	*(str + i + 1) = '\0'; 
	i++;
    }
} while (ch != '\n'); 
 printf(" string : %s\n", str);
  i=0;
while(*(str+i) != '\0') 
{ 
	while(*(str+i) == ' ') 
	{
		i++; 
	}
 while(*(str+i) != ' ' && *(str+i)!='\0')  
  {
	  printf("%c",*(str+i));
    if(*(str+i+1) == '\0') 
	{
		flag = 1;
		break; 
	} 
	i++; 
 } 
 if(flag == 1) 
 { 
	 break;
 } 
 printf(" "); 
 i++; 
}
_getch(); 
}
*/

/*
//upper to lower

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main() 
{ char*str=NULL; 
char ch; 
int size=0; 
int i=0;
str=(char*)malloc(sizeof(char)); 
*(str+i)='\0';
printf("Enter the string\n"); 
do 
{ 
  scanf("%c",&ch); 
  if(ch!='\n') 
  {
	  size++; 
	  str=(char*)realloc(str,size*sizeof(char)); 
	  *(str+i)=ch; 
	  *(str+i+1)='\0'; 
	  i++; 
  } 
}while(ch!='\n');
printf("%s\n",str);
i=0;
while(*(str+i)!='\0') 
{ // while(str[i]==' ') 
  //{ 
	// i++; 
	// } 
	if(*(str+i)>='A' && *(str+i)<='Z') 
	{ 
		*(str+i)=*(str+i)+32; 
	} 
	i++; 
}
printf("%c",*(str+i));
_getch(); 
} 
*/

/*
//count vowels

#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h>

void main() 
{ 
	char* str = NULL; 
	char ch; 
	int size = 1; 
	int i = 0; 
	int vcount=0; 
	int ccount=0; 
	str = (char*)malloc(sizeof(char));
  *str = '\0'; 
  printf("Enter the string:\n"); 
  do 
  { 
	  scanf("%c", &ch); 
	  if (ch != '\n') 
	  { 
		  size++; 
		  str = (char*)realloc(str, size * sizeof(char));
		  *(str + i) = ch; 
		  *(str + i + 1) = '\0'; 
		  i++;
     } 
  } while (ch != '\n');
  printf("string : %s", str); 
  i=0; 
  while(*(str + i) != '\0') 
  {
	  while(*(str + i) == ' ') 
	  {
		  i++; 
	  }
	  if(*(str + i)=='a' || *(str + i)=='e' || *(str + i)=='i' || *(str + i)=='o' ||*(str + i)=='u') 
	  { 
		  vcount++;
		  i++;
	  } 
	  else if(*(str + i)!=' ') 
	  { 
		  ccount++; 
		  i++; 
	  } 
  } 
  printf("\n vowels are:%d\nconsonants are:%d\n",vcount,ccount);
  _getch(); 
}
*/

/*
//2 sep

#include<stdio.h>
#include<conio.h>

void main()
{
int a[10],b[10];
int i,n;

printf("Enter size of array\n");
scanf("%d",&n);

printf("Enter array elements\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}

printf("Enter array elements\n");
for(i=0;i<n;i++)
{
 printf("%d\n",a[i]);
}

printf("Revrese array elements\n");

for(i=n-1;i>=0;i--)
{
 printf("%d\n",a[i]);
}
_getch();
}
*/

//5 sep
/*
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i=1,sum=0;
  printf("Enter the value of a");
  scanf("%d",&a);
  while(i<=a)
  {
	  sum=sum+(i*i);
	  i++;
  }
  printf("%d",sum);
  _getch();
}
*/

/*
#include<stdio.h>
#include<conio.h>
void main()
{
  float p,SI;
  float time,rate;
  printf("Enter the principle");
  scanf("%d",&p);
   printf("Enter the time");
  scanf("%d",&time);
   printf("Enter the rate");
  scanf("%d",&rate);
  SI =(p*time*rate)/100;

  printf("%f",SI);

_getch();
}
*/


/*
//6 sep
#include<stdio.h>
#include<conio.h>

void main()
{
 int a[100][100],b[100][100],mul[100][100];
 int row,col;
 int i,j,k;

 printf("Enter the no of row");
 scanf("%d",&row);

 printf("Enter the no of col");
  scanf("%d",&col);

 printf("Enter the first matrix");
 for(i=0;i<row;i++)
 {
   for(j=0;i<col;j++)
   {
    scanf("%d",&a[i][j]);
   }
 }

  printf("Enter the second matrix");
 for(i=0;i<row;i++)
 {
   for(j=0;i<col;j++)
   {
    scanf("%d",&b[i][j]);
   }
 }

 printf("Multiply of the matrix");
 for(i=0;i<row;i++)
 {
   for(j=0;j<col;j++)
   {
    mul[i][j]=0;
	for(k=0;k<col;k++)
	{
	 mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
	}

   }
 }
 for(i=0;i<row;i++)
 {
   for(j=0;j<col;j++)
   {
    printf("%d\t",mul[i][j]);
   }
 }
 _getch();
}
*/

#include<stdio.h>
#include<conio.h>

void main()
{
 int a[100][100],b[100][100],c[100][100];
 int i,j,n;

 printf("Enter the no of mtrix");
 scanf("%d",&n);

  printf("Enter the first matrix");
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
    scanf("%d",&a[i][j]);
   }
 }

 printf("Enter the second matrix");
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
    scanf("%d",&b[i][j]);
   }
 }

 
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
    c[i][j]=a[i][j]-b[i][j];
   }
 }

 printf("the substraction is");
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
    printf("%d\t",c[i][j]);
   }
 }
 _getch();
}
