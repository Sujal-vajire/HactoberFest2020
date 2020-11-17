#include <iostream>
using namespace std;

class Student
{
    protected:
        int rollno, m1, m2;
    public:
        void getdata()
        {   cout<<"Enter the Roll No:";
            cin>>rollno;
            cout<<"Enter the two marks:";
            cin >> m1>>m2;
        }
};

class Sports
{
    protected:
        int sm; 
    public:
        void getsm()
        {
            cout<<"\nEnter the sports marks :";
            cin>>sm;
        }
};

class Result : public Student, public Sports
{
    private:
        int tot;
        float avg;
    public:
        void display()
        {    
            tot = (m1 + m2 + sm);
            avg = tot/3;
            cout<<"\nRoll No: "<<rollno; 
            cout<<"\nTotal: "<<tot;
            cout<<"\nAverage: "<<avg;
        }
};

int main()
{
    Result R;
    R.getdata();
    R.getsm();
    R.display();
    
    return 0;
}
