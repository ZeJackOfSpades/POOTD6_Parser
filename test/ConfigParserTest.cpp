// Les tests unitaires de la classe ConfigParser seront écrits ici
//
// avec le framework catch: https://github.com/philsquared/Catch/blob/master/docs/tutorial.md

#define CATCH_CONFIG_MAIN  // Cette macro Catch fournit un main() - elle doit présente que dans ce fichier
#include "catch.hpp"
#include "ConfigParser.hpp"

using namespace std;

TEST_CASE("Test init config", "[ConfigParser][InitConfig]") {
    /* Question 4 */
    ConfigParser cp;
    REQUIRE(cp.initConfig("data/config.ini") == true);
    
    
}
