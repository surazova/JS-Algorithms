// A child is playing with a ball on the nth floor of a tall building.The height of this floor, is h.For example 3 meters

// He drops the ball out of the window. The ball bounces at a rate of br of it’s height for example a rate of two-thirds of its height would be a bounce rate of 0.66.

// His mother looks out of a window win meters from the ground. Example: 1.5 meters

// How many times will the mother see the ball pass in front of her window (including when it's falling and bouncing?

// Take note of the following conditions:

// ** Float parameter "h" in meters must be greater than 0**
// ** Float parameter “br" must be greater than 0 and less than 1**
// ** Float parameter “win" must be less than h.**
// If all three conditions above are fulfilled, return a positive integer of the number of times the mother sees the ball pass her window, otherwise return -1.

// Note: The ball can only be seen if the height of the rebounding ball is stricty greater than the win parameter. IE: rebounding h > win

// Example:

// h = 3, bounce = 0.66, window = 1.5, result is 3

// h = 3, bounce = 1, window = 1.5, result is -1 (Condition 2) not fulfilled).