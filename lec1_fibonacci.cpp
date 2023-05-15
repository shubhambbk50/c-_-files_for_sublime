
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"
const int md=1e9+7;

int fibo(int n){
	if(n<=1)
		return n;
	return fibo(n-1) + fibo(n-2);
}

int main()
{
	cout<<fibo(5);   
return 0;
}



/*
MEMOIZATION
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
const int md=1e9+7;
int fun(int n, vector<int> &dp){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	if(dp[n]!=-1) return dp[n];
	return dp[n]=fun(n-1,dp)+fun(n-2,dp);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	vector<int> dp(n+1, -1);
	cout<<fun(n,dp);

	
return 0;
}  
TC : O(n)
SC: O(n) + O(n) = O(n)
0 1 1 2 3 5 8 13


// TABULATION
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
const int md=1e9+7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	vector<int>dp(n+1,-1);
	dp[0]=0; dp[1]=1;
	for( int i=2; i<=n; i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	cout<<dp[n];
return 0;
}
// TC O(n);
// SC O(n);



#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
const int md=1e9+7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n ;cin>>n;
	int prev=1;
	int prev2=0;
	int curr;
	for(int i=2; i<=n; i++){
		curr=prev+prev2;
		prev2=prev;
		prev=curr;
	}
	cout<<curr;
return 0;
}

// TC O(n)
// SC O(1)

*/