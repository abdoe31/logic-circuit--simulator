
#include <iostream>
#include <string>
#include "andgatee.h"


    andgate ::andgate():gate(){
        
        
        
    }
    andgate ::andgate(node *x ):gate(x){
           
           
           
       }


  bool  andgate ::   getoutput(){
      bool x = true  ;
      for(int i =0 ; i<=lastel ;i++){
          
          if (input[i]->getvalue()  == false){
              x = false ;
              output->setvalue(x) ;
              return x;
              break;

              
          }
      }
    output->setvalue(x) ;
      return x ; 
  }
  void andgate::print(){
      
        for(int i =0 ; i<=lastel ;i++){
            cout<<" node number "<<i+1<<"is  " <<input[i]->getvalue();
          
                      
          }
        
         cout <<"output is :   "<<output->getvalue();
      }
      
  