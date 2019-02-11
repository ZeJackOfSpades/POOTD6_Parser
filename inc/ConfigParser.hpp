// Déclaration de la classe ConfigParser ici
// 
// Question 2 
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
class ConfigParser
{
private:
	string filePath;
	vector<string> vArrayCommand;
public:
	ConfigParser();
	bool initConfig(string path);
	//~ConfigParser();
	
};