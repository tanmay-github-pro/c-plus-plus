/**
 * Functions defined to:
 * -> merge two sorted lists
 * -> perform iterative Merge Sort
*/

void mergeSortIterative(int a[], int n);
void merge(int a[], int l, int m, int h);

void mergeSortIterative(int a[], int n)
{
    int p, l, m, h;
    for (p = 2; p <= n; p *= 2)
    {
        for (int i = 0; i + p - 1 < n; i += p)
        {
            l = i;
            h = i + p - 1;
            // same as (l+h)/2 but overflow is avoided in case of large l and h
            m = l + (h - l) / 2;
            merge(a, l, m, h);
        }
    }
    /*  if elements are remaining which they will be
        if number of elements is not a power of 2
        p/2 - 1 because indices start from 0 and not 1
     */
    if (p/2 < n)
        merge(a, 0, p/2 - 1, n-1);
}

void merge(int a[], int l, int m, int h)
{
    // sizes of temporary arrays to store lists
    int n1 = m - l + 1;
    int n2 = h - m;
    // temporary arrays to store lists
    int aL[n1], aR[n2];
    // copying data to temporary arrays
    for (int i = 0; i < n1; i++)
        aL[i] = a[l + i];
    for (int i = 0; i < n2; i++)
        aR[i] = a[m + 1 + i];

    // Merge the temp arrays back into arr[l..h]
    // i iterates through array aL
    // j iterates through array aR
    // k is used to merge aL and aR into array a
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if(aL[i] <= aR[j])
            a[k++] = aL[i++];
        else
            a[k++] = aR[j++];
    }

    // Copying remaining elements if any
    while (i < n1)
        a[k++] = aL[i++];
    while (j < n2)
        a[k++] = aR[j++];

}