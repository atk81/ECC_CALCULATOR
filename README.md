# ECC CALCULATOR FOR EXAM
> You will get the complete calculator for ecc on 
    <b>https://graui.de/code/elliptic2/</b>

 But the above code will use if you want stepwise calculation.
1. <b>ecc_calculator</b> is use for the finding all the points lies on the ecc.
2. <b>point_sum</b> is use for the find the sum of two point P+Q.
3. <b>findNalpha</b> is use for the value of <!-- $k\alpha$ --> <img src="https://render.githubusercontent.com/render/math?math=k%5Calpha">.
 4. Find  public key if private key <!-- $n_B$ --> <img src="https://render.githubusercontent.com/render/math?math=n_B"> is given:<!-- $P_B = n_B*\alpha$ --> <img src="https://render.githubusercontent.com/render/math?math=P_B%20%3D%20n_B*%5Calpha"> where <!-- $P_B$ --> <img src="https://render.githubusercontent.com/render/math?math=P_B"> is public key.
 5. Find Encryption of <!-- $P_M$ --> <img src="https://render.githubusercontent.com/render/math?math=P_M"> for random number k is:
    <!-- $C_M$ --> <img src="https://render.githubusercontent.com/render/math?math=C_M"> = {<!-- ${k\alpha}$ --> <img src="https://render.githubusercontent.com/render/math?math=%7Bk%5Calpha%7D">, <!-- ${P_M + kP_B}$ --> <img src="https://render.githubusercontent.com/render/math?math=%7BP_M%20%2B%20kP_B%7D">}.
    where <!-- $C_M$ --> <img src="https://render.githubusercontent.com/render/math?math=C_M"> is cipher text.
 6. Decrypt cipher text(Recover <!-- $P_M$ --> <img src="https://render.githubusercontent.com/render/math?math=P_M"> from <!-- $C_M$ --> <img src="https://render.githubusercontent.com/render/math?math=C_M">): <!-- ${P_M = P_M + k*P_B - n_B(k\alpha) }$ --> <img src="https://render.githubusercontent.com/render/math?math=%7BP_M%20%3D%20P_M%20%2B%20k*P_B%20-%20n_B(k%5Calpha)%20%7D">. Now consider after solving <!-- ${P_M + k*P_B}$ --> <img src="https://render.githubusercontent.com/render/math?math=%7BP_M%20%2B%20k*P_B%7D"> and <!-- ${n_B(k\alpha)}$ --> <img src="https://render.githubusercontent.com/render/math?math=%7Bn_B(n%5Calpha)%7D"> is {<!-- $x_1$ --> <img src="https://render.githubusercontent.com/render/math?math=x_1">,<!-- $x_1$,$y_1$ --> <img src="https://render.githubusercontent.com/render/math?math=x_1%24%2C%24y_1">} - {<!-- $x_2$ --> <img src="https://render.githubusercontent.com/render/math?math=x_2">,<!-- $y_2$ --> <img src="https://render.githubusercontent.com/render/math?math=y_2">} is equal to {<!-- $x_1$ --> <img src="https://render.githubusercontent.com/render/math?math=x_1">,<!-- $y_1$ --> <img src="https://render.githubusercontent.com/render/math?math=y_1">} + {<!-- $x_2$ --> <img src="https://render.githubusercontent.com/render/math?math=x_2">,<!-- $p - y_2$ --> <img src="https://render.githubusercontent.com/render/math?math=p%20-%20y_2">}.

Note: In Code you will get x_1 which is equal to <!-- $x_i$ --> <img src="https://render.githubusercontent.com/render/math?math=x_i">, and x__i is equal to <!-- $x^i$ --> <img src="https://render.githubusercontent.com/render/math?math=x%5Ei">.

   <img src="https://render.githubusercontent.com/render/math?math=%5Calpha"> is generator(Some time also called G).

# Assignment:
 1. Consider the elliptic curve <!-- $E_{11}$ --> <img src="https://render.githubusercontent.com/render/math?math=E_%7B11%7D">(1, 6); that is, the curve defined by <!-- $y^2 = x^3 + x + 6$ --> <img src="https://render.githubusercontent.com/render/math?math=y%5E2%20%3D%20x%5E3%20%2B%20x%20%2B%206"> with
modulus of p = 11.

    (i) Find all points.

    (ii) If public key assuming private key is 2.

    (iii) Assume k = 3, find ciphertext. 

    (iv) Decrypt ciphertext.

 2. Find the sum of three points on an elliptic curve that lie on straight line?.

 3. In the elliptic curve E(a,b) over the GF(<!-- $2^n$ --> <img src="https://render.githubusercontent.com/render/math?math=2%5En">). Show that slope of tangent at point <!-- $P(x_p , y_q )$ --> <img src="https://render.githubusercontent.com/render/math?math=P(x_p%20%2C%20y_q%20)"> is equal to <!-- $(x_p + y_p/x_p )$ --> <img src="https://render.githubusercontent.com/render/math?math=(x_p%20%2B%20y_p%2Fx_p%20)">. Also find the expression <!-- $P + Q$ --> <img src="https://render.githubusercontent.com/render/math?math=P%20%2B%20Q">.
