a = 27
b = 0
if(a > 30)
	a -= 30;
else if(a > 20)
	a -= 20;
else if(a > 10)
	a -= 10;

if(a > 0 || !b)
	print(1), return -a;
else
	return a;
