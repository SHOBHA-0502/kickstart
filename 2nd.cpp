#include<bits/stdc++.h>
using namespace std ;

int sum(int x){
    if(x<10){
        return x;
    }
    int small_sum = sum(x/10);
    int output = small_sum +x%10;
    // cout<< output<< ";;";

    return output;
}
int finalnum(int x, int y){
    bool bda = false;
    if(x <10){
        if(x<y){
            bda =true;
        }
        return 1;

        }
        int small_finalnum= finalnum(x/10,y);
        int output = small_finalnum +1;
        
        if(bda ==false){
            int k ;
            int z = output;
            k = pow(10,2);
            cout<< k<<";;";
            return k + x;

        }
        else {
            return x*10 +y;
        }
    }



int main(){
int t ;
cin>>t ;
while(t--){
    int n ;
    cin>>n ;
    int z;
    z =sum(n)%9;
    finalnum(n,z);

}
}