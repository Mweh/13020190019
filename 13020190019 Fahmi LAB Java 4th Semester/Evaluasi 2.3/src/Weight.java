public class Weight extends IdealWeight {
    private float height;

    public float getHeight() {
        return height;
    }

    public void setHeight(float height) {
        this.height = height;
    }

    @Override
    float ideal() {
        float ideal = height - 100;
        System.out.println("Ideal Weight: " + ideal + " kg");
        return 0;
    }
}

