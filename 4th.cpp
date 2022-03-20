#include<iostream>
using namespace std;



int product(int x){
    if(x<10){
        return x;
    }
 int small_product = product(x/10);
 int output = small_product *(x%10);

 return output;
}

int sum(int y){
    if(y<10){
        return y;
    }
    int small_sum = sum(y/10);
    int output = small_sum + y%10;
    
    return output;
}


int main(){
    int t ;
    cin>>t;
    int f ;
    f =t;
    int count ;
    while(t--){
        int a , b ;
        cin>>a >>b ;
        int count =0 ;
        for(int i=a; i<=b; i++){
            
            
            int z ;
            if(sum(i)!=0){
            z = product(i)%sum(i);
            }
            if(z==0){
                count ++;;
                
            }


        }
        cout<<"Case #"<<(f-t)<<"; "<< count<< endl;
    }
}