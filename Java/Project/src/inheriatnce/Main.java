package inheriatnce;

public class Main {

	public static void main(String[] args) {
		Book book = new Book(17112254, "One Night at the Call Center", "Chetan Bhagat", 120);

		System.out.println(book.toString());
		System.out.println("");

		Ebook ebook = new Ebook(321313,"Looking for Alaska", "John Green", 375, "www.ebookStore.com", 35);

		System.out.println(ebook.toString());
		System.out.println("");

		PaperBook paperBook = new PaperBook(321321, "The Alchemist", "Paulo Coelho",
				425, 325, 20);

		System.out.println(paperBook.toString());
		System.out.println("");
	}
}
