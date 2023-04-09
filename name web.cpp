#include <stdio.h>
int main(){
    int row,col,i,j,space;
    row=7,col=7;
    for(i=1;i<=row;i++){

        //! A
        for(j=1;j<=col;j++){
            if(i==1 || j==1 || j==col|| i==row/2)
            printf("* ");
            else
            printf("  ");
        }for(j=1;j<=col;j++){
            printf(" ");}
         //!P
    for(j=1;j<=col;j++){
            if(i==1 || j==1 || i==row/2 || (j==col && i<=row/2) || (i==4 && j==4) || (i==5 && j==5) || (i==col && j==row))
            printf("* ");
            else
            printf(" ");}
//!S
for(int j=1;j<=4;j++){
            if(i==1||i==3||i==5||(i==2 && j==1)||(i==4 && j==4)){
                printf("*");
				}else{
                printf("  ");}
        }
        for(int i=1;i<=1;i++){
            printf("  ");}
//!A
     for(j=1;j<=col;j++){
            if(i==1 || j==1 || j==col|| i==row/2)
            printf("* ");
            else
            printf("  ");
        }for(j=1;j<=col;j++){
            printf(" ");}
//!N
for(int j=1; j<=row; j++){
         if(j==1 || j==row || i==j ){  
            printf("*");}
            else{
            printf(" ");}
         for(int j=1; j<=row; j++){
            printf(" ");}
        }
            //!A
            for(j=1;j<=col;j++){
                      if(i==1 || j==1 || j==col|| i==row/2)
            printf("* ");
            else
            printf("  ");
        }for(j=1;j<=col;j++){
            printf(" ");}
        }
return 0;
}

