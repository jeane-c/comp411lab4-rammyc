#include <stdio.h>

//  I know you technically *can* just start a file with a function on the first line, but doesn't it seem
//  kind of jarring? Like, you're used to seeing stuff start lower down the screen because there's usually
//  multiple import statements or global variable declarations or stuff like that, but nope, bam, going hard in the paint
//  straight into functions. Personally, I'd rather not start off that way, so I wrote up this entire stupid paragraph
//  to fill the space. 
//
//  If you're reading this, I must wonder if you've got nothing better to do.
//
//  But that's okay. I've got nothing better to do either. :)


int NchooseK(int n, int k) {
    if (n == k || k == 0) { return 1; }
    
    return NchooseK(n-1, k-1) + NchooseK(n-1, k);
}

int main() {
    
    while(1) {
        int i1 = 0;
        int i2 = 0;
        puts("Enter two integers (for n and k) separated by space:"); 
         scanf("%d %d", &i1, &i2);
        printf("%d\n", NchooseK(i1, i2));

        if (i1 == 0 && i2 == 0) { break; }
    }

}
