#include <iostream>
using namespace std;

//only works when array is sorted row and column wise

int main()
{
    int n , m ;
    cin>>n>>m;
    int target ;
    cin>>target;

    int matrix[n][m];
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
            cin>>matrix[i][j];
    }
    
    int r=0 , c=m-1;
    bool found = false;
    while(r<n && c>=0 )
    {
        if(matrix[r][c]==target)
        {
            found = true;
            cout<<r<<" "<<c<<endl;
        }
        if(matrix[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    
    if (found==true)
        cout<<"element is found\n";

    else
        cout<<"element does not exist\n";

    return 0;   
}