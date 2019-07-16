
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

# define obj and bin directories
obj = $(output)/obj
bin = $(output)/bin

# build command for entry
build : clean dir_create exe_program

# clean and dir_create commands
clean :
	rm -rf ./output

dir_create :
	@if [ ! -d ./$(obj) ]; then mkdir -p ./$(obj); fi;
	@if [ ! -d ./$(bin) ]; then mkdir -p ./$(bin); fi;

# commands for detail builds
exe_program : lib_basic_sort obj_program
	gcc $(debug) $(obj)/main.obj -L. $(bin)/basic_sort.lib -I. -o $(bin)/program.exe

obj_program : program/source/main.c
	gcc $(debug) -c program/source/main.c -I. -o $(obj)/main.obj

lib_basic_sort : obj_basic_sort
	gcc $(debug) -shared $(obj)/basic_sort.obj -o $(bin)/basic_sort.lib

obj_basic_sort : basic_sort/source/basic_sort.c basic_sort/header/basic_sort.h
	gcc $(debug) -fPIC -c basic_sort/source/basic_sort.c -I. -o $(obj)/basic_sort.obj
