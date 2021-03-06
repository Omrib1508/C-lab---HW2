/////////////////////////////////////////////////////////////////////////
//////////////////////////////// IO.h ///////////////////////////////////
/////////////////////////////////////////////////////////////////////////


//info: The IO.h file is calling all the function in IO.c.

#ifndef IO_H
#define IO_H

//............................Includes.................................//
//.....................................................................//
#include "my_grep.h"

//............................Functions................................//
//.....................................................................//
void init_flag_struct(Flags* flags, char* input_line);

void init_counters_struct(Counters* counters);

#endif // !IO_H