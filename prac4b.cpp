#include <iostream>
using namespace std;
class CustomMemory{
public:
void* operator new(size_t objectSize);
void operator delete(void* ptr);
};
void* CustomMemory::operator new(size_t objectSize){
cout<<"custom memory allocation"<<endl;
return malloc(objectSize);
}
void CustomMemory::operator delete(void*ptr){
cout<<"custom memory de-allocation"<<endl;
free(ptr);
}
int main(){
CustomMemory *obj = new CustomMemory();
delete obj;
return 0;
}

