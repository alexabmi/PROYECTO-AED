# Compilador y flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Archivos fuente y objetos
SRC = main.cpp interprete.cpp cuack.cpp fecha.cpp
OBJ = $(SRC:.cpp=.o)

# Nombre del ejecutable
TARGET = a.out

# Regla principal
all: $(TARGET)

# Cómo construir el ejecutable a partir de los objetos
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla genérica para compilar cada .cpp en .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos compilados
clean:
	del /Q *.o *.out *.exe 2>nul || exit 0


