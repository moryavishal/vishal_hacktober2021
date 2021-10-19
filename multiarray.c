#include<stdio.h>
void main(){
    int n_student=3;
    int n_marks=5;

    int marks[3][5];
    for(int i=0;i<n_student;i++){
        for(int j=0 ; j<n_marks;j++){
            printf("enter the value of %d marks of %d student :",j+1,i+1);
            scanf("%d",&marks[i][j]);
        }
    }
     for(int i=0;i<n_student;i++){
        for(int j=0 ; j<n_marks;j++){
            printf("the marks of  %d marks of %d student : %d\n",j+1,i+1,marks[i][j]);
        }
     }

}