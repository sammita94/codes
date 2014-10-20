#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
    long long int sum,sum1,c,i,dif,t,n,k,weights[1001];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        for(i=0;i<n;i++)
            scanf("%lld",&weights[i]);
        mergeSort(weights,0,n-1);
        c=0;sum=0;sum1=0;
        if(k>n/2)
            k=n-k;
        for(i=0;i<n;i++)
        {
            if(c==k)
            {
                sum1=sum;
                sum=0;
            }
            sum=sum+weights[i];
            c++;

        }
        dif=sum-sum1;
        printf("%lld\n",dif);

    }
    return 0;
}




