for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        if(arr[j]>arr[j+1]){
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
}