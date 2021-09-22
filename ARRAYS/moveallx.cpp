#include "iostream"
#include "string"
using namespace std;
string moveAllx(string s){
    if(s.length()==0){
        return "";
    }
    char k = s[0];
    string xstr = moveAllx(s.substr(1));

    if(k=='x'){
        return xstr + k; 
    }
    return k + xstr;
}
int main(){
    string s = "xbdxcbsbxndbsxsxsxhbxbsx";
    cout << moveAllx(s);
    return 0;
}