APPNAME	:= main
SRCDIR	:= .
SRC		:= $(wildcard $(addsuffix /*.c, $(SRCDIR) ) )
HEADERS	:= $(wildcard $(addsuffix /*.h, $(SRCDIR) ) )
OBJ		:= $(notdir $(SRC) )
OBJ		:= $(OBJ:.c=.o)

all: $(APPNAME)

$(APPNAME): $(OBJ) 	
	gcc $^ -g -o $@ -pipe

%.o:%.c $(HEADERS)
	gcc -c -g $< -o $@

test:
	@echo "---- Target test ----"
	@echo $(SRC)
	@echo $(OBJ)
	@echo $(HEADERS)

clean:
	@echo "---- Target clean ----"
	rm -f main
	rm -f *.o 

