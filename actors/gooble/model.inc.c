Lights1 gooble_Gooble_Eyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 gooble_RedGoo_lights = gdSPDefLights1(
	0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 gooble_Slop_lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 gooble_Gooble_Hair_lights = gdSPDefLights1(
	0x7F, 0x38, 0x38,
	0xFF, 0x77, 0x77, 0x28, 0x28, 0x28);

Gfx gooble_goobleeye_ia8_aligner[] = {gsSPEndDisplayList()};
u8 gooble_goobleeye_ia8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf1, 0xf6, 0xfa, 0xfd, 0xff, 
	0xff, 0xfd, 0xfa, 0xf6, 0xf1, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf7, 0xfe, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfe, 0xf7, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf1, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xf1, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf1, 
	0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
	0xf1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xff, 0xff, 0xff, 0xff, 0xef, 0x8f, 0x3f, 0x0f, 
	0x0f, 0x3f, 0x8f, 0xef, 0xff, 0xff, 0xff, 0xff, 
	0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 
	0xff, 0xff, 0xff, 0xcf, 0x3f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x3f, 0xcf, 0xff, 0xff, 0xff, 
	0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0xff, 0xff, 
	0xff, 0xff, 0xcf, 0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x1f, 0xcf, 0xff, 0xff, 
	0xff, 0xff, 0xf2, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf9, 0xff, 0xff, 
	0xff, 0xff, 0x3f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x3f, 0xff, 0xff, 
	0xff, 0xff, 0xf9, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xf1, 0xff, 0xff, 0xff, 
	0xff, 0x7f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x7f, 0xff, 
	0xff, 0xff, 0xff, 0xf1, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xf6, 0xff, 0xff, 0xff, 
	0xff, 0x2f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x2f, 0xff, 
	0xff, 0xff, 0xff, 0xf6, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xf9, 0xff, 0xff, 0xff, 
	0xaf, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0xaf, 
	0xff, 0xff, 0xff, 0xf9, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xfb, 0xff, 0xff, 0xff, 
	0x7f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x7f, 
	0xff, 0xff, 0xff, 0xfb, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0x4f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x4f, 
	0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0x4f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x4f, 
	0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xfb, 0xff, 0xff, 0xff, 
	0x7f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x7f, 
	0xff, 0xff, 0xff, 0xfb, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xf9, 0xff, 0xff, 0xff, 
	0xaf, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0xaf, 
	0xff, 0xff, 0xff, 0xf9, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xf6, 0xff, 0xff, 0xff, 
	0xff, 0x2f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x2f, 0xff, 
	0xff, 0xff, 0xff, 0xf6, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xf1, 0xff, 0xff, 0xff, 
	0xff, 0x7f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x7f, 0xff, 
	0xff, 0xff, 0xff, 0xf1, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf9, 0xff, 0xff, 
	0xff, 0xff, 0x3f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x3f, 0xff, 0xff, 
	0xff, 0xff, 0xf9, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0xff, 0xff, 
	0xff, 0xff, 0xcf, 0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x1f, 0xcf, 0xff, 0xff, 
	0xff, 0xff, 0xf2, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 
	0xff, 0xff, 0xff, 0xcf, 0x3f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x3f, 0xcf, 0xff, 0xff, 0xff, 
	0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xff, 0xff, 0xff, 0xff, 0xef, 0x8f, 0x3f, 0x0f, 
	0x0f, 0x3f, 0x8f, 0xef, 0xff, 0xff, 0xff, 0xff, 
	0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf1, 
	0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
	0xf1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf1, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xf1, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf7, 0xfe, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfe, 0xf7, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf1, 0xf6, 0xfa, 0xfd, 0xff, 
	0xff, 0xfd, 0xfa, 0xf6, 0xf1, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx gooble_goo_ia8_aligner[] = {gsSPEndDisplayList()};
u8 gooble_goo_ia8[] = {
	0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 
	0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 
	0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 
	0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 
	0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 
	0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 
	0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 
	0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 
	0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 
	0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 
	0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 
	0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 
	0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 
	0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 
	0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 
	0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 
	0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 
	0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 
	0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 
	0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 
	0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 
	0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 
	0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 
	0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 
	0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 
	
};

Gfx gooble_slop_ci8_aligner[] = {gsSPEndDisplayList()};
u8 gooble_slop_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 
	0x00, 0x00, 0x00, 0x08, 0x09, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x0a, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0b, 0x0c, 
	0x02, 0x0d, 0x0e, 0x06, 0x05, 0x0f, 0x05, 0x05, 
	0x05, 0x05, 0x10, 0x0a, 0x11, 0x10, 0x12, 0x08, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x04, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x0f, 0x0f, 0x05, 0x05, 
	0x0f, 0x0f, 0x0a, 0x14, 0x0a, 0x0c, 0x15, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x05, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0e, 0x16, 0x12, 0x07, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x02, 0x10, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x05, 0x17, 0x05, 0x05, 0x05, 
	0x05, 0x0a, 0x01, 0x01, 0x0d, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x0b, 0x0a, 0x0b, 0x18, 0x17, 0x05, 0x0f, 0x0f, 
	0x05, 0x11, 0x19, 0x19, 0x09, 0x02, 0x14, 0x15, 
	0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0a, 
	0x0f, 0x05, 0x05, 0x05, 0x05, 0x04, 0x06, 0x09, 
	0x0e, 0x12, 0x06, 0x1a, 0x14, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0d, 0x0e, 0x18, 0x04, 0x05, 
	0x05, 0x17, 0x09, 0x14, 0x0d, 0x07, 0x08, 0x00, 
	0x16, 0x12, 0x1b, 0x18, 0x15, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
	0x00, 0x14, 0x0a, 0x11, 0x05, 0x05, 0x0f, 0x05, 
	0x17, 0x1a, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x15, 0x1c, 0x0e, 0x02, 0x08, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x1d, 
	0x0a, 0x05, 0x05, 0x0f, 0x05, 0x05, 0x17, 0x0a, 
	0x1b, 0x1e, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x16, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x05, 
	0x05, 0x05, 0x05, 0x17, 0x1f, 0x0c, 0x02, 0x08, 
	0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x17, 0x05, 
	0x05, 0x1b, 0x14, 0x0d, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x19, 0x05, 
	0x11, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x16, 0x16, 0x01, 0x08, 0x16, 
	0x0d, 0x02, 0x02, 0x0d, 0x16, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x19, 0x0f, 
	0x17, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x13, 0x1e, 0x1a, 0x1a, 0x10, 0x17, 
	0x17, 0x17, 0x04, 0x17, 0x10, 0x14, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x13, 0x1b, 0x05, 0x0f, 
	0x11, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x02, 0x12, 0x10, 0x05, 0x17, 0x06, 0x1e, 
	0x1c, 0x02, 0x07, 0x16, 0x16, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x16, 0x12, 0x06, 0x05, 0x0f, 0x05, 
	0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x21, 0x0b, 0x06, 0x17, 0x05, 0x0a, 0x0d, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
	0x16, 0x14, 0x18, 0x05, 0x0f, 0x0f, 0x05, 0x0a, 
	0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 
	0x06, 0x10, 0x10, 0x19, 0x05, 0x0c, 0x08, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0d, 0x0e, 
	0x1e, 0x10, 0x05, 0x05, 0x0f, 0x0f, 0x17, 0x14, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x0c, 
	0x04, 0x11, 0x22, 0x05, 0x19, 0x0e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x02, 0x0c, 0x06, 0x17, 
	0x19, 0x05, 0x0f, 0x0f, 0x0f, 0x05, 0x06, 0x15, 
	0x00, 0x00, 0x00, 0x01, 0x16, 0x15, 0x12, 0x06, 
	0x05, 0x11, 0x17, 0x05, 0x06, 0x0d, 0x00, 0x00, 
	0x00, 0x01, 0x21, 0x0c, 0x18, 0x17, 0x05, 0x05, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x05, 0x06, 0x0d, 
	0x00, 0x00, 0x0d, 0x02, 0x21, 0x09, 0x06, 0x19, 
	0x10, 0x05, 0x10, 0x0b, 0x0e, 0x01, 0x00, 0x00, 
	0x07, 0x20, 0x0c, 0x14, 0x14, 0x1b, 0x05, 0x0f, 
	0x0f, 0x0f, 0x05, 0x05, 0x05, 0x05, 0x1a, 0x0d, 
	0x00, 0x08, 0x0c, 0x1f, 0x06, 0x19, 0x05, 0x05, 
	0x02, 0x09, 0x0e, 0x07, 0x01, 0x00, 0x01, 0x02, 
	0x0c, 0x20, 0x13, 0x02, 0x1e, 0x10, 0x05, 0x0f, 
	0x05, 0x17, 0x22, 0x10, 0x19, 0x11, 0x0b, 0x16, 
	0x00, 0x0d, 0x10, 0x05, 0x05, 0x19, 0x0c, 0x12, 
	0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x15, 0x1e, 
	0x18, 0x12, 0x12, 0x11, 0x05, 0x05, 0x0f, 0x05, 
	0x18, 0x20, 0x14, 0x15, 0x0e, 0x09, 0x15, 0x00, 
	0x00, 0x12, 0x05, 0x0f, 0x17, 0x0e, 0x00, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x1a, 
	0x10, 0x10, 0x10, 0x05, 0x0f, 0x0f, 0x04, 0x0e, 
	0x08, 0x16, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x02, 0x10, 0x05, 0x05, 0x18, 0x07, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x1b, 0x1a, 
	0x10, 0x05, 0x05, 0x05, 0x05, 0x1a, 0x15, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 
	0x10, 0x05, 0x05, 0x17, 0x14, 0x08, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x1b, 0x0c, 
	0x0e, 0x0c, 0x10, 0x1a, 0x0c, 0x08, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x12, 0x17, 
	0x05, 0x0f, 0x05, 0x03, 0x08, 0x08, 0x16, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0c, 0x0e, 
	0x01, 0x08, 0x0d, 0x16, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x17, 0x05, 
	0x0f, 0x05, 0x1b, 0x16, 0x08, 0x0d, 0x16, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0d, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x19, 0x0f, 
	0x05, 0x1f, 0x07, 0x16, 0x14, 0x08, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x07, 0x09, 0x05, 0x05, 
	0x0a, 0x0d, 0x23, 0x12, 0x23, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x16, 0x0e, 0x0b, 0x17, 0x05, 0x1e, 
	0x07, 0x08, 0x0e, 0x0d, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x02, 
	0x12, 0x0c, 0x0a, 0x10, 0x05, 0x0f, 0x03, 0x16, 
	0x00, 0x08, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 
	0x1b, 0x05, 0x05, 0x05, 0x0f, 0x17, 0x07, 0x16, 
	0x16, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx gooble_slop_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 gooble_slop_pal_rgba16[] = {
	0x69, 0x87, 0x69, 0x89, 0x82, 0x4d, 0xb4, 0x19, 
	0xd4, 0xe1, 0xdd, 0x21, 0xc4, 0x5b, 0x72, 0x0b, 
	0x69, 0xc9, 0xab, 0x95, 0xb3, 0xd9, 0xb3, 0xd7, 
	0xa3, 0x55, 0x7a, 0x0b, 0x92, 0xd1, 0xdd, 0x23, 
	0xcc, 0x9d, 0xd4, 0x9f, 0x9b, 0x13, 0x7a, 0x4b, 
	0x8a, 0x8f, 0x7a, 0x4d, 0x71, 0xc9, 0xd4, 0xdf, 
	0xbc, 0x19, 0xdc, 0xe1, 0xc4, 0x5d, 0xbc, 0x1b, 
	0x93, 0x13, 0x93, 0x11, 0xab, 0x97, 0xbc, 0x5b, 
	0x9b, 0x53, 0x82, 0x8f, 0xcc, 0x9f, 0x71, 0xcb, 
	
};

Gfx gooble_gooblething_ia4_aligner[] = {gsSPEndDisplayList()};
u8 gooble_gooblething_ia4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0d, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 
	0x0b, 0xdf, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x00, 0x00, 
	0x0d, 0xdd, 0xdd, 0xd0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 
	0x0d, 0xdb, 0xbd, 0xd0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0d, 0xdf, 0xff, 0xf0, 0x00, 0x00, 
	0xdd, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0d, 0xdd, 0xdf, 0xf0, 0x00, 0x00, 
	0xdb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xdd, 0xdd, 0xd0, 0x00, 0x0d, 
	0xdb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xd0, 0x00, 0x0d, 
	0xbb, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xdd, 0x00, 0xdd, 
	0xb0, 0x00, 0x00, 0xdd, 0xff, 0xf0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0d, 0xdd, 0x00, 0xdd, 
	0xb0, 0x00, 0x00, 0xdf, 0xff, 0xff, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xf0, 0x00, 0xdd, 0xd0, 0xdd, 
	0x00, 0x00, 0x0d, 0xff, 0xff, 0xff, 0x00, 0x00, 
	0x00, 0x00, 0xdf, 0xff, 0x00, 0xdb, 0xd0, 0xdf, 
	0x00, 0x0f, 0xdf, 0xdd, 0xff, 0xff, 0x00, 0x00, 
	0x00, 0x0b, 0xdf, 0xfd, 0x00, 0xdb, 0xbb, 0xbf, 
	0x00, 0x0f, 0xfd, 0xbb, 0xdf, 0xf0, 0x00, 0x00, 
	0x00, 0x0b, 0xbf, 0xfd, 0xd0, 0x0d, 0xdd, 0xbf, 
	0x00, 0xff, 0xdb, 0xb0, 0xff, 0x00, 0x00, 0x00, 
	0x00, 0x0b, 0xbb, 0xdd, 0xbd, 0x0d, 0xdf, 0xdf, 
	0x0f, 0xff, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0d, 0xbb, 0xbd, 0xdd, 0xfd, 0xdd, 0xbf, 
	0xff, 0xfd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0d, 0xdf, 0xfd, 0xbd, 0xdb, 
	0xdf, 0xff, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xdd, 0xdd, 0xbd, 0xdb, 
	0xdf, 0xf0, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0d, 0xbd, 0xdd, 0xdd, 
	0xdf, 0x00, 0xfd, 0xdd, 0xff, 0xff, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xdd, 0xfd, 0xbd, 
	0xff, 0xff, 0xdb, 0xbb, 0xbd, 0xdd, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0xdf, 0xdd, 
	0xff, 0xfd, 0xdd, 0xfd, 0xbb, 0xbd, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdd, 0xdd, 
	0xfd, 0xdf, 0xf0, 0x00, 0xdd, 0xd0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdd, 0xdd, 
	0xdd, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0xff, 
	0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Vtx gooble_Main_mesh_layer_4_vtx_0[8] = {
	{{ {-127, 110, -153}, 0, {897, 945}, {208, 0, 139, 255} }},
	{{ {-67, 191, -178}, 0, {95, 47}, {208, 0, 139, 255} }},
	{{ {-67, 110, -178}, 0, {95, 945}, {208, 0, 139, 255} }},
	{{ {-127, 191, -153}, 0, {897, 47}, {208, 0, 139, 255} }},
	{{ {67, 191, -178}, 0, {95, 47}, {48, 0, 139, 255} }},
	{{ {127, 110, -153}, 0, {897, 945}, {48, 0, 139, 255} }},
	{{ {67, 110, -178}, 0, {95, 945}, {48, 0, 139, 255} }},
	{{ {127, 191, -153}, 0, {897, 47}, {48, 0, 139, 255} }},
};

Gfx gooble_Main_mesh_layer_4_tri_0[] = {
	gsSPVertex(gooble_Main_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx gooble_Main_mesh_layer_5_vtx_0[86] = {
	{{ {-1, 17, 175}, 0, {240, 496}, {0, 64, 109, 255} }},
	{{ {-125, 17, 124}, 0, {176, 496}, {179, 66, 77, 255} }},
	{{ {-78, -5, 186}, 0, {176, 560}, {232, 111, 57, 255} }},
	{{ {-117, 47, 117}, 0, {176, 379}, {166, 250, 90, 255} }},
	{{ {0, 47, 166}, 0, {240, 379}, {0, 249, 127, 255} }},
	{{ {123, 17, 124}, 0, {304, 496}, {78, 63, 78, 255} }},
	{{ {76, -5, 186}, 0, {240, 560}, {24, 111, 57, 255} }},
	{{ {117, 47, 117}, 0, {304, 379}, {90, 248, 89, 255} }},
	{{ {174, 17, 0}, 0, {368, 496}, {111, 63, 0, 255} }},
	{{ {185, -5, 77}, 0, {304, 560}, {57, 111, 24, 255} }},
	{{ {166, 47, 0}, 0, {368, 379}, {127, 248, 0, 255} }},
	{{ {117, 47, -117}, 0, {432, 379}, {90, 248, 167, 255} }},
	{{ {123, 17, -124}, 0, {432, 496}, {78, 63, 178, 255} }},
	{{ {185, -5, -77}, 0, {368, 560}, {57, 111, 232, 255} }},
	{{ {0, 47, -166}, 0, {496, 379}, {0, 249, 129, 255} }},
	{{ {0, 113, -194}, 0, {496, 269}, {0, 228, 132, 255} }},
	{{ {137, 113, -137}, 0, {432, 269}, {88, 228, 168, 255} }},
	{{ {141, 219, -141}, 0, {432, 155}, {87, 30, 169, 255} }},
	{{ {0, 219, -200}, 0, {496, 155}, {0, 30, 133, 255} }},
	{{ {0, 320, -135}, 0, {496, 41}, {0, 95, 172, 255} }},
	{{ {95, 320, -95}, 0, {432, 41}, {60, 95, 196, 255} }},
	{{ {0, 367, 0}, 0, {240, -16}, {0, 127, 0, 255} }},
	{{ {135, 320, 0}, 0, {368, 41}, {84, 95, 0, 255} }},
	{{ {95, 320, 95}, 0, {304, 41}, {60, 95, 60, 255} }},
	{{ {0, 320, 135}, 0, {240, 41}, {0, 95, 84, 255} }},
	{{ {-95, 320, 95}, 0, {176, 41}, {196, 95, 60, 255} }},
	{{ {-135, 320, 0}, 0, {112, 41}, {172, 95, 0, 255} }},
	{{ {-95, 320, -95}, 0, {48, 41}, {196, 95, 196, 255} }},
	{{ {0, 320, -135}, 0, {-16, 41}, {0, 95, 172, 255} }},
	{{ {-141, 219, -141}, 0, {48, 155}, {169, 30, 169, 255} }},
	{{ {0, 219, -200}, 0, {-16, 155}, {0, 30, 133, 255} }},
	{{ {-137, 113, -137}, 0, {48, 269}, {168, 229, 168, 255} }},
	{{ {-137, 113, -137}, 0, {48, 269}, {168, 229, 168, 255} }},
	{{ {0, 219, -200}, 0, {-16, 155}, {0, 30, 133, 255} }},
	{{ {0, 113, -194}, 0, {-16, 269}, {0, 228, 132, 255} }},
	{{ {0, 47, -166}, 0, {-16, 379}, {0, 249, 129, 255} }},
	{{ {-117, 47, -117}, 0, {48, 379}, {166, 250, 166, 255} }},
	{{ {-1, 17, -175}, 0, {-16, 496}, {0, 64, 147, 255} }},
	{{ {-125, 17, -124}, 0, {48, 496}, {179, 66, 179, 255} }},
	{{ {-78, -5, -186}, 0, {-16, 560}, {232, 111, 199, 255} }},
	{{ {-166, 47, 0}, 0, {112, 379}, {129, 251, 0, 255} }},
	{{ {-194, 113, 0}, 0, {112, 269}, {132, 229, 0, 255} }},
	{{ {-117, 47, 117}, 0, {176, 379}, {166, 250, 90, 255} }},
	{{ {-125, 17, 124}, 0, {176, 496}, {179, 66, 77, 255} }},
	{{ {-176, 17, 0}, 0, {112, 496}, {148, 66, 0, 255} }},
	{{ {-186, -5, -77}, 0, {48, 560}, {199, 111, 232, 255} }},
	{{ {-186, -5, 77}, 0, {112, 560}, {199, 111, 24, 255} }},
	{{ {137, 113, -137}, 0, {432, 269}, {88, 228, 168, 255} }},
	{{ {166, 47, 0}, 0, {368, 379}, {127, 248, 0, 255} }},
	{{ {117, 47, -117}, 0, {432, 379}, {90, 248, 167, 255} }},
	{{ {194, 113, 0}, 0, {368, 269}, {124, 228, 0, 255} }},
	{{ {200, 219, 0}, 0, {368, 155}, {123, 30, 0, 255} }},
	{{ {141, 219, -141}, 0, {432, 155}, {87, 30, 169, 255} }},
	{{ {135, 320, 0}, 0, {368, 41}, {84, 95, 0, 255} }},
	{{ {95, 320, -95}, 0, {432, 41}, {60, 95, 196, 255} }},
	{{ {95, 320, 95}, 0, {304, 41}, {60, 95, 60, 255} }},
	{{ {141, 219, 141}, 0, {304, 155}, {87, 30, 87, 255} }},
	{{ {0, 320, 135}, 0, {240, 41}, {0, 95, 84, 255} }},
	{{ {0, 219, 200}, 0, {240, 155}, {0, 30, 123, 255} }},
	{{ {-95, 320, 95}, 0, {176, 41}, {196, 95, 60, 255} }},
	{{ {-141, 219, 141}, 0, {176, 155}, {169, 30, 87, 255} }},
	{{ {-135, 320, 0}, 0, {112, 41}, {172, 95, 0, 255} }},
	{{ {-200, 219, 0}, 0, {112, 155}, {133, 30, 0, 255} }},
	{{ {-95, 320, -95}, 0, {48, 41}, {196, 95, 196, 255} }},
	{{ {-200, 219, 0}, 0, {112, 155}, {133, 30, 0, 255} }},
	{{ {-95, 320, -95}, 0, {48, 41}, {196, 95, 196, 255} }},
	{{ {-141, 219, -141}, 0, {48, 155}, {169, 30, 169, 255} }},
	{{ {-194, 113, 0}, 0, {112, 269}, {132, 229, 0, 255} }},
	{{ {-137, 113, -137}, 0, {48, 269}, {168, 229, 168, 255} }},
	{{ {-117, 47, -117}, 0, {48, 379}, {166, 250, 166, 255} }},
	{{ {-137, 113, 137}, 0, {176, 269}, {168, 229, 88, 255} }},
	{{ {-141, 219, 141}, 0, {176, 155}, {169, 30, 87, 255} }},
	{{ {0, 113, 194}, 0, {240, 269}, {0, 228, 124, 255} }},
	{{ {0, 47, 166}, 0, {240, 379}, {0, 249, 127, 255} }},
	{{ {-117, 47, 117}, 0, {176, 379}, {166, 250, 90, 255} }},
	{{ {117, 47, 117}, 0, {304, 379}, {90, 248, 89, 255} }},
	{{ {137, 113, 137}, 0, {304, 269}, {88, 228, 88, 255} }},
	{{ {166, 47, 0}, 0, {368, 379}, {127, 248, 0, 255} }},
	{{ {194, 113, 0}, 0, {368, 269}, {124, 228, 0, 255} }},
	{{ {141, 219, 141}, 0, {304, 155}, {87, 30, 87, 255} }},
	{{ {200, 219, 0}, 0, {368, 155}, {123, 30, 0, 255} }},
	{{ {0, 219, 200}, 0, {240, 155}, {0, 30, 123, 255} }},
	{{ {0, 47, -166}, 0, {496, 379}, {0, 249, 129, 255} }},
	{{ {123, 17, -124}, 0, {432, 496}, {78, 63, 178, 255} }},
	{{ {-1, 17, -175}, 0, {496, 496}, {0, 64, 147, 255} }},
	{{ {76, -5, -186}, 0, {432, 560}, {24, 111, 199, 255} }},
};

Gfx gooble_Main_mesh_layer_5_tri_0[] = {
	gsSPVertex(gooble_Main_mesh_layer_5_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(5, 0, 6, 0, 4, 5, 7, 0),
	gsSP2Triangles(7, 5, 8, 0, 8, 5, 9, 0),
	gsSP2Triangles(7, 8, 10, 0, 11, 10, 8, 0),
	gsSP2Triangles(11, 8, 12, 0, 12, 8, 13, 0),
	gsSP2Triangles(14, 11, 12, 0, 15, 11, 14, 0),
	gsSP2Triangles(15, 16, 11, 0, 15, 17, 16, 0),
	gsSP2Triangles(15, 18, 17, 0, 17, 18, 19, 0),
	gsSP2Triangles(17, 19, 20, 0, 20, 19, 21, 0),
	gsSP2Triangles(22, 20, 21, 0, 23, 22, 21, 0),
	gsSP2Triangles(24, 23, 21, 0, 25, 24, 21, 0),
	gsSP2Triangles(26, 25, 21, 0, 27, 26, 21, 0),
	gsSP2Triangles(28, 27, 21, 0, 29, 27, 28, 0),
	gsSP2Triangles(29, 28, 30, 0, 31, 29, 30, 0),
	gsSPVertex(gooble_Main_mesh_layer_5_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 4, 3, 5, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(8, 4, 6, 0, 9, 4, 8, 0),
	gsSP2Triangles(10, 9, 8, 0, 8, 11, 10, 0),
	gsSP2Triangles(8, 12, 11, 0, 8, 6, 12, 0),
	gsSP2Triangles(12, 6, 13, 0, 11, 12, 14, 0),
	gsSP2Triangles(15, 16, 17, 0, 15, 18, 16, 0),
	gsSP2Triangles(15, 19, 18, 0, 15, 20, 19, 0),
	gsSP2Triangles(20, 21, 19, 0, 20, 22, 21, 0),
	gsSP2Triangles(19, 21, 23, 0, 19, 23, 24, 0),
	gsSP2Triangles(24, 23, 25, 0, 24, 25, 26, 0),
	gsSP2Triangles(26, 25, 27, 0, 26, 27, 28, 0),
	gsSP2Triangles(28, 27, 29, 0, 28, 29, 30, 0),
	gsSP1Triangle(30, 29, 31, 0),
	gsSPVertex(gooble_Main_mesh_layer_5_vtx_0 + 64, 22, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 0, 3, 0, 6, 7, 0, 0),
	gsSP2Triangles(8, 7, 6, 0, 9, 8, 6, 0),
	gsSP2Triangles(9, 6, 10, 0, 10, 6, 3, 0),
	gsSP2Triangles(11, 8, 9, 0, 11, 12, 8, 0),
	gsSP2Triangles(13, 12, 11, 0, 13, 14, 12, 0),
	gsSP2Triangles(14, 15, 12, 0, 14, 16, 15, 0),
	gsSP2Triangles(12, 15, 17, 0, 12, 17, 8, 0),
	gsSP2Triangles(8, 17, 7, 0, 18, 19, 20, 0),
	gsSP1Triangle(20, 19, 21, 0),
	gsSPEndDisplayList(),
};

Vtx gooble_GoopBlob_mesh_layer_1_vtx_0[4] = {
	{{ {117, 19, -131}, 0, {-529, 495}, {172, 241, 94, 255} }},
	{{ {-42, 156, 65}, 0, {-529, 495}, {31, 142, 209, 255} }},
	{{ {-144, -81, -62}, 0, {-529, 495}, {104, 57, 44, 255} }},
	{{ {72, -100, 127}, 0, {-529, 495}, {204, 71, 164, 255} }},
};

Gfx gooble_GoopBlob_mesh_layer_1_tri_0[] = {
	gsSPVertex(gooble_GoopBlob_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(2, 3, 0, 0, 3, 2, 1, 0),
	gsSPEndDisplayList(),
};

Vtx gooble_ThingBill_mesh_layer_4_vtx_0[4] = {
	{{ {-26, 51, 0}, 0, {-16, -16}, {0, 0, 129, 255} }},
	{{ {26, 0, 0}, 0, {1008, 1008}, {0, 0, 129, 255} }},
	{{ {-26, 0, 0}, 0, {-16, 1008}, {0, 0, 129, 255} }},
	{{ {26, 51, 0}, 0, {1008, -16}, {0, 0, 129, 255} }},
};

Gfx gooble_ThingBill_mesh_layer_4_tri_0[] = {
	gsSPVertex(gooble_ThingBill_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_gooble_Gooble_Eyes[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(gooble_Gooble_Eyes_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, gooble_goobleeye_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_gooble_Gooble_Eyes[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_gooble_RedGoo[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(gooble_RedGoo_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, gooble_goo_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 127, 1024),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_gooble_RedGoo[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_gooble_Slop[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPSetLights1(gooble_Slop_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(1984, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gooble_slop_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 35),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, gooble_slop_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_gooble_Slop[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_gooble_Gooble_Hair[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(gooble_Gooble_Hair_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, gooble_gooblething_ia4),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_gooble_Gooble_Hair[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx gooble_Main_mesh_layer_4[] = {
	gsSPDisplayList(mat_gooble_Gooble_Eyes),
	gsSPDisplayList(gooble_Main_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_gooble_Gooble_Eyes),
	gsSPEndDisplayList(),
};

Gfx gooble_Main_mesh_layer_5[] = {
	gsSPDisplayList(mat_gooble_RedGoo),
	gsSPDisplayList(gooble_Main_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_gooble_RedGoo),
	gsSPEndDisplayList(),
};

Gfx gooble_GoopBlob_mesh_layer_1[] = {
	gsSPDisplayList(mat_gooble_Slop),
	gsSPDisplayList(gooble_GoopBlob_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_gooble_Slop),
	gsSPEndDisplayList(),
};

Gfx gooble_ThingBill_mesh_layer_4[] = {
	gsSPDisplayList(mat_gooble_Gooble_Hair),
	gsSPDisplayList(gooble_ThingBill_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_gooble_Gooble_Hair),
	gsSPEndDisplayList(),
};

Gfx gooble_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP  | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

