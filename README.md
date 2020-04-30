# CASE

Learning about ASCII case conversion. Don't actually use this. Use your builtin libraries.

## Which bit signifies case in ASCII?

```
iex
Erlang/OTP 22 [erts-10.4.3] [source] [64-bit] [smp:12:12] [ds:12:12:10] [async-threads:1] [hipe]

Interactive Elixir (1.11.0-dev) - press Ctrl+C to exit (type h() ENTER for help)
iex(1)> as_binary = &IO.inspect(&1, base: :binary)
#Function<7.91303403/1 in :erl_eval.expr/5>
iex(2)> ?a..?z |> Enum.each(as_binary)
0b1100001
0b1100010
0b1100011
0b1100100
0b1100101
0b1100110
0b1100111
0b1101000
0b1101001
0b1101010
0b1101011
0b1101100
0b1101101
0b1101110
0b1101111
0b1110000
0b1110001
0b1110010
0b1110011
0b1110100
0b1110101
0b1110110
0b1110111
0b1111000
0b1111001
0b1111010
:ok
iex(3)> ?A..?Z |> Enum.each(as_binary)
0b1000001
0b1000010
0b1000011
0b1000100
0b1000101
0b1000110
0b1000111
0b1001000
0b1001001
0b1001010
0b1001011
0b1001100
0b1001101
0b1001110
0b1001111
0b1010000
0b1010001
0b1010010
0b1010011
0b1010100
0b1010101
0b1010110
0b1010111
0b1011000
0b1011001
0b1011010
:ok
iex(4)> 0b100000
32
iex(5)>
```
