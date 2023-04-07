/*Blake Lofgreen
 *
 *This program creates a 2D array, and the creates patrons to fill this array, as though it is seating for a theatre.
 */

#include "Patron.h"

//defualt creates patron
Patron::Patron() {
	 lastName ="###";
	firstName="###";

}
//takes in patron info and makes a patrong from it
void Patron(char* patronInfo){
	char* name;
	name= strtok(patronInfo,"/");
	lastName = name;
	name=strtok(NULL,"/");
	firstName =name;

}

//returns last name of patron
char* getLastName(){
	return lastName;
}
//returns first name of patron
char* getFirstName(){
	return firstName;
}

//returns initials of patron
char* toString(){

	char* lastname[] = getLastName();
	char* firstname[] = getFirstName();

	return firstname[0]<<"."<<lastname[0];
}



