#pragma once

/*
	https://github.com/keplerproject/md5
*/

#ifndef md5_h
#define md5_h


#define HASHSIZE       16

void md5(const char *message, long len, char *output);

#endif