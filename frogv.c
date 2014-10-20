#include<stdio.h>
#include<stdlib.h>
void merge(long long int arr[],long long int l,long long int m,long long int r)
{
    long long int i, j, k;
    long long int n1 = m - l + 1;
    long long int n2 =  r - m;

    /* create temp arrays */
    long long int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the sub-array
  of arr to be sorted */
void mergeSort(long long int arr[],long long int l,long long int r)
{
    if (l < r)
    {
        long long int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

long long int binary_search(long long int arr[],long long int l,long long int h,long long int item)
{
    long long int m;
    while(l<=h)
    {
        m=(l+h)/2;
        if(arr[m]==item)
            return m;
        if(item>arr[m])
            l=m+1;
        if(item<arr[m])
            h=m-1;

    }
    return -1;
}
int main()
{

    long long int a,b,i,l1,l2,n,k,p,*frogs,*sorted,*check;
    scanf("%lld %lld %lld",&n,&k,&p);
    frogs=(long long int*)malloc(n*sizeof(long long int));
    sorted=(long long int*)malloc(n*sizeof(long long int));
    check=(long long int*)malloc(n*sizeof(long long int));
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&frogs[i]);
        sorted[i]=frogs[i];
    }
    mergeSort(sorted,1,n);
    for(i=n;i>=1;i--)
    {
        if(i==n)
            check[i]=sorted[i]+k;
        else
        {
            if((sorted[i+1]-sorted[i])<=k)
                check[i]=check[i+1];
            else
                check[i]=sorted[i]+k;
        }
    }
    for(i=1;i<=p;i++)
    {
        scanf("%lld %lld",&a,&b);
        l1=binary_search(sorted,1,n,frogs[a]);
        l2=binary_search(sorted,1,n,frogs[b]);
        if(check[l1]==check[l2])
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}




