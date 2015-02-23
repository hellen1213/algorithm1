#include"Seq.h"
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<ctime>
#include<time.h>
#include<sys/time.h>

using namespace std;

int main(){

	Seq object;

	struct timeval start, finish;
	int in;
	int in2;

	cin>>in>>in2;
	
	if(in2<=4){
	
	cout<<"The number of sequence for n1="<<in<<", n2="<<in2<<" is: "<<endl;

	object.printSequences(in, in2);
	}else{

	cout<<"The number of sequence for n1="<<in<<", n2="<<in2<<" is: "<<endl;
	int x = 4;
//Start time here
	gettimeofday(&start, NULL);
	double t1 = start.tv_sec + (start.tv_usec/1000000.0);


	object.printSequences(in, x);
	object.printSequences2(in, in2);

//end time here
	gettimeofday(&finish, NULL);
	double t2 = finish.tv_sec + (finish.tv_usec/1000000.0);
	cout<< "The run time for "<<in <<" and "<< in2 << " is: "<< t2 - t1<< endl;
	}
	
	return 0;
}
