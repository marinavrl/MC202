//funcionamento vai voltando - slide pilhas aplicações

1 int fat ( int n) {
2 int ret , ant ;
3 if (n == 0)
4 ret = 1;
5 else {
6 ant = fat (n -1) ;
7 ret = n * ant ;
8 }
9 return ret ;
10 }