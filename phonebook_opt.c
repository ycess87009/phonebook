#include <stdlib.h>
#include <string.h>
#include "phonebook_opt.h"

/* FILL YOUR OWN IMPLEMENTATION HERE! */
entry *findName(char lastname[], entry *pHead)
{
    while(pHead!=NULL) {
        if( strlen(lastname) == strlen(pHead->lastName) ) {
            if (strcasecmp(lastname, pHead->lastName) == 0)
                return pHead;
        }
        pHead=pHead->pNext;
    }
    return NULL;
}

entry *append(char lastName[], entry *e)
{
    e->pNext = (entry *) malloc(sizeof(entry));
//  e->data=  (info *) malloc(sizeof(info));
    e = e->pNext;
    strcpy(e->lastName, lastName);
    e->pNext = NULL;

    return e;
}

