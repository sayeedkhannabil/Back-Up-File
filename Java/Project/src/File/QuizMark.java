package File;

public class QuizMark {
	private int id;
	private double mark;

	public QuizMark(int id, double mark) {
		this.id = id;
		this.mark = mark;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public double getMark() {
		return mark;
	}

	public void setMark(double mark) {
		this.mark = mark;
	}

	@Override
	public String toString() {
		return "QuizMark{" +
				"id=" + id +
				", mark=" + mark +
				'}';
	}
}
