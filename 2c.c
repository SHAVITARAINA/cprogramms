//program to find euclidean distance between two points in a plane
//squareroot(x2-x1)^2+(y2-y1)^2
#include<math.h>
#include<stdio.h>
int main()
{
    int x1,x2,y1,y2;
    printf("enter the coordinates of the first point:\n");
    scanf("%d%d",&x1,&y1);
     
     printf("enter the coordinates of the second points:\n");
     scanf("%d%d",&x2,&y2);
     double d = sqrt(pow(x2-x1,2))+(pow(y2-y1,2));
     printf("the distance between two points in a plane is:%1f",d);
     
     return 0;
}