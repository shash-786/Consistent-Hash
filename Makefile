CXX = g++
CXXFLAGS = -Wall -Wextra -I./include

TARGET = consistenthash
SOURCES = main.cpp src/consistenthash.cpp
HEADERS = include/consistenthash.h include/node.h include/request.h 

$(TARGET): $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean
