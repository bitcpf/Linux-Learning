#include <stdlib.h>
#include <stdio.h>

/*
 * This is an important file for managing this project.
 * It implements the canonical "Hello World" program. 
 * Filename: $RCSfile: hello.c,v $
 */
static char *RCSinfo="$Id: hello.c,v 1.2 2012/11/29 17:28:39 pcui Exp $";

int main()

{
	printf("Hello World\n");
	printf("This is an extra line added later\n");
	printf("This file is under RCS control. Its ID is \n%s\n",RCSinfo);
	printf("Have a nice day!\n");
	exit(EXIT_SUCCESS);
}
