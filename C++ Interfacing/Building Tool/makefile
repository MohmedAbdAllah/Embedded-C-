C = gcc
Cpp = g++
OBJS = TestDate.o Date.o #list of object files
SRC = $(OBJS, .o=.c)

testDate : $(OBJS)
	$(Cpp) -o testDate $^

#Define a pattern rule that compiles every .c file into a .o file
#% for replace each file at a time
%.o: %.c 
#$@ will be replaced by the target , $< will be replaced by the depandences
	$(C) -c $@ $<

####################################################################################
#testDate : TestDate.o Date.o
#	$(Cpp) -o testDate TestDate.o Date.o
#
#TestDate.o : TestDate.cpp Date.h
#	$(C) -c TestDate.cpp
#
#Date.o : Date.cpp Date.h
#	$(C) -c Date.cpp

######################################################################################
#Execute even if not updated

.PHONY : cleanall cleanobj

cleanall : cleanobj
	del *.exe 
#* : to get all .o
cleanobj : 
	del *.o

###########################################################################################



