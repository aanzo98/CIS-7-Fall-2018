Part 1: Let S = it is sunny, C = camping is fun, H = the homework is
done, and M = mathematics is easy.
Translate: (M → H)∧(S → C)
If mathematics is easy, then the homework is done and if it is sunny, then camping is fun.
Translate: “Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”
(S ^ H)→(M v C)


Part 2:
Use a truth table. Tautology, contradiction, or neither: (¬B → ¬A) → ((¬B → A) → B)
|**¬B**|**¬A**|**B**|**A**|**(¬B → ¬A)**|**((¬B → A) → B)**|**(¬B → ¬A) → ((¬B → A) → B)**|
|------|------|-----|-----|-------------|------------------|------------------------------|
|   F  |   F  |  T  |  T  |      F      |        T         |              T               |
|   T  |   F  |  F  |  T  |      F      |        F         |              F               |
|   F  |   T  |  T  |  F  |      T      |        T         |              T               |
|   T  |   T  |  F  |  F  |      T      |        F         |              F               |
|------|------|-----|-----|-------------|------------------|------------------------------|

Use a truth table.Tautology, contradiction, or neither: ((A → B)∧(B → ¬A)) → A
|**A**|**B**|**¬A**|**(A → B)**|**(B → ¬A)**|**(A → B)∧(B → ¬A)**|**((A → B)∧(B → ¬A)) → A**|
|-----|-----|------|-----------|------------|--------------------|--------------------------|
|  T  |  T  |   F  |     T     |     F      |         F          |            T             |
|  T  |  F  |   F  |     F     |     T      |         F          |            T             |
|  F  |  T  |   T  |     T     |     T      |         T          |            F             |
|  F  |  F  |   T  |     T     |     T      |         T          |            F             |
|-----|-----|------|-----------|------------|--------------------|--------------------------|


Part 3: For each of the following pairs of propositions, show that the
two propositions are logically equivalent by finding a chain of equivalences from one
to the other. State which definition or law of logic justifies each equivalence in the
chain.
(p ∧ q) → r , p → (q → r )
(p ^ q)' v r <=> p' v (q' v r)  | Implication Law x3
(p' v q') v r <=> p' v (q' v r) | De Morgan's Law
(p' v q') v r <=> (p' v q') v r | Associative Law

(q v r ) → p, (q → p)∧(r → p)
(q v r)'v p <=> (q' v p)^(r' v p) | Implication Law x3
(q v r)'v p <=> p v (q' ^ r')     | Distributive Law
(q v r)'v p <=> p v (q v r)'      | De Morgan's Law
(q v r)'v p <=> (q v r)'v p       | Commutative Law

Part 4: Let Loves(x,y) mean “x loves y,” Traveler(x) mean “x is a traveler,”
City(x) mean “x is a city,” Lives(x,y) mean “x lives in y.” “z is a resident”
Translate: ∃x∀y∀z(City(x)∧Traveler(y)∧Lives(z,x)) → (Loves(y,x)∧ ¬Loves(z,x))
In some city all travelers love that city and all residents do not love that city.

Translate: “No traveler loves the city they live in.”
∀x∀y(traveler(y)^city(x)^lives(y,x)) → (¬Loves(y,x))

Part 5 Extra Credit: 
Assuming: p → (q ∧r ), s → r , r → p
Prove: s → q
s   assume
r   Modus Ponen
p   
q ^ r 
q   
s → q from steps above.  

Assuming: ¬(r ∨ s), ¬p → s, p → q. 
Prove: q
r' ^ s' De Morgan's Law
p → s'  Double Negation Modus Ponen
p → q
q
