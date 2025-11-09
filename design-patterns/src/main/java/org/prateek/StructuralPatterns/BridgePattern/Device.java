package org.prateek.StructuralPatterns.BridgePattern;

public interface Device {
    void powerOn();
    void powerOff();
    void volumeUp();
    void volumeDown();
    void mute();
    boolean isPoweredOn();
    int getVolume();
}