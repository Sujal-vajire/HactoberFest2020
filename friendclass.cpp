#include<iostream>
using namespace std;

class hello
{
    char name[10];
    public:
    friend class hai; 
    
        void input()
        {
            cout<<"enter name";
            cin>>name;
        }
   
    
};
class hai
{
    

    public:
    void output(hello h)
    {
        cout<<"name="<<h.name;
        
    }
};
int main()
{
    hello h;
    hai y;
    h.input();
    y.output(h);
}
