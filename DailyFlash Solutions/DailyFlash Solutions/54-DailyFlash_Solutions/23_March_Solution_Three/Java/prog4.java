class Demo {
	public static void main(String[] args) {
		int temp = 5, num;
		for(int i = 0; i < 4; i++) {
			if(i > 0) {
				temp = temp + (2 * i - 1);
			}
			num = temp;
			for(int j = 0; j < 7 - i; j++) {
				if(j < i) {
					System.out.print("\t");
				} else {
					System.out.print(num);
					System.out.print("\t");
					num+=i;
				}
			}
			System.out.println();
		}
	}
}
