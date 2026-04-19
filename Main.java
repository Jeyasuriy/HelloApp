class vehicle {
    String brand;
    void setBrand(String b){
        brand = b;
    }
    void start(){
        System.out.println("vehicle has started");
    }
    void stop(){
        System.out.println("vehicle has stopped");
    }
}
class Car extends vehicle{
  int price;
  String color;
  void setDetails(int p,String c){
    price = p;
    color = c;
  }
  void Display(){
    System.out.println("Car Details:");
    System.out.println("Brand :" + brand);
    System.out.println("Price :" + price);
    System.out.println("Color :" + color);
  }
}
class bike extends vehicle{
    int price;
    String color;
    void setDetails(int p,String c){
        price = p;
        color = c;
    }
    void Display(){
    System.out.println("Bike Details :");
    System.out.println("Brand :" + brand);
    System.out.println("Price :" + price);
    System.out.println("Color :" + color);
    }
} 
public class Main {
    public static void main(String[] args){
    Car c = new Car();
    c.setBrand("ferrari");
    c.setDetails(2000000,"Royal Blue");
    c.start();
    c.Display();
    c.stop();

    bike b = new bike();
    c.setBrand("kawasaki");
    c.setDetails(500000,"White");
    c.start();
    c.Display();
    c.stop();
}
}