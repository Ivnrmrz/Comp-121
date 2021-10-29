#include <stdio.h>
int main() {
    printf("4 friends order a pizza with 10 slices\n");
    int slices = 10;
    int friends = 4;
    //How many whole slices would each friend get?
    int whole_slices = slices / friends;
    printf( "Each friend would get %d whole slices\n", whole_slices );
    //How many would be left over? 
    float slices_leftover = slices % friends;
    printf ("There would be %.f slices left\n", slices_leftover);
    //How many would each friend get if fractional components were allowed?
    double fractional_slices = (double) slices / (double) friends;
    printf("If fractional pieces were allowed, each friend could recieve %.1f slices\n", fractional_slices);
}