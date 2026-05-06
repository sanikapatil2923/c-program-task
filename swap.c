//#include<stdio.h>
//int main(){
  //  int a=10, b=30;
    //int c;
   // c=a;
    //a=b;
    //b=c;
    //printf("after swap Ais %d, B is %d",a,b);
    //return 0;
//}











//without using 3rd var
#include<stdio.h>
int main(){
    int a=20, b=40;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a=%d, b=%d",a,b);
    return 0;
}