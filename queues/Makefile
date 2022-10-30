rules="all: iterable queue main\n\tg++ -o app main.o queue_application.o\n\niterable:\n\tg++ -c ../iterable_queue.h\nqueue:\n\tg++ -c ../queue_application.cpp\nmain:\n\tg++ -c ../main.cpp"
all:
	mkdir -p output
	printf $(rules) | sed -e 's/^ //' > output/makefile
	cd output && $(MAKE)

clean:
	rm -rf output