

OBJS= uimain.o 

CFLAGS=-g -O3 # -g for debug, -O3 for optimization



# first target is built by default.  Usually named "all"

all: completed

completed: $(OBJS)
	cc -o completed $(CFLAGS) $(OBJS)

$(OBJS): history.c tokenizer.c


clean:

	rm -f *.o completed

run:completed

	./completed
