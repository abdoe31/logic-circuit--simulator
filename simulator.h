#include <iostream>
#include <fstream>
#include <string>
#include "gatee.h"

class simulator {
public:
  simulator(string in_path,string out_path); 
    
     ~simulator();
private:
    string read;
    dynamicnode node;
    gate* gates [500];
    int last_gate;
    fstream in ;
    fstream out ;
      void add_gate();
  bool is_gate( string read);

      void simulate();
  void out_node(string read);
  void ptint_all();


    
    

    
    
    
};


