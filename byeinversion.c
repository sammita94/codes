#include <stdio.h>
#include <stdlib.h>

long long int  _mergeSort(long long int arr[], long long int temp[], long long int left, long long int right);
long long int merge(long long int arr[], long long int temp[], long long int left, long long int mid, long long int right);

/* This function sorts the input array and returns the
   number of inversions in the array */
long long int mergeSort(long long int arr[], long long int array_size)
{
    long long int *temp = (long long int *)malloc(sizeof(long long int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}

/* An auxiliary recursive function that sorts the input array and
  returns the number of inversions in the array. */
long long int _mergeSort(long long int arr[], long long int temp[], long long int left, long long int right)
{
  long long int mid, inv_count = 0;
  if (right > left)
  {
    /* Divide the array long long into two parts and call _mergeSortAndCountInv()
       for each of the parts */
    mid = (right + left)/2;

    /* Inversion count will be sum of inversions in left-part, right-part
      and number of inversions in merging */
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);

    /*Merge the two parts*/
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}

/* This funt merges two sorted arrays and returns inversion count in
   the arrays.*/
long long int merge(long long int arr[], long long int temp[], long long int left, long long int mid, long long int right)
{
  long long int i, j, k;
  long long int inv_count = 0;

  i = left; /* i is index for left subarray*/
  j = mid;  /* i is index for right subarray*/
  k = left; /* i is index for resultant merged subarray*/
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];

     /*this is tricky -- see above explanation/diagram for merge()*/
      inv_count = inv_count + (mid - i);
    }
  }

  /* Copy the remaining elements of left subarray
   (if there are any) to temp*/
  while (i <= mid - 1)
    temp[k++] = arr[i++];

  /* Copy the remaining elements of right subarray
   (if there are any) to temp*/
  while (j <= right)
    temp[k++] = arr[j++];

  /*Copy back the merged elements to original array*/
  for (i=left; i <= right; i++)
    arr[i] = temp[i];

  return inv_count;
}
int main()
{
        long long int t,total,n,a[100005],k,inv,dif,i;
        scanf("%lld",&total);
        for(t=1;t<=total;t++)
        {
            scanf("%lld %lld",&n,&k);
            int flag=0;
            for(i=0;i<n;i++)
                scanf("%lld",&a[i]);
            inv=mergeSort(a,n);
            //for(i=0;i<n;i++)
                //printf("%lld ",a[i]);
            if(inv>=k)
                printf("Case %lld: %lld\n",t,(inv-k));
            else
            {
                for(i=0;i<n-1;i++)
                {
                    if(a[i]==a[i+1])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                  printf("Case %lld: %lld\n",t,0);
                else
                {
                    dif=k-inv;
                    dif=dif%2;
                    printf("Case %lld: %lld\n",t,dif);
                }
            }
        }
        return 0;

}
