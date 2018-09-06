        p -> q <=> q' -> p'

	p' v q <=> q'' v p' | Implication Law

	p' v q <=> q v p'   | Double Negation Law

	p' v q <=> p' v q   | Commutative Law

--------------------------------------------------------------------------

	(p -> r) ^ (q -> r) <=> (p v q) -> r

	(p' v r) ^ (q' v r) <=> (p v q)' v r        | Implication Law

	(p' v r) ^ (q' v r) <=> (p' ^ q') v r       | De morgan's Law

	(p' v r) ^ (q' v r) <=> (p' v r) ^ (q' v r) | Distributive Law

--------------------------------------------------------------------------

Prove that the following WFF is not valid: (Ǝx) A(x) ^ (Ǝx) B(x) -> (Ǝx) (A(x) ^ B(x))

	x = Road Vehichles
	A(x) = Road Vehichles that have 2 wheels
	B(x) = Road Vehicles that have 4 wheels

	If there are some vehicles that have 2 wheels and some that have 4 wheels,
	then there are some vehicles that have 2 wheels and have 4 wheels.
  WFF not valid.
