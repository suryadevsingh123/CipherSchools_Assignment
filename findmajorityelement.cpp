#include<bits/stdc++.h>
using namespace std;
 int main(){
 
 		int m;
 		cin>>m;
 		int arr[m];
 		for(int i=0;i<m;i++){
 			cin>>arr[i];
        }
        int count,count1=0,index(-1);
        for(int i=0; i<m; i++)
        {
        	count=0;
        for(int j=0;j<m;j++)
        {
        	if(arr[i]==arr[j])
        	{
        		count++;
			}
			if(count1<count){
				count1=count;
				index=i;
			}
		}
	}
		if(count1>=m/2)
		{
			cout<<arr[index];
		}
		else
		{
			cout<<"no majority element";
		}
}
