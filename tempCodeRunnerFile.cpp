int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<-n; j++){
            int steps = i + j - 1;
            char ch = 'A' + steps - 1;
            cout<<ch;
        }

        cout<<endl;
    }