#include<stdio.h>>
 int main()
 {
     int height,width,area,perimeter;
     printf("Enter height of rectangle:");
     scanf("%d",&height);
     printf("Enter width of rectangle:");
     scanf("%d",&width);
     area = height*width;
     perimeter= 2 *(height+width);
     printf("Area is %d\n",area);
     printf("Perimeter is %d\n",perimeter);
     return 0;
 }
