CXX = g++
CXXFLAGS = -std=c++17 -Iinclude

SRC = src/main.cpp src/PasswordManager.cpp src/Encryptor.cpp src/Credential.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = passsafe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)