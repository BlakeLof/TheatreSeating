/*Blake Lofgreen
 *
 *This program creates a 2D array, and the creates patrons to fill this array, as though it is seating for a theatre.
 */

#ifndef PATRON_H_
#define PATRON_H_

class Patron {
public:
	Patron();
	Patron(char* patronInfo);
	char* getlastName();
	char* getfirstName();
	char* toString();
private:
	char lastName[25];
	char firstName[25];
};

#endif /* PATRON_H_ */
