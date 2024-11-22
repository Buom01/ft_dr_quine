CC=clang
INCLUDES=
COMMON_CFLAGS=-Wall -Wextra -Werror
CFLAGS=$(COMMON_CFLAGS) $(INCLUDES)
COLLEEN=Colleen
GRACE=Grace
SULLY=Sully

.PHONY: clean

all: $(COLLEEN) $(GRACE) $(SULLY)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

fclean:	clean	
	rm -rf $(COLLEEN) $(GRACE) $(SULLY)

re: fclean all