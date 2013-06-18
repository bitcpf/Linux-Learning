all: myapp
#Define complier
CC=gcc
#Install folder
INSTDIR=~/bitcpf/study_temp/
#Include files
INCLUDE=.
#Options for development
CFLAGS= -g -Wall -ansi
#option for release
#CFLAGS= -O -Wall -ansi

#Local LIbraries
MYLIB=mylib.a


myapp:main.o $(MYLIB)
	$(CC) -o myapp main.o $(MYLIB)

$(MYLIB):$(MYLIB)(2.o) $(MYLIB)(3.o)
main.o:main.c a.h
2.o:2.c a.h b.h
3.o: 3.c b.h c.h

clean:
	-rm *.o myapp

install:myapp
	@if [ -d $(INSTDIR) ];\
		then\
		cp myapp $(INSTDIR);\
		chmod a+x $(INSTDIR)/myapp;\
		chmod og-w $(INSTDIR)/myapp;\
		echo "Installed in $(INSTDIR)";\
	else \
		echo "Sorry,$(INSTDIR) does not exist";\
	fi


