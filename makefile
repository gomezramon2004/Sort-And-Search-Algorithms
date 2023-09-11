CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = main
PRSDIR = parse
SRCDIR = search
SRTDIR = sort

SRCS = main.cpp \
        $(PRSDIR)/parseIntoVec.cpp \
        $(SRCDIR)/sequentialSearch.cpp \
        $(SRCDIR)/binarySearch.cpp \
        $(SRTDIR)/exchangeSort.cpp \
        $(SRTDIR)/bubbleSort.cpp \
        $(SRTDIR)/mergeSort.cpp

EXECUTABLE = a.out

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)

.PHONY: all run clean