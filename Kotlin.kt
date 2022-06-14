//Test Code 1

// fun sum(a:Int,b:Int,operate:(Int,Int)->Int):Int{
//     return operate(a,b)
// }
fun main() {
//     var num = 30000000000000000
//     var str :String? = "hello"
//     println("${num::class.simpleName}\n$str")
//     val check = if(false){
//         10
//     } else {
//         20
//     }
//     println("$check")
//     var ch = "eeeee"
//     when(ch){
//         "hello"->{
//             println("milgau")
//         }
//         "eeee"->{
//             println("na milau")
//         }
//         else->{
//             println("bawadi ho rhi hagi")
//         }
//     }
//     var arr = arrayOf("a","b","c")
//     for(a in arr){
//         println(a)
//     }
//     var ls = listOf("a","b","c")
//     for(l in ls){
//         println(l)
//     }
//     ls.forEach{
//         println(it)
//     }
//     val output = sum(5,7,{a,b->
//         a+b
//     })
//     print(output)
//     
//     
//     
//     fun operation(a:Int,b:Int):Int = a+b
//     val test = operation(5,7)
//     print(test)
    val p1 = Person("Hello")
    print(p1.name)
}

// class Person(_name: String){
//     val name: String
//     init{
//         name = _name
//     }
// }
class Person(val name: String)




//Test Code 2

fun reverse(arr: ArrayList<Int>): ArrayList<Int>{
    val result = arrayListOf<Int>()
    for(i in arr.size-1 downTo 0){
        result.add(arr.get(i))
    }
    return result
}
fun main(){
    val arr = arrayListOf(1,2,3,4,5);
    for(i in arr){
        print("$i ")
    }
    println("\nReversing")
    val reversed = reverse(arr)
//    var i = 0; var j = arr.size - 1
//    while(i<j){
//        var k = arr[i]
//        arr[i] = arr[j]
//        arr[j] = k
//        i++;
//        j--;
//    }
    for(i in reversed){
        print("$i ")
    }
}




//Test Code 3

class Person(private val name: String, var age: Int) {
//    var name: String
//    var age: Int

    var birthYear = 2022 - this.age

    init{
        println("Object Created")
    }

    fun speak(){
        println("Hello! $name")
    }

    fun greet(name: String){
        println("Hello! $name")
    }

//    fun getYearOfBirth(): Int{
//        return 2022 - this.age
//    }
    fun getYearOfBirth() = 2022 - this.age
}

fun main() {
    val person = Person("Aditya", 20)
//    println(person.name)
//    println(person.birthYear)
    println(person.age)
    person.speak()
//    person.greet(person.name)
    println(person.getYearOfBirth())
//    person.name = "Aditya"
//    person.age = 20
//    println(person.name)
//    println(person.age)
}




//Test Code 4 (Inheritance)

package oo

open class Person(private val name: String, open protected var age: Int) {

    private var check: Int = 100
    init{
        println("Object Created")
    }

    fun speak(){
        println("Hello! $name")
    }

    fun greet(name: String){
        println("Hello! $name")
    }

    fun getCheck(): Int{
        return check
    }

    fun getYearOfBirth() = 2022 - this.age
}

class Employee(override var age: Int):Person("Default_Name",age){

}

fun main() {
    val employee = Employee(25)
    employee.speak()
    employee.greet("Sarah")
    println(employee.getCheck())
}




//Test Code 5 (Abstract Classes)

package oops

abstract class Person(private val name: String, open protected var age: Int) {

    abstract var check: Int

    abstract fun speak()

    fun getName(): String{
        return name
    }
}

class Employee(override var age: Int):Person("Default_Name",age){
    override var check: Int = age
    override fun speak() {
        println("Abstraction Implementation ${getName()} $age")
    }
}

fun main() {
    val employee = Employee(25)
    employee.speak()
}




//Test Code 6 (Interfaces)

package oops

interface Drivable{
    fun drive()
}

interface Buildable{
    var buildId: Int
    fun build()
    fun destroy()
}

class Person(val bid: Int): Drivable, Buildable{
    override var buildId: Int = bid
    override fun drive() {
        println("Drive")
    }

    override fun build() {
        println("Build")
    }

    override fun destroy() {
        println("Destroy")
    }
}

fun main() {
    val person: Drivable = Person(10)
    person.drive()
    val person1 = Person(20)
    person1.build()
    person1.drive()
    person1.destroy()
    println(person1.bid.compareTo(person1.buildId))
}




//Test Code 7 (Function Overriding)

package oops

abstract class Course(val topic: String, val price: Double){
    open fun learn(){
        println("Learning a $topic course. [$price]")
    }
}

interface Learnable{
    fun learn(){
        println("Interface learning")
    }
}

open class KotlinCourse(): Course("Kotlin",999.99), Learnable{
    override final fun learn(){     //Using final here will not let other child classes override this function
        super<Learnable>.learn()    //Using super<class or interface>.method_name() calls the overriden method of the parent class
        super<Course>.learn()
        println("Overriden Course!")
    }
}

fun main() {
    val course = KotlinCourse()
    course.learn()
}




//Test Code 8 (Data Classes)

package oops

class Book(val title: String, val year: Int, val price: Double) {
    override fun toString(): String {
        return "Book(title=$title, year=$year, price=$price)"
    }
}

data class DataBook(val title: String, val year: Int, val price: Double) {

}

fun main() {
    val book = Book(title = "a", price = 34.99, year = 2017)
    val book2 = Book(title = "a", price = 34.99, year = 2017)
    val dataBook = DataBook(title = "a", price = 34.99, year = 2017)
    val dataBook2 = DataBook(title = "a", price = 34.99, year = 2017)
    val dataBook3 = dataBook.copy(price = 31.99)

    println(book)
    println(book2)
    println(dataBook)
    println(dataBook2)
    println(dataBook3)

    println(book.equals(book2))
    println(dataBook.equals(dataBook2))

    val(title,year,price) = dataBook
    println(title+" "+year+" "+price)

    val set = hashSetOf(dataBook, dataBook2, dataBook3)
    val set2 = hashSetOf(book, book2)

    println(set)
    println(set2)
}

//Test Code 9 (Singlelton)

package oops

object oneObject {
    val name: String = "Uff"
    val age: Int = 104
    fun display(): Boolean {
        println(name + " " + age)
        return true
    }
}

fun main() {
    println(oneObject.display())
}

//Test Code 10 (Enum Class)

package oops

enum class Color {
    RED,BLUE,GREEN
}

package oops

class enumsTesting(val testColor: Color) {
    fun change(): Int{
        println("Check $testColor")
        return 0
    }
}

fun main() {
    val enumsTesting = enumsTesting(Color.GREEN)
    enumsTesting.change()
}




//Test Code 11 (Getters and Setters)

package oops

class GetterAndSetter {
    var age: Int = 0
        get() = field
        set(k) {
            if(k >= 18){
                field = k
            }
            else{
                println("Wrong age value $k")
            }
        }
}

fun main() {
    val getterAndSetter = GetterAndSetter()
    getterAndSetter.age = 19
    println(getterAndSetter.age)
    getterAndSetter.age = 17
    println(getterAndSetter.age)
}

//Test Code 12 (Generic Stack)

package oops

class Stack<A>(private vararg val items: A) { //vararg for any number of arguments
    private val elements = items.toMutableList()

    fun push(element: A){
        elements.add(element)
    }

    fun pop(): A? {
        if(elements.isNotEmpty()){
            return elements.removeAt(elements.size - 1)
        }
        else{
            println("Stack Empty")
        }
        return null
    }
}

fun <A> stackOf(vararg elements: A): Stack<A>{
    return Stack(*elements)
}

fun main() {
    val stack = Stack<Int>()
    stack.push(1)
    stack.push(2)
    stack.push(3)
    println(stack.pop())
    println(stack.pop())
    println(stack.pop())
    println(stack.pop())

    val stack2 = stackOf("Hello", "Hey", "Hi", 1)
    for(i in 1..5){
        println(stack2.pop())
    }

    val stack3 = stackOf<Int>()
    stack3.push(1)
    stack3.push(2)
    stack3.push(3)
    for(i in 1..3){
        println(stack3.pop())
    }
}

//Test Code 13 (Input And Hangman Game)

package io

fun main() {
    print("Enter the word to guess: ")
    val word = readLine()
    if(word == null){
        print("Invalid Input")
        return
    }
    for (i in 1..100){
        println()
    }
    val letters = word.lowercase().toCharArray().toHashSet()
    val correctGuesses = mutableSetOf<Char>()
    var fails = 0

    while(letters != correctGuesses){
        printExploredWord(word,correctGuesses)
        println("Wrong Guesses: $fails\n\n")
        print("Guess Letter: ")
        var input = readLine()
        if(input == null || input.length != 1){
            continue
        }
        if(word.lowercase().contains(input.lowercase())){
            correctGuesses.add(input[0].lowercaseChar())
        }
        else{
            fails++
        }
    }
    printExploredWord(word,correctGuesses)
    println("Won!!")
}

fun printExploredWord(char: String, correctGuesses: Set<Char>){
    for(c in char){
        if(correctGuesses.contains(c.lowercaseChar())){
            print(c + " ")
        }
        else{
            print("_ ")
        }
    }
}




//Test Code 14 (Maps)

package oops

fun main() {
    val namesToAges = mapOf(Pair("Peter", 24), Pair("Roger", 42))
    val namesToAges2 = mapOf(
        "Peter".to(24),
        "Roger" to 42
    )

    println(namesToAges == namesToAges2)
    
    println(namesToAges.keys)
    println(namesToAges.values)
    println(namesToAges.entries)

    val countryToInhabitants = mutableMapOf(
        "Germany" to 80000000,
        "USA" to 300_000_000
    )
    countryToInhabitants.put("Australia", 23_000_000)
    countryToInhabitants.putIfAbsent("Australia", 24_000_000)

    println(countryToInhabitants.entries)

    println(countryToInhabitants.contains("USA"))
    println(countryToInhabitants.containsValue(23000000))
    println(countryToInhabitants.get("Germany"))
    println(countryToInhabitants.getOrDefault("France",0))

    namesToAges.entries.forEach{
        println("${it.key} is ${it.value} years old.")
    }
}
