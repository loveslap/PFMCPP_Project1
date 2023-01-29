#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: cat
//  action the cat meows
cat.meow();
//  action 2: the cat sleeps
cat.sleep();
//  action 3: the cat eats
cat.eat();
//  2)
//  Noun:  door
//  action 1:  the door locks
door.lock();
//  action 2:  the door unlocks
door.unlock();
//  action 3:  the door says hello
door.greet();
//  3)
//  Noun: printer
//  action 1: the printer prints
printer.print();
//  actionn 2: the printer formfeeds 
printer.formfeed();
//  action 3: the printer goes into standby
printer.sleep();
//  4)
//  Noun:  flower
//  action 1: the flower grows
flower.grow();
//  action 2: the flower blooms
flower.bloom();
//  action 3: the flower wilts
flower.wilt();
//  5)
//  Noun: ceiling fan
//  action 1: the ceiling fan spins slowly
ceilingFan.spinSlow();
//  action 2: the ceiling fan spins quickly
ceilingFan.spinFast();
//  action 3: the ceiling fan's light turns on
ceilingFan.illuminate();
//  6)

//  Noun: vending machine
//  action 1: the vending machine displays a price
vendingMachine.showPrice();
//  action 2: the vending machine dispenses chips
vendingMachine.dispenseChips();
//  action 3: the vending machine makes change
vendingMachine.makeChange();
//  7)
//  Noun: arpegiator
//  action 1: the arp goes up
arpegiator.up()
//  action 2: the arp goes down
arpegiator.down();
//  action 3: the arp goes serpentine
apregiator.snake();

//  8)
//  Noun: missle
//  action 1:  the missle launches
missle.launch();
//  action 2: the missle targets
missle.target();
//  action 3: the missle explodes
missle.boom();

//  9) 
//  Noun:  answering machine
//  action 1: the answering machine records a message
answeringMachine.record();
//  action 2: the answering machine plays back the messages
answeringMachine.playBack();
//  action 3: the answering machine erases the messages
answeringMachhine.erase();

//  10)  
//  Noun: roomba
//  action 1: the roomba sweeps
roomba.sweep();
//  action 2: the roomba goes home
roomba.goHome();
//  action 3:  the roomba notifies the user the sweeping is completed
roomba.notify();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
