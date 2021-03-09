// test function

function fib_1(n) {
	return (n<2)? n : fib_1(n-1) + fib_2(n-2);
};

fib_2 = function(n) {
	//return (n<2)? n : fib_1(n-1) + fib_2(n-2);
	if (n<2)
	{
		return (n);
	}
	else
		return fib_1(n-1) + fib_2(n-2);
};

return fib_1(10)

