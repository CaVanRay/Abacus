# Compiler: Specifies the C++ compiler to use (g++)
CXX = g++

# Compiler Flags: Sets C++17 standard and enables all warnings
CXXFLAGS = -std=c++17 -Wall -I HeaderFiles

# Source Files: Lists the source code files to compile
SRC = src/Divide.cpp

# Target: Name of the final executable to generate
TARGET = Divide

# Default Goal: 'all' is the first rule, so it runs by default when you type 'make'
# It depends on $(TARGET), ensuring the executable is built.
all: $(TARGET)

# Link Rule: Builds the executable $(TARGET) from $(SRC)
# If $(SRC) is newer than $(TARGET), this command runs.
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Clean Rule: Removes the executable to reset the build directory
# Run with 'make clean'
clean:
	rm -f $(TARGET)

# Phony Targets: Declares 'all' and 'clean' as actions, not files.
# This prevents errors if files named 'all' or 'clean' exist in the directory.
.PHONY: all clean
