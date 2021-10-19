#include<stdio.h>

int linearSerch(int a[],int size,int key){
	int i=0,pos;
	for(i=0;i<size;i++){
	   if(a[i]==key){
	   	pos=i;
	   	printf("key found \n position :");
	   	return pos+1;
	   }	
	}
	return 0;
}
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
	
    int result=linearSerch(arr,8,num);
    printf("%d",result);

}
