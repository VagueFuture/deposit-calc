CC              = gcc
CFLAGS          = -Wall -Werror
EXECUTABLE      = Bin/deposit-calc
SRC_BUILD_DIR   = Build
SRC_DIR         = src/

all: makedir compile

makedir: 
	mkdir -p Bin Build src

compile: $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/deposit.o
	$(CC) $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/deposit.o -o $(EXECUTABLE)

$(SRC_BUILD_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(SRC_BUILD_DIR)/main.o

$(SRC_BUILD_DIR)/deposit.o: $(SRC_DIR)/deposit.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/deposit.c -o $(SRC_BUILD_DIR)/deposit.o

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf Build/ Bin/ src