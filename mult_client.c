/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "mult.h"


void
mult_prog_1(char *host,int x ,int y)
{
	CLIENT *clnt;
	int  *result_1;
	intpair  mult_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, MULT_PROG, MULT_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
	mult_1_arg.a =x;
	mult_1_arg.b =y;
	result_1 = mult_1(&mult_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("the rsult is %d \n",*result_1);
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	mult_prog_1 (host,atoi(argv[2]),atoi(argv[3]));
exit (0);
}
