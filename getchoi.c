#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <curses.h>
#include <term.h>
#include <termios.h>

static FILE *output_stream = (FILE *)0;

char *menu[] ={
	"a - add new record",
	"d - delete record",
	"q - quit",
	NULL,

};

int getchoice(char *greet, char *choices[]);
int char_to_terminal(int char_to_write);
int main()
{
	int choice = 0;

	do{
		choice=getchoice("Please select an action",menu);
		printf("You have chosen: %c\n",choice);

	}
	while(choice !='q');
	exit(0);
}


int getchoice(char *greet, char *choices[],FILE *in, FILE *out)
{
	int chosen =0;
	int selected;
	int screenrow,screencol = 10;

	char **option;
	char *cursor, *clear;

	output_stream = out;
	setupterm(NULL,fileno(out), (int *)0);
	cursor = tigetstr("cup");
	clear = tigetstr("clear");
	
	screenrow=4;
	tputs(clear,1,(int *) char_to_terminal);
	tputs(tparm(cursor,screenrow,screencol),1,char_to_terminal);
	fprintf(out,"Choice:%s,greet");
	screenrow += 2;
	option = choices;
	while(*option){
		tputs(tparm(cursor,screenrow,screencol),1,char_to_terminal);
		fprintf(out,"%s",*option);
		screenrow++;
		option++;
	}
	fprintf(out,"\n");

	do{
		fflush(out);
		selected=fgetc(in);
		optin = choices;
		while(*option){
			if(selected == * option[0]) {
				chosen =1;
				break;
			}
			option++;
		}
		if(!chosen){
			tputs(tparm(cursor,screenrow,screencol),1,char_to_terminal);
			fprintf(out,"Incorrect choice,select again\n");
		}
	} while(!chosen);
	tputs(clear,1,char_to_terminal);
	return selected;
}


int char_to_terminal(int char_to_write)
{
	if(output_stream) putc(char_to_write,output_stream);
	return 0;
}

