/////////////////////////////////////////////////////////////////////////
////////////////////////////// my_grep.h ////////////////////////////////
/////////////////////////////////////////////////////////////////////////


//info: The my_grep.h file is calling all the function in my_grep.c. it
//      is also carry the structs that we use for the grep search process

#ifndef MY_GREP_H
#define MY_GREP_H

#define _CRT_SECURE_NO_WARNINGS

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
	int byte_counter;
	int matches_counter;
}Counters;

//.............................Defines.................................//
//.....................................................................//
#define ASSERT_ERR(func, ok) do{										\
	if(!(ok)) {															\
		if (errno)														\
			printf("%s failed: %s\n", func, strerror(errno));			\
		else if (GetLastError())										\
			printf("%s failed: WinError 0x%X\n", func, GetLastError());	\
		else															\
			printf("%s failed: unknown error\n", func);					\
		exit(EXIT_FAILURE);												\
	}																	\
} while (0)

//...........................Functions.................................//
//.....................................................................//
void my_grep();

#endif // !MY_GREP_H