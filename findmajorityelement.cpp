#include<bits/stdc++.h>
using namespace std;
int findmaj(int arr[],int m){
	int n=m/2;
	int temp(-1),mcount(0);
	for(int i=0;i<m;i++){
		int count=0;
		for(int j=0;j<m;j++){
			if(arr[i]==arr[j]){
				count++;
			}
			if(mcount<count){
				mcount=count;
				temp=i;
			}
		}
	}
		if(mcount>n){
			cout<<arr[temp]<<"\n";
		}
		else{
			cout<<"Do not exits"<<"\n";
		}

}
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		int m;
 		cin>>m;
 		int arr[m];
 		for(int i=0;i<m;i++){
 			cin>>arr[i];
		 }
		findmaj(arr,m);
	 }
 }
