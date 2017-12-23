package inheriatnce;

public class Ebook extends Book {
	private String downloadURL;
	private double sizeMb;

	public Ebook(int isbn, String title, String author, double price, String downloadURL, double sizeMb){
		super(isbn, title, author, price);
		this.downloadURL = downloadURL;
		this.sizeMb = sizeMb;

	}

	public String toString(){
		return super.toString() + "\ndownloadURl: " + downloadURL + "\nSize: "
				+ sizeMb;
	}


}
