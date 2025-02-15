package org.prateek.StructuralPatterns.CompositePattern.Solution;

import java.util.ArrayList;
import java.util.List;

public class Folder implements FileSystemComponent{
    private String name;
    private List<FileSystemComponent> components = new ArrayList<>();

    public Folder(String name){
        this.name = name;
    }

    public void addComponent(FileSystemComponent component){
        components.add(component);
    }

    public void showDetails(){
        System.out.println("Folder: " + name);
        for(FileSystemComponent component:components){
            component.showDetails();
        }
    }
}
