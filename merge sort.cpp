#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int printArray(int *arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<< " ";
	}cout<<endl;
}
void merge(int *arr,int p,int q,int r){
	int k;
	int n1 = q-p+1;
	int n2 = r-q;
	int L(n1),R(n2);
	for(int i=0;i<n1;i++){
		L[i] = arr[i+p];
	}
	for(int j=0;j<n2;j++){
		R[j] = arr[j+q+1];
	}
	int i=0,j=0;
	k=p;
	while(i<n1&&j<n2)
	{
		if(arr[i]<arr[j]){
			arr[k++] = L[i++];
		}
		else
		{
			arr[k++] = R[j++];
		}
	}
	while(i<n1)
	{
		arr[k++] = L[i++];
	}
    while(j<n2)
	{
			arr[k++] = R[j++];
	}	
}
void mersort(int *arr,int p,int r)
{
	if(p<r)
	{
		int q = p+(r-p)/2;
		mersort(arr,p,q);
		mersort(arr,q+1,r);
		merge(arr,p,q,r);
	}
}
int main(){
	int arr[] ={22,55,21,987,22,45,456,34};
	int len = sizeof(arr)/sizeof(arr[0]);
	printArray(arr,len);
	mersort(arr,0,len-1);
	printArray(arr,len);
	return 0;
	
}
