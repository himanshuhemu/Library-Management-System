#ifndef LMS_ISSUE_H
#define LMS_ISSUE_H
#include<iostream>
#include<string.h>
using namespace std;

class issue{


public:
    issue();
    issue(int id , string name);
    void issueById(int id);

};
#endif //LMS_ISSUE_H
