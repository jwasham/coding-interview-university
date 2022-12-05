package org.example;

import java.util.Random;

public class Main {
    public static void main(String[] args) {

        var random = new Random();
        var array = new int[10];
        for (var i = 0; i < array.length; i++) {
            array[i] = random.nextInt(1, 100);
        }

        printArray(array);
        quickSort(array, 0, array.length - 1);
        printArray(array);
    }

    private static void quickSort(int[] array, int lowIndex, int highIndex) {
        if(lowIndex >= highIndex){
            return;
        }

        var pivot = array[highIndex];
        int leftPointer = partition(array, lowIndex, highIndex, pivot);
        quickSort(array, lowIndex, leftPointer - 1);
        quickSort(array, leftPointer + 1, highIndex);

    }

    private static int partition(int[] array, int lowIndex, int highIndex, int pivot) {
        var leftPointer = lowIndex;
        var rightPointer = highIndex;
        while (leftPointer < rightPointer) {

            while (array[leftPointer] <= pivot && leftPointer < rightPointer) {
                leftPointer++;
            }
            while (array[rightPointer] >= pivot && leftPointer < rightPointer) {
                rightPointer--;
            }
            swap(array, leftPointer, rightPointer);
        }
        swap(array, leftPointer, highIndex);
        return leftPointer;
    }

    private static void swap(int[] array, int itemFromLeftIndex, int itemFromRightIndex) {
        var tmp = array[itemFromLeftIndex];
        array[itemFromLeftIndex] = array[itemFromRightIndex];
        array[itemFromRightIndex] = tmp;
    }

    private static void printArray(int[] array) {
        var result = "";
        for (var el :
                array) {
            result = result + " " + el;
        }
        System.out.println(result);
    }
}