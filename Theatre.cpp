/*Blake Lofgreen
 *
 *This program creates a 2D array, and the creates patrons to fill this array, as though it is seating for a theatre.
 */

#include "Theatre.h"
#include "Patron.h"

//creates a 2d array and fills with patrons
void Theatre(int rowNum, int columnNum){
	//
			char* arrangment[rowNum][columnNum];

			for(int i=0; i<rowNum;i++){
				for(int j = 0; j < columnNum;j++){
					arrangment[i][j]= Patron();
				}
			}
		}
//gets patron at a certain seat
Patron* getPatronAt(int row,int col){
	return arrangment[row][col];
}

//fills empty spot with temporary patron
bool assignPatronAt(int row, int col, Patron *tempPatron){
	if(arrangment[row][col] == "###"){
		arrangment[row][col] = *tempPatron;
		return true;
	}else{
		return false;
	}
}

//makes sure the entered row/ column isnt 0
bool checkBoundaries(int row, int col){
	if(row==0||col==0){
		return false;
	}else{
		return true;
	}
}

//prints out the current seating arrangment of theatre
char* toString(){

	cout<<"The Current Seating Arrangement"<<endl;
	cout<<"_______________________________"<<endl;
	for(int i =0; i< rows;i++){
		for(int j = 0;j<column;j++){
			cout<<arrangment[i][j];

		}
	}
	return"/n";
}




