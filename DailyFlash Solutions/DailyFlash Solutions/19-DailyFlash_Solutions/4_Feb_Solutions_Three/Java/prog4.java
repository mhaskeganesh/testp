class Demo {
	public static void main(String[] args) {
		int num = 7;
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 4 - i; j++) {
				System.out.print(num + " ");
				num += 7;
			}
		System.out.println();	
		}
	}
}
