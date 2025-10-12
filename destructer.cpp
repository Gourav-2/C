#include<iostream>
using namespace std;
class Demo {
    public:
    int data ;
    Demo(){
        cout<<"object constracted\n";
    }
    ~Demo(){
        cout<<"object destracted\n";
    }
};
int main(){
    Demo d;
    {
        Demo x;
    }
}
//destracter is a special fun that is  provide to as by c++ . It deallocate  the memory which is allocated by the consctre to an object .we do not have
