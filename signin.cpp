#include"signin.h"
int  signin::login()
{  label:
    std::cout<<"                                                    -> Enter the username \t\n";
    std::cout<<"                                                    :";std::cin>>username;
    std::cout<<"                                                    -> Enter the password \n";
    std::cout<<"                                                    :";std::cin>>password;
     if( username=="admin" && password=="pass")
     {   system("COLOR 7A");
         std:: cout<<"Success!!!!!";

     }
     else {
         system("CLS");
         system("COLOR FC");
         std::cout<<"ERROR ! Try Again :(\t\n";
         goto label;
     }
return 0;
}
