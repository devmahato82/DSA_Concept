//construct
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);

    levelOrderQUeue(root);