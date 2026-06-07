#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/**
 * Checks if two strings are isomorphic.
 * @param s1 The first string.
 * @param s2 The second string.
 * @return True if the strings are isomorphic, false otherwise.
 */
bool is_isomorphic(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);


    // Use arrays as hash maps to store character mappings
    // Assuming ASCII characters, we can use an array of size 128 (or 256)
    int map1[128] = {0}; // Maps characters from s1 to s2
    int map2[128] = {0}; // Maps characters from s2 to s1 (to ensure one-to-one mapping)
    
      static int leni;

    if (len1>len2) leni=len2;
    else leni=len1;


    for (int i = 0; i < leni; i++) {
        char c1 = s1[i];
        char c2 = s2[i];

        // Check mapping from c1 to c2
        if (map1[c1] == 0) {
            map1[c1] = c2;
        } else if (map1[c1] != c2) {
            return false; // Inconsistent mapping
        }

        // Check mapping from c2 to c1
        if (map2[c2] == 0) {
            map2[c2] = c1;
        } else if (map2[c2] != c1) {
            return false; // Ensures one-to-one mapping
        }
    }

    return true;
}

int main(int argc, char**argv) {
    
	if (argv[1]==NULL) {
		printf("Text Pattern A Missing\n");
		exit(-1);
	}
	if (argv[2]==NULL) {
		printf("Text Pattern B Missing\n");
		exit(-1);
	}		

	if (is_isomorphic(argv[1],argv[2])) {
		printf("ISOMORPHIC\n");
	} 
		
	return 0;
}
















