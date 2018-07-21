#include"ret.h"

using namespace std;
ret::ret(){
    int ret_id;
    cout<<"Enter book ID: ";
    cin>>ret_id;
    string book,auth;
    int nos,id;
    ifstream add("data.txt");

    while(add>>book>>id>>auth>>nos){
        if(id==ret_id) {
            if (nos <= 0) {}
            ret obj(id, book);
            //decrease nos by 1.
            ofstream su("data.txt");
            su >> ++nos;
            cout << "Book returned !";
        }else{

        }
    }
}
