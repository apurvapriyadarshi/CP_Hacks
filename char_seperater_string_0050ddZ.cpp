#include <iostream>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    string s,s1;
    int i,t,j=0;
    cin>>s;
    int l=s.length();
    while(t++ <= l)
    {
        if(s[i]=='|' || s[i]=='\0')
        {
           
        cout<<s1<<endl;
        s1='\0'; 
        }
        else
        {
            s1 =s1 +s[i];
        }
        i++;
    }

    return 0;
}
