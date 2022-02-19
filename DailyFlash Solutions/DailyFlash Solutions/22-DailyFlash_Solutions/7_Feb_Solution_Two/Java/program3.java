
class Program{
	public static void main(String[] args) {

		for(int i = 1;i <= 100; i++){
			if(i%7 == 0)
				continue;
			System.out.printf("%d ", i);
		}
		System.out.printf("\n");
	}
}
