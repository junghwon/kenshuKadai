SRC = 	main.c \
		controller.c	\
		keyController.c	\
		view.c	\

OBJ = $(SRC:%.c=%.o)

.PHONY: test
test:
	gcc $(SRC) -o $@  -lpthread 

.PHONY: clean
clean: $(OBJ)
	rm $(OBJ) test