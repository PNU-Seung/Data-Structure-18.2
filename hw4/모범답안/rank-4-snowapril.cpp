#include <bits/stdc++.h>
using namespace std;
int n,i,m;
struct S{
vector<int>c;
int z,x;
};
main(){
ifstream I("rank.inp");
ofstream O("rank.out");
vector<S>d;
vector<int>v{-1};
for(I>>n;n&&I>>i;v.push_back(i))
if(i<0){
sort(v.begin(),v.end());
d.push_back({v,v.size(),++m});
v.clear();}
stable_sort(&d[0],&d[0]+n,[](S a,S b){
return a.z>b.z?1:a.z==b.z?a.c>b.c:0;
});
O<<d[0].x;
for(i=1;i<m;O<<'\n'<<d[i++].x);
I.close();
O.close();}