class Demo {
	public static void main(String[] args) {
		int num;
		for(int i = 0; i < 5; i++) {
			num = i * i;
			for(int j = 0; j < 5; j++) {
				if(j >= i) {
					System.out.print(num + "\t");
					num += i;
				} else {
					System.out.print("\t");
				}
			}
			System.out.println();
		}
	}
}
