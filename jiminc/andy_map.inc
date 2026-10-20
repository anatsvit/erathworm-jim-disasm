; Карта туннеля Andy Asteroids ($8D00): 750 строк по 17 символов, строка = один сегмент туннеля.
; На строки ссылаются трассы jiminc/andy_tracks.inc: atr_seg N - строка N (номер в комментарии справа).
; Столбец = позиция по окружности туннеля, угол (столбец+8)*$400: столбец 0 = $2000, 8 = $4000 (старт Джима), G = $6000.
; Символы (andy_parse_map_row):
;   " "  пусто
;   'A'  астероид        (andy_spawn_asteroid, урон и торможение)
;   'O'  пузырь          (andy_spawn_bubble, bubble_count)
;   'T'  пузырь ускорения (andy_spawn_speed_bubble, рывок и неуязвимость)
;   'S'  супер-пузырь    (andy_spawn_super_bubble, щит super_bubble_count)
;   'P'  путь Psy-Crow   (andy_set_psycrow_path)
; Карта - не по трассам, а общий словарь уникальных строк для всех трасс: трасса - это список номеров
; строк (atr_seg N), одна строка может встречаться в разных трассах и много раз в одной.
; Строки идут в порядке первого появления: сначала строки трассы 1, потом новые строки трассы 2 и т.д.
; Справа - номер строки и трассы, которые её используют (F - andy_track_finale), x2 - сколько раз.
; Длина строки должна оставаться ровно 17 символов, иначе съедут все следующие строки.
andy_map:
; ---- строки, впервые использованные в andy_track_1 ----
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "                 "   ; 0    1x152 2x177 3x73 4x98 5x82 6x3 7x29 Fx19
                dc.b "    P            "   ; 1    1x14 2x16 3x20 4x17 5x9 6x12 7x14
                dc.b "       P         "   ; 2    1x13 2x14 3x17 4x16 5x11 6x14 7x18
                dc.b "         P       "   ; 3    1x25 2x15 3x20 4x15 5x12 6x8 7x23
                dc.b "            P    "   ; 4    1x12 2x15 3x13 4x12 5x6 6x10 7x14
                dc.b "          A    P "   ; 5    1 6
                dc.b "              P  "   ; 6    1x5 2x6 3x5 4x10 5x6 6x7 7x7
                dc.b "  O          P   "   ; 7    1
                dc.b " O               "   ; 8    1x2
                dc.b "O                "   ; 9    1x2 3 7x2
                dc.b "        P        "   ; 10   1x10 2x10 3x14 4x6 5x3 6x11 7x18
                dc.b "      P          "   ; 11   1x18 2x12 3x15 4x12 5x11 6x15 7x18
                dc.b "  P              "   ; 12   1x10 2x9 3x15 4x10 5x7 6x9 7x7
                dc.b " P               "   ; 13   1x6 2x8 3x8 4x3 5x6 6x15 7x9
                dc.b "P   A            "   ; 14   1 5
                dc.b "A  P       O     "   ; 15   1
                dc.b "     P           "   ; 16   1x9 2x15 3x22 4x10 5x12 6x19 7x14
                dc.b "        P  A     "   ; 17   1 6 7x3
                dc.b "   S             "   ; 18   1 3
                dc.b "       P       A "   ; 19   1 6
                dc.b "     P       A   "   ; 20   1 4 5x2 6
                dc.b "     P         A "   ; 21   1 3 4x2 5 6
                dc.b "  T     P        "   ; 22   1
                dc.b "     A           "   ; 23   1x6 2x4 4x2 5x5
                dc.b "           P     "   ; 24   1x13 2x13 3x15 4x8 5x10 6x7 7x15
                dc.b "   O         P   "   ; 25   1 2 3 6
                dc.b "          P      "   ; 26   1x15 2x9 3x12 4x8 5x8 6x9 7x18
                dc.b " A       P     A "   ; 27   1
                dc.b "A   P            "   ; 28   1 2 4x2 5x2 7
                dc.b "   P       O     "   ; 29   1 6
                dc.b "P            O   "   ; 30   1 2 3
                dc.b "  P           O  "   ; 31   1 7
                dc.b "        P      O "   ; 32   1 7
                dc.b " A              O"   ; 33   1 5
                dc.b "    S      A    P"   ; 34   1
                dc.b "                P"   ; 35   1x3 3x2 4 6x3 7x2
                dc.b "      O          "   ; 36   1x2 7x2
                dc.b "    O      A     "   ; 37   1
                dc.b "             P   "   ; 38   1x6 2x9 3x14 4x6 5x7 6x7 7x6
                dc.b "    O       P    "   ; 39   1 6 7
                dc.b "     O    A      "   ; 40   1
                dc.b "  A    O         "   ; 41   1
                dc.b "    A         P  "   ; 42   1 4
                dc.b "               P "   ; 43   1 2x8 3x6 4x7 5x2 6x4 7
                dc.b "        O       P"   ; 44   1
                dc.b "            A    "   ; 45   1x3 3 4x2 5x4 7
                dc.b "   P             "   ; 46   1x7 2x11 3x18 4x8 5x7 6x17 7x14
                dc.b "   P         T   "   ; 47   1
                dc.b "         A       "   ; 48   1x4 2x3 3 4x2 5x2 7
                dc.b "       P    A    "   ; 49   1 2 6x2 7x2
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "  O              "   ; 50   1x5 2 4 7
                dc.b "              A  "   ; 51   1 2 3x5 4x3 5x5
                dc.b "    O            "   ; 52   1x2 2x3 5x2 7
                dc.b "                A"   ; 53   1 3x5 4x3 5x6 7
                dc.b "    A            "   ; 54   1x2 2x2 3x2 4x5 5x7 7
                dc.b "      A          "   ; 55   1x2 2 4x4 5x5 6x2 7
                dc.b "   A      P      "   ; 56   1 3 6 7
                dc.b "   A       P     "   ; 57   1 3
                dc.b "    P       A    "   ; 58   1x2 2 3x2 4 5 7
                dc.b " P    O          "   ; 59   1 4
                dc.b "P                "   ; 60   1x5 2x4 3x5 4x4 5x5 6x5 7x4
                dc.b " P      O        "   ; 61   1 3 6x2
                dc.b "  P    O      A  "   ; 62   1
                dc.b "        A     P  "   ; 63   1 6
                dc.b "    O        P   "   ; 64   1 2 3 4 5
                dc.b "   O       A  P  "   ; 65   1
                dc.b "        A        "   ; 66   1x3 2 3x2 4x8 5x6
                dc.b "            A  P "   ; 67   1 6
                dc.b "      O      A   "   ; 68   1x2
                dc.b "          O      "   ; 69   1 2x2 4 5
                dc.b " A            P  "   ; 70   1 4 6
                dc.b "       A   P     "   ; 71   1 5
                dc.b "  T         P    "   ; 72   1
                dc.b "        P       A"   ; 73   1 2
                dc.b "      P      A   "   ; 74   1 7
                dc.b "    P     A      "   ; 75   1 2 3 4 6
                dc.b "    P           A"   ; 76   1 3x2
                dc.b "    P    S       "   ; 77   1
                dc.b "   A       A A   "   ; 78   1
                dc.b "           A     "   ; 79   1x2 3x2 4x4 5x4 7x2
                dc.b "    A   P        "   ; 80   1 2 4 5x2
                dc.b " O      A    P   "   ; 81   1
                dc.b "A   O  A         "   ; 82   1
                dc.b "   A             "   ; 83   1x3 2x4 3 5x4
                dc.b "    P  S         "   ; 84   1
                dc.b " P       A       "   ; 85   1 7
                dc.b "              O  "   ; 86   1 2x5 3 4 5
                dc.b "            O    "   ; 87   1 2x2 3x2
                dc.b "      P      O   "   ; 88   1 2 6
                dc.b "       P   O   A "   ; 89   1
                dc.b "   O             "   ; 90   1x2 2x2 3 7
                dc.b "    A      P     "   ; 91   1 6 7
                dc.b "     A      P    "   ; 92   1 3 4x3 6 7x2
                dc.b "  P      A       "   ; 93   1 3 7
                dc.b "        P      A "   ; 94   1x2
                dc.b "         T       "   ; 95   1 6
                dc.b "         P  A    "   ; 96   1 3 5x2 6
                dc.b "   O       P     "   ; 97   1x2 3 7
                dc.b "              S  "   ; 98   1
                dc.b "   T      P      "   ; 99   1
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b " T               "   ; 100  1 5 6
                dc.b "             A   "   ; 101  1x3 3 4x3 5x4
                dc.b "  A              "   ; 102  1x2 2x6 3x2 4x2 5x4
                dc.b "    A  P         "   ; 103  1 2 6x2
                dc.b "             S   "   ; 104  1 2
                dc.b "               A "   ; 105  1x2 2x2 3 5x3
                dc.b "     P    O      "   ; 106  1x2 2 3x3 4 5x2
                dc.b "           O     "   ; 107  1x3 2x4 5
                dc.b "P       A        "   ; 108  1 3
                dc.b "P          O     "   ; 109  1 3
                dc.b "P      A    O    "   ; 110  1
                dc.b "             O   "   ; 111  1 2 4 5
                dc.b "   P           O "   ; 112  1
                dc.b "       A        O"   ; 113  1
                dc.b "      P      A  A"   ; 114  1
                dc.b "  P    A         "   ; 115  1 7
                dc.b "   A    P        "   ; 116  1 2 4x2 5x2 6 7x2
                dc.b "A     P          "   ; 117  1 4 6 7
                dc.b "      P       A  "   ; 118  1 2 3 6 7x2
                dc.b "S                "   ; 119  1
                dc.b "         P     A "   ; 120  1 4 5 6x2 7
                dc.b "     P      A    "   ; 121  1 3 6x2
                dc.b "P   A           A"   ; 122  1
                dc.b "         O       "   ; 123  1 2x2 3 4x2
                dc.b "   A     P   O   "   ; 124  1
                dc.b "   O      P      "   ; 125  1 6
                dc.b "           P A   "   ; 126  1 7
                dc.b "   O      A P    "   ; 127  1
                dc.b "         A   P   "   ; 128  1 5 6x2 7
                dc.b " O       A    P  "   ; 129  1
                dc.b "     A       P   "   ; 130  1 3 4x3
                dc.b "       A         "   ; 131  1 2x3 3 4x4 5x8
                dc.b "     A   P       "   ; 132  1 6
                dc.b "       A  P      "   ; 133  1 5 7x2
                dc.b "     O    P      "   ; 134  1 3 6x2
                dc.b "   A     P       "   ; 135  1 3 4 5 6
                dc.b " A               "   ; 136  1 2x3 3x3 4x3 5x4 7
                dc.b "    A    P       "   ; 137  1 4 6
                dc.b "     A  P        "   ; 138  1 3 4x2 5x3 7
                dc.b "    P        A   "   ; 139  1 3x2 6 7
; ---- строки, не используемые ни одной трассой ----
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "        A A A A A"   ; 140  -
                dc.b "A A A A A      P "   ; 141  -
; ---- строки, впервые использованные в andy_track_2 ----
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "        P    O   "   ; 142  2
                dc.b " O             S "   ; 143  2
                dc.b "            P A  "   ; 144  2x2 7
                dc.b "P         O      "   ; 145  2
                dc.b " S               "   ; 146  2
                dc.b "       P      A  "   ; 147  2x2
                dc.b "    A       P    "   ; 148  2 3x3 4 5 6 7x4
                dc.b "            A   A"   ; 149  2x2 4 5x2
                dc.b "         P    A  "   ; 150  2x2 3x2 4 5 6 7
                dc.b "A                "   ; 151  2x2 3x2 4x3 5x7 7
                dc.b "    P      O     "   ; 152  2 3
                dc.b "    P    A       "   ; 153  2 5 6 7x3
                dc.b "    P         A  "   ; 154  2 6
                dc.b "  P        O     "   ; 155  2 5
                dc.b "P       O        "   ; 156  2 6
                dc.b " P     O         "   ; 157  2 6
                dc.b "    P   O        "   ; 158  2 4 5
                dc.b "   P    O        "   ; 159  2 4 5
                dc.b " T T         T   "   ; 160  2
                dc.b "        O        "   ; 161  2x3 3 5x2
                dc.b "      P     O    "   ; 162  2 4 5 7
                dc.b "          P   O  "   ; 163  2
                dc.b "        A    P   "   ; 164  2 3x2 4 5x2
                dc.b " A           P   "   ; 165  2 3 4 5
                dc.b "          A      "   ; 166  2x2 3x2 4x6 5x10
                dc.b "       P        A"   ; 167  2 5
                dc.b "  P         A    "   ; 168  2 4 5
                dc.b "   P         A   "   ; 169  2x2 3x3 4 5 6x2
                dc.b " O      P        "   ; 170  2 4
                dc.b "   O            P"   ; 171  2 6
                dc.b "        P       O"   ; 172  2
                dc.b "       P       O "   ; 173  2
                dc.b "P          A     "   ; 174  2 6 7
                dc.b "         A   P A "   ; 175  2
                dc.b "O          A     "   ; 176  2
                dc.b "       A P       "   ; 177  2
                dc.b "         A  A    "   ; 178  2
                dc.b "   P    A        "   ; 179  2 3 4 5x2 7x3
                dc.b "  T              "   ; 180  2 5 6
                dc.b "           P   A "   ; 181  2 4 5 6
                dc.b "   A        P    "   ; 182  2 3 7
                dc.b "             O P "   ; 183  2
                dc.b "        AP     O "   ; 184  2
                dc.b "  P   O          "   ; 185  2
                dc.b "P  O             "   ; 186  2
                dc.b "O     P          "   ; 187  2
                dc.b "P        O       "   ; 188  2 3 5 7
                dc.b "               O "   ; 189  2 4x2 5x2
                dc.b "    P        O   "   ; 190  2 4
                dc.b "     P   O       "   ; 191  2 5
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "           P  A  "   ; 192  2 3 4 5x2
                dc.b "                O"   ; 193  2 4 5
                dc.b "   A P           "   ; 194  2 3 4 5 7
                dc.b "        A  O     "   ; 195  2
                dc.b "   P         O   "   ; 196  2 3 5 6x2
                dc.b "      P        O "   ; 197  2 5
                dc.b " O    P          "   ; 198  2 4
; ---- строки, впервые использованные в andy_track_3 ----
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "   P          O  "   ; 199  3x2
                dc.b "  A   P          "   ; 200  3x2 4x2 6
                dc.b "A       P        "   ; 201  3 4 6 7
                dc.b "  O         P    "   ; 202  3 6
                dc.b "          P    T "   ; 203  3 4
                dc.b "  P            A "   ; 204  3
                dc.b "  P     O        "   ; 205  3x3 4 5
                dc.b "          A   O  "   ; 206  3
                dc.b " P       A     O "   ; 207  3
                dc.b "      O      P   "   ; 208  3 4 5
                dc.b " O   P           "   ; 209  3 7
                dc.b "  P       O      "   ; 210  3x2 4x2 5
                dc.b "      P         A"   ; 211  3 6 7
                dc.b "       P    O    "   ; 212  3x2 7
                dc.b "         P   O   "   ; 213  3
                dc.b "  A        P     "   ; 214  3x2 4x2 5
                dc.b "     A    P      "   ; 215  3 5 6
                dc.b "  P          A   "   ; 216  3 4
                dc.b "        P     A  "   ; 217  3 6 7
                dc.b " A       P       "   ; 218  3 7
                dc.b "          A     O"   ; 219  3
                dc.b "    T      A   A "   ; 220  3
                dc.b "A           P    "   ; 221  3
                dc.b "  A       P      "   ; 222  3 6x2 7
                dc.b "O         P   A  "   ; 223  3
                dc.b "A         P      "   ; 224  3x2 4 6x2
                dc.b "       P      S  "   ; 225  3
                dc.b " A        P      "   ; 226  3 4 5
                dc.b "     P  O        "   ; 227  3
                dc.b "  A     P        "   ; 228  3x2 4 5x3 7x2
                dc.b "             T   "   ; 229  3
                dc.b "    P     A A    "   ; 230  3
                dc.b "         P    O  "   ; 231  3x2 4 5
                dc.b "      A       P  "   ; 232  3 4 5
                dc.b "  P       A      "   ; 233  3 4 5x2 6 7x2
                dc.b "    P      A     "   ; 234  3 4 5 6 7x2
                dc.b "   P      O      "   ; 235  3 4
                dc.b "      P     A    "   ; 236  3 4 5 7
                dc.b " O     P         "   ; 237  3
                dc.b "  A           P  "   ; 238  3
                dc.b "       P        O"   ; 239  3 7
                dc.b "  P     T        "   ; 240  3
                dc.b "S    P       A   "   ; 241  3
                dc.b "   P     O      A"   ; 242  3
                dc.b " A P     O       "   ; 243  3
                dc.b "   P        A    "   ; 244  3 7x2
                dc.b "    P    O       "   ; 245  3 5 6x2
                dc.b "     P     A     "   ; 246  3 4 5 6 7x3
                dc.b "      P   A      "   ; 247  3 4
                dc.b " A    P       O  "   ; 248  3
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "O   P            "   ; 249  3
                dc.b "     P  A        "   ; 250  3
                dc.b "      P       O  "   ; 251  3 6
                dc.b "   O          P  "   ; 252  3 7
                dc.b "       A      P  "   ; 253  3
                dc.b " O    A          "   ; 254  3 7
                dc.b "O       P      A "   ; 255  3
                dc.b " A         P     "   ; 256  3
                dc.b "          A     P"   ; 257  3 7
                dc.b "    A          P "   ; 258  3 6x2 7
                dc.b "        A   P    "   ; 259  3 4 6x3 7
                dc.b "   O    P        "   ; 260  3
                dc.b "  O        P     "   ; 261  3
                dc.b "       A     P   "   ; 262  3 4x2 5 7
                dc.b "        A      P "   ; 263  3 7
                dc.b "            O   P"   ; 264  3
                dc.b "       A   S     "   ; 265  3
                dc.b " P        O      "   ; 266  3 6x2
                dc.b "  P         S    "   ; 267  3
                dc.b "P     O   A      "   ; 268  3
                dc.b " P         A  A  "   ; 269  3
                dc.b "O      P         "   ; 270  3
                dc.b "    A   P     A  "   ; 271  3
                dc.b "     P        A A"   ; 272  3 4
                dc.b "A    P           "   ; 273  3 5
                dc.b "  A  P           "   ; 274  3 6x2
                dc.b "   P           A "   ; 275  3 7
                dc.b "   P  A          "   ; 276  3 7
                dc.b "       P   A     "   ; 277  3 6
                dc.b "A  P     A       "   ; 278  3
                dc.b "A     A          "   ; 279  3
                dc.b "             P  A"   ; 280  3
                dc.b "      A    P     "   ; 281  3x2 5 6x2
                dc.b "         P      A"   ; 282  3 6
                dc.b " A    P          "   ; 283  3 4 5 7
                dc.b "A      P   A   A "   ; 284  3
                dc.b " O       P       "   ; 285  3
                dc.b "    P   A        "   ; 286  3 5 6x3 7
                dc.b "          P   A  "   ; 287  3 6x2
                dc.b "        O      A "   ; 288  3
                dc.b "    A       P   A"   ; 289  3
                dc.b "     A     P     "   ; 290  3 4 5 6 7
                dc.b "      A  A       "   ; 291  3
; ---- строки, впервые использованные в andy_track_4 ----
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "  A         P    "   ; 292  4 5
                dc.b "A A   P          "   ; 293  4
                dc.b "A A  O         P "   ; 294  4
                dc.b "  A    O        P"   ; 295  4
                dc.b "     P   A       "   ; 296  4 6x4
                dc.b "P        A A     "   ; 297  4
                dc.b "     P  A      O "   ; 298  4
                dc.b "  A    P    A    "   ; 299  4
                dc.b "P      S   A     "   ; 300  4
                dc.b "   A   O       P "   ; 301  4
                dc.b "       O A   P   "   ; 302  4
                dc.b "           A  P A"   ; 303  4
                dc.b "     O       P   "   ; 304  4
                dc.b "    T            "   ; 305  4
                dc.b " P         O     "   ; 306  4
                dc.b "             O  A"   ; 307  4
                dc.b "           A   A "   ; 308  4 5x2
                dc.b "P        A       "   ; 309  4
                dc.b "        O      P "   ; 310  4
                dc.b "         T P     "   ; 311  4
                dc.b "      O     P    "   ; 312  4
                dc.b "  A             P"   ; 313  4
                dc.b "A  A O A       P "   ; 314  4
                dc.b "    O   P        "   ; 315  4 7
                dc.b "      P     A   A"   ; 316  4
                dc.b "O      P  A  A A "   ; 317  4
                dc.b "A   A A   P      "   ; 318  4 5
                dc.b "          A   A A"   ; 319  4 5
                dc.b " P       T       "   ; 320  4
                dc.b "   O        P    "   ; 321  4 7
                dc.b "  O       P      "   ; 322  4
                dc.b " P         A   A "   ; 323  4
                dc.b "    P    A   A   "   ; 324  4 5
                dc.b "  O  A        P  "   ; 325  4
                dc.b "A       A    P   "   ; 326  4
                dc.b "   O  A    P     "   ; 327  4
                dc.b "A    A A  P      "   ; 328  4
                dc.b "          A   O A"   ; 329  4
                dc.b "      P    A     "   ; 330  4x2 6x2
                dc.b "A  A   A  P      "   ; 331  4 5
                dc.b "       P A  A O A"   ; 332  4
                dc.b "        P A      "   ; 333  4 7
                dc.b "  A A  A         "   ; 334  4
                dc.b "       A A       "   ; 335  4
                dc.b " T T             "   ; 336  4
                dc.b "   P  O          "   ; 337  4
                dc.b "  A        O     "   ; 338  4
                dc.b "          A A   O"   ; 339  4
                dc.b " A          P    "   ; 340  4x2 7
                dc.b "   S         P   "   ; 341  4
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "   P            A"   ; 342  4x2 7x2
                dc.b " P          A    "   ; 343  4
                dc.b " P      O     A  "   ; 344  4
                dc.b " A     A       A "   ; 345  4
                dc.b "    A   P  A     "   ; 346  4
                dc.b "  A      A       "   ; 347  4 5
                dc.b "   AP            "   ; 348  4
                dc.b "    A      A     "   ; 349  4
                dc.b "A   P       A    "   ; 350  4
                dc.b "       T      A  "   ; 351  4
                dc.b "   P        A   A"   ; 352  4 5
                dc.b "          A   A  "   ; 353  4 7
                dc.b "   P     A       "   ; 354  4 5 6x2 7x2
                dc.b "      P A        "   ; 355  4 5
                dc.b "   A    A        "   ; 356  4x2
                dc.b "  A    A P       "   ; 357  4 5
                dc.b "   A   P         "   ; 358  4 5 6x3 7
                dc.b "      A   A      "   ; 359  4 5
                dc.b "A   A            "   ; 360  4 5x3
                dc.b "       A   A     "   ; 361  4 5
                dc.b "     A   A       "   ; 362  4 5
                dc.b "     T           "   ; 363  4
                dc.b "   A        A    "   ; 364  4
                dc.b " A            A  "   ; 365  4
                dc.b "    A        A   "   ; 366  4 5
                dc.b "      A   A A    "   ; 367  4
                dc.b "    O  A         "   ; 368  4
                dc.b " A             P "   ; 369  4 6
                dc.b "        A   O S  "   ; 370  4
                dc.b " P    A          "   ; 371  4 6 7
                dc.b "       A O A     "   ; 372  4
                dc.b "        A   A    "   ; 373  4
                dc.b " A         O     "   ; 374  4
                dc.b "   A A           "   ; 375  4
                dc.b "   P     O   A   "   ; 376  4
                dc.b "A    P    O      "   ; 377  4
                dc.b "     P       O   "   ; 378  4
                dc.b "P      A     A   "   ; 379  4 6
                dc.b " P  A        A   "   ; 380  4
                dc.b "              A O"   ; 381  4
                dc.b "       P   O     "   ; 382  4
                dc.b "A        A       "   ; 383  4 6
                dc.b "      P  O       "   ; 384  4
                dc.b "   O           A "   ; 385  4
                dc.b " O    A    P     "   ; 386  4
                dc.b "O    A  P        "   ; 387  4
                dc.b " P         A     "   ; 388  4 6x2
                dc.b "P          A  A  "   ; 389  4
                dc.b "     A       A   "   ; 390  4
                dc.b " P             A "   ; 391  4
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "      A       A  "   ; 392  4
; ---- строки, впервые использованные в andy_track_5 ----
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "P              A "   ; 393  5
                dc.b "A   A   P        "   ; 394  5 6
                dc.b "            T  T "   ; 395  5
                dc.b "      S  P       "   ; 396  5
                dc.b " A   A      P    "   ; 397  5
                dc.b "           A    A"   ; 398  5x2
                dc.b "          A O A  "   ; 399  5
                dc.b " P             O "   ; 400  5
                dc.b "     P         O "   ; 401  5
                dc.b "        O    P   "   ; 402  5
                dc.b " P  O            "   ; 403  5
                dc.b "    P         A A"   ; 404  5
                dc.b "   O  P          "   ; 405  5
                dc.b "    S    T    O  "   ; 406  5
                dc.b "A  A   A         "   ; 407  5
                dc.b "          A  A   "   ; 408  5
                dc.b "         P A     "   ; 409  5
                dc.b "  T A  A     P   "   ; 410  5
                dc.b "         P   A   "   ; 411  5 6x2
                dc.b "   A  A    P     "   ; 412  5
                dc.b "    P    A  A A  "   ; 413  5
                dc.b "A    A    P      "   ; 414  5
                dc.b "          A     A"   ; 415  5
                dc.b "      P    A  A  "   ; 416  5
                dc.b "       P A  A   A"   ; 417  5
                dc.b "        P A   A  "   ; 418  5
                dc.b "  A A            "   ; 419  5
                dc.b "        P   O    "   ; 420  5
                dc.b "   P     O       "   ; 421  5 6 7
                dc.b "     O           "   ; 422  5x2 7
                dc.b "       O         "   ; 423  5x2
                dc.b "   P            O"   ; 424  5
                dc.b "  A     O        "   ; 425  5
                dc.b "          A A    "   ; 426  5
                dc.b "           P    O"   ; 427  5
                dc.b " P            A  "   ; 428  5
                dc.b "   P        T    "   ; 429  5
                dc.b "       P A       "   ; 430  5
                dc.b "      A      S   "   ; 431  5
                dc.b "    P  A         "   ; 432  5 6x3 7
                dc.b "   P    A       A"   ; 433  5
                dc.b "         A     A "   ; 434  5
                dc.b " P        A   A  "   ; 435  5
                dc.b " P     A    A    "   ; 436  5
                dc.b "    P A          "   ; 437  5
                dc.b "  A   A  P       "   ; 438  5
                dc.b " A   A    P      "   ; 439  5
                dc.b "       A   A    P"   ; 440  5
                dc.b "     A   A     P "   ; 441  5
                dc.b "   A     P  A    "   ; 442  5
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b " A         P  A  "   ; 443  5 7
                dc.b "    A        A  P"   ; 444  5
                dc.b "      A   A A  P "   ; 445  5
                dc.b "      O  A       "   ; 446  5
                dc.b "            P  O "   ; 447  5
                dc.b "       A    P    "   ; 448  5x2
                dc.b "              P O"   ; 449  5
                dc.b "        A    P  O"   ; 450  5
                dc.b "           P   O "   ; 451  5 7
                dc.b "        A  P     "   ; 452  5
                dc.b "       A P    O  "   ; 453  5 7
                dc.b "   T       A     "   ; 454  5
                dc.b "  P   O O        "   ; 455  5
                dc.b " P      A        "   ; 456  5 6
                dc.b "P  A             "   ; 457  5x2
                dc.b " P A A   O       "   ; 458  5
                dc.b "O   P         A  "   ; 459  5
                dc.b "P       O A      "   ; 460  5
                dc.b "    A     A      "   ; 461  5
                dc.b "              A A"   ; 462  5
                dc.b "A      P         "   ; 463  5 7
                dc.b "    P          O "   ; 464  5
                dc.b "  P       T      "   ; 465  5
                dc.b "    O P          "   ; 466  5
                dc.b "       P     A   "   ; 467  5 6x2
                dc.b "     P     O     "   ; 468  5 6
                dc.b " A      A        "   ; 469  5
                dc.b "      P   O      "   ; 470  5
                dc.b "  A    P         "   ; 471  5 6 7x2
                dc.b "  O       P   A  "   ; 472  5
                dc.b "      A  A    A  "   ; 473  5
; ---- строки, впервые использованные в andy_track_6 ----
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "  A  P     A     "   ; 474  6
                dc.b " A   P   O   A   "   ; 475  6
                dc.b "A  P   A O A     "   ; 476  6
                dc.b "  P     A        "   ; 477  6x2 7
                dc.b "  P   A    O     "   ; 478  6
                dc.b " A A     P       "   ; 479  6
                dc.b " S  A           P"   ; 480  6
                dc.b "        A       P"   ; 481  6 7x2
                dc.b "       A        P"   ; 482  6
                dc.b "     O          P"   ; 483  6
                dc.b "A               P"   ; 484  6 7
                dc.b "  A  O  A     P  "   ; 485  6
                dc.b "   A         P   "   ; 486  6x2 7
                dc.b "    A     P      "   ; 487  6x3 7
                dc.b "   P   A    A    "   ; 488  6
                dc.b "    P          A "   ; 489  6 7
                dc.b "     P      T    "   ; 490  6
                dc.b " A     P    A    "   ; 491  6
                dc.b "  A    P       A "   ; 492  6x2
                dc.b "   A   P  A     A"   ; 493  6
                dc.b "        P    A   "   ; 494  6x3
                dc.b "     A  P  A     "   ; 495  6
                dc.b "       P   S  A  "   ; 496  6
                dc.b "   A  P          "   ; 497  6x2
                dc.b "      P  AA  A   "   ; 498  6
                dc.b "      P  A       "   ; 499  6
                dc.b "O            P   "   ; 500  6
                dc.b "     A   A    P  "   ; 501  6
                dc.b " O             P "   ; 502  6
                dc.b "       A       P "   ; 503  6 7
                dc.b "  O   A     P    "   ; 504  6
                dc.b "       P    A   A"   ; 505  6
                dc.b "P     A          "   ; 506  6
                dc.b " P     A         "   ; 507  6
                dc.b " P   A           "   ; 508  6x2
                dc.b " P        O    A "   ; 509  6
                dc.b "     P   A O  A  "   ; 510  6
                dc.b " A     P    O   A"   ; 511  6
                dc.b "A    P        A  "   ; 512  6
                dc.b "    P       O    "   ; 513  6
                dc.b "  A  P    A      "   ; 514  6
                dc.b "A A     P        "   ; 515  6
                dc.b "      A   P      "   ; 516  6x4
                dc.b "          P     A"   ; 517  6x3 7x2
                dc.b "      P    A AA  "   ; 518  6
                dc.b " A P  A          "   ; 519  6
                dc.b "      P       AA "   ; 520  6
                dc.b " O      P    A   "   ; 521  6
                dc.b "     A        P  "   ; 522  6 7
                dc.b "   A O    P      "   ; 523  6
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "       P    A A  "   ; 524  6
                dc.b " P          O    "   ; 525  6
                dc.b "A  P   A         "   ; 526  6
                dc.b "    P         O  "   ; 527  6 7
                dc.b "A   P         A  "   ; 528  6
                dc.b " P   A   A       "   ; 529  6x2
                dc.b "P      A         "   ; 530  6x3
                dc.b " P   AA          "   ; 531  6
                dc.b " P  A            "   ; 532  6x2 7
                dc.b "    A O          "   ; 533  6
                dc.b "  P           A  "   ; 534  6
                dc.b "A  P             "   ; 535  6x2 7x2
                dc.b "   P        A  A "   ; 536  6
                dc.b "   P      A     A"   ; 537  6
                dc.b "     P    A      "   ; 538  6
                dc.b "A      A    P    "   ; 539  6
                dc.b "     O    A   P  "   ; 540  6
                dc.b "A         A   P  "   ; 541  6
                dc.b "A    O      A   P"   ; 542  6
                dc.b "  A   O      A  P"   ; 543  6
                dc.b "    O  A       P "   ; 544  6
                dc.b "        AA    P  "   ; 545  6
                dc.b "          A   P  "   ; 546  6
                dc.b "  O            P "   ; 547  6
                dc.b "    O      P  A  "   ; 548  6
                dc.b "    A  P  A      "   ; 549  6
                dc.b "     A  P      A "   ; 550  6
                dc.b "    O     P      "   ; 551  6
                dc.b "   A  A  P       "   ; 552  6
                dc.b "   O   P        A"   ; 553  6
                dc.b "A S   A   P      "   ; 554  6
                dc.b "            P  A "   ; 555  6
                dc.b "      A  P       "   ; 556  6
                dc.b "     A   P  A O  "   ; 557  6
                dc.b "     P      O    "   ; 558  6x2
                dc.b "A     P         A"   ; 559  6
                dc.b "   A   P  O    A "   ; 560  6
                dc.b "    A  P    A    "   ; 561  6
                dc.b "       P  O      "   ; 562  6
                dc.b "     A P  A      "   ; 563  6
                dc.b "    A   P      A "   ; 564  6
                dc.b "   A O  A     P  "   ; 565  6
                dc.b "     A         P "   ; 566  6x2
                dc.b "            P   A"   ; 567  6
                dc.b " A   O    P     A"   ; 568  6
                dc.b "       P     A A "   ; 569  6
                dc.b "P           O    "   ; 570  6 7
                dc.b "P    A           "   ; 571  6 7
                dc.b " P              A"   ; 572  6
                dc.b " P          O   A"   ; 573  6
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b " P  A          A "   ; 574  6
                dc.b " P  A         A  "   ; 575  6
                dc.b "  P        A     "   ; 576  6
                dc.b " A  P            "   ; 577  6
                dc.b "A  A  P   A   O  "   ; 578  6
                dc.b " A    P    A     "   ; 579  6
                dc.b "        P    A O "   ; 580  6
                dc.b "        P   A    "   ; 581  6 7
                dc.b "     A A     P   "   ; 582  6x2
                dc.b "   A   A   P     "   ; 583  6
                dc.b "    A   P   A    "   ; 584  6
                dc.b "     P       A  A"   ; 585  6
                dc.b "     P        A  "   ; 586  6x2
                dc.b "  O  P           "   ; 587  6
                dc.b "   P   A  A      "   ; 588  6
                dc.b "  P     A    A   "   ; 589  6
                dc.b "P         A      "   ; 590  6 7
                dc.b "  P   A    A     "   ; 591  6
                dc.b "A A A   P        "   ; 592  6
                dc.b "  S  A   P       "   ; 593  6
                dc.b "       A     T   "   ; 594  6
                dc.b "       T         "   ; 595  6
                dc.b "    A    P     A "   ; 596  6
                dc.b "    A    P    A  "   ; 597  6
                dc.b "     A   P   A   "   ; 598  6
                dc.b "      A  P  A    "   ; 599  6 7
                dc.b "     AA P  A     "   ; 600  6
                dc.b "     O   P       "   ; 601  6
                dc.b "   A  O    P     "   ; 602  6
                dc.b "   AA   P   A    "   ; 603  6
                dc.b "      O       P  "   ; 604  6
                dc.b "     A          P"   ; 605  6
                dc.b "      A A       P"   ; 606  6
                dc.b "     O   A    P  "   ; 607  6
                dc.b " P       A A     "   ; 608  6
                dc.b "  A O A   P      "   ; 609  6
                dc.b "   A    P   A    "   ; 610  6
                dc.b "  P    A A       "   ; 611  6
                dc.b "P     A     O    "   ; 612  6
                dc.b "    P    O   A   "   ; 613  6
                dc.b "      P        AA"   ; 614  6
                dc.b "       P   A   A "   ; 615  6
                dc.b "   O     P       "   ; 616  6
                dc.b "   AA         P  "   ; 617  6
                dc.b "   O           P "   ; 618  6
                dc.b "A        P       "   ; 619  6
                dc.b "   P       A     "   ; 620  6
                dc.b "P            A   "   ; 621  6
                dc.b "P      A O       "   ; 622  6
                dc.b " P  A  A         "   ; 623  6
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "    P      A  A  "   ; 624  6
                dc.b "  A    A  P      "   ; 625  6
                dc.b "    A A    P     "   ; 626  6
                dc.b "  P   A        AA"   ; 627  6
                dc.b " P          A A  "   ; 628  6
                dc.b "A   A  P         "   ; 629  6
                dc.b " A     P   A     "   ; 630  6
                dc.b "   A  P  A       "   ; 631  6
                dc.b "  A  P  A        "   ; 632  6
                dc.b "    O   A   P    "   ; 633  6
                dc.b "A            P  A"   ; 634  6
                dc.b "  A       A   P A"   ; 635  6
                dc.b "   O      A   P  "   ; 636  6
                dc.b "    A   A    P   "   ; 637  6
                dc.b "      A     P    "   ; 638  6
; ---- строки, впервые использованные в andy_track_7 ----
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b " A    P        A "   ; 639  7
                dc.b "  A   P       A  "   ; 640  7
                dc.b "      P A   A    "   ; 641  7
                dc.b "      A P A      "   ; 642  7
                dc.b "  A     O  P     "   ; 643  7
                dc.b "         A  P    "   ; 644  7
                dc.b "A          P   O "   ; 645  7
                dc.b "           T     "   ; 646  7
                dc.b "           P    A"   ; 647  7
                dc.b "        A  P A   "   ; 648  7
                dc.b "       O  A P    "   ; 649  7
                dc.b "        A       A"   ; 650  7
                dc.b "   A  A     P    "   ; 651  7
                dc.b "A       AA       "   ; 652  7
                dc.b "A        P   A   "   ; 653  7
                dc.b "  A   A   P      "   ; 654  7
                dc.b "             A  S"   ; 655  7
                dc.b "A           A    "   ; 656  7
                dc.b " O        A P    "   ; 657  7
                dc.b "O           P    "   ; 658  7
                dc.b "          A P    "   ; 659  7
                dc.b "           P  A A"   ; 660  7
                dc.b "     P   A   O   "   ; 661  7
                dc.b " A   P           "   ; 662  7
                dc.b "  A P   A        "   ; 663  7
                dc.b "    P A    O     "   ; 664  7
                dc.b "  A P            "   ; 665  7
                dc.b "   P  A   O      "   ; 666  7
                dc.b "   P   A         "   ; 667  7x2
                dc.b "   P      A      "   ; 668  7x2
                dc.b "   P A           "   ; 669  7x3
                dc.b "O  P             "   ; 670  7
                dc.b " O P             "   ; 671  7
                dc.b "AA P             "   ; 672  7
                dc.b "   P AA          "   ; 673  7
                dc.b "   A P  A      A "   ; 674  7
                dc.b "       P  A      "   ; 675  7
                dc.b "  A      P      A"   ; 676  7
                dc.b "A        P  A    "   ; 677  7
                dc.b "    O A   P      "   ; 678  7
                dc.b "    P   O  A     "   ; 679  7
                dc.b "   T      A   A  "   ; 680  7
                dc.b "    A A   P      "   ; 681  7
                dc.b "   A     P     O "   ; 682  7
                dc.b "A O        P     "   ; 683  7
                dc.b "      A  P    A  "   ; 684  7
                dc.b " P        A A A  "   ; 685  7
                dc.b "P           A    "   ; 686  7x2
                dc.b "A     A   P    A "   ; 687  7
                dc.b "    A        P   "   ; 688  7
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b "  A  O         P "   ; 689  7
                dc.b " A     A         "   ; 690  7
                dc.b "        A P A    "   ; 691  7
                dc.b "         P  O    "   ; 692  7
                dc.b " A   P  A        "   ; 693  7
                dc.b "           A  P  "   ; 694  7x2
                dc.b "S               P"   ; 695  7
                dc.b "   A      A  A  P"   ; 696  7
                dc.b " A              T"   ; 697  7
                dc.b "    A           P"   ; 698  7
                dc.b "         A     P "   ; 699  7
                dc.b " A        A   P  "   ; 700  7
                dc.b "             AP  "   ; 701  7
                dc.b "O          P     "   ; 702  7
                dc.b "A A A  A     P   "   ; 703  7
                dc.b "    P   A A A A  "   ; 704  7
                dc.b "O A       P      "   ; 705  7
                dc.b " O A P           "   ; 706  7
                dc.b " A  P  A         "   ; 707  7
                dc.b "  A   P         A"   ; 708  7
                dc.b "A      A A      P"   ; 709  7
                dc.b "A     A      P   "   ; 710  7
                dc.b "      A         P"   ; 711  7
                dc.b "         A      P"   ; 712  7
                dc.b "  A       P A    "   ; 713  7
                dc.b "A    A  P       A"   ; 714  7
                dc.b "A P        A     "   ; 715  7
                dc.b " A P             "   ; 716  7
                dc.b "   A P   A       "   ; 717  7
                dc.b "  O      P       "   ; 718  7
                dc.b "   O     P      A"   ; 719  7
                dc.b "      P       A A"   ; 720  7
                dc.b "     P        O  "   ; 721  7
                dc.b "    P   A      A "   ; 722  7
                dc.b "    P    A    A  "   ; 723  7
                dc.b "A     P    A     "   ; 724  7
                dc.b "  P    A      O  "   ; 725  7
                dc.b "  P      O       "   ; 726  7
                dc.b "P             A  "   ; 727  7
                dc.b "P    A     O     "   ; 728  7
                dc.b "P             A A"   ; 729  7
                dc.b "P        A      A"   ; 730  7
                dc.b "A      A        P"   ; 731  7
                dc.b "    O           P"   ; 732  7
                dc.b "    P        A AA"   ; 733  7
                dc.b " O         P     "   ; 734  7
                dc.b " A              P"   ; 735  7
                dc.b "  A  O    A     P"   ; 736  7
                dc.b "   A           P "   ; 737  7
                dc.b "          A  P   "   ; 738  7
                ;    "0123456789ABCDEFG"   столбец (G = 16)
                dc.b " P           A   "   ; 739  7
                dc.b "  P   A          "   ; 740  7
                dc.b "   A      T    A "   ; 741  7
                dc.b "     A  P     A  "   ; 742  7
                dc.b "  A      P       "   ; 743  7
                dc.b "O      A         "   ; 744  7
                dc.b "O       P    A   "   ; 745  7
                dc.b " A   P   A       "   ; 746  7
                dc.b "  A  P          A"   ; 747  7
                dc.b " A        A    P "   ; 748  7
                dc.b "       AA      P "   ; 749  7
