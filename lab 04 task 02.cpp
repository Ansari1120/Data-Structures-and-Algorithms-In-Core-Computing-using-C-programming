#include<iostream>
using namespace std;
int main(){
	int A[14]={11,22,33,55,66,77,88,99,111,122,133,144};
	int item=sizeof(A)/sizeof(A[0]);
	int i,n=12,key=44;
	cout<<"elements in the array before insertion : "<<endl;
	for(i=0;i<n;i++){
	cout<<A[i]<<" \n";	
	}
	do {
			for(i=n-1;(i>=0 && A[i]>key);i--){			
		A[i+1]=A[i];
	}
		n=n+1;
	}while(n>=item);
			A[i+1]=key;
	cout<<"elements in the array After insertion : "<<endl;
	for(i=0;i<n;i++){
	cout<<A[i]<<" \n";	
	}
	return 0;
}
