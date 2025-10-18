# Makefile for the Cycle Detection project

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -O2

# Source file
SRCS = src/main.cpp

# Executable name
TARGET = cycle_detector

# Default target
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean up build files
clean:
	rm -f $(TARGET)

.PHONY: all clean
