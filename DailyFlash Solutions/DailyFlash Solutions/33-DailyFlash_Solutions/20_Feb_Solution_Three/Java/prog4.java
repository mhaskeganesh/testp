class Demo {

	public static void main(String[] args) {
		int num, temp, k;
		String bin = "";
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 4; j++) {
				if(j >= i) {
					num = j + i;
					bin = "";
					if(i + j == 0)
						bin = "0";
					while(num != 0) {
						bin = (char)(num % 2 + 48) + bin;
						num /= 2;
					}
					System.out.print(bin + "\t");
				} else {
					System.out.print("\t");
				}
			}
			System.out.println();
		}
	}
}
