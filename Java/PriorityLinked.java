/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package prioritylinked;

/**
 *
 * @author RASHMI
 */
public class PriorityLinked {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        PriorityQue x = new PriorityQue();
        x.Insert(2);
        x.Insert(1);
        x.Insert(8);
        x.Insert(4);
        x.Insert(3);
        x.removeFront();
        x.display();

    }

}

class Node {

    int data;
    Node next;
    Node previous;

    public Node(int data) {
        this.data = data;
        this.next = null;
        this.previous = null;

    }

    void displayNode() {
        System.out.println(this.data + " ");
    }

}

class PriorityQue {

    Node front, rear;

    public PriorityQue() {
        this.front = null;
        this.rear = null;
    }

    void Insert(int value) {
        Node node = new Node(value);
        if (front == null) {
            this.front = node;
            this.rear = node;

            return;
        }
        Node temp = front;
        Node parent = null;

        while (temp != null && temp.data <= value) {
            parent = temp;
            temp = temp.next;
        }

        if (parent == null) {

            node.next = front;
            front.previous = node;
            front = node;
        } else if (temp == null) {

            parent.next = node;
            node.previous = parent;
        } else {

            parent.next = node;
            node.previous = parent;
            node.next = temp;
            temp.previous = node;
        }

    }
    public Node removeFront() {
        Node temp = front;

        if (front != null) { // list might be empty
            if (front.next == null) {

                front = null;
            } else {
                front.next.previous = null;
                front = front.next;
            }
        }
        return temp;

    }

    public void display() {
        Node current = front;

        if (front == null) {
            System.out.println("List is empty cannot display");
            return;
        }

        while (current != null) {

            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println("");
    }

}
