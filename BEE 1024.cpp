#include <bits/stdc++.h>
#include <string>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    fio;
    string text, text2;
    int tc;
    cin >> tc;
    for(int i=0;i<=tc;++i){
    getline(cin,text);
    if(i==0)
        continue;
    for(int i=0;i<=text.length();i++)
    {
        if((text[i]>=65 && text[i]<=90) || (text[i]>=97 && text[i]<=122))
            text[i]+=3;
    }
    text2 = text;
    reverse(text2.begin(),text2.end());
    for(int i=text2.length()/2;i<=text2.length();i++)
    {
        text2[i]--;
    }
    cout << text2 << endl;
    }
    return 0;
}
