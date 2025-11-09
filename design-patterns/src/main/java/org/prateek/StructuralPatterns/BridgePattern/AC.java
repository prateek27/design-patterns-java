package org.prateek.StructuralPatterns.BridgePattern;

public class AC implements Device {
    private boolean isOn;
    private int temperature;

    public AC() {
        this.isOn = false;
        this.temperature = 25;
    }

    @Override
    public void powerOn() {
        this.isOn = true;
        System.out.println("AC is now ON at temperature " + temperature);
    }

    @Override
    public void powerOff() {
        this.isOn = false;
        System.out.println("AC is now OFF");
    }

    @Override
    public void volumeUp() {
        if (isOn) {
            temperature = Math.min(temperature + 1, 30);
            System.out.println("AC temperature increased to " + temperature);
        } else {
            System.out.println("Turn on the AC to increase temperature");
        }
    }

    @Override
    public void volumeDown() {
        if (isOn) {
            temperature = Math.max(temperature - 1, 16);
            System.out.println("AC temperature decreased to " + temperature);
        } else {
            System.out.println("Turn on the AC to decrease temperature");
        }
    }

    @Override
    public void mute() {
        if (isOn) {
            temperature = 25;
            System.out.println("AC temperature reset to default: " + temperature);
        } else {
            System.out.println("Turn on the AC to reset temperature");
        }
    }

    @Override
    public boolean isPoweredOn() {
        return isOn;
    }

    @Override
    public int getVolume() {
        return temperature;
    }
}