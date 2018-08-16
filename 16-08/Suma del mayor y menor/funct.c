int extremos (int a, int b, int c, int d){
    int min, max;
    if(a < b)   { min = a; max = b; }
    else        { min = b; max = a; }
    if (min > c) min = c;
    if (min > d) min = d;
    if (max < c) max = c;
    if (max < d) max = d;
    return min + max;
}
