package org.prateek.StructuralPatterns.BridgePattern;

public class Client {
    public static void main(String[] args) {
        Device tv = new TV();
        Device radio = new Radio();
        Device ac = new AC();

        Remote basicRemoteTV = new BasicRemote(tv);
        System.out.println("Basic Remote controlling TV");
        basicRemoteTV.powerOn();
        basicRemoteTV.volumeUp();
        basicRemoteTV.volumeUp();
        basicRemoteTV.mute();
        basicRemoteTV.powerOff();
        System.out.println();

        Remote basicRemoteRadio = new BasicRemote(radio);
        System.out.println("Basic Remote controlling Radio");
        basicRemoteRadio.powerOn();
        basicRemoteRadio.volumeUp();
        basicRemoteRadio.volumeDown();
        basicRemoteRadio.powerOff();
        System.out.println();

        AdvancedRemote advancedRemoteTV = new AdvancedRemote(tv);
        System.out.println("Advanced Remote controlling TV");
        advancedRemoteTV.powerOn();
        advancedRemoteTV.volumeUp();
        advancedRemoteTV.volumeUp();
        advancedRemoteTV.mute();
        advancedRemoteTV.displayStatus();
        advancedRemoteTV.unmute();
        advancedRemoteTV.powerOff();
        System.out.println();

        AdvancedRemote advancedRemoteAC = new AdvancedRemote(ac);
        System.out.println("Advanced Remote controlling AC");
        advancedRemoteAC.powerOn();
        advancedRemoteAC.volumeUp();
        advancedRemoteAC.volumeUp();
        advancedRemoteAC.displayStatus();
        advancedRemoteAC.volumeDown();
        advancedRemoteAC.powerOff();
        System.out.println();

        System.out.println("Runtime Flexibility: Switching Device");
        Device freshTV = new TV();
        Device freshRadio = new Radio();
        Device freshAC = new AC();
        
        Remote remote = new BasicRemote(freshTV);
        remote.powerOn();
        remote.volumeUp();
        
        remote.setDevice(freshRadio);
        remote.powerOn();
        remote.volumeUp();
        
        remote.setDevice(freshAC);
        remote.powerOn();
        remote.volumeUp();
        System.out.println();
    }
}