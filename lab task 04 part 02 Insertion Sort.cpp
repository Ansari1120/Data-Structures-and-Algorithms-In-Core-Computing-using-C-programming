#include<iostream>
using namespace std;

void Insertion_Sort(int A[],int N){
	int i,TEMP,K;
	for(i=1;i<N;i++){
		TEMP=A[i];
		K=i-1;
		
		while (K>=0 && A[K]>TEMP){
		A[K+1]=A[K];
		K=K-1;
	}
		A[K+1]=TEMP;

	}
}
void Display(int A[],int Size){
	for(int i=0;i<Size;i++){
		cout<<A[i]<<" "<<endl;
	}
}
int main(){
	int A[]={78,51,43,22,90,1,67,88,11};
	int N=sizeof(A)/sizeof(A[0]);
	Insertion_Sort(A,N);
	cout<<"Sorted Array : \n"<<endl;
	Display(A,N);
	return 0;
}
