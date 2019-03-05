#include <iostream>
#include <vector>
#include <map>
#include <sstream>

#define loopi(i,n) for(int i=0; i<n; i++) 
#define loopj(j,n) for(int j=0; j<n; j++) 
typedef long long int lli;

using namespace std;

int main(){
    int n;
    lli output[n];
    cin>>n;
    bool first = true;
    loopi(i,n){
        map<lli, int> oc;
        lli x;
        string str;
        getline(cin, str);
        cout<<i;
        stringstream stream(str);
        while(stream >> x){
            oc[x]++;
        }

        vector< lli > max;
        lli currentm=0;
        for(map<lli, int>::iterator it = oc.begin(); it!=oc.end(); it++ ){
            if(it->second>currentm){
                currentm = it->second;
                max.push_back(it->first);
            }
        }
        output[n] = 
    }

    loopi(i, n){
        loopj(j, n){
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }

    
}