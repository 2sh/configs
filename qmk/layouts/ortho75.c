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

const key_override_t shift_p8_up_override = ko_make_basic(MOD_MASK_SHIFT, KC_P8, KC_UP);
const key_override_t shift_p2_dowm_override = ko_make_basic(MOD_MASK_SHIFT, KC_P2, KC_DOWN);
const key_override_t shift_p4_left_override = ko_make_basic(MOD_MASK_SHIFT, KC_P4, KC_LEFT);
const key_override_t shift_p6_right_override = ko_make_basic(MOD_MASK_SHIFT, KC_P6, KC_RIGHT);

const key_override_t shift_p7_home_override = ko_make_basic(MOD_MASK_SHIFT, KC_P7, KC_HOME);
const key_override_t shift_p1_end_override = ko_make_basic(MOD_MASK_SHIFT, KC_P1, KC_END);
const key_override_t shift_p9_pageup_override = ko_make_basic(MOD_MASK_SHIFT, KC_P9, KC_PGUP);
const key_override_t shift_p3_pagedown_override = ko_make_basic(MOD_MASK_SHIFT, KC_P3, KC_PGDN);

const key_override_t shift_p0_ins_override = ko_make_basic(MOD_MASK_SHIFT, KC_P0, KC_INS);
const key_override_t shift_pdot_del_override = ko_make_basic(MOD_MASK_SHIFT, KC_PDOT, KC_DEL);


const key_override_t shift_f1_f13_override = ko_make_basic(MOD_MASK_SHIFT, KC_F1, KC_F13);
const key_override_t shift_f2_f14_override = ko_make_basic(MOD_MASK_SHIFT, KC_F2, KC_F14);
const key_override_t shift_f3_f15_override = ko_make_basic(MOD_MASK_SHIFT, KC_F3, KC_F15);
const key_override_t shift_f4_f16_override = ko_make_basic(MOD_MASK_SHIFT, KC_F4, KC_F16);

const key_override_t shift_f5_f17_override = ko_make_basic(MOD_MASK_SHIFT, KC_F5, KC_F17);
const key_override_t shift_f6_f18_override = ko_make_basic(MOD_MASK_SHIFT, KC_F6, KC_F18);
const key_override_t shift_f7_f19_override = ko_make_basic(MOD_MASK_SHIFT, KC_F7, KC_F19);
const key_override_t shift_f8_f20_override = ko_make_basic(MOD_MASK_SHIFT, KC_F8, KC_F20);

const key_override_t shift_f9_f21_override = ko_make_basic(MOD_MASK_SHIFT, KC_F9, KC_F21);
const key_override_t shift_f10_f22_override = ko_make_basic(MOD_MASK_SHIFT, KC_F10, KC_F22);
const key_override_t shift_f11_f23_override = ko_make_basic(MOD_MASK_SHIFT, KC_F11, KC_F23);
const key_override_t shift_f12_f24_override = ko_make_basic(MOD_MASK_SHIFT, KC_F12, KC_F24);

const key_override_t **key_overrides = (const key_override_t *[]){
    &shift_p8_up_override,
    &shift_p2_dowm_override,
    &shift_p4_left_override,
    &shift_p6_right_override,
    
    &shift_p7_home_override,
    &shift_p1_end_override,
    &shift_p9_pageup_override,
    &shift_p3_pagedown_override,
    
    &shift_p0_ins_override,
    &shift_pdot_del_override,
    
    
    &shift_f1_f13_override,
    &shift_f2_f14_override,
    &shift_f3_f15_override,
    &shift_f4_f16_override,
    
    &shift_f5_f17_override,
    &shift_f6_f18_override,
    &shift_f7_f19_override,
    &shift_f8_f20_override,
    
    &shift_f9_f21_override,
    &shift_f10_f22_override,
    &shift_f11_f23_override,
    &shift_f12_f24_override,
    NULL
};

