
#include <iostream>
#include <string>
#include "dynamicnode.h"

using namespace std;

dynamicnode::

dynamicnode() {
	point = NULL;
	size = 0; 
	lastnode = -1;

}
dynamicnode::dynamicnode(string name) {
	add(name);

}
 void dynamicnode :: add(string name) {
     
     


	 if (lastnode == -1) {
		 size = 10;
		 converttonew(size, lastnode );
		 lastnode++; 
		 point[lastnode] = name;


	 }
	 else if (lastnode > -1 && lastnode<size-1) {
		 lastnode++;
		 point[lastnode].setname(name);
	 }

	 else if (lastnode == size-1) {
		 size = size + 10;
		 converttonew(size, lastnode);
		 lastnode++;
		 point[lastnode].setname(name) ;


	 }



}
 void dynamicnode :: setvalue(string name, bool  value) {
	 find(name)->setvalue(value);

}
 node*  dynamicnode::  find(string name) {
	 bool x = false;

	 if (lastnode ==-1){
	                          return NULL;

	 
	 }
	 else {

		 for (int i = 0; i <= lastnode; i++)
		 {
			 if (this->point[i].getname() == name) {
				 x = true;
				 return point+i;
				 
				 break;
			 }
			 

		 }
		 if (x==false) {
			 cout << " node cannot found ";
                         return NULL;
		 }
	 }
         
}
 bool  dynamicnode :: getnodevalue(string name) {
	 return find(name)->getvalue();
}

 void dynamicnode::printnodes() {

	 if (lastnode == -1) {
		 cout << "nothing to print"<<endl;

	 }
	 else
	 {
		 for (int  i = 0; i < lastnode+1; i++)
		 {
			 cout << "node" <<"  "<<point[i].getname()<< "is : "<<point[i].getvalue()<< endl;

		 }


	 }

}
 bool dynamicnode::areall(bool what) {


	 bool found  = false; 
	 for (int  i = 0; i <= lastnode; i++)
	 {
		 if (point[i].getvalue() == what) {
			 found = true;

			 return found;
			 break;
		 }

	 }
	 return found;

 }


 void dynamicnode::converttonew(int capisty, int lastnode) {

	 if (lastnode > -1) {
		 node* temp = new node[capisty];

		 for (int  i = 0; i <= lastnode; i++)
		 {

			 temp[i] = point[i];
		 }
		 delete[] point;
		 point = temp;


	 }
	 else {

		 point = new node[capisty];
	 }


}
 dynamicnode::~dynamicnode() {
	  
	 delete[] point; 

 }

