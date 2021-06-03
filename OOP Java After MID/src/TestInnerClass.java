public class TestInnerClass {
    public static void main(String[] args) {
        A.B b = new A().new B();
        b.info();
    }
}
