CC=clang
OPTS=-Wall -pedantic -std=c++11
LIBS=-lstdc++
SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)

APPFILE=happydevelopersday

all: $(APPFILE)

$(APPFILE): $(OBJECTS)
	$(CC) $(LIBS) -o $@ $^

.cpp.o:
	$(CC) -c $(OPTS) $<

clean:
	rm -f $(APPFILE) $(OBJECTS)

install:
	cp $(APPFILE) /usr/local/bin/

uninstall:
	rm -f /usr/local/bin/$(APPFILE)
