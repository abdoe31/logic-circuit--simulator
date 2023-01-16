#include "node.h"
using namespace std;

node::node() 
{
    this->name = "";
    this->value = false ;
    
}
node::node(string n, bool val) {
    this->name = n;
    this->value = val;
}
node::node(string n) {
    this->name = n;
    this->value = false;

}

void node::setname(string n) {
    this->name = n;
}
void node::setvalue(bool val) {
     this->value = val;

}
string node::getname() {
    return this->name;
}
bool node::getvalue() {
    return this->value;
}
void node::print(iostream &mfile) {
    
    mfile<<"node "<<name<<"  value : "<<value<<endl;
}
