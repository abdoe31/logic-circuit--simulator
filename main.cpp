
#include "simulator.h"

using namespace std;

int main()
{
    dynamicnode nodes; 
    gate*  a [50] ;
     int n=-1;
    
     string input = "data.txt";
     string output = "output.txt" ;   
            simulator s(input,output);
            return 0 ; 
   
}




