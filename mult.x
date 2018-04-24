struct intpair {
	int a;
	int b;
};

program MULT_PROG {
	version MULT_VERS {
		int MULT(intpair) = 1;
	} =1;
} = 0x23451111;
