# Compiler flags
CXX = clang++
CXXFLAGS = -Wall -std=c++11

# Executable target
TARGET = pp1

# Executable target
SRCS = pp1.cpp

# Object Files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Compile source files into object files
%.0: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

#Clean target to remove generated files
clean:
	rm -f $(TARGET) $(OBJS)
