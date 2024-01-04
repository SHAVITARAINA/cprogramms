#include<stdio.h>
int main()
{
float c,s,l,b,area ,perimeter,length,breadth;

//circle

printf("enter the radius of a circle:");
scanf("%f",&c);
printf("area of a circle:%.2f\n",3.14*c*c);
printf("perimeter of a circle:%.2f\n",2*3.14*c); 

//square

printf("enter the sides of the square :");
scanf("%f",&s);
printf("area of a square :%.2f\n",s*s);
printf("perimeter of a square:%.2f\n",4*s);

//rectangle

printf("enter the length and breadth of a rectangle:");
scanf("%f%f",&l,&b);
printf("area of a rectangle:%.2f\n",(l*b));
printf("perimeter of a rectangle:%.2f\n",2*(l+b));
return 0; 
}