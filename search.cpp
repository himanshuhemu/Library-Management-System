#include <iostream>
#include <iomanip>
#include "search.h"

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
    if(flag)cout<<"Book Found: "<<num_book<<endl;
    else cout<<"Book Not Found\n";

    ifstream find("data.txt");
    cout<<"Book Name  "<<"id  "<<"Author  "<<"No. of Books\n";
    while(find>>book>>id>>auth>>nos){
        if(book==name) {
            flag =true; num_book++;
            cout<<book<<"\t"<<id<<"\t"<<auth<<"\t"<<nos<<endl;
        }
    }
}