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
        
    void gate::print(){
      
        for(int i =0 ; i<=lastel ;i++){
            cout<<" node number "<<i+1<<"is  " <<input[i]->getvalue();
          
                      
          }
        
         cout <<"output is :   "<<output->getvalue();
      }
      // and gate implementaion 
  
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
  //////////////////////////or gate //////////////////////////////////////
      orgate ::orgate():gate(){  }
    orgate ::orgate(node *x ):gate(x){}


  bool  orgate ::getoutput(){
      bool x = false  ;
      for(int i =0 ; i<=lastel ;i++){
          
          if (input[i]->getvalue()  == true){
              x = true;
              output->setvalue(x) ;
              return x;
              break;

              
          }
      }
    output->setvalue(x) ;
      return x ; 
  }

  
    //////////////////////////nand gate //////////////////////////////////////
      nandgate ::nandgate():gate(){  }
    nandgate ::nandgate(node *x ):gate(x){}


  bool  nandgate ::getoutput(){
      bool x = true  ;
      for(int i =0 ; i<=lastel ;i++){
          
          if (input[i]->getvalue()  == false){
              x = false ;
              output->setvalue(!x) ;
              return !x;
              break;

              
          }
      }
    output->setvalue(!x) ;
      return !x ; 
  }
    //////////////////////////nor gate //////////////////////////////////////
      norgate ::norgate():gate(){  }
    norgate ::norgate(node *x ):gate(x){}


bool  norgate ::getoutput(){
      bool x = false  ;
      for(int i =0 ; i<=lastel ;i++){
          
          if (input[i]->getvalue()  == true){
              x = true;
              output->setvalue(!x) ;
              return !x;
              break;

              
          }
      }
    output->setvalue(!x) ;
      return !x ; 
  }




      notgate ::notgate(){
      
      input = new node*[1];

    output = NULL ; 
    lastel = -1;

      }
    notgate ::notgate(node *x ){
        input = new node*[1];
    input[0]= x;
        lastel=0;

    
    }


bool  notgate ::getoutput(){
    
  bool x =   input[0]->getvalue();
    output->setvalue(!x);
    return !x;
  }


 void notgate :: addinput(  node* in){
    if (lastel>=0){
        input[0]= in;
        
    }else  {
        input[0]= in;
        lastel=0;
        
    }

    
}
