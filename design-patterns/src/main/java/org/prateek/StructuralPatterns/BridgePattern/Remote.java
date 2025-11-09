package org.prateek.StructuralPatterns.BridgePattern;

public abstract class Remote {
    protected Device device;

    public Remote(Device device) {
        this.device = device;
    }

    public abstract void powerOn();
    public abstract void powerOff();
    public abstract void volumeUp();
    public abstract void volumeDown();
    public abstract void mute();

    public void setDevice(Device device) {
        this.device = device;
        System.out.println("Device changed to: " + device.getClass().getSimpleName());
    }

    public Device getDevice() {
        return device;
    }
}