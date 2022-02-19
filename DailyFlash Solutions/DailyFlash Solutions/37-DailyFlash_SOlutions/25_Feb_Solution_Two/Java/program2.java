
class Program {
public static void main(String[] args){
		float n;
		float g1, g2, e;
		for(n = 200.0f; n <= 400.0f; n++){
			g1 = (float)(n / 2);
			e = 0.1f;
			while((float)(Math.abs(g1*g1 - n)) > e){
				g2 = (float)(n / g1);
				g1 = (float)((g1 + g2 )/2);
			}
			System.out.printf("Square root of %f : %5.2f\n", n, g1);
		}
	}
}
