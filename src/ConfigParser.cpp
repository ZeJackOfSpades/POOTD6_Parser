// Implémentation de la classe ConfigParser ici
//
// Question 3 
#include "ConfigParser.hpp"

ConfigParser::ConfigParser(void){

}
bool ConfigParser::initConfig(string path){
	char c;
	bool lockCommand = false;
	string tmpCommand = "";

	this->filePath	=	path;

	ifstream fichier(path, ios::in);
	if(!fichier){
		cout<<"Error ! can't open the file !!!"<<endl;
		return false;
	}
	while(fichier.get(c)){

		if(c == '['){
			lockCommand	= true;
		}
		if(lockCommand	== true){
			tmpCommand += c;
		}
		if(c == ']' && lockCommand == true){
			lockCommand = false;
			this->vArrayCommand.push_back(tmpCommand);
			tmpCommand = "";
		}
	}//end parse file
	return true;
}
