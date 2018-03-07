#include <bits/stdc++.h>
#define For(i,n) for(int i =0;i<n;i++)
#define vl vector<long long>
#define pll pair<long long,long long>
#define debug(a) cerr<<#a<<": "<<a<<endl;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;

const double PI = atan(1)*4;

    const ll SIZE = 1e6+10;
    const ll MAX = 1e6+1;
const ll MOD =1e9+7;


bool change(ll &a, ll &b){
    debug(a)
            debug(b)
    if(a>=b*2){

        a-=(b*2)*((a-b*2)/(b*2)+(((a-b*2)%(b*2))?1:0));
        if(a==b*2)
            a=0;
    }else{
        if(b>= a*2){
            swap(a,b);
            a-=(b*2)*((a-b*2)/(b*2)+(((a-b*2)%(b*2))?1:0));
            swap(a,b);
            if(b==a*2)
                b=0;
        }else{
            return false;
        }
    }
    return true;
}

int main()
{
#ifdef FFFeelipe
    freopen("/home/fffeelipe/Qt Creator projects/Contests/Contests/in.txt" ,"r",stdin);
    freopen("/home/fffeelipe/Qt Creator projects/Contests/Contests/out.txt","w",stdout);
#endif
    fastIO;

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s2=s, sp1 = s.substr(0,s.length()/2) , sp2 = s.substr(s.length()/2,s.length()/2);

        if(s[0]=='1'){
            bool ba=true;
            For(i,s.length()-1){
                if(s[i+1]!='0'){
                    ba = false;
                    break;
                }
            }
            if(ba){
                For(i,s.length()-2)
                        cout<<9;
                cout<<endl;
                continue;
            }

        }

        string sp1o = sp1;
        sort(sp1.begin(),sp1.end());
        For(i,sp1.length()){
            if(sp1[i]!='0'){
                swap(sp1[i],sp1[0]);
            }
        }
        if(sp2<=sp1){
            for(int i = s.length()/2-1;i>=0;i--){
                if(sp1[i]==0){
                    sp1[i]=9;
                }else{
                    sp1[i]--;
                    break;
                }
            }
        }
        map<char, ll> m1;
        for(char i : sp1){
            m1[i]++;
        }
        bool assi = false;
        For(i,sp2.length()){
            if(m1[sp2[i]] && !assi){
                m1[sp2[i]]--;
                sp1[i]=sp2[i];
            }else{
                assi = true;
            }
            if(assi){
                for(char c = '0';c<='9';c++){
                    if(m1[c]){
                        m1[c]--;
                        sp1[i]=c;
                    }
                }
            }
        }
        while(sp2<=sp1){
            debug(sp1)
            prev_permutation(sp1.begin(),sp1.end());
        }
        cout<<sp1o<<sp1<<'\n';

    }

}
