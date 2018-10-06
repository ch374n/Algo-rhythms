// 3999 
public class roman {
	public static void main(String[] args) {
		int number = 13;
		String numerals[] = new String[] {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
		int numbers[] = new int[] {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
		String romanString ="";
			int i = 0;
			while(number > 0 && i <= 12) {
				if((number - numbers[i]) >= 0) {
					number -= numbers[i];
					romanString += numerals[i];
				} else {
					i++;
				}
			}
			System.out.println(romanString);
	}
}

// LCDM


// M 	CM 	D  	CD 	C 	XC L  XL  X IX V IV I

// 1000 900 500 400 100 90 50 40 10 9 5 4 1


