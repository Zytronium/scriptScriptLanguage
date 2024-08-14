//
// Created by Home Depot Deathbot #12816 on 8/14/24.
//

#ifndef SCRIPTSCRIPTLANGUAGE_KEYWORDS_H
#define SCRIPTSCRIPTLANGUAGE_KEYWORDS_H

typedef struct keyword_s {
	char *name;
	int (*func)(char *, int);
} keyword_t;

#endif //SCRIPTSCRIPTLANGUAGE_KEYWORDS_H
