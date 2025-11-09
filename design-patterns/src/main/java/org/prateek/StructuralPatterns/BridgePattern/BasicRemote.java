package org.prateek.StructuralPatterns.BridgePattern;

public class BasicRemote extends Remote {

    public BasicRemote(Device device) {
        super(device);
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
        device.volumeUp();
    }

    @Override
    public void volumeDown() {
        device.volumeDown();
    }

    @Override
    public void mute() {
        device.mute();
    }
}