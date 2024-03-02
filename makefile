SRC = 	main.c \
		controller.c	\
		keyController.c	\
		model.c	\
		view.c	\

OBJ = $(SRC:%.c=%.o)

.PHONY: test
test:
	gcc $(SRC) -o $@

.PHONY: clean
clean: $(OBJ)
	rm $(OBJ) test