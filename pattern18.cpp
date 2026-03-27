for(int i=1;i<=5;i++){
    int num=1;
    for(int j=1;j<=i;j++){
        cout<<num<<" ";
        num=num*(i-j)/j;
    }
    cout<<endl;
}