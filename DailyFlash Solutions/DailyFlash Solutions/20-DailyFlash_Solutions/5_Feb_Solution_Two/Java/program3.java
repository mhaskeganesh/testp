
class Program{

	public static void main(String[] args) {
		for(int i = 1; i <= 100; i++){
			if(i % 2 == 0)
				continue;
			else
			System.out.printf("%d ", i);
		}
		System.out.printf("\n");
	}
}
