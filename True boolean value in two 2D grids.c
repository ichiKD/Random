/* 
The purpose of the following program is to find the indices 
of a true boolean value in two 2D grids:
*/

struct coordinates {
    size_t i1;
    size_t j1;
    size_t i2;
    size_t j2;
};

struct coordinates dry(bool grid1[64][64], bool grid2[64][64]) {
    struct coordinates ret = {-1, -1, -1, -1}; // +inf
    for (int i = 0; i < 64; i++)
        for (int j = 0; j < 64; j++)
            if (grid1[i][j]) {
                ret.i1 = i;
                ret.j1 = j;
                goto next1;
            }
    puts("nothing found in grid 1");
    next1:; //                          <---
    for (int i = 0; i < 64; i++)
        for (int j = 0; j < 64; j++)
            if (grid2[i][j]) {
                ret.i2 = i;
                ret.j2 = j;
                goto next2;
            }
    puts("nothing found in grid 2");
    next2:; //                          <---
    return ret;
}