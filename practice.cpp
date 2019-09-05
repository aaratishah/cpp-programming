#include <iostream>
#define LOVE "aarammu"

int main()
{
    std::cout<<"ammu is my love";
    
    #ifdef LOVE
    std::cout<<LOVE;
    #endif

    #ifndef ISQUSH
    std::cout<<"AMMU";
    #endif
     
    #if 0
    std::cout<<"ammu and isqush";
    #endif
    
}