#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int sum =0 ;
    int arr[n][3];
    for(int i =0 ; i<n ;i++){
        for(int j=0 ; j<3; j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0 ; i<n ;i++){
        sum=0;
        for(int j =0 ;j<3 ;j++){
            sum +=arr[j][i];

        }
        if(sum!=0){
            cout<<"NO";
            break;
        }
        
    }
    if(sum==0){
    cout<<"YES"<<endl;}
}