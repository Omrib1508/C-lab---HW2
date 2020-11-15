/////////////////////////////////////////////////////////////////////////
///////////////////////////////// main.c ////////////////////////////////
/////////////////////////////////////////////////////////////////////////


//info: This main.c file is responsiblle of mange all the project things.

//............................Includes.................................//
//.....................................................................//
#include "my_grep.h"
#include "IO.h"

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
	FILE*		file		= NULL;
	const char	line[LINE_LENGTH];

	if (argc > ARGUMENTS) {
		printf("Error: invalid number of arguments(%d instead of %d)\n", (argc - 1), ARGUMENTS);
		return FAIL_PROCESS;
	}
	else {
		flags = (Flags*)malloc(sizeof(Flags));
		counters = (Counters*)malloc(sizeof(Counters));
		ASSERT_ERR("malloc", flags);
		ASSERT_ERR("malloc", counters);

		file = fopen(argv[argc], 'r');
		ASSERT_ERR("fopen", file);
		
		for (int i = 1; i < argc - 1; i++) {
			init_flag_struct(flags, argv[i]);
		}
		init_counters_struct(counters);
		while (fgets(line, LINE_LENGTH, file) != EOF) {
			my_grep();
		}

		fclose(file);
		free(flags);
		free(counters);
		return EXIT_SUCCESS;
	}
}