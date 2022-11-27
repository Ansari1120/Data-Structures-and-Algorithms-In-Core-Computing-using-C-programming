#include<iostream>

using namespace std;

void Swap(int *xp,int *yp){
	int TEMP=*xp;
	*xp=*yp;
	*yp=TEMP;
}
void Selection_Sort(int A[],int N){
	int K,J,MIN;
	for(K=0;K<N-1;K++){
		MIN=K;
		for(J=K+1;J<N;J++)
			if(A[MIN]>A[J])
			MIN=J;
			
	  Swap(&A[MIN],&A[K]);	
	}
}
void Display(int A[],int Size){
	int i;
	for(i=0;i<Size;i++){
		cout<<A[i]<<" "<<endl;
	}
}
int main(){
	int A[]={16,55,62,12,1,8,23,98,46};
	int N=sizeof(A)/sizeof(A[0]);
	Selection_Sort(A,N);
	cout<<"Sorted Array : \n"<<endl;
	Display(A,N);
	return 0;
}
