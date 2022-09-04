#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int w=0;w<t;w++)
    {
        int n,k;
        cin>>n>>k;
        unordered_map<int,int> m;
        bool check=true;

        vector<int> a(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        if(n>2*k)
        {
            cout<<"Case #" + to_string(w+1) + ": NO"<<endl;
            continue;
        }

        for(int i=0;i<n;i++)
        {
            m[a[i]]++;

            if(m[a[i]]>2)
            {
                check=false;
                break;
            }
        }

        if(check==false)
            cout<<"Case #" + to_string(w+1) + ": NO"<<endl;
        else
        cout<<"Case #" + to_string(w+1) + ": YES"<<endl;
    }
    return 0;
}