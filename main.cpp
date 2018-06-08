#include <bits/stdc++.h>
#define For(i,n) for(int i =0;i<n;i++)
#define vl vector<long long>
#define pll pair<long long,long long>
#define debug(a) cerr<<#a<<": "<<a<<endl;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long unsigned ll;
using namespace std;

struct Monster
{
    ll maxHealth;
    ll startHealth;
    ll regen;
    Monster(ll m=0, ll s=0, ll ren=0) {
        maxHealth = m;
        startHealth = s;
        regen = ren;
    }
    set<ll> changes;
};

int main()
{
#ifdef FFFeelipe
    freopen("/home/fffeelipe/Contests/in.txt" ,"r",stdin);
    freopen("/home/fffeelipe/Contests/out.txt","w",stdout);
#endif
    fastIO;
    ll n, m;
    cin>>n>>m;
    ll bounty, increase, damage;
    cin>>bounty>>increase>>damage;
    vector<Monster> monsters(3);
    for(int i = 0; i<n; i++){
        cin>>monsters[i].maxHealth>>monsters[i].startHealth>>monsters[i].regen;
    }
    vector<vl> changes;
    for(int i = 0; i<m;i++){
        vl temp(3); //time, enemy, health
        for(j = 0; j<3; j++){
            cin>>temp[i];
        }
        monsters[temp[1]].changes.insert(temp[0]);
        changes.push_back(temp);
    }




}
