#include <iostream>
#include<fstream>
#include "issue.h"

using namespace std;

issue::issue(){}    //default constructor

 issue::issue(int id, string name)
   {
    long  roll;
       cout<<"Enter Roll no.: ";
       cin>>roll;
    ofstream write;
    write.open("record.txt",ios::app);
    write<<roll<<" "<<id<<" "<<" "<<name<<endl;


}

//Issue only with id, no name required.
void issue::issueById(int id) {
    //TODO
}
