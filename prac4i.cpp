#include <iostream>
using namespace sdt;
class Alpha{
    int x;
    public:
    Alpha(int i){
        x=i;
        cout<<"\n Alpha constructed";
    }
    ~Alpha(){
        cout<<"\n Alpha destroyed";
    }
void show_alpha(){
    cout<<" X = "<<x<,endl;
}  };
class Beta{
float p,q;
public:
Beta(int i,float a, float b){
p=i;
q=b;
cout<<"\n Beta constructed";
}
~Beta(){
    cout<<"\n Beta destroyrd";
}
void show_beta(){
    cout<<" P = "<<p<<endl;
    cout<<" Q = "<<q<<endl;
}
};
class Gama : public Alpha, public: Beta{
int u,v:

}