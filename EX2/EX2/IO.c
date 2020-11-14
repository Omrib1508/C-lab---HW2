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
#define COMMA 39
#define ZERO 48
#define NINE 57

//............................Functions................................//
//.....................................................................//
void init_flag_struct(Flags* flags, char* input_line) {
	char* num;
	int j = 0;

	for (int i = 0; input_line[i] != COMMA; i++)
		switch (input_line[i]) {
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
			while ((input_line[i] >= ZERO) && (input_line[i] <= NINE)) {
				num[j] = input_line[i];
				i++;
				j++;
			} break;

	}
}