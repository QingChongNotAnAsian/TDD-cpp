default: build

build:
	test -d bin || mkdir bin
	g++ src/factors.cpp -O3 -o bin/factors.out
clean:
	rm -rf bin
