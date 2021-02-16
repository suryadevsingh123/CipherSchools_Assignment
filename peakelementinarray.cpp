#include<bits/stdc++.h>
using namespace std;
int peak(int arr[],int m){
	if (m == 1) 
      cout<<arr[0];;
    if (arr[0]>=arr[1])
        cout<<0<<"\n";
    if (arr[m-1]>=arr[m - 2])
        cout<<m - 1<<"\n";
    vector<int> brr;
	for(int i=1;i<m-1;i++){
		if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
			cout<<arr[i]<<" ";
		}
	}

}
int main(){
	int m;
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	peak(arr,m);
}
