
#include "simulator.h"
simulator::simulator(string in_path,string out_path) {
     in.open(in_path,ios::in);
    out.open(out_path,ios::out);
    last_gate=-1;
    simulate();
}

void  simulator :: simulate(){
    
    while(!in.eof()){
        in>>read;
        if (is_gate()){
            
            add_gate();
            
            
        }else if(read== "set"){
          bool v;
          
          in>>read>>v;
          node* temp =nodes.find(read);
          if  ( temp != NULL){
              temp->setvalue(v);
          }else{
              out<<"cant find node "<<read<<endl;
          }
                  
        }
        
        else if(read =="sim"){
            
            if ( last_gate == -1 ){
                
                out<<"there is no gate "<<endl;
            }
            else {
                
                for (int i =0 ; i<= last_gate ; i++){
                    
                    gates[i]->getoutput();
                    
                }
            }
            
            
        }
        else if (read=="out"){
            in>>read;
            if (read=="_"){
                
                  ptint_all();

            }else{
                
            out_node(read);
            }
            
        }
       
        
        
    }
    
            
    
}

void simulator::add_gate(){
                      last_gate++; 
    
    if (read == "and"){
        

        gates[last_gate]=  new andgate();

    }
    else if (read == "or"){

        gates[last_gate]=  new orgate();

    }
else if (read == "nor"){
                  

        gates[last_gate]=  new norgate();

    }
    
    else if (read == "nand"){

        gates[last_gate]=  new nandgate();

    }
     else if (read == "not"){
        gates[last_gate]=  new notgate();

    }
    
    in>>read;
           while (!(read == "*")){
               node* temp =nodes.find(read);
               if (temp==NULL){
                   
                     nodes.add(read);

                   
               }
               temp =nodes.find(read);
               gates[last_gate]->addinput(temp);

                           in>>read;
  
           }
           in>>read;
              nodes.add(read);
               gates[last_gate]->setoutput(nodes.find(read));       
        
}    

bool simulator::is_gate(){
    
    if (read == "and"  || read == "or"|| read == "nor" || read == "nand" || read == "not"){
        
        return true ;
        
    }else {
        
        return false ; 
    }
    
}    

void simulator:: ptint_all (){
    
 if ( last_gate == -1 ){
                
                out<<"there is no gate ";
            }
            else {
                
                for (int i =0 ; i<= last_gate ; i++){
                    
                    gates[i]->print(out);
                    
                }
            }}


   void simulator::  out_node(string m ){
      node* temp =  nodes.find(m);
      if (temp == NULL){
          out<<"cant find node "<<m<<endl;
      }else{
          temp->print(out);
          
      }
       
       
   }
simulator::~simulator() {
    in.close();
    out.close();
    for (int i=0;i<=last_gate ;i++){
        
        delete gates[i];
    }
}

