/*Write a C++ Program to allocate memory dynamically for an object of a given class using class’s 
constructor.
*/
#include <iostream>
using namespace std;
class jay{
    const char* p;
public:
    // default constructor
    jay()
    {
        // allocating memory at run time
        p = new char[6];
        p = "jay";
    }
    void display()
    {
        cout << p << endl;
    }
};
int main()
{
    jay obj;
    obj.display();
}
