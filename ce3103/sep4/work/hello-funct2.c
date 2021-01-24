#include "hello.h"
#include <stdio.h>

int counter(){
	static int count = 0;
	count++;
	return count;
}
