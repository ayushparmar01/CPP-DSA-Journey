        */

    int rows;
    cin >> rows;

    int columns;
    cin >> columns;
    ;
    // creation a 2d array
    int** arr = new int*[rows];
    for(int i=0; i<rows; i++) {
        arr[i] = new int[rows];
    }

    

    // taking input
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++) {2
            cin >> arr[rows][columns];
        }
    }

    // taking output
    cout << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    return 0;
}