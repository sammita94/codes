#include<stdio.h>
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

int main()
{
    long long int i,t,a[100001],n,sum,*b;
    scanf("%lld",&t);
    //b=(int*)malloc(1000000001*sizeof(int));
    while(t--)
    {
        sum=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        mergeSort(a,0,n-1);
        for(i=0;i<n;i++)
        {
            if(n%2==0)
            {
                if(i%2==1)
                    sum=sum+a[i];
            }
            else
            {
                if(i%2==0)
                    sum=sum+a[i];
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
