package TestPackage;

public class Fraction {

	private int numerator;

	private int denominator;

	Fraction(){

	}

	public Fraction(int numerator, int denominator){
		this.numerator = numerator;
		this.denominator = denominator;
	}


	public int getNumerator(){
		return numerator;
	}

	public int getDenominator() {
		return denominator;
	}

	public void setNumerator(int numerator) {
		this.numerator = numerator;
	}

	public void setDenominator(int denominator) {
		this.denominator = denominator;
	}

	public String toSring(){
		String s= numerator + "/" + denominator;
		return s;
	}

	public void multiplication(Fraction f){
		numerator = numerator* f.numerator;
		denominator = denominator * f.denominator;
		int r= gcd(numerator, denominator);
		numerator = numerator/r;
		denominator = denominator/r;
	}

	public void add(Fraction f){
		numerator = (numerator* f.denominator) + (denominator*f.numerator);
		denominator = denominator * f.denominator;
		int r= gcd(numerator, denominator);
		numerator = numerator/r;
		denominator = denominator/r;
	}

	public void sub(Fraction f){
		numerator = (denominator*f.numerator) -(numerator* f.denominator);
		denominator = denominator * f.denominator;
		int r= gcd(numerator, denominator);
		numerator = numerator/r;
		denominator = denominator/r;
	}

	public void div(Fraction f){
		numerator = numerator*f.denominator;
		denominator = f.numerator * denominator;
		int r= gcd(numerator, denominator);
		numerator = numerator/r;
		denominator = denominator/r;
	}

	public int gcd(int a, int b){
		if(b==0)
			return b;
		else
			return gcd(b, a%b);
	}

	@SuppressWarnings("unused")
	private void reduction(int a, int b){
		int r =gcd(a,b);
		a = a/r;
		b=b/r;
	}




}
