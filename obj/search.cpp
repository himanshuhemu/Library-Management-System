#include <iostream>
#include <iomanip>
#include "search.h"
#include "issue.h"
#include <windows.h>

using namespace std;

void search::ser() {


    ifstream read("data.txt");
    string book,auth;
    int id;
    string name;
    cout<<"Enter book name: ";
    cin>>name;
    bool flag=false;
    int num_book=0,nos;

    while(read>>book>>id>>auth>>nos){
        if(book==name) {
            flag =true; num_book++;
        }
    }
    if(flag) {  system("COLOR FA");
        cout << "Book Found: " << num_book << endl;
    }
    else {system("COLOR FC");
        cout<<"Book Not Found ! Please Try again !\n"<<endl;
        cout<<"Help Menu contains info. of all pre added books "<<endl<<"Please check your spellings  in help menu"<<endl;
        return;
    }

    ifstream find("data.txt");
    cout<<endl<<"Book Name  "<<"id  "<<"Author  "<<"No. of Books\n"<<endl<<endl;
    while(find>>book>>id>>auth>>nos){
        if(book==name) {
            flag =true; num_book++;
            cout<<book<<"\t"<<id<<"\t"<<auth<<"\t"<<nos<<endl;
        }
    }
    cout<<"Search compeleted"<<endl;

    if(flag){cout<<"Do you want to issue the book(y/n): ";
    char ch;
    cin>>ch;
    if(ch=='y'){
        cout<<"Enter book id: ";
        int issue_id;
        cin>>issue_id;
        ifstream find_name("data.txt");
        ofstream temp("temp.txt");

        while(find_name>>book>>id>>auth>>nos){
            if(id==issue_id) {
                if(nos<=0){flag=false; break;}
                issue iobj(id,book);
                //decreasing number of books by 1.
                temp<<book<<" "<<id<<" "<<auth<<" "<<--nos<<endl;

                cout<<"Book Issued!\n";
            }else{
                flag==false;
                temp<<book<<" "<<id<<" "<<auth<<" "<<nos<<endl;
            }
        }
        find_name.close();
        temp.close();
        find.close();
        read.close();
        system("del data.txt");
        system("rename temp.txt data.txt");
        if(!flag)cout<<"No book available with this id\n";
    }}
}