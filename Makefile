main: solution
	./solution.o

solution: solution.cpp trie.o 
	g++ solution.cpp -o solution.o

trie.o: trie.cpp
	g++ -c trie.cpp -o trie.o

clean:
	rm -f solution.o trie.o
