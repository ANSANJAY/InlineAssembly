Immediate - I
-------------

The difference between i and I is that i is general

whereas I is strictly specified to 32-bit integer data

 asm("movq %1, %0" :
		"=r"(num): //output operand
		 "I" (0xff00aaffaaff) //input operand
	);


Replace "I" with "i" and it will work