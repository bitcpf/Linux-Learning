#include <stdlib.h>
#include <stdio.h>

/*
 * This is an important file for managing this project.
 * It implements the canonical "Hello World" program. 
 * Filename: $RCSfile: important.c,v $
 */
static char *RCSinfo="$Id: important.c,v 1.3 2012/11/29 16:18:41 pcui Exp pcui $";

int main()

{
	printf("Hello World\n");
	printf("This is an extra line added later\n");
	printf("This file is under RCS control. Its ID is \n%s\n",RCSinfo);
	exit(EXIT_SUCCESS);
}
