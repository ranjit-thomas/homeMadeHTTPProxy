#ifndef SERVERDATA_H
#define SERVERDATA_H

#define MAXRESPONSESIZE 9999

typedef struct server_data
{
	char data[MAXRESPONSESIZE];
	int total_bytes;
} server_data;

#endif