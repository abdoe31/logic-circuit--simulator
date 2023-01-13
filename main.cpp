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
           a[n] = new notgate();
           file1>>x;
           while (!(x == "*")){
               
               nodes.add(x);
               a[n]->addinput(nodes.find(x));
               
               
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




