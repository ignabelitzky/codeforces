#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        string s;
        cin>>s;
 
        bool flag=true;
        
        if(s.size()%2==0)
        {
            for(int i=0; i<s.size()/2; i++)
            {
                if(s[i]!=s[i+1])
                {
                    flag=false;
                    break;
                }
            }
        }
        else
        {
            for(int i=0; i<( s.size()/2 )- 1; i++)
            {
                if(s[i]!=s[i+1])
                {
                    flag=false;
                    break;
                }
            }
 
        }
        
        
 
 
        if(flag==false) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}

