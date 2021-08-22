#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
#define siz 100005
#define all(x) x.begin(),x.end()
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fri(n) for(ll i=0;i<n;i++)
#define frj(n) for(ll j=0;j<n;j++)
ll arr[100005],flag=0;
ll bs(ll val,ll n)
{
    ll l=0,h=n+1,pos=0;
    while(l<h)
    {
        if(flag==0)
        {
            ll mid=(l+h)/2;
            if(arr[mid]<val)
                l=mid+1;
            else
                h=mid;
        }
        else
        {
            ll mid=(l+h+1)/2;
            if(arr[mid]>val)
                h=mid-1;
            else
                l=mid;
        }

    }
    return l;
}

ll p=1;
void solve()
{
    ll n,q;
    cin>>n>>q;
    arr[0]=INT_MIN;
    fri(n) cin>>arr[i+1];
    arr[n+1]=INT_MAX;
    cout<<"Case "<<p++<<":"<<endl;
    sort(arr,arr+n);
    //fri(n+2) cout<<arr[i]<<" ";
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        flag=0;
        ll c=bs(a,n);
        flag=1;
        ll d=bs(b,n);
        cout<<d-c+1<<endl;
         //cout<<c<<" "<<d<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
//1
//5 2
//1 100 1000 9999 10000
//1 99
//9998 10001
