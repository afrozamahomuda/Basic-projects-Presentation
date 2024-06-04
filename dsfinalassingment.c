#include<iostream>
using namespace std;
main()
{
    int n, i, j, arr[50], search, first, last, middle, temp;



    cout<<"Enter total number of elements :";
    cin>>n;
    cout<<"Enter "<<n<<" number :";
    for(i=0;i<n;++i)
        cin>>arr[i];



    cout<<"Random Input Array = [";
    for(i=0;i<n;++i){
        cout<<" "<<arr[i];
    }
    cout<<" ]"<<endl;



    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }



    cout<<"Sorted Array = [";
    for(i=0;i<n;++i){
        cout<<" "<<arr[i];
    }
    cout<<" ]"<<endl;



    cout<<"\nNumber to search = ";
    cin>>search;
    int counter = 0;
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    while (first <= last)
    {
        if(arr[middle] < search)
        {
            first = middle + 1;
            counter+=1;
        }
        else if(arr[middle] == search)
        {
            counter+=1;
            cout<<search<<" found at index "<<middle<<" in the sorted array"<<"\n";
            cout<<"Number of comparisons = "<<counter<<endl;
            break;
        }
        else
        {
            counter+=1;
             last = middle - 1;
        }
        middle = (first + last)/2;
    }
    if(first > last)
    {
        cout<<search<<" not found in the array."<<endl;
        cout<<"Number of comparisons = "<<counter<<endl;
    }
}
