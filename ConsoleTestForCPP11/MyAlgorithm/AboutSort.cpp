#include "AboutSort.h"
#include <utility>


using namespace std;

int *myPatition(int *b, int *e)
{
    int *p = b;
    int *r = e - 1;
    int flag = *r;
    for (int *q = b; q < r; q++)
    {
        if (*q < flag)
            swap(*(p++), *q);
    }
    swap(*p, *r);
    //p must be in its position;
    return p;
}

void qsort(int *b, int *e)
{
    if (b == e)
        return;
    int* p = myPatition(b, e);
    qsort(b, p);
    qsort(p + 1, e);
}

void k_thElement(int *b, int *k, int *e)
{
    int *p = myPatition(b, e);
    if (p == k)
        return;
    if (p < k)
        k_thElement(p + 1, k, e);
    else
        k_thElement(b, k, p);
}