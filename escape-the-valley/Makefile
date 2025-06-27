# Compiler and flags
CXX = C:/msys64/ucrt64/bin/g++.exe
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude -Iinclude/crops -Iinclude/festivals -Iinclude/locations -Iinclude/residences -Iinclude/seasons -Iinclude/shops -Iinclude/tools -Iinclude/villagers

# Source and build files
SRCS := $(wildcard src/*.cpp)
OBJS := $(patsubst src/%.cpp, build/%.o, $(SRCS))
TARGET = main.exe

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

build/%.o: src/%.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)