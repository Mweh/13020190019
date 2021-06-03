public class A {
    int a;
    void info(){
        class C{
            void info(){

            }
            C c = new C();
        }
    }
    class B{
        void info(){
            System.out.println("Ini inner class");
//            this.info();
        }
    }
}
