#include <iostream>
#include <string>
#include "dynamicnode.h"

class gate {
protected :
    node** input  ;
    node* output ; 
    
    int lastel;
    
public : 
    gate();
    gate(node* x );
       virtual void  addinput( node*in );
      virtual bool  getoutput()=0;
     void setoutput(node *x );
         ~gate();

     
//
    
    
};