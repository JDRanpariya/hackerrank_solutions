// Write Your Code Here
     
    char* represent[10] = {"Greater than 9", "one", "two", "three", "four", "five",                                     "six", "seven", "eight", "nine"};

    scanf("%d", &n);

    if(n > 9) {
        printf("%s", represent[0]);
    }
    else {
        printf("%s", represent[n]);
    }