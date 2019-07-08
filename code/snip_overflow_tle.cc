int a, b, ans = 0;
scanf("%d%d", &a, &b);
for (int i = a; i <= b; i++)
	ans += foo(i);
printf("%d\n", ans);
return 0;
