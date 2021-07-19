#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<ctime>
#include<time.h>
#include<conio.h>
#include<windows.h>
using namespace std;

int score=0,level_score=0;

void AP(int a,int d, int m)
{
    int arr[5];
    int res;
    arr[0]=a;
    for(int i=1; i<=4; i++)
    {
        arr[i]=a+(d*i);
    }
    cout<<"\n Question "<<m<<" ::  ";
    for(int i=0; i<4; i++)
    {
        cout<<" "<<arr[i]<<"   ";
    }
    cout<<"?  = ";
    int stop=0;
    time_t start = time(0);
    while ( !kbhit() )
    {
        if (abs(time(0) - start) > 7)
        {
            stop=1;
            break;
        }
    }
    if (stop==1)
    {
        cout<<endl;
        cout << " Time's Up!!";
        cout<<endl;
    }
    else
    {
        cin >> res;
        if(res==arr[4])
        {
            cout << " RIGHT:)\n";
            score++;
            level_score++;
        }
        else
        {
            cout << " Wrong Answer:(\n";
        }
    }
    return;
}

void GP(int a,int r, int la)
{
    int arr[5];
    int res;
    arr[0]=a;
    for(int i=1; i<=4; i++)
    {
        arr[i]=a*round((pow(r,i)));
    }
    cout<<"\n Question "<<la<<" ::  ";
    for(int i=0; i<4; i++)
    {
        cout<<" "<<arr[i]<<"   ";
    }
    cout<<"?  = ";
    int stop=0;
    time_t start = time(0);
    while ( !kbhit() )
    {
        if (abs(time(0) - start) > 8)
        {
            stop=1;
            break;
        }
    }
    if (stop==1)
    {
        cout<<endl;
        cout << " Time's Up!!";
        cout<<endl;
    }
    else
    {
        cin >> res;
        if(res==arr[4])
        {
            cout << " RIGHT:)\n";
            score++;
            level_score++;
        }
        else
        {
            cout << " Wrong Answer:(\n";
        }
    }
    return;
}

void easylevel()
{
    level_score=0;
    cout<<"________________________________"<<endl;
    cout<<endl;
    cout<<" Solve these basic math problems "<<endl;
    cout<<"________________________________";
    cout<<endl;
    for(int i=1; i< 6; i++)
    {

        int ans;
        char a[3] = {'+', '-', '*'};
        char oper= a[rand()%3];
        int A=rand()%15;
        int B=rand()%15;
        cout<<"\n Question "<<i<<" ::  "<<A<<" "<<oper<<" "<<B<<" = ";
        int stop=0;
        time_t start = time(0);
        while ( !kbhit() )
        {
            if (abs(time(0) - start) > 5)
            {
                stop=1;
                break;
            }
        }
        if (stop==1)
        {
            cout<<endl;
            cout << " Time's Up!!";
            cout<<endl;
        }
        else
        {
            cin >> ans;
            if(oper=='+')
            {
                if(ans==A+B)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }

            else if(oper == '-')
            {
                if(ans==A-B)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }

            else if(oper == '*')
            {
                if(ans==A*B)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }
        }
    }
    cout<<endl;
    cout<<"________________"<<endl;
    cout<<endl;
    cout<<" Find next term:"<<endl;
    cout<<"________________";
    cout<<endl;
    for(int i=6; i<11; i++)
    {

        if((i==6)||i==10)
        {
            int a=rand()%5+1;
            int d=rand()%5+1;
            AP(a,d,i);
        }
        else
        {
            int a=rand()%4+1;
            int d=rand()%2+1;
            GP(a,d,i);
        }
    }
    cout<<"______________________"<<endl;
    cout<<endl;
    cout<<" Level score "<<level_score<<endl;
    cout<<" Total score "<<score<<endl;
    cout<<"______________________";
    cout<<endl;
}

void mediumfunc1(int i)
{
    int ans;
    char a[3] = {'+', '-', '*'};
    char oper1= a[rand()%3];
    char oper2= a[rand()%3];
    int A=rand()%10;
    int B=rand()%10;
    int C=rand()%10;
    cout<<"\n Question "<<i<<" ::  "<<A<<" "<<oper1<<" "<<B<<" "<<oper2<<" "<<C<<" = ";
    int stop=0;
    time_t start = time(0);
    while ( !kbhit() )
    {
        if (abs(time(0) - start) > 9)
        {
            stop=1;
            break;
        }
    }
    if (stop==1)
    {
        cout<<endl;
        cout << " Time's Up!!";
        cout<<endl;
    }
    else
    {
        cin>> ans;
        if(oper1=='+')
        {
            if(oper2=='+')
            {
                if(ans==A+B+C)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }
            else if(oper2=='-')
            {
                if(ans==A+B-C)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }
            else
            {
                if(ans==A+B*C)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }
        }

        else if(oper1 == '-')
        {
            if(oper2=='+')
            {
                if(ans==A-B+C)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }
            else if(oper2=='-')
            {
                if(ans==A-B-C)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }
            else
            {
                if(ans==A-B*C)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }
        }

        else if(oper1 == '*')
        {
            if(oper2=='+')
            {
                if(ans==A*B+C)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }
            else if(oper2=='-')
            {
                if(ans==A*B-C)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }
            else
            {
                if(ans==A*B*C)
                {
                    cout << " RIGHT:)\n";
                    score++;
                    level_score++;
                }
                else
                {
                    cout << " Wrong Answer:(\n";
                }
            }
        }
    }
}

void mediumfunc2(int a, int b, int c, int nois)
{
    bool valid;
    string ans;
    if(a+b > c && b+c > a && a+c > b)
    {
        valid = true;
    }
    else
    {
        valid = false;
    }
    cout<<"\n Question "<<nois<<" ::  ";
    cout << "Sides of triangle: " << a << " " << b << " " << c << endl;
    cout<<" Yes/No: ";
    int stop=0;
    time_t start = time(0);
    while ( !kbhit() )
    {
        if (abs(time(0) - start) > 9)
        {
            stop=1;
            break;
        }
    }
    if (stop==1)
    {
        cout<<endl;
        cout << " Time's Up!!";
        cout<<endl;
    }
    else
    {
        cin >> ans;
        if((ans == "yes" || ans == "Yes") && valid == true)
        {
            cout << " RIGHT:)\n";
            score++;
            level_score++;
        }
        else if((ans == "no" || ans == "No") && valid == false)
        {
            cout << " RIGHT:)\n";
            score++;
            level_score++;
        }
        else
        {
            cout << " Wrong Answer:(\n";
        }
    }
}


void mediumlevel()
{
    level_score=0;
    cout<<"___________________________"<<endl;
    cout<<endl;
    cout<<" Solve simple math problems"<<endl;
    cout<<"___________________________"<<endl;
    cout<<endl;
    for(int i=1; i<3; i++)
    {
        mediumfunc1(i);
    }
    cout<<endl<<endl;
    cout<<"_______________________________________________________________________"<<endl;
    cout<<endl;
    cout<<" Is it possible to form a triangle with the given side lengths? (Yes/No)"<<endl;
    cout<<"_______________________________________________________________________"<<endl;
    cout<<endl;
    for(int i=3; i<7; i++)
    {
        mediumfunc2(rand()%9+1, rand()%9+1, rand()%9+1,i);
    }
    cout<<endl;
    cout<<"_____________________________"<<endl;
    cout<<endl;
    cout<<" Find the next term in series ";
    cout<<endl;
    cout<<"_____________________________"<<endl;
    cout<<endl;
    for(int i=7; i<9; i++)
    {
        int a=rand()%10+1;
        int d=rand()%10+1;
        AP(a,d,i);

    }
    for(int i=9; i<11; i++)
    {
        int a=rand()%10+1;
        int d=rand()%4+1;
        GP(a,d,i);
    }
    cout<<"_______________________"<<endl;
    cout<<endl;
    cout<<" Level score "<<level_score<<endl;
    cout<<" Total score "<<score<<endl;
    cout<<"_______________________";
    cout<<endl;
}

void hardfun1(int chk)
{
    int ans,k;
    char a[3] = {'+', '-', '*'};
    char oper1= a[rand()%3];
    char oper2= a[rand()%3];
    int A=rand()%10+3;
    int B=rand()%10+3;
    int C=rand()%10+3;
    if(oper1=='+')
    {
        if(oper2=='+')
            ans=A+B+C;
        else if(oper2=='-')
            ans=A+B-C;
        else
            ans=A+B*C;
    }

    else if(oper1 == '-')
    {
        if(oper2=='+')
            ans=A-B+C;
        else if(oper2=='-')
            ans=A-B-C;
        else
            ans=A-B*C;
    }

    else if(oper1 == '*')
    {
        if(oper2=='+')
            ans=A*B+C;
        else if(oper2=='-')
            ans=A*B-C;
        else
            ans=A*B*C;
    }
    int chkis = rand()%3;
    if(chkis==0)
    {
        cout<<"\n\n Question "<<chk<<" ::  A "<<oper1<<" "<<B<<" "<<oper2<<" "<<C<<" = "<<ans<<endl;
        cout<<" Enter the value of A : ";
        int stop=0;
        time_t start = time(0);
        while ( !kbhit() )
        {
            if (abs(time(0) - start) > 13)
            {
                stop=1;
                break;
            }
        }
        if (stop==1)
        {
            cout<<endl;
            cout << " Time's Up!!";
            cout<<endl;
        }
        else
        {

            cin>>k;
            if(k==A)
            {
                cout << " RIGHT:)\n";
                score++;
                level_score++;
            }
            else
                cout << " Wrong Answer:(\n";
        }
    }
    else if(chkis==1)
    {
        cout<<"\n\n Question "<<chk<<" ::  "<<A<<" "<<oper1<<" B "<<oper2<<" "<<C<<" = "<<ans<<endl;
        cout<<" Enter the value of B : ";
        int stop=0;
        time_t start = time(0);
        while ( !kbhit() )
        {
            if (abs(time(0) - start) > 13)
            {
                stop=1;
                break;
            }
        }
        if (stop==1)
        {
            cout<<endl;
            cout << " Time's Up!!";
            cout<<endl;
        }
        else
        {

            cin>>k;
            if(k==B)
            {
                cout << " RIGHT:)\n";
                score++;
                level_score++;
            }
            else
                cout << " Wrong Answer:(\n";
        }
    }
    else
    {
        cout<<"\n\n Question "<<chk<<" ::  "<<A<<" "<<oper1<<" "<<B<<" "<<oper2<<" C = "<<ans<<endl;
        cout<<" Enter the value of C : ";
        int stop=0;
        time_t start = time(0);
        while ( !kbhit() )
        {
            if (abs(time(0) - start) > 13)
            {
                stop=1;
                break;
            }
        }
        if (stop==1)
        {
            cout<<endl;
            cout << " Time's Up!!";
            cout<<endl;
        }
        else
        {

            cin>>k;
            if(k==C)
            {
                cout << " RIGHT:)\n";
                score++;
                level_score++;
            }
            else
                cout << " Wrong Answer:(\n";
        }

    }
}
int countbox(int m, int n)
{
    if (n < m)
    {
        int temp = m;
        m = n;
        n = temp;
    }
    return m * (m + 1) * (2 * m + 1) / 6 + (n - m) * m *(m + 1) / 2;
}

void hardfun2(int chk)
{
    cout<<"\n\n Question "<<chk<<" ::  ";

    int n = rand()%4+3;
    int m = rand()%4+3;

    cout<<endl;
    cout<<"\t";
    for(int j=0; j<m; j++)
    {
        cout<<" __";
    }
    cout<<"\n";
    for(int i=0; i<n; i++)
    {
        cout<<"\t";
        for(int j=0; j<m; j++)
        {
            cout<<"|__";
            if(j==m-1)
            {
                cout<<"|";
            }
        }
        cout<<"\n";
    }
    cout<<endl;
    int no,s;
    cout<<" Enter your answer :";
    int stop=0;
    time_t start = time(0);
    while ( !kbhit() )
    {
        if (abs(time(0) - start) > 14)
        {
            stop=1;
            break;
        }
    }
    if (stop==1)
    {
        cout<<endl;
        cout << " Time's Up!!";
        cout<<endl;
    }
    else
    {
        cin>>no;
        if(no==countbox(m,n))

        {
            cout << " RIGHT:)\n";
            score++;
            level_score++;
        }
        else
            cout << " Wrong Answer:(\n";
    }
}

void hardfun3(int chk)
{
    int a=rand()%20+1;
    int m=rand()%12+1;
    int n=rand()%12+1;
    int ans;
    cout<<"\n\n Question "<<chk<<" ::  \n";
    cout<<" __ __ __ __ __ __\n";
    cout<<"|     |     |     |\n";
    cout<<"|"<<setw(3)<<a<<setw(3)<<"|"<<setw(3)<<(a+(2*m+1))<<setw(3)<<"|"<<setw(3)<<(a+(2*m+1)+(2*m+3))<<setw(4)<<"|\n";
    cout<<"|__ __|__ __|__ __|\n";
    cout<<"|     |     |     |\n";
    cout<<"|"<<setw(3)<<a+n+1<<setw(3)<<"|"<<setw(3)<<"?"<<setw(3)<<"|"<<setw(3)<<(a+n+1+(2*m+1)+(2*m+3))<<setw(4)<<"|\n";


    cout<<"|__ __|__ __|__ __|\n";
    cout<<"|     |     |     |\n";
    cout<<"|"<<setw(3)<<a+(2*n)+1<<setw(3)<<"|"<<setw(3)<<(a+(2*n)+1+(2*m+1))<<setw(3)<<"|"<<setw(3)<<(a+(2*n)+1+(2*m+1)+(2*m+3))<<setw(4)<<"|\n";

    cout<<"|__ __|__ __|__ __|\n";
    cout<<endl;
    cout<<" Enter your answer : ";
    int stop=0;
    time_t start = time(0);
    while ( !kbhit() )
    {
        if (abs(time(0) - start) > 14)
        {
            stop=1;
            break;
        }
    }
    if (stop==1)
    {
        cout<<endl;
        cout << " Time's Up!!";
        cout<<endl;
    }
    else
    {

        cin>>ans;
        if(ans==(a+n+1+(2*m+1)))
        {
            cout << " RIGHT:)\n";
            score++;
            level_score++;
        }
        else
            cout << " Wrong Answer:(\n";
    }
}

void hardlevel()
{
    level_score=0;
    cout<<endl;
    cout<<"__________________________"<<endl;
    cout<<endl;
    cout<<" Find the missing variable ";
    cout<<endl;
    cout<<"__________________________"<<endl;
    cout<<endl;
    for(int i=1; i<5; i++)
    {
        hardfun1(i);
    }
    cout<<endl;
    cout<<"_____________________________"<<endl;
    cout<<endl;
    cout<<" Find the missing number in box ";
    cout<<endl;
    cout<<"______________________________"<<endl;
    cout<<endl;

    for(int i=5; i<8; i++)
    {
        hardfun3(i);
    }
    cout<<endl;
    cout<<"____________________________"<<endl;
    cout<<"\n If \n";
    cout<<"\t _ _ \n";
    cout<<"\t|_|_|\n";
    cout<<"\t|_|_|"<<setw(2)<<" = 5\n\n";
    cout<<" Then solve the following: \n";
    cout<<endl;
    cout<<"____________________________"<<endl;
    cout<<endl;
    for(int i=8; i<11; i++)
    {
        hardfun2(i);
    }

    cout<<"______________________"<<endl;
    cout<<endl;
    cout<<" Level score "<<level_score<<endl;
    cout<<" Total score "<<score<<endl;
    cout<<"_______________________";
    cout<<endl;
}

int main()
{
    srand(time(NULL));

    int c;
    string name;
    cout<<"\n";
    cout<<"\t\t\t\tWELCOME TO MATH GAME!"<<endl;
    for(int i=0; i<80; i++)
    {
        cout<<"_";
    }
    cout<<"\n";
    cout<<"\n";
    cout<<"\t\tEnter your name: ";
    getline(cin,name);
    int t;
    t=name.length();
    for(int i=0; i<=t; i++)
    {
        if(name[i]>=97 && name[i]<=122)
        {
            name[i]=name[i]-32;
        }
    }
    for(int i=0; i<80; i++)
    {
        cout<<"_";
    }
    cout<<"\n";
    cout<<"\n";
    cout<<"\t\tHELLO "<<name<<" ! PLEASE CHOOSE THE LEVEL YOU WANT TO PLAY"<<endl;
    while(1)
    {
        cout<<"\t\t    (enter the number corresponding to level)"<<endl;
        cout<<"\n";
        cout<<"\t\t\t\t <1> Easy"<<endl;
        cout<<"\t\t\t\t <2> Medium"<<endl;
        cout<<"\t\t\t\t <3> Hard"<<endl;
        cout<<"\t\t\t\t <0> Quit"<<endl;
        for(int i=0; i<80; i++)
        {
            cout<<"_";
        }
        cout<<"\n";
        cout<<"\n";


        cout<<"\t\tEnter your choice: ";
        cin>>c;
        for(int i=0; i<80; i++)
        {
            cout<<"_";
        }
        //Managing quit button
        if(c==0)
        {
            cout<<endl;
            cout<<endl;
            cout<<"\t\t\t\tYOU CHOOSE THE QUIT BUTTON\n\a";
            Beep(2000,500);
            cout<<" Exiting....\n";
            for(int i=0; i<80; i++)
            {
                cout<<"_";
            }
            exit(0);
        }
        cout<<"\n\n\n";
        cout<<"\t\t\t\tLEVEL "<<c<<endl;

        //Easy level
        if(c==1)
        {
            cout<<"\a";
            cout<<"\n\tYou will be given 4 seconds to answer each question\n\n";
            for (int a=5; a>0 ; a--)
            {
                cout<<"\r Get ready to play in : "<<a;
                Beep(2000,300);
                Beep(0,700);
            }
            cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t";
            cout<<endl;
            easylevel();
            for(int i=0; i<80; i++)
            {
                cout<<"_";
            }
            cout<<endl;
        }
        else if(c==2)
        {
            cout<<"\a";
            cout<<"\n\tYou will be given 8 seconds to answer each question\n\n";
            for (int a=5; a>0 ; a--)
            {
                cout<<"\r Get ready to play in : "<<a;
                Beep(2000,300);
                Beep(0,700);
            }
            cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t";
            cout<<endl;
            mediumlevel();
            for(int i=0; i<80; i++)
            {
                cout<<"_";
            }
            cout<<endl;
        }
        else if(c==3)
        {
            cout<<"\a";
            cout<<"\n\tYou will be given 12 seconds to answer each question\n\n";
            for (int a=5; a>0 ; a--)
            {
                cout<<"\r Get ready to play in : "<<a;
                Beep(2000,300);
                Beep(0,700);
            }
            cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t";
            hardlevel();
            for(int i=0; i<80; i++)
            {
                cout<<"_";
            }
            cout<<endl;
        }
        else
        {
            cout<<"\a";
            cout<<"Please choose correct option\n";
            for(int i=0; i<80; i++)
            {
                cout<<"_";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
