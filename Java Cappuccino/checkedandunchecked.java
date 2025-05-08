public class checkedandunchecked {
  public void throwUncheckedException()
  {
    throw new RuntimeException("THis is an Uncheked Expression");
  }
  public void throwCheckedException() throws Exception{
    throw new Exception("This is a checked Exception");
  }
  public static void main(String[] args) {
    checkedandunchecked c=new checkedandunchecked();
    //no need to handle or declare the unchecked Exception 
    c.throwUncheckedException();

    //must handle or declare the checked exception 
    try{
      c.throwCheckedException();
    }
    catch (Exception e)
    {
      System.out.println("Caught checked exception: " + e.getMessage());
    }
  }
}
