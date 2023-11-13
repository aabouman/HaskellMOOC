module Gold where

-- The golden ratio
phi :: Double
phi = (sqrt 5 + 1) / 2

polynomial :: Double -> Double
polynomial x = x ^ 2 - x - 1

f1 x = polynomial (polynomial x)
f2 x = polynomial (polynomial (polynomial x))

main = do
    print (polynomial phi)
    print (f1 phi)
    print (f2 phi)
