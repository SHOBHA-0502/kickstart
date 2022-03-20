#include<iostream>
using namespace std;
int main(){
    int t ; 
    int d;
    
    cin>>t;
    d =t;
    while(t--){
        string i,p;
        cin>>i>>p;
        int current ;
        int count =0;
        bool f = false;
        
    int n,k;
        n = i.length();
        k = p.length();
        if(k<n){
            cout<<"case #"<< (d-t )<<": "<<"IMPOSSIBLE"<<endl;

        }
        else{
            for(int h =0 ; h<n ; h++){
                f = false;
                
                for(int j =0 ; j<k; j ++){
                    if(i[h]==p[j]){
                        p[j]='@';
                        f=true;
                        break;
                    }
                    

                }
                if(f==false){
                    cout<<"case #"<< (d-t)<<": "<<"IMPOSSIBLE"<<endl;
                    break;
                }

            }
            if(f==true){
                cout<<"case #"<< (d-t)<<": "<<k-n<<endl;
            }
        }
    }
}
//         else{
//             int h =0 ;
//             int j =0 ;
//             while(h<=n && j <=k){
//                 // cout<<"yes"<< endl;
//                 if(i[h] != p[j]){
//                     cout<< count << endl ;
//                     count+=1;
//                     current = i[h];
//                     for(int z=h;z<k;z++){
//                         p[z]=p[z+1];
//                         cout<<p<<endl;

//                     }
//                     // cout<<p<<"//"<<endl;
//                     p[k-1]=current;

//                 }
//                 else{
//                     h++;
//                     j++;
//                 }
//             }
//             // cout<<p<<" "<<i<< count;
//             cout<<"#"<< (f-t )<<": "<<count<<endl;

//         }

    
//     }
