#include<stdio.h>
void bubbleSort(int *array,int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(*(array+j)>*(array+j+1)){
				int temp=*(array+j);
				*(array+j)=*(array+j+1);
				*(array+j+1)=temp;
			}
		}
	}
}
void printfValue(int *array,int size){
	for(int i=0;i<size;i++){
		printf("%d ",*(array+i));
	}
}
int main(){
	int array[]={31,0,7,2,0,0,6};
	int size=sizeof(array)/sizeof(array[0]);
	bubbleSort(array,size);
	printfValue(array,size);
	return 0;
}
