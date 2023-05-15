#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"
const int md=1e9+7;
int f(int n, vector<int>&dp){
	if(n==0){
		return 1;
	}
	if(n==1){
		return 1;
	}
	if(dp[n]!=-1) return dp[n];
	return dp[n]=f(n-1,dp)+f(n-2,dp);
}

int main()
{
	int n=3;
 	vector<int>dp(n+1,-1);
 	cout<<f(n,dp);
return 0;
}