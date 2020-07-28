#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b= temp;
}

void bubbleSort(int A[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			 if(A[j] > A[j + 1]) swap(A[j], A[j + 1]);
		}
	}
}

int main(){
	int A[] = {1,3,2,4,7,5};
	bubbleSort(A, 6);
	for(int i = 0; i < 6; i++){
		cout << A[i] << " ";
	}
	return 0;
}
