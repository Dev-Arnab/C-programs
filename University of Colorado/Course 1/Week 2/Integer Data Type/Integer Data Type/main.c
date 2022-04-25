#include <stdio.h>
#include <stdlib.h>
#define MINUTES_PER_HOUR 60


int main(int argc, char** argv) {

	int total_minutes = 113;

	//calculate total number of hours
    
	int hours = total_minutes/ MINUTES_PER_HOUR;
	printf("Hours: %d\n", hours);


	//calculate total number of minutes

	int minutes = total_minutes % MINUTES_PER_HOUR;
	printf("Minutes: %d\n", minutes);


	return(EXIT_SUCCESS);

}