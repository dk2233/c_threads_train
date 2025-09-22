#include "stdio.h"
#include "threads.h"

int fun_hello(void *word);


int fun_hello(void *word)
{
    if (word != NULL)   printf("%s\n",(char*)word);
}


int main(int argc, char ** argv)
{
    thrd_t *thrd_p;
    char *aaaa = "aaaaaa";
    int result;
    fun_hello("text");
    fun_hello("hello");

    thrd_create(thrd_p, &fun_hello, (void *)aaaa);

    thrd_join(*thrd_p, &result  );



return 0;
}