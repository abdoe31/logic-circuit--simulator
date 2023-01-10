#include <iostream>
#include <string>
#include "gatee.h"


gate ::  gate(){
      input = new node*[10];

    output = NULL ; 
    lastel = -1;
      
}

gate ::  gate(node* x ){
    input = new node*[10];
    input[0]= x;
        lastel=0;
}


 void gate :: addinput(  node* in){
    if (lastel>=9){
        cout<<"there is no size ";
        
    }else  {
        input[lastel+1]= in;
        lastel++;
        
    }

    
}
      void gate ::  setoutput(node* x ){
          
          
          output = x ; 
      }


        gate ::  ~gate(){
            delete[] input  ;
            
            
            
            
        }
