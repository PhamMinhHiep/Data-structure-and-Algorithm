#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int arr[], int n){
	for(int i = 0; i < n; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[min]) min = j;

		}
		swap(arr[i], arr[min]);
	}
}

int main(){
	int arr[] = {1,4,2,6,3,0,5};
	selectionSort(arr, 7);
	for(int i = 0; i < 7; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
