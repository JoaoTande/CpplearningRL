SOURCES=$(wildcard src/*.cpp)
OBJS=$(SOURCES:.cpp=.o)


ifeq ($(shell sh -c 'uname -s'),Linux)
	LIBFLAGS=-L. -ltcod_debug -ltcodxx_debug -Wl,-rpath=.
else
	LIBFLAGS=-Llib -ltcod-mingw-debug -static-libgcc -static-libstdc++ -mwindows
endif


rl : $(OBJS)
	g++ $(OBJS) -o rl -Wall $(LIBFLAGS) -g
release : $(OBJS)
	g++ $(OBJS) -o rlRELEASE -Wall $(LIBFLAGS) -g -O3
src/%.o : src/%.cpp
	g++ $< -c -o $@ -Iinclude -Wall -g
clean :
	rm -f $(OBJS)
debug: rl
	gdb rl
#http://www.yolinux.com/TUTORIALS/GDB-Commands.html