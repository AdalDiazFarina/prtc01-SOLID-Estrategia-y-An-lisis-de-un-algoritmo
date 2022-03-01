
IDIR =../include
CC= g++
CFLAGS= -std=c++11 -Wall

## subdirectory with the files. o
ODIR=obj

_DEPS = matrix.h context.h column_matrix.h row_matrix.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o matrix.o context.o column_matrix.o row_matrix.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cc $(DEPS)
	$(CC) -w -c -o $@ $< $(CFLAGS)

program: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 