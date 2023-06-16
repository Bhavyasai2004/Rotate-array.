#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i,k;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin >> k;
        v.push_back(k);
    }
    cin >> k;
    int s=k;
    int g=0;
    queue<int>q;
    while(k--)
    {
        q.push(v[g]);
        g++;
    }
    vector<int>ans;
    for(i=s;i<n;i++)
    {
        ans.push_back(v[i]);
    }
    while(!q.empty())
    {
        ans.push_back(q.front());
        q.pop();
    }
    for(i=0;i<ans.size();i++)
    cout << ans[i] << " ";
    
}
