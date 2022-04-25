#include <stdio.h>
#include <stdlib.h>

/*
Define a user-defined datatype, declare variables of that data type, and display output of operations using those operations.
*/

int main(void) {

	//Define user-defined datatype
	struct position {
		float latitude;
		float longitude;
	};
	
	typedef struct position position;

	//Declare and initialize variables
	position initial = { 37.7510,-97.8220 };
	position final = { 8.2275,46.8182 };

	//print the initialized variables
	printf("My location and location of the place I want to visit\n");
	printf("-----------------------------------------------------\n");
	printf("Geographical location:\t");
	printf("Latitude\t");
	printf("Longitude\n\n");
	printf("Present\t\t\t");
	printf("%.4f\t\t", initial.latitude);
	printf("%.4f\n", initial.longitude);
	printf("Future\t\t\t");
	printf("%.4f\t\t", final.latitude);
	printf("%.4f\n", final.longitude);

	//Calculate and output latitude and longitude difference
	float lat_diff;
	float long_diff;

	lat_diff = final.latitude - initial.latitude;
	long_diff = final.longitude - initial.longitude;

	printf("\n\n");
	printf("Difference in latitude: %.4f\n", lat_diff);
	printf("Difference in longitude: %.4f\n", long_diff);



	return 0;
}