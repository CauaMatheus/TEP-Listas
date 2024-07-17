# First we need to analyze the problem:

There are 3 cases of our problem:

## Disjoint
![Disjoint](/geometria/03/assets/h_disjoint.png)

When the circles are disjoint, the intersection is 0.
**We can verify by `(distance >= r1 + r2)`**

## Inside
![Inside](/geometria/03/assets/h_inside.png)

When the circles are inside each other, the intersection is the area of the smaller circle.
**We can verify by `(distance <= abs(r1 - r2))`**

## Intersection
![Inside](/geometria/03/assets/h_intersection.png)

When the circles have a intersection, its harder to found the area. So we are gonna focus
more in that problem below.

# Analyzing Intersection Problem
## Finding angles
![angles](/geometria/03/assets/h_angles.png)

## Finding segments
![segment1](/geometria/03/assets/h_segment1.png)
![segment2](/geometria/03/assets/h_segment2.png)

# Response
![response](/geometria/03/assets/h_response.png)