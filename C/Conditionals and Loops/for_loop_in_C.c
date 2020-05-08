int main() 
{
    int a, b;
    char arr[][10]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
  	for(int i = a; i <= b; i++) {
      if (i<=9 && i>=1) {
          printf("%s\n",arr[i-1]);
      }
      else if (i>9 && (i%2==0)){
          
      printf("even\n");
      }
      else if (i!=0){
          printf("odd\n");
      }
}

    return 0;
}

