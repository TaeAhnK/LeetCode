CXX = clang++
TARGET = Main
SOURCE = Main.cpp

CXXFLAGS = -std=c++23 -O2 -Wall -Wextra -Wshadow -Wconversion
SANFLAGS = -fsanitize=address -fno-omit-frame-pointer
LDFLAGS =

all: run

$(TARGET): $(SOURCE)
	$(CXX) $(SOURCE) -o $(TARGET) $(CXXFLAGS) $(SANFLAGS) $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)