
#include <iostream>
#include <string>
#include "node.h"
using namespace std;
class dynamicnode {
private:
	node* point; 
	int size;
	int lastnode;
public : 
	dynamicnode();
	dynamicnode(string name );
	void add(string name );
	void setvalue(string name,bool  value );
	node* find(string name);
	bool getnodevalue(string name);

	void printnodes();
	bool areall(bool what);
	~dynamicnode();

private : 
	void converttonew(int capisty, int lastnode);



};

