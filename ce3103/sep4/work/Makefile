#Defining variables
objects = hello-main.o hello-funct1.o hello-funct2.o

all: helloworld debug

#Linking rules
helloworld: $(objects)
	gcc -o helloworld $(objects)

debug: $(objects)
	gcc -g -o helloworld-d $(objects)

#Compiling rules
hello-main.o: hello-main.c
	gcc -Wall -g -c hello-main.c

hello-funct1.o: hello-funct1.c
	gcc -Wall -g -c hello-funct1.c

hello-funct2.o: hello-funct2.c
	gcc -Wall -g -c hello-funct2.c

#cleaning up
clean:
	rm $(objects)

