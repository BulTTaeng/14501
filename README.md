
# "14501"

made by Jaehyeok Choi

## Welcome to Jaehyeok's github!

## What is the problem?

*FAIL TO SOLVE ALONE*

![button](https://github.com/Choi-JaeHyeok-21500749/14501/blob/main/14501_pro.JPG)

## What Algorithm should I use?

dynamic programming

## What was the key point and the hard part?

Because time limit is 2 seconds, I though it can be solved with brute and force approach.

However, I failed to find the better solution, so I search for the internet.

The best solution's key is back-to-front approach. It means that fill the p array from day n.

To start with day 1 to n has lot of things to think. All cases (k=current calculating location,  1 day work + k day work, 2 day work + k day work,....... and find max)

But if I see from day n, there is no problem with the schedling because just comparing the (max value until current day) and (taking current day's work + max pay after taking current day's work) and find max.

If not taking the current day's work, then update the p[i] with p[i+1] will work. Only thing I have to check is that t[i] + i is bigger than the n.

To deal with that case, I make 17 length array(I'm going to start with the array index1) and fill the array with 0.
If t[i] + i is bigger than n, just keep the eqaution p[i] = p[i+1] so that p[n] is over the due(n) fill it with 0.

The reason why I'm doing this is keep the situation that day in the middle is over due(n), the p array will be 0 and that makes error.


## Where can I get more help, if I need it?

You can contact me through email, which is 21500749@handong.edu.
Thank you for visiting this github!

