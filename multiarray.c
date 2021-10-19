#include<stdio.h>
void main(){
   

    int marks[3][5];
    for(int i=0;i<3;i++){
        for(int j=0 ; j<5;j++){
            printf("enter the value of %d marks of %d student :",j+1,i+1);
            scanf("%d",&marks[i][j]);
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0 ; j<5;j++)
            printf("the marks of  %d marks of %d student : %d\n",j+1,i+1,marks[i][j]);
     }

}
