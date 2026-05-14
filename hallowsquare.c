//#include<stdio.h>
//int main()
//{
  //  for( int r=0; r<5; r++){
    //    for(int c=0; c<5; c++){
      //      if(r==0 || r==4 || c==0 || c==4){
        //        printf("1");
          //  }
            //else
            //printf("");
        //}
        //printf("\n");
    //}
    //return 0;
//}

#include<stdio.h>
int main(){
    for( int r=0; r<5; r++)
    {
      for(int c=0; c<5; c++)
      {
        if(r==0 || r==4 || c==0 || c==4){
            if(r%2==0){
            printf("s");
           }
           else
           printf("p");
       }
        else
        printf(" ");   
      }
      printf("\n");
    }
}
//#include<stdio.h>
//int main()
//{
    //for(int r=0; r<5; r++)
    //{
        //for(int c=0; c<5; c++)
        //{
            //if(c==0 || c==4)
            //{
           //     printf("s");
         //   }
        //else if(c==2 && r==0 || c==2 && r==4 ){
         //   printf("s");
        //}
        //else if((c==1 || c==3) && (r==0 ||r==4)){
         //   printf("p");
        //}
        //else{
          //  printf(" ");
        //}
        //}
      //  printf("\n");
    //}
  //  return 0;
//}