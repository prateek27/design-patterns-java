package org.prateek.StructuralPatterns.BridgePattern;

public class AdvancedRemote extends Remote {
    private boolean isMuted;

    public AdvancedRemote(Device device) {
        super(device);
        this.isMuted = false;
    }

    @Override
    public void powerOn() {
        device.powerOn();
    }

    @Override
    public void powerOff() {
        device.powerOff();
    }

    @Override
    public void volumeUp() {
        if (!isMuted) {
            device.volumeUp();
        } else {
            System.out.println("Device is muted. Unmute first");
        }
    }

    @Override
    public void volumeDown() {
        if (!isMuted) {
            device.volumeDown();
        } else {
            System.out.println("Device is muted. Unmute first");
        }
    }

    @Override
    public void mute() {
        if (!isMuted) {
            device.mute();
            isMuted = true;
        } else {
            System.out.println("Device is already muted");
        }
    }

    public void unmute() {
        if (isMuted) {
            System.out.println("Unmuting device...");
            isMuted = false;
            if (device.getVolume() == 0) {
                device.volumeUp();
            }
        } else {
            System.out.println("Device is not muted");
        }
    }

    public void displayStatus() {
        System.out.println("Device Status:");
        System.out.println("Device Type: " + device.getClass().getSimpleName());
        System.out.println("Powered On: " + device.isPoweredOn());
        System.out.println("Volume/Temperature: " + device.getVolume());
        System.out.println("Muted: " + isMuted);
    }
}