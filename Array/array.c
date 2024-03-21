#include <stdio.h>

#include <string.h>

int main()
{
    char hello[50] = " ";
    char im[50] = " ";
    char getting[50] = " ";

    strcat(hello, "Hello "); /* store word in hello */
    strcat(im, "I'm "); /* store word in im */
    strcat(getting, "getting "); /* store word in getting */
 
    char world[] = "World!";
    char just[] = "just";
    char started[] = "started.";

    strcat(hello, world); /* store world in hello */
    strcat(im, just); /* store just in im */
    strcat(getting, started); /* store started in getting */

    strcat(hello, im); /* store new im in new hello */
    
    strcat(hello, getting); /* store new getting in new new hello */

    printf("%s", hello );

    return 0;
}