LIBNAME	:= libtestlib.so
SRCDIR	:= .
SRC		:= $(wildcard $(addsuffix /*.c, $(SRCDIR) ) )
HEADERS	:= $(wildcard $(addsuffix /*.h, $(SRCDIR) ) )
OBJ		:= $(notdir $(SRC) )
OBJ		:= $(OBJ:.c=.o)


all: $(LIBNAME)

$(LIBNAME): $(OBJ) 	
	gcc $^ -g -shared -fPIC -o $@

%.o:%.c $(HEADERS)
	gcc -c -g -fPIC $< -o $@

test:
	@echo "---- Target test ----"
	@echo $(SRC)
	@echo $(OBJ)
	@echo $(HEADERS)
	@echo $(TESTFLAG)

clean:
	@echo "---- Target clean ----"
	rm -f $(LIBNAME)
	rm -f *.o 

