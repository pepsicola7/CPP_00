# nom de l'excutable
TARGET = ./phonebook

#Compilateur
CXX = c++

#Flags
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

#Fichier sources et objets
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

#regle principale
all: $(TARGET)

#compilation de l'executable
$(TARGET) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o$(TARGET) $(OBJ)

#compilation des fichiers sources en objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

#Nettoyage
clean:
	rm -f $(OBJ) $(TARGET)

#Nettoyage complets
fclean: clean
	rm -rf *.o

#Regle pour executer le programme
run: $(TARGET)
	./$(TARGET)