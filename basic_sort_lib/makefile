
# define ouput directory and debug flag
output = output/release
debug = 

# set output and debug if input mode=debug
ifdef mode
	ifeq ($(mode), debug)
		output := output/debug
		debug := -g 
	endif
endif

# define header, source, obj and bin directories
header = header
source = source
obj = $(output)/obj
bin = $(output)/bin

# build command for entry
build : clean dir_create exe_basic_sort_lib

# dir_clean and dir_create commands
clean :
	rm -rf ./output

dir_create :
	@if [ ! -d ./output ]; then mkdir -p ./output; fi;
	@if [ ! -d ./$(output) ]; then mkdir -p ./$(output); fi;
	@if [ ! -d ./$(obj) ]; then mkdir -p ./$(obj); fi;
	@if [ ! -d ./$(bin) ]; then mkdir -p ./$(bin); fi;

# commands for detail builds
exe_basic_sort_lib : obj_main obj_basic_sort_lib
	gcc $(debug) $(obj)/main.o $(obj)/basic_sort_lib.o -o $(bin)/basic_sort_lib.exe

obj_main : $(source)/main.c
	gcc $(debug) -c $(source)/main.c -I. -o $(obj)/main.o

obj_basic_sort_lib : $(source)/basic_sort_lib.c $(header)/basic_sort_lib.h
	gcc $(debug) -c $(source)/basic_sort_lib.c -I. -o $(obj)/basic_sort_lib.o
