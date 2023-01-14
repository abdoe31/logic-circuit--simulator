#include <iostream>
#include <fstream>
#include <string>
#include "gatee.h"

using namespace std;

int main()
{
    dynamicnode nodes; 
    gate*  a [50] ;
     int n=-1;
    
    fstream file1 ;
    file1.open("data.txt",ios::in);
            string x ;

    while(!file1.eof()){
        
        file1>>x;
        if (x=="and"){
            n++;
           a[n] = new andgate();
           
           
           file1>>x;
           while (!(x == "*")){
               node* temp =nodes.find(x);
               if (temp==NULL){
                   
                     nodes.add(x);

                   
               }
               temp =nodes.find(x);
               a[n]->addinput(temp);

                           file1>>x;
  
           }
           file1>>x;
              nodes.add(x);
               a[n]->setoutput(nodes.find(x));

            
        }
        
        if (x=="set"){
         
            
        }
        
    }
    
     
    

            nodes.printnodes();
                    

            
    
 
            return 0 ; 
   
}




