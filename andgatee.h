#include <iostream>
#include <string>
#include "gatee.h"

class andgate : public gate {
    
    public:   
        andgate();
       andgate(node *x );
        bool  getoutput();
       void print();
};
 