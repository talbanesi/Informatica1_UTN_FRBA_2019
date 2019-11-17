CFLAGS = -c

ejemplo_make_1: ejemplo_make_1.o
	$(CC) ejemplo_make_1.o -o ejemplo_make_1

ejemplo_make_1.o: ejemplo_make_1.c
	$(CC) $(CFLAGS) ejemplo_make_1.c

clean:
	$(RM) *.o ejemplo_make_1 core
