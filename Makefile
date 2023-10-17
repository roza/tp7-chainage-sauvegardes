# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address
#LDFLAGS = -lasan
EXEC = main
OBJS = listepers.o main.o

# Règle par défaut
all: $(EXEC)

# Compilation
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

main.o: main.c listepers.h
	$(CC) $(CFLAGS) -c main.c

listepers.o: listepers.c listepers.h
	$(CC) $(CFLAGS) -c listepers.c


# Nettoyage
clean:
	rm -f $(OBJS)

# Suppression de tous les fichiers générés
distclean: clean
	rm -f $(EXEC)
