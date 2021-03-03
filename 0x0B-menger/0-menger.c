#include "menger.h"

/**
 * menger - function to draw 2D Menger Sponge
 * @level: int passed representing the level of the sponge to be drawn
 * Return - void function, return nothing
 */

void menger(int level) 
{
    if (level < 0)
        return;
    if (level == 0)
        printf("#\n");
    if (level == 1)
    {
        printf("###\n");
        printf("# #\n");
        printf("###\n");
    }
    return;
}
