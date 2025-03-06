public class SingletonMain {
  public static void main(String[] args) {
    //Trying to create instances 
    //Singleton s=new Singleton(); //not allowed 

    Singleton s1 = Singleton.getInstance(); 
    Singleton s2 = Singleton.getInstance();

    //Verifying if both instances are the same 

    System.out.println(s1==s2);
    //Outout: true 
  }
}
