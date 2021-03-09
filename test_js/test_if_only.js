fib_2 = function(n) {
	if (n<2)
	{
		return (n);
	}
	print( fib_2(n-1) + fib_2(n-2));
};

return fib_2(10)

