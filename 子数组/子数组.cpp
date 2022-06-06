#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[1000];
	int dp[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dp[0]=a[0];
	int sum=0;
	int start=0;
	int end=0;
	int temp;
	
	for(int i=0;i<n;i++){
		if(dp[i-1]<=0){
			dp[i]=a[i];
			temp=i;
		}
		else{
			dp[i]=a[i]+dp[i-1];
		}
		if(sum<dp[i]){
			sum=dp[i];
			start=temp;
			end=i;
		}
	}
	cout<<start+1<<"-"<<end+1<<endl;
	cout<<sum<<endl;
	return 0;
}
