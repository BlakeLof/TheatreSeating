/*Blake Lofgreen
 *
  *This program creates a 2D array, and the creates patrons to fill this array, as though it is seating for a theatre.
 */

#ifndef THEATRE_H_
#define THEATRE_H_
#include "Patron.h";

class Theatre {
public:
	Theatre(int rowNum,int columnNum);
	Patron* getPatronAt(int row,int col);
	bool assignPatronAt(int row, int col, Patron *tempPatron);
	bool checkBoundaries(int row, int col);
	char* toString();
};

#endif /* THEATRE_H_ */
