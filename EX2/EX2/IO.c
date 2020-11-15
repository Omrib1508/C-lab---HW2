/////////////////////////////////////////////////////////////////////////
///////////////////////////////// IO.c //////////////////////////////////
/////////////////////////////////////////////////////////////////////////


//info: The file IO.c is incharge of open the file that we grep, point
//      which fleg is used. olso it is responseblle to print out the
//      the user requests.

//............................Includes.................................//
//.....................................................................//
#include "my_grep.h"

//............................Defines..................................//
//.....................................................................//
#define HYPHEN_A_SPACE 3
#define ZERO 48
#define NINE 57

//............................Functions................................//
//.....................................................................//
void init_flag_struct(Flags* flags, char* argument_line) {
	char* num = NULL;
	int j = 0 , len;

	len = strlen(argument_line) - HYPHEN_A_SPACE;
	num = (char*)calloc(len, sizeof(char));
	if (!num) {
		printf("Error: memory didn't allocated correctlly\n");
		return(EXIT_FAILURE);
	}

	for (int i = 0; argument_line[i] != '\0'; i++)
		switch (argument_line[i]) {
		case '-':									i++;		break;
		case ' ':									i++;		break;
		case 'b':			flags->b_flag = true;	i++;		break;
		case 'c':			flags->c_flag = true;	i++;		break;
		case 'i':			flags->i_flag = true;	i++;		break;
		case 'n':			flags->n_flag = true;	i++;		break;
		case 'v':			flags->v_flag = true;	i++;		break;
		case 'x':			flags->x_flag = true;	i++;		break;
		case 'E':			flags->E_flag = true;	i++;		break;
		case 'A':			flags->A_flag = true;	i++;
			while ((argument_line[i] >= ZERO) && (argument_line[i] <= NINE)) {
				num[j] = argument_line[i];
				i++;
				j++;
			} break;
			flags->A_num = strtol(num, NULL, 10);
	}
}
