enum unicode_names {
	POUND,
	EURO,
	
    TH_RUNE, DH_RUNE,
    W_RUNE,
    E_RUNE, EA_RUNE,
    R_RUNE,
    T_RUNE,
    Y_RUNE,
    U_RUNE, U_ALT_RUNE,
    I_RUNE, II_RUNE,
    O_RUNE, AU_RUNE,
    P_RUNE,
    
    A_RUNE, AA_RUNE,
    S_RUNE, S_EF_RUNE,
    D_RUNE,
    F_RUNE,
    G_RUNE, K_ALT_RUNE,
    H_RUNE, H_ALT_RUNE,
    J_RUNE, J_ALT_RUNE,
    K_RUNE, K_EF_RUNE,
    L_RUNE,
    
    Z_RUNE, ZH_RUNE,
    C_RUNE,
    F_ALT_RUNE,
    B_RUNE, B_ALT_RUNE,
    N_RUNE, NG_RUNE,
    M_RUNE,
    COLON_RUNE,
    DOT_RUNE,
    CROSS_RUNE
};

const uint32_t unicode_map[] PROGMEM = {
    [POUND] = 0x20a4, // £
    [EURO] = 0x20ac, // €
    
    [TH_RUNE] = 0x16a6, [DH_RUNE] = 0x16a7, // ᚦ, ᚧ
    [W_RUNE] = 0x16b9, // ᚹ
    [E_RUNE] = 0x16d6, [EA_RUNE] = 0x16e0, // ᛖ, ᛠ
    [R_RUNE] = 0x16b1, // ᚱ
    [T_RUNE] = 0x16cf, // ᛏ
    [Y_RUNE] = 0x16a3, // ᚣ
    [U_RUNE] = 0x16a2, [U_ALT_RUNE] = 0x16a3, // ᚢ, ᚣ
    [I_RUNE] = 0x16c1, [II_RUNE] = 0x16c7, // ᛁ, ᛇ
    [O_RUNE] = 0x16df, [AU_RUNE] = 0x16a9, // ᛟ, ᚩ
    [P_RUNE] = 0x16c8, // ᛈ
    
    [A_RUNE] = 0x16ab, [AA_RUNE] = 0x16aa, // ᚫ, ᚪ
    [S_RUNE] = 0x16cb, [S_EF_RUNE] = 0x16CA, // ᛋ, ᛊ
    [D_RUNE] = 0x16de, // ᛞ
    [F_RUNE] = 0x16a0, // ᚠ
    [G_RUNE] = 0x16b7, [K_ALT_RUNE] = 0x16b5, // ᚷ, ᚵ
    [H_RUNE] = 0x16ba, [H_ALT_RUNE] = 0x16bb, // ᚺ, ᚻ
    [J_RUNE] = 0x16e1, [J_ALT_RUNE] = 0x16c4, // ᛡ, ᛄ
    [K_RUNE] = 0x16b4, [K_EF_RUNE] = 0x16b2, // ᚴ, ᚲ
    [L_RUNE] = 0x16da, // ᛚ

    [Z_RUNE] = 0x16c9, [ZH_RUNE] = 0x16e3, // ᛉ, ᛣ
    [C_RUNE] = 0x16b3, // ᚳ
    [F_ALT_RUNE] = 0x16a1, // ᚡ
    [B_RUNE] = 0x16d2, [B_ALT_RUNE] = 0x16d4, // ᛒ, ᛔ
    [N_RUNE] = 0x16be, [NG_RUNE] = 0x16dd, // ᚾ, ᛝ
    [M_RUNE] = 0x16d7, // ᛗ
    [COLON_RUNE] = 0x16ec, // ᛬
    [DOT_RUNE] = 0x16eb, // ᛫
    [CROSS_RUNE] = 0x16ed // ᛭
};