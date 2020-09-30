#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cmath>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;
char u[15],ps[11],r1=201,r2=200,r3=188,r4=187,r5=205,r6=186,r7=220,r8=202,r9=204,r10=203,r11=206,r12=185;
 void home()
 {
     cout<<"\n\n\t\t\t\t\t\t"<<r1;
    for(int i=1;i<27;i++)
        cout<<r5;
    cout<<r4<<endl;
    cout<<"\t\t\t\t\t        "<<r6<<"       HOME SECTION       "<<r6<<endl;
    cout<<"\t\t\t\t\t\t"<<r2;
    for(int i=1;i<27;i++)
        cout<<r5;
    cout<<r3<<endl;
 }
 void finance()
{
    cout<<"\n\n\t\t\t\t\t     "<<r1;
    for(int i=1;i<29;i++)
        cout<<r5;
    cout<<r4<<endl;
    cout<<"\t\t\t\t\t     "<<r6<<"\t     FINANCE SECTION      "<<r6<<endl;
    cout<<"\t\t\t\t\t     "<<r2;
    for(int i=1;i<29;i++)
        cout<<r5;
    cout<<r3<<endl;
}
void admin()
{
    cout<<"\n\n\t\t\t\t\t\t"<<r1;
    for(int i=1;i<27;i++)
        cout<<r5;
    cout<<r4<<endl;
    cout<<"\t\t\t\t\t\t"<<r6<<"\tADMIN SECTION      "<<r6<<endl;
    cout<<"\t\t\t\t\t\t"<<r2;
    for(int i=1;i<27;i++)
        cout<<r5;
    cout<<r3<<endl;
}
void fac()
{
    cout<<"\n\n\t\t\t\t\t\t"<<r1;
    for(int i=1;i<29;i++)
        cout<<r5;
    cout<<r4<<endl;
    cout<<"\t\t\t\t\t\t"<<r6<<"\tFACULTY SECTION      "<<r6<<endl;
    cout<<"\t\t\t\t\t\t"<<r2;
    for(int i=1;i<29;i++)
        cout<<r5;
    cout<<r3<<endl;
}
void stud()
{
    cout<<"\n\n\t\t\t\t\t\t"<<r1;
    for(int i=1;i<29;i++)
        cout<<r5;
    cout<<r4<<endl;
    cout<<"\t\t\t\t\t\t"<<r6<<"\tSTUDENT SECTION      "<<r6<<endl;
    cout<<"\t\t\t\t\t\t"<<r2;
    for(int i=1;i<29;i++)
        cout<<r5;
    cout<<r3<<endl;
}
class FTE
{
public:
    int a;
    void displayfte()
    {
        cout<<"\n";
        for(int i=0;i<118;i++)
        cout<<r7;
        cout<<endl;
        cout<<"\n\t\t "<<r1<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r4<<"          CHAROTAR UNIVERSITY OF SCINCE AND TECHNOLOGY"<<endl;
        cout<<"\t\t "<<r6<<" CHARUSAT "<<r6<<"             FACULTY OF ENGINEERING AND TECHNOLOGY,\n";
        cout<<" \t\t "<<r2<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r3<<"                         CHANGA, ANAND.\n";
        cout<<" \t\t                              Accredited with Grade A by KCG,\n";
        cout<<" \t\t                          Education Department, Govt. of Gujarat.\n\n";
        for(int i=0;i<118;i++)
        cout<<r7;
        cout<<endl;
        home();
        cout<<"\n\n\t Choose from the following options:";
        cout<<"\n\t1) Finance department.";
        cout<<"\n\t2) Admin department.";
        cout<<"\n\t3) Student or Faculty Login.";
        cout<<"\n\t0) Exit.\n";
        cout<<"\n\tYour choice: ";
        cin>>a;
    }
};
class LOGIN : public FTE
{
    void passwd(char *ar,int Max)
    {
        char ch;
        int x=0;
        while(1)
        {
            ch=getch();
            if(ch==13)                  //13 ascii code of enter or vertical tab
            {
                ar[x]='\0';
                break;
            }
            if(ch==8 && x!=0)           //8 ascii code of back space
            {
                cout<<"\b \b";
                if(x<=Max && x>0)
                    x--;
            }
            else if(x<Max && ch!=8)
            {
                cout<<"*";
                ar[x]=ch;
                x++;
            }
        }
    }
    public:
    void putpass()
    {
        cout<<"\n\n\n\n\n\n\n\t\tEnter User Name: ";
        cin>>u;
        cout<<"\n\t\tEnter Password: ";
        passwd(ps,10);
    }
    void getpass()
    {
        cout<<"\nUsername: "<<u;
        cout<<"\nPassword: "<<ps;

    }
    void getpasswd()
    {
        passwd(ps,10);
    }
    int cmp(string l1,string l2)                //comparing userid and password with our stored data in txt file
    {
        if(l1==u &&l2==ps)
            return 1;
        else
            return 0;
    }
};
class FACULTY
{
public:
     long pay;
     bool flag=0;
    int exp;
    string   fid,instf,ffname,flname,deptf,desg,qual,sub; //payroll
    void detail(string s)
    {
        system("cls");
        ifstream f;
        string file="Fdata.txt";
        f.open(file.c_str());
        while(f>>fid>>ffname>>flname>>deptf>>instf>>qual>>sub>>desg>>exp>>pay)
        {
            if(fid==s)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            fac();
        cout<<"\nName of Faculty             : "<<ffname<<" "<<flname;
        cout<<"\nQualification               : "<<qual;
        cout<<"\nDesignation                 : "<<desg;
        cout<<"\nInstitute:                  : "<<instf;
        cout<<"\nName of Department          : "<<deptf;
        cout<<"\nSubjects of specializations : "<<sub;
        cout<<"\nExperience                  : "<<exp;
        cout<<"\nBasic Payroll               : "<<pay<<" Rs./Month";
        }
        else
        {
            cout<<"\nNo records found...";

        }
    }
};
class STUDENT
{
    int credits[5]={7,6,4,5,5},marks[5]={0,0,0,0,0},t=0,tc=0;
    float cgpa;
    char gr[5];
    void getpoint()
    {
        float m=0.0;
        for(int i=0;i<5;i++)
            m=m+marks[i];
        cgpa=m/5;
        cgpa=cgpa/10;
        cgpa=cgpa+0.5;
        if(cgpa>10)
        {
            cgpa=10.00;
        }
        for(int i=0;i<5;i++)
        {
            tc+=credits[i];
            if(!(gr[i]=='F' || gr[i]=='-'))
                t=t+credits[i];
        }
    }
    void getgr()
    {
        for(int i=0;i<5;i++)
        {
            if(marks[i]>80 && marks[i]<=100)
                gr[i]='A';
            else if(marks[i]>65 && marks[i]<=80)
                gr[i]='B';
            else if(marks[i]>50 && marks[i]<=65)
                gr[i]='C';
            else if(marks[i]>45 && marks[i]<=50)
                gr[i]='D';
            else if(marks[i]>35 && marks[i]<=45)
                gr[i]='E';
            else if(marks[i]<=35 && marks[i]>=0)
                gr[i]='F';
            else
                gr[i]='-';
        }
    }
public:
    long fee;
    string sfname,slname,quota,insts,depts,sid;
    void detail(string q1)
    {
        system("cls");
        string a1,b1,c1,d1,e1,g1,h1,i1,filename="Sdata.txt";
        bool flag=0;
        ifstream f1;
        f1.open(filename.c_str());
        while(f1>>a1>>b1>>c1>>d1>>e1>>g1>>h1)
        {
            if(a1==q1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            system("cls");
            stud();
            cout<<"\n\n\n\tName of Student   : "<<b1<<" "<<c1;
            cout<<"\n\tStudent ID        : "<<a1;
            cout<<"\n\tDepartment        : "<<e1;
            cout<<"\n\tInstitute         : "<<d1;
            cout<<"\n\tFees per year     : "<<g1;
            cout<<"\n\tQuota of Admission: "<<h1;
            getch();
        }
        else
        {
            cout<<"\nNo records found...";
        }
    }
    void getmarks(string id)
    {

        ifstream f2,f1;
        string a,s2="Sresult.txt";
        int b,c,d,e,f;

        f1.open(s2.c_str());
        while(f1>>a>>b>>c>>d>>e>>f)
               {
                   if(a==id)
                   {
                       marks[0]=b;
                       marks[1]=c;
                       marks[2]=d;
                       marks[3]=e;
                       marks[4]=f;
                   }
               }

    }
    void result(string id)
    {
        fstream f1,f2;
        bool flag=0;
        string a1,a,c,d,e,k,b,l,m,b1;
        int f,g,h,i,j;
        a1="Sdata.txt";
        b1="Sresult.txt";
        f2.open(b1.c_str());
        while(f2>>k>>f>>g>>h>>i>>j)
        {
            if(k==id)
            {
                marks[0]=f;
                marks[1]=g;
                marks[2]=h;
                marks[3]=i;
                marks[4]=j;
                flag=0;
                break;
            }
            else
               flag=1;
        }
        if(flag==1)
        {
            cout<<"Result not declared..";
        }
        else
        {
        f1.open(a1.c_str());
        while(f1>>a>>b>>c>>d>>e>>l>>m)
        {
            if(a==id)
            {
                sfname=b;
                slname=c;
                break;
            }
        }
        system("cls");
        getgr();
        getpoint();
        string name=sfname+" ";
        name+=slname;
        getmarks(id);
        cout<<"\n\t"<<r1;
        for(int i=1;i<66;i++)
            cout<<r5;
            cout<<r4<<endl;
        cout<<"\t"<<r6<<" "<<r1<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r4<<"     CHAROTAR UNIVERSITY OF SCINCE AND TECHNOLOGY   "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" CHARUSAT "<<r6<<"        FACULTY OF ENGINEERING AND TECHNOLOGY,      "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r2<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r3<<"                    CHANGA, ANAND.                  "<<r6<<endl;
        cout<<"\t"<<r6<<"                          Accredited with Grade A by KCG,        "<<r6<<endl;
        cout<<"\t"<<r6<<"                      Education Department, Govt. of Gujarat.    "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                 "<<r6<<endl;
        cout<<"\t"<<r6<<"\t\t\t UNIVERSITY EXAM RESULT \t\t  "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                 "<<r6<<endl;
        cout<<"\t"<<r6<<"\t"<<setiosflags(ios::left)<<setw(55)<<name<<"   "<<r6<<endl;
        cout<<"\t"<<r6<<"\t"<<setiosflags(ios::left)<<setw(55)<<id<<"   "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                 "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r1;
        for(int i=1;i<30;i++)
            cout<<r5;
        cout<<r10;
        for(int i=1;i<12;i++)
            cout<<r5;
        cout<<r10;
        for(int i=1;i<10;i++)
            cout<<r5;
        cout<<r10;
        for(int i=1;i<10;i++)
            cout<<r5;
        cout<<r4<<" "<<r6<<"\n";
        cout<<"\t"<<r6<<" "<<r6<<"           SUBJECT           "<<r6<<"  CREDITS  "<<r6<<"  MARKS  "<<r6<<"  GRADE  "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r9;
        for(int i=1;i<30;i++)
            cout<<r5;
        cout<<r11;
        for(int i=1;i<12;i++)
            cout<<r5;
        cout<<r11;
        for(int i=1;i<10;i++)
            cout<<r5;
        cout<<r11;
        for(int i=1;i<10;i++)
            cout<<r5;
        cout<<r12<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" CE142     OOPC              "<<r6<<"     "<<credits[0]<<"     "<<r6<<"   "<<setw(3)<<marks[0]<<"   "<<r6<<"   "<<gr[0]<<gr[0]<<"    "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" ME144     EG                "<<r6<<"     "<<credits[1]<<"     "<<r6<<"   "<<setw(3)<<marks[1]<<"   "<<r6<<"   "<<gr[1]<<gr[1]<<"    "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" MA142     EM-2              "<<r6<<"     "<<credits[2]<<"     "<<r6<<"   "<<setw(3)<<marks[2]<<"   "<<r6<<"   "<<gr[2]<<gr[2]<<"    "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" PY141     EP                "<<r6<<"     "<<credits[3]<<"     "<<r6<<"   "<<setw(3)<<marks[3]<<"   "<<r6<<"   "<<gr[3]<<gr[3]<<"    "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" EE141     BEEE              "<<r6<<"     "<<credits[4]<<"     "<<r6<<"   "<<setw(3)<<marks[4]<<"   "<<r6<<"   "<<gr[4]<<gr[4]<<"    "<<r6<<" "<<r6<<endl;
         cout<<"\t"<<r6<<" "<<r2;
        for(int i=1;i<30;i++)
            cout<<r5;
        cout<<r8;
        for(int i=1;i<12;i++)
            cout<<r5;
        cout<<r8;
        for(int i=1;i<10;i++)
            cout<<r5;
        cout<<r8;
        for(int i=1;i<10;i++)
            cout<<r5;
        cout<<r3<<" "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                 "<<r6<<endl;
        cout<<"\t"<<r6<<"\tCGPA : "<<fixed<<setw(5)<<setprecision(2)<<cgpa<<"                                              "<<r6<<endl;
        cout<<"\t"<<r6<<"\tTotal credits : "<<setw(2)<<tc<<"                                        "<<r6<<endl;
        cout<<"\t"<<r6<<"\tTotal credits earned : "<<setw(2)<<t<<"                                 "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                 "<<r6<<endl;
        cout<<"\t"<<r2;
        for(int i=1;i<66;i++)
            cout<<r5;

        cout<<r3<<endl;
            getch();
            system("cls");
        }
    }

};
class FINANCE : public FTE , public STUDENT , public FACULTY
{
public:
      void modify_fees()
{
    string c,d,e;
    long nfees;
    string file="Sfees.txt";
    string fname,lname,id;
    long total,a,b,pending;
    ifstream f1;
    f1.open(file.c_str());
    fstream f2;
    f2.open("Sfees_temp.txt",ios::trunc);
    f2.close();
    f2.open("Sfees_temp.txt",ios::out);
//     cout<<"\nEnter userID: ";
//    cin>>u;
    while(f1>>id>>fname>>lname>>pending>>total)
    {
        f2<<id<<" "<<fname<<" "<<lname<<" "<<pending<<" "<<total<<endl;
        if(id==u)
        {
            c=id;
            d=fname;
            e=lname;
            a=pending;
            b=total;
        }
    }

        f1.close();
    f2.close();
system("cls");
  finance();
    cout<<"\nFees paid : "<<b-a<<" Rs.\nFees pending : "<<a<<" Rs.\nTotal Fees: "<<b<<" Rs."<<endl;
if(a!=0)
{
    FEE:
    cout<<"\n\nDo You Want to Pay Fees? \nEnter Y to continue or N to exit. ";
    char chop;
    cin>>chop;
    system("cls");
     finance();
    if(chop=='y' || chop=='Y')
    {
        cout<<"\n\nEnter the amount to be paid.: ";
        cin>>nfees;
        if(nfees>0 && nfees<=a)
        {
        nfees=a-nfees;

        ifstream f3;
        string fl="Sfees_temp.txt";
        f3.open(fl.c_str());
        fstream f4;
        f4.open("Sfees.txt",ios::trunc);
        f4.close();
        f4.open("Sfees.txt",ios::out);
    while(f3>>id>>fname>>lname>>pending>>total)
    {
        if(id==u)
        {
            f4<<id<<" "<<fname<<" "<<lname<<" "<<nfees<<" "<<total<<endl;

        }
        else
        {
            f4<<id<<" "<<fname<<" "<<lname<<" "<<pending<<" "<<total<<endl;
        }
    } //while ends
    cout<<"\n\nFees paid : "<<b-nfees<<" Rs.\nFees pending : "<<nfees<<" Rs.\nTotal Fees: "<<b<<" Rs."<<endl;
    cout<<"\n\n\t\t\tFees Paid Successfully. ";
    getch();
    f3.close();
    f4.close();
        }//outer if ends

        else
        {
            cout<<"\n\nInvalid amount ."<<endl;
            goto FEE;
        }
    }//if ends
}
else
{
     cout<<"\n\n\t\tFees already paid...";
     getch();
}
}

     void fee_reciept(string id)
    {
        ifstream f1;
        string Rollno,Sfirstname,Slastname,a="Sfees.txt";
        long total_fee=0,remaining_fee=0;
        bool status;


        f1.open(a.c_str());
        {
            while(f1>>Rollno>>Sfirstname>>Slastname>>remaining_fee>>total_fee)
            {
                if(id==Rollno)
                {
                   break;
                }
            }
        }
          system("cls");
          Sfirstname=Sfirstname+" ";
          Sfirstname=Sfirstname+Slastname;
         cout<<"\n\t"<<r1;
        for(int i=1;i<66;i++)
            cout<<r5;
            cout<<r4<<endl;
        cout<<"\t"<<r6<<" "<<r1<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r4<<"     CHAROTAR UNIVERSITY OF SCINCE AND TECHNOLOGY   "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" CHARUSAT "<<r6<<"        FACULTY OF ENGINEERING AND TECHNOLOGY,      "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r2<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r3<<"                    CHANGA, ANAND.                  "<<r6<<endl;
        cout<<"\t"<<r6<<"                          Accredited with Grade A by KCG,        "<<r6<<endl;
        cout<<"\t"<<r6<<"                      Education Department, Govt. of Gujarat.    "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                 "<<r6<<endl;
        cout<<"\t"<<r6<<"                      UNIVERSITY FEE RECIEPT                     "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                 "<<r6<<endl;
        cout<<"\t"<<r6<<"\t"<<setiosflags(ios::left)<<setw(45)<<Sfirstname<<"\t          "<<r6<<endl;
        cout<<"\t"<<r6<<"\t"<<setiosflags(ios::left)<<setw(51)<<Rollno<<"       "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                 "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r1;
        for(int i=1;i<43;i++)
            cout<<r5;
        cout<<r10;
        for(int i=1;i<19;i++)
            cout<<r5;
        cout<<r4;
        cout<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" PARTICULAR                               "<<r6<<" AMOUNT           "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r9;
        for(int i=1;i<43;i++)
            cout<<r5;
        cout<<r11;
        for(int i=1;i<19;i++)
            cout<<r5;
        cout<<r12;
        cout<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" Paid Fees                                "<<r6<<" "<<setiosflags(ios::left)<<setw(6)<<total_fee-remaining_fee<<" Rs.       "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" REMAINING FEES                           "<<r6<<" "<<setiosflags(ios::left)<<setw(6)<<remaining_fee<<" Rs.       "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" TOTAL FEES                               "<<r6<<" "<<setiosflags(ios::left)<<setw(6)<<total_fee<<" Rs.       "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r2;
        for(int i=1;i<43;i++)
            cout<<r5;
        cout<<r8;
        for(int i=1;i<19;i++)
            cout<<r5;
        cout<<r3;
        cout<<" "<<r6<<endl;
        cout<<"\t"<<r2;
        for(int i=1;i<66;i++)
            cout<<r5;
            cout<<r3<<endl;
        getch();
        system("cls");
    }
    void salary_certy(string id)
{
     ifstream f1;
        string fid,ffirstname,flastname,e,b,c,f,g,d,a="Fdata.txt",fname1;
        long pay=0,p=0,t=0;
        bool status;
        f1.open(a.c_str());
        {
            while(f1>>fid>>ffirstname>>flastname>>b>>c>>d>>e>>f>>g>>pay)
            {
                if(id==fid)
                {
                   break;
                }
            }
        }
        fname1=ffirstname+" "+flastname;
          system("cls");
          p=(0.9*pay);
          t=p+(12*pay);
         cout<<"\n\t"<<r1;
        for(int i=1;i<67;i++)
            cout<<r5;
            cout<<r4<<endl;
        cout<<"\t"<<r6<<" "<<r1<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r4<<"     CHAROTAR UNIVERSITY OF SCINCE AND TECHNOLOGY    "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" CHARUSAT "<<r6<<"        FACULTY OF ENGINEERING AND TECHNOLOGY,       "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r2<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r5<<r3<<"                    CHANGA, ANAND.                   "<<r6<<endl;
        cout<<"\t"<<r6<<"                          Accredited with Grade A by KCG,         "<<r6<<endl;
        cout<<"\t"<<r6<<"                      Education Department, Govt. of Gujarat.     "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                  "<<r6<<endl;
        cout<<"\t"<<r6<<"\t\t\t   SALARY CERTIFICATE    \t\t   "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                  "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                  "<<r6<<endl;
        cout<<"\t"<<r6<<"   "<<setiosflags(ios::left)<<setw(24)<<fname1<<"                                       "<<r6<<endl;
        cout<<"\t"<<r6<<"   "<<setiosflags(ios::left)<<setw(24)<<fid<<"                                       "<<r6<<endl;
        cout<<"\t"<<r6<<"   "<<setiosflags(ios::left)<<setw(24)<<b<<"                                       "<<r6<<endl;
        cout<<"\t"<<r6<<"   "<<setiosflags(ios::left)<<setw(24)<<c<<"                                       "<<r6<<endl;
        cout<<"\t"<<r6<<"                                                                  "<<r6<<endl;
         cout<<"\t"<<r6<<" "<<r1;
        for(int i=1;i<43;i++)
            cout<<r5;
        cout<<r10;
        for(int i=1;i<20;i++)
            cout<<r5;
        cout<<r4;
        cout<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" PARTICULAR                               "<<r6<<" AMOUNT            "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r9;
        for(int i=1;i<43;i++)
            cout<<r5;
        cout<<r11;
        for(int i=1;i<20;i++)
            cout<<r5;
        cout<<r12;
        cout<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" Basic Pay                                "<<r6<<" "<<setiosflags(ios::left)<<setw(8)<<pay<<"Rs./Month "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" Bonus                                    "<<r6<<" "<<setiosflags(ios::left)<<setw(8)<<p<<"Rs./Year  "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r6<<" Total Pay Per Year                       "<<r6<<" "<<setiosflags(ios::left)<<setw(8)<<t<<"Rs./Year  "<<r6<<" "<<r6<<endl;
        cout<<"\t"<<r6<<" "<<r2;
        for(int i=1;i<43;i++)
            cout<<r5;
        cout<<r8;
        for(int i=1;i<20;i++)
            cout<<r5;
        cout<<r3;
        cout<<" "<<r6<<endl;
        cout<<"\t"<<r2;
        for(int i=1;i<67;i++)
            cout<<r5;
            cout<<r3<<endl;
            getch();
        system("cls");
}

};
class ADMLOGIN : public FTE , public STUDENT , public FACULTY
{
    char aps[11],au[15];
    void passwd(char *ar,int Max)
    {
        char ch;
        int x=0;
        while(1)
        {
            ch=getch();
            if(ch==13)                  //13 ascii code of enter or vertical tab
            {
                ar[x]='\0';
                break;
            }
            if(ch==8 && x!=0)           //8 ascii code of back space
            {
                cout<<"\b \b";
                if(x<=Max && x>0)
                    x--;
            }
            else if(x<Max && ch!=8)
            {
                cout<<"*";
                ar[x]=ch;
                x++;
            }
        }
    }

    void gethod()
    {
        fstream fp;
        bool flag=1;
        string file="Fdata.txt",a,b,c,d,e,f,g,h,i,j;
        fp.open(file.c_str());
        system("cls");
        fac();
        cout<<"List of hod's :\n\n";
        resetiosflags(ios::right);
        cout<<"   ID  "<<"     NAME    "<<"     DEPARTMENT     "<<" INSTITUTE"<<endl<<endl;
        while(fp>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j)
        {
            if(h=="hod" || h=="HOD")
            {
                flag=0;
                b=b+" "+c;
                cout<<setiosflags(ios::left)<<" "<<setw(7)<<a<<" "<<setw(20)<<b<<" "<<setw(12)<<d<<setw(11)<<e<<endl;
            }
        }
        if(flag==1)
        {
            cout<<"\n\n\n\tNo records found...\a";
        }
        getch();
        system("cls");
    }
    void getsdet()
    {
    string q1,a1,b1,c1,d1,e1,g1,h1,i1,filename="Sdata.txt";
    system("cls");
    admin();
    cout<<"\nEnter the Student ID: ";
    cin>>q1;


    bool flag=0;
    ifstream f1;
    f1.open(filename.c_str());
    while(f1>>a1>>b1>>c1>>d1>>e1>>h1>>i1)
    {
        if(a1==q1)
         {
             flag=1;
             break;
         }
    }
    if(flag==1)
    {
        system("cls");
        admin();
        cout<<"\nName of Student   : "<<b1<<" "<<c1;
        cout<<"\nStudent ID        : "<<a1;
        cout<<"\nDepartment        : "<<e1;
        cout<<"\nInstitute         : "<<d1;
        cout<<"\nFees per year     : "<<h1;
        cout<<"\nAdmission Quota   : "<<i1;
    }
    else
    {
        cout<<"\n\n\n\tNo records found...\a";
    }
}
void getfdet()
{
    string file,a,b,d,c,e,f,g,h,i,j,k,l;
    ifstream fp;
    bool flag=0;
    file="Fdata.txt";
    fp.open(file.c_str());
    system("cls");
    admin();
    cout<<"\nEnter Faculty ID: ";
    cin>>l;
    while(fp>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j)
    {
        if(a==l)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        system("cls");
        admin();
        cout<<"\nName of Faculty             : "<<b<<" "<<c;
        cout<<"\nFaculty ID                  : "<<a;
        cout<<"\nQualification               : "<<f;
        cout<<"\nDesignation                 : "<<h;
        cout<<"\nInstitute:                  : "<<e;
        cout<<"\nName of Department          : "<<d;
        cout<<"\nSubjects of specializations : "<<g;
        cout<<"\nExperience                  : "<<i<<"years";
        cout<<"\nBasic Payroll               : "<<j<<"Rs./Month";
    }
    else
    {
        cout<<"\n\n\n\tNo such record found...\a";
    }
}

void getfac()
{
    OP1:
    flush(cout);
        system("cls");
        admin();
    cout<<"\n\nEnter Department: ";
    cin>>deptf;
    fstream fp;
    string a,b,c,d,e,f,g,h,file;
    system("cls");
    fac();

    cout<<endl<<endl;
    cout<<"   ID  "<<"       NAME    "<<"      DEPARTMENT "<<"INSTITUTE"<<" DESIGNATION"<<endl<<endl;
          if(deptf=="ce" || deptf=="CE")
        {
            fstream f1;
            file="F_CE.txt";
            f1.open(file.c_str());
            while(f1>>a>>b>>c>>d>>e>>f)
            {
                b=b+" "+c;
                cout<<setiosflags(ios::left)<<" "<<setw(7)<<a<<" "<<setw(20)<<b<<" "<<setw(10)<<d<<" "<<setw(7)<<e<<" "<<setw(13)<<f<<endl;
            }
        f1.close();
        }
        else if(deptf=="it" || deptf=="IT")
        {
            fstream f1;
            file="F_IT.txt";
            f1.open(file.c_str());
             while(f1>>a>>b>>c>>d>>e>>f)
            {
                 b=b+" "+c;
                 cout<<setiosflags(ios::left)<<" "<<setw(7)<<a<<" "<<setw(20)<<b<<" "<<setw(10)<<d<<" "<<setw(7)<<e<<" "<<setw(13)<<f<<endl;
            }
        f1.close();
        }
        else if(deptf=="ee" || deptf=="EE")
        {
            fstream f1;
            file="F_EE.txt";
            f1.open(file.c_str());
             while(f1>>a>>b>>c>>d>>e>>f)
            {
                b=b+" "+c;
                cout<<setiosflags(ios::left)<<" "<<setw(7)<<a<<" "<<setw(20)<<b<<" "<<setw(10)<<d<<" "<<setw(7)<<e<<" "<<setw(13)<<f<<endl;
            }
        f1.close();
        }
        else if(deptf=="cl" || deptf=="CL")
        {
            fstream f1;
            file="F_CL.txt";
            f1.open(file.c_str());
             while(f1>>a>>b>>c>>d>>e>>f)
            {
                 b=b+" "+c;
                 cout<<setiosflags(ios::left)<<" "<<setw(7)<<a<<" "<<setw(20)<<b<<" "<<setw(10)<<d<<" "<<setw(7)<<e<<" "<<setw(13)<<f<<endl;
            }
        f1.close();
        }
        else if(deptf=="me" || deptf=="ME")
        {
            fstream f1;
         file="F_ME.txt";
         f1.open(file.c_str());
             while(f1>>a>>b>>c>>d>>e>>f)
            {
                 b=b+" "+c;
                 cout<<setiosflags(ios::left)<<" "<<setw(7)<<a<<" "<<setw(20)<<b<<" "<<setw(10)<<d<<" "<<setw(7)<<e<<" "<<setw(13)<<f<<endl;
            }
        f1.close();
        }
        else if(deptf=="depstar" || deptf=="DEPSTAR" )
        {
            fstream f1;
         file="F_DEP.txt";
         f1.open(file.c_str());
             while(f1>>a>>b>>c>>d>>e>>f)
            {
                 b=b+" "+c;
                 cout<<setiosflags(ios::left)<<" "<<setw(7)<<a<<" "<<setw(20)<<b<<" "<<setw(9)<<d<<" "<<setw(8)<<e<<" "<<setw(13)<<f<<endl;
            }
        f1.close();
        }
         else
        {
            system("cls");
            cout<<"\n\n\n\tEnter proper department...\a";
            getch();
            system("cls");
            goto OP1;
        }
        getch();
        system("cls");
}
void getstud()
{
    OP:
        system("cls");
        admin();
    cout<<"\n\nEnter Department: ";
    cin>>depts;
    fstream fp;
    string a,b,c,d,e,file;
    system("cls");
    stud();
    cout<<endl<<endl;
    cout<<"   ID  "<<"     NAME    "<<"      INSTITUE "<<" DEPARTMENT"<<endl<<endl;
     if(depts=="ce" || depts=="CE")
        {
            fstream f1;
            file="S_CE.txt";
            f1.open(file.c_str());
            while(f1>>a>>b>>c>>d>>e)
            {
                b=b+" "+c;
                cout<<setiosflags(ios::left)<<setw(7)<<a<<" "<<setw(18)<<b<<" "<<setw(10)<<d<<setw(11)<<e<<endl;
            }
            f1.close();
        }
        else if(depts=="it" || depts=="IT")
        {
            fstream f1;
            file="S_IT.txt";
            f1.open(file.c_str());
            while(f1>>a>>b>>c>>d>>e)
            {
               cout<<setiosflags(ios::left)<<setw(7)<<a<<" "<<setw(10)<<b<<" "<<setw(10)<<c<<" "<<setw(10)<<d<<setw(11)<<e<<endl;
            }
        f1.close();
        }
        else if(depts=="ee" || depts=="EE")
        {
            fstream f1;
            file="S_EE.txt";
            f1.open(file.c_str());
            while(f1>>a>>b>>c>>d>>e)
            {
                cout<<setiosflags(ios::left)<<setw(7)<<a<<" "<<setw(10)<<b<<" "<<setw(10)<<c<<" "<<setw(10)<<d<<setw(11)<<e<<endl;
            }
        f1.close();
        }
        else if(depts=="cl" || depts=="CL")
        {
            fstream f1;
            file="S_CL.txt";
            f1.open(file.c_str());
            while(f1>>a>>b>>c>>d>>e)
            {
               cout<<setiosflags(ios::left)<<setw(7)<<a<<" "<<setw(10)<<b<<" "<<setw(10)<<c<<" "<<setw(10)<<d<<setw(11)<<e<<endl;
            }
        f1.close();
        }
        else if(depts=="me" || depts=="ME")
        {
            fstream f1;
            file="S_ME.txt";
            f1.open(file.c_str());
            while(f1>>a>>b>>c>>d>>e)
            {
                cout<<setiosflags(ios::left)<<setw(7)<<a<<" "<<setw(10)<<b<<" "<<setw(10)<<c<<" "<<setw(10)<<d<<setw(11)<<e<<endl;
            }
        f1.close();
        }
        else if(depts=="dce" || depts=="DCE")
        {
            fstream f1;
            file="S_DCE.txt";
            f1.open(file.c_str());
            while(f1>>a>>b>>c>>d>>e)
            {
               cout<<setiosflags(ios::left)<<setw(7)<<a<<" "<<setw(10)<<b<<" "<<setw(10)<<c<<" "<<setw(10)<<d<<setw(11)<<e<<endl;
            }
        f1.close();
        }
        else if(depts=="dcs" || depts=="DCS")
        {
            fstream f1;
            file="S_DCS.txt";
            f1.open(file.c_str());
            while(f1>>a>>b>>c>>d>>e)
            {
                cout<<setiosflags(ios::left)<<setw(7)<<a<<" "<<setw(10)<<b<<" "<<setw(10)<<c<<" "<<setw(10)<<d<<setw(11)<<e<<endl;
            }
        f1.close();
        }
        else if(depts=="dit" || depts=="DIT")
        {
            fstream f1;
            file="S_DIT.txt";
            f1.open(file.c_str());
            while(f1>>a>>b>>c>>d>>e)
            {
                cout<<setiosflags(ios::left)<<setw(7)<<a<<" "<<setw(10)<<b<<" "<<setw(10)<<c<<" "<<setw(10)<<d<<setw(11)<<e<<endl;
            }
        f1.close();
        }
        else
        {
            cout<<"Enter proper department...";
            goto OP;
        }
        getch();
        system("cls");
    }
    public:
    char A1;
    void putpass()
    {
        cout<<"\n\n\n\n\n\n\n\t\tEnter User Name: ";
        cin>>au;
        cout<<"\n\t\tEnter Password: ";
        passwd(aps,10);
    }
    int cmp(string l1,string l2)                //comparing userid and password with our stored data in txt file
    {
        if(l1==au &&l2==aps)
            return 1;
        else
            return 0;
    }

    void choice()
    {
        int p;
        while(1)
        {
            X:
            system("cls");
            admin();
            cout<<"\n\n\n\n\tChoose from the following option: ";
            cout<<"\n\t1)Student Section.";
            cout<<"\n\t2)Faculty Section.";
            cout<<"\n\t0)Exit to Homepage.";
            cout<<"\n\tYour Choice: ";
            cin>>p;
            system("cls");
            switch(p)
            {
            case 1:
                {
                    int i;
                    Q:
                    system("cls");
                    admin();
                    cout<<"\n\n";
                    cout<<"\n\t1) Find And Display The Entry";
                    cout<<"\n\t2) List of Student in particular Department.";
                    cout<<"\n\t0) Exit To Previous Menu.";
                    cout<<"\n\tYour Choice: ";
                    cin>>i;
                    system("cls");
                    switch(i)
                    {
                    case 1:
                        {
                            P:
                             system("cls");
                            admin();
                            getsdet();
                            char i;
                            cout<<"\n\nDo you want to find new entry :\a\n ";
                            cout<<"Press Y to Continue and N to Finish :  ";
                            cin>>i;
                            if(i=='y' || i=='Y')
                            goto P;
                            else
                            goto Q;
                        }
                    case 2:
                        {
                            system("cls");
                            admin();
                            getstud();
                            goto Q;
                        }
                    case 0:
                        {
                            system("cls");
                            admin();
                            goto X;
                        }
                    default:
                        {
                            system("cls");
                            cout<<"\n\n\n\tEnter proper choice...\a";
                            getch();
                            goto Q;
                        }
                    }
                }
            case 2:
               {
                    int i;
                    M:
                    system("cls");
                    fac();
                    cout<<"\n";
                    cout<<"\n\t1) Find And Display The Entry.";
                    cout<<"\n\t2) List of all HOD's.";
                    cout<<"\n\t3) List of Faculty in particular Department.";
                    cout<<"\n\t0) Exit To Previous Menu.";
                    cout<<"\n\tYour Choice: ";
                    cin>>i;
                    switch(i)
                    {

                    case 1:
                        {
                        R:
                            system("cls");
                            fac();
                            getfdet();
                            char i;
                            cout<<"\n\nDo you want to continue : ";
                            cout<<"\nPress Y to Continue and N to Finish :  ";
                            cin>>i;
                            if(i=='y' || i=='Y')
                            goto R;
                            else
                            goto M;
                        }
                    case 2:
                        {
                            system("cls");
                            fac();
                            gethod();
                            goto M;
                        }
                    case 3:
                        {
                            system("cls");
                            fac();
                            getfac();
                            goto M;
                        }
                    case 0:
                        {
                            system("cls");
                            fac();
                            goto X;
                        }
                    default:
                        {
                            cout<<"\n\n\n\tEnter proper choice...\a";
                            getch();
                            goto M;
                        }
                    }
               }

                case 0:
                    {
                        break;
                    }
                default:
                    {
                        cout<<"\n\n\n\tEnter Proper Choice...\a";
                        getch();
                        goto X;
                    }
            }
            break;
        }
    }
};

int main()
{
    char x=221,Y=222;
    FTE f;
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t      "<<x<<"  UNIVERSITY\nMANAGEMENT \a"<<Y<<"\n\n\n\n\n\n\n\n\n";
    getch();
    A:
    {
    system("cls");

    int flag=0;

    f.displayfte();
    while(1)
    {
        system("cls");
        switch(f.a)
        {
        case 1:
            {
                Rf:
                LOGIN l;
                FINANCE f6;
                string l1,p,id,l2,filename="LOGIN.txt",b="Fdata.txt",SFname,SLname;
                long Tfee,Rfee;
                int flag;
                bool Status;
                l.putpass();
                ifstream fp;
                fp.open(filename.c_str());
                while(fp>>p>>l1>>l2)
                {
                    if(p=="S")
                    {
                        flag=l.cmp(l1,l2);
                        if(flag==1)
                            break;
                    }
                    else if(p=="F")
                    {
                        flag=l.cmp(l1,l2);
                        if(flag==1)
                        {
                            flag=2;
                            break;
                        }
                    }

                }
                fp.close(); //finance dept.
                if(flag==1)
                {
                    STUDENT s;
                    int k;
                    X:
                    system("cls");
                    finance();
                    cout<<"\n\tEnter your choice: \n";
                    cout<<"\n\t1) Pay Fees.";
                    cout<<"\n\t2) Fee Receipt.";
                    cout<<"\n\t0) Exit.";
                    cout<<"\n\tYour choice: ";
                    cin>>k;
                    switch(k)
                    {
                    case 0:
                        {
                            goto A;
                            break;
                        }
                    case 1:
                        {

                            f6.modify_fees();
                            getch();
                            goto X;
                            break;
                        }
                    case 2:
                        {
                            f6.fee_reciept(u);
                            goto X;
                            break;
                        }
                    }
                }
                else if(flag==2)
                {
                  FACULTY f;
                  string y,d,ins,qualification,sub,de;
                  long s;
                  bool k;
                  int x;
                  F:
                      system("cls");
                      finance();
                      cout<<"\n\t1) Generate Salary Certificate \n";
                      cout<<"\n\t0) exit \n";
                      cout<<"\n\tEnter your choice: ";
                      cin>>k;
                      switch(k)
                      {
                      case 1:
                        {
                            system("cls");
                            f6.salary_certy(u);
                            goto F;
                        }
                      case 0:
                        {
                            system("cls");
                            finance();
                            goto A;
                        }
                      }
                }
                else
                {
                    system("cls");
                    cout<<"\n\n\n\t\t\tInvalid UserId Password!!!\a\n";
                    char i;
                        cout<<"\n\nDo you want to Proceed again: \a";
                        cout<<"\nPress Y to Continue and N to Finish :  ";
                        cin>>i;
                        system("cls");
                            if(i=='y' || i=='Y')
                            goto Rf;
                            else
                            goto A;
                    system("cls");
                }
            }
        case 2:
            {
                ADMLOGIN al;
                string l1,p,l2,filename="LOGIN.txt";
                C:
                    al.putpass();
                ifstream fp;
                fp.open(filename.c_str());
                while(fp>>p>>l1>>l2)
                {
                    if(p=="A")
                    {
                        flag=al.cmp(l1,l2);
                        if(flag==1)
                            break;
                    }
                }
                if(flag==1)
                {
                    system("cls");
                    al.choice();

                }
                else if(flag==0)
                {
                    system("cls");
                    cout<<"\n\n\n\n\n\t\t\tEnter Valid UserID Password!!!\a\n";
                     char i;
                        cout<<"\n\nDo you want to Proceed again: \a";
                        cout<<"\nPress Y to Continue and N to Finish :  ";
                        cin>>i;
                        system("cls");
                            if(i=='y' || i=='Y')
                            goto C;
                            else
                                goto A;
                    system("cls");
                }
                system("cls");
                goto A;
            }
        case 3:
            {

                Rl:
                LOGIN l;
                string l1,p,l2,filename="LOGIN.txt";
                l.putpass();
                ifstream fp;
                fp.open(filename.c_str());
                while(fp>>p>>l1>>l2)
                {
                    if(p=="S")
                    {
                        flag=l.cmp(l1,l2);
                        if(flag==1)
                            break;
                    }
                    if(p=="F")
                    {
                        flag=l.cmp(l1,l2);
                        if(flag==1)
                        {
                            flag=2;
                            break;
                        }
                    }

                }
                fp.close();
                if(flag==1)
                {
                    STUDENT s;
                    int k;
                    J:
                    system("cls");
                    stud();
                    cout<<"\n\tEnter your choice: \n";
                    cout<<"\n\t1) Result.";
                    cout<<"\n\t2) Details.";
                    cout<<"\n\t0) Exit.";
                    cout<<"\n\tYour choice: ";
                    cin>>k;
                    system("cls");
                    switch(k)
                    {
                    case 0:
                        {
                            goto A;
                            break;
                        }
                    case 1:
                        {
                            s.result(u);
                            goto J;
                        }
                    case 2:
                        {
                            s.detail(u);
                            goto J;
                        }
                    default:
                        {
                            cout<<"\n\n\t\t\t\t\nEnter the proper choice...\a";
                            getch();
                            goto J;
                        }
                    }

                }
                else if(flag==2)
                {
                    FACULTY f;
                    int k;
                    J1:
                    system("cls");
                    fac();
                    cout<<"\n\n\n\n\tEnter your choice: \n";
                    cout<<"\n\t1) Details.";
                    cout<<"\n\t0) Exit.";
                    cout<<"\n\tYour choice.";
                    cin>>k;
                    switch(k)
                    {
                    case 0:
                        {
                            goto A;
                            break;
                        }
                    case 1:
                        {
                            system("cls");
                            fac();
                            f.detail(u);
                            //system("PAUSE");
                            getch();
                            goto J1;
                            break;
                        }
                    default:
                        {
                            cout<<"\n\n\n\t\t\t\tEnter the proper choice...\a";
                            getch();
                            goto J1;
                        }
                    }

                }
                else
                {
                    system("cls");
                    cout<<"\n\n\n\n\n\t\t\tEnter Valid UserID Password!!!\a\n";
                     char i;
                        cout<<"\n\nDo you want to Proceed again: \a";
                        cout<<"\nPress Y to Continue and N to Finish :  ";
                        cin>>i;
                        system("cls");
                            if(i=='y' || i=='Y')
                            goto Rl;
                            else
                                goto A;
                    system("cls");
                }
                    goto A;
            }
        case 0:
            {
                char x=221,y=222;
                cout<<"\n\n\n\n\n\n\n\n";
                cout<<"\t\t\t\t    "<<x<<" THANK YOU FOR USING COLLEGE MANAGEMENT SYSTEM \a"<<y;

                getch();
                system("cls");
                cout<<"\n\n\tPREPARED BY:-"<<endl;
                cout<<"\n\t"<<x<<" RUDRA BARAD      18DCS007";
                cout<<"\n\t"<<x<<" MANAN JOSHI      18DCS030";
                cout<<"\n\t"<<x<<" KRISH PABANI     18DCS054";
                cout<<"\n\t"<<x<<" DEVARSH JADEJA   18DCS028\n\n\n\n\n";
                getch();
                goto E;
                break;
            }
        default:
            {
                cout<<"\nEnter the proper choice...\a";
                getch();
                goto A;
            }
        }
    }
    }
    E:
    return 0;
}




