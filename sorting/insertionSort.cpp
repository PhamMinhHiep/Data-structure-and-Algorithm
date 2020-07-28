#include<bits/stdc++.h>


using namespace std;

void insertionSort(int arr[], int n){
	int key;
	for(int i = 1; i < n;i++){
		key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main(){
	int arr[] = {1,6,2,5,8,4};
	insertionSort(arr, 6);
	for(int i = 0; i < 6; i++){
		cout << arr[i] <<" ";
	}
	return 0;
}