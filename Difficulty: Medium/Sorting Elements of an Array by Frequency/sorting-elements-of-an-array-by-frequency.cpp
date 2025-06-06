#include <bits/stdc++.h>
using namespace std;

    bool cmp(pair<int,int>a,pair<int,int>b)
    {
        if(a.second!=b.second)
        {
            return a.second>b.second;
        }
        return a.first<b.first;
    }
int main() {
	//code here
	
	int n;
	cin>>n;
	while(n--)
	{
	    int x;
	    cin>>x;
	    vector<int>arr(x);
	    for(int i=0;i<x;i++)
	    {
	        cin>>arr[i];
	    }
	    unordered_map<int,int>mp;
	    for(int i=0;i<arr.size();i++)
	    {
	        mp[arr[i]]++;
	    }
	    vector<pair<int,int>>v;
	    for(auto & it:mp)
	    {
	        v.push_back({it.first,it.second});
	    }
	    sort(v.begin(),v.end(),cmp);
	    for(auto& it:v)
	    {
	        for(int i=0;i<it.second;i++)
	        {
	            cout<<it.first<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}