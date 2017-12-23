package inheriatnce;

public class PaperBook extends Book{
	private double shippingWeight;
	private int stock;

	public PaperBook(int isbn, String title, String author, double price, double shippingWeight, int stock){
		super(isbn, title, author, price);

		this.shippingWeight = shippingWeight;
		this.stock = stock;
	}

	@Override
	public String toString() {
		return super.toString() + "\nShipping Weight:" + shippingWeight +
				"\nStock: " + stock;
	}
}
