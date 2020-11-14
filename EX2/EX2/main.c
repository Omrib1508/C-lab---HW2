/////////////////////////////////////////////////////////////////////////
///////////////////////////////// main.c ////////////////////////////////
/////////////////////////////////////////////////////////////////////////


//info: This main.c file is responsiblle of mange all the project things.

//............................Includes.................................//
//.....................................................................//
#include "my_grep.h"
#include "IO.c"

//............................Defines..................................//
//.....................................................................//
#define LINE_LENGTH 1000
#define FAIL_PROCESS -1
#define ARGUMENTS 11

//...........................Functions.................................//
//.....................................................................//
/*
* Function:        main
* description:     the main function will func the grep
* input:           number of arguments, array of argument
* output:          process complete
*/
int main(int argc, char* argv[]) {
	Flags*		flags		= NULL;
	Counters*	counters	= NULL;
	Files*		files		= NULL;
	char*		arg_line	= NULL;

	if (argc > ARGUMENTS) {
		printf("Error: invalid number of arguments(%d instead of %d)\n", (argc - 1), ARGUMENTS);
		return FAIL_PROCESS;
	}
	else {
		flags = (Flags*)malloc(sizeof(Flags));
		if (!flags) {
			printf("Error: memory didn't allocated correctlly\n");
			return(EXIT_FAILURE);
		}

		counters  = (Counters*) malloc(sizeof(Counters));
		if (!counters) {
			printf("Error: memory didn't allocated correctlly\n");
			return(EXIT_FAILURE);
		}

		files = (Files*)malloc(sizeof(Files));
		if (!files) {
			printf("Error: memory didn't allocated correctlly\n");
			return(EXIT_FAILURE);
		}

		init_flag_struct(flags, arg_line);
	}
	return EXIT_SUCCESS
}