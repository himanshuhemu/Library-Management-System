#include"help.h"
using namespace std;

help::help(){
    ifstream file("help.txt");
    string h;
    while(getline(file,h)){
        cout<<h<<endl;
    }
}