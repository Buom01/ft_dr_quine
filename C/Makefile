CC=clang
INCLUDES=
COMMON_CFLAGS=-Wall -Wextra -Werror
CFLAGS=$(COMMON_CFLAGS) $(INCLUDES)
COLLEEN=Colleen
GRACE=Grace
SULLY=Sully

all: $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN): Colleen.c
	$(CC) $(CFLAGS) -o $@ $^

$(GRACE): Grace.c
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	echo No object file to clean

fclean:	clean	
	rm -rf $(COLLEEN) $(GRACE) $(SULLY)

re: fclean all