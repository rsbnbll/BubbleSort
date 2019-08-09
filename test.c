#include<stdio.h>
int BubbleSort(int *arr, int len){
	int i,j;
	int temp;
	int flge = 0;
	for (i = 0; i < len-1; i++){
		for (j = 0; j < len - 1 - i; j++){
			if (arr[j + 1] < arr[j]){
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
			    arr[j] = temp;
				flge = 1;
			}
		}
		if (flge == 0){
			break;
		}
	}
}
void Show(int *arr, int len){
	int i = 0;
	for (i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[] = { 8, 5, 7, 3, 9, 6, 2, 4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Show(arr, len);
	BubbleSort(arr, len);
	Show(arr, len);
	system("pause");
	return 0;
}