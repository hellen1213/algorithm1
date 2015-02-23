#include<fstream>
#include<sstream>
#include<string>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

class Seq{

public:
	Seq();
	~Seq();
	void printSequences2(int k, int n);
	void printSequencesRecur2(int arr[], int n, int k, int index);
	void printArray2(int arr[], int size);
	void printSequencesRecur(int arr[], int n, int k, int index);
	void printSequences(int n, int k);
	void printArray(int arr[], int size);

private:
	int counter=0;
	
	

};
