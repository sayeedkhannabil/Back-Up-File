package inheriatnce;

public class Book {
	private int isbn;
	private String title;
	private String author;
	private double price;


	public Book(int isbn, String title, String author, double price){
		this.isbn = isbn;
		this.author = author;
		this.title = title;
		this.price = price;
	}

	public String toString(){
		return "isbn: " + isbn + " \nTitle: " + title + "\nAuthor: " + author
				+ "\nPrice: " + price;
	}


}
