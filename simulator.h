#include <fstream>
#include "gatee.h"

class simulator {
public:
  simulator(string in_path,string out_path); 
    
     ~simulator();
private:
    string read;
    dynamicnode nodes;
    gate* gates [500];
    int last_gate;
    fstream in ;
    fstream out ;
      void add_gate();
  bool is_gate();

      void simulate();
  void  out_node(string read);
  void ptint_all();


    
    

    
    
    
};


