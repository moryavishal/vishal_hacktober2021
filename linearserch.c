#include<stdio.h>
int main(){
	int num,size,i;
	printf("enter the size of array :");
	scanf("%d",&size);
	int arr[size];
	printf("enter the elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the no to serch :");
	scanf("%d",&num);
    int pos;
	for(i=0;i<size;i++){
	   if(a[i]==key){
	   	pos=i;
		   break;}}
	   	printf("key found \n position :");
    printf("%d",pos+1);

}
