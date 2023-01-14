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
      void print(fstream mfile);
     void setoutput(node *x );
         ~gate();

     
//
    
    
};

class andgate : public gate {
    
    public:   
        andgate();
       andgate(node *x );
        bool  getoutput();
};
 
class orgate : public gate {
    
    public:   
        orgate();
       orgate(node *x );
        bool  getoutput();
};


class nandgate : public gate {
    
    public:   
        nandgate();
       nandgate(node *x );
        bool  getoutput();
};
class norgate : public gate {
    
    public:   
        norgate();
       norgate(node *x );
        bool  getoutput();
};


class notgate : public gate {
    
    public:   
        notgate();
       notgate(node *x );
        bool  getoutput();
          void  addinput( node*in );

};
