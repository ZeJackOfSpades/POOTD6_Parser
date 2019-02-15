// Déclaration de la classe Command ici
//
// Question 5 
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Command
{
private:
	string name;
	string alias;
	string usage;
	
public:
	Command();
	bool initCommand(string filePath);
	//~Command();
	
};
