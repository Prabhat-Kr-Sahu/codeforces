#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
#define int long long

/*
vector<vector<int>>vec(n+1);
vector<int>vis1(n+1,0);
vector<int>vis2(n+1,0);
vector<int>vis3(n+1,0);

int ind,dist;
int ind1,dist1;

vector<int>vis1(200001,0);
pair<int,int> dfs(int i,&vector<vector<int>>vec){
    vis1[i]=1;
    int p_max=i;
    int p_min=i;
    pair<int,int>p;
    pair<int,int>q;
    for(auto g:vec[i]){
        if(!vis1[g]){
            p=dfs(g,vec);

        if(p.second>p_max){
            p_max=p.second;
        }
        if(p.first<p_min){
            p_min=p.first;
        }
        }
    }
    q.first=p_min;
    q.second=p_max;
    return q;
}
*/
int mod=1e18;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a; res=res%mod;
        a = a * a;a=a%mod;
        b >>= 1;
    }
    return res;
}
int prime[1000001];
int max_elemen(int i,int j,vector<int>&v){
    if(j-i<=1)return max(v[j],v[i]);
    int mid=(i+j)/2;
    return max(max_elemen(i,mid,v),max_elemen(mid+1,j,v));
}
string xoor(string s1,string s2){
    int a=s1.size();
    int b=s2.size();
    string s3="";
    if(a>b){
        for(int i=0;i<a-b;i++){
            s3+=s1[i];
        }
        for(int i=a-b;i<a;i++){
            if(s1[i]!=s2[i-a+b]){
                s3+='1';
            }
            else{
                s3+='0';
            }
        }
    }
    else{
        for(int i=0;i<b-a;i++){
            s3+=s2[i];
        }
        for(int i=b-a;i<b;i++){
            if(s1[i-b+a]!=s2[i]){
                s3+='1';
            }
            else{
                s3+='0';
            }
        }
    }
    return s3;
}
void build(int si,int ss,int se,vector<int>&seg,vector<int>&ran){
    if(ss==se){
        seg[si]=ran[ss];
        return;
    }
    int mid=(ss+se)/2;
    build(2*si,ss,mid,seg,ran);
    build(2*si+1,mid+1,se,seg,ran);
    seg[si]=max(seg[2*si],seg[2*si+1]);
}
int query(int si,int ss,int se,int qs,int qe,vector<int>&seg){
    if(se<qs || ss>qe){
        return 0;
    }
    else if(ss>=qs && se<=qe){
        return seg[si];
    }
    int mid=(ss+se)/2;
    return max(query(2*si,ss,mid,qs,qe,seg),query(2*si+1,mid+1,se,qs,qe,seg));
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin>>tt;
/*  for(int i=2;i<1000001;i++){
    if(prime[i]==0){
        int k=i;
        while(k<1000001){if(prime[k]==0)prime[k]=i;k+=i;}
    }
  }*/
  while (tt--){
    int n,m;
    cin>>n;
    string s;
    cin>>s;
    int k=0;
    int ans=1;
    for(int i=0;i<n;i++){
        if(s[i]=='p')k=1;
        if(k && s[i]=='s'){
            ans=0;
            break;
        }
    }
    if(ans==0){
        cout<<"NO"<<'\n';
        continue;
    }
    else{
        int s0=0;
        int p0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='p')p0++;
            if(s[i]=='s')s0++;
        }
        if(s0>1 && p0>1){
            cout<<"NO"<<'\n';
        }
        else if(s0==0 || p0==0){
            cout<<"YES"<<'\n';
        }
        else if(s0==1 && s[0]=='s'){
            cout<<"YES"<<'\n';
        }
        else if(p0==1 && s[n-1]=='p'){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
  }
return 0;
}
