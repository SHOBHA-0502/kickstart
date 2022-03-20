#include<iostream>
using namespace std ;
int main(){
    string s;

    cin>>s;
    int n = s.length();
    for(int i =2; i<n ; i++){
        s[i]=s[i+1];
    }
    
    cout<<s;

}