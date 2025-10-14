#include <stdio.h>

int main() {
    int height[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int i = 0;
    int j = 8;
    int maxsum = 0;

    while (i < j) {
        int h = (height[i] < height[j]) ? height[i] : height[j];
        int width = j - i;
        int area = h * width;

        if (area > maxsum) {
            maxsum = area;
        }

       
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }

    printf("Maximum area: %d\n", maxsum);
    return 0;
}