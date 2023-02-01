SOURCES = src/main.cpp src/graphics.cpp src/map.cpp src/storing.cpp src/entities.cpp
EXECUTABLE = game

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	g++ -o $(EXECUTABLE) $(SOURCES) -lncurses

clean:
	rm -f $(EXECUTABLE)