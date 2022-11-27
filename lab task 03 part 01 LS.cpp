#include<iostream>

using namespace std;

int LINEAR_SEARCH(int A[],int N,int KEY){
	int K;
	for(K=0;K<N;K++)
		if(A[K]==KEY)
		return K;
		
		return -1;
}

int main(){
	int N;
	cout<<"Enter how many array you want to input : "<<endl;
	cin>>N;
	int A[N];
	cout<<"Enter five Array numbers : "<<endl;
	
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	int KEY=43;
	int find=LINEAR_SEARCH(A,N,KEY);
	if(find!=-1)
	cout<<"element is found at index : "<<find;
	else
	cout<<"element were not found !";
	return 0;
}
