# Compiler And Flags
CXX = g++
CXXFLAGS = -std=c++17 -I./include -Wall -Wextra

#Directories
SRC_DIR = ./src
BUILD_DIR = ./build
INCLUDE_DIR = ./include

#Source Files And Obj Files
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SOURCES))

#Target Exe
TARGET = $(BUILD_DIR)/datascrub

#Default Rule
all: $(TARGET)

#Linking The Final Exe
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

#Rule For Building Object Files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

#Clean Up Build Files
clean:
	rm -rf $(BUILD_DIR)/*

#Debug Rule
debug:
	@echo "Sources: $(SOURCES)"
	@echo "Objects: $(OBJECTS)"


