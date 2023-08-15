C = gcc
CC = g++
cFALGS = -g -Wall -ansi -pedantic                     
INCS = -I .

ProjectName = testdate.exe

SOURCES = $(wildcard *.cpp) #get all cpp files names and save it on "SOURCE"
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES)) #change .cpp to .o and save it on "OBJECTS"

all: $(ProjectName)
	@echo "===Build is done==="

#$@ get target name
#S< get dependency "used only with one dependency"
$(ProjectName): $(OBJECTS) 
	$(CC) $(cFALGS) $(INCS) -o $@ $(OBJECTS)

# testDate.o: testDate.cpp
# 	$(C) -c $<

# Date.o: Date.cpp 
# 	$(C) -c $<


%.o: %.cpp 
	$(C) -c -o $@ $<

#Execute even if not updated = execute even if no change
.PHONY: cleanall cleanobj

cleanall : cleanobj 
	del *.exe

cleanobj :
	del *.o	


