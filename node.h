
#include <iostream>
#include <string>
using namespace std;

class node {
private:
	string name;
	bool value;
public:

	node();
	node(string n, bool val);
	node(string n);

	void setname(std::string n);
	void setvalue( bool val);

	string getname();
	bool getvalue();


};
