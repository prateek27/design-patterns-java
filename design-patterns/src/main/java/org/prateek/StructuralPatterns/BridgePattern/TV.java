package org.prateek.StructuralPatterns.BridgePattern;

public class TV implements Device {
    private boolean isOn;
    private int volume;

    public TV() {
        this.isOn = false;
        this.volume = 0;
    }

    @Override
    public void powerOn() {
        this.isOn = true;
        System.out.println("TV is now ON");
    }

    @Override
    public void powerOff() {
        this.isOn = false;
        System.out.println("TV is now OFF");
    }

    @Override
    public void volumeUp() {
        if (isOn) {
            volume = Math.min(volume + 1, 100);
            System.out.println("TV volume increased to " + volume);
        } else {
            System.out.println("Turn on the TV to increase volume");
        }
    }

    @Override
    public void volumeDown() {
        if (isOn) {
            volume = Math.max(volume - 1, 0);
            System.out.println("TV volume decreased to " + volume);
        } else {
            System.out.println("Turn on the TV to decrease volume");
        }
    }

    @Override
    public void mute() {
        if (isOn) {
            volume = 0;
            System.out.println("TV is now muted");
        } else {
            System.out.println("Turn on the TV to mute");
        }
    }

    @Override
    public boolean isPoweredOn() {
        return isOn;
    }

    @Override
    public int getVolume() {
        return volume;
    }
}