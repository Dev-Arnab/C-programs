#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define SHIFT_AMOUNT 5

/*
Demonstrate caesar cipher rigth shift 5 encryption and decryption
*/

int main(void) {

	char original_message[100];

	//Pmompt for and get valid string to be encrypted
	bool valid_message = false;
	printf("Eneter message to be encrypted (upper case alphabetic characters only): ");
	fgets(original_message, sizeof(original_message), stdin);

	int original_message_length = strnlen(original_message, sizeof(original_message)) - 1;

	//printf("original_message_length id : %d", original_message_length);
	//printf("valid_message: %d", valid_message);
	
	while (!valid_message) {
		//Invalid if non-upper case alpha characters in message (Don't include new line)
		valid_message = true;

		for (int i = 0; i < original_message_length; i++) {
			
			if (!isupper(original_message[i])) {
				printf("\n");
				printf("Message must contain only upper case alphabetic characters!\n");
				printf("Enter message to be encrypted (upper case alphabetic characters only): ");
				fgets(original_message, sizeof(original_message), stdin);
				original_message_length = strnlen(original_message, sizeof(original_message)) - 1;

				//Reset flag and exit loop
				valid_message = false;
				break;
			}
		}
	}

	//Build encrypted string (make sure it's null terminated)
	//char encrypted_message[original_message_length + 1];
	//Visual studio users can't create arrays with sizes based on user
	//Input because of te compiler Visual Studio user
	
	char* encrypted_message = malloc((original_message_length + 1) * sizeof(char));

	for (int i = 0; i < original_message_length; i++) {

		encrypted_message[i] = original_message[i] + SHIFT_AMOUNT;

		if (encrypted_message[i] > 'Z') {
			encrypted_message[i] -= 'Z' - 'A' + 1;
			//encrypted_message = encrypted_message[i] - 'Z' - 'A' + 1
			//Example: encrypting 'V' at 86 in table
			//'[' is at 91 in table wher 'Z' is at 90
			//'[' is changed from 91 to 91-26 which is 65('A') 
			//This gives us exactly the wrapping we need
		}
	}
	encrypted_message[original_message_length] = '\0';

	//Build decrypted string (make sure it'd null terminated)
	//int encrypted_message_length = strnlen(encrypted_message, sizeof(encrypted_message)
	//char decrypted_message[encrypted_message + 1]
	//Visual Studio users can't create arrays with size based on users
	//Input because if the compiler Visual Studio uses

	int encrypted_message_length = original_message_length;
	char* decrypted_message = malloc((encrypted_message_length + 1) * sizeof(char));

	for (int i = 0; i < encrypted_message_length; i++) {

		decrypted_message[i] = encrypted_message[i] - SHIFT_AMOUNT;

		if (decrypted_message[i] < 'A') {
			decrypted_message += 'Z' - 'A' + 1;
	    //decrypted_message = decrypted_message[i] + 'Z' - 'A' + 1
		//Example: encrypting 'E' at 69 in table
		//'@' is at 64 in table wher 'A' is at 65
		//'@' is changed from 64 to 64+26 which is 90('Z') 
		//This gives us exactly the wrapping we need
		}
	}
	decrypted_message[encrypted_message_length] = '\0';

	//Print messages
	printf("\n");
	printf("Original message: %s", original_message);
	printf("Encrypted message: %s\n", encrypted_message);
	printf("Decrypted_message: %s\n", decrypted_message);

	//Visual Studio: free memory because we used pointers
	free(encrypted_message);
	encrypted_message = NULL;
	free(decrypted_message);
	decrypted_message = NULL;


	return 0;
}