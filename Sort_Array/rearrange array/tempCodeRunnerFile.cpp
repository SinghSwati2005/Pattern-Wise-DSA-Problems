
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    
    vector<int>ans = bysign(nums);


    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
