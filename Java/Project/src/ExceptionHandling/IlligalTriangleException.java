package ExceptionHandling;

public class IlligalTriangleException extends Exception {
	private String errormessage;

	public IlligalTriangleException(String errormessage) {
		this.errormessage = errormessage;
	}

	public String getErrormessage() {
		return errormessage;
	}

	public void setErrormessage(String errormessage) {
		this.errormessage = errormessage;
	}
}
