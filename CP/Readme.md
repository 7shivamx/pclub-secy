# Park and Fountain

## Problem Statement

You have been given the work of levelling grass of a `n*m` sized park infront of your house. You have to level the grass using a leveller of size `x*y`. It is allowed to roll the same portion of the grass again and again (i.e. overlapping is allowed). It is also allowed to use the leveller as `y*x` , when required while levelling the grass.

Now the main twist, there are some fountains inside the park, and you cannot use leveller over the fountains at any cost. The park is represented by a `n*m` grid, where **A** represents a `1*1` square portion of the grass and **B** represents a `1*1` square portion of the fountain.

Your task is to check whether the given park can be completely levelled (i.e. if all the **A** portions of the grass can be completely levelled) or not.

## Input
The first line of input consists of 4 positive integers `n`, `m`, `x`  and `y`. The next **n** line consists of **m** characters which are guaranteed to be either **A** or **B**. Here, **A** represents a portion of the grass and **B** represents a portion of fountain.



## Output
Print **YES** if the park can be levelled, otherwise print **NO**.

## Constraints

**1** <= **n** , **m** , **x** , **y** <= **50**

## Sample test cases

### Input

`4 4 2 1`

`AAAA`

`AABB`

`AAAB`

`AABB`


## Output

`YES`

## Input

`4 4 2 1`

`AAAA`

`AABB`

`AAAB`

`AABA`

## Output

`NO`
