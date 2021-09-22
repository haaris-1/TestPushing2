#include <bits/stdc++.h>
using namespace std;

int main()
{
    //check palindrome

    int n;
    cin>>n;

    char a[n+1];

    cin>>a;
    bool check = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==a[n-1-i])
            check = true;

        else
        {
            check=false;
            break;
        }
    }

    if(check==true) 
        cout<<"the given word is a palindrome";
    else
        cout<<"the given word is not a palindrome";
    return 0;
}
