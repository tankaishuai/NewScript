function test(x){
	local y = x
	x += 1;
	y -= 2;
	global z *= x;
	x ^= 10;
	x = 10;
	do
	{
		x -= 2;
	}
	while (x);
	return (z);
	x %= 5;
}
z = 11;
r = test(123);
