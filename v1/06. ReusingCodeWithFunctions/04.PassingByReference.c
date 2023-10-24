void Swap(int *a, int *b)
{

    int tmp = *a;
    *a = *b; // Dereference Pointers to access the original variables
    *b = tmp;
}