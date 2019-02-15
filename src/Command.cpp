// Implémentation de la classe Command ici
// 
// Question 6 

/**RAPPEL des attributs
*	string name;
*	string alias;
*	string usage;
**/
#include "Command.hpp"

Command::Command(void){

}


bool Command::initCommand(string filePath){
	string tmpName 	=	this->name;
	string tmpAlias;
	string tmpUsage	=	this->usage;
	string alias = "";
	char cNext;
	char cPrevious;
	char c;
	bool lockAlias = false;
	bool lockNameAlias = false;

	ifstream fichier(filePath, ios::in);

	if(!fichier){
		cout<<"Error ! can't open the file for Command!!!"<<endl;
		return false;
	}
	while(fichier.get(c)){
		cNext = fichier.peek();
		if(lockNameAlias == true){
			alias += c;
		}
		if(c == ' '){
			tmpAlias = "";
			lockAlias = false;
			lockNameAlias = false;
		}else{
			tmpAlias += c;
		}
		if(tmpAlias == "alias"){
			lockAlias = true;
		}
		if(lockAlias == true && cPrevious == '=' && c == ' '){
			lockNameAlias = true;
		}
		cPrevious = c;
		
	}//end parse file
	return true;
}

