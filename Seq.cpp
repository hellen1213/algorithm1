#include"Seq.h"


Seq::Seq(){
	int counter = 0;
}
Seq::~Seq(){
}
void Seq::printSequencesRecur(int arr[], int n, int k, int index){
	int i;
	if(k == 0){
		printArray(arr, index);
	}
	if(k>0){
	
	for(i = 1; i<=n; i++){
		arr[index] = i;
		printSequencesRecur(arr, n, k-1, index+1);
	}
	}
}
void Seq::printSequences(int k, int n){
	
	
	//get the right value for the length
	for(int i=k; i<=n; i++){
	int *arr = new int[i];
	printSequencesRecur(arr, n, i, 0);
	}

	
	return;
}
void Seq::printArray(int arr[], int size){
	for(int i=0; i<size; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	return;
}


//------------------------------------
void Seq::printSequencesRecur2(int arr[], int n, int k, int index){
	int i;
	if(k == 0){
		printArray2(arr, index);
	}
	if(k>0){
	
	for(i = 1; i<=n; i++){
		arr[index] = i;
		printSequencesRecur2(arr, n, k-1, index+1);
		
	}
	}
}
void Seq::printSequences2(int k, int n){
	
	
	
	for(int i=k; i<=4; i++){
	int *arr = new int[i];
	printSequencesRecur2(arr, 4, i, 0);
	}
	cout<<"the total number is: "<< counter<<endl;
}


void Seq::printArray2(int arr[], int size){
	
	for(int i=0; i<size; i++){
		counter++;
	}
	
	return;
}
