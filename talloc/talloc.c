#include <stdio.h>
#include <stdlib.h>
#include <talloc.h>


int main(void) {
	struct record {
	    char *name;
	    char *value;
	};

	struct record *r;

	r = talloc_zero(NULL, struct record);
	r->name = talloc_strdup(r, "Hello");
	r->value = talloc_strdup(r, "World");
	printf("%s/n",r->name);
	printf("%s/n",r->value);

	talloc_free(r);

	return EXIT_SUCCESS;
}

