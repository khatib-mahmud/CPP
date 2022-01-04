  #include<bits/stdc++.h>
    using namespace std;
    int x,y,i,j;
    char s;
    vector<int>a,b;
    main()
    {
    cin>>x>>y;
      for(i=0;i<x;i++)
     for(j=0;j<y;j++)
    {
        cin>>s;
        if(s=='S')
        {
        a.push_back(i);b.push_back(j);
    }
    }
    cout<<x*y- a.size()*b.size();
    }