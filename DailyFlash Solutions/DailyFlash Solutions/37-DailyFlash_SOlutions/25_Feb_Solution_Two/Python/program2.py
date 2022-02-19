
for i in range(200, 401):
	n = float(i)
	g1 = (n / 2)
	e = 0.1
	while((float)(abs(g1*g1 - n)) > e):
		g2 = (float)(n / g1)
		g1 = (float)((g1 + g2 )/2)
	print("Square root : ", round(g1, 2))


