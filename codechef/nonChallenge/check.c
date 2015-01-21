        #include <stdio.h>

        #define MAX 2

        enum bird {SPARROW = MAX + 1, PARROT = SPARROW + MAX};

        int main()

        {

            enum bird b = PARROT;

            printf("%d\n", b);

            return 0;

        }