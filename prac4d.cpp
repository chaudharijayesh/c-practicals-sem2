#include <iostream>
using namespace std;
class fabonacci{
int n1,n2;
public:
fabonacci(){
    n1=0;
    n2=1;
}
void series(int n);
};
void fabonacci:: series(int n){
    int i,next;
    cout<< n1 <<" "<< n2 << " ";
    for ( i = 1; i <=n-2; i++)
    {
        next=n1+n2;
        cout<<next<<" ";
        n1=n2;
        n2=next;
    }
    
}
int main(){
fabonacci f;
int n;
cout<< "Enter Range"<<endl;
cin>>n;
f.series(n);
    return 0;
}