,                     read char C
>+<[[-]>-<]>[<+>-]<   get not(C); true if and only if C was empty
[                     while not(C)
  >++++++++           (6)
  [->++++++<]         (x8 = 48)
  >.                  print (48 = '0' ASCII code)
  [-]<<               cleansing
  -                   reset not(C)
]                     loop (on an empty cell)

