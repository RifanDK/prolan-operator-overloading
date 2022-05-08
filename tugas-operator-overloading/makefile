CXX ?=g++ 
CXXFLAGS += --std=c++17 -O3 -Wall -Wextra -Iinclude
SOURCES = $(wildcard src/*.cpp)
TARGET = Overloading

src/%.o: src/%.cpp 
    $(CXX) $(CXXFLAGS) -c -o $@ $<

$(TARGET): $(SOURCES:.cpp=.o)
    $(CXX) $(CXXFLAGS) -o $@ $^

clean:
    rm -f src/*.o $(TARGET).exe