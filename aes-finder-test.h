#pragma once

#include <stdint.h>
#include <string.h>

static void self_test()
{
    static const uint32_t aes128_encB[] = {
        0x00010203, 0x04050607, 0x08090a0b, 0x0c0d0e0f,
        0xd6aa74fd, 0xd2af72fa, 0xdaa678f1, 0xd6ab76fe,
        0xb692cf0b, 0x643dbdf1, 0xbe9bc500, 0x6830b3fe,
        0xb6ff744e, 0xd2c2c9bf, 0x6c590cbf, 0x0469bf41,
        0x47f7f7bc, 0x95353e03, 0xf96c32bc, 0xfd058dfd,
        0x3caaa3e8, 0xa99f9deb, 0x50f3af57, 0xadf622aa,
        0x5e390f7d, 0xf7a69296, 0xa7553dc1, 0x0aa31f6b,
        0x14f9701a, 0xe35fe28c, 0x440adf4d, 0x4ea9c026,
        0x47438735, 0xa41c65b9, 0xe016baf4, 0xaebf7ad2,
        0x549932d1, 0xf0855768, 0x1093ed9c, 0xbe2c974e,
        0x13111d7f, 0xe3944a17, 0xf307a78b, 0x4d2b30c5,
    };
    static const uint32_t aes128_encL[] = {
        0x03020100, 0x07060504, 0x0b0a0908, 0x0f0e0d0c,
        0xfd74aad6, 0xfa72afd2, 0xf178a6da, 0xfe76abd6,
        0x0bcf92b6, 0xf1bd3d64, 0x00c59bbe, 0xfeb33068,
        0x4e74ffb6, 0xbfc9c2d2, 0xbf0c596c, 0x41bf6904,
        0xbcf7f747, 0x033e3595, 0xbc326cf9, 0xfd8d05fd,
        0xe8a3aa3c, 0xeb9d9fa9, 0x57aff350, 0xaa22f6ad,
        0x7d0f395e, 0x9692a6f7, 0xc13d55a7, 0x6b1fa30a,
        0x1a70f914, 0x8ce25fe3, 0x4ddf0a44, 0x26c0a94e,
        0x35874347, 0xb9651ca4, 0xf4ba16e0, 0xd27abfae,
        0xd1329954, 0x685785f0, 0x9ced9310, 0x4e972cbe,
        0x7f1d1113, 0x174a94e3, 0x8ba707f3, 0xc5302b4d,
    };
    static const uint32_t aes192_encB[] = {
        0x00010203, 0x04050607, 0x08090a0b, 0x0c0d0e0f,
        0x10111213, 0x14151617, 0x5846f2f9, 0x5c43f4fe,
        0x544afef5, 0x5847f0fa, 0x4856e2e9, 0x5c43f4fe,
        0x40f949b3, 0x1cbabd4d, 0x48f043b8, 0x10b7b342,
        0x58e151ab, 0x04a2a555, 0x7effb541, 0x6245080c,
        0x2ab54bb4, 0x3a02f8f6, 0x62e3a95d, 0x66410c08,
        0xf5018572, 0x97448d7e, 0xbdf1c6ca, 0x87f33e3c,
        0xe5109761, 0x83519b69, 0x34157c9e, 0xa351f1e0,
        0x1ea0372a, 0x99530916, 0x7c439e77, 0xff12051e,
        0xdd7e0e88, 0x7e2fff68, 0x608fc842, 0xf9dcc154,
        0x859f5f23, 0x7a8d5a3d, 0xc0c02952, 0xbeefd63a,
        0xde601e78, 0x27bcdf2c, 0xa223800f, 0xd8aeda32,
        0xa4970a33, 0x1a78dc09, 0xc418c271, 0xe3a41d5d,
    };
    static const uint32_t aes192_encL[] = {
        0x03020100, 0x07060504, 0x0b0a0908, 0x0f0e0d0c,
        0x13121110, 0x17161514, 0xf9f24658, 0xfef4435c,
        0xf5fe4a54, 0xfaf04758, 0xe9e25648, 0xfef4435c,
        0xb349f940, 0x4dbdba1c, 0xb843f048, 0x42b3b710,
        0xab51e158, 0x55a5a204, 0x41b5ff7e, 0x0c084562,
        0xb44bb52a, 0xf6f8023a, 0x5da9e362, 0x080c4166,
        0x728501f5, 0x7e8d4497, 0xcac6f1bd, 0x3c3ef387,
        0x619710e5, 0x699b5183, 0x9e7c1534, 0xe0f151a3,
        0x2a37a01e, 0x16095399, 0x779e437c, 0x1e0512ff,
        0x880e7edd, 0x68ff2f7e, 0x42c88f60, 0x54c1dcf9,
        0x235f9f85, 0x3d5a8d7a, 0x5229c0c0, 0x3ad6efbe,
        0x781e60de, 0x2cdfbc27, 0x0f8023a2, 0x32daaed8,
        0x330a97a4, 0x09dc781a, 0x71c218c4, 0x5d1da4e3,

    };
    static const uint32_t aes256_encB[] = {
        0x00010203, 0x04050607, 0x08090a0b, 0x0c0d0e0f,
        0x10111213, 0x14151617, 0x18191a1b, 0x1c1d1e1f,
        0xa573c29f, 0xa176c498, 0xa97fce93, 0xa572c09c,
        0x1651a8cd, 0x0244beda, 0x1a5da4c1, 0x0640bade,
        0xae87dff0, 0x0ff11b68, 0xa68ed5fb, 0x03fc1567,
        0x6de1f148, 0x6fa54f92, 0x75f8eb53, 0x73b8518d,
        0xc656827f, 0xc9a79917, 0x6f294cec, 0x6cd5598b,
        0x3de23a75, 0x524775e7, 0x27bf9eb4, 0x5407cf39,
        0x0bdc905f, 0xc27b0948, 0xad5245a4, 0xc1871c2f,
        0x45f5a660, 0x17b2d387, 0x300d4d33, 0x640a820a,
        0x7ccff71c, 0xbeb4fe54, 0x13e6bbf0, 0xd261a7df,
        0xf01afafe, 0xe7a82979, 0xd7a5644a, 0xb3afe640,
        0x2541fe71, 0x9bf50025, 0x8813bbd5, 0x5a721c0a,
        0x4e5a6699, 0xa9f24fe0, 0x7e572baa, 0xcdf8cdea,
        0x24fc79cc, 0xbf0979e9, 0x371ac23c, 0x6d68de36,
    };
    static const uint32_t aes256_encL[] = {
        0x03020100, 0x07060504, 0x0b0a0908, 0x0f0e0d0c,
        0x13121110, 0x17161514, 0x1b1a1918, 0x1f1e1d1c,
        0x9fc273a5, 0x98c476a1, 0x93ce7fa9, 0x9cc072a5,
        0xcda85116, 0xdabe4402, 0xc1a45d1a, 0xdeba4006,
        0xf0df87ae, 0x681bf10f, 0xfbd58ea6, 0x6715fc03,
        0x48f1e16d, 0x924fa56f, 0x53ebf875, 0x8d51b873,
        0x7f8256c6, 0x1799a7c9, 0xec4c296f, 0x8b59d56c,
        0x753ae23d, 0xe7754752, 0xb49ebf27, 0x39cf0754,
        0x5f90dc0b, 0x48097bc2, 0xa44552ad, 0x2f1c87c1,
        0x60a6f545, 0x87d3b217, 0x334d0d30, 0x0a820a64,
        0x1cf7cf7c, 0x54feb4be, 0xf0bbe613, 0xdfa761d2,
        0xfefa1af0, 0x7929a8e7, 0x4a64a5d7, 0x40e6afb3,
        0x71fe4125, 0x2500f59b, 0xd5bb1388, 0x0a1c725a,
        0x99665a4e, 0xe04ff2a9, 0xaa2b577e, 0xeacdf8cd,
        0xcc79fc24, 0xe97909bf, 0x3cc21a37, 0x36de686d,
    };

    static const uint32_t aes128_decBF[] = {
        0x00010203, 0x04050607, 0x08090a0b, 0x0c0d0e0f,
        0x8c56dff0, 0x825dd3f9, 0x805ad3fc, 0x8659d7fd,
        0xa0db0299, 0x2286d160, 0xa2dc029c, 0x2485d561,
        0xc7c6e391, 0xe54032f1, 0x479c306d, 0x6319e50c,
        0xa8a2f504, 0x4de2c7f5, 0x0a7ef798, 0x69671294,
        0x2ec41027, 0x6326d7d2, 0x6958204a, 0x003f32de,
        0x72e3098d, 0x11c5de5f, 0x789dfe15, 0x78a2cccb,
        0x8d82fc74, 0x9c47222b, 0xe4dadc3e, 0x9c7810f5,
        0x1362a463, 0x8f258648, 0x6bff5a76, 0xf7874a83,
        0x13aa29be, 0x9c8faff6, 0xf770f580, 0x00f7bf03,
        0x13111d7f, 0xe3944a17, 0xf307a78b, 0x4d2b30c5,
    };
    static const uint32_t aes128_decBB[] = {
        0x13111d7f, 0xe3944a17, 0xf307a78b, 0x4d2b30c5,
        0x13aa29be, 0x9c8faff6, 0xf770f580, 0x00f7bf03,
        0x1362a463, 0x8f258648, 0x6bff5a76, 0xf7874a83,
        0x8d82fc74, 0x9c47222b, 0xe4dadc3e, 0x9c7810f5,
        0x72e3098d, 0x11c5de5f, 0x789dfe15, 0x78a2cccb,
        0x2ec41027, 0x6326d7d2, 0x6958204a, 0x003f32de,
        0xa8a2f504, 0x4de2c7f5, 0x0a7ef798, 0x69671294,
        0xc7c6e391, 0xe54032f1, 0x479c306d, 0x6319e50c,
        0xa0db0299, 0x2286d160, 0xa2dc029c, 0x2485d561,
        0x8c56dff0, 0x825dd3f9, 0x805ad3fc, 0x8659d7fd,
        0x00010203, 0x04050607, 0x08090a0b, 0x0c0d0e0f,
    };
    static const uint32_t aes128_decLF[] = {
        0x03020100, 0x07060504, 0x0b0a0908, 0x0f0e0d0c,
        0xf0df568c, 0xf9d35d82, 0xfcd35a80, 0xfdd75986,
        0x9902dba0, 0x60d18622, 0x9c02dca2, 0x61d58524,
        0x91e3c6c7, 0xf13240e5, 0x6d309c47, 0x0ce51963,
        0x04f5a2a8, 0xf5c7e24d, 0x98f77e0a, 0x94126769,
        0x2710c42e, 0xd2d72663, 0x4a205869, 0xde323f00,
        0x8d09e372, 0x5fdec511, 0x15fe9d78, 0xcbcca278,
        0x74fc828d, 0x2b22479c, 0x3edcdae4, 0xf510789c,
        0x63a46213, 0x4886258f, 0x765aff6b, 0x834a87f7,
        0xbe29aa13, 0xf6af8f9c, 0x80f570f7, 0x03bff700,
        0x7f1d1113, 0x174a94e3, 0x8ba707f3, 0xc5302b4d,
    };
    static const uint32_t aes128_decLB[] = {
        0x7f1d1113, 0x174a94e3, 0x8ba707f3, 0xc5302b4d,
        0xbe29aa13, 0xf6af8f9c, 0x80f570f7, 0x03bff700,
        0x63a46213, 0x4886258f, 0x765aff6b, 0x834a87f7,
        0x74fc828d, 0x2b22479c, 0x3edcdae4, 0xf510789c,
        0x8d09e372, 0x5fdec511, 0x15fe9d78, 0xcbcca278,
        0x2710c42e, 0xd2d72663, 0x4a205869, 0xde323f00,
        0x04f5a2a8, 0xf5c7e24d, 0x98f77e0a, 0x94126769,
        0x91e3c6c7, 0xf13240e5, 0x6d309c47, 0x0ce51963,
        0x9902dba0, 0x60d18622, 0x9c02dca2, 0x61d58524,
        0xf0df568c, 0xf9d35d82, 0xfcd35a80, 0xfdd75986,
        0x03020100, 0x07060504, 0x0b0a0908, 0x0f0e0d0c,
    };
    static const uint32_t aes192_decBF[] = {
        0x00010203, 0x04050607, 0x08090a0b, 0x0c0d0e0f,
        0x1a1f181d, 0x1e1b1c19, 0x4742c7d7, 0x4949cbde,
        0x4b4ecbdb, 0x4d4dcfda, 0x5752d7c7, 0x4949cbde,
        0x60dcef10, 0x299524ce, 0x62dbef15, 0x2f9620cf,
        0x78c4f708, 0x318d3cd6, 0x9655b701, 0xbfc093cf,
        0xdd1b7cda, 0xf28d5c15, 0x8a49ab1d, 0xbbc497cb,
        0xc6deb0ab, 0x791e2364, 0xa4055fbe, 0x568803ab,
        0xdcc1a8b6, 0x67053f7d, 0xcc5c194a, 0xb5423a2e,
        0x11476590, 0x47cf663b, 0x9b0ece8d, 0xfc0bf1f0,
        0xf77d6ec1, 0x423f54ef, 0x5378317f, 0x14b75744,
        0x8fb999c9, 0x73b26839, 0xc7f9d89d, 0x85c68c72,
        0xd6bebd0d, 0xc209ea49, 0x4db07380, 0x3e021bb9,
        0xa4970a33, 0x1a78dc09, 0xc418c271, 0xe3a41d5d,
    };
    static const uint32_t aes192_decBB[] = {
        0xa4970a33, 0x1a78dc09, 0xc418c271, 0xe3a41d5d,
        0xd6bebd0d, 0xc209ea49, 0x4db07380, 0x3e021bb9,
        0x8fb999c9, 0x73b26839, 0xc7f9d89d, 0x85c68c72,
        0xf77d6ec1, 0x423f54ef, 0x5378317f, 0x14b75744,
        0x11476590, 0x47cf663b, 0x9b0ece8d, 0xfc0bf1f0,
        0xdcc1a8b6, 0x67053f7d, 0xcc5c194a, 0xb5423a2e,
        0xc6deb0ab, 0x791e2364, 0xa4055fbe, 0x568803ab,
        0xdd1b7cda, 0xf28d5c15, 0x8a49ab1d, 0xbbc497cb,
        0x78c4f708, 0x318d3cd6, 0x9655b701, 0xbfc093cf,
        0x60dcef10, 0x299524ce, 0x62dbef15, 0x2f9620cf,
        0x4b4ecbdb, 0x4d4dcfda, 0x5752d7c7, 0x4949cbde,
        0x1a1f181d, 0x1e1b1c19, 0x4742c7d7, 0x4949cbde,
        0x00010203, 0x04050607, 0x08090a0b, 0x0c0d0e0f,
    };
    static const uint32_t aes192_decLF[] = {
        0x03020100, 0x07060504, 0x0b0a0908, 0x0f0e0d0c,
        0x1d181f1a, 0x191c1b1e, 0xd7c74247, 0xdecb4949,
        0xdbcb4e4b, 0xdacf4d4d, 0xc7d75257, 0xdecb4949,
        0x10efdc60, 0xce249529, 0x15efdb62, 0xcf20962f,
        0x08f7c478, 0xd63c8d31, 0x01b75596, 0xcf93c0bf,
        0xda7c1bdd, 0x155c8df2, 0x1dab498a, 0xcb97c4bb,
        0xabb0dec6, 0x64231e79, 0xbe5f05a4, 0xab038856,
        0xb6a8c1dc, 0x7d3f0567, 0x4a195ccc, 0x2e3a42b5,
        0x90654711, 0x3b66cf47, 0x8dce0e9b, 0xf0f10bfc,
        0xc16e7df7, 0xef543f42, 0x7f317853, 0x4457b714,
        0xc999b98f, 0x3968b273, 0x9dd8f9c7, 0x728cc685,
        0x0dbdbed6, 0x49ea09c2, 0x8073b04d, 0xb91b023e,
        0x330a97a4, 0x09dc781a, 0x71c218c4, 0x5d1da4e3,
    };
    static const uint32_t aes192_decLB[] = {
        0x330a97a4, 0x09dc781a, 0x71c218c4, 0x5d1da4e3,
        0x0dbdbed6, 0x49ea09c2, 0x8073b04d, 0xb91b023e,
        0xc999b98f, 0x3968b273, 0x9dd8f9c7, 0x728cc685,
        0xc16e7df7, 0xef543f42, 0x7f317853, 0x4457b714,
        0x90654711, 0x3b66cf47, 0x8dce0e9b, 0xf0f10bfc,
        0xb6a8c1dc, 0x7d3f0567, 0x4a195ccc, 0x2e3a42b5,
        0xabb0dec6, 0x64231e79, 0xbe5f05a4, 0xab038856,
        0xda7c1bdd, 0x155c8df2, 0x1dab498a, 0xcb97c4bb,
        0x08f7c478, 0xd63c8d31, 0x01b75596, 0xcf93c0bf,
        0x10efdc60, 0xce249529, 0x15efdb62, 0xcf20962f,
        0xdbcb4e4b, 0xdacf4d4d, 0xc7d75257, 0xdecb4949,
        0x1d181f1a, 0x191c1b1e, 0xd7c74247, 0xdecb4949,
        0x03020100, 0x07060504, 0x0b0a0908, 0x0f0e0d0c,
    };
    static const uint32_t aes256_decBF[] = { 
        0x00010203, 0x04050607, 0x08090a0b, 0x0c0d0e0f,
        0x1a1f181d, 0x1e1b1c19, 0x12171015, 0x16131411,
        0x2a2840c9, 0x24234cc0, 0x26244cc5, 0x202748c4,
        0x7fd7850f, 0x61cc9916, 0x73db8903, 0x65c89d12,
        0x15c668bd, 0x31e5247d, 0x17c168b8, 0x37e6207c,
        0xaed55816, 0xcf19c100, 0xbcc24803, 0xd90ad511,
        0xde69409a, 0xef8c64e7, 0xf84d0c5f, 0xcfab2c23,
        0xf85fc4f3, 0x374605f3, 0x8b844df0, 0x528e98e1,
        0x3ca69715, 0xd32af3f2, 0x2b67ffad, 0xe4ccd38e,
        0x74da7ba3, 0x439c7e50, 0xc81833a0, 0x9a96ab41,
        0xb5708e13, 0x665a7de1, 0x4d3d824c, 0xa9f151c2,
        0xc8a30580, 0x8b3f7bd0, 0x43274870, 0xd9b1e331,
        0x5e1648eb, 0x384c350a, 0x7571b746, 0xdc80e684,
        0x34f1d1ff, 0xbfceaa2f, 0xfce9e25f, 0x2558016e,
        0x24fc79cc, 0xbf0979e9, 0x371ac23c, 0x6d68de36,
    };
    static const uint32_t aes256_decBB[] = { 
        0x24fc79cc, 0xbf0979e9, 0x371ac23c, 0x6d68de36,
        0x34f1d1ff, 0xbfceaa2f, 0xfce9e25f, 0x2558016e,
        0x5e1648eb, 0x384c350a, 0x7571b746, 0xdc80e684,
        0xc8a30580, 0x8b3f7bd0, 0x43274870, 0xd9b1e331,
        0xb5708e13, 0x665a7de1, 0x4d3d824c, 0xa9f151c2,
        0x74da7ba3, 0x439c7e50, 0xc81833a0, 0x9a96ab41,
        0x3ca69715, 0xd32af3f2, 0x2b67ffad, 0xe4ccd38e,
        0xf85fc4f3, 0x374605f3, 0x8b844df0, 0x528e98e1,
        0xde69409a, 0xef8c64e7, 0xf84d0c5f, 0xcfab2c23,
        0xaed55816, 0xcf19c100, 0xbcc24803, 0xd90ad511,
        0x15c668bd, 0x31e5247d, 0x17c168b8, 0x37e6207c,
        0x7fd7850f, 0x61cc9916, 0x73db8903, 0x65c89d12,
        0x2a2840c9, 0x24234cc0, 0x26244cc5, 0x202748c4,
        0x1a1f181d, 0x1e1b1c19, 0x12171015, 0x16131411,
        0x00010203, 0x04050607, 0x08090a0b, 0x0c0d0e0f,
    };
    static const uint32_t aes256_decLF[] = { 
        0x03020100, 0x07060504, 0x0b0a0908, 0x0f0e0d0c,
        0x1d181f1a, 0x191c1b1e, 0x15101712, 0x11141316,
        0xc940282a, 0xc04c2324, 0xc54c2426, 0xc4482720,
        0x0f85d77f, 0x1699cc61, 0x0389db73, 0x129dc865,
        0xbd68c615, 0x7d24e531, 0xb868c117, 0x7c20e637,
        0x1658d5ae, 0x00c119cf, 0x0348c2bc, 0x11d50ad9,
        0x9a4069de, 0xe7648cef, 0x5f0c4df8, 0x232cabcf,
        0xf3c45ff8, 0xf3054637, 0xf04d848b, 0xe1988e52,
        0x1597a63c, 0xf2f32ad3, 0xadff672b, 0x8ed3cce4,
        0xa37bda74, 0x507e9c43, 0xa03318c8, 0x41ab969a,
        0x138e70b5, 0xe17d5a66, 0x4c823d4d, 0xc251f1a9,
        0x8005a3c8, 0xd07b3f8b, 0x70482743, 0x31e3b1d9,
        0xeb48165e, 0x0a354c38, 0x46b77175, 0x84e680dc,
        0xffd1f134, 0x2faacebf, 0x5fe2e9fc, 0x6e015825,
        0xcc79fc24, 0xe97909bf, 0x3cc21a37, 0x36de686d,
    };
    static const uint32_t aes256_decLB[] = { 
        0xcc79fc24, 0xe97909bf, 0x3cc21a37, 0x36de686d,
        0xffd1f134, 0x2faacebf, 0x5fe2e9fc, 0x6e015825,
        0xeb48165e, 0x0a354c38, 0x46b77175, 0x84e680dc,
        0x8005a3c8, 0xd07b3f8b, 0x70482743, 0x31e3b1d9,
        0x138e70b5, 0xe17d5a66, 0x4c823d4d, 0xc251f1a9,
        0xa37bda74, 0x507e9c43, 0xa03318c8, 0x41ab969a,
        0x1597a63c, 0xf2f32ad3, 0xadff672b, 0x8ed3cce4,
        0xf3c45ff8, 0xf3054637, 0xf04d848b, 0xe1988e52,
        0x9a4069de, 0xe7648cef, 0x5f0c4df8, 0x232cabcf,
        0x1658d5ae, 0x00c119cf, 0x0348c2bc, 0x11d50ad9,
        0xbd68c615, 0x7d24e531, 0xb868c117, 0x7c20e637,
        0x0f85d77f, 0x1699cc61, 0x0389db73, 0x129dc865,
        0xc940282a, 0xc04c2324, 0xc54c2426, 0xc4482720,
        0x1d181f1a, 0x191c1b1e, 0x15101712, 0x11141316,
        0x03020100, 0x07060504, 0x0b0a0908, 0x0f0e0d0c,
    };

    static const uint8_t aes_key[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
    };

    uint8_t tmp[32];

#define AES_CHECK(fun, reverse, arr, len)                              \
    if (!fun<reverse>(arr, tmp) || memcmp(aes_key, tmp, len) != 0)     \
    {                                                                  \
        printf("Self-test %s<%s>(%s) failed\n", #fun, #reverse, #arr); \
        abort();                                                       \
    }                                                                  \
    else                                                               \
    {                                                                  \
        memset(tmp, 0, sizeof(tmp));                                   \
    }                                                                  \

    AES_CHECK(aes128_detect_enc, true, aes128_encB, 16);
    AES_CHECK(aes128_detect_enc, false, aes128_encL, 16);

    AES_CHECK(aes192_detect_enc, true, aes192_encB, 24);
    AES_CHECK(aes192_detect_enc, false, aes192_encL, 24);

    AES_CHECK(aes256_detect_enc, true, aes256_encB, 32);
    AES_CHECK(aes256_detect_enc, false, aes256_encL, 32);

    AES_CHECK(aes128_detect_decF, true, aes128_decBF, 16);
    AES_CHECK(aes128_detect_decF, false, aes128_decLF, 16);

    AES_CHECK(aes128_detect_decB, true, aes128_decBB, 16);
    AES_CHECK(aes128_detect_decB, false, aes128_decLB, 16);

    AES_CHECK(aes192_detect_decF, true, aes192_decBF, 24);
    AES_CHECK(aes192_detect_decF, false, aes192_decLF, 24);

    AES_CHECK(aes192_detect_decB, true, aes192_decBB, 24);
    AES_CHECK(aes192_detect_decB, false, aes192_decLB, 24);

    AES_CHECK(aes256_detect_decF, true, aes256_decBF, 32);
    AES_CHECK(aes256_detect_decF, false, aes256_decLF, 32);

    AES_CHECK(aes256_detect_decB, true, aes256_decBB, 32);
    AES_CHECK(aes256_detect_decB, false, aes256_decLB, 32);

#undef AES_CHECK
}
