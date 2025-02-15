package org.prateek.StructuralPatterns.DecoratorPattern.Problem;

public class PizzaApp {
    public static void main(String[] args) {
        Pizza pizza = new CheeseOlivePizza();
        System.out.println(pizza.getDescription());
        System.out.println(pizza.getCost());
    }
}
