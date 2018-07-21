#include<iostream>
#include<windows.h>
#include<conio.h>
#include"signin.h"
#include"help.h"
#include"record.h"
#include "search.h"
#include"ret.h"
#include "createrecord.h"
using namespace std;
int main()
{   int i;
    char a[20];
    char l,b;
    system("COLOR F5");
    cout<<"enter your name\n";
    cin>>a;
    cout<<"Please sign in to go ahead !"<<"\n";
    signin obj;
    obj.login();
    system("COLOR FA");
    cout<<endl<<"\n Press Enter to open Menu";
    getch();
    system("CLS");
    lab:
    system("CLS");
    system("COLOR F0");
    cout<<endl<<"Press the button as designated to do a task\n"<<endl<<endl;
    cout<<"1. Add Books\n"<<"2. Search Books\n"<<"3. Issue bbok\n"<<"4. Return Book\n"<<"5. Issued book records \n";
    cout<<"6. Help "<<endl<<"7. Exit"<<endl;
    cout<<endl<<"Enter your choice -> ";
    cin>>i;
    switch (i)
    { case 1 :
        {   createrecord abc;
            abc.add();
            cout<<"Books added 1 \n";
            cout<<"Press 'b' and then Enter to go back -> ";
            cin>>l;
            if(l=='b')
            { }
            break;
        }
        case 2 :
        {   system("CLS");
            search so;
            so.ser();

            cout<<"Press 'b'and then Enter  to go back ->";
            cin>>l;
            if(l=='b')
            { system("CLS");
                }
            break;
        }
        case 3 :
        { cout<<endl<<"            * to issue a book , Please Go back and Search for your book first !"<<endl;
                  cout<<"                              if its available then you can issue your book !"<<endl;
            cout<<endl<<"Press 'b' and then Enter to go back -> ";
            cin>>l;
            if(l=='b')
            {   system("CLS");
                }
            break;
        }
        case 4 :
        {   ret rt;
            cout<<"Press 'b'and then Enter  to go back -> ";
            break;
        }

        case 5:
        {
            record r;
            getch();
            cout<<"Press 'b'and then Enter  to go back -> ";
            break;
        }
        case 6 :
        {
            help ho;
            getch();
            cout<<"Press 'b'and then Enter  to go back -> ";
            break;
        }
        case 7 :
        {   exit(0);
                  }
        default :
        {   cout<<endl<<"Wrong Choice , Try Agin !";
            cout<<endl<<"Press 'b' and then Enter to try again ! ";
            break;
        }
    }
    goto lab;
    return 0; }


