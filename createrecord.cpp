#include"createrecord.h"
 int createrecord::add()
{
    std::ofstream ope("data.txt" , std::ios::app);
   std:: cout<<"How much books you want to add";
    std:: cin>>n;
    for(p=0;p<n;p++)
    {
    std:: cout<<"Enter the Name of book";
    std::cin>>bookname;
    std::cout<<"Enter the book id";
    std::cin>>bookid;
    std::cout<<"Enter the author name ";
    std::cin>>authorname;
    std::cout<<"Enter the no. of books";
    std::cin>>j;
    ope<<bookname<<"\t";
    ope<<bookid<<"\t";
    ope<<authorname<<"\t";
    ope<<j;
    ope<<"\n";
    }
    ope.close();
}
