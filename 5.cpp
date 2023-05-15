#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pb push_back
const int md=1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll cases;cin>>cases;
    while(cases--){
    	ll n; cin>>n; ll a[n];
		for(ll i=0;i<n;i++){
	    	cin>>a[i];
	    }
	    ll m; cin>>m;
	    vector<string>s;
	    for(ll i=0; i<m; i++){
	    string temp;
	     	s.pb(temp);
	     }
	     ll flag=0;
	     unordered_map<string,string>mp;
	     for(ll i=0; i<m; i++){
	     	ll size=s[i].length();
	     	string temp;
	     	for(ll j=0; j<size; j++){
	     		temp.pb(a[s[i][j]-'A']);
	     	}
	     	if(mp.find(temp)!=mp.end() && s[i]!=mp[temp]){
	     		flag=1; break;
	     	}
	     	else{
	     		mp[temp]=s[i];
	     	}
	     }
	     if(flag==0) cout<<"YES"<<endl;
      	else cout<<"NO"<<endl;
  
    }
return 0;
}

/*
 
                                        _¶¶_______________¶¶
                                        _¶¶_______¶¶¶¶¶¶¶¶¶¶
                                        __¶¶_____¶¶¶¶¶_¶¶¶¶_
                                        __¶¶__¶__¶¶___¶_____
                                        _¶¶¶_¶¶¶_¶¶¶_¶¶¶____
                                        _¶¶¶_____¶¶¶________
                                        _¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_
                                        __¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_
                                        __________¶¶_____¶¶_
                                        _____¶¶¶__¶¶_¶¶¶_¶¶_
                                        ______¶___¶¶__¶__¶¶_
                                        __¶¶¶¶¶¶¶¶¶¶_____¶¶_
                                        ¶¶¶¶____¶¶________¶¶
 
                    ──╔╗╔═══╗╔══╗     ╔═══╗╔╗─╔╗╔═══╗╔═══╗╔═══╗     ╔═══╗╔═══╗╔═╗╔═╗   
                    ──║║║╔═╗║╚╣─╝     ║╔═╗║║║─║║║╔═╗║║╔══╝║╔══╝     ║╔═╗║║╔═╗║║║╚╝║║
                    ──║║║║─║║─║║─     ║╚══╗║╚═╝║║╚═╝║║╚══╗║╚══╗     ║╚═╝║║║─║║║╔╗╔╗║
                    ╔╗║║║╚═╝║─║║─     ╚══╗║║╔═╗║║╔╗╔╝║╔══╝║╔══╝     ║╔╗╔╝║╚═╝║║║║║║║
                    ║╚╝║║╔═╗║╔╣─╗     ║╚═╝║║║─║║║║║╚╗║╚══╗║╚══╗     ║║║╚╗║╔═╗║║║║║║║
                    ╚══╝╚╝─╚╝╚══╝     ╚═══╝╚╝─╚╝╚╝╚═╝╚═══╝╚═══╝     ╚╝╚═╝╚╝─╚╝╚╝╚╝╚╝                                        
 
 
*/