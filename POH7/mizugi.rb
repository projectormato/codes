result = (1..gets.to_i).inject(1 , :*).to_s.reverse.sub( /0*/ , "")[0..10].reverse
p result
result = result.to_s.reverse.sub( /0*/ , "")[0..8].reverse.to_i
p result