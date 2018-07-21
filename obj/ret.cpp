#include"ret.h"
#include <windows.h>

using namespace std;
ret::ret(){
    int ret_id;
    cout<<"Enter book ID: ";
    cin>>ret_id;
    string book,auth;
    int nos,id;
    ifstream add("data.txt");
    ofstream temp("temp.txt");
    bool isReturned=false;
    while(add>>book>>id>>auth>>nos){
        if(id==ret_id) {
            //decrease nos by 1.
            temp<<book<<" "<<id<<" "<<auth<<" "<<++nos<<endl;
            isReturned=true;
        }else{
            temp<<book<<" "<<id<<" "<<auth<<" "<<nos<<endl;
        }
    }
    add.close();
    temp.close();
    if(isReturned){cout<<"Book Returned!\n";
        system("del data.txt");
        system("rename temp.txt data.txt");
    }
    else cout<<"Incorrect Book Id\n";
}
