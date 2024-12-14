# Target and dependencies
run: MyProg
	./MyProg

MyProg: MainExample.o FileReader.o CharacterNode.o CharacterList.o TvShowNode.o TvShowList.o
	g++ MainExample.o FileReader.o CharacterNode.o CharacterList.o TvShowNode.o TvShowList.o -o MyProg

# Rules to compile each .cpp file
MainExample.o: MainExample.cpp
	g++ -c MainExample.cpp

FileReader.o: FileReader.cpp
	g++ -c FileReader.cpp

CharacterNode.o: CharacterNode.cpp
	g++ -c CharacterNode.cpp

CharacterList.o: CharacterList.cpp
	g++ -c CharacterList.cpp

TvShowNode.o: TvShowNode.cpp
	g++ -c TvShowNode.cpp

TvShowList.o: TvShowList.cpp
	g++ -c TvShowList.cpp

# Clean rule
clean:
	rm -f *.o MyProg
