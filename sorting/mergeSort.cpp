#include <bits/stdc++.h>

using namespace std;

#define MAX 30


void merge(int arr[], int first, int mid, int last){
	int  first1 = first, last1 = mid;
	int first2 = mid + 1, last2 = last;
	int index = first1;

	int temp[MAX];
	
	for(; first1 <= last1 && first2 <= last2; ++index){
		if(arr[first1] < arr[first2]){
			temp[index] = arr[first1];
			++first1;
		}
		else{
			temp[index] = arr[first2];
			++first2;
		}
	}

	// sao chep phan tu con lai cua day 1 
	for(; first1 <= last1; ++index){
		temp[index] = arr[first1];
		first1++;
	}
	// sao chep cac phan tu con lai cua day 2
	for(; first2 <= last2; ++index){
		temp[index] = arr[first2];
		++first2;
	}
	// sao chep cac phan tu cua mang temp[] vao mang arr[]
	for(int i = first; i <= last; i++){
		arr[i] = temp[i];
	}
	
}
void mergeSort(int arr[], int l, int r){
	if(l < r){
		int q = (l + r) / 2;
		mergeSort(arr, l, q);
		mergeSort(arr, q + 1, r);
		merge(arr, l , q, r);
	}
}

int main(){
	int arr[] = {1,4,2,6,5,3};
	mergeSort(arr, 0, 5);
	for(int i = 0; i < 6; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
