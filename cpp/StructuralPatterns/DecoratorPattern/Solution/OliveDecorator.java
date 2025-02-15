package org.prateek.StructuralPatterns.DecoratorPattern.Solution;

public class OliveDecorator extends PizzaDecorator {
    public OliveDecorator(Pizza pizza){
        super(pizza);
    }

    public String getDescription(){
        return decoratedPizza.getDescription() + ", Olive";
    }
    public double getCost(){
        return decoratedPizza.getCost() + 0.50;
    }
}
