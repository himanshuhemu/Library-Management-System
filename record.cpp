#include"record.h"
using namespace std;
record::record() {
    ifstream rec("record.txt");
    string c;
    while (getline(rec,c))
    {
        cout<<c<<endl;
    }

}