#include <stdio.h>

int main() {
    int length, breadth;
    
    // Read length and breadth from user input
    scanf("%d %d", &length, &breadth);
    
    // Calculate area and perimeter
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    
    // Print the result matching the test case format
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    
    return 0;
}