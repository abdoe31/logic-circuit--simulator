#include <iostream>
#include <string>
#include "andgatee.h"

using namespace std;

int main()
{

    
    dynamicnode d;
        d.add("a");
    d.setvalue("a", true);
            d.add("b");
    d.setvalue("b", 1);
            d.add("c");
 
            andgate x(d.find("a"));
            x.addinput(d.find("b"));
            
    
                    
            
    
 
            return 0 ; 
            //// /// 
            int c ; 
   
}




