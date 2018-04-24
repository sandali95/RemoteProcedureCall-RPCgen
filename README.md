RPC-using-RPCgen


simp.x: this is the RPC protocol definition file. Although it looks like
        'C', it is not! This file is run through the C preprocessor and
	the result is processed by rpcgen. rpcgen will create a header
	file named mult.h containing data structure definitions and
	function prototypes for the C code generated. The generated
	C code is created in the files mult_clnt.c (which contains the
	client stubs) and mult_svc.c (which contains the main program
	for the server). rpcgen also creates any needed XDR filter functions
	in the file mult_xdr.c

mult_client.c: the main client program. This client just calls each of the remote procedures once and
	prints out the results. 

mult_client.c: the main client program.

simp_svc.c: the server main program, this was created by rpcgen.

simp_clnt.c: the client stubs, this file was created by rpcgen.

simp_xdr.c: the XDR filter(s) needed for this application, this file
	was created by rpcgen.


How to run :

First go to the project root and run below three commands in linux terminal

rpcinfo; rpcgen -C mult.x; make -f Makefile.mult; ./mult_server;

Then open a new terminal and run the client using the following command. In the below command, after the localhost user should give any number as the parameter to check odd, even property.

./oddEven_client ur_server or localhost number_1 number_2;
