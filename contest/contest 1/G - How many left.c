#include <stdio.h>

int main() {
   int H,W,h,w ,blackCells;
    scanf("%d %d", &H, &W);
    scanf("%d %d", &h, &w);
    blackCells = (H-h)*(W-w);
    printf("%d", blackCells);
    return 0;
}
//grid problem solved

