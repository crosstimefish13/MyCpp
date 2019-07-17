
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
exe_program : lib_basic_sort lib_data_handler obj_program
	gcc $(debug) $(obj)/main.obj -L. $(bin)/basic_sort.lib $(bin)/data_handler.lib -I. -o $(bin)/program.exe

obj_program : program/source/main.c
	gcc $(debug) -c program/source/main.c -I. -o $(obj)/main.obj

lib_data_handler : lib_basic_sort obj_dh_data_handler
	gcc $(debug) -shared $(obj)/dh_data_handler.obj -L. $(bin)/basic_sort.lib -o $(bin)/data_handler.lib

obj_dh_data_handler : data_handler/header/data_handler.h data_handler/source/data_handler.c
	gcc $(debug) -fPIC -c data_handler/source/data_handler.c -I. -o $(obj)/dh_data_handler.obj

lib_basic_sort : obj_bs_data obj_bs_basic_sort
	gcc $(debug) -shared $(obj)/bs_data.obj $(obj)/bs_basic_sort.obj -o $(bin)/basic_sort.lib

obj_bs_basic_sort : basic_sort/header/basic_sort.h basic_sort/source/basic_sort.c
	gcc $(debug) -fPIC -c basic_sort/source/basic_sort.c -I. -o $(obj)/bs_basic_sort.obj

obj_bs_data : basic_sort/header/data.h basic_sort/source/data.c
	gcc $(debug) -fPIC -c basic_sort/source/data.c -I. -o $(obj)/bs_data.obj
