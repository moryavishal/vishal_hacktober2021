#include<stdio.h>
void insert(int a[],int n,int p,int l){
	int j,k;
	l++;
	for(j=l-1;j>=p;j--){
	a[j]=a[j-1];
}
	a[p-1]=n;
	printf("array after insertion:\n");
	for (k = 0; k < l; k++){
    printf("%d ", a[k]);
}
}
int main(){
    int num,size,i,pos;
    int arr[100];
	printf("enter the size of array : ");
	scanf("%d",&size);
	printf("enter the elements: ");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}	
	printf("num to insert: ");
	scanf("%d",&num);
	
	printf("enter the position: ");
	scanf("%d",&pos);
	
    insert(arr,num,pos,size);
}
