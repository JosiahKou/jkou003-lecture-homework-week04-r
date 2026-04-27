int a = 1, b = 2, c = 1;  // Force into data section

int sum(int x, int y) {
    c = 0;  // Set to 0 at runtime
    return x + y;
}
