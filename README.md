# ECC CALCULATOR FOR EXAM
> You will get the complete calculator for ecc on 
    <b>https://graui.de/code/elliptic2/</b>

 But the above code will use if you want stepwise calculation.
> 1. <b>ecc_calculator</b> is use for the finding all the points lies on the ecc.
> 2. <b>point_sum</b> is use for the find the sum of two point P+Q.
> 3. <b>findNalpha</b> is use for the value of k$\alpha$.
> 4. Find  public key if private key $n_B$ is given:
   $P_B = n_B*\alpha$ where $P_B$ is public key.
> 5. Find Encryption of $P_M$ for random number k is:
    $C_M$ = {${k\alpha}$, ${P_M + kP_B}$}.
    where $C_M$ is cipher text.
> 6. Decrypt cipher text(Recover $P_M$ from $C_M$): ${P_M = P_M + k*P_B - n_B(k\alpha) }$. Now consider after solving ${P_M + k*P_B}$ and ${n_B(k\alpha)}$ is {$x_1$,$y_1$} - {$x_2$,$y_2$} is equal to {$x_1$,$y_1$} + {$x_2$,$p - y_2$}.

Note: In Code you will get x_1 which is equal to $x_i$, and x__i is equal to $x^i$.

# Assignment:
> 1. Consider the elliptic curve $E_{11}$(1, 6); that is, the curve defined by $y^2 = x^3 + x + 6$ with
modulus of p = 11.

    (i) Find all points.

    (ii) If public key assuming private key is 2.

    (iii) Assume k = 3, find ciphertext. 

    (iv) Decrypt ciphertext.

> 2. Find the sum of three points on an elliptic curve that lie on straight line?.

>3. In the elliptic curve E(a,b) over the GF($2^n$). Show that slope of tangent at point $P(x_p , y_q )$ is equal to $(x_p + y_p/x_p )$. Also find the expression $P + Q$.

<script type="text/javascript" async

src="https://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-MML-AM_CHTML">