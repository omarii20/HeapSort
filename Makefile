# Compiler
CC = g++

# Compiler flags (optional, adjust as needed)
# Compiler flags
CFLAGS = -std=c++17 -Wall

# Source files and headers
SRC = main.cpp Source/RandomNumbers.cpp Source/HeapSort.cpp 
HEADERS = Header/RandomNumbers.h Header/HeapSort.h 

# Object files
OBJ = $(SRC:.cpp=.o)

# Output executable name
OUT = program

# Default target to build the program
all: $(OUT)

# Rule to build the program
$(OUT): $(OBJ)
	$(CC) $(OBJ) -o $(OUT)

# Rule to build object files from source files
%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up the generated files
clean:
	rm -f $(OBJ) $(OUT)

.PHONY: all clean
