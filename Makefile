SlidingWindowMaximum: SlidingWindowMaximum.o
	g++ -g -o SlidingWindowMaximum.exe SlidingWindowMaximum.o -pthread    

SlidingWindowMaximum.o: SlidingWindowMaximum/SlidingWindowMaximum.cpp
	g++ -g  -c -pthread SlidingWindowMaximum/SlidingWindowMaximum.cpp
