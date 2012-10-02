#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "btree.h"

unsigned int value(void * key) {
	return *((int *)key);
}

unsigned int keysize(void * key) {
        return sizeof(int);
}

unsigned int datasize(void * data) {
        return sizeof(int);
}

int main(int ac,char * av[])
{
	int i = 0;
	btree * tree;
	bt_key_val * kv;
	int item = 0x43;
	int count = 0;
	int order;
	
	srandom(time(NULL));

	if (ac > 1) {
		count = atoi(av[1]);
	}
	
	for(order=60;order<61;order++) {

            
	    tree = btree_create(order);	
            tree->value = value;
            tree->key_size = keysize;
            tree->data_size = datasize;
	    
	    for (i=0;i<count;i++) {	
		    kv = (bt_key_val*)malloc(sizeof(*kv));
		    kv->key = malloc(sizeof(int));		
		    int rval = random()%1024;
		    *(int *)kv->key = rval;
		    kv->val = malloc(sizeof(int));
		    *(int *)kv->val = rval;
		    btree_insert_key(tree,kv);
	    }
	    
	    /*
	    for (i= count - 1; i > -1; i-= (random()%5)) {	
		    item = values[i];
		    btree_delete_key(tree,tree->root,&item);
	    }
	    */
            // btree_destroy(tree);
	}
	return 0;
}

