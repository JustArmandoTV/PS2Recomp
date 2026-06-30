#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A1830
// Address: 0x4a1830 - 0x4a2330
void sub_004A1830_0x4a1830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1830_0x4a1830");
#endif

    switch (ctx->pc) {
        case 0x4a1830u: goto label_4a1830;
        case 0x4a1834u: goto label_4a1834;
        case 0x4a1838u: goto label_4a1838;
        case 0x4a183cu: goto label_4a183c;
        case 0x4a1840u: goto label_4a1840;
        case 0x4a1844u: goto label_4a1844;
        case 0x4a1848u: goto label_4a1848;
        case 0x4a184cu: goto label_4a184c;
        case 0x4a1850u: goto label_4a1850;
        case 0x4a1854u: goto label_4a1854;
        case 0x4a1858u: goto label_4a1858;
        case 0x4a185cu: goto label_4a185c;
        case 0x4a1860u: goto label_4a1860;
        case 0x4a1864u: goto label_4a1864;
        case 0x4a1868u: goto label_4a1868;
        case 0x4a186cu: goto label_4a186c;
        case 0x4a1870u: goto label_4a1870;
        case 0x4a1874u: goto label_4a1874;
        case 0x4a1878u: goto label_4a1878;
        case 0x4a187cu: goto label_4a187c;
        case 0x4a1880u: goto label_4a1880;
        case 0x4a1884u: goto label_4a1884;
        case 0x4a1888u: goto label_4a1888;
        case 0x4a188cu: goto label_4a188c;
        case 0x4a1890u: goto label_4a1890;
        case 0x4a1894u: goto label_4a1894;
        case 0x4a1898u: goto label_4a1898;
        case 0x4a189cu: goto label_4a189c;
        case 0x4a18a0u: goto label_4a18a0;
        case 0x4a18a4u: goto label_4a18a4;
        case 0x4a18a8u: goto label_4a18a8;
        case 0x4a18acu: goto label_4a18ac;
        case 0x4a18b0u: goto label_4a18b0;
        case 0x4a18b4u: goto label_4a18b4;
        case 0x4a18b8u: goto label_4a18b8;
        case 0x4a18bcu: goto label_4a18bc;
        case 0x4a18c0u: goto label_4a18c0;
        case 0x4a18c4u: goto label_4a18c4;
        case 0x4a18c8u: goto label_4a18c8;
        case 0x4a18ccu: goto label_4a18cc;
        case 0x4a18d0u: goto label_4a18d0;
        case 0x4a18d4u: goto label_4a18d4;
        case 0x4a18d8u: goto label_4a18d8;
        case 0x4a18dcu: goto label_4a18dc;
        case 0x4a18e0u: goto label_4a18e0;
        case 0x4a18e4u: goto label_4a18e4;
        case 0x4a18e8u: goto label_4a18e8;
        case 0x4a18ecu: goto label_4a18ec;
        case 0x4a18f0u: goto label_4a18f0;
        case 0x4a18f4u: goto label_4a18f4;
        case 0x4a18f8u: goto label_4a18f8;
        case 0x4a18fcu: goto label_4a18fc;
        case 0x4a1900u: goto label_4a1900;
        case 0x4a1904u: goto label_4a1904;
        case 0x4a1908u: goto label_4a1908;
        case 0x4a190cu: goto label_4a190c;
        case 0x4a1910u: goto label_4a1910;
        case 0x4a1914u: goto label_4a1914;
        case 0x4a1918u: goto label_4a1918;
        case 0x4a191cu: goto label_4a191c;
        case 0x4a1920u: goto label_4a1920;
        case 0x4a1924u: goto label_4a1924;
        case 0x4a1928u: goto label_4a1928;
        case 0x4a192cu: goto label_4a192c;
        case 0x4a1930u: goto label_4a1930;
        case 0x4a1934u: goto label_4a1934;
        case 0x4a1938u: goto label_4a1938;
        case 0x4a193cu: goto label_4a193c;
        case 0x4a1940u: goto label_4a1940;
        case 0x4a1944u: goto label_4a1944;
        case 0x4a1948u: goto label_4a1948;
        case 0x4a194cu: goto label_4a194c;
        case 0x4a1950u: goto label_4a1950;
        case 0x4a1954u: goto label_4a1954;
        case 0x4a1958u: goto label_4a1958;
        case 0x4a195cu: goto label_4a195c;
        case 0x4a1960u: goto label_4a1960;
        case 0x4a1964u: goto label_4a1964;
        case 0x4a1968u: goto label_4a1968;
        case 0x4a196cu: goto label_4a196c;
        case 0x4a1970u: goto label_4a1970;
        case 0x4a1974u: goto label_4a1974;
        case 0x4a1978u: goto label_4a1978;
        case 0x4a197cu: goto label_4a197c;
        case 0x4a1980u: goto label_4a1980;
        case 0x4a1984u: goto label_4a1984;
        case 0x4a1988u: goto label_4a1988;
        case 0x4a198cu: goto label_4a198c;
        case 0x4a1990u: goto label_4a1990;
        case 0x4a1994u: goto label_4a1994;
        case 0x4a1998u: goto label_4a1998;
        case 0x4a199cu: goto label_4a199c;
        case 0x4a19a0u: goto label_4a19a0;
        case 0x4a19a4u: goto label_4a19a4;
        case 0x4a19a8u: goto label_4a19a8;
        case 0x4a19acu: goto label_4a19ac;
        case 0x4a19b0u: goto label_4a19b0;
        case 0x4a19b4u: goto label_4a19b4;
        case 0x4a19b8u: goto label_4a19b8;
        case 0x4a19bcu: goto label_4a19bc;
        case 0x4a19c0u: goto label_4a19c0;
        case 0x4a19c4u: goto label_4a19c4;
        case 0x4a19c8u: goto label_4a19c8;
        case 0x4a19ccu: goto label_4a19cc;
        case 0x4a19d0u: goto label_4a19d0;
        case 0x4a19d4u: goto label_4a19d4;
        case 0x4a19d8u: goto label_4a19d8;
        case 0x4a19dcu: goto label_4a19dc;
        case 0x4a19e0u: goto label_4a19e0;
        case 0x4a19e4u: goto label_4a19e4;
        case 0x4a19e8u: goto label_4a19e8;
        case 0x4a19ecu: goto label_4a19ec;
        case 0x4a19f0u: goto label_4a19f0;
        case 0x4a19f4u: goto label_4a19f4;
        case 0x4a19f8u: goto label_4a19f8;
        case 0x4a19fcu: goto label_4a19fc;
        case 0x4a1a00u: goto label_4a1a00;
        case 0x4a1a04u: goto label_4a1a04;
        case 0x4a1a08u: goto label_4a1a08;
        case 0x4a1a0cu: goto label_4a1a0c;
        case 0x4a1a10u: goto label_4a1a10;
        case 0x4a1a14u: goto label_4a1a14;
        case 0x4a1a18u: goto label_4a1a18;
        case 0x4a1a1cu: goto label_4a1a1c;
        case 0x4a1a20u: goto label_4a1a20;
        case 0x4a1a24u: goto label_4a1a24;
        case 0x4a1a28u: goto label_4a1a28;
        case 0x4a1a2cu: goto label_4a1a2c;
        case 0x4a1a30u: goto label_4a1a30;
        case 0x4a1a34u: goto label_4a1a34;
        case 0x4a1a38u: goto label_4a1a38;
        case 0x4a1a3cu: goto label_4a1a3c;
        case 0x4a1a40u: goto label_4a1a40;
        case 0x4a1a44u: goto label_4a1a44;
        case 0x4a1a48u: goto label_4a1a48;
        case 0x4a1a4cu: goto label_4a1a4c;
        case 0x4a1a50u: goto label_4a1a50;
        case 0x4a1a54u: goto label_4a1a54;
        case 0x4a1a58u: goto label_4a1a58;
        case 0x4a1a5cu: goto label_4a1a5c;
        case 0x4a1a60u: goto label_4a1a60;
        case 0x4a1a64u: goto label_4a1a64;
        case 0x4a1a68u: goto label_4a1a68;
        case 0x4a1a6cu: goto label_4a1a6c;
        case 0x4a1a70u: goto label_4a1a70;
        case 0x4a1a74u: goto label_4a1a74;
        case 0x4a1a78u: goto label_4a1a78;
        case 0x4a1a7cu: goto label_4a1a7c;
        case 0x4a1a80u: goto label_4a1a80;
        case 0x4a1a84u: goto label_4a1a84;
        case 0x4a1a88u: goto label_4a1a88;
        case 0x4a1a8cu: goto label_4a1a8c;
        case 0x4a1a90u: goto label_4a1a90;
        case 0x4a1a94u: goto label_4a1a94;
        case 0x4a1a98u: goto label_4a1a98;
        case 0x4a1a9cu: goto label_4a1a9c;
        case 0x4a1aa0u: goto label_4a1aa0;
        case 0x4a1aa4u: goto label_4a1aa4;
        case 0x4a1aa8u: goto label_4a1aa8;
        case 0x4a1aacu: goto label_4a1aac;
        case 0x4a1ab0u: goto label_4a1ab0;
        case 0x4a1ab4u: goto label_4a1ab4;
        case 0x4a1ab8u: goto label_4a1ab8;
        case 0x4a1abcu: goto label_4a1abc;
        case 0x4a1ac0u: goto label_4a1ac0;
        case 0x4a1ac4u: goto label_4a1ac4;
        case 0x4a1ac8u: goto label_4a1ac8;
        case 0x4a1accu: goto label_4a1acc;
        case 0x4a1ad0u: goto label_4a1ad0;
        case 0x4a1ad4u: goto label_4a1ad4;
        case 0x4a1ad8u: goto label_4a1ad8;
        case 0x4a1adcu: goto label_4a1adc;
        case 0x4a1ae0u: goto label_4a1ae0;
        case 0x4a1ae4u: goto label_4a1ae4;
        case 0x4a1ae8u: goto label_4a1ae8;
        case 0x4a1aecu: goto label_4a1aec;
        case 0x4a1af0u: goto label_4a1af0;
        case 0x4a1af4u: goto label_4a1af4;
        case 0x4a1af8u: goto label_4a1af8;
        case 0x4a1afcu: goto label_4a1afc;
        case 0x4a1b00u: goto label_4a1b00;
        case 0x4a1b04u: goto label_4a1b04;
        case 0x4a1b08u: goto label_4a1b08;
        case 0x4a1b0cu: goto label_4a1b0c;
        case 0x4a1b10u: goto label_4a1b10;
        case 0x4a1b14u: goto label_4a1b14;
        case 0x4a1b18u: goto label_4a1b18;
        case 0x4a1b1cu: goto label_4a1b1c;
        case 0x4a1b20u: goto label_4a1b20;
        case 0x4a1b24u: goto label_4a1b24;
        case 0x4a1b28u: goto label_4a1b28;
        case 0x4a1b2cu: goto label_4a1b2c;
        case 0x4a1b30u: goto label_4a1b30;
        case 0x4a1b34u: goto label_4a1b34;
        case 0x4a1b38u: goto label_4a1b38;
        case 0x4a1b3cu: goto label_4a1b3c;
        case 0x4a1b40u: goto label_4a1b40;
        case 0x4a1b44u: goto label_4a1b44;
        case 0x4a1b48u: goto label_4a1b48;
        case 0x4a1b4cu: goto label_4a1b4c;
        case 0x4a1b50u: goto label_4a1b50;
        case 0x4a1b54u: goto label_4a1b54;
        case 0x4a1b58u: goto label_4a1b58;
        case 0x4a1b5cu: goto label_4a1b5c;
        case 0x4a1b60u: goto label_4a1b60;
        case 0x4a1b64u: goto label_4a1b64;
        case 0x4a1b68u: goto label_4a1b68;
        case 0x4a1b6cu: goto label_4a1b6c;
        case 0x4a1b70u: goto label_4a1b70;
        case 0x4a1b74u: goto label_4a1b74;
        case 0x4a1b78u: goto label_4a1b78;
        case 0x4a1b7cu: goto label_4a1b7c;
        case 0x4a1b80u: goto label_4a1b80;
        case 0x4a1b84u: goto label_4a1b84;
        case 0x4a1b88u: goto label_4a1b88;
        case 0x4a1b8cu: goto label_4a1b8c;
        case 0x4a1b90u: goto label_4a1b90;
        case 0x4a1b94u: goto label_4a1b94;
        case 0x4a1b98u: goto label_4a1b98;
        case 0x4a1b9cu: goto label_4a1b9c;
        case 0x4a1ba0u: goto label_4a1ba0;
        case 0x4a1ba4u: goto label_4a1ba4;
        case 0x4a1ba8u: goto label_4a1ba8;
        case 0x4a1bacu: goto label_4a1bac;
        case 0x4a1bb0u: goto label_4a1bb0;
        case 0x4a1bb4u: goto label_4a1bb4;
        case 0x4a1bb8u: goto label_4a1bb8;
        case 0x4a1bbcu: goto label_4a1bbc;
        case 0x4a1bc0u: goto label_4a1bc0;
        case 0x4a1bc4u: goto label_4a1bc4;
        case 0x4a1bc8u: goto label_4a1bc8;
        case 0x4a1bccu: goto label_4a1bcc;
        case 0x4a1bd0u: goto label_4a1bd0;
        case 0x4a1bd4u: goto label_4a1bd4;
        case 0x4a1bd8u: goto label_4a1bd8;
        case 0x4a1bdcu: goto label_4a1bdc;
        case 0x4a1be0u: goto label_4a1be0;
        case 0x4a1be4u: goto label_4a1be4;
        case 0x4a1be8u: goto label_4a1be8;
        case 0x4a1becu: goto label_4a1bec;
        case 0x4a1bf0u: goto label_4a1bf0;
        case 0x4a1bf4u: goto label_4a1bf4;
        case 0x4a1bf8u: goto label_4a1bf8;
        case 0x4a1bfcu: goto label_4a1bfc;
        case 0x4a1c00u: goto label_4a1c00;
        case 0x4a1c04u: goto label_4a1c04;
        case 0x4a1c08u: goto label_4a1c08;
        case 0x4a1c0cu: goto label_4a1c0c;
        case 0x4a1c10u: goto label_4a1c10;
        case 0x4a1c14u: goto label_4a1c14;
        case 0x4a1c18u: goto label_4a1c18;
        case 0x4a1c1cu: goto label_4a1c1c;
        case 0x4a1c20u: goto label_4a1c20;
        case 0x4a1c24u: goto label_4a1c24;
        case 0x4a1c28u: goto label_4a1c28;
        case 0x4a1c2cu: goto label_4a1c2c;
        case 0x4a1c30u: goto label_4a1c30;
        case 0x4a1c34u: goto label_4a1c34;
        case 0x4a1c38u: goto label_4a1c38;
        case 0x4a1c3cu: goto label_4a1c3c;
        case 0x4a1c40u: goto label_4a1c40;
        case 0x4a1c44u: goto label_4a1c44;
        case 0x4a1c48u: goto label_4a1c48;
        case 0x4a1c4cu: goto label_4a1c4c;
        case 0x4a1c50u: goto label_4a1c50;
        case 0x4a1c54u: goto label_4a1c54;
        case 0x4a1c58u: goto label_4a1c58;
        case 0x4a1c5cu: goto label_4a1c5c;
        case 0x4a1c60u: goto label_4a1c60;
        case 0x4a1c64u: goto label_4a1c64;
        case 0x4a1c68u: goto label_4a1c68;
        case 0x4a1c6cu: goto label_4a1c6c;
        case 0x4a1c70u: goto label_4a1c70;
        case 0x4a1c74u: goto label_4a1c74;
        case 0x4a1c78u: goto label_4a1c78;
        case 0x4a1c7cu: goto label_4a1c7c;
        case 0x4a1c80u: goto label_4a1c80;
        case 0x4a1c84u: goto label_4a1c84;
        case 0x4a1c88u: goto label_4a1c88;
        case 0x4a1c8cu: goto label_4a1c8c;
        case 0x4a1c90u: goto label_4a1c90;
        case 0x4a1c94u: goto label_4a1c94;
        case 0x4a1c98u: goto label_4a1c98;
        case 0x4a1c9cu: goto label_4a1c9c;
        case 0x4a1ca0u: goto label_4a1ca0;
        case 0x4a1ca4u: goto label_4a1ca4;
        case 0x4a1ca8u: goto label_4a1ca8;
        case 0x4a1cacu: goto label_4a1cac;
        case 0x4a1cb0u: goto label_4a1cb0;
        case 0x4a1cb4u: goto label_4a1cb4;
        case 0x4a1cb8u: goto label_4a1cb8;
        case 0x4a1cbcu: goto label_4a1cbc;
        case 0x4a1cc0u: goto label_4a1cc0;
        case 0x4a1cc4u: goto label_4a1cc4;
        case 0x4a1cc8u: goto label_4a1cc8;
        case 0x4a1cccu: goto label_4a1ccc;
        case 0x4a1cd0u: goto label_4a1cd0;
        case 0x4a1cd4u: goto label_4a1cd4;
        case 0x4a1cd8u: goto label_4a1cd8;
        case 0x4a1cdcu: goto label_4a1cdc;
        case 0x4a1ce0u: goto label_4a1ce0;
        case 0x4a1ce4u: goto label_4a1ce4;
        case 0x4a1ce8u: goto label_4a1ce8;
        case 0x4a1cecu: goto label_4a1cec;
        case 0x4a1cf0u: goto label_4a1cf0;
        case 0x4a1cf4u: goto label_4a1cf4;
        case 0x4a1cf8u: goto label_4a1cf8;
        case 0x4a1cfcu: goto label_4a1cfc;
        case 0x4a1d00u: goto label_4a1d00;
        case 0x4a1d04u: goto label_4a1d04;
        case 0x4a1d08u: goto label_4a1d08;
        case 0x4a1d0cu: goto label_4a1d0c;
        case 0x4a1d10u: goto label_4a1d10;
        case 0x4a1d14u: goto label_4a1d14;
        case 0x4a1d18u: goto label_4a1d18;
        case 0x4a1d1cu: goto label_4a1d1c;
        case 0x4a1d20u: goto label_4a1d20;
        case 0x4a1d24u: goto label_4a1d24;
        case 0x4a1d28u: goto label_4a1d28;
        case 0x4a1d2cu: goto label_4a1d2c;
        case 0x4a1d30u: goto label_4a1d30;
        case 0x4a1d34u: goto label_4a1d34;
        case 0x4a1d38u: goto label_4a1d38;
        case 0x4a1d3cu: goto label_4a1d3c;
        case 0x4a1d40u: goto label_4a1d40;
        case 0x4a1d44u: goto label_4a1d44;
        case 0x4a1d48u: goto label_4a1d48;
        case 0x4a1d4cu: goto label_4a1d4c;
        case 0x4a1d50u: goto label_4a1d50;
        case 0x4a1d54u: goto label_4a1d54;
        case 0x4a1d58u: goto label_4a1d58;
        case 0x4a1d5cu: goto label_4a1d5c;
        case 0x4a1d60u: goto label_4a1d60;
        case 0x4a1d64u: goto label_4a1d64;
        case 0x4a1d68u: goto label_4a1d68;
        case 0x4a1d6cu: goto label_4a1d6c;
        case 0x4a1d70u: goto label_4a1d70;
        case 0x4a1d74u: goto label_4a1d74;
        case 0x4a1d78u: goto label_4a1d78;
        case 0x4a1d7cu: goto label_4a1d7c;
        case 0x4a1d80u: goto label_4a1d80;
        case 0x4a1d84u: goto label_4a1d84;
        case 0x4a1d88u: goto label_4a1d88;
        case 0x4a1d8cu: goto label_4a1d8c;
        case 0x4a1d90u: goto label_4a1d90;
        case 0x4a1d94u: goto label_4a1d94;
        case 0x4a1d98u: goto label_4a1d98;
        case 0x4a1d9cu: goto label_4a1d9c;
        case 0x4a1da0u: goto label_4a1da0;
        case 0x4a1da4u: goto label_4a1da4;
        case 0x4a1da8u: goto label_4a1da8;
        case 0x4a1dacu: goto label_4a1dac;
        case 0x4a1db0u: goto label_4a1db0;
        case 0x4a1db4u: goto label_4a1db4;
        case 0x4a1db8u: goto label_4a1db8;
        case 0x4a1dbcu: goto label_4a1dbc;
        case 0x4a1dc0u: goto label_4a1dc0;
        case 0x4a1dc4u: goto label_4a1dc4;
        case 0x4a1dc8u: goto label_4a1dc8;
        case 0x4a1dccu: goto label_4a1dcc;
        case 0x4a1dd0u: goto label_4a1dd0;
        case 0x4a1dd4u: goto label_4a1dd4;
        case 0x4a1dd8u: goto label_4a1dd8;
        case 0x4a1ddcu: goto label_4a1ddc;
        case 0x4a1de0u: goto label_4a1de0;
        case 0x4a1de4u: goto label_4a1de4;
        case 0x4a1de8u: goto label_4a1de8;
        case 0x4a1decu: goto label_4a1dec;
        case 0x4a1df0u: goto label_4a1df0;
        case 0x4a1df4u: goto label_4a1df4;
        case 0x4a1df8u: goto label_4a1df8;
        case 0x4a1dfcu: goto label_4a1dfc;
        case 0x4a1e00u: goto label_4a1e00;
        case 0x4a1e04u: goto label_4a1e04;
        case 0x4a1e08u: goto label_4a1e08;
        case 0x4a1e0cu: goto label_4a1e0c;
        case 0x4a1e10u: goto label_4a1e10;
        case 0x4a1e14u: goto label_4a1e14;
        case 0x4a1e18u: goto label_4a1e18;
        case 0x4a1e1cu: goto label_4a1e1c;
        case 0x4a1e20u: goto label_4a1e20;
        case 0x4a1e24u: goto label_4a1e24;
        case 0x4a1e28u: goto label_4a1e28;
        case 0x4a1e2cu: goto label_4a1e2c;
        case 0x4a1e30u: goto label_4a1e30;
        case 0x4a1e34u: goto label_4a1e34;
        case 0x4a1e38u: goto label_4a1e38;
        case 0x4a1e3cu: goto label_4a1e3c;
        case 0x4a1e40u: goto label_4a1e40;
        case 0x4a1e44u: goto label_4a1e44;
        case 0x4a1e48u: goto label_4a1e48;
        case 0x4a1e4cu: goto label_4a1e4c;
        case 0x4a1e50u: goto label_4a1e50;
        case 0x4a1e54u: goto label_4a1e54;
        case 0x4a1e58u: goto label_4a1e58;
        case 0x4a1e5cu: goto label_4a1e5c;
        case 0x4a1e60u: goto label_4a1e60;
        case 0x4a1e64u: goto label_4a1e64;
        case 0x4a1e68u: goto label_4a1e68;
        case 0x4a1e6cu: goto label_4a1e6c;
        case 0x4a1e70u: goto label_4a1e70;
        case 0x4a1e74u: goto label_4a1e74;
        case 0x4a1e78u: goto label_4a1e78;
        case 0x4a1e7cu: goto label_4a1e7c;
        case 0x4a1e80u: goto label_4a1e80;
        case 0x4a1e84u: goto label_4a1e84;
        case 0x4a1e88u: goto label_4a1e88;
        case 0x4a1e8cu: goto label_4a1e8c;
        case 0x4a1e90u: goto label_4a1e90;
        case 0x4a1e94u: goto label_4a1e94;
        case 0x4a1e98u: goto label_4a1e98;
        case 0x4a1e9cu: goto label_4a1e9c;
        case 0x4a1ea0u: goto label_4a1ea0;
        case 0x4a1ea4u: goto label_4a1ea4;
        case 0x4a1ea8u: goto label_4a1ea8;
        case 0x4a1eacu: goto label_4a1eac;
        case 0x4a1eb0u: goto label_4a1eb0;
        case 0x4a1eb4u: goto label_4a1eb4;
        case 0x4a1eb8u: goto label_4a1eb8;
        case 0x4a1ebcu: goto label_4a1ebc;
        case 0x4a1ec0u: goto label_4a1ec0;
        case 0x4a1ec4u: goto label_4a1ec4;
        case 0x4a1ec8u: goto label_4a1ec8;
        case 0x4a1eccu: goto label_4a1ecc;
        case 0x4a1ed0u: goto label_4a1ed0;
        case 0x4a1ed4u: goto label_4a1ed4;
        case 0x4a1ed8u: goto label_4a1ed8;
        case 0x4a1edcu: goto label_4a1edc;
        case 0x4a1ee0u: goto label_4a1ee0;
        case 0x4a1ee4u: goto label_4a1ee4;
        case 0x4a1ee8u: goto label_4a1ee8;
        case 0x4a1eecu: goto label_4a1eec;
        case 0x4a1ef0u: goto label_4a1ef0;
        case 0x4a1ef4u: goto label_4a1ef4;
        case 0x4a1ef8u: goto label_4a1ef8;
        case 0x4a1efcu: goto label_4a1efc;
        case 0x4a1f00u: goto label_4a1f00;
        case 0x4a1f04u: goto label_4a1f04;
        case 0x4a1f08u: goto label_4a1f08;
        case 0x4a1f0cu: goto label_4a1f0c;
        case 0x4a1f10u: goto label_4a1f10;
        case 0x4a1f14u: goto label_4a1f14;
        case 0x4a1f18u: goto label_4a1f18;
        case 0x4a1f1cu: goto label_4a1f1c;
        case 0x4a1f20u: goto label_4a1f20;
        case 0x4a1f24u: goto label_4a1f24;
        case 0x4a1f28u: goto label_4a1f28;
        case 0x4a1f2cu: goto label_4a1f2c;
        case 0x4a1f30u: goto label_4a1f30;
        case 0x4a1f34u: goto label_4a1f34;
        case 0x4a1f38u: goto label_4a1f38;
        case 0x4a1f3cu: goto label_4a1f3c;
        case 0x4a1f40u: goto label_4a1f40;
        case 0x4a1f44u: goto label_4a1f44;
        case 0x4a1f48u: goto label_4a1f48;
        case 0x4a1f4cu: goto label_4a1f4c;
        case 0x4a1f50u: goto label_4a1f50;
        case 0x4a1f54u: goto label_4a1f54;
        case 0x4a1f58u: goto label_4a1f58;
        case 0x4a1f5cu: goto label_4a1f5c;
        case 0x4a1f60u: goto label_4a1f60;
        case 0x4a1f64u: goto label_4a1f64;
        case 0x4a1f68u: goto label_4a1f68;
        case 0x4a1f6cu: goto label_4a1f6c;
        case 0x4a1f70u: goto label_4a1f70;
        case 0x4a1f74u: goto label_4a1f74;
        case 0x4a1f78u: goto label_4a1f78;
        case 0x4a1f7cu: goto label_4a1f7c;
        case 0x4a1f80u: goto label_4a1f80;
        case 0x4a1f84u: goto label_4a1f84;
        case 0x4a1f88u: goto label_4a1f88;
        case 0x4a1f8cu: goto label_4a1f8c;
        case 0x4a1f90u: goto label_4a1f90;
        case 0x4a1f94u: goto label_4a1f94;
        case 0x4a1f98u: goto label_4a1f98;
        case 0x4a1f9cu: goto label_4a1f9c;
        case 0x4a1fa0u: goto label_4a1fa0;
        case 0x4a1fa4u: goto label_4a1fa4;
        case 0x4a1fa8u: goto label_4a1fa8;
        case 0x4a1facu: goto label_4a1fac;
        case 0x4a1fb0u: goto label_4a1fb0;
        case 0x4a1fb4u: goto label_4a1fb4;
        case 0x4a1fb8u: goto label_4a1fb8;
        case 0x4a1fbcu: goto label_4a1fbc;
        case 0x4a1fc0u: goto label_4a1fc0;
        case 0x4a1fc4u: goto label_4a1fc4;
        case 0x4a1fc8u: goto label_4a1fc8;
        case 0x4a1fccu: goto label_4a1fcc;
        case 0x4a1fd0u: goto label_4a1fd0;
        case 0x4a1fd4u: goto label_4a1fd4;
        case 0x4a1fd8u: goto label_4a1fd8;
        case 0x4a1fdcu: goto label_4a1fdc;
        case 0x4a1fe0u: goto label_4a1fe0;
        case 0x4a1fe4u: goto label_4a1fe4;
        case 0x4a1fe8u: goto label_4a1fe8;
        case 0x4a1fecu: goto label_4a1fec;
        case 0x4a1ff0u: goto label_4a1ff0;
        case 0x4a1ff4u: goto label_4a1ff4;
        case 0x4a1ff8u: goto label_4a1ff8;
        case 0x4a1ffcu: goto label_4a1ffc;
        case 0x4a2000u: goto label_4a2000;
        case 0x4a2004u: goto label_4a2004;
        case 0x4a2008u: goto label_4a2008;
        case 0x4a200cu: goto label_4a200c;
        case 0x4a2010u: goto label_4a2010;
        case 0x4a2014u: goto label_4a2014;
        case 0x4a2018u: goto label_4a2018;
        case 0x4a201cu: goto label_4a201c;
        case 0x4a2020u: goto label_4a2020;
        case 0x4a2024u: goto label_4a2024;
        case 0x4a2028u: goto label_4a2028;
        case 0x4a202cu: goto label_4a202c;
        case 0x4a2030u: goto label_4a2030;
        case 0x4a2034u: goto label_4a2034;
        case 0x4a2038u: goto label_4a2038;
        case 0x4a203cu: goto label_4a203c;
        case 0x4a2040u: goto label_4a2040;
        case 0x4a2044u: goto label_4a2044;
        case 0x4a2048u: goto label_4a2048;
        case 0x4a204cu: goto label_4a204c;
        case 0x4a2050u: goto label_4a2050;
        case 0x4a2054u: goto label_4a2054;
        case 0x4a2058u: goto label_4a2058;
        case 0x4a205cu: goto label_4a205c;
        case 0x4a2060u: goto label_4a2060;
        case 0x4a2064u: goto label_4a2064;
        case 0x4a2068u: goto label_4a2068;
        case 0x4a206cu: goto label_4a206c;
        case 0x4a2070u: goto label_4a2070;
        case 0x4a2074u: goto label_4a2074;
        case 0x4a2078u: goto label_4a2078;
        case 0x4a207cu: goto label_4a207c;
        case 0x4a2080u: goto label_4a2080;
        case 0x4a2084u: goto label_4a2084;
        case 0x4a2088u: goto label_4a2088;
        case 0x4a208cu: goto label_4a208c;
        case 0x4a2090u: goto label_4a2090;
        case 0x4a2094u: goto label_4a2094;
        case 0x4a2098u: goto label_4a2098;
        case 0x4a209cu: goto label_4a209c;
        case 0x4a20a0u: goto label_4a20a0;
        case 0x4a20a4u: goto label_4a20a4;
        case 0x4a20a8u: goto label_4a20a8;
        case 0x4a20acu: goto label_4a20ac;
        case 0x4a20b0u: goto label_4a20b0;
        case 0x4a20b4u: goto label_4a20b4;
        case 0x4a20b8u: goto label_4a20b8;
        case 0x4a20bcu: goto label_4a20bc;
        case 0x4a20c0u: goto label_4a20c0;
        case 0x4a20c4u: goto label_4a20c4;
        case 0x4a20c8u: goto label_4a20c8;
        case 0x4a20ccu: goto label_4a20cc;
        case 0x4a20d0u: goto label_4a20d0;
        case 0x4a20d4u: goto label_4a20d4;
        case 0x4a20d8u: goto label_4a20d8;
        case 0x4a20dcu: goto label_4a20dc;
        case 0x4a20e0u: goto label_4a20e0;
        case 0x4a20e4u: goto label_4a20e4;
        case 0x4a20e8u: goto label_4a20e8;
        case 0x4a20ecu: goto label_4a20ec;
        case 0x4a20f0u: goto label_4a20f0;
        case 0x4a20f4u: goto label_4a20f4;
        case 0x4a20f8u: goto label_4a20f8;
        case 0x4a20fcu: goto label_4a20fc;
        case 0x4a2100u: goto label_4a2100;
        case 0x4a2104u: goto label_4a2104;
        case 0x4a2108u: goto label_4a2108;
        case 0x4a210cu: goto label_4a210c;
        case 0x4a2110u: goto label_4a2110;
        case 0x4a2114u: goto label_4a2114;
        case 0x4a2118u: goto label_4a2118;
        case 0x4a211cu: goto label_4a211c;
        case 0x4a2120u: goto label_4a2120;
        case 0x4a2124u: goto label_4a2124;
        case 0x4a2128u: goto label_4a2128;
        case 0x4a212cu: goto label_4a212c;
        case 0x4a2130u: goto label_4a2130;
        case 0x4a2134u: goto label_4a2134;
        case 0x4a2138u: goto label_4a2138;
        case 0x4a213cu: goto label_4a213c;
        case 0x4a2140u: goto label_4a2140;
        case 0x4a2144u: goto label_4a2144;
        case 0x4a2148u: goto label_4a2148;
        case 0x4a214cu: goto label_4a214c;
        case 0x4a2150u: goto label_4a2150;
        case 0x4a2154u: goto label_4a2154;
        case 0x4a2158u: goto label_4a2158;
        case 0x4a215cu: goto label_4a215c;
        case 0x4a2160u: goto label_4a2160;
        case 0x4a2164u: goto label_4a2164;
        case 0x4a2168u: goto label_4a2168;
        case 0x4a216cu: goto label_4a216c;
        case 0x4a2170u: goto label_4a2170;
        case 0x4a2174u: goto label_4a2174;
        case 0x4a2178u: goto label_4a2178;
        case 0x4a217cu: goto label_4a217c;
        case 0x4a2180u: goto label_4a2180;
        case 0x4a2184u: goto label_4a2184;
        case 0x4a2188u: goto label_4a2188;
        case 0x4a218cu: goto label_4a218c;
        case 0x4a2190u: goto label_4a2190;
        case 0x4a2194u: goto label_4a2194;
        case 0x4a2198u: goto label_4a2198;
        case 0x4a219cu: goto label_4a219c;
        case 0x4a21a0u: goto label_4a21a0;
        case 0x4a21a4u: goto label_4a21a4;
        case 0x4a21a8u: goto label_4a21a8;
        case 0x4a21acu: goto label_4a21ac;
        case 0x4a21b0u: goto label_4a21b0;
        case 0x4a21b4u: goto label_4a21b4;
        case 0x4a21b8u: goto label_4a21b8;
        case 0x4a21bcu: goto label_4a21bc;
        case 0x4a21c0u: goto label_4a21c0;
        case 0x4a21c4u: goto label_4a21c4;
        case 0x4a21c8u: goto label_4a21c8;
        case 0x4a21ccu: goto label_4a21cc;
        case 0x4a21d0u: goto label_4a21d0;
        case 0x4a21d4u: goto label_4a21d4;
        case 0x4a21d8u: goto label_4a21d8;
        case 0x4a21dcu: goto label_4a21dc;
        case 0x4a21e0u: goto label_4a21e0;
        case 0x4a21e4u: goto label_4a21e4;
        case 0x4a21e8u: goto label_4a21e8;
        case 0x4a21ecu: goto label_4a21ec;
        case 0x4a21f0u: goto label_4a21f0;
        case 0x4a21f4u: goto label_4a21f4;
        case 0x4a21f8u: goto label_4a21f8;
        case 0x4a21fcu: goto label_4a21fc;
        case 0x4a2200u: goto label_4a2200;
        case 0x4a2204u: goto label_4a2204;
        case 0x4a2208u: goto label_4a2208;
        case 0x4a220cu: goto label_4a220c;
        case 0x4a2210u: goto label_4a2210;
        case 0x4a2214u: goto label_4a2214;
        case 0x4a2218u: goto label_4a2218;
        case 0x4a221cu: goto label_4a221c;
        case 0x4a2220u: goto label_4a2220;
        case 0x4a2224u: goto label_4a2224;
        case 0x4a2228u: goto label_4a2228;
        case 0x4a222cu: goto label_4a222c;
        case 0x4a2230u: goto label_4a2230;
        case 0x4a2234u: goto label_4a2234;
        case 0x4a2238u: goto label_4a2238;
        case 0x4a223cu: goto label_4a223c;
        case 0x4a2240u: goto label_4a2240;
        case 0x4a2244u: goto label_4a2244;
        case 0x4a2248u: goto label_4a2248;
        case 0x4a224cu: goto label_4a224c;
        case 0x4a2250u: goto label_4a2250;
        case 0x4a2254u: goto label_4a2254;
        case 0x4a2258u: goto label_4a2258;
        case 0x4a225cu: goto label_4a225c;
        case 0x4a2260u: goto label_4a2260;
        case 0x4a2264u: goto label_4a2264;
        case 0x4a2268u: goto label_4a2268;
        case 0x4a226cu: goto label_4a226c;
        case 0x4a2270u: goto label_4a2270;
        case 0x4a2274u: goto label_4a2274;
        case 0x4a2278u: goto label_4a2278;
        case 0x4a227cu: goto label_4a227c;
        case 0x4a2280u: goto label_4a2280;
        case 0x4a2284u: goto label_4a2284;
        case 0x4a2288u: goto label_4a2288;
        case 0x4a228cu: goto label_4a228c;
        case 0x4a2290u: goto label_4a2290;
        case 0x4a2294u: goto label_4a2294;
        case 0x4a2298u: goto label_4a2298;
        case 0x4a229cu: goto label_4a229c;
        case 0x4a22a0u: goto label_4a22a0;
        case 0x4a22a4u: goto label_4a22a4;
        case 0x4a22a8u: goto label_4a22a8;
        case 0x4a22acu: goto label_4a22ac;
        case 0x4a22b0u: goto label_4a22b0;
        case 0x4a22b4u: goto label_4a22b4;
        case 0x4a22b8u: goto label_4a22b8;
        case 0x4a22bcu: goto label_4a22bc;
        case 0x4a22c0u: goto label_4a22c0;
        case 0x4a22c4u: goto label_4a22c4;
        case 0x4a22c8u: goto label_4a22c8;
        case 0x4a22ccu: goto label_4a22cc;
        case 0x4a22d0u: goto label_4a22d0;
        case 0x4a22d4u: goto label_4a22d4;
        case 0x4a22d8u: goto label_4a22d8;
        case 0x4a22dcu: goto label_4a22dc;
        case 0x4a22e0u: goto label_4a22e0;
        case 0x4a22e4u: goto label_4a22e4;
        case 0x4a22e8u: goto label_4a22e8;
        case 0x4a22ecu: goto label_4a22ec;
        case 0x4a22f0u: goto label_4a22f0;
        case 0x4a22f4u: goto label_4a22f4;
        case 0x4a22f8u: goto label_4a22f8;
        case 0x4a22fcu: goto label_4a22fc;
        case 0x4a2300u: goto label_4a2300;
        case 0x4a2304u: goto label_4a2304;
        case 0x4a2308u: goto label_4a2308;
        case 0x4a230cu: goto label_4a230c;
        case 0x4a2310u: goto label_4a2310;
        case 0x4a2314u: goto label_4a2314;
        case 0x4a2318u: goto label_4a2318;
        case 0x4a231cu: goto label_4a231c;
        case 0x4a2320u: goto label_4a2320;
        case 0x4a2324u: goto label_4a2324;
        case 0x4a2328u: goto label_4a2328;
        case 0x4a232cu: goto label_4a232c;
        default: break;
    }

    ctx->pc = 0x4a1830u;

label_4a1830:
    // 0x4a1830: 0xc4800140  lwc1        $f0, 0x140($a0)
    ctx->pc = 0x4a1830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1834:
    // 0x4a1834: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x4a1834u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a1838:
    // 0x4a1838: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4a183c:
    if (ctx->pc == 0x4A183Cu) {
        ctx->pc = 0x4A1840u;
        goto label_4a1840;
    }
    ctx->pc = 0x4A1838u;
    {
        const bool branch_taken_0x4a1838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a1838) {
            ctx->pc = 0x4A1850u;
            goto label_4a1850;
        }
    }
    ctx->pc = 0x4A1840u;
label_4a1840:
    // 0x4a1840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a1840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1844:
    // 0x4a1844: 0xac8300f4  sw          $v1, 0xF4($a0)
    ctx->pc = 0x4a1844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 3));
label_4a1848:
    // 0x4a1848: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x4a1848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a184c:
    // 0x4a184c: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x4a184cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
label_4a1850:
    // 0x4a1850: 0x3e00008  jr          $ra
label_4a1854:
    if (ctx->pc == 0x4A1854u) {
        ctx->pc = 0x4A1858u;
        goto label_4a1858;
    }
    ctx->pc = 0x4A1850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A1858u;
label_4a1858:
    // 0x4a1858: 0x0  nop
    ctx->pc = 0x4a1858u;
    // NOP
label_4a185c:
    // 0x4a185c: 0x0  nop
    ctx->pc = 0x4a185cu;
    // NOP
label_4a1860:
    // 0x4a1860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a1864:
    // 0x4a1864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a1864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a1868:
    // 0x4a1868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a1868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a186c:
    // 0x4a186c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a186cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a1870:
    // 0x4a1870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a1870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a1874:
    // 0x4a1874: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x4a1874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_4a1878:
    // 0x4a1878: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4a187c:
    if (ctx->pc == 0x4A187Cu) {
        ctx->pc = 0x4A187Cu;
            // 0x4a187c: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x4A1880u;
        goto label_4a1880;
    }
    ctx->pc = 0x4A1878u;
    {
        const bool branch_taken_0x4a1878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1878) {
            ctx->pc = 0x4A187Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1878u;
            // 0x4a187c: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A1894u;
            goto label_4a1894;
        }
    }
    ctx->pc = 0x4A1880u;
label_4a1880:
    // 0x4a1880: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a1880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a1884:
    // 0x4a1884: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4a1884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4a1888:
    // 0x4a1888: 0x320f809  jalr        $t9
label_4a188c:
    if (ctx->pc == 0x4A188Cu) {
        ctx->pc = 0x4A188Cu;
            // 0x4a188c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A1890u;
        goto label_4a1890;
    }
    ctx->pc = 0x4A1888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A1890u);
        ctx->pc = 0x4A188Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1888u;
            // 0x4a188c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A1890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A1890u; }
            if (ctx->pc != 0x4A1890u) { return; }
        }
        }
    }
    ctx->pc = 0x4A1890u;
label_4a1890:
    // 0x4a1890: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x4a1890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_4a1894:
    // 0x4a1894: 0x8e30009c  lw          $s0, 0x9C($s1)
    ctx->pc = 0x4a1894u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4a1898:
    // 0x4a1898: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_4a189c:
    if (ctx->pc == 0x4A189Cu) {
        ctx->pc = 0x4A189Cu;
            // 0x4a189c: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x4A18A0u;
        goto label_4a18a0;
    }
    ctx->pc = 0x4A1898u;
    {
        const bool branch_taken_0x4a1898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1898) {
            ctx->pc = 0x4A189Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1898u;
            // 0x4a189c: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A18D4u;
            goto label_4a18d4;
        }
    }
    ctx->pc = 0x4A18A0u;
label_4a18a0:
    // 0x4a18a0: 0xc04008c  jal         func_100230
label_4a18a4:
    if (ctx->pc == 0x4A18A4u) {
        ctx->pc = 0x4A18A4u;
            // 0x4a18a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4A18A8u;
        goto label_4a18a8;
    }
    ctx->pc = 0x4A18A0u;
    SET_GPR_U32(ctx, 31, 0x4A18A8u);
    ctx->pc = 0x4A18A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A18A0u;
            // 0x4a18a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A18A8u; }
        if (ctx->pc != 0x4A18A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A18A8u; }
        if (ctx->pc != 0x4A18A8u) { return; }
    }
    ctx->pc = 0x4A18A8u;
label_4a18a8:
    // 0x4a18a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a18a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a18ac:
    // 0x4a18ac: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4a18acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4a18b0:
    // 0x4a18b0: 0xc0407c0  jal         func_101F00
label_4a18b4:
    if (ctx->pc == 0x4A18B4u) {
        ctx->pc = 0x4A18B4u;
            // 0x4a18b4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x4A18B8u;
        goto label_4a18b8;
    }
    ctx->pc = 0x4A18B0u;
    SET_GPR_U32(ctx, 31, 0x4A18B8u);
    ctx->pc = 0x4A18B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A18B0u;
            // 0x4a18b4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A18B8u; }
        if (ctx->pc != 0x4A18B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A18B8u; }
        if (ctx->pc != 0x4A18B8u) { return; }
    }
    ctx->pc = 0x4A18B8u;
label_4a18b8:
    // 0x4a18b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a18b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a18bc:
    // 0x4a18bc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4a18bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4a18c0:
    // 0x4a18c0: 0xc0407c0  jal         func_101F00
label_4a18c4:
    if (ctx->pc == 0x4A18C4u) {
        ctx->pc = 0x4A18C4u;
            // 0x4a18c4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x4A18C8u;
        goto label_4a18c8;
    }
    ctx->pc = 0x4A18C0u;
    SET_GPR_U32(ctx, 31, 0x4A18C8u);
    ctx->pc = 0x4A18C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A18C0u;
            // 0x4a18c4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A18C8u; }
        if (ctx->pc != 0x4A18C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A18C8u; }
        if (ctx->pc != 0x4A18C8u) { return; }
    }
    ctx->pc = 0x4A18C8u;
label_4a18c8:
    // 0x4a18c8: 0xc0400a8  jal         func_1002A0
label_4a18cc:
    if (ctx->pc == 0x4A18CCu) {
        ctx->pc = 0x4A18CCu;
            // 0x4a18cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A18D0u;
        goto label_4a18d0;
    }
    ctx->pc = 0x4A18C8u;
    SET_GPR_U32(ctx, 31, 0x4A18D0u);
    ctx->pc = 0x4A18CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A18C8u;
            // 0x4a18cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A18D0u; }
        if (ctx->pc != 0x4A18D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A18D0u; }
        if (ctx->pc != 0x4A18D0u) { return; }
    }
    ctx->pc = 0x4A18D0u;
label_4a18d0:
    // 0x4a18d0: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x4a18d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4a18d4:
    // 0x4a18d4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4a18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4a18d8:
    // 0x4a18d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4a18dc:
    if (ctx->pc == 0x4A18DCu) {
        ctx->pc = 0x4A18DCu;
            // 0x4a18dc: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4A18E0u;
        goto label_4a18e0;
    }
    ctx->pc = 0x4A18D8u;
    {
        const bool branch_taken_0x4a18d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a18d8) {
            ctx->pc = 0x4A18DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A18D8u;
            // 0x4a18dc: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A18F4u;
            goto label_4a18f4;
        }
    }
    ctx->pc = 0x4A18E0u;
label_4a18e0:
    // 0x4a18e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a18e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a18e4:
    // 0x4a18e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4a18e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4a18e8:
    // 0x4a18e8: 0x320f809  jalr        $t9
label_4a18ec:
    if (ctx->pc == 0x4A18ECu) {
        ctx->pc = 0x4A18ECu;
            // 0x4a18ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A18F0u;
        goto label_4a18f0;
    }
    ctx->pc = 0x4A18E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A18F0u);
        ctx->pc = 0x4A18ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A18E8u;
            // 0x4a18ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A18F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A18F0u; }
            if (ctx->pc != 0x4A18F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4A18F0u;
label_4a18f0:
    // 0x4a18f0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4a18f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4a18f4:
    // 0x4a18f4: 0x8e24014c  lw          $a0, 0x14C($s1)
    ctx->pc = 0x4a18f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
label_4a18f8:
    // 0x4a18f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4a18fc:
    if (ctx->pc == 0x4A18FCu) {
        ctx->pc = 0x4A18FCu;
            // 0x4a18fc: 0xae20014c  sw          $zero, 0x14C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 0));
        ctx->pc = 0x4A1900u;
        goto label_4a1900;
    }
    ctx->pc = 0x4A18F8u;
    {
        const bool branch_taken_0x4a18f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a18f8) {
            ctx->pc = 0x4A18FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A18F8u;
            // 0x4a18fc: 0xae20014c  sw          $zero, 0x14C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A1914u;
            goto label_4a1914;
        }
    }
    ctx->pc = 0x4A1900u;
label_4a1900:
    // 0x4a1900: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a1900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a1904:
    // 0x4a1904: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4a1904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4a1908:
    // 0x4a1908: 0x320f809  jalr        $t9
label_4a190c:
    if (ctx->pc == 0x4A190Cu) {
        ctx->pc = 0x4A190Cu;
            // 0x4a190c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A1910u;
        goto label_4a1910;
    }
    ctx->pc = 0x4A1908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A1910u);
        ctx->pc = 0x4A190Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1908u;
            // 0x4a190c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A1910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A1910u; }
            if (ctx->pc != 0x4A1910u) { return; }
        }
        }
    }
    ctx->pc = 0x4A1910u;
label_4a1910:
    // 0x4a1910: 0xae20014c  sw          $zero, 0x14C($s1)
    ctx->pc = 0x4a1910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 0));
label_4a1914:
    // 0x4a1914: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a1914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a1918:
    // 0x4a1918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a1918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a191c:
    // 0x4a191c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a191cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a1920:
    // 0x4a1920: 0x3e00008  jr          $ra
label_4a1924:
    if (ctx->pc == 0x4A1924u) {
        ctx->pc = 0x4A1924u;
            // 0x4a1924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A1928u;
        goto label_4a1928;
    }
    ctx->pc = 0x4A1920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1920u;
            // 0x4a1924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A1928u;
label_4a1928:
    // 0x4a1928: 0x0  nop
    ctx->pc = 0x4a1928u;
    // NOP
label_4a192c:
    // 0x4a192c: 0x0  nop
    ctx->pc = 0x4a192cu;
    // NOP
label_4a1930:
    // 0x4a1930: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4a1930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4a1934:
    // 0x4a1934: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a1934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4a1938:
    // 0x4a1938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a1938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a193c:
    // 0x4a193c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a193cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a1940:
    // 0x4a1940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a1940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a1944:
    // 0x4a1944: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a1944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a1948:
    // 0x4a1948: 0xc0892d0  jal         func_224B40
label_4a194c:
    if (ctx->pc == 0x4A194Cu) {
        ctx->pc = 0x4A194Cu;
            // 0x4a194c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4A1950u;
        goto label_4a1950;
    }
    ctx->pc = 0x4A1948u;
    SET_GPR_U32(ctx, 31, 0x4A1950u);
    ctx->pc = 0x4A194Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1948u;
            // 0x4a194c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1950u; }
        if (ctx->pc != 0x4A1950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1950u; }
        if (ctx->pc != 0x4A1950u) { return; }
    }
    ctx->pc = 0x4A1950u;
label_4a1950:
    // 0x4a1950: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a1950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a1954:
    // 0x4a1954: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4a1954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4a1958:
    // 0x4a1958: 0x8c427c20  lw          $v0, 0x7C20($v0)
    ctx->pc = 0x4a1958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31776)));
label_4a195c:
    // 0x4a195c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x4a195cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4a1960:
    // 0x4a1960: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4a1960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4a1964:
    // 0x4a1964: 0xc0b6e68  jal         func_2DB9A0
label_4a1968:
    if (ctx->pc == 0x4A1968u) {
        ctx->pc = 0x4A1968u;
            // 0x4a1968: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4A196Cu;
        goto label_4a196c;
    }
    ctx->pc = 0x4A1964u;
    SET_GPR_U32(ctx, 31, 0x4A196Cu);
    ctx->pc = 0x4A1968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1964u;
            // 0x4a1968: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A196Cu; }
        if (ctx->pc != 0x4A196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A196Cu; }
        if (ctx->pc != 0x4A196Cu) { return; }
    }
    ctx->pc = 0x4A196Cu;
label_4a196c:
    // 0x4a196c: 0xc0b6dac  jal         func_2DB6B0
label_4a1970:
    if (ctx->pc == 0x4A1970u) {
        ctx->pc = 0x4A1970u;
            // 0x4a1970: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4A1974u;
        goto label_4a1974;
    }
    ctx->pc = 0x4A196Cu;
    SET_GPR_U32(ctx, 31, 0x4A1974u);
    ctx->pc = 0x4A1970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A196Cu;
            // 0x4a1970: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1974u; }
        if (ctx->pc != 0x4A1974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1974u; }
        if (ctx->pc != 0x4A1974u) { return; }
    }
    ctx->pc = 0x4A1974u;
label_4a1974:
    // 0x4a1974: 0xc0cac94  jal         func_32B250
label_4a1978:
    if (ctx->pc == 0x4A1978u) {
        ctx->pc = 0x4A1978u;
            // 0x4a1978: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4A197Cu;
        goto label_4a197c;
    }
    ctx->pc = 0x4A1974u;
    SET_GPR_U32(ctx, 31, 0x4A197Cu);
    ctx->pc = 0x4A1978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1974u;
            // 0x4a1978: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A197Cu; }
        if (ctx->pc != 0x4A197Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A197Cu; }
        if (ctx->pc != 0x4A197Cu) { return; }
    }
    ctx->pc = 0x4A197Cu;
label_4a197c:
    // 0x4a197c: 0xc0cac84  jal         func_32B210
label_4a1980:
    if (ctx->pc == 0x4A1980u) {
        ctx->pc = 0x4A1980u;
            // 0x4a1980: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4A1984u;
        goto label_4a1984;
    }
    ctx->pc = 0x4A197Cu;
    SET_GPR_U32(ctx, 31, 0x4A1984u);
    ctx->pc = 0x4A1980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A197Cu;
            // 0x4a1980: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1984u; }
        if (ctx->pc != 0x4A1984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1984u; }
        if (ctx->pc != 0x4A1984u) { return; }
    }
    ctx->pc = 0x4A1984u;
label_4a1984:
    // 0x4a1984: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4a1984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4a1988:
    // 0x4a1988: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4a1988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4a198c:
    // 0x4a198c: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x4a198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a1990:
    // 0x4a1990: 0xc0a5a68  jal         func_2969A0
label_4a1994:
    if (ctx->pc == 0x4A1994u) {
        ctx->pc = 0x4A1994u;
            // 0x4a1994: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4A1998u;
        goto label_4a1998;
    }
    ctx->pc = 0x4A1990u;
    SET_GPR_U32(ctx, 31, 0x4A1998u);
    ctx->pc = 0x4A1994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1990u;
            // 0x4a1994: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1998u; }
        if (ctx->pc != 0x4A1998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1998u; }
        if (ctx->pc != 0x4A1998u) { return; }
    }
    ctx->pc = 0x4A1998u;
label_4a1998:
    // 0x4a1998: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a1998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a199c:
    // 0x4a199c: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x4a199cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_4a19a0:
    // 0x4a19a0: 0x8c437c20  lw          $v1, 0x7C20($v0)
    ctx->pc = 0x4a19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31776)));
label_4a19a4:
    // 0x4a19a4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x4a19a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a19a8:
    // 0x4a19a8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x4a19a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a19ac:
    // 0x4a19ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4a19acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a19b0:
    // 0x4a19b0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x4a19b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a19b4:
    // 0x4a19b4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4a19b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a19b8:
    // 0x4a19b8: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x4a19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_4a19bc:
    // 0x4a19bc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x4a19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_4a19c0:
    // 0x4a19c0: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x4a19c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_4a19c4:
    // 0x4a19c4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4a19c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4a19c8:
    // 0x4a19c8: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x4a19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_4a19cc:
    // 0x4a19cc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4a19ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4a19d0:
    // 0x4a19d0: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x4a19d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_4a19d4:
    // 0x4a19d4: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x4a19d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_4a19d8:
    // 0x4a19d8: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x4a19d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_4a19dc:
    // 0x4a19dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a19e0:
    // 0x4a19e0: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x4a19e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_4a19e4:
    // 0x4a19e4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4a19e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4a19e8:
    // 0x4a19e8: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x4a19e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4a19ec:
    // 0x4a19ec: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x4a19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4a19f0:
    // 0x4a19f0: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x4a19f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4a19f4:
    // 0x4a19f4: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x4a19f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4a19f8:
    // 0x4a19f8: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x4a19f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_4a19fc:
    // 0x4a19fc: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x4a19fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4a1a00:
    // 0x4a1a00: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x4a1a00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_4a1a04:
    // 0x4a1a04: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x4a1a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4a1a08:
    // 0x4a1a08: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x4a1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_4a1a0c:
    // 0x4a1a0c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x4a1a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a1a10:
    // 0x4a1a10: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x4a1a10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_4a1a14:
    // 0x4a1a14: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x4a1a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a1a18:
    // 0x4a1a18: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4a1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4a1a1c:
    // 0x4a1a1c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x4a1a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1a20:
    // 0x4a1a20: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4a1a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4a1a24:
    // 0x4a1a24: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x4a1a24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4a1a28:
    // 0x4a1a28: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x4a1a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4a1a2c:
    // 0x4a1a2c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x4a1a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4a1a30:
    // 0x4a1a30: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x4a1a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a1a34:
    // 0x4a1a34: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x4a1a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a1a38:
    // 0x4a1a38: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x4a1a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1a3c:
    // 0x4a1a3c: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x4a1a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4a1a40:
    // 0x4a1a40: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x4a1a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4a1a44:
    // 0x4a1a44: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x4a1a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4a1a48:
    // 0x4a1a48: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x4a1a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4a1a4c:
    // 0x4a1a4c: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x4a1a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4a1a50:
    // 0x4a1a50: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x4a1a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4a1a54:
    // 0x4a1a54: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x4a1a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a1a58:
    // 0x4a1a58: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x4a1a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a1a5c:
    // 0x4a1a5c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4a1a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1a60:
    // 0x4a1a60: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x4a1a60u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4a1a64:
    // 0x4a1a64: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x4a1a64u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4a1a68:
    // 0x4a1a68: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x4a1a68u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4a1a6c:
    // 0x4a1a6c: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x4a1a6cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4a1a70:
    // 0x4a1a70: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x4a1a70u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4a1a74:
    // 0x4a1a74: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x4a1a74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4a1a78:
    // 0x4a1a78: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x4a1a78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4a1a7c:
    // 0x4a1a7c: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x4a1a7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4a1a80:
    // 0x4a1a80: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x4a1a80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4a1a84:
    // 0x4a1a84: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x4a1a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4a1a88:
    // 0x4a1a88: 0xc0a7a88  jal         func_29EA20
label_4a1a8c:
    if (ctx->pc == 0x4A1A8Cu) {
        ctx->pc = 0x4A1A8Cu;
            // 0x4a1a8c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4A1A90u;
        goto label_4a1a90;
    }
    ctx->pc = 0x4A1A88u;
    SET_GPR_U32(ctx, 31, 0x4A1A90u);
    ctx->pc = 0x4A1A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1A88u;
            // 0x4a1a8c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1A90u; }
        if (ctx->pc != 0x4A1A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1A90u; }
        if (ctx->pc != 0x4A1A90u) { return; }
    }
    ctx->pc = 0x4A1A90u;
label_4a1a90:
    // 0x4a1a90: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4a1a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4a1a94:
    // 0x4a1a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a1a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a98:
    // 0x4a1a98: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4a1a9c:
    if (ctx->pc == 0x4A1A9Cu) {
        ctx->pc = 0x4A1A9Cu;
            // 0x4a1a9c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4A1AA0u;
        goto label_4a1aa0;
    }
    ctx->pc = 0x4A1A98u;
    {
        const bool branch_taken_0x4a1a98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1A98u;
            // 0x4a1a9c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1a98) {
            ctx->pc = 0x4A1AE8u;
            goto label_4a1ae8;
        }
    }
    ctx->pc = 0x4A1AA0u;
label_4a1aa0:
    // 0x4a1aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a1aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1aa4:
    // 0x4a1aa4: 0xc088ef4  jal         func_223BD0
label_4a1aa8:
    if (ctx->pc == 0x4A1AA8u) {
        ctx->pc = 0x4A1AA8u;
            // 0x4a1aa8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4A1AACu;
        goto label_4a1aac;
    }
    ctx->pc = 0x4A1AA4u;
    SET_GPR_U32(ctx, 31, 0x4A1AACu);
    ctx->pc = 0x4A1AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1AA4u;
            // 0x4a1aa8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1AACu; }
        if (ctx->pc != 0x4A1AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1AACu; }
        if (ctx->pc != 0x4A1AACu) { return; }
    }
    ctx->pc = 0x4A1AACu;
label_4a1aac:
    // 0x4a1aac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4a1ab0:
    // 0x4a1ab0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4a1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4a1ab4:
    // 0x4a1ab4: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4a1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4a1ab8:
    // 0x4a1ab8: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4a1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4a1abc:
    // 0x4a1abc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a1abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4a1ac0:
    // 0x4a1ac0: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4a1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_4a1ac4:
    // 0x4a1ac4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a1ac8:
    // 0x4a1ac8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a1ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4a1acc:
    // 0x4a1acc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4a1accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4a1ad0:
    // 0x4a1ad0: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4a1ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4a1ad4:
    // 0x4a1ad4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4a1ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4a1ad8:
    // 0x4a1ad8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4a1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4a1adc:
    // 0x4a1adc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4a1adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4a1ae0:
    // 0x4a1ae0: 0xc088b38  jal         func_222CE0
label_4a1ae4:
    if (ctx->pc == 0x4A1AE4u) {
        ctx->pc = 0x4A1AE4u;
            // 0x4a1ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1AE8u;
        goto label_4a1ae8;
    }
    ctx->pc = 0x4A1AE0u;
    SET_GPR_U32(ctx, 31, 0x4A1AE8u);
    ctx->pc = 0x4A1AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1AE0u;
            // 0x4a1ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1AE8u; }
        if (ctx->pc != 0x4A1AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1AE8u; }
        if (ctx->pc != 0x4A1AE8u) { return; }
    }
    ctx->pc = 0x4A1AE8u;
label_4a1ae8:
    // 0x4a1ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a1ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1aec:
    // 0x4a1aec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4a1aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4a1af0:
    // 0x4a1af0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a1af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1af4:
    // 0x4a1af4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a1af4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1af8:
    // 0x4a1af8: 0xc08914c  jal         func_224530
label_4a1afc:
    if (ctx->pc == 0x4A1AFCu) {
        ctx->pc = 0x4A1AFCu;
            // 0x4a1afc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x4A1B00u;
        goto label_4a1b00;
    }
    ctx->pc = 0x4A1AF8u;
    SET_GPR_U32(ctx, 31, 0x4A1B00u);
    ctx->pc = 0x4A1AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1AF8u;
            // 0x4a1afc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1B00u; }
        if (ctx->pc != 0x4A1B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1B00u; }
        if (ctx->pc != 0x4A1B00u) { return; }
    }
    ctx->pc = 0x4A1B00u;
label_4a1b00:
    // 0x4a1b00: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4a1b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a1b04:
    // 0x4a1b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a1b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1b08:
    // 0x4a1b08: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4a1b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a1b0c:
    // 0x4a1b0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4a1b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4a1b10:
    // 0x4a1b10: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4a1b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1b14:
    // 0x4a1b14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4a1b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4a1b18:
    // 0x4a1b18: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4a1b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4a1b1c:
    // 0x4a1b1c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4a1b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4a1b20:
    // 0x4a1b20: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4a1b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4a1b24:
    // 0x4a1b24: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4a1b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4a1b28:
    // 0x4a1b28: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4a1b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4a1b2c:
    // 0x4a1b2c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4a1b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a1b30:
    // 0x4a1b30: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4a1b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a1b34:
    // 0x4a1b34: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4a1b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1b38:
    // 0x4a1b38: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4a1b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4a1b3c:
    // 0x4a1b3c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4a1b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4a1b40:
    // 0x4a1b40: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4a1b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4a1b44:
    // 0x4a1b44: 0xc0892b0  jal         func_224AC0
label_4a1b48:
    if (ctx->pc == 0x4A1B48u) {
        ctx->pc = 0x4A1B48u;
            // 0x4a1b48: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4A1B4Cu;
        goto label_4a1b4c;
    }
    ctx->pc = 0x4A1B44u;
    SET_GPR_U32(ctx, 31, 0x4A1B4Cu);
    ctx->pc = 0x4A1B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1B44u;
            // 0x4a1b48: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1B4Cu; }
        if (ctx->pc != 0x4A1B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1B4Cu; }
        if (ctx->pc != 0x4A1B4Cu) { return; }
    }
    ctx->pc = 0x4A1B4Cu;
label_4a1b4c:
    // 0x4a1b4c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x4a1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_4a1b50:
    // 0x4a1b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a1b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1b54:
    // 0x4a1b54: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4a1b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4a1b58:
    // 0x4a1b58: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4a1b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4a1b5c:
    // 0x4a1b5c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4a1b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4a1b60:
    // 0x4a1b60: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4a1b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4a1b64:
    // 0x4a1b64: 0xc0891d8  jal         func_224760
label_4a1b68:
    if (ctx->pc == 0x4A1B68u) {
        ctx->pc = 0x4A1B68u;
            // 0x4a1b68: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4A1B6Cu;
        goto label_4a1b6c;
    }
    ctx->pc = 0x4A1B64u;
    SET_GPR_U32(ctx, 31, 0x4A1B6Cu);
    ctx->pc = 0x4A1B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1B64u;
            // 0x4a1b68: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1B6Cu; }
        if (ctx->pc != 0x4A1B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1B6Cu; }
        if (ctx->pc != 0x4A1B6Cu) { return; }
    }
    ctx->pc = 0x4A1B6Cu;
label_4a1b6c:
    // 0x4a1b6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a1b70:
    // 0x4a1b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a1b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1b74:
    // 0x4a1b74: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4a1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4a1b78:
    // 0x4a1b78: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4a1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a1b7c:
    // 0x4a1b7c: 0xc08c164  jal         func_230590
label_4a1b80:
    if (ctx->pc == 0x4A1B80u) {
        ctx->pc = 0x4A1B80u;
            // 0x4a1b80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A1B84u;
        goto label_4a1b84;
    }
    ctx->pc = 0x4A1B7Cu;
    SET_GPR_U32(ctx, 31, 0x4A1B84u);
    ctx->pc = 0x4A1B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1B7Cu;
            // 0x4a1b80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1B84u; }
        if (ctx->pc != 0x4A1B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1B84u; }
        if (ctx->pc != 0x4A1B84u) { return; }
    }
    ctx->pc = 0x4A1B84u;
label_4a1b84:
    // 0x4a1b84: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4a1b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_4a1b88:
    // 0x4a1b88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a1b8c:
    // 0x4a1b8c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4a1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4a1b90:
    // 0x4a1b90: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4a1b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4a1b94:
    // 0x4a1b94: 0xc0a7a88  jal         func_29EA20
label_4a1b98:
    if (ctx->pc == 0x4A1B98u) {
        ctx->pc = 0x4A1B98u;
            // 0x4a1b98: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4A1B9Cu;
        goto label_4a1b9c;
    }
    ctx->pc = 0x4A1B94u;
    SET_GPR_U32(ctx, 31, 0x4A1B9Cu);
    ctx->pc = 0x4A1B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1B94u;
            // 0x4a1b98: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1B9Cu; }
        if (ctx->pc != 0x4A1B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1B9Cu; }
        if (ctx->pc != 0x4A1B9Cu) { return; }
    }
    ctx->pc = 0x4A1B9Cu;
label_4a1b9c:
    // 0x4a1b9c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4a1b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4a1ba0:
    // 0x4a1ba0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a1ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a1ba4:
    // 0x4a1ba4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4a1ba8:
    if (ctx->pc == 0x4A1BA8u) {
        ctx->pc = 0x4A1BA8u;
            // 0x4a1ba8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4A1BACu;
        goto label_4a1bac;
    }
    ctx->pc = 0x4A1BA4u;
    {
        const bool branch_taken_0x4a1ba4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1BA4u;
            // 0x4a1ba8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1ba4) {
            ctx->pc = 0x4A1BC8u;
            goto label_4a1bc8;
        }
    }
    ctx->pc = 0x4A1BACu;
label_4a1bac:
    // 0x4a1bac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a1bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a1bb0:
    // 0x4a1bb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a1bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1bb4:
    // 0x4a1bb4: 0xc0869d0  jal         func_21A740
label_4a1bb8:
    if (ctx->pc == 0x4A1BB8u) {
        ctx->pc = 0x4A1BB8u;
            // 0x4a1bb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1BBCu;
        goto label_4a1bbc;
    }
    ctx->pc = 0x4A1BB4u;
    SET_GPR_U32(ctx, 31, 0x4A1BBCu);
    ctx->pc = 0x4A1BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1BB4u;
            // 0x4a1bb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1BBCu; }
        if (ctx->pc != 0x4A1BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1BBCu; }
        if (ctx->pc != 0x4A1BBCu) { return; }
    }
    ctx->pc = 0x4A1BBCu;
label_4a1bbc:
    // 0x4a1bbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4a1bc0:
    // 0x4a1bc0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4a1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4a1bc4:
    // 0x4a1bc4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a1bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4a1bc8:
    // 0x4a1bc8: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4a1bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4a1bcc:
    // 0x4a1bcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a1bd0:
    // 0x4a1bd0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4a1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4a1bd4:
    // 0x4a1bd4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4a1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a1bd8:
    // 0x4a1bd8: 0xc08c650  jal         func_231940
label_4a1bdc:
    if (ctx->pc == 0x4A1BDCu) {
        ctx->pc = 0x4A1BDCu;
            // 0x4a1bdc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1BE0u;
        goto label_4a1be0;
    }
    ctx->pc = 0x4A1BD8u;
    SET_GPR_U32(ctx, 31, 0x4A1BE0u);
    ctx->pc = 0x4A1BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1BD8u;
            // 0x4a1bdc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1BE0u; }
        if (ctx->pc != 0x4A1BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1BE0u; }
        if (ctx->pc != 0x4A1BE0u) { return; }
    }
    ctx->pc = 0x4A1BE0u;
label_4a1be0:
    // 0x4a1be0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4a1be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1be4:
    // 0x4a1be4: 0x262400dc  addiu       $a0, $s1, 0xDC
    ctx->pc = 0x4a1be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
label_4a1be8:
    // 0x4a1be8: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x4a1be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4a1bec:
    // 0x4a1bec: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x4a1becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
label_4a1bf0:
    // 0x4a1bf0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x4a1bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1bf4:
    // 0x4a1bf4: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x4a1bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
label_4a1bf8:
    // 0x4a1bf8: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x4a1bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1bfc:
    // 0x4a1bfc: 0xe6200138  swc1        $f0, 0x138($s1)
    ctx->pc = 0x4a1bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
label_4a1c00:
    // 0x4a1c00: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4a1c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1c04:
    // 0x4a1c04: 0xc04c720  jal         func_131C80
label_4a1c08:
    if (ctx->pc == 0x4A1C08u) {
        ctx->pc = 0x4A1C08u;
            // 0x4a1c08: 0xe620013c  swc1        $f0, 0x13C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 316), bits); }
        ctx->pc = 0x4A1C0Cu;
        goto label_4a1c0c;
    }
    ctx->pc = 0x4A1C04u;
    SET_GPR_U32(ctx, 31, 0x4A1C0Cu);
    ctx->pc = 0x4A1C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1C04u;
            // 0x4a1c08: 0xe620013c  swc1        $f0, 0x13C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 316), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1C0Cu; }
        if (ctx->pc != 0x4A1C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1C0Cu; }
        if (ctx->pc != 0x4A1C0Cu) { return; }
    }
    ctx->pc = 0x4A1C0Cu;
label_4a1c0c:
    // 0x4a1c0c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x4a1c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1c10:
    // 0x4a1c10: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4a1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4a1c14:
    // 0x4a1c14: 0xc040180  jal         func_100600
label_4a1c18:
    if (ctx->pc == 0x4A1C18u) {
        ctx->pc = 0x4A1C18u;
            // 0x4a1c18: 0xe6200140  swc1        $f0, 0x140($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
        ctx->pc = 0x4A1C1Cu;
        goto label_4a1c1c;
    }
    ctx->pc = 0x4A1C14u;
    SET_GPR_U32(ctx, 31, 0x4A1C1Cu);
    ctx->pc = 0x4A1C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1C14u;
            // 0x4a1c18: 0xe6200140  swc1        $f0, 0x140($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1C1Cu; }
        if (ctx->pc != 0x4A1C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1C1Cu; }
        if (ctx->pc != 0x4A1C1Cu) { return; }
    }
    ctx->pc = 0x4A1C1Cu;
label_4a1c1c:
    // 0x4a1c1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a1c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a1c20:
    // 0x4a1c20: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_4a1c24:
    if (ctx->pc == 0x4A1C24u) {
        ctx->pc = 0x4A1C28u;
        goto label_4a1c28;
    }
    ctx->pc = 0x4A1C20u;
    {
        const bool branch_taken_0x4a1c20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1c20) {
            ctx->pc = 0x4A1CA0u;
            goto label_4a1ca0;
        }
    }
    ctx->pc = 0x4A1C28u;
label_4a1c28:
    // 0x4a1c28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4a1c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4a1c2c:
    // 0x4a1c2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a1c30:
    // 0x4a1c30: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4a1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4a1c34:
    // 0x4a1c34: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4a1c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a1c38:
    // 0x4a1c38: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4a1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4a1c3c:
    // 0x4a1c3c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4a1c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4a1c40:
    // 0x4a1c40: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4a1c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4a1c44:
    // 0x4a1c44: 0xc040138  jal         func_1004E0
label_4a1c48:
    if (ctx->pc == 0x4A1C48u) {
        ctx->pc = 0x4A1C48u;
            // 0x4a1c48: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4A1C4Cu;
        goto label_4a1c4c;
    }
    ctx->pc = 0x4A1C44u;
    SET_GPR_U32(ctx, 31, 0x4A1C4Cu);
    ctx->pc = 0x4A1C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1C44u;
            // 0x4a1c48: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1C4Cu; }
        if (ctx->pc != 0x4A1C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1C4Cu; }
        if (ctx->pc != 0x4A1C4Cu) { return; }
    }
    ctx->pc = 0x4A1C4Cu;
label_4a1c4c:
    // 0x4a1c4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a1c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4a1c50:
    // 0x4a1c50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a1c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a1c54:
    // 0x4a1c54: 0xc040138  jal         func_1004E0
label_4a1c58:
    if (ctx->pc == 0x4A1C58u) {
        ctx->pc = 0x4A1C58u;
            // 0x4a1c58: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x4A1C5Cu;
        goto label_4a1c5c;
    }
    ctx->pc = 0x4A1C54u;
    SET_GPR_U32(ctx, 31, 0x4A1C5Cu);
    ctx->pc = 0x4A1C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1C54u;
            // 0x4a1c58: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1C5Cu; }
        if (ctx->pc != 0x4A1C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1C5Cu; }
        if (ctx->pc != 0x4A1C5Cu) { return; }
    }
    ctx->pc = 0x4A1C5Cu;
label_4a1c5c:
    // 0x4a1c5c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x4a1c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_4a1c60:
    // 0x4a1c60: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x4a1c60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_4a1c64:
    // 0x4a1c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a1c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a1c68:
    // 0x4a1c68: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x4a1c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_4a1c6c:
    // 0x4a1c6c: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x4a1c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_4a1c70:
    // 0x4a1c70: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x4a1c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4a1c74:
    // 0x4a1c74: 0xc040840  jal         func_102100
label_4a1c78:
    if (ctx->pc == 0x4A1C78u) {
        ctx->pc = 0x4A1C78u;
            // 0x4a1c78: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4A1C7Cu;
        goto label_4a1c7c;
    }
    ctx->pc = 0x4A1C74u;
    SET_GPR_U32(ctx, 31, 0x4A1C7Cu);
    ctx->pc = 0x4A1C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1C74u;
            // 0x4a1c78: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1C7Cu; }
        if (ctx->pc != 0x4A1C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1C7Cu; }
        if (ctx->pc != 0x4A1C7Cu) { return; }
    }
    ctx->pc = 0x4A1C7Cu;
label_4a1c7c:
    // 0x4a1c7c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4a1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4a1c80:
    // 0x4a1c80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a1c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1c84:
    // 0x4a1c84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4a1c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4a1c88:
    // 0x4a1c88: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a1c88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4a1c8c:
    // 0x4a1c8c: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x4a1c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_4a1c90:
    // 0x4a1c90: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x4a1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_4a1c94:
    // 0x4a1c94: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4a1c94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4a1c98:
    // 0x4a1c98: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4a1c9c:
    if (ctx->pc == 0x4A1C9Cu) {
        ctx->pc = 0x4A1CA0u;
        goto label_4a1ca0;
    }
    ctx->pc = 0x4A1C98u;
    {
        const bool branch_taken_0x4a1c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a1c98) {
            ctx->pc = 0x4A1C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a1c84;
        }
    }
    ctx->pc = 0x4A1CA0u;
label_4a1ca0:
    // 0x4a1ca0: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x4a1ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_4a1ca4:
    // 0x4a1ca4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a1ca8:
    // 0x4a1ca8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4a1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4a1cac:
    // 0x4a1cac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a1cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a1cb0:
    // 0x4a1cb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a1cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1cb4:
    // 0x4a1cb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a1cb8:
    // 0x4a1cb8: 0xc0e7d2c  jal         func_39F4B0
label_4a1cbc:
    if (ctx->pc == 0x4A1CBCu) {
        ctx->pc = 0x4A1CBCu;
            // 0x4a1cbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1CC0u;
        goto label_4a1cc0;
    }
    ctx->pc = 0x4A1CB8u;
    SET_GPR_U32(ctx, 31, 0x4A1CC0u);
    ctx->pc = 0x4A1CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1CB8u;
            // 0x4a1cbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1CC0u; }
        if (ctx->pc != 0x4A1CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1CC0u; }
        if (ctx->pc != 0x4A1CC0u) { return; }
    }
    ctx->pc = 0x4A1CC0u;
label_4a1cc0:
    // 0x4a1cc0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x4a1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4a1cc4:
    // 0x4a1cc4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4a1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4a1cc8:
    // 0x4a1cc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a1cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a1ccc:
    // 0x4a1ccc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4a1cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a1cd0:
    // 0x4a1cd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a1cd4:
    // 0x4a1cd4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4a1cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a1cd8:
    // 0x4a1cd8: 0xc0e7d2c  jal         func_39F4B0
label_4a1cdc:
    if (ctx->pc == 0x4A1CDCu) {
        ctx->pc = 0x4A1CDCu;
            // 0x4a1cdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1CE0u;
        goto label_4a1ce0;
    }
    ctx->pc = 0x4A1CD8u;
    SET_GPR_U32(ctx, 31, 0x4A1CE0u);
    ctx->pc = 0x4A1CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1CD8u;
            // 0x4a1cdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1CE0u; }
        if (ctx->pc != 0x4A1CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1CE0u; }
        if (ctx->pc != 0x4A1CE0u) { return; }
    }
    ctx->pc = 0x4A1CE0u;
label_4a1ce0:
    // 0x4a1ce0: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x4a1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4a1ce4:
    // 0x4a1ce4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x4a1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_4a1ce8:
    // 0x4a1ce8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x4a1ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4a1cec:
    // 0x4a1cec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4a1cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a1cf0:
    // 0x4a1cf0: 0x2405f9ff  addiu       $a1, $zero, -0x601
    ctx->pc = 0x4a1cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_4a1cf4:
    // 0x4a1cf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1cf8:
    // 0x4a1cf8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a1cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4a1cfc:
    // 0x4a1cfc: 0x34880008  ori         $t0, $a0, 0x8
    ctx->pc = 0x4a1cfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_4a1d00:
    // 0x4a1d00: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x4a1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_4a1d04:
    // 0x4a1d04: 0xae2800b0  sw          $t0, 0xB0($s1)
    ctx->pc = 0x4a1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 8));
label_4a1d08:
    // 0x4a1d08: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4a1d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4a1d0c:
    // 0x4a1d0c: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x4a1d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_4a1d10:
    // 0x4a1d10: 0xa2270069  sb          $a3, 0x69($s1)
    ctx->pc = 0x4a1d10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 7));
label_4a1d14:
    // 0x4a1d14: 0xa226006a  sb          $a2, 0x6A($s1)
    ctx->pc = 0x4a1d14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 6));
label_4a1d18:
    // 0x4a1d18: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x4a1d18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_4a1d1c:
    // 0x4a1d1c: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x4a1d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4a1d20:
    // 0x4a1d20: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4a1d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4a1d24:
    // 0x4a1d24: 0x34a50600  ori         $a1, $a1, 0x600
    ctx->pc = 0x4a1d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1536);
label_4a1d28:
    // 0x4a1d28: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x4a1d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_4a1d2c:
    // 0x4a1d2c: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x4a1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
label_4a1d30:
    // 0x4a1d30: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x4a1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_4a1d34:
    // 0x4a1d34: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x4a1d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_4a1d38:
    // 0x4a1d38: 0xc040180  jal         func_100600
label_4a1d3c:
    if (ctx->pc == 0x4A1D3Cu) {
        ctx->pc = 0x4A1D3Cu;
            // 0x4a1d3c: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x4A1D40u;
        goto label_4a1d40;
    }
    ctx->pc = 0x4A1D38u;
    SET_GPR_U32(ctx, 31, 0x4A1D40u);
    ctx->pc = 0x4A1D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1D38u;
            // 0x4a1d3c: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1D40u; }
        if (ctx->pc != 0x4A1D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1D40u; }
        if (ctx->pc != 0x4A1D40u) { return; }
    }
    ctx->pc = 0x4A1D40u;
label_4a1d40:
    // 0x4a1d40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a1d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a1d44:
    // 0x4a1d44: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4a1d48:
    if (ctx->pc == 0x4A1D48u) {
        ctx->pc = 0x4A1D48u;
            // 0x4a1d48: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4A1D4Cu;
        goto label_4a1d4c;
    }
    ctx->pc = 0x4A1D44u;
    {
        const bool branch_taken_0x4a1d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1d44) {
            ctx->pc = 0x4A1D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1D44u;
            // 0x4a1d48: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A1D84u;
            goto label_4a1d84;
        }
    }
    ctx->pc = 0x4A1D4Cu;
label_4a1d4c:
    // 0x4a1d4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4a1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4a1d50:
    // 0x4a1d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1d54:
    // 0x4a1d54: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4a1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4a1d58:
    // 0x4a1d58: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4a1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4a1d5c:
    // 0x4a1d5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a1d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4a1d60:
    // 0x4a1d60: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4a1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4a1d64:
    // 0x4a1d64: 0xc040138  jal         func_1004E0
label_4a1d68:
    if (ctx->pc == 0x4A1D68u) {
        ctx->pc = 0x4A1D68u;
            // 0x4a1d68: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4A1D6Cu;
        goto label_4a1d6c;
    }
    ctx->pc = 0x4A1D64u;
    SET_GPR_U32(ctx, 31, 0x4A1D6Cu);
    ctx->pc = 0x4A1D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1D64u;
            // 0x4a1d68: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1D6Cu; }
        if (ctx->pc != 0x4A1D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1D6Cu; }
        if (ctx->pc != 0x4A1D6Cu) { return; }
    }
    ctx->pc = 0x4A1D6Cu;
label_4a1d6c:
    // 0x4a1d6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4a1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4a1d70:
    // 0x4a1d70: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4a1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4a1d74:
    // 0x4a1d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a1d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1d78:
    // 0x4a1d78: 0xc04a576  jal         func_1295D8
label_4a1d7c:
    if (ctx->pc == 0x4A1D7Cu) {
        ctx->pc = 0x4A1D7Cu;
            // 0x4a1d7c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A1D80u;
        goto label_4a1d80;
    }
    ctx->pc = 0x4A1D78u;
    SET_GPR_U32(ctx, 31, 0x4A1D80u);
    ctx->pc = 0x4A1D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1D78u;
            // 0x4a1d7c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1D80u; }
        if (ctx->pc != 0x4A1D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1D80u; }
        if (ctx->pc != 0x4A1D80u) { return; }
    }
    ctx->pc = 0x4A1D80u;
label_4a1d80:
    // 0x4a1d80: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4a1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4a1d84:
    // 0x4a1d84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4a1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4a1d88:
    // 0x4a1d88: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4a1d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4a1d8c:
    // 0x4a1d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a1d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1d90:
    // 0x4a1d90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a1d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a1d94:
    // 0x4a1d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a1d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1d98:
    // 0x4a1d98: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4a1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4a1d9c:
    // 0x4a1d9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a1d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1da0:
    // 0x4a1da0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4a1da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a1da4:
    // 0x4a1da4: 0x344616ae  ori         $a2, $v0, 0x16AE
    ctx->pc = 0x4a1da4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5806);
label_4a1da8:
    // 0x4a1da8: 0xc122cd8  jal         func_48B360
label_4a1dac:
    if (ctx->pc == 0x4A1DACu) {
        ctx->pc = 0x4A1DACu;
            // 0x4a1dac: 0xae30014c  sw          $s0, 0x14C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 16));
        ctx->pc = 0x4A1DB0u;
        goto label_4a1db0;
    }
    ctx->pc = 0x4A1DA8u;
    SET_GPR_U32(ctx, 31, 0x4A1DB0u);
    ctx->pc = 0x4A1DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1DA8u;
            // 0x4a1dac: 0xae30014c  sw          $s0, 0x14C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1DB0u; }
        if (ctx->pc != 0x4A1DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1DB0u; }
        if (ctx->pc != 0x4A1DB0u) { return; }
    }
    ctx->pc = 0x4A1DB0u;
label_4a1db0:
    // 0x4a1db0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a1db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4a1db4:
    // 0x4a1db4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a1db4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a1db8:
    // 0x4a1db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a1db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a1dbc:
    // 0x4a1dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a1dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a1dc0:
    // 0x4a1dc0: 0x3e00008  jr          $ra
label_4a1dc4:
    if (ctx->pc == 0x4A1DC4u) {
        ctx->pc = 0x4A1DC4u;
            // 0x4a1dc4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4A1DC8u;
        goto label_4a1dc8;
    }
    ctx->pc = 0x4A1DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1DC0u;
            // 0x4a1dc4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A1DC8u;
label_4a1dc8:
    // 0x4a1dc8: 0x0  nop
    ctx->pc = 0x4a1dc8u;
    // NOP
label_4a1dcc:
    // 0x4a1dcc: 0x0  nop
    ctx->pc = 0x4a1dccu;
    // NOP
label_4a1dd0:
    // 0x4a1dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a1dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a1dd4:
    // 0x4a1dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a1dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a1dd8:
    // 0x4a1dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a1dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a1ddc:
    // 0x4a1ddc: 0xc0e3580  jal         func_38D600
label_4a1de0:
    if (ctx->pc == 0x4A1DE0u) {
        ctx->pc = 0x4A1DE0u;
            // 0x4a1de0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1DE4u;
        goto label_4a1de4;
    }
    ctx->pc = 0x4A1DDCu;
    SET_GPR_U32(ctx, 31, 0x4A1DE4u);
    ctx->pc = 0x4A1DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1DDCu;
            // 0x4a1de0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1DE4u; }
        if (ctx->pc != 0x4A1DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1DE4u; }
        if (ctx->pc != 0x4A1DE4u) { return; }
    }
    ctx->pc = 0x4A1DE4u;
label_4a1de4:
    // 0x4a1de4: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x4a1de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4a1de8:
    // 0x4a1de8: 0x2403f9ff  addiu       $v1, $zero, -0x601
    ctx->pc = 0x4a1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_4a1dec:
    // 0x4a1dec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4a1decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4a1df0:
    // 0x4a1df0: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x4a1df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_4a1df4:
    // 0x4a1df4: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x4a1df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_4a1df8:
    // 0x4a1df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a1df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a1dfc:
    // 0x4a1dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a1dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a1e00:
    // 0x4a1e00: 0x3e00008  jr          $ra
label_4a1e04:
    if (ctx->pc == 0x4A1E04u) {
        ctx->pc = 0x4A1E04u;
            // 0x4a1e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4A1E08u;
        goto label_4a1e08;
    }
    ctx->pc = 0x4A1E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1E00u;
            // 0x4a1e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A1E08u;
label_4a1e08:
    // 0x4a1e08: 0x0  nop
    ctx->pc = 0x4a1e08u;
    // NOP
label_4a1e0c:
    // 0x4a1e0c: 0x0  nop
    ctx->pc = 0x4a1e0cu;
    // NOP
label_4a1e10:
    // 0x4a1e10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4a1e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4a1e14:
    // 0x4a1e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1e18:
    // 0x4a1e18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a1e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a1e1c:
    // 0x4a1e1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a1e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a1e20:
    // 0x4a1e20: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a1e20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a1e24:
    // 0x4a1e24: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x4a1e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4a1e28:
    // 0x4a1e28: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
label_4a1e2c:
    if (ctx->pc == 0x4A1E2Cu) {
        ctx->pc = 0x4A1E2Cu;
            // 0x4a1e2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1E30u;
        goto label_4a1e30;
    }
    ctx->pc = 0x4A1E28u;
    {
        const bool branch_taken_0x4a1e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A1E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1E28u;
            // 0x4a1e2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1e28) {
            ctx->pc = 0x4A1EB4u;
            goto label_4a1eb4;
        }
    }
    ctx->pc = 0x4A1E30u;
label_4a1e30:
    // 0x4a1e30: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_4a1e34:
    if (ctx->pc == 0x4A1E34u) {
        ctx->pc = 0x4A1E34u;
            // 0x4a1e34: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4A1E38u;
        goto label_4a1e38;
    }
    ctx->pc = 0x4A1E30u;
    {
        const bool branch_taken_0x4a1e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1e30) {
            ctx->pc = 0x4A1E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1E30u;
            // 0x4a1e34: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A1E40u;
            goto label_4a1e40;
        }
    }
    ctx->pc = 0x4A1E38u;
label_4a1e38:
    // 0x4a1e38: 0x10000136  b           . + 4 + (0x136 << 2)
label_4a1e3c:
    if (ctx->pc == 0x4A1E3Cu) {
        ctx->pc = 0x4A1E3Cu;
            // 0x4a1e3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4A1E40u;
        goto label_4a1e40;
    }
    ctx->pc = 0x4A1E38u;
    {
        const bool branch_taken_0x4a1e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1E38u;
            // 0x4a1e3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1e38) {
            ctx->pc = 0x4A2314u;
            goto label_4a2314;
        }
    }
    ctx->pc = 0x4A1E40u;
label_4a1e40:
    // 0x4a1e40: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x4a1e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_4a1e44:
    // 0x4a1e44: 0x320f809  jalr        $t9
label_4a1e48:
    if (ctx->pc == 0x4A1E48u) {
        ctx->pc = 0x4A1E4Cu;
        goto label_4a1e4c;
    }
    ctx->pc = 0x4A1E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A1E4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A1E4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A1E4Cu; }
            if (ctx->pc != 0x4A1E4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A1E4Cu;
label_4a1e4c:
    // 0x4a1e4c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a1e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a1e50:
    // 0x4a1e50: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4a1e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4a1e54:
    // 0x4a1e54: 0x8c637c20  lw          $v1, 0x7C20($v1)
    ctx->pc = 0x4a1e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31776)));
label_4a1e58:
    // 0x4a1e58: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x4a1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4a1e5c:
    // 0x4a1e5c: 0x8c680030  lw          $t0, 0x30($v1)
    ctx->pc = 0x4a1e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_4a1e60:
    // 0x4a1e60: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x4a1e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
label_4a1e64:
    // 0x4a1e64: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4a1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4a1e68:
    // 0x4a1e68: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x4a1e68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a1e6c:
    // 0x4a1e6c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x4a1e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4a1e70:
    // 0x4a1e70: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4a1e70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4a1e74:
    // 0x4a1e74: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4a1e74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_4a1e78:
    // 0x4a1e78: 0x8c643f68  lw          $a0, 0x3F68($v1)
    ctx->pc = 0x4a1e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16232)));
label_4a1e7c:
    // 0x4a1e7c: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x4a1e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_4a1e80:
    // 0x4a1e80: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x4a1e80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_4a1e84:
    // 0x4a1e84: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x4a1e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4a1e88:
    // 0x4a1e88: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4a1e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4a1e8c:
    // 0x4a1e8c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4a1e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4a1e90:
    // 0x4a1e90: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x4a1e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4a1e94:
    // 0x4a1e94: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4a1e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4a1e98:
    // 0x4a1e98: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4a1e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4a1e9c:
    // 0x4a1e9c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x4a1e9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4a1ea0:
    // 0x4a1ea0: 0x1d20fff3  bgtz        $t1, . + 4 + (-0xD << 2)
label_4a1ea4:
    if (ctx->pc == 0x4A1EA4u) {
        ctx->pc = 0x4A1EA4u;
            // 0x4a1ea4: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4A1EA8u;
        goto label_4a1ea8;
    }
    ctx->pc = 0x4A1EA0u;
    {
        const bool branch_taken_0x4a1ea0 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x4A1EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1EA0u;
            // 0x4a1ea4: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1ea0) {
            ctx->pc = 0x4A1E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a1e70;
        }
    }
    ctx->pc = 0x4A1EA8u;
label_4a1ea8:
    // 0x4a1ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1eac:
    // 0x4a1eac: 0x10000118  b           . + 4 + (0x118 << 2)
label_4a1eb0:
    if (ctx->pc == 0x4A1EB0u) {
        ctx->pc = 0x4A1EB0u;
            // 0x4a1eb0: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x4A1EB4u;
        goto label_4a1eb4;
    }
    ctx->pc = 0x4A1EACu;
    {
        const bool branch_taken_0x4a1eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1EACu;
            // 0x4a1eb0: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1eac) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A1EB4u;
label_4a1eb4:
    // 0x4a1eb4: 0xc0b6e68  jal         func_2DB9A0
label_4a1eb8:
    if (ctx->pc == 0x4A1EB8u) {
        ctx->pc = 0x4A1EB8u;
            // 0x4a1eb8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A1EBCu;
        goto label_4a1ebc;
    }
    ctx->pc = 0x4A1EB4u;
    SET_GPR_U32(ctx, 31, 0x4A1EBCu);
    ctx->pc = 0x4A1EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1EB4u;
            // 0x4a1eb8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1EBCu; }
        if (ctx->pc != 0x4A1EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1EBCu; }
        if (ctx->pc != 0x4A1EBCu) { return; }
    }
    ctx->pc = 0x4A1EBCu;
label_4a1ebc:
    // 0x4a1ebc: 0xc1288d0  jal         func_4A2340
label_4a1ec0:
    if (ctx->pc == 0x4A1EC0u) {
        ctx->pc = 0x4A1EC0u;
            // 0x4a1ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1EC4u;
        goto label_4a1ec4;
    }
    ctx->pc = 0x4A1EBCu;
    SET_GPR_U32(ctx, 31, 0x4A1EC4u);
    ctx->pc = 0x4A1EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1EBCu;
            // 0x4a1ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A2340u;
    if (runtime->hasFunction(0x4A2340u)) {
        auto targetFn = runtime->lookupFunction(0x4A2340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1EC4u; }
        if (ctx->pc != 0x4A1EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A2340_0x4a2340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1EC4u; }
        if (ctx->pc != 0x4A1EC4u) { return; }
    }
    ctx->pc = 0x4A1EC4u;
label_4a1ec4:
    // 0x4a1ec4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a1ec8:
    // 0x4a1ec8: 0x504300b6  beql        $v0, $v1, . + 4 + (0xB6 << 2)
label_4a1ecc:
    if (ctx->pc == 0x4A1ECCu) {
        ctx->pc = 0x4A1ECCu;
            // 0x4a1ecc: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4A1ED0u;
        goto label_4a1ed0;
    }
    ctx->pc = 0x4A1EC8u;
    {
        const bool branch_taken_0x4a1ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a1ec8) {
            ctx->pc = 0x4A1ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1EC8u;
            // 0x4a1ecc: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A21A4u;
            goto label_4a21a4;
        }
    }
    ctx->pc = 0x4A1ED0u;
label_4a1ed0:
    // 0x4a1ed0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a1ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a1ed4:
    // 0x4a1ed4: 0x50430093  beql        $v0, $v1, . + 4 + (0x93 << 2)
label_4a1ed8:
    if (ctx->pc == 0x4A1ED8u) {
        ctx->pc = 0x4A1ED8u;
            // 0x4a1ed8: 0x92030144  lbu         $v1, 0x144($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->pc = 0x4A1EDCu;
        goto label_4a1edc;
    }
    ctx->pc = 0x4A1ED4u;
    {
        const bool branch_taken_0x4a1ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a1ed4) {
            ctx->pc = 0x4A1ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1ED4u;
            // 0x4a1ed8: 0x92030144  lbu         $v1, 0x144($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A2124u;
            goto label_4a2124;
        }
    }
    ctx->pc = 0x4A1EDCu;
label_4a1edc:
    // 0x4a1edc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a1ee0:
    // 0x4a1ee0: 0x50430033  beql        $v0, $v1, . + 4 + (0x33 << 2)
label_4a1ee4:
    if (ctx->pc == 0x4A1EE4u) {
        ctx->pc = 0x4A1EE4u;
            // 0x4a1ee4: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4A1EE8u;
        goto label_4a1ee8;
    }
    ctx->pc = 0x4A1EE0u;
    {
        const bool branch_taken_0x4a1ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a1ee0) {
            ctx->pc = 0x4A1EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1EE0u;
            // 0x4a1ee4: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A1FB0u;
            goto label_4a1fb0;
        }
    }
    ctx->pc = 0x4A1EE8u;
label_4a1ee8:
    // 0x4a1ee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a1ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1eec:
    // 0x4a1eec: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_4a1ef0:
    if (ctx->pc == 0x4A1EF0u) {
        ctx->pc = 0x4A1EF4u;
        goto label_4a1ef4;
    }
    ctx->pc = 0x4A1EECu;
    {
        const bool branch_taken_0x4a1eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a1eec) {
            ctx->pc = 0x4A1F04u;
            goto label_4a1f04;
        }
    }
    ctx->pc = 0x4A1EF4u;
label_4a1ef4:
    // 0x4a1ef4: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
label_4a1ef8:
    if (ctx->pc == 0x4A1EF8u) {
        ctx->pc = 0x4A1EFCu;
        goto label_4a1efc;
    }
    ctx->pc = 0x4A1EF4u;
    {
        const bool branch_taken_0x4a1ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1ef4) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A1EFCu;
label_4a1efc:
    // 0x4a1efc: 0x10000104  b           . + 4 + (0x104 << 2)
label_4a1f00:
    if (ctx->pc == 0x4A1F00u) {
        ctx->pc = 0x4A1F04u;
        goto label_4a1f04;
    }
    ctx->pc = 0x4A1EFCu;
    {
        const bool branch_taken_0x4a1efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1efc) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A1F04u;
label_4a1f04:
    // 0x4a1f04: 0xc0775b8  jal         func_1DD6E0
label_4a1f08:
    if (ctx->pc == 0x4A1F08u) {
        ctx->pc = 0x4A1F0Cu;
        goto label_4a1f0c;
    }
    ctx->pc = 0x4A1F04u;
    SET_GPR_U32(ctx, 31, 0x4A1F0Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F0Cu; }
        if (ctx->pc != 0x4A1F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F0Cu; }
        if (ctx->pc != 0x4A1F0Cu) { return; }
    }
    ctx->pc = 0x4A1F0Cu;
label_4a1f0c:
    // 0x4a1f0c: 0xc0775b4  jal         func_1DD6D0
label_4a1f10:
    if (ctx->pc == 0x4A1F10u) {
        ctx->pc = 0x4A1F10u;
            // 0x4a1f10: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A1F14u;
        goto label_4a1f14;
    }
    ctx->pc = 0x4A1F0Cu;
    SET_GPR_U32(ctx, 31, 0x4A1F14u);
    ctx->pc = 0x4A1F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1F0Cu;
            // 0x4a1f10: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F14u; }
        if (ctx->pc != 0x4A1F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F14u; }
        if (ctx->pc != 0x4A1F14u) { return; }
    }
    ctx->pc = 0x4A1F14u;
label_4a1f14:
    // 0x4a1f14: 0xc60200f8  lwc1        $f2, 0xF8($s0)
    ctx->pc = 0x4a1f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a1f18:
    // 0x4a1f18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4a1f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a1f1c:
    // 0x4a1f1c: 0x0  nop
    ctx->pc = 0x4a1f1cu;
    // NOP
label_4a1f20:
    // 0x4a1f20: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4a1f20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4a1f24:
    // 0x4a1f24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4a1f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a1f28:
    // 0x4a1f28: 0x450000f9  bc1f        . + 4 + (0xF9 << 2)
label_4a1f2c:
    if (ctx->pc == 0x4A1F2Cu) {
        ctx->pc = 0x4A1F2Cu;
            // 0x4a1f2c: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->pc = 0x4A1F30u;
        goto label_4a1f30;
    }
    ctx->pc = 0x4A1F28u;
    {
        const bool branch_taken_0x4a1f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A1F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1F28u;
            // 0x4a1f2c: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1f28) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A1F30u;
label_4a1f30:
    // 0x4a1f30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4a1f34:
    // 0x4a1f34: 0xc0b6de4  jal         func_2DB790
label_4a1f38:
    if (ctx->pc == 0x4A1F38u) {
        ctx->pc = 0x4A1F38u;
            // 0x4a1f38: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->pc = 0x4A1F3Cu;
        goto label_4a1f3c;
    }
    ctx->pc = 0x4A1F34u;
    SET_GPR_U32(ctx, 31, 0x4A1F3Cu);
    ctx->pc = 0x4A1F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1F34u;
            // 0x4a1f38: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F3Cu; }
        if (ctx->pc != 0x4A1F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F3Cu; }
        if (ctx->pc != 0x4A1F3Cu) { return; }
    }
    ctx->pc = 0x4A1F3Cu;
label_4a1f3c:
    // 0x4a1f3c: 0xc0b6e84  jal         func_2DBA10
label_4a1f40:
    if (ctx->pc == 0x4A1F40u) {
        ctx->pc = 0x4A1F44u;
        goto label_4a1f44;
    }
    ctx->pc = 0x4A1F3Cu;
    SET_GPR_U32(ctx, 31, 0x4A1F44u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F44u; }
        if (ctx->pc != 0x4A1F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F44u; }
        if (ctx->pc != 0x4A1F44u) { return; }
    }
    ctx->pc = 0x4A1F44u;
label_4a1f44:
    // 0x4a1f44: 0xc0b6e60  jal         func_2DB980
label_4a1f48:
    if (ctx->pc == 0x4A1F48u) {
        ctx->pc = 0x4A1F48u;
            // 0x4a1f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1F4Cu;
        goto label_4a1f4c;
    }
    ctx->pc = 0x4A1F44u;
    SET_GPR_U32(ctx, 31, 0x4A1F4Cu);
    ctx->pc = 0x4A1F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1F44u;
            // 0x4a1f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F4Cu; }
        if (ctx->pc != 0x4A1F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F4Cu; }
        if (ctx->pc != 0x4A1F4Cu) { return; }
    }
    ctx->pc = 0x4A1F4Cu;
label_4a1f4c:
    // 0x4a1f4c: 0xc0b6e38  jal         func_2DB8E0
label_4a1f50:
    if (ctx->pc == 0x4A1F50u) {
        ctx->pc = 0x4A1F50u;
            // 0x4a1f50: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x4A1F54u;
        goto label_4a1f54;
    }
    ctx->pc = 0x4A1F4Cu;
    SET_GPR_U32(ctx, 31, 0x4A1F54u);
    ctx->pc = 0x4A1F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1F4Cu;
            // 0x4a1f50: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F54u; }
        if (ctx->pc != 0x4A1F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F54u; }
        if (ctx->pc != 0x4A1F54u) { return; }
    }
    ctx->pc = 0x4A1F54u;
label_4a1f54:
    // 0x4a1f54: 0xc0775b8  jal         func_1DD6E0
label_4a1f58:
    if (ctx->pc == 0x4A1F58u) {
        ctx->pc = 0x4A1F58u;
            // 0x4a1f58: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4A1F5Cu;
        goto label_4a1f5c;
    }
    ctx->pc = 0x4A1F54u;
    SET_GPR_U32(ctx, 31, 0x4A1F5Cu);
    ctx->pc = 0x4A1F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1F54u;
            // 0x4a1f58: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F5Cu; }
        if (ctx->pc != 0x4A1F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F5Cu; }
        if (ctx->pc != 0x4A1F5Cu) { return; }
    }
    ctx->pc = 0x4A1F5Cu;
label_4a1f5c:
    // 0x4a1f5c: 0xc0775b4  jal         func_1DD6D0
label_4a1f60:
    if (ctx->pc == 0x4A1F60u) {
        ctx->pc = 0x4A1F60u;
            // 0x4a1f60: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A1F64u;
        goto label_4a1f64;
    }
    ctx->pc = 0x4A1F5Cu;
    SET_GPR_U32(ctx, 31, 0x4A1F64u);
    ctx->pc = 0x4A1F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1F5Cu;
            // 0x4a1f60: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F64u; }
        if (ctx->pc != 0x4A1F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F64u; }
        if (ctx->pc != 0x4A1F64u) { return; }
    }
    ctx->pc = 0x4A1F64u;
label_4a1f64:
    // 0x4a1f64: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x4a1f64u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4a1f68:
    // 0x4a1f68: 0xc0b6e28  jal         func_2DB8A0
label_4a1f6c:
    if (ctx->pc == 0x4A1F6Cu) {
        ctx->pc = 0x4A1F6Cu;
            // 0x4a1f6c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A1F70u;
        goto label_4a1f70;
    }
    ctx->pc = 0x4A1F68u;
    SET_GPR_U32(ctx, 31, 0x4A1F70u);
    ctx->pc = 0x4A1F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1F68u;
            // 0x4a1f6c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F70u; }
        if (ctx->pc != 0x4A1F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F70u; }
        if (ctx->pc != 0x4A1F70u) { return; }
    }
    ctx->pc = 0x4A1F70u;
label_4a1f70:
    // 0x4a1f70: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4a1f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4a1f74:
    // 0x4a1f74: 0xc0e07f8  jal         func_381FE0
label_4a1f78:
    if (ctx->pc == 0x4A1F78u) {
        ctx->pc = 0x4A1F78u;
            // 0x4a1f78: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A1F7Cu;
        goto label_4a1f7c;
    }
    ctx->pc = 0x4A1F74u;
    SET_GPR_U32(ctx, 31, 0x4A1F7Cu);
    ctx->pc = 0x4A1F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1F74u;
            // 0x4a1f78: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F7Cu; }
        if (ctx->pc != 0x4A1F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F7Cu; }
        if (ctx->pc != 0x4A1F7Cu) { return; }
    }
    ctx->pc = 0x4A1F7Cu;
label_4a1f7c:
    // 0x4a1f7c: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x4a1f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a1f80:
    // 0x4a1f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a1f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1f84:
    // 0x4a1f84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4a1f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a1f88:
    // 0x4a1f88: 0xc1288cc  jal         func_4A2330
label_4a1f8c:
    if (ctx->pc == 0x4A1F8Cu) {
        ctx->pc = 0x4A1F8Cu;
            // 0x4a1f8c: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->pc = 0x4A1F90u;
        goto label_4a1f90;
    }
    ctx->pc = 0x4A1F88u;
    SET_GPR_U32(ctx, 31, 0x4A1F90u);
    ctx->pc = 0x4A1F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1F88u;
            // 0x4a1f8c: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A2330u;
    if (runtime->hasFunction(0x4A2330u)) {
        auto targetFn = runtime->lookupFunction(0x4A2330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F90u; }
        if (ctx->pc != 0x4A1F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A2330_0x4a2330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F90u; }
        if (ctx->pc != 0x4A1F90u) { return; }
    }
    ctx->pc = 0x4A1F90u;
label_4a1f90:
    // 0x4a1f90: 0xc0d1c10  jal         func_347040
label_4a1f94:
    if (ctx->pc == 0x4A1F94u) {
        ctx->pc = 0x4A1F94u;
            // 0x4a1f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1F98u;
        goto label_4a1f98;
    }
    ctx->pc = 0x4A1F90u;
    SET_GPR_U32(ctx, 31, 0x4A1F98u);
    ctx->pc = 0x4A1F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1F90u;
            // 0x4a1f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F98u; }
        if (ctx->pc != 0x4A1F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1F98u; }
        if (ctx->pc != 0x4A1F98u) { return; }
    }
    ctx->pc = 0x4A1F98u;
label_4a1f98:
    // 0x4a1f98: 0x8e04014c  lw          $a0, 0x14C($s0)
    ctx->pc = 0x4a1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_4a1f9c:
    // 0x4a1f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a1f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1fa0:
    // 0x4a1fa0: 0xc122d2c  jal         func_48B4B0
label_4a1fa4:
    if (ctx->pc == 0x4A1FA4u) {
        ctx->pc = 0x4A1FA4u;
            // 0x4a1fa4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A1FA8u;
        goto label_4a1fa8;
    }
    ctx->pc = 0x4A1FA0u;
    SET_GPR_U32(ctx, 31, 0x4A1FA8u);
    ctx->pc = 0x4A1FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1FA0u;
            // 0x4a1fa4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FA8u; }
        if (ctx->pc != 0x4A1FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FA8u; }
        if (ctx->pc != 0x4A1FA8u) { return; }
    }
    ctx->pc = 0x4A1FA8u;
label_4a1fa8:
    // 0x4a1fa8: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_4a1fac:
    if (ctx->pc == 0x4A1FACu) {
        ctx->pc = 0x4A1FB0u;
        goto label_4a1fb0;
    }
    ctx->pc = 0x4A1FA8u;
    {
        const bool branch_taken_0x4a1fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1fa8) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A1FB0u;
label_4a1fb0:
    // 0x4a1fb0: 0xc088b74  jal         func_222DD0
label_4a1fb4:
    if (ctx->pc == 0x4A1FB4u) {
        ctx->pc = 0x4A1FB8u;
        goto label_4a1fb8;
    }
    ctx->pc = 0x4A1FB0u;
    SET_GPR_U32(ctx, 31, 0x4A1FB8u);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FB8u; }
        if (ctx->pc != 0x4A1FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FB8u; }
        if (ctx->pc != 0x4A1FB8u) { return; }
    }
    ctx->pc = 0x4A1FB8u;
label_4a1fb8:
    // 0x4a1fb8: 0xc0775b8  jal         func_1DD6E0
label_4a1fbc:
    if (ctx->pc == 0x4A1FBCu) {
        ctx->pc = 0x4A1FC0u;
        goto label_4a1fc0;
    }
    ctx->pc = 0x4A1FB8u;
    SET_GPR_U32(ctx, 31, 0x4A1FC0u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FC0u; }
        if (ctx->pc != 0x4A1FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FC0u; }
        if (ctx->pc != 0x4A1FC0u) { return; }
    }
    ctx->pc = 0x4A1FC0u;
label_4a1fc0:
    // 0x4a1fc0: 0xc0775b4  jal         func_1DD6D0
label_4a1fc4:
    if (ctx->pc == 0x4A1FC4u) {
        ctx->pc = 0x4A1FC4u;
            // 0x4a1fc4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A1FC8u;
        goto label_4a1fc8;
    }
    ctx->pc = 0x4A1FC0u;
    SET_GPR_U32(ctx, 31, 0x4A1FC8u);
    ctx->pc = 0x4A1FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1FC0u;
            // 0x4a1fc4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FC8u; }
        if (ctx->pc != 0x4A1FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FC8u; }
        if (ctx->pc != 0x4A1FC8u) { return; }
    }
    ctx->pc = 0x4A1FC8u;
label_4a1fc8:
    // 0x4a1fc8: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x4a1fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a1fcc:
    // 0x4a1fcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4a1fccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4a1fd0:
    // 0x4a1fd0: 0xc0775b8  jal         func_1DD6E0
label_4a1fd4:
    if (ctx->pc == 0x4A1FD4u) {
        ctx->pc = 0x4A1FD4u;
            // 0x4a1fd4: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->pc = 0x4A1FD8u;
        goto label_4a1fd8;
    }
    ctx->pc = 0x4A1FD0u;
    SET_GPR_U32(ctx, 31, 0x4A1FD8u);
    ctx->pc = 0x4A1FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1FD0u;
            // 0x4a1fd4: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FD8u; }
        if (ctx->pc != 0x4A1FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FD8u; }
        if (ctx->pc != 0x4A1FD8u) { return; }
    }
    ctx->pc = 0x4A1FD8u;
label_4a1fd8:
    // 0x4a1fd8: 0xc0775b4  jal         func_1DD6D0
label_4a1fdc:
    if (ctx->pc == 0x4A1FDCu) {
        ctx->pc = 0x4A1FDCu;
            // 0x4a1fdc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A1FE0u;
        goto label_4a1fe0;
    }
    ctx->pc = 0x4A1FD8u;
    SET_GPR_U32(ctx, 31, 0x4A1FE0u);
    ctx->pc = 0x4A1FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1FD8u;
            // 0x4a1fdc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FE0u; }
        if (ctx->pc != 0x4A1FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1FE0u; }
        if (ctx->pc != 0x4A1FE0u) { return; }
    }
    ctx->pc = 0x4A1FE0u;
label_4a1fe0:
    // 0x4a1fe0: 0xc60200d8  lwc1        $f2, 0xD8($s0)
    ctx->pc = 0x4a1fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a1fe4:
    // 0x4a1fe4: 0xc60300ec  lwc1        $f3, 0xEC($s0)
    ctx->pc = 0x4a1fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4a1fe8:
    // 0x4a1fe8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4a1fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a1fec:
    // 0x4a1fec: 0x0  nop
    ctx->pc = 0x4a1fecu;
    // NOP
label_4a1ff0:
    // 0x4a1ff0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4a1ff0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4a1ff4:
    // 0x4a1ff4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x4a1ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_4a1ff8:
    // 0x4a1ff8: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x4a1ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
label_4a1ffc:
    // 0x4a1ffc: 0xc60c0130  lwc1        $f12, 0x130($s0)
    ctx->pc = 0x4a1ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a2000:
    // 0x4a2000: 0xc60d00d8  lwc1        $f13, 0xD8($s0)
    ctx->pc = 0x4a2000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4a2004:
    // 0x4a2004: 0xc60e0138  lwc1        $f14, 0x138($s0)
    ctx->pc = 0x4a2004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4a2008:
    // 0x4a2008: 0xc0d3f08  jal         func_34FC20
label_4a200c:
    if (ctx->pc == 0x4A200Cu) {
        ctx->pc = 0x4A200Cu;
            // 0x4a200c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A2010u;
        goto label_4a2010;
    }
    ctx->pc = 0x4A2008u;
    SET_GPR_U32(ctx, 31, 0x4A2010u);
    ctx->pc = 0x4A200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2008u;
            // 0x4a200c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2010u; }
        if (ctx->pc != 0x4A2010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2010u; }
        if (ctx->pc != 0x4A2010u) { return; }
    }
    ctx->pc = 0x4A2010u;
label_4a2010:
    // 0x4a2010: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x4a2010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a2014:
    // 0x4a2014: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a2014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a2018:
    // 0x4a2018: 0x0  nop
    ctx->pc = 0x4a2018u;
    // NOP
label_4a201c:
    // 0x4a201c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x4a201cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a2020:
    // 0x4a2020: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_4a2024:
    if (ctx->pc == 0x4A2024u) {
        ctx->pc = 0x4A2028u;
        goto label_4a2028;
    }
    ctx->pc = 0x4A2020u;
    {
        const bool branch_taken_0x4a2020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a2020) {
            ctx->pc = 0x4A2058u;
            goto label_4a2058;
        }
    }
    ctx->pc = 0x4A2028u;
label_4a2028:
    // 0x4a2028: 0xe60c00f8  swc1        $f12, 0xF8($s0)
    ctx->pc = 0x4a2028u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
label_4a202c:
    // 0x4a202c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4a202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4a2030:
    // 0x4a2030: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4a2030u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4a2034:
    // 0x4a2034: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4a2034u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4a2038:
    // 0x4a2038: 0xc0b6df0  jal         func_2DB7C0
label_4a203c:
    if (ctx->pc == 0x4A203Cu) {
        ctx->pc = 0x4A203Cu;
            // 0x4a203c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4A2040u;
        goto label_4a2040;
    }
    ctx->pc = 0x4A2038u;
    SET_GPR_U32(ctx, 31, 0x4A2040u);
    ctx->pc = 0x4A203Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2038u;
            // 0x4a203c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2040u; }
        if (ctx->pc != 0x4A2040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2040u; }
        if (ctx->pc != 0x4A2040u) { return; }
    }
    ctx->pc = 0x4A2040u;
label_4a2040:
    // 0x4a2040: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4a2040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4a2044:
    // 0x4a2044: 0xc0e07f8  jal         func_381FE0
label_4a2048:
    if (ctx->pc == 0x4A2048u) {
        ctx->pc = 0x4A2048u;
            // 0x4a2048: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4A204Cu;
        goto label_4a204c;
    }
    ctx->pc = 0x4A2044u;
    SET_GPR_U32(ctx, 31, 0x4A204Cu);
    ctx->pc = 0x4A2048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2044u;
            // 0x4a2048: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A204Cu; }
        if (ctx->pc != 0x4A204Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A204Cu; }
        if (ctx->pc != 0x4A204Cu) { return; }
    }
    ctx->pc = 0x4A204Cu;
label_4a204c:
    // 0x4a204c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a204cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a2050:
    // 0x4a2050: 0xc1288cc  jal         func_4A2330
label_4a2054:
    if (ctx->pc == 0x4A2054u) {
        ctx->pc = 0x4A2054u;
            // 0x4a2054: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A2058u;
        goto label_4a2058;
    }
    ctx->pc = 0x4A2050u;
    SET_GPR_U32(ctx, 31, 0x4A2058u);
    ctx->pc = 0x4A2054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2050u;
            // 0x4a2054: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A2330u;
    if (runtime->hasFunction(0x4A2330u)) {
        auto targetFn = runtime->lookupFunction(0x4A2330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2058u; }
        if (ctx->pc != 0x4A2058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A2330_0x4a2330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2058u; }
        if (ctx->pc != 0x4A2058u) { return; }
    }
    ctx->pc = 0x4A2058u;
label_4a2058:
    // 0x4a2058: 0xc0775b8  jal         func_1DD6E0
label_4a205c:
    if (ctx->pc == 0x4A205Cu) {
        ctx->pc = 0x4A2060u;
        goto label_4a2060;
    }
    ctx->pc = 0x4A2058u;
    SET_GPR_U32(ctx, 31, 0x4A2060u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2060u; }
        if (ctx->pc != 0x4A2060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2060u; }
        if (ctx->pc != 0x4A2060u) { return; }
    }
    ctx->pc = 0x4A2060u;
label_4a2060:
    // 0x4a2060: 0xc0775b4  jal         func_1DD6D0
label_4a2064:
    if (ctx->pc == 0x4A2064u) {
        ctx->pc = 0x4A2064u;
            // 0x4a2064: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A2068u;
        goto label_4a2068;
    }
    ctx->pc = 0x4A2060u;
    SET_GPR_U32(ctx, 31, 0x4A2068u);
    ctx->pc = 0x4A2064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2060u;
            // 0x4a2064: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2068u; }
        if (ctx->pc != 0x4A2068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2068u; }
        if (ctx->pc != 0x4A2068u) { return; }
    }
    ctx->pc = 0x4A2068u;
label_4a2068:
    // 0x4a2068: 0xc6020148  lwc1        $f2, 0x148($s0)
    ctx->pc = 0x4a2068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a206c:
    // 0x4a206c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x4a206cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_4a2070:
    // 0x4a2070: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a2070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a2074:
    // 0x4a2074: 0x0  nop
    ctx->pc = 0x4a2074u;
    // NOP
label_4a2078:
    // 0x4a2078: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x4a2078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4a207c:
    // 0x4a207c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4a207cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a2080:
    // 0x4a2080: 0x450100a3  bc1t        . + 4 + (0xA3 << 2)
label_4a2084:
    if (ctx->pc == 0x4A2084u) {
        ctx->pc = 0x4A2084u;
            // 0x4a2084: 0xe6000148  swc1        $f0, 0x148($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
        ctx->pc = 0x4A2088u;
        goto label_4a2088;
    }
    ctx->pc = 0x4A2080u;
    {
        const bool branch_taken_0x4a2080 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A2084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2080u;
            // 0x4a2084: 0xe6000148  swc1        $f0, 0x148($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2080) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A2088u;
label_4a2088:
    // 0x4a2088: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x4a2088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
label_4a208c:
    // 0x4a208c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x4a208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_4a2090:
    // 0x4a2090: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4a2090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4a2094:
    // 0x4a2094: 0x1020009e  beqz        $at, . + 4 + (0x9E << 2)
label_4a2098:
    if (ctx->pc == 0x4A2098u) {
        ctx->pc = 0x4A209Cu;
        goto label_4a209c;
    }
    ctx->pc = 0x4A2094u;
    {
        const bool branch_taken_0x4a2094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2094) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A209Cu;
label_4a209c:
    // 0x4a209c: 0xc0d1c10  jal         func_347040
label_4a20a0:
    if (ctx->pc == 0x4A20A0u) {
        ctx->pc = 0x4A20A0u;
            // 0x4a20a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A20A4u;
        goto label_4a20a4;
    }
    ctx->pc = 0x4A209Cu;
    SET_GPR_U32(ctx, 31, 0x4A20A4u);
    ctx->pc = 0x4A20A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A209Cu;
            // 0x4a20a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A20A4u; }
        if (ctx->pc != 0x4A20A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A20A4u; }
        if (ctx->pc != 0x4A20A4u) { return; }
    }
    ctx->pc = 0x4A20A4u;
label_4a20a4:
    // 0x4a20a4: 0xc0adc64  jal         func_2B7190
label_4a20a8:
    if (ctx->pc == 0x4A20A8u) {
        ctx->pc = 0x4A20A8u;
            // 0x4a20a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A20ACu;
        goto label_4a20ac;
    }
    ctx->pc = 0x4A20A4u;
    SET_GPR_U32(ctx, 31, 0x4A20ACu);
    ctx->pc = 0x4A20A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A20A4u;
            // 0x4a20a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    if (runtime->hasFunction(0x2B7190u)) {
        auto targetFn = runtime->lookupFunction(0x2B7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A20ACu; }
        if (ctx->pc != 0x4A20ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7190_0x2b7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A20ACu; }
        if (ctx->pc != 0x4A20ACu) { return; }
    }
    ctx->pc = 0x4A20ACu;
label_4a20ac:
    // 0x4a20ac: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x4a20acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a20b0:
    // 0x4a20b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a20b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a20b4:
    // 0x4a20b4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x4a20b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a20b8:
    // 0x4a20b8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x4a20b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a20bc:
    // 0x4a20bc: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x4a20bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4a20c0:
    // 0x4a20c0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x4a20c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4a20c4:
    // 0x4a20c4: 0xc0adc64  jal         func_2B7190
label_4a20c8:
    if (ctx->pc == 0x4A20C8u) {
        ctx->pc = 0x4A20C8u;
            // 0x4a20c8: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x4A20CCu;
        goto label_4a20cc;
    }
    ctx->pc = 0x4A20C4u;
    SET_GPR_U32(ctx, 31, 0x4A20CCu);
    ctx->pc = 0x4A20C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A20C4u;
            // 0x4a20c8: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    if (runtime->hasFunction(0x2B7190u)) {
        auto targetFn = runtime->lookupFunction(0x2B7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A20CCu; }
        if (ctx->pc != 0x4A20CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7190_0x2b7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A20CCu; }
        if (ctx->pc != 0x4A20CCu) { return; }
    }
    ctx->pc = 0x4A20CCu;
label_4a20cc:
    // 0x4a20cc: 0x3c0340cc  lui         $v1, 0x40CC
    ctx->pc = 0x4a20ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16588 << 16));
label_4a20d0:
    // 0x4a20d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4a20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a20d4:
    // 0x4a20d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4a20d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4a20d8:
    // 0x4a20d8: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x4a20d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4a20dc:
    // 0x4a20dc: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x4a20dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a20e0:
    // 0x4a20e0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x4a20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a20e4:
    // 0x4a20e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a20e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a20e8:
    // 0x4a20e8: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x4a20e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4a20ec:
    // 0x4a20ec: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x4a20ecu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4a20f0:
    // 0x4a20f0: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x4a20f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a20f4:
    // 0x4a20f4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x4a20f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a20f8:
    // 0x4a20f8: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x4a20f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a20fc:
    // 0x4a20fc: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x4a20fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4a2100:
    // 0x4a2100: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x4a2100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4a2104:
    // 0x4a2104: 0xc7ae0098  lwc1        $f14, 0x98($sp)
    ctx->pc = 0x4a2104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4a2108:
    // 0x4a2108: 0xc7af0080  lwc1        $f15, 0x80($sp)
    ctx->pc = 0x4a2108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_4a210c:
    // 0x4a210c: 0xc7b00084  lwc1        $f16, 0x84($sp)
    ctx->pc = 0x4a210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_4a2110:
    // 0x4a2110: 0xc7b10088  lwc1        $f17, 0x88($sp)
    ctx->pc = 0x4a2110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_4a2114:
    // 0x4a2114: 0xc0bafb8  jal         func_2EBEE0
label_4a2118:
    if (ctx->pc == 0x4A2118u) {
        ctx->pc = 0x4A2118u;
            // 0x4a2118: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4A211Cu;
        goto label_4a211c;
    }
    ctx->pc = 0x4A2114u;
    SET_GPR_U32(ctx, 31, 0x4A211Cu);
    ctx->pc = 0x4A2118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2114u;
            // 0x4a2118: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A211Cu; }
        if (ctx->pc != 0x4A211Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A211Cu; }
        if (ctx->pc != 0x4A211Cu) { return; }
    }
    ctx->pc = 0x4A211Cu;
label_4a211c:
    // 0x4a211c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_4a2120:
    if (ctx->pc == 0x4A2120u) {
        ctx->pc = 0x4A2124u;
        goto label_4a2124;
    }
    ctx->pc = 0x4A211Cu;
    {
        const bool branch_taken_0x4a211c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a211c) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A2124u;
label_4a2124:
    // 0x4a2124: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
label_4a2128:
    if (ctx->pc == 0x4A2128u) {
        ctx->pc = 0x4A212Cu;
        goto label_4a212c;
    }
    ctx->pc = 0x4A2124u;
    {
        const bool branch_taken_0x4a2124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2124) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A212Cu;
label_4a212c:
    // 0x4a212c: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x4a212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a2130:
    // 0x4a2130: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a2130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4a2134:
    // 0x4a2134: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x4a2134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_4a2138:
    // 0x4a2138: 0xc0b6de4  jal         func_2DB790
label_4a213c:
    if (ctx->pc == 0x4A213Cu) {
        ctx->pc = 0x4A213Cu;
            // 0x4a213c: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->pc = 0x4A2140u;
        goto label_4a2140;
    }
    ctx->pc = 0x4A2138u;
    SET_GPR_U32(ctx, 31, 0x4A2140u);
    ctx->pc = 0x4A213Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2138u;
            // 0x4a213c: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2140u; }
        if (ctx->pc != 0x4A2140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2140u; }
        if (ctx->pc != 0x4A2140u) { return; }
    }
    ctx->pc = 0x4A2140u;
label_4a2140:
    // 0x4a2140: 0xc0b6e84  jal         func_2DBA10
label_4a2144:
    if (ctx->pc == 0x4A2144u) {
        ctx->pc = 0x4A2148u;
        goto label_4a2148;
    }
    ctx->pc = 0x4A2140u;
    SET_GPR_U32(ctx, 31, 0x4A2148u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2148u; }
        if (ctx->pc != 0x4A2148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2148u; }
        if (ctx->pc != 0x4A2148u) { return; }
    }
    ctx->pc = 0x4A2148u;
label_4a2148:
    // 0x4a2148: 0xc0b6e60  jal         func_2DB980
label_4a214c:
    if (ctx->pc == 0x4A214Cu) {
        ctx->pc = 0x4A214Cu;
            // 0x4a214c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A2150u;
        goto label_4a2150;
    }
    ctx->pc = 0x4A2148u;
    SET_GPR_U32(ctx, 31, 0x4A2150u);
    ctx->pc = 0x4A214Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2148u;
            // 0x4a214c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2150u; }
        if (ctx->pc != 0x4A2150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2150u; }
        if (ctx->pc != 0x4A2150u) { return; }
    }
    ctx->pc = 0x4A2150u;
label_4a2150:
    // 0x4a2150: 0xc0b6e38  jal         func_2DB8E0
label_4a2154:
    if (ctx->pc == 0x4A2154u) {
        ctx->pc = 0x4A2154u;
            // 0x4a2154: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x4A2158u;
        goto label_4a2158;
    }
    ctx->pc = 0x4A2150u;
    SET_GPR_U32(ctx, 31, 0x4A2158u);
    ctx->pc = 0x4A2154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2150u;
            // 0x4a2154: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2158u; }
        if (ctx->pc != 0x4A2158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2158u; }
        if (ctx->pc != 0x4A2158u) { return; }
    }
    ctx->pc = 0x4A2158u;
label_4a2158:
    // 0x4a2158: 0xc0775b8  jal         func_1DD6E0
label_4a215c:
    if (ctx->pc == 0x4A215Cu) {
        ctx->pc = 0x4A215Cu;
            // 0x4a215c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4A2160u;
        goto label_4a2160;
    }
    ctx->pc = 0x4A2158u;
    SET_GPR_U32(ctx, 31, 0x4A2160u);
    ctx->pc = 0x4A215Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2158u;
            // 0x4a215c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2160u; }
        if (ctx->pc != 0x4A2160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2160u; }
        if (ctx->pc != 0x4A2160u) { return; }
    }
    ctx->pc = 0x4A2160u;
label_4a2160:
    // 0x4a2160: 0xc0775b4  jal         func_1DD6D0
label_4a2164:
    if (ctx->pc == 0x4A2164u) {
        ctx->pc = 0x4A2164u;
            // 0x4a2164: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A2168u;
        goto label_4a2168;
    }
    ctx->pc = 0x4A2160u;
    SET_GPR_U32(ctx, 31, 0x4A2168u);
    ctx->pc = 0x4A2164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2160u;
            // 0x4a2164: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2168u; }
        if (ctx->pc != 0x4A2168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2168u; }
        if (ctx->pc != 0x4A2168u) { return; }
    }
    ctx->pc = 0x4A2168u;
label_4a2168:
    // 0x4a2168: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x4a2168u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4a216c:
    // 0x4a216c: 0xc0b6e28  jal         func_2DB8A0
label_4a2170:
    if (ctx->pc == 0x4A2170u) {
        ctx->pc = 0x4A2170u;
            // 0x4a2170: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A2174u;
        goto label_4a2174;
    }
    ctx->pc = 0x4A216Cu;
    SET_GPR_U32(ctx, 31, 0x4A2174u);
    ctx->pc = 0x4A2170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A216Cu;
            // 0x4a2170: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2174u; }
        if (ctx->pc != 0x4A2174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2174u; }
        if (ctx->pc != 0x4A2174u) { return; }
    }
    ctx->pc = 0x4A2174u;
label_4a2174:
    // 0x4a2174: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a2174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a2178:
    // 0x4a2178: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a2178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a217c:
    // 0x4a217c: 0xc0b6e28  jal         func_2DB8A0
label_4a2180:
    if (ctx->pc == 0x4A2180u) {
        ctx->pc = 0x4A2180u;
            // 0x4a2180: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A2184u;
        goto label_4a2184;
    }
    ctx->pc = 0x4A217Cu;
    SET_GPR_U32(ctx, 31, 0x4A2184u);
    ctx->pc = 0x4A2180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A217Cu;
            // 0x4a2180: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2184u; }
        if (ctx->pc != 0x4A2184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2184u; }
        if (ctx->pc != 0x4A2184u) { return; }
    }
    ctx->pc = 0x4A2184u;
label_4a2184:
    // 0x4a2184: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4a2184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4a2188:
    // 0x4a2188: 0xc0e07f8  jal         func_381FE0
label_4a218c:
    if (ctx->pc == 0x4A218Cu) {
        ctx->pc = 0x4A218Cu;
            // 0x4a218c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A2190u;
        goto label_4a2190;
    }
    ctx->pc = 0x4A2188u;
    SET_GPR_U32(ctx, 31, 0x4A2190u);
    ctx->pc = 0x4A218Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2188u;
            // 0x4a218c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2190u; }
        if (ctx->pc != 0x4A2190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2190u; }
        if (ctx->pc != 0x4A2190u) { return; }
    }
    ctx->pc = 0x4A2190u;
label_4a2190:
    // 0x4a2190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a2190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a2194:
    // 0x4a2194: 0xc1288cc  jal         func_4A2330
label_4a2198:
    if (ctx->pc == 0x4A2198u) {
        ctx->pc = 0x4A2198u;
            // 0x4a2198: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4A219Cu;
        goto label_4a219c;
    }
    ctx->pc = 0x4A2194u;
    SET_GPR_U32(ctx, 31, 0x4A219Cu);
    ctx->pc = 0x4A2198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2194u;
            // 0x4a2198: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A2330u;
    if (runtime->hasFunction(0x4A2330u)) {
        auto targetFn = runtime->lookupFunction(0x4A2330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A219Cu; }
        if (ctx->pc != 0x4A219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A2330_0x4a2330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A219Cu; }
        if (ctx->pc != 0x4A219Cu) { return; }
    }
    ctx->pc = 0x4A219Cu;
label_4a219c:
    // 0x4a219c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_4a21a0:
    if (ctx->pc == 0x4A21A0u) {
        ctx->pc = 0x4A21A0u;
            // 0x4a21a0: 0xa2000144  sb          $zero, 0x144($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 324), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4A21A4u;
        goto label_4a21a4;
    }
    ctx->pc = 0x4A219Cu;
    {
        const bool branch_taken_0x4a219c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A21A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A219Cu;
            // 0x4a21a0: 0xa2000144  sb          $zero, 0x144($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 324), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a219c) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A21A4u;
label_4a21a4:
    // 0x4a21a4: 0xc088b74  jal         func_222DD0
label_4a21a8:
    if (ctx->pc == 0x4A21A8u) {
        ctx->pc = 0x4A21ACu;
        goto label_4a21ac;
    }
    ctx->pc = 0x4A21A4u;
    SET_GPR_U32(ctx, 31, 0x4A21ACu);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A21ACu; }
        if (ctx->pc != 0x4A21ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A21ACu; }
        if (ctx->pc != 0x4A21ACu) { return; }
    }
    ctx->pc = 0x4A21ACu;
label_4a21ac:
    // 0x4a21ac: 0xc0775b8  jal         func_1DD6E0
label_4a21b0:
    if (ctx->pc == 0x4A21B0u) {
        ctx->pc = 0x4A21B4u;
        goto label_4a21b4;
    }
    ctx->pc = 0x4A21ACu;
    SET_GPR_U32(ctx, 31, 0x4A21B4u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A21B4u; }
        if (ctx->pc != 0x4A21B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A21B4u; }
        if (ctx->pc != 0x4A21B4u) { return; }
    }
    ctx->pc = 0x4A21B4u;
label_4a21b4:
    // 0x4a21b4: 0xc0775b4  jal         func_1DD6D0
label_4a21b8:
    if (ctx->pc == 0x4A21B8u) {
        ctx->pc = 0x4A21B8u;
            // 0x4a21b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A21BCu;
        goto label_4a21bc;
    }
    ctx->pc = 0x4A21B4u;
    SET_GPR_U32(ctx, 31, 0x4A21BCu);
    ctx->pc = 0x4A21B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A21B4u;
            // 0x4a21b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A21BCu; }
        if (ctx->pc != 0x4A21BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A21BCu; }
        if (ctx->pc != 0x4A21BCu) { return; }
    }
    ctx->pc = 0x4A21BCu;
label_4a21bc:
    // 0x4a21bc: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x4a21bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a21c0:
    // 0x4a21c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4a21c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4a21c4:
    // 0x4a21c4: 0xc0775b8  jal         func_1DD6E0
label_4a21c8:
    if (ctx->pc == 0x4A21C8u) {
        ctx->pc = 0x4A21C8u;
            // 0x4a21c8: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->pc = 0x4A21CCu;
        goto label_4a21cc;
    }
    ctx->pc = 0x4A21C4u;
    SET_GPR_U32(ctx, 31, 0x4A21CCu);
    ctx->pc = 0x4A21C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A21C4u;
            // 0x4a21c8: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A21CCu; }
        if (ctx->pc != 0x4A21CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A21CCu; }
        if (ctx->pc != 0x4A21CCu) { return; }
    }
    ctx->pc = 0x4A21CCu;
label_4a21cc:
    // 0x4a21cc: 0xc0775b4  jal         func_1DD6D0
label_4a21d0:
    if (ctx->pc == 0x4A21D0u) {
        ctx->pc = 0x4A21D0u;
            // 0x4a21d0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A21D4u;
        goto label_4a21d4;
    }
    ctx->pc = 0x4A21CCu;
    SET_GPR_U32(ctx, 31, 0x4A21D4u);
    ctx->pc = 0x4A21D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A21CCu;
            // 0x4a21d0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A21D4u; }
        if (ctx->pc != 0x4A21D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A21D4u; }
        if (ctx->pc != 0x4A21D4u) { return; }
    }
    ctx->pc = 0x4A21D4u;
label_4a21d4:
    // 0x4a21d4: 0xc60200d8  lwc1        $f2, 0xD8($s0)
    ctx->pc = 0x4a21d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a21d8:
    // 0x4a21d8: 0xc60300ec  lwc1        $f3, 0xEC($s0)
    ctx->pc = 0x4a21d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4a21dc:
    // 0x4a21dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4a21dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a21e0:
    // 0x4a21e0: 0x0  nop
    ctx->pc = 0x4a21e0u;
    // NOP
label_4a21e4:
    // 0x4a21e4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4a21e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4a21e8:
    // 0x4a21e8: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x4a21e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_4a21ec:
    // 0x4a21ec: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x4a21ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
label_4a21f0:
    // 0x4a21f0: 0xc60c0130  lwc1        $f12, 0x130($s0)
    ctx->pc = 0x4a21f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a21f4:
    // 0x4a21f4: 0xc60d00d8  lwc1        $f13, 0xD8($s0)
    ctx->pc = 0x4a21f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4a21f8:
    // 0x4a21f8: 0xc60e0138  lwc1        $f14, 0x138($s0)
    ctx->pc = 0x4a21f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4a21fc:
    // 0x4a21fc: 0xc0d3f08  jal         func_34FC20
label_4a2200:
    if (ctx->pc == 0x4A2200u) {
        ctx->pc = 0x4A2200u;
            // 0x4a2200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A2204u;
        goto label_4a2204;
    }
    ctx->pc = 0x4A21FCu;
    SET_GPR_U32(ctx, 31, 0x4A2204u);
    ctx->pc = 0x4A2200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A21FCu;
            // 0x4a2200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2204u; }
        if (ctx->pc != 0x4A2204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2204u; }
        if (ctx->pc != 0x4A2204u) { return; }
    }
    ctx->pc = 0x4A2204u;
label_4a2204:
    // 0x4a2204: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x4a2204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a2208:
    // 0x4a2208: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a2208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a220c:
    // 0x4a220c: 0x0  nop
    ctx->pc = 0x4a220cu;
    // NOP
label_4a2210:
    // 0x4a2210: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x4a2210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a2214:
    // 0x4a2214: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_4a2218:
    if (ctx->pc == 0x4A2218u) {
        ctx->pc = 0x4A221Cu;
        goto label_4a221c;
    }
    ctx->pc = 0x4A2214u;
    {
        const bool branch_taken_0x4a2214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a2214) {
            ctx->pc = 0x4A224Cu;
            goto label_4a224c;
        }
    }
    ctx->pc = 0x4A221Cu;
label_4a221c:
    // 0x4a221c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4a221cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4a2220:
    // 0x4a2220: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4a2220u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4a2224:
    // 0x4a2224: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4a2224u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4a2228:
    // 0x4a2228: 0xc0b6df0  jal         func_2DB7C0
label_4a222c:
    if (ctx->pc == 0x4A222Cu) {
        ctx->pc = 0x4A222Cu;
            // 0x4a222c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4A2230u;
        goto label_4a2230;
    }
    ctx->pc = 0x4A2228u;
    SET_GPR_U32(ctx, 31, 0x4A2230u);
    ctx->pc = 0x4A222Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2228u;
            // 0x4a222c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2230u; }
        if (ctx->pc != 0x4A2230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2230u; }
        if (ctx->pc != 0x4A2230u) { return; }
    }
    ctx->pc = 0x4A2230u;
label_4a2230:
    // 0x4a2230: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4a2230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4a2234:
    // 0x4a2234: 0xc0e07f8  jal         func_381FE0
label_4a2238:
    if (ctx->pc == 0x4A2238u) {
        ctx->pc = 0x4A2238u;
            // 0x4a2238: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A223Cu;
        goto label_4a223c;
    }
    ctx->pc = 0x4A2234u;
    SET_GPR_U32(ctx, 31, 0x4A223Cu);
    ctx->pc = 0x4A2238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2234u;
            // 0x4a2238: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A223Cu; }
        if (ctx->pc != 0x4A223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A223Cu; }
        if (ctx->pc != 0x4A223Cu) { return; }
    }
    ctx->pc = 0x4A223Cu;
label_4a223c:
    // 0x4a223c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a2240:
    // 0x4a2240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a2240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2244:
    // 0x4a2244: 0xc1288cc  jal         func_4A2330
label_4a2248:
    if (ctx->pc == 0x4A2248u) {
        ctx->pc = 0x4A2248u;
            // 0x4a2248: 0xae0000f8  sw          $zero, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
        ctx->pc = 0x4A224Cu;
        goto label_4a224c;
    }
    ctx->pc = 0x4A2244u;
    SET_GPR_U32(ctx, 31, 0x4A224Cu);
    ctx->pc = 0x4A2248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2244u;
            // 0x4a2248: 0xae0000f8  sw          $zero, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A2330u;
    if (runtime->hasFunction(0x4A2330u)) {
        auto targetFn = runtime->lookupFunction(0x4A2330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A224Cu; }
        if (ctx->pc != 0x4A224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A2330_0x4a2330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A224Cu; }
        if (ctx->pc != 0x4A224Cu) { return; }
    }
    ctx->pc = 0x4A224Cu;
label_4a224c:
    // 0x4a224c: 0xc0775b8  jal         func_1DD6E0
label_4a2250:
    if (ctx->pc == 0x4A2250u) {
        ctx->pc = 0x4A2254u;
        goto label_4a2254;
    }
    ctx->pc = 0x4A224Cu;
    SET_GPR_U32(ctx, 31, 0x4A2254u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2254u; }
        if (ctx->pc != 0x4A2254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2254u; }
        if (ctx->pc != 0x4A2254u) { return; }
    }
    ctx->pc = 0x4A2254u;
label_4a2254:
    // 0x4a2254: 0xc0775b4  jal         func_1DD6D0
label_4a2258:
    if (ctx->pc == 0x4A2258u) {
        ctx->pc = 0x4A2258u;
            // 0x4a2258: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A225Cu;
        goto label_4a225c;
    }
    ctx->pc = 0x4A2254u;
    SET_GPR_U32(ctx, 31, 0x4A225Cu);
    ctx->pc = 0x4A2258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2254u;
            // 0x4a2258: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A225Cu; }
        if (ctx->pc != 0x4A225Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A225Cu; }
        if (ctx->pc != 0x4A225Cu) { return; }
    }
    ctx->pc = 0x4A225Cu;
label_4a225c:
    // 0x4a225c: 0xc6020148  lwc1        $f2, 0x148($s0)
    ctx->pc = 0x4a225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a2260:
    // 0x4a2260: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x4a2260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_4a2264:
    // 0x4a2264: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a2264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a2268:
    // 0x4a2268: 0x0  nop
    ctx->pc = 0x4a2268u;
    // NOP
label_4a226c:
    // 0x4a226c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x4a226cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4a2270:
    // 0x4a2270: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4a2270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a2274:
    // 0x4a2274: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_4a2278:
    if (ctx->pc == 0x4A2278u) {
        ctx->pc = 0x4A2278u;
            // 0x4a2278: 0xe6000148  swc1        $f0, 0x148($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
        ctx->pc = 0x4A227Cu;
        goto label_4a227c;
    }
    ctx->pc = 0x4A2274u;
    {
        const bool branch_taken_0x4a2274 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A2278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2274u;
            // 0x4a2278: 0xe6000148  swc1        $f0, 0x148($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2274) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A227Cu;
label_4a227c:
    // 0x4a227c: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x4a227cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
label_4a2280:
    // 0x4a2280: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x4a2280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_4a2284:
    // 0x4a2284: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4a2284u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4a2288:
    // 0x4a2288: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_4a228c:
    if (ctx->pc == 0x4A228Cu) {
        ctx->pc = 0x4A2290u;
        goto label_4a2290;
    }
    ctx->pc = 0x4A2288u;
    {
        const bool branch_taken_0x4a2288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2288) {
            ctx->pc = 0x4A2310u;
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A2290u;
label_4a2290:
    // 0x4a2290: 0xc0d1c10  jal         func_347040
label_4a2294:
    if (ctx->pc == 0x4A2294u) {
        ctx->pc = 0x4A2294u;
            // 0x4a2294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A2298u;
        goto label_4a2298;
    }
    ctx->pc = 0x4A2290u;
    SET_GPR_U32(ctx, 31, 0x4A2298u);
    ctx->pc = 0x4A2294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2290u;
            // 0x4a2294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2298u; }
        if (ctx->pc != 0x4A2298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2298u; }
        if (ctx->pc != 0x4A2298u) { return; }
    }
    ctx->pc = 0x4A2298u;
label_4a2298:
    // 0x4a2298: 0xc0adc64  jal         func_2B7190
label_4a229c:
    if (ctx->pc == 0x4A229Cu) {
        ctx->pc = 0x4A229Cu;
            // 0x4a229c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A22A0u;
        goto label_4a22a0;
    }
    ctx->pc = 0x4A2298u;
    SET_GPR_U32(ctx, 31, 0x4A22A0u);
    ctx->pc = 0x4A229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2298u;
            // 0x4a229c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    if (runtime->hasFunction(0x2B7190u)) {
        auto targetFn = runtime->lookupFunction(0x2B7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A22A0u; }
        if (ctx->pc != 0x4A22A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7190_0x2b7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A22A0u; }
        if (ctx->pc != 0x4A22A0u) { return; }
    }
    ctx->pc = 0x4A22A0u;
label_4a22a0:
    // 0x4a22a0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x4a22a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a22a4:
    // 0x4a22a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a22a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a22a8:
    // 0x4a22a8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x4a22a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a22ac:
    // 0x4a22ac: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x4a22acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a22b0:
    // 0x4a22b0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x4a22b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4a22b4:
    // 0x4a22b4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x4a22b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_4a22b8:
    // 0x4a22b8: 0xc0adc64  jal         func_2B7190
label_4a22bc:
    if (ctx->pc == 0x4A22BCu) {
        ctx->pc = 0x4A22BCu;
            // 0x4a22bc: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x4A22C0u;
        goto label_4a22c0;
    }
    ctx->pc = 0x4A22B8u;
    SET_GPR_U32(ctx, 31, 0x4A22C0u);
    ctx->pc = 0x4A22BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A22B8u;
            // 0x4a22bc: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    if (runtime->hasFunction(0x2B7190u)) {
        auto targetFn = runtime->lookupFunction(0x2B7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A22C0u; }
        if (ctx->pc != 0x4A22C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7190_0x2b7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A22C0u; }
        if (ctx->pc != 0x4A22C0u) { return; }
    }
    ctx->pc = 0x4A22C0u;
label_4a22c0:
    // 0x4a22c0: 0x3c0340cc  lui         $v1, 0x40CC
    ctx->pc = 0x4a22c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16588 << 16));
label_4a22c4:
    // 0x4a22c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4a22c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a22c8:
    // 0x4a22c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4a22c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4a22cc:
    // 0x4a22cc: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x4a22ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4a22d0:
    // 0x4a22d0: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x4a22d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a22d4:
    // 0x4a22d4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4a22d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a22d8:
    // 0x4a22d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a22d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a22dc:
    // 0x4a22dc: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x4a22dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4a22e0:
    // 0x4a22e0: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x4a22e0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4a22e4:
    // 0x4a22e4: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x4a22e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a22e8:
    // 0x4a22e8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x4a22e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a22ec:
    // 0x4a22ec: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x4a22ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a22f0:
    // 0x4a22f0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x4a22f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4a22f4:
    // 0x4a22f4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x4a22f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4a22f8:
    // 0x4a22f8: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x4a22f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4a22fc:
    // 0x4a22fc: 0xc7af0060  lwc1        $f15, 0x60($sp)
    ctx->pc = 0x4a22fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_4a2300:
    // 0x4a2300: 0xc7b00064  lwc1        $f16, 0x64($sp)
    ctx->pc = 0x4a2300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_4a2304:
    // 0x4a2304: 0xc7b10068  lwc1        $f17, 0x68($sp)
    ctx->pc = 0x4a2304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_4a2308:
    // 0x4a2308: 0xc0bafb8  jal         func_2EBEE0
label_4a230c:
    if (ctx->pc == 0x4A230Cu) {
        ctx->pc = 0x4A230Cu;
            // 0x4a230c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4A2310u;
        goto label_4a2310;
    }
    ctx->pc = 0x4A2308u;
    SET_GPR_U32(ctx, 31, 0x4A2310u);
    ctx->pc = 0x4A230Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2308u;
            // 0x4a230c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2310u; }
        if (ctx->pc != 0x4A2310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2310u; }
        if (ctx->pc != 0x4A2310u) { return; }
    }
    ctx->pc = 0x4A2310u;
label_4a2310:
    // 0x4a2310: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a2310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a2314:
    // 0x4a2314: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a2314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a2318:
    // 0x4a2318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a2318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a231c:
    // 0x4a231c: 0x3e00008  jr          $ra
label_4a2320:
    if (ctx->pc == 0x4A2320u) {
        ctx->pc = 0x4A2320u;
            // 0x4a2320: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4A2324u;
        goto label_4a2324;
    }
    ctx->pc = 0x4A231Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A231Cu;
            // 0x4a2320: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A2324u;
label_4a2324:
    // 0x4a2324: 0x0  nop
    ctx->pc = 0x4a2324u;
    // NOP
label_4a2328:
    // 0x4a2328: 0x0  nop
    ctx->pc = 0x4a2328u;
    // NOP
label_4a232c:
    // 0x4a232c: 0x0  nop
    ctx->pc = 0x4a232cu;
    // NOP
}
