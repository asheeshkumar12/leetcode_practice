#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;//"This is a gap certificate";
   // cin>>s;
   getline(cin,s);
    string w="";
    vector<string> vt;
    for(auto x:s){
        if(x==' '){
            vt.push_back(w);
            w="";
        }
        else{
            w+=x;
        }
    }
   // vt.push_back(w);
    cout<<vt.size();
    for(auto x: vt){
        cout<<x<<" ";
    }
    
    return 0;
}
