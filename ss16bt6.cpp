#include<stdio.h>
int searchIndex(int *array,int search){
	for(int i=0;*(array+i)!='\0';i++){
		if(*(array+i)==search){
			return i;
		}
	}
	return -1;
}
int main(){
	int array[]={1,2,3,4,5,6,7,8,9};
	int search,a;
	printf("moi ban nhap gia tri de tiem: ");
	scanf("%d",&search);
	a=searchIndex(array,search);
	if(a!=-1){
	printf("phan tu %d nam o vi tri %d",search,a);
}else{
	printf("phan tu %d khong co trong mang",search);
}
return 0;
}
