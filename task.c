#include<stdio.h>
int main(){
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++){
            if(r==1 || r==3)
               printf("b");
            else   
            printf("a");
        }  
        printf("\n");
    }
    
    return 0;
}