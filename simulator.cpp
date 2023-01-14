/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   simulator.cpp
 * Author: abdo
 * 
 * Created on 13 January 2023, 03:53
 */

#include "simulator.h"
simulator::simulator(string in_path,string out_path) {
    in.open(in_path,ios::in);
    out.open(out_path,ios::out);
    last_gate=-1;
    
}

void  simulator :: simulate(){
    
    while(!in.eof()){
        in>>read;
        if (is_gate(read)){
            
            add_gate();
            
            
        }else if(read== "set"){
            
            
        }
       
        
        
    }
    
            
    
}



simulator::~simulator() {
    in.close();
    out.close();
    for (int i=0;i<=last_gate ;i++){
        
        delete gates[i];
    }
}

