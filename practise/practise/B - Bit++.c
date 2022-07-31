#include <stdio.h>
 int main()
 {
     int x=0,n;
     scanf("%d",&n);
     int s1;
     int s2("++X");
     int s3("X++");
     int s4("--X");
     int s5("X--");
     for(int i=0;i<n;i++)
     {
         scanf("%d",s1);
         if(s1==s2||s1==s3){
            x=x+1;
         }
         else{
            x=x-1;
         }
     }
     printf(%d,x);
     return 0;
 }
