Lights1 evilheart_sm64_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx evilheart_meat_ia8_aligner[] = {gsSPEndDisplayList()};
u8 evilheart_meat_ia8[] = {
	0x9f, 0x7f, 0x8f, 0x3f, 0x9f, 0xcf, 0xcf, 0xcf, 
	0x8f, 0xaf, 0xdf, 0x8f, 0x9f, 0xdf, 0x9f, 0xdf, 
	0xcf, 0xdf, 0xaf, 0x7f, 0x7f, 0x7f, 0x6f, 0x3f, 
	0x5f, 0x8f, 0x5f, 0x3f, 0x4f, 0x3f, 0x3f, 0xcf, 
	0x9f, 0x8f, 0x8f, 0x3f, 0x9f, 0xbf, 0xcf, 0xcf, 
	0x9f, 0x9f, 0x9f, 0x7f, 0x8f, 0x6f, 0x5f, 0x4f, 
	0x7f, 0x6f, 0xdf, 0xef, 0x7f, 0x8f, 0x9f, 0xcf, 
	0x8f, 0xaf, 0xaf, 0x9f, 0xaf, 0xaf, 0x9f, 0x8f, 
	0x9f, 0x9f, 0xbf, 0x5f, 0x6f, 0xbf, 0x8f, 0xbf, 
	0x8f, 0x8f, 0xaf, 0xaf, 0xbf, 0x9f, 0x9f, 0xef, 
	0xef, 0x9f, 0x7f, 0x6f, 0x8f, 0x6f, 0x7f, 0x4f, 
	0xef, 0x7f, 0x6f, 0x5f, 0x4f, 0x4f, 0x9f, 0x8f, 
	0xbf, 0xaf, 0x7f, 0x6f, 0x9f, 0xcf, 0xbf, 0x9f, 
	0xaf, 0x9f, 0x8f, 0x5f, 0x7f, 0x6f, 0x5f, 0x3f, 
	0x7f, 0x9f, 0xef, 0xaf, 0x9f, 0xaf, 0x9f, 0xaf, 
	0xef, 0xaf, 0x9f, 0x8f, 0xbf, 0xaf, 0x8f, 0x9f, 
	0x7f, 0x7f, 0x7f, 0x5f, 0x8f, 0xaf, 0xcf, 0x8f, 
	0x8f, 0xcf, 0xcf, 0xaf, 0x9f, 0xaf, 0x9f, 0xcf, 
	0xef, 0xbf, 0xaf, 0x6f, 0x7f, 0xaf, 0x7f, 0x5f, 
	0xcf, 0xaf, 0x5f, 0x5f, 0x6f, 0x3f, 0x7f, 0xaf, 
	0x9f, 0x7f, 0xaf, 0x9f, 0x9f, 0xef, 0x9f, 0xaf, 
	0xaf, 0x9f, 0x8f, 0x9f, 0x7f, 0x6f, 0x5f, 0x3f, 
	0x7f, 0xbf, 0xaf, 0xaf, 0x9f, 0xbf, 0xbf, 0x8f, 
	0x9f, 0x7f, 0xaf, 0x7f, 0xcf, 0x9f, 0x9f, 0x7f, 
	0x8f, 0x7f, 0x6f, 0x6f, 0xef, 0xcf, 0xdf, 0x8f, 
	0xef, 0xaf, 0x9f, 0x8f, 0x8f, 0x7f, 0x8f, 0xbf, 
	0xbf, 0x9f, 0x8f, 0xcf, 0xbf, 0x9f, 0x8f, 0x5f, 
	0x9f, 0x8f, 0x6f, 0x7f, 0x8f, 0xaf, 0x7f, 0x7f, 
	0xef, 0x8f, 0xcf, 0x9f, 0xaf, 0xcf, 0xaf, 0xbf, 
	0x9f, 0x9f, 0x8f, 0x8f, 0x7f, 0x7f, 0x7f, 0x4f, 
	0x9f, 0xcf, 0xdf, 0xbf, 0xaf, 0x8f, 0xbf, 0xbf, 
	0xcf, 0x9f, 0x7f, 0x8f, 0xcf, 0xaf, 0x9f, 0x9f, 
	0xaf, 0x6f, 0x5f, 0x6f, 0x4f, 0xaf, 0xaf, 0xaf, 
	0x8f, 0xaf, 0x8f, 0x9f, 0x8f, 0x7f, 0x7f, 0xbf, 
	0x9f, 0xbf, 0xaf, 0xef, 0x9f, 0xcf, 0xcf, 0xef, 
	0x8f, 0x8f, 0x6f, 0x7f, 0x8f, 0xaf, 0xdf, 0x9f, 
	0xdf, 0xdf, 0xaf, 0x7f, 0xaf, 0xbf, 0xdf, 0xaf, 
	0xaf, 0x8f, 0x9f, 0x8f, 0x8f, 0x6f, 0x7f, 0x8f, 
	0x8f, 0xdf, 0xbf, 0xcf, 0xcf, 0xef, 0xef, 0xaf, 
	0x8f, 0x8f, 0x7f, 0xef, 0x9f, 0xaf, 0xbf, 0x9f, 
	0x7f, 0xdf, 0x9f, 0x4f, 0x4f, 0x7f, 0xaf, 0x9f, 
	0x8f, 0x7f, 0x9f, 0xdf, 0x7f, 0x8f, 0x6f, 0xcf, 
	0xbf, 0xbf, 0xef, 0x9f, 0xcf, 0xef, 0xcf, 0xdf, 
	0x9f, 0x9f, 0x7f, 0x8f, 0xcf, 0xdf, 0xcf, 0x9f, 
	0xbf, 0xcf, 0xcf, 0xbf, 0xdf, 0xaf, 0xef, 0xbf, 
	0x9f, 0xaf, 0x8f, 0x8f, 0x7f, 0x7f, 0x7f, 0x5f, 
	0x9f, 0xdf, 0xaf, 0xcf, 0x8f, 0x8f, 0x9f, 0xcf, 
	0x9f, 0x7f, 0x5f, 0xbf, 0x9f, 0x8f, 0x8f, 0x9f, 
	0x8f, 0x9f, 0x8f, 0x4f, 0xef, 0x6f, 0x9f, 0x9f, 
	0xaf, 0x9f, 0xbf, 0xbf, 0x7f, 0x7f, 0x7f, 0xcf, 
	0xbf, 0x9f, 0xaf, 0xcf, 0x9f, 0xaf, 0xbf, 0xdf, 
	0xaf, 0x8f, 0xaf, 0x8f, 0xaf, 0xbf, 0xcf, 0xdf, 
	0x9f, 0x7f, 0x9f, 0xbf, 0xbf, 0xbf, 0xdf, 0xbf, 
	0xcf, 0x8f, 0x6f, 0x8f, 0x7f, 0x7f, 0x7f, 0x5f, 
	0x7f, 0xcf, 0xbf, 0xaf, 0x9f, 0xaf, 0xaf, 0xdf, 
	0x9f, 0xaf, 0x7f, 0xbf, 0x9f, 0x8f, 0x8f, 0xaf, 
	0x6f, 0x9f, 0x4f, 0xef, 0x7f, 0x3f, 0x9f, 0xdf, 
	0x7f, 0x9f, 0x7f, 0xaf, 0xaf, 0x7f, 0x7f, 0xdf, 
	0x9f, 0xbf, 0xaf, 0xbf, 0xaf, 0xcf, 0x9f, 0xbf, 
	0xef, 0xef, 0xdf, 0xaf, 0xcf, 0x8f, 0xcf, 0xef, 
	0x5f, 0xaf, 0xcf, 0x8f, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xaf, 0x8f, 0xbf, 0x7f, 0x9f, 0x7f, 0x5f, 
	0x9f, 0xcf, 0xaf, 0xaf, 0x9f, 0xbf, 0x9f, 0x9f, 
	0x9f, 0x8f, 0x7f, 0xef, 0x9f, 0x8f, 0x8f, 0x8f, 
	0x6f, 0x8f, 0xdf, 0xef, 0x7f, 0x3f, 0x9f, 0xcf, 
	0x8f, 0xaf, 0xcf, 0x7f, 0x9f, 0xcf, 0xaf, 0xef, 
	0x9f, 0x9f, 0xdf, 0xaf, 0x9f, 0xaf, 0x8f, 0xdf, 
	0xbf, 0xcf, 0xbf, 0xdf, 0xbf, 0xef, 0xcf, 0x9f, 
	0x6f, 0x8f, 0x9f, 0x7f, 0xcf, 0xbf, 0xcf, 0xcf, 
	0xbf, 0xcf, 0xaf, 0x9f, 0xbf, 0xaf, 0x8f, 0x7f, 
	0x8f, 0xbf, 0xbf, 0x8f, 0x8f, 0xaf, 0x8f, 0x7f, 
	0x7f, 0xef, 0xff, 0x8f, 0x7f, 0x7f, 0x6f, 0x7f, 
	0xff, 0xef, 0xff, 0x9f, 0x8f, 0x6f, 0x6f, 0xbf, 
	0x7f, 0xaf, 0xbf, 0x7f, 0xbf, 0x8f, 0x8f, 0x9f, 
	0x9f, 0xcf, 0xef, 0xcf, 0xbf, 0x8f, 0xdf, 0xef, 
	0xaf, 0xaf, 0x9f, 0xdf, 0xdf, 0xef, 0xdf, 0xcf, 
	0xef, 0xdf, 0x9f, 0xcf, 0xef, 0x8f, 0xbf, 0x9f, 
	0xbf, 0xbf, 0xaf, 0x7f, 0xaf, 0xaf, 0x9f, 0x7f, 
	0x7f, 0xaf, 0xaf, 0xaf, 0xbf, 0xbf, 0x9f, 0xef, 
	0xbf, 0xef, 0xcf, 0xaf, 0xef, 0xef, 0xff, 0xdf, 
	0xef, 0xaf, 0x8f, 0x8f, 0x9f, 0x7f, 0xef, 0x9f, 
	0x8f, 0x7f, 0x7f, 0x9f, 0x7f, 0x7f, 0xaf, 0xaf, 
	0x9f, 0x8f, 0x9f, 0xbf, 0x8f, 0x9f, 0xef, 0xdf, 
	0xff, 0x9f, 0xaf, 0xcf, 0xdf, 0xdf, 0xcf, 0xef, 
	0xcf, 0xcf, 0xdf, 0xdf, 0xef, 0xaf, 0xcf, 0xbf, 
	0xaf, 0xaf, 0xaf, 0xcf, 0xbf, 0x9f, 0x7f, 0x7f, 
	0x8f, 0xcf, 0x9f, 0xaf, 0xbf, 0x8f, 0xaf, 0xbf, 
	0xcf, 0x9f, 0x9f, 0x7f, 0x9f, 0x8f, 0x7f, 0xbf, 
	0x9f, 0x7f, 0xaf, 0x8f, 0x8f, 0x6f, 0x7f, 0x8f, 
	0xbf, 0x8f, 0xbf, 0x4f, 0x3f, 0xbf, 0xdf, 0xef, 
	0x9f, 0x8f, 0xaf, 0xdf, 0x7f, 0xcf, 0xbf, 0xaf, 
	0xaf, 0xbf, 0xbf, 0x7f, 0x9f, 0xef, 0xbf, 0xbf, 
	0xcf, 0xcf, 0xbf, 0xdf, 0xdf, 0xaf, 0xdf, 0xcf, 
	0xaf, 0xbf, 0xbf, 0x9f, 0x9f, 0x8f, 0x9f, 0x8f, 
	0x7f, 0xbf, 0xbf, 0xbf, 0x9f, 0xaf, 0xaf, 0xdf, 
	0xdf, 0xbf, 0x9f, 0x9f, 0x8f, 0xbf, 0x8f, 0xdf, 
	0x8f, 0x9f, 0x7f, 0x7f, 0x8f, 0x8f, 0x4f, 0xcf, 
	0xef, 0xcf, 0x8f, 0x4f, 0xaf, 0xcf, 0x9f, 0xaf, 
	0x9f, 0x8f, 0xaf, 0x9f, 0xaf, 0xbf, 0xaf, 0xcf, 
	0xcf, 0xcf, 0xaf, 0xbf, 0xaf, 0xbf, 0xcf, 0xef, 
	0xef, 0xdf, 0x9f, 0xaf, 0xcf, 0xdf, 0xef, 0x8f, 
	0xaf, 0x9f, 0xcf, 0xcf, 0xaf, 0x8f, 0x8f, 0xaf, 
	0x8f, 0xcf, 0xbf, 0xaf, 0x9f, 0x9f, 0xbf, 0xaf, 
	0xef, 0xaf, 0xaf, 0x9f, 0x8f, 0x9f, 0xbf, 0x9f, 
	0xef, 0x9f, 0xaf, 0x8f, 0x8f, 0x8f, 0x3f, 0xef, 
	0x8f, 0x9f, 0x7f, 0xef, 0xaf, 0xcf, 0x9f, 0xaf, 
	0x8f, 0x6f, 0x8f, 0xdf, 0xbf, 0x8f, 0xaf, 0xcf, 
	0x9f, 0xbf, 0x9f, 0x9f, 0xbf, 0xef, 0xaf, 0x9f, 
	0x7f, 0xaf, 0xaf, 0xaf, 0xcf, 0xdf, 0xbf, 0x9f, 
	0x8f, 0x7f, 0xaf, 0xcf, 0xdf, 0xbf, 0xbf, 0x8f, 
	0x8f, 0xcf, 0xcf, 0xef, 0xef, 0x8f, 0xbf, 0xcf, 
	0x9f, 0x9f, 0xbf, 0x8f, 0xaf, 0x8f, 0xbf, 0xdf, 
	0x9f, 0x8f, 0x6f, 0xbf, 0x8f, 0x8f, 0x3f, 0xdf, 
	0x8f, 0x8f, 0xdf, 0xef, 0xbf, 0xbf, 0xdf, 0x8f, 
	0x8f, 0xaf, 0xbf, 0xaf, 0xbf, 0xaf, 0xdf, 0xcf, 
	0xdf, 0xaf, 0xef, 0xbf, 0xaf, 0xbf, 0xbf, 0x9f, 
	0x8f, 0xcf, 0x8f, 0x9f, 0xcf, 0xcf, 0xef, 0xcf, 
	0xaf, 0xbf, 0xbf, 0xbf, 0x9f, 0xbf, 0xdf, 0x9f, 
	0x6f, 0x9f, 0xdf, 0xdf, 0xcf, 0xaf, 0xcf, 0xbf, 
	0x8f, 0x9f, 0xaf, 0xaf, 0xbf, 0x6f, 0x9f, 0xaf, 
	0x8f, 0x9f, 0x7f, 0x6f, 0x8f, 0x9f, 0x4f, 0x8f, 
	0x7f, 0x8f, 0xaf, 0xcf, 0xbf, 0xaf, 0xcf, 0xbf, 
	0xbf, 0x4f, 0x8f, 0x7f, 0xaf, 0xbf, 0xaf, 0xaf, 
	0xdf, 0xdf, 0xaf, 0xbf, 0xcf, 0xcf, 0x8f, 0x8f, 
	0xcf, 0xaf, 0x8f, 0xaf, 0xcf, 0xef, 0xdf, 0xef, 
	0xcf, 0xbf, 0xcf, 0xdf, 0xef, 0x9f, 0x9f, 0x8f, 
	0x7f, 0xcf, 0xcf, 0xbf, 0xbf, 0xbf, 0xef, 0x8f, 
	0x8f, 0xaf, 0xaf, 0x9f, 0xbf, 0xbf, 0xcf, 0x9f, 
	0x7f, 0x8f, 0x8f, 0xbf, 0xaf, 0x8f, 0x3f, 0x3f, 
	0x6f, 0x9f, 0xbf, 0xcf, 0xaf, 0xbf, 0xef, 0xcf, 
	0xcf, 0xaf, 0xcf, 0x6f, 0xef, 0xaf, 0x8f, 0xaf, 
	0x9f, 0xbf, 0x7f, 0xaf, 0x9f, 0xaf, 0xdf, 0xef, 
	0xcf, 0xcf, 0xef, 0x9f, 0xdf, 0xcf, 0xdf, 0xaf, 
	0x9f, 0x9f, 0x8f, 0x9f, 0x8f, 0xaf, 0xcf, 0x9f, 
	0xcf, 0xcf, 0xcf, 0x9f, 0x9f, 0x9f, 0xdf, 0x9f, 
	0xbf, 0xaf, 0x9f, 0xbf, 0xaf, 0xaf, 0x9f, 0x7f, 
	0x8f, 0x9f, 0x8f, 0x9f, 0x8f, 0x4f, 0x8f, 0x6f, 
	0x7f, 0x9f, 0xaf, 0xbf, 0xbf, 0xaf, 0xef, 0xcf, 
	0xcf, 0xcf, 0xcf, 0x8f, 0xdf, 0xaf, 0xaf, 0xbf, 
	0x5f, 0x7f, 0xaf, 0xbf, 0xaf, 0xbf, 0xaf, 0x9f, 
	0xcf, 0xef, 0xef, 0x6f, 0xaf, 0x9f, 0xaf, 0xaf, 
	0xaf, 0x9f, 0x8f, 0x9f, 0x7f, 0x9f, 0x7f, 0x6f, 
	0xaf, 0xaf, 0xcf, 0xaf, 0x9f, 0x9f, 0xdf, 0x7f, 
	0x8f, 0x9f, 0x9f, 0xbf, 0x9f, 0xaf, 0xaf, 0x6f, 
	0x9f, 0x8f, 0x7f, 0x8f, 0x4f, 0x3f, 0x9f, 0xef, 
	0xbf, 0x9f, 0x9f, 0xaf, 0xcf, 0xaf, 0xcf, 0xaf, 
	0xcf, 0xaf, 0x7f, 0xaf, 0x7f, 0x8f, 0x8f, 0x6f, 
	0x8f, 0x4f, 0x4f, 0x8f, 0x8f, 0xaf, 0xaf, 0x9f, 
	0x9f, 0xbf, 0xaf, 0x9f, 0xcf, 0x9f, 0xaf, 0x9f, 
	0x9f, 0xbf, 0x9f, 0x9f, 0x8f, 0x7f, 0x7f, 0x7f, 
	0x9f, 0x9f, 0xbf, 0xaf, 0x8f, 0x8f, 0x7f, 0x6f, 
	0x8f, 0x9f, 0x9f, 0x9f, 0x9f, 0xaf, 0xbf, 0x9f, 
	0xbf, 0xaf, 0x9f, 0x5f, 0x2f, 0x8f, 0x8f, 0x9f, 
	0xbf, 0x9f, 0x6f, 0xcf, 0xbf, 0xbf, 0x8f, 0xcf, 
	0xaf, 0xaf, 0xcf, 0x9f, 0xcf, 0xaf, 0x9f, 0x7f, 
	0xaf, 0x2f, 0x6f, 0x2f, 0x4f, 0x6f, 0x6f, 0x9f, 
	0xbf, 0xbf, 0x9f, 0xaf, 0xbf, 0x8f, 0x9f, 0x9f, 
	0x9f, 0x8f, 0x7f, 0x7f, 0x7f, 0x6f, 0xcf, 0x6f, 
	0x8f, 0x9f, 0xbf, 0x9f, 0x7f, 0x5f, 0x7f, 0x6f, 
	0x9f, 0x8f, 0x9f, 0xaf, 0xaf, 0x9f, 0x7f, 0x8f, 
	0x7f, 0x8f, 0x8f, 0x2f, 0x9f, 0xef, 0xef, 0xbf, 
	0xdf, 0xef, 0xaf, 0x7f, 0xaf, 0xbf, 0xbf, 0x8f, 
	0x8f, 0xdf, 0xaf, 0xdf, 0xcf, 0xcf, 0xdf, 0xbf, 
	0x8f, 0x3f, 0xbf, 0x5f, 0x1f, 0x1f, 0x3f, 0x4f, 
	0x8f, 0xaf, 0x8f, 0x7f, 0xef, 0x9f, 0x9f, 0x9f, 
	0x9f, 0x8f, 0x8f, 0x7f, 0x8f, 0x6f, 0x5f, 0x8f, 
	0xdf, 0xaf, 0xaf, 0xbf, 0x6f, 0x6f, 0x5f, 0x5f, 
	0x7f, 0x8f, 0xaf, 0x8f, 0x9f, 0xaf, 0xaf, 0x9f, 
	0x6f, 0x6f, 0x3f, 0x3f, 0x8f, 0x8f, 0xcf, 0xdf, 
	0xdf, 0xcf, 0xaf, 0x7f, 0x9f, 0x9f, 0x7f, 0x7f, 
	0xcf, 0xdf, 0x9f, 0x9f, 0xaf, 0x9f, 0xcf, 0xdf, 
	0xdf, 0xaf, 0x7f, 0x5f, 0x1f, 0x1f, 0x0f, 0x0f, 
	0x2f, 0x4f, 0x6f, 0x7f, 0xaf, 0xaf, 0x9f, 0x8f, 
	0x9f, 0x8f, 0x9f, 0x7f, 0x8f, 0x8f, 0x6f, 0x8f, 
	0xbf, 0x8f, 0x9f, 0x7f, 0x7f, 0x5f, 0x6f, 0x4f, 
	0x8f, 0x8f, 0xaf, 0x8f, 0x8f, 0x8f, 0xcf, 0x7f, 
	0x3f, 0x4f, 0x2f, 0x5f, 0xbf, 0xcf, 0xdf, 0xef, 
	0xcf, 0xcf, 0x9f, 0x7f, 0xdf, 0x8f, 0x8f, 0xcf, 
	0xaf, 0x8f, 0xaf, 0xbf, 0xef, 0x9f, 0xef, 0xcf, 
	0xbf, 0xef, 0xbf, 0x8f, 0x8f, 0x2f, 0x2f, 0x1f, 
	0x0f, 0x2f, 0x4f, 0x7f, 0x8f, 0x7f, 0x9f, 0xaf, 
	0x9f, 0x7f, 0x9f, 0x8f, 0x9f, 0x7f, 0x6f, 0x8f, 
	0xcf, 0x8f, 0x9f, 0x7f, 0x7f, 0x6f, 0x6f, 0x3f, 
	0x8f, 0xcf, 0xbf, 0x8f, 0x8f, 0x7f, 0xbf, 0x8f, 
	0x4f, 0x4f, 0x4f, 0x6f, 0xaf, 0xaf, 0xdf, 0xaf, 
	0x9f, 0x8f, 0x9f, 0x8f, 0xaf, 0x6f, 0x9f, 0x7f, 
	0x7f, 0x6f, 0x8f, 0x9f, 0xef, 0x9f, 0x9f, 0x9f, 
	0xdf, 0x9f, 0xbf, 0xef, 0xbf, 0xbf, 0x2f, 0x3f, 
	0x0f, 0x2f, 0x0f, 0x0f, 0x2f, 0x2f, 0x2f, 0x4f, 
	0x6f, 0x9f, 0x8f, 0x9f, 0x8f, 0xbf, 0x8f, 0xbf, 
	0x8f, 0x6f, 0x9f, 0x7f, 0x6f, 0x6f, 0x3f, 0xcf, 
	0x9f, 0x6f, 0x7f, 0x9f, 0x7f, 0x3f, 0xaf, 0xaf, 
	0xff, 0x9f, 0x5f, 0x5f, 0x7f, 0x8f, 0xbf, 0xaf, 
	0x9f, 0x7f, 0x7f, 0xaf, 0xaf, 0x8f, 0xbf, 0xbf, 
	0xaf, 0xbf, 0x8f, 0xaf, 0x9f, 0xbf, 0xdf, 0xbf, 
	0xbf, 0xaf, 0xaf, 0xbf, 0xbf, 0x8f, 0xaf, 0x6f, 
	0x6f, 0xef, 0x0f, 0x0f, 0x0f, 0x2f, 0x6f, 0x4f, 
	0x3f, 0x3f, 0x3f, 0x8f, 0x9f, 0x9f, 0x8f, 0x7f, 
	0x7f, 0x6f, 0x7f, 0x6f, 0x6f, 0x6f, 0x7f, 0x7f, 
	0xbf, 0x7f, 0x9f, 0x9f, 0x5f, 0x5f, 0xcf, 0xcf, 
	0x8f, 0xbf, 0x3f, 0xbf, 0xdf, 0xbf, 0xaf, 0xdf, 
	0xaf, 0xaf, 0x6f, 0x8f, 0xbf, 0xaf, 0x9f, 0x8f, 
	0x9f, 0xaf, 0xaf, 0x8f, 0x8f, 0x9f, 0xaf, 0x9f, 
	0x9f, 0x8f, 0xaf, 0xaf, 0xaf, 0x8f, 0xbf, 0xaf, 
	0x4f, 0xef, 0x5f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0xbf, 0x4f, 0x2f, 0xaf, 0x7f, 0x8f, 
	0x8f, 0x6f, 0x7f, 0x7f, 0x7f, 0x7f, 0x6f, 0x6f, 
	0x8f, 0x3f, 0x5f, 0x7f, 0x4f, 0x9f, 0xbf, 0x9f, 
	0x9f, 0xbf, 0x7f, 0xbf, 0xbf, 0xbf, 0xbf, 0x9f, 
	0x7f, 0x9f, 0x6f, 0xbf, 0x9f, 0x9f, 0x7f, 0x8f, 
	0x9f, 0x8f, 0x9f, 0xbf, 0xdf, 0xbf, 0x9f, 0xaf, 
	0xaf, 0xcf, 0xaf, 0x9f, 0xcf, 0x8f, 0xaf, 0x7f, 
	0x8f, 0x2f, 0xcf, 0x8f, 0x5f, 0x2f, 0x0f, 0x1f, 
	0x0f, 0x0f, 0x1f, 0x1f, 0xdf, 0x4f, 0x6f, 0x6f, 
	0xaf, 0x8f, 0x6f, 0x7f, 0x8f, 0x5f, 0x7f, 0x5f, 
	0x7f, 0xcf, 0x8f, 0x8f, 0x6f, 0xaf, 0x8f, 0x7f, 
	0x6f, 0x9f, 0x9f, 0xcf, 0xcf, 0xbf, 0x9f, 0x8f, 
	0x8f, 0x8f, 0x6f, 0xaf, 0xaf, 0xbf, 0x8f, 0xbf, 
	0xbf, 0x7f, 0xcf, 0xcf, 0xaf, 0xcf, 0xbf, 0xaf, 
	0xaf, 0xaf, 0xbf, 0xbf, 0x9f, 0xcf, 0x7f, 0x9f, 
	0x7f, 0x7f, 0xef, 0x8f, 0x7f, 0x5f, 0x4f, 0x2f, 
	0x1f, 0x1f, 0x0f, 0x0f, 0x3f, 0x2f, 0x3f, 0x5f, 
	0x7f, 0x8f, 0x6f, 0x7f, 0x7f, 0x7f, 0x5f, 0x4f, 
	0x4f, 0xaf, 0x9f, 0x2f, 0x8f, 0xdf, 0x9f, 0x7f, 
	0x8f, 0x7f, 0x8f, 0xef, 0xaf, 0xaf, 0x9f, 0xbf, 
	0x9f, 0xaf, 0x7f, 0xaf, 0x9f, 0xaf, 0xaf, 0xbf, 
	0x7f, 0x9f, 0xbf, 0xaf, 0xdf, 0x9f, 0x8f, 0x8f, 
	0xaf, 0x9f, 0x9f, 0x8f, 0x6f, 0x8f, 0x8f, 0x9f, 
	0xef, 0x7f, 0x9f, 0x7f, 0xbf, 0xaf, 0x8f, 0x9f, 
	0x6f, 0x3f, 0x5f, 0x2f, 0x2f, 0x4f, 0x6f, 0xbf, 
	0x7f, 0x6f, 0x5f, 0x6f, 0x7f, 0x6f, 0x5f, 0x5f, 
	0x3f, 0x5f, 0x7f, 0x7f, 0xbf, 0x9f, 0xdf, 0x6f, 
	0x8f, 0x6f, 0x6f, 0xef, 0x8f, 0x9f, 0x8f, 0x9f, 
	0x8f, 0x7f, 0x7f, 0x7f, 0xaf, 0xaf, 0xaf, 0x9f, 
	0x6f, 0x9f, 0xbf, 0xbf, 0xaf, 0xaf, 0x9f, 0x8f, 
	0x6f, 0x9f, 0x9f, 0x7f, 0xbf, 0xef, 0xef, 0xbf, 
	0x9f, 0x8f, 0x6f, 0x7f, 0xbf, 0xef, 0xbf, 0xdf, 
	0xcf, 0x8f, 0xef, 0x5f, 0x6f, 0x5f, 0xef, 0x6f, 
	0x8f, 0x5f, 0x5f, 0x8f, 0x8f, 0x7f, 0x5f, 0x5f, 
	0x3f, 0x7f, 0x9f, 0x5f, 0x6f, 0xcf, 0x7f, 0x7f, 
	0x5f, 0x7f, 0x5f, 0x7f, 0xcf, 0xef, 0x9f, 0x9f, 
	0x8f, 0x9f, 0xcf, 0xbf, 0xaf, 0x8f, 0x9f, 0x9f, 
	0x6f, 0x8f, 0xbf, 0xaf, 0xbf, 0xaf, 0x9f, 0x7f, 
	0x6f, 0xef, 0xdf, 0xef, 0xaf, 0x8f, 0x9f, 0x7f, 
	0x8f, 0x8f, 0xaf, 0x6f, 0x9f, 0xbf, 0xdf, 0xef, 
	0xef, 0xdf, 0xff, 0xef, 0xaf, 0x6f, 0x7f, 0x6f, 
	0x6f, 0x8f, 0x8f, 0x9f, 0x8f, 0x8f, 0x7f, 0xef, 
	0x4f, 0xbf, 0x6f, 0x6f, 0x4f, 0x9f, 0x6f, 0x7f, 
	0x6f, 0x6f, 0x9f, 0x7f, 0xff, 0x7f, 0x8f, 0x9f, 
	0xbf, 0x8f, 0xaf, 0xaf, 0x8f, 0x8f, 0x7f, 0x8f, 
	0x9f, 0x7f, 0xbf, 0xdf, 0x9f, 0x8f, 0x9f, 0x7f, 
	0x9f, 0xbf, 0x6f, 0x7f, 0xaf, 0xbf, 0x9f, 0x9f, 
	0x8f, 0x8f, 0x7f, 0x4f, 0xbf, 0xbf, 0x9f, 0xef, 
	0x9f, 0x9f, 0xef, 0xbf, 0x7f, 0xdf, 0xbf, 0x8f, 
	0x8f, 0xaf, 0x7f, 0x8f, 0x8f, 0x8f, 0x5f, 0x6f, 
	0x4f, 0xef, 0x9f, 0x5f, 0x4f, 0x4f, 0x6f, 0x7f, 
	0x9f, 0x9f, 0x8f, 0x3f, 0x7f, 0xbf, 0xbf, 0xbf, 
	0x9f, 0xaf, 0xaf, 0x7f, 0x8f, 0x7f, 0x6f, 0x5f, 
	0x6f, 0x6f, 0xdf, 0xef, 0x8f, 0x7f, 0x8f, 0xaf, 
	0x9f, 0x9f, 0xaf, 0x9f, 0xaf, 0x9f, 0x9f, 0x7f, 
	0x8f, 0x7f, 0x7f, 0x3f, 0x8f, 0xbf, 0xbf, 0xbf, 
	0x7f, 0x8f, 0xcf, 0x7f, 0x8f, 0xcf, 0x8f, 0xef, 
	0xcf, 0xdf, 0xaf, 0x8f, 0x7f, 0x7f, 0x6f, 0x3f, 
	0x5f, 0x7f, 0x5f, 0x3f, 0x4f, 0x3f, 0x3f, 0xdf, 
	0xbf, 0xaf, 0x7f, 0x6f, 0xaf, 0xcf, 0xbf, 0x9f, 
	0xaf, 0xaf, 0x9f, 0x6f, 0x7f, 0x6f, 0x5f, 0x4f, 
	0x7f, 0x9f, 0xef, 0xbf, 0xaf, 0xbf, 0x8f, 0xaf, 
	0xef, 0xaf, 0xaf, 0x8f, 0x9f, 0xaf, 0x8f, 0x9f, 
	0x8f, 0x7f, 0xaf, 0x5f, 0x6f, 0xbf, 0x7f, 0xaf, 
	0x8f, 0x7f, 0x9f, 0x9f, 0x9f, 0x8f, 0x9f, 0xef, 
	0xef, 0xaf, 0x7f, 0x6f, 0x7f, 0x6f, 0x6f, 0x4f, 
	0xef, 0x7f, 0x6f, 0x5f, 0x4f, 0x4f, 0x9f, 0x8f, 
	0xaf, 0x8f, 0xaf, 0xaf, 0x9f, 0xdf, 0x9f, 0xaf, 
	0xbf, 0x9f, 0x9f, 0x8f, 0x7f, 0x6f, 0x4f, 0x3f, 
	0x7f, 0xbf, 0xaf, 0xbf, 0x8f, 0xbf, 0xdf, 0x8f, 
	0x8f, 0x8f, 0x9f, 0x7f, 0xbf, 0x9f, 0x9f, 0x7f, 
	0x7f, 0x7f, 0x6f, 0x5f, 0x8f, 0x9f, 0xbf, 0x7f, 
	0x9f, 0xbf, 0xaf, 0x9f, 0x8f, 0x9f, 0x9f, 0xcf, 
	0xef, 0xbf, 0xaf, 0x5f, 0x7f, 0xaf, 0x7f, 0x5f, 
	0xcf, 0x9f, 0x5f, 0x5f, 0x6f, 0x3f, 0x7f, 0xbf, 
	0xef, 0x8f, 0xbf, 0x9f, 0xaf, 0xcf, 0xbf, 0xbf, 
	0x9f, 0x8f, 0x8f, 0x7f, 0x8f, 0x7f, 0x6f, 0x4f, 
	0x8f, 0xcf, 0xdf, 0xcf, 0x8f, 0x7f, 0xbf, 0xaf, 
	0xbf, 0x9f, 0x7f, 0x7f, 0xbf, 0xaf, 0x8f, 0x9f, 
	0x8f, 0x8f, 0x6f, 0x6f, 0xef, 0xbf, 0xcf, 0x8f, 
	0xdf, 0xaf, 0x9f, 0x7f, 0x8f, 0x7f, 0x8f, 0xbf, 
	0xbf, 0xaf, 0x8f, 0xdf, 0xbf, 0x9f, 0x9f, 0x5f, 
	0x9f, 0x8f, 0x5f, 0x7f, 0x8f, 0x9f, 0x7f, 0x7f, 
	0xdf, 0xdf, 0xaf, 0x8f, 0xbf, 0xcf, 0xdf, 0xaf, 
	0xbf, 0x7f, 0x9f, 0x8f, 0x8f, 0x5f, 0x8f, 0x8f, 
	0x8f, 0xcf, 0xbf, 0xaf, 0xcf, 0xef, 0xef, 0xaf, 
	0x8f, 0x7f, 0x7f, 0xcf, 0x9f, 0x9f, 0x9f, 0x9f, 
	0xaf, 0x6f, 0x5f, 0x6f, 0x4f, 0x9f, 0xbf, 0xbf, 
	0x8f, 0xbf, 0x8f, 0x8f, 0x7f, 0x7f, 0x7f, 0xbf, 
	0x8f, 0xaf, 0xbf, 0xef, 0xaf, 0xbf, 0xcf, 0xef, 
	0x9f, 0x8f, 0x6f, 0x7f, 0x8f, 0xbf, 0xef, 0x9f, 
	0xbf, 0xcf, 0xbf, 0xbf, 0xdf, 0xaf, 0xef, 0xbf, 
	0x9f, 0x8f, 0x8f, 0x7f, 0x8f, 0x6f, 0x7f, 0x5f, 
	0xaf, 0xbf, 0xaf, 0xcf, 0x9f, 0x8f, 0x9f, 0xcf, 
	0x9f, 0x7f, 0x6f, 0xcf, 0x9f, 0x8f, 0x8f, 0x9f, 
	0x8f, 0xcf, 0x9f, 0x4f, 0x4f, 0x8f, 0xaf, 0xaf, 
	0x8f, 0x7f, 0x9f, 0xcf, 0x8f, 0x8f, 0x6f, 0xcf, 
	0xaf, 0xbf, 0xdf, 0x8f, 0xcf, 0xef, 0xcf, 0xdf, 
	0x9f, 0x9f, 0x7f, 0x9f, 0xcf, 0xcf, 0xcf, 0x8f, 
	0x9f, 0x7f, 0x9f, 0xcf, 0xbf, 0xbf, 0xdf, 0xcf, 
	0xbf, 0x8f, 0x6f, 0x8f, 0x7f, 0x7f, 0x7f, 0x5f, 
	0x8f, 0xcf, 0xbf, 0xaf, 0xaf, 0xaf, 0xaf, 0xdf, 
	0x9f, 0x9f, 0x7f, 0xbf, 0x8f, 0x8f, 0x8f, 0xaf, 
	0x8f, 0x9f, 0x8f, 0x3f, 0xdf, 0x6f, 0x9f, 0x9f, 
	0xaf, 0x9f, 0xaf, 0xbf, 0x7f, 0x7f, 0x7f, 0xcf, 
	0xbf, 0x9f, 0xaf, 0xcf, 0xaf, 0xaf, 0xbf, 0xef, 
	0x9f, 0x8f, 0xbf, 0x7f, 0xbf, 0xbf, 0xcf, 0xdf, 
	0x5f, 0xaf, 0xdf, 0x8f, 0xbf, 0xbf, 0xaf, 0xbf, 
	0xaf, 0xaf, 0x8f, 0xcf, 0x7f, 0x9f, 0x7f, 0x5f, 
	0xaf, 0xbf, 0xaf, 0x8f, 0x8f, 0xaf, 0x9f, 0x9f, 
	0xaf, 0x8f, 0x9f, 0xcf, 0xaf, 0x9f, 0x7f, 0x8f, 
	0x6f, 0x8f, 0x4f, 0xef, 0x8f, 0x3f, 0xaf, 0xdf, 
	0x8f, 0x8f, 0x8f, 0x9f, 0xaf, 0x8f, 0x7f, 0xdf, 
	0x9f, 0xaf, 0x9f, 0xbf, 0xaf, 0xbf, 0xaf, 0xaf, 
	0xef, 0xdf, 0xdf, 0xaf, 0xdf, 0x8f, 0xdf, 0xef, 
	0x7f, 0x8f, 0x8f, 0x8f, 0xcf, 0xbf, 0xcf, 0xbf, 
	0xbf, 0xcf, 0xcf, 0x9f, 0xcf, 0xaf, 0x9f, 0x7f, 
	0x8f, 0xbf, 0xbf, 0x9f, 0x8f, 0xaf, 0x7f, 0x7f, 
	0x6f, 0xef, 0xef, 0x8f, 0x7f, 0x7f, 0x6f, 0x7f, 
	0x6f, 0x8f, 0xef, 0xef, 0x7f, 0x2f, 0x9f, 0xcf, 
	0x7f, 0x9f, 0xbf, 0x6f, 0x9f, 0xcf, 0xaf, 0xdf, 
	0x9f, 0x9f, 0xdf, 0xaf, 0xaf, 0x9f, 0x7f, 0xdf, 
	0xaf, 0xcf, 0xcf, 0xdf, 0xbf, 0xdf, 0xcf, 0xaf, 
	0xef, 0xbf, 0xaf, 0xbf, 0xef, 0x9f, 0xbf, 0xaf, 
	0xbf, 0xbf, 0xaf, 0x7f, 0xaf, 0xaf, 0x9f, 0x7f, 
	0x7f, 0xdf, 0xbf, 0xaf, 0xaf, 0xbf, 0x9f, 0xef, 
	0xbf, 0xef, 0xcf, 0xaf, 0xdf, 0xef, 0xef, 0xdf, 
	0xff, 0xef, 0xff, 0x9f, 0x8f, 0x6f, 0x7f, 0xaf, 
	0x7f, 0x8f, 0xbf, 0x7f, 0xbf, 0x8f, 0x9f, 0xaf, 
	0x9f, 0xcf, 0xef, 0xcf, 0xbf, 0x8f, 0xdf, 0xef, 
	0xaf, 0xaf, 0xaf, 0xcf, 0xdf, 0xef, 0xdf, 0xcf, 
	0xbf, 0xcf, 0xdf, 0xdf, 0xef, 0xaf, 0xcf, 0xbf, 
	0xaf, 0xaf, 0xaf, 0xcf, 0xaf, 0x9f, 0x7f, 0x7f, 
	0x8f, 0xdf, 0x9f, 0x9f, 0xbf, 0x9f, 0xbf, 0xaf, 
	0xcf, 0xaf, 0x9f, 0x7f, 0x8f, 0x9f, 0x7f, 0xbf, 
	0xef, 0xaf, 0x8f, 0x9f, 0x9f, 0x7f, 0xef, 0xaf, 
	0x9f, 0x7f, 0x6f, 0x9f, 0x7f, 0x7f, 0xbf, 0xaf, 
	0x9f, 0x8f, 0x9f, 0xbf, 0x9f, 0x8f, 0xef, 0xef, 
	0xff, 0x8f, 0xaf, 0xcf, 0xdf, 0xef, 0xcf, 0xef, 
	0xdf, 0xdf, 0xbf, 0xdf, 0xdf, 0xaf, 0xdf, 0xbf, 
	0xbf, 0xaf, 0xbf, 0x9f, 0x9f, 0x8f, 0xaf, 0x8f, 
	0x7f, 0xbf, 0xbf, 0xbf, 0xaf, 0xbf, 0xaf, 0xcf, 
	0xdf, 0xbf, 0x9f, 0x9f, 0x8f, 0xbf, 0x8f, 0xcf, 
	0x9f, 0x7f, 0xaf, 0x9f, 0x8f, 0x6f, 0x7f, 0x7f, 
	0xbf, 0x8f, 0xaf, 0x4f, 0x4f, 0xbf, 0xdf, 0xef, 
	0x8f, 0x8f, 0xaf, 0xcf, 0x7f, 0xbf, 0xbf, 0xaf, 
	0xaf, 0xaf, 0xcf, 0x7f, 0x9f, 0xff, 0xbf, 0xbf, 
	0xef, 0xdf, 0x9f, 0xaf, 0xcf, 0xdf, 0xef, 0x8f, 
	0xaf, 0xaf, 0xcf, 0xcf, 0xbf, 0x8f, 0x8f, 0x9f, 
	0x8f, 0xbf, 0xbf, 0xbf, 0x9f, 0xaf, 0xaf, 0xaf, 
	0xdf, 0xbf, 0xaf, 0x9f, 0x8f, 0xaf, 0xbf, 0x9f, 
	0x8f, 0x9f, 0x7f, 0x7f, 0x8f, 0x9f, 0x4f, 0xdf, 
	0xef, 0xbf, 0x8f, 0x5f, 0x9f, 0xbf, 0x9f, 0xaf, 
	0x9f, 0x8f, 0xaf, 0x9f, 0xaf, 0xbf, 0xaf, 0xcf, 
	0xbf, 0xbf, 0xaf, 0xbf, 0xaf, 0xbf, 0xbf, 0xef, 
	0x7f, 0xaf, 0xaf, 0xaf, 0xcf, 0xdf, 0xbf, 0x9f, 
	0x9f, 0x7f, 0xbf, 0xcf, 0xef, 0xbf, 0xbf, 0x8f, 
	0x8f, 0xbf, 0xbf, 0xef, 0xef, 0x8f, 0xbf, 0xbf, 
	0x9f, 0x9f, 0xaf, 0x9f, 0xaf, 0x8f, 0x9f, 0xdf, 
	0xef, 0xaf, 0xaf, 0x8f, 0x7f, 0x7f, 0x3f, 0xdf, 
	0x8f, 0xaf, 0x7f, 0xef, 0xaf, 0xcf, 0x9f, 0x9f, 
	0x9f, 0x6f, 0x8f, 0xdf, 0xbf, 0x8f, 0xbf, 0xdf, 
	0xaf, 0xbf, 0x9f, 0x9f, 0xbf, 0xef, 0x9f, 0x9f, 
	0x8f, 0xcf, 0x7f, 0xaf, 0xcf, 0xcf, 0xef, 0xcf, 
	0xaf, 0xaf, 0xbf, 0xaf, 0x9f, 0xbf, 0xcf, 0xaf, 
	0x6f, 0x9f, 0xdf, 0xcf, 0xcf, 0xbf, 0xcf, 0xbf, 
	0x9f, 0x9f, 0xaf, 0xbf, 0x9f, 0x6f, 0x9f, 0xaf, 
	0x9f, 0x9f, 0x7f, 0xcf, 0x8f, 0x7f, 0x3f, 0xdf, 
	0x8f, 0x8f, 0xdf, 0xef, 0xcf, 0xbf, 0xdf, 0x7f, 
	0x9f, 0xbf, 0xaf, 0xaf, 0xbf, 0xaf, 0xcf, 0xcf, 
	0xcf, 0xaf, 0xef, 0xcf, 0xaf, 0xaf, 0xaf, 0x9f, 
	0xcf, 0xaf, 0x8f, 0xaf, 0xcf, 0xef, 0xdf, 0xef, 
	0xcf, 0xbf, 0xcf, 0xef, 0xdf, 0x9f, 0x9f, 0x8f, 
	0x7f, 0xbf, 0xcf, 0xbf, 0xaf, 0xbf, 0xef, 0x8f, 
	0x8f, 0x9f, 0x9f, 0x9f, 0xaf, 0x9f, 0xbf, 0x9f, 
	0x9f, 0x9f, 0x7f, 0x7f, 0x8f, 0x8f, 0x3f, 0x8f, 
	0x7f, 0x8f, 0xaf, 0xcf, 0xbf, 0xbf, 0xcf, 0xbf, 
	0xbf, 0x4f, 0x8f, 0x8f, 0xaf, 0xbf, 0xaf, 0x9f, 
	0xdf, 0xcf, 0xaf, 0xbf, 0xdf, 0xcf, 0x9f, 0x8f, 
	0xef, 0xbf, 0xff, 0x8f, 0xdf, 0xcf, 0xcf, 0xbf, 
	0x9f, 0x9f, 0x8f, 0x9f, 0x8f, 0xaf, 0xcf, 0x8f, 
	0xbf, 0xcf, 0xcf, 0xaf, 0x9f, 0x9f, 0xdf, 0x9f, 
	0xcf, 0x9f, 0x9f, 0xbf, 0x9f, 0xaf, 0x8f, 0x7f, 
	0x7f, 0x7f, 0x8f, 0xbf, 0x9f, 0x8f, 0x3f, 0x3f, 
	0x6f, 0x9f, 0xbf, 0xcf, 0xaf, 0xbf, 0xef, 0xdf, 
	0xcf, 0xaf, 0xcf, 0x5f, 0xff, 0xaf, 0x8f, 0xaf, 
	0xaf, 0xbf, 0x8f, 0xaf, 0x9f, 0xaf, 0xef, 0xef, 
	0xcf, 0xef, 0xef, 0x6f, 0xaf, 0xaf, 0x9f, 0xaf, 
	0xbf, 0x9f, 0x9f, 0x9f, 0x7f, 0x9f, 0x8f, 0x6f, 
	0x9f, 0xbf, 0xbf, 0xaf, 0xaf, 0x9f, 0xdf, 0x7f, 
	0x7f, 0x9f, 0x9f, 0x9f, 0xaf, 0xaf, 0x9f, 0x7f, 
	0x7f, 0xaf, 0x8f, 0x9f, 0x8f, 0x4f, 0x8f, 0x7f, 
	0x7f, 0x9f, 0xaf, 0xbf, 0xaf, 0xaf, 0xef, 0xcf, 
	0xcf, 0xcf, 0xcf, 0x9f, 0xcf, 0xaf, 0xbf, 0xaf, 
	0x5f, 0x7f, 0xaf, 0xcf, 0xaf, 0xcf, 0x9f, 0x9f, 
	0x9f, 0xaf, 0xaf, 0x9f, 0xbf, 0x8f, 0xaf, 0xaf, 
	0x9f, 0xcf, 0x9f, 0x8f, 0x8f, 0x7f, 0x7f, 0x8f, 
	0x9f, 0x9f, 0xbf, 0xaf, 0x8f, 0x8f, 0x8f, 0x6f, 
	0x7f, 0x9f, 0x8f, 0x9f, 0x8f, 0x9f, 0xcf, 0x9f, 
	0x8f, 0x9f, 0x8f, 0x8f, 0x4f, 0x3f, 0x9f, 0xef, 
	0xbf, 0x9f, 0x9f, 0xaf, 0xbf, 0xbf, 0xcf, 0xaf, 
	0xcf, 0x9f, 0x9f, 0xaf, 0x7f, 0x8f, 0x8f, 0x6f, 
	0x9f, 0x5f, 0x4f, 0x8f, 0x8f, 0xaf, 0xaf, 0x8f, 
	0xbf, 0xbf, 0xaf, 0xaf, 0xbf, 0x8f, 0x9f, 0x9f, 
	0xaf, 0x9f, 0x8f, 0x7f, 0x7f, 0x6f, 0xdf, 0x6f, 
	0x8f, 0x9f, 0xbf, 0x8f, 0x7f, 0x6f, 0x7f, 0x7f, 
	0x8f, 0x8f, 0x8f, 0xbf, 0xbf, 0x8f, 0x8f, 0x9f, 
	0xbf, 0xaf, 0xaf, 0x6f, 0x2f, 0x8f, 0x7f, 0x9f, 
	0xcf, 0x9f, 0x7f, 0xbf, 0xbf, 0xbf, 0x9f, 0xcf, 
	0xaf, 0xaf, 0xcf, 0x9f, 0xcf, 0xbf, 0x9f, 0x7f, 
	0x9f, 0x2f, 0x6f, 0x2f, 0x4f, 0x6f, 0x6f, 0x9f, 
	0x8f, 0xaf, 0x8f, 0x7f, 0xdf, 0x8f, 0x9f, 0x9f, 
	0x9f, 0x8f, 0x8f, 0x8f, 0x8f, 0x6f, 0x5f, 0x8f, 
	0xdf, 0x9f, 0x9f, 0xaf, 0x6f, 0x6f, 0x5f, 0x5f, 
	0x6f, 0x7f, 0xaf, 0x9f, 0x9f, 0xbf, 0xaf, 0xbf, 
	0x6f, 0x7f, 0x7f, 0x2f, 0x8f, 0xdf, 0xdf, 0xaf, 
	0xdf, 0xef, 0x9f, 0x7f, 0xaf, 0xbf, 0xbf, 0x9f, 
	0x9f, 0xdf, 0xbf, 0xdf, 0xcf, 0xcf, 0xdf, 0xbf, 
	0x8f, 0x3f, 0xaf, 0x5f, 0x1f, 0x1f, 0x3f, 0x5f, 
	0x2f, 0x4f, 0x6f, 0x7f, 0xaf, 0x9f, 0x9f, 0x8f, 
	0x9f, 0x8f, 0x9f, 0x8f, 0x7f, 0x9f, 0x6f, 0x7f, 
	0xaf, 0x7f, 0xaf, 0x7f, 0x6f, 0x5f, 0x5f, 0x3f, 
	0x8f, 0x8f, 0xaf, 0x8f, 0x8f, 0x8f, 0xcf, 0x7f, 
	0x6f, 0x6f, 0x2f, 0x3f, 0x8f, 0x9f, 0xdf, 0xdf, 
	0xdf, 0xbf, 0xaf, 0x7f, 0x9f, 0x9f, 0x7f, 0x7f, 
	0xaf, 0xdf, 0x9f, 0x9f, 0xaf, 0xaf, 0xbf, 0xdf, 
	0xdf, 0x9f, 0x7f, 0x5f, 0x1f, 0x1f, 0x0f, 0x0f, 
	0x0f, 0x2f, 0x4f, 0x8f, 0x7f, 0x7f, 0x8f, 0xbf, 
	0x9f, 0x7f, 0xaf, 0x8f, 0x9f, 0x7f, 0x6f, 0x9f, 
	0xdf, 0x9f, 0x9f, 0x8f, 0x8f, 0x6f, 0x7f, 0x3f, 
	0x8f, 0xaf, 0xbf, 0x8f, 0x7f, 0x8f, 0xaf, 0x8f, 
	0x2f, 0x5f, 0x3f, 0x5f, 0xbf, 0xdf, 0xcf, 0xef, 
	0xcf, 0xcf, 0x9f, 0x7f, 0xdf, 0x8f, 0x8f, 0xcf, 
	0xaf, 0x9f, 0xbf, 0xbf, 0xef, 0x9f, 0xef, 0xcf, 
	0xbf, 0xef, 0xbf, 0x9f, 0x8f, 0x2f, 0x2f, 0x1f, 
	0x0f, 0x2f, 0x0f, 0x0f, 0x1f, 0x2f, 0x2f, 0x4f, 
	0x7f, 0x9f, 0x9f, 0x9f, 0x9f, 0xbf, 0x8f, 0xcf, 
	0x8f, 0x6f, 0x8f, 0x7f, 0x6f, 0x6f, 0x4f, 0xcf, 
	0x9f, 0x6f, 0x7f, 0x8f, 0x7f, 0x3f, 0xbf, 0xaf, 
	0x4f, 0x4f, 0x4f, 0x6f, 0x9f, 0xbf, 0xdf, 0xaf, 
	0x9f, 0x8f, 0x8f, 0x9f, 0xaf, 0x6f, 0x9f, 0x7f, 
	0x7f, 0x7f, 0x9f, 0x9f, 0xef, 0x9f, 0x9f, 0x9f, 
	0xef, 0xaf, 0xbf, 0xdf, 0xbf, 0xaf, 0x2f, 0x3f, 
	0x7f, 0xef, 0x1f, 0x0f, 0x0f, 0x2f, 0x7f, 0x5f, 
	0x4f, 0x3f, 0x4f, 0x8f, 0xaf, 0xaf, 0x8f, 0x8f, 
	0x7f, 0x6f, 0x8f, 0x6f, 0x6f, 0x6f, 0x6f, 0x7f, 
	0xaf, 0x6f, 0x9f, 0xaf, 0x6f, 0x6f, 0xdf, 0xcf, 
	0xef, 0x9f, 0x4f, 0x5f, 0x6f, 0x8f, 0xaf, 0xaf, 
	0x9f, 0x7f, 0x7f, 0xaf, 0xbf, 0x8f, 0xcf, 0xbf, 
	0xaf, 0xdf, 0x9f, 0xaf, 0x9f, 0xcf, 0xdf, 0xbf, 
	0xcf, 0xaf, 0xaf, 0xbf, 0xbf, 0x9f, 0xbf, 0x6f, 
	0x4f, 0xef, 0x5f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0xaf, 0x4f, 0x2f, 0xbf, 0x8f, 0x9f, 
	0x7f, 0x5f, 0x7f, 0x7f, 0x7f, 0x6f, 0x6f, 0x5f, 
	0x7f, 0x3f, 0x6f, 0x7f, 0x4f, 0x9f, 0xbf, 0x9f, 
	0x9f, 0xbf, 0x3f, 0xaf, 0xdf, 0xcf, 0xbf, 0xdf, 
	0x9f, 0xaf, 0x6f, 0x8f, 0xbf, 0xbf, 0xaf, 0x8f, 
	0x9f, 0x9f, 0xbf, 0x8f, 0x7f, 0x9f, 0x9f, 0x9f, 
	0x9f, 0x9f, 0xcf, 0xaf, 0xaf, 0x8f, 0xbf, 0xaf, 
	0x8f, 0x2f, 0xbf, 0x8f, 0x5f, 0x2f, 0x0f, 0x1f, 
	0x0f, 0x0f, 0x1f, 0x1f, 0xdf, 0x4f, 0x6f, 0x6f, 
	0xaf, 0x7f, 0x7f, 0x8f, 0x7f, 0x6f, 0x7f, 0x5f, 
	0x7f, 0xdf, 0x8f, 0x9f, 0x7f, 0xaf, 0x8f, 0x7f, 
	0x9f, 0xbf, 0x7f, 0xbf, 0xbf, 0xbf, 0xbf, 0x9f, 
	0x7f, 0x9f, 0x6f, 0xbf, 0x8f, 0x9f, 0x7f, 0x8f, 
	0x8f, 0x8f, 0xaf, 0xbf, 0xdf, 0xbf, 0xaf, 0x9f, 
	0xbf, 0xbf, 0xaf, 0x9f, 0xbf, 0x7f, 0xbf, 0x7f, 
	0x7f, 0x7f, 0xff, 0x8f, 0x9f, 0x6f, 0x4f, 0x3f, 
	0x1f, 0x1f, 0x1f, 0x1f, 0x4f, 0x2f, 0x4f, 0x5f, 
	0x8f, 0x8f, 0x6f, 0x7f, 0x7f, 0x6f, 0x5f, 0x4f, 
	0x4f, 0xbf, 0xaf, 0x2f, 0x9f, 0xdf, 0x8f, 0x6f, 
	0x6f, 0xaf, 0x8f, 0xbf, 0xcf, 0xaf, 0x9f, 0x7f, 
	0x8f, 0x8f, 0x6f, 0xaf, 0xaf, 0xaf, 0x9f, 0xbf, 
	0xbf, 0x6f, 0xcf, 0xdf, 0xbf, 0xcf, 0xbf, 0xaf, 
	0xaf, 0xbf, 0xcf, 0xbf, 0xaf, 0xbf, 0x8f, 0xaf, 
	0xef, 0x6f, 0x8f, 0x7f, 0xcf, 0xaf, 0x8f, 0x8f, 
	0x5f, 0x4f, 0x4f, 0x3f, 0x2f, 0x4f, 0x7f, 0xbf, 
	0x6f, 0x6f, 0x5f, 0x7f, 0x7f, 0x7f, 0x6f, 0x4f, 
	0x3f, 0x5f, 0x7f, 0x7f, 0xdf, 0x9f, 0xdf, 0x7f, 
	0x7f, 0x7f, 0x7f, 0xef, 0xbf, 0xbf, 0x8f, 0xbf, 
	0x9f, 0x9f, 0x8f, 0xbf, 0xaf, 0x9f, 0xaf, 0xaf, 
	0x8f, 0x9f, 0xaf, 0xaf, 0xcf, 0xaf, 0x8f, 0x9f, 
	0xaf, 0xaf, 0xaf, 0x8f, 0x7f, 0x8f, 0x7f, 0x9f, 
	0x8f, 0x8f, 0x6f, 0x6f, 0xcf, 0xdf, 0xaf, 0xdf, 
	0xcf, 0x7f, 0xef, 0x5f, 0x6f, 0x4f, 0xef, 0x6f, 
	0x9f, 0x5f, 0x6f, 0x7f, 0x8f, 0x7f, 0x6f, 0x6f, 
	0x3f, 0x7f, 0x8f, 0x5f, 0x6f, 0xbf, 0x7f, 0x7f, 
	0x8f, 0x7f, 0x6f, 0xef, 0x8f, 0xaf, 0x9f, 0x9f, 
	0x9f, 0x8f, 0x6f, 0x7f, 0xaf, 0xbf, 0xaf, 0x9f, 
	0x5f, 0x9f, 0xbf, 0xbf, 0xaf, 0xbf, 0x9f, 0x9f, 
	0x7f, 0x9f, 0x8f, 0x8f, 0xbf, 0xef, 0xef, 0xaf, 
	0x9f, 0x8f, 0xaf, 0x5f, 0x9f, 0xcf, 0xcf, 0xef, 
	0xef, 0xdf, 0xef, 0xef, 0x9f, 0x6f, 0x7f, 0x6f, 
	0x6f, 0x9f, 0xaf, 0x9f, 0x8f, 0x8f, 0x7f, 0xef, 
	0x4f, 0xbf, 0x7f, 0x6f, 0x5f, 0x9f, 0x7f, 0x7f, 
	0x5f, 0x7f, 0x6f, 0x7f, 0xcf, 0xdf, 0x8f, 0x9f, 
	0x8f, 0xaf, 0xcf, 0xbf, 0xaf, 0x9f, 0x9f, 0x9f, 
	0x7f, 0x8f, 0xbf, 0xcf, 0xcf, 0xaf, 0x9f, 0x8f, 
	0x8f, 0xef, 0xef, 0xef, 0xaf, 0x8f, 0x9f, 0x7f, 
	0x8f, 0x9f, 0x7f, 0x4f, 0x9f, 0xbf, 0x8f, 0xef, 
	0xaf, 0x9f, 0xdf, 0xcf, 0x6f, 0xef, 0xaf, 0x8f, 
	0x8f, 0xbf, 0x8f, 0x8f, 0x8f, 0x8f, 0x6f, 0x6f, 
	0x4f, 0xef, 0x9f, 0x5f, 0x4f, 0x4f, 0x7f, 0x6f, 
	0x6f, 0x7f, 0x9f, 0x7f, 0xff, 0x7f, 0x9f, 0xaf, 
	0xcf, 0x8f, 0xaf, 0xaf, 0x9f, 0x8f, 0x8f, 0x8f, 
	0xaf, 0x6f, 0xbf, 0xdf, 0xaf, 0x9f, 0xbf, 0x8f, 
	0xbf, 0xaf, 0x7f, 0x8f, 0xaf, 0xbf, 0x9f, 0x8f, 
	
};

Vtx evilheart_Sphere_mesh_vtx_0[103] = {
	{{{-232, 475, -212},0, {1008, 1691},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-152, 486, -253},0, {1008, 1349},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-152, 486, -58},0, {667, 1349},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-232, 475, -99},0, {667, 1691},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-19, 687, -25},0, {325, 325},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-2, 704, -139},0, {155, -16},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-84, 757, -66},0, {-16, 325},{0x6A, 0x4E, 0x4C, 0xFF}}},
	{{{-64, 641, 59},0, {325, 667},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-163, 745, -25},0, {-16, 667},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-125, 578, 89},0, {325, 1008},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-237, 695, -10},0, {-16, 1008},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-186, 515, 59},0, {325, 1349},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-284, 620, -25},0, {-16, 1349},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-230, 469, -25},0, {325, 1691},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-293, 541, -66},0, {-16, 1691},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-247, 452, -139},0, {155, 2032},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-84, 757, -66},0, {2032, 325},{0x6A, 0x4E, 0x4C, 0xFF}}},
	{{{-2, 704, -139},0, {1861, -16},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-84, 757, -179},0, {1691, 325},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-163, 745, -25},0, {2032, 667},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-163, 745, -221},0, {1691, 667},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-19, 687, -252},0, {1349, 325},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-2, 704, -139},0, {1520, -16},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-64, 641, -336},0, {1349, 667},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-237, 695, -236},0, {1691, 1008},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-125, 578, -366},0, {1349, 1008},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-284, 620, -221},0, {1691, 1349},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-186, 515, -336},0, {1349, 1349},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-293, 541, -179},0, {1691, 1691},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-230, 469, -252},0, {1349, 1691},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-247, 452, -139},0, {1520, 2032},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-293, 541, -66},0, {2032, 1691},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-293, 541, -66},0, {2032, 1691},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-284, 620, -25},0, {2032, 1349},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-284, 620, -221},0, {1691, 1349},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-237, 695, -236},0, {1691, 1008},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-237, 695, -10},0, {2032, 1008},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-163, 745, -221},0, {1691, 667},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-163, 745, -25},0, {2032, 667},{0x5A, 0x5A, 0x5A, 0xFF}}},
	{{{-247, 452, -139},0, {1861, 2032},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-293, 541, -179},0, {1691, 1691},{0x8A, 0x1E, 0x0, 0xFF}}},
	{{{-52, 723, -304},0, {4948, -1027},{0x76, 0x0, 0x1, 0xFF}}},
	{{{-48, 755, -61},0, {3814, -780},{0x6E, 0x0, 0x1, 0xFF}}},
	{{{109, 742, -226},0, {4589, -75},{0x64, 0x0, 0x1, 0xFF}}},
	{{{-230, 648, -230},0, {3410, -1651},{0x7C, 0x0, 0x1, 0xFF}}},
	{{{-226, 630, -24},0, {3130, -1001},{0x5C, 0x0, 0x1, 0xFF}}},
	{{{-272, 457, 20},0, {1798, -751},{0x6B, 0x0, 0x1, 0xFF}}},
	{{{-295, 436, -260},0, {150, -1310},{0x7E, 0x0, 0x1, 0xFF}}},
	{{{-277, 322, -75},0, {1051, -304},{0x30, 0x0, 0x0, 0xFF}}},
	{{{-272, 457, 20},0, {1798, -751},{0x6B, 0x0, 0x1, 0xFF}}},
	{{{-295, 436, -260},0, {150, -1310},{0x7E, 0x0, 0x1, 0xFF}}},
	{{{-154, 62, -168},0, {459, 1459},{0x80, 0x0, 0x1, 0xFF}}},
	{{{-148, 288, -373},0, {-371, 193},{0x61, 0x0, 0x1, 0xFF}}},
	{{{-89, 493, -444},0, {-1168, -455},{0x81, 0x0, 0x1, 0xFF}}},
	{{{-230, 648, -230},0, {-2107, -2302},{0x7C, 0x0, 0x1, 0xFF}}},
	{{{-52, 723, -304},0, {-2310, -1027},{0x76, 0x0, 0x1, 0xFF}}},
	{{{180, 605, -371},0, {-2071, 596},{0x7A, 0x0, 0x1, 0xFF}}},
	{{{109, 742, -226},0, {-2670, -75},{0x64, 0x0, 0x1, 0xFF}}},
	{{{293, 614, -89},0, {-2950, 1509},{0x88, 0x0, 0x1, 0xFF}}},
	{{{301, 474, -288},0, {-2121, 1852},{0x6E, 0x0, 0x1, 0xFF}}},
	{{{324, 343, -140},0, {-2354, 3184},{0x5B, 0x0, 0x1, 0xFF}}},
	{{{127, 261, -387},0, {-1021, 1772},{0x70, 0x0, 0x1, 0xFF}}},
	{{{213, 54, -90},0, {483, 4282},{0x90, 0x0, 0x1, 0xFF}}},
	{{{69, 38, -204},0, {26, 2672},{0x67, 0x0, 0x1, 0xFF}}},
	{{{1, 2, -44},0, {731, 2608},{0x5C, 0x0, 0x1, 0xFF}}},
	{{{69, 38, -204},0, {26, 2672},{0x67, 0x0, 0x1, 0xFF}}},
	{{{213, 54, -90},0, {483, 4282},{0x90, 0x0, 0x1, 0xFF}}},
	{{{84, 24, 19},0, {983, 3128},{0x49, 0x0, 0x0, 0xFF}}},
	{{{220, 180, 105},0, {2466, 2990},{0x77, 0x0, 0x1, 0xFF}}},
	{{{324, 343, -140},0, {3680, 3778},{0x5B, 0x0, 0x1, 0xFF}}},
	{{{293, 614, -89},0, {4309, 1509},{0x88, 0x0, 0x1, 0xFF}}},
	{{{182, 521, 136},0, {3364, 1766},{0x66, 0x0, 0x1, 0xFF}}},
	{{{116, 718, 2},0, {3842, 364},{0x6E, 0x0, 0x1, 0xFF}}},
	{{{109, 742, -226},0, {4589, -75},{0x64, 0x0, 0x1, 0xFF}}},
	{{{-48, 755, -61},0, {3814, -780},{0x6E, 0x0, 0x1, 0xFF}}},
	{{{-103, 607, 122},0, {2874, -172},{0x72, 0x0, 0x1, 0xFF}}},
	{{{-226, 630, -24},0, {3130, -1001},{0x5C, 0x0, 0x1, 0xFF}}},
	{{{-272, 457, 20},0, {1798, -751},{0x6B, 0x0, 0x1, 0xFF}}},
	{{{-117, 348, 144},0, {2030, 958},{0x32, 0x0, 0x0, 0xFF}}},
	{{{-176, 77, 45},0, {1118, 1572},{0x99, 0x0, 0x1, 0xFF}}},
	{{{-272, 457, 20},0, {1798, -751},{0x6B, 0x0, 0x1, 0xFF}}},
	{{{-277, 322, -75},0, {1051, -304},{0x30, 0x0, 0x0, 0xFF}}},
	{{{-176, 77, 45},0, {1118, 1572},{0x99, 0x0, 0x1, 0xFF}}},
	{{{-154, 62, -168},0, {459, 1459},{0x80, 0x0, 0x1, 0xFF}}},
	{{{1, 2, -44},0, {731, 2608},{0x5C, 0x0, 0x1, 0xFF}}},
	{{{69, 38, -204},0, {26, 2672},{0x67, 0x0, 0x1, 0xFF}}},
	{{{-148, 288, -373},0, {-371, 193},{0x61, 0x0, 0x1, 0xFF}}},
	{{{127, 261, -387},0, {-1021, 1772},{0x70, 0x0, 0x1, 0xFF}}},
	{{{-89, 493, -444},0, {-1168, -455},{0x81, 0x0, 0x1, 0xFF}}},
	{{{107, 414, -448},0, {-1380, 885},{0x64, 0x0, 0x1, 0xFF}}},
	{{{180, 605, -371},0, {-2071, 596},{0x7A, 0x0, 0x1, 0xFF}}},
	{{{301, 474, -288},0, {-2121, 1852},{0x6E, 0x0, 0x1, 0xFF}}},
	{{{48, 117, 180},0, {1737, 2687},{0x9E, 0x0, 0x1, 0xFF}}},
	{{{84, 24, 19},0, {983, 3128},{0x49, 0x0, 0x0, 0xFF}}},
	{{{220, 180, 105},0, {2466, 2990},{0x77, 0x0, 0x1, 0xFF}}},
	{{{182, 521, 136},0, {3364, 1766},{0x66, 0x0, 0x1, 0xFF}}},
	{{{182, 521, 136},0, {3364, 1766},{0x66, 0x0, 0x1, 0xFF}}},
	{{{35, 511, 184},0, {2903, 1109},{0x5F, 0x0, 0x1, 0xFF}}},
	{{{48, 117, 180},0, {1737, 2687},{0x9E, 0x0, 0x1, 0xFF}}},
	{{{116, 718, 2},0, {3842, 364},{0x6E, 0x0, 0x1, 0xFF}}},
	{{{-103, 607, 122},0, {2874, -172},{0x72, 0x0, 0x1, 0xFF}}},
	{{{-117, 348, 144},0, {2030, 958},{0x32, 0x0, 0x0, 0xFF}}},
	{{{-176, 77, 45},0, {1118, 1572},{0x99, 0x0, 0x1, 0xFF}}},
};

Gfx evilheart_Sphere_mesh_tri_0[] = {
	gsSPVertex(evilheart_Sphere_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 4, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(evilheart_Sphere_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(2, 6, 5, 0),
	gsSP1Triangle(4, 5, 7, 0),
	gsSP1Triangle(8, 4, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(15, 10, 12, 0),
	gsSPVertex(evilheart_Sphere_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(7, 0, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 9, 12, 0),
	gsSP1Triangle(13, 10, 12, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 12, 15, 0),
	gsSPVertex(evilheart_Sphere_mesh_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(2, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(evilheart_Sphere_mesh_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(5, 4, 2, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(9, 8, 6, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(14, 11, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(evilheart_Sphere_mesh_vtx_0 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 7, 0),
	gsSP1Triangle(4, 12, 2, 0),
	gsSP1Triangle(12, 4, 13, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(15, 12, 14, 0),
	gsSPVertex(evilheart_Sphere_mesh_vtx_0 + 96, 7, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(4, 5, 1, 0),
	gsSP1Triangle(1, 5, 2, 0),
	gsSP1Triangle(5, 6, 2, 0),
	gsSPEndDisplayList(),
};


Gfx mat_evilheart_sm64_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b, 64, evilheart_meat_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(evilheart_sm64_material_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_evilheart_sm64_material[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx evilheart_Sphere_mesh[] = {
	gsSPDisplayList(mat_evilheart_sm64_material),
	gsSPDisplayList(evilheart_Sphere_mesh_tri_0),
	gsSPDisplayList(mat_revert_evilheart_sm64_material),
	gsSPEndDisplayList(),
};

Gfx evilheart_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
