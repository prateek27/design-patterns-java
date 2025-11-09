package org.prateek.StructuralPatterns.BridgePattern;

public class Radio implements Device {
    private boolean isOn;
    private int volume;

    public Radio() {
        this.isOn = false;
        this.volume = 0;
    }

    @Override
    public void powerOn() {
        this.isOn = true;
        System.out.println("Radio is now ON");
    }

    @Override
    public void powerOff() {
        this.isOn = false;
        System.out.println("Radio is now OFF");
    }

    @Override
    public void volumeUp() {
        if (isOn) {
            volume = Math.min(volume + 1, 50);
            System.out.println("Radio volume increased to " + volume);
        } else {
            System.out.println("Turn on the Radio to increase volume");
        }
    }

    @Override
    public void volumeDown() {
        if (isOn) {
            volume = Math.max(volume - 1, 0);
            System.out.println("Radio volume decreased to " + volume);
        } else {
            System.out.println("Turn on the Radio to decrease volume");
        }
    }

    @Override
    public void mute() {
        if (isOn) {
            volume = 0;
            System.out.println("Radio is now muted");
        } else {
            System.out.println("Turn on the Radio to mute");
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