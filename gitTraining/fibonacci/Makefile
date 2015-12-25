#### HarpTool MakeFile

INCLUDE 	= -I ./
CXXFLAGS  = -std=c++11 -Wall
CXX     	= g++
RM      	= /bin/rm -rf


SRCS = main.cpp fibonacci.cpp  
OUTPUT = fib
OBJS = $(subst %.cpp,%.o,$(SRCS))

all: tool

tool: $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $(OUTPUT) $(OBJS)

main.o: main.cpp 

fibonacci.o: fibonacci.cpp fibonacci.h

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) $(OUTPUT)
