/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "mult.h"

int *
mult_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("MUltipication Called\n");
	printf("Parameters are %d,%d\n",argp->a,argp->b);
	result = argp->a * argp->b;
	return &result;
}
