/////////////////////////////////////////////////////////////////////////
////////////////////////////// my_grep.h ////////////////////////////////
/////////////////////////////////////////////////////////////////////////


//info: The my_grep.h file is calling all the function in my_grep.c. it
//      is also carry the structs that we use for the grep search process

//............................Includes.................................//
//.....................................................................//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

//............................Structs..................................//
//.....................................................................//
typedef struct flags {
	bool A_flag;
	int A_num;
	bool b_flag;
	bool c_flag;
	bool i_flag;
	bool n_flag;
	bool v_flag;
	bool x_flag;
	bool E_flag;
} Flags;

typedef struct counters {
	int line_counter;
	int A_counter;
	int byte_couner;
}Counters;

typedef struct files {
	FILE* input;
	FILE output;
}Files;