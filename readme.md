Projectile Motion Simulator
===========================

[![Build Status](https://travis-ci.org/jncraton/projectilesim.svg?branch=master)](https://travis-ci.org/jncraton/projectilesim)

![Projectile motion example](https://upload.wikimedia.org/wikipedia/commons/thumb/6/61/Ideal_projectile_motion_for_different_angles.svg/800px-Ideal_projectile_motion_for_different_angles.svg.png)

This project provides a basic simulator for projectile motion. It takes as input an initial x and y velocity and calculates the time in flight and total distance traveled. Here's an example:

```
> ./projectile 9.659 2.588
Traveled 5.0 meters in 0.52 seconds
```

This assumes an ideal model with no air resistance or other forces. While these values can be calculated directly, we will derive them via simulation for educational purposes.
