### First, analyze the problem:
![radius](/geometria/03/assets/j.png)

Note that we already have the values of the chord (`L`) and the arc (`L'`) of this circle. These values are given in the problem statement.

We can see that to calculate the height, we need the radius (`r`) and the angle ($\alpha$) of the sector of this circle.

### How can we find both variables to calculate `h`?

Although we have two variables, one can be found based on the other using the formula $L' = \alpha * r$

Therefore, we can fix one of these variables and perform a binary search on the other.

I tried performing a binary search on the angle and received TLE (Time Limit Exceeded). But when I performed a binary search on the radius, I received ACC (Accepted).

The comparison to know that we found the correct radius and angle will be the chord (`L`)

### Response.

Now that we have both variables, just calculate h by the formula $h = r*(1 - cos(\alpha/2))$