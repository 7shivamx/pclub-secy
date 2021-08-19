## Small constraints, Brute Force!

Given, the dimensions of the park is `n*m` and the dimensions of the leveller is `x*y`. The time complexity of the brute solution would be `O(n*m*x*y)`, which would pass within the constraints.

Maintain a `2D` array check of dimensions `(n*m)`, where `check[i][j]` stores for every `(i,j)`, if `a[i][j]` can be levelled or not. We only have to level the "grass" portions, so we can mark the "fountain" portions as true, i.e. there is no requirement of any operation on that `(i,j)`.

Firstly, let us consider the orientation of the leveller as `x*y`. We will try and place the leveller on every `(i,j)` (whilst checking that the size doesn't exceed the limit). If it can be placed, then we would mark the entire area on which the leveller is currently placed as levelable (i.e. we would set all `check[i][j]` such that `(i,j)` lies within the leveller area as true). Similarly we would do the same for the orientation of the leveller as `y*x`.

After this, we would iterate through the check array, and check if all the values are true. If they are, that means the entire park (excluding the fountains) can be levelled, hence the output would be `YES`. If even one value is set to false, then this would indicate that a portion of the park was not levellable, and hence the output would be `NO`.


## What if large constraints - 

Dynamic programming!!! `order(n*m)`
