int max1=arr[0], max2=arr[0];
for(int i=0;i<5;i++){
    if(arr[i]>max1){
        max2=max1;
        max1=arr[i];
    }
}
cout<<max2;