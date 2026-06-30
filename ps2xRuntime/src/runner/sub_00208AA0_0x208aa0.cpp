#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00208AA0
// Address: 0x208aa0 - 0x209510
void sub_00208AA0_0x208aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208AA0_0x208aa0");
#endif

    switch (ctx->pc) {
        case 0x208aa0u: goto label_208aa0;
        case 0x208aa4u: goto label_208aa4;
        case 0x208aa8u: goto label_208aa8;
        case 0x208aacu: goto label_208aac;
        case 0x208ab0u: goto label_208ab0;
        case 0x208ab4u: goto label_208ab4;
        case 0x208ab8u: goto label_208ab8;
        case 0x208abcu: goto label_208abc;
        case 0x208ac0u: goto label_208ac0;
        case 0x208ac4u: goto label_208ac4;
        case 0x208ac8u: goto label_208ac8;
        case 0x208accu: goto label_208acc;
        case 0x208ad0u: goto label_208ad0;
        case 0x208ad4u: goto label_208ad4;
        case 0x208ad8u: goto label_208ad8;
        case 0x208adcu: goto label_208adc;
        case 0x208ae0u: goto label_208ae0;
        case 0x208ae4u: goto label_208ae4;
        case 0x208ae8u: goto label_208ae8;
        case 0x208aecu: goto label_208aec;
        case 0x208af0u: goto label_208af0;
        case 0x208af4u: goto label_208af4;
        case 0x208af8u: goto label_208af8;
        case 0x208afcu: goto label_208afc;
        case 0x208b00u: goto label_208b00;
        case 0x208b04u: goto label_208b04;
        case 0x208b08u: goto label_208b08;
        case 0x208b0cu: goto label_208b0c;
        case 0x208b10u: goto label_208b10;
        case 0x208b14u: goto label_208b14;
        case 0x208b18u: goto label_208b18;
        case 0x208b1cu: goto label_208b1c;
        case 0x208b20u: goto label_208b20;
        case 0x208b24u: goto label_208b24;
        case 0x208b28u: goto label_208b28;
        case 0x208b2cu: goto label_208b2c;
        case 0x208b30u: goto label_208b30;
        case 0x208b34u: goto label_208b34;
        case 0x208b38u: goto label_208b38;
        case 0x208b3cu: goto label_208b3c;
        case 0x208b40u: goto label_208b40;
        case 0x208b44u: goto label_208b44;
        case 0x208b48u: goto label_208b48;
        case 0x208b4cu: goto label_208b4c;
        case 0x208b50u: goto label_208b50;
        case 0x208b54u: goto label_208b54;
        case 0x208b58u: goto label_208b58;
        case 0x208b5cu: goto label_208b5c;
        case 0x208b60u: goto label_208b60;
        case 0x208b64u: goto label_208b64;
        case 0x208b68u: goto label_208b68;
        case 0x208b6cu: goto label_208b6c;
        case 0x208b70u: goto label_208b70;
        case 0x208b74u: goto label_208b74;
        case 0x208b78u: goto label_208b78;
        case 0x208b7cu: goto label_208b7c;
        case 0x208b80u: goto label_208b80;
        case 0x208b84u: goto label_208b84;
        case 0x208b88u: goto label_208b88;
        case 0x208b8cu: goto label_208b8c;
        case 0x208b90u: goto label_208b90;
        case 0x208b94u: goto label_208b94;
        case 0x208b98u: goto label_208b98;
        case 0x208b9cu: goto label_208b9c;
        case 0x208ba0u: goto label_208ba0;
        case 0x208ba4u: goto label_208ba4;
        case 0x208ba8u: goto label_208ba8;
        case 0x208bacu: goto label_208bac;
        case 0x208bb0u: goto label_208bb0;
        case 0x208bb4u: goto label_208bb4;
        case 0x208bb8u: goto label_208bb8;
        case 0x208bbcu: goto label_208bbc;
        case 0x208bc0u: goto label_208bc0;
        case 0x208bc4u: goto label_208bc4;
        case 0x208bc8u: goto label_208bc8;
        case 0x208bccu: goto label_208bcc;
        case 0x208bd0u: goto label_208bd0;
        case 0x208bd4u: goto label_208bd4;
        case 0x208bd8u: goto label_208bd8;
        case 0x208bdcu: goto label_208bdc;
        case 0x208be0u: goto label_208be0;
        case 0x208be4u: goto label_208be4;
        case 0x208be8u: goto label_208be8;
        case 0x208becu: goto label_208bec;
        case 0x208bf0u: goto label_208bf0;
        case 0x208bf4u: goto label_208bf4;
        case 0x208bf8u: goto label_208bf8;
        case 0x208bfcu: goto label_208bfc;
        case 0x208c00u: goto label_208c00;
        case 0x208c04u: goto label_208c04;
        case 0x208c08u: goto label_208c08;
        case 0x208c0cu: goto label_208c0c;
        case 0x208c10u: goto label_208c10;
        case 0x208c14u: goto label_208c14;
        case 0x208c18u: goto label_208c18;
        case 0x208c1cu: goto label_208c1c;
        case 0x208c20u: goto label_208c20;
        case 0x208c24u: goto label_208c24;
        case 0x208c28u: goto label_208c28;
        case 0x208c2cu: goto label_208c2c;
        case 0x208c30u: goto label_208c30;
        case 0x208c34u: goto label_208c34;
        case 0x208c38u: goto label_208c38;
        case 0x208c3cu: goto label_208c3c;
        case 0x208c40u: goto label_208c40;
        case 0x208c44u: goto label_208c44;
        case 0x208c48u: goto label_208c48;
        case 0x208c4cu: goto label_208c4c;
        case 0x208c50u: goto label_208c50;
        case 0x208c54u: goto label_208c54;
        case 0x208c58u: goto label_208c58;
        case 0x208c5cu: goto label_208c5c;
        case 0x208c60u: goto label_208c60;
        case 0x208c64u: goto label_208c64;
        case 0x208c68u: goto label_208c68;
        case 0x208c6cu: goto label_208c6c;
        case 0x208c70u: goto label_208c70;
        case 0x208c74u: goto label_208c74;
        case 0x208c78u: goto label_208c78;
        case 0x208c7cu: goto label_208c7c;
        case 0x208c80u: goto label_208c80;
        case 0x208c84u: goto label_208c84;
        case 0x208c88u: goto label_208c88;
        case 0x208c8cu: goto label_208c8c;
        case 0x208c90u: goto label_208c90;
        case 0x208c94u: goto label_208c94;
        case 0x208c98u: goto label_208c98;
        case 0x208c9cu: goto label_208c9c;
        case 0x208ca0u: goto label_208ca0;
        case 0x208ca4u: goto label_208ca4;
        case 0x208ca8u: goto label_208ca8;
        case 0x208cacu: goto label_208cac;
        case 0x208cb0u: goto label_208cb0;
        case 0x208cb4u: goto label_208cb4;
        case 0x208cb8u: goto label_208cb8;
        case 0x208cbcu: goto label_208cbc;
        case 0x208cc0u: goto label_208cc0;
        case 0x208cc4u: goto label_208cc4;
        case 0x208cc8u: goto label_208cc8;
        case 0x208cccu: goto label_208ccc;
        case 0x208cd0u: goto label_208cd0;
        case 0x208cd4u: goto label_208cd4;
        case 0x208cd8u: goto label_208cd8;
        case 0x208cdcu: goto label_208cdc;
        case 0x208ce0u: goto label_208ce0;
        case 0x208ce4u: goto label_208ce4;
        case 0x208ce8u: goto label_208ce8;
        case 0x208cecu: goto label_208cec;
        case 0x208cf0u: goto label_208cf0;
        case 0x208cf4u: goto label_208cf4;
        case 0x208cf8u: goto label_208cf8;
        case 0x208cfcu: goto label_208cfc;
        case 0x208d00u: goto label_208d00;
        case 0x208d04u: goto label_208d04;
        case 0x208d08u: goto label_208d08;
        case 0x208d0cu: goto label_208d0c;
        case 0x208d10u: goto label_208d10;
        case 0x208d14u: goto label_208d14;
        case 0x208d18u: goto label_208d18;
        case 0x208d1cu: goto label_208d1c;
        case 0x208d20u: goto label_208d20;
        case 0x208d24u: goto label_208d24;
        case 0x208d28u: goto label_208d28;
        case 0x208d2cu: goto label_208d2c;
        case 0x208d30u: goto label_208d30;
        case 0x208d34u: goto label_208d34;
        case 0x208d38u: goto label_208d38;
        case 0x208d3cu: goto label_208d3c;
        case 0x208d40u: goto label_208d40;
        case 0x208d44u: goto label_208d44;
        case 0x208d48u: goto label_208d48;
        case 0x208d4cu: goto label_208d4c;
        case 0x208d50u: goto label_208d50;
        case 0x208d54u: goto label_208d54;
        case 0x208d58u: goto label_208d58;
        case 0x208d5cu: goto label_208d5c;
        case 0x208d60u: goto label_208d60;
        case 0x208d64u: goto label_208d64;
        case 0x208d68u: goto label_208d68;
        case 0x208d6cu: goto label_208d6c;
        case 0x208d70u: goto label_208d70;
        case 0x208d74u: goto label_208d74;
        case 0x208d78u: goto label_208d78;
        case 0x208d7cu: goto label_208d7c;
        case 0x208d80u: goto label_208d80;
        case 0x208d84u: goto label_208d84;
        case 0x208d88u: goto label_208d88;
        case 0x208d8cu: goto label_208d8c;
        case 0x208d90u: goto label_208d90;
        case 0x208d94u: goto label_208d94;
        case 0x208d98u: goto label_208d98;
        case 0x208d9cu: goto label_208d9c;
        case 0x208da0u: goto label_208da0;
        case 0x208da4u: goto label_208da4;
        case 0x208da8u: goto label_208da8;
        case 0x208dacu: goto label_208dac;
        case 0x208db0u: goto label_208db0;
        case 0x208db4u: goto label_208db4;
        case 0x208db8u: goto label_208db8;
        case 0x208dbcu: goto label_208dbc;
        case 0x208dc0u: goto label_208dc0;
        case 0x208dc4u: goto label_208dc4;
        case 0x208dc8u: goto label_208dc8;
        case 0x208dccu: goto label_208dcc;
        case 0x208dd0u: goto label_208dd0;
        case 0x208dd4u: goto label_208dd4;
        case 0x208dd8u: goto label_208dd8;
        case 0x208ddcu: goto label_208ddc;
        case 0x208de0u: goto label_208de0;
        case 0x208de4u: goto label_208de4;
        case 0x208de8u: goto label_208de8;
        case 0x208decu: goto label_208dec;
        case 0x208df0u: goto label_208df0;
        case 0x208df4u: goto label_208df4;
        case 0x208df8u: goto label_208df8;
        case 0x208dfcu: goto label_208dfc;
        case 0x208e00u: goto label_208e00;
        case 0x208e04u: goto label_208e04;
        case 0x208e08u: goto label_208e08;
        case 0x208e0cu: goto label_208e0c;
        case 0x208e10u: goto label_208e10;
        case 0x208e14u: goto label_208e14;
        case 0x208e18u: goto label_208e18;
        case 0x208e1cu: goto label_208e1c;
        case 0x208e20u: goto label_208e20;
        case 0x208e24u: goto label_208e24;
        case 0x208e28u: goto label_208e28;
        case 0x208e2cu: goto label_208e2c;
        case 0x208e30u: goto label_208e30;
        case 0x208e34u: goto label_208e34;
        case 0x208e38u: goto label_208e38;
        case 0x208e3cu: goto label_208e3c;
        case 0x208e40u: goto label_208e40;
        case 0x208e44u: goto label_208e44;
        case 0x208e48u: goto label_208e48;
        case 0x208e4cu: goto label_208e4c;
        case 0x208e50u: goto label_208e50;
        case 0x208e54u: goto label_208e54;
        case 0x208e58u: goto label_208e58;
        case 0x208e5cu: goto label_208e5c;
        case 0x208e60u: goto label_208e60;
        case 0x208e64u: goto label_208e64;
        case 0x208e68u: goto label_208e68;
        case 0x208e6cu: goto label_208e6c;
        case 0x208e70u: goto label_208e70;
        case 0x208e74u: goto label_208e74;
        case 0x208e78u: goto label_208e78;
        case 0x208e7cu: goto label_208e7c;
        case 0x208e80u: goto label_208e80;
        case 0x208e84u: goto label_208e84;
        case 0x208e88u: goto label_208e88;
        case 0x208e8cu: goto label_208e8c;
        case 0x208e90u: goto label_208e90;
        case 0x208e94u: goto label_208e94;
        case 0x208e98u: goto label_208e98;
        case 0x208e9cu: goto label_208e9c;
        case 0x208ea0u: goto label_208ea0;
        case 0x208ea4u: goto label_208ea4;
        case 0x208ea8u: goto label_208ea8;
        case 0x208eacu: goto label_208eac;
        case 0x208eb0u: goto label_208eb0;
        case 0x208eb4u: goto label_208eb4;
        case 0x208eb8u: goto label_208eb8;
        case 0x208ebcu: goto label_208ebc;
        case 0x208ec0u: goto label_208ec0;
        case 0x208ec4u: goto label_208ec4;
        case 0x208ec8u: goto label_208ec8;
        case 0x208eccu: goto label_208ecc;
        case 0x208ed0u: goto label_208ed0;
        case 0x208ed4u: goto label_208ed4;
        case 0x208ed8u: goto label_208ed8;
        case 0x208edcu: goto label_208edc;
        case 0x208ee0u: goto label_208ee0;
        case 0x208ee4u: goto label_208ee4;
        case 0x208ee8u: goto label_208ee8;
        case 0x208eecu: goto label_208eec;
        case 0x208ef0u: goto label_208ef0;
        case 0x208ef4u: goto label_208ef4;
        case 0x208ef8u: goto label_208ef8;
        case 0x208efcu: goto label_208efc;
        case 0x208f00u: goto label_208f00;
        case 0x208f04u: goto label_208f04;
        case 0x208f08u: goto label_208f08;
        case 0x208f0cu: goto label_208f0c;
        case 0x208f10u: goto label_208f10;
        case 0x208f14u: goto label_208f14;
        case 0x208f18u: goto label_208f18;
        case 0x208f1cu: goto label_208f1c;
        case 0x208f20u: goto label_208f20;
        case 0x208f24u: goto label_208f24;
        case 0x208f28u: goto label_208f28;
        case 0x208f2cu: goto label_208f2c;
        case 0x208f30u: goto label_208f30;
        case 0x208f34u: goto label_208f34;
        case 0x208f38u: goto label_208f38;
        case 0x208f3cu: goto label_208f3c;
        case 0x208f40u: goto label_208f40;
        case 0x208f44u: goto label_208f44;
        case 0x208f48u: goto label_208f48;
        case 0x208f4cu: goto label_208f4c;
        case 0x208f50u: goto label_208f50;
        case 0x208f54u: goto label_208f54;
        case 0x208f58u: goto label_208f58;
        case 0x208f5cu: goto label_208f5c;
        case 0x208f60u: goto label_208f60;
        case 0x208f64u: goto label_208f64;
        case 0x208f68u: goto label_208f68;
        case 0x208f6cu: goto label_208f6c;
        case 0x208f70u: goto label_208f70;
        case 0x208f74u: goto label_208f74;
        case 0x208f78u: goto label_208f78;
        case 0x208f7cu: goto label_208f7c;
        case 0x208f80u: goto label_208f80;
        case 0x208f84u: goto label_208f84;
        case 0x208f88u: goto label_208f88;
        case 0x208f8cu: goto label_208f8c;
        case 0x208f90u: goto label_208f90;
        case 0x208f94u: goto label_208f94;
        case 0x208f98u: goto label_208f98;
        case 0x208f9cu: goto label_208f9c;
        case 0x208fa0u: goto label_208fa0;
        case 0x208fa4u: goto label_208fa4;
        case 0x208fa8u: goto label_208fa8;
        case 0x208facu: goto label_208fac;
        case 0x208fb0u: goto label_208fb0;
        case 0x208fb4u: goto label_208fb4;
        case 0x208fb8u: goto label_208fb8;
        case 0x208fbcu: goto label_208fbc;
        case 0x208fc0u: goto label_208fc0;
        case 0x208fc4u: goto label_208fc4;
        case 0x208fc8u: goto label_208fc8;
        case 0x208fccu: goto label_208fcc;
        case 0x208fd0u: goto label_208fd0;
        case 0x208fd4u: goto label_208fd4;
        case 0x208fd8u: goto label_208fd8;
        case 0x208fdcu: goto label_208fdc;
        case 0x208fe0u: goto label_208fe0;
        case 0x208fe4u: goto label_208fe4;
        case 0x208fe8u: goto label_208fe8;
        case 0x208fecu: goto label_208fec;
        case 0x208ff0u: goto label_208ff0;
        case 0x208ff4u: goto label_208ff4;
        case 0x208ff8u: goto label_208ff8;
        case 0x208ffcu: goto label_208ffc;
        case 0x209000u: goto label_209000;
        case 0x209004u: goto label_209004;
        case 0x209008u: goto label_209008;
        case 0x20900cu: goto label_20900c;
        case 0x209010u: goto label_209010;
        case 0x209014u: goto label_209014;
        case 0x209018u: goto label_209018;
        case 0x20901cu: goto label_20901c;
        case 0x209020u: goto label_209020;
        case 0x209024u: goto label_209024;
        case 0x209028u: goto label_209028;
        case 0x20902cu: goto label_20902c;
        case 0x209030u: goto label_209030;
        case 0x209034u: goto label_209034;
        case 0x209038u: goto label_209038;
        case 0x20903cu: goto label_20903c;
        case 0x209040u: goto label_209040;
        case 0x209044u: goto label_209044;
        case 0x209048u: goto label_209048;
        case 0x20904cu: goto label_20904c;
        case 0x209050u: goto label_209050;
        case 0x209054u: goto label_209054;
        case 0x209058u: goto label_209058;
        case 0x20905cu: goto label_20905c;
        case 0x209060u: goto label_209060;
        case 0x209064u: goto label_209064;
        case 0x209068u: goto label_209068;
        case 0x20906cu: goto label_20906c;
        case 0x209070u: goto label_209070;
        case 0x209074u: goto label_209074;
        case 0x209078u: goto label_209078;
        case 0x20907cu: goto label_20907c;
        case 0x209080u: goto label_209080;
        case 0x209084u: goto label_209084;
        case 0x209088u: goto label_209088;
        case 0x20908cu: goto label_20908c;
        case 0x209090u: goto label_209090;
        case 0x209094u: goto label_209094;
        case 0x209098u: goto label_209098;
        case 0x20909cu: goto label_20909c;
        case 0x2090a0u: goto label_2090a0;
        case 0x2090a4u: goto label_2090a4;
        case 0x2090a8u: goto label_2090a8;
        case 0x2090acu: goto label_2090ac;
        case 0x2090b0u: goto label_2090b0;
        case 0x2090b4u: goto label_2090b4;
        case 0x2090b8u: goto label_2090b8;
        case 0x2090bcu: goto label_2090bc;
        case 0x2090c0u: goto label_2090c0;
        case 0x2090c4u: goto label_2090c4;
        case 0x2090c8u: goto label_2090c8;
        case 0x2090ccu: goto label_2090cc;
        case 0x2090d0u: goto label_2090d0;
        case 0x2090d4u: goto label_2090d4;
        case 0x2090d8u: goto label_2090d8;
        case 0x2090dcu: goto label_2090dc;
        case 0x2090e0u: goto label_2090e0;
        case 0x2090e4u: goto label_2090e4;
        case 0x2090e8u: goto label_2090e8;
        case 0x2090ecu: goto label_2090ec;
        case 0x2090f0u: goto label_2090f0;
        case 0x2090f4u: goto label_2090f4;
        case 0x2090f8u: goto label_2090f8;
        case 0x2090fcu: goto label_2090fc;
        case 0x209100u: goto label_209100;
        case 0x209104u: goto label_209104;
        case 0x209108u: goto label_209108;
        case 0x20910cu: goto label_20910c;
        case 0x209110u: goto label_209110;
        case 0x209114u: goto label_209114;
        case 0x209118u: goto label_209118;
        case 0x20911cu: goto label_20911c;
        case 0x209120u: goto label_209120;
        case 0x209124u: goto label_209124;
        case 0x209128u: goto label_209128;
        case 0x20912cu: goto label_20912c;
        case 0x209130u: goto label_209130;
        case 0x209134u: goto label_209134;
        case 0x209138u: goto label_209138;
        case 0x20913cu: goto label_20913c;
        case 0x209140u: goto label_209140;
        case 0x209144u: goto label_209144;
        case 0x209148u: goto label_209148;
        case 0x20914cu: goto label_20914c;
        case 0x209150u: goto label_209150;
        case 0x209154u: goto label_209154;
        case 0x209158u: goto label_209158;
        case 0x20915cu: goto label_20915c;
        case 0x209160u: goto label_209160;
        case 0x209164u: goto label_209164;
        case 0x209168u: goto label_209168;
        case 0x20916cu: goto label_20916c;
        case 0x209170u: goto label_209170;
        case 0x209174u: goto label_209174;
        case 0x209178u: goto label_209178;
        case 0x20917cu: goto label_20917c;
        case 0x209180u: goto label_209180;
        case 0x209184u: goto label_209184;
        case 0x209188u: goto label_209188;
        case 0x20918cu: goto label_20918c;
        case 0x209190u: goto label_209190;
        case 0x209194u: goto label_209194;
        case 0x209198u: goto label_209198;
        case 0x20919cu: goto label_20919c;
        case 0x2091a0u: goto label_2091a0;
        case 0x2091a4u: goto label_2091a4;
        case 0x2091a8u: goto label_2091a8;
        case 0x2091acu: goto label_2091ac;
        case 0x2091b0u: goto label_2091b0;
        case 0x2091b4u: goto label_2091b4;
        case 0x2091b8u: goto label_2091b8;
        case 0x2091bcu: goto label_2091bc;
        case 0x2091c0u: goto label_2091c0;
        case 0x2091c4u: goto label_2091c4;
        case 0x2091c8u: goto label_2091c8;
        case 0x2091ccu: goto label_2091cc;
        case 0x2091d0u: goto label_2091d0;
        case 0x2091d4u: goto label_2091d4;
        case 0x2091d8u: goto label_2091d8;
        case 0x2091dcu: goto label_2091dc;
        case 0x2091e0u: goto label_2091e0;
        case 0x2091e4u: goto label_2091e4;
        case 0x2091e8u: goto label_2091e8;
        case 0x2091ecu: goto label_2091ec;
        case 0x2091f0u: goto label_2091f0;
        case 0x2091f4u: goto label_2091f4;
        case 0x2091f8u: goto label_2091f8;
        case 0x2091fcu: goto label_2091fc;
        case 0x209200u: goto label_209200;
        case 0x209204u: goto label_209204;
        case 0x209208u: goto label_209208;
        case 0x20920cu: goto label_20920c;
        case 0x209210u: goto label_209210;
        case 0x209214u: goto label_209214;
        case 0x209218u: goto label_209218;
        case 0x20921cu: goto label_20921c;
        case 0x209220u: goto label_209220;
        case 0x209224u: goto label_209224;
        case 0x209228u: goto label_209228;
        case 0x20922cu: goto label_20922c;
        case 0x209230u: goto label_209230;
        case 0x209234u: goto label_209234;
        case 0x209238u: goto label_209238;
        case 0x20923cu: goto label_20923c;
        case 0x209240u: goto label_209240;
        case 0x209244u: goto label_209244;
        case 0x209248u: goto label_209248;
        case 0x20924cu: goto label_20924c;
        case 0x209250u: goto label_209250;
        case 0x209254u: goto label_209254;
        case 0x209258u: goto label_209258;
        case 0x20925cu: goto label_20925c;
        case 0x209260u: goto label_209260;
        case 0x209264u: goto label_209264;
        case 0x209268u: goto label_209268;
        case 0x20926cu: goto label_20926c;
        case 0x209270u: goto label_209270;
        case 0x209274u: goto label_209274;
        case 0x209278u: goto label_209278;
        case 0x20927cu: goto label_20927c;
        case 0x209280u: goto label_209280;
        case 0x209284u: goto label_209284;
        case 0x209288u: goto label_209288;
        case 0x20928cu: goto label_20928c;
        case 0x209290u: goto label_209290;
        case 0x209294u: goto label_209294;
        case 0x209298u: goto label_209298;
        case 0x20929cu: goto label_20929c;
        case 0x2092a0u: goto label_2092a0;
        case 0x2092a4u: goto label_2092a4;
        case 0x2092a8u: goto label_2092a8;
        case 0x2092acu: goto label_2092ac;
        case 0x2092b0u: goto label_2092b0;
        case 0x2092b4u: goto label_2092b4;
        case 0x2092b8u: goto label_2092b8;
        case 0x2092bcu: goto label_2092bc;
        case 0x2092c0u: goto label_2092c0;
        case 0x2092c4u: goto label_2092c4;
        case 0x2092c8u: goto label_2092c8;
        case 0x2092ccu: goto label_2092cc;
        case 0x2092d0u: goto label_2092d0;
        case 0x2092d4u: goto label_2092d4;
        case 0x2092d8u: goto label_2092d8;
        case 0x2092dcu: goto label_2092dc;
        case 0x2092e0u: goto label_2092e0;
        case 0x2092e4u: goto label_2092e4;
        case 0x2092e8u: goto label_2092e8;
        case 0x2092ecu: goto label_2092ec;
        case 0x2092f0u: goto label_2092f0;
        case 0x2092f4u: goto label_2092f4;
        case 0x2092f8u: goto label_2092f8;
        case 0x2092fcu: goto label_2092fc;
        case 0x209300u: goto label_209300;
        case 0x209304u: goto label_209304;
        case 0x209308u: goto label_209308;
        case 0x20930cu: goto label_20930c;
        case 0x209310u: goto label_209310;
        case 0x209314u: goto label_209314;
        case 0x209318u: goto label_209318;
        case 0x20931cu: goto label_20931c;
        case 0x209320u: goto label_209320;
        case 0x209324u: goto label_209324;
        case 0x209328u: goto label_209328;
        case 0x20932cu: goto label_20932c;
        case 0x209330u: goto label_209330;
        case 0x209334u: goto label_209334;
        case 0x209338u: goto label_209338;
        case 0x20933cu: goto label_20933c;
        case 0x209340u: goto label_209340;
        case 0x209344u: goto label_209344;
        case 0x209348u: goto label_209348;
        case 0x20934cu: goto label_20934c;
        case 0x209350u: goto label_209350;
        case 0x209354u: goto label_209354;
        case 0x209358u: goto label_209358;
        case 0x20935cu: goto label_20935c;
        case 0x209360u: goto label_209360;
        case 0x209364u: goto label_209364;
        case 0x209368u: goto label_209368;
        case 0x20936cu: goto label_20936c;
        case 0x209370u: goto label_209370;
        case 0x209374u: goto label_209374;
        case 0x209378u: goto label_209378;
        case 0x20937cu: goto label_20937c;
        case 0x209380u: goto label_209380;
        case 0x209384u: goto label_209384;
        case 0x209388u: goto label_209388;
        case 0x20938cu: goto label_20938c;
        case 0x209390u: goto label_209390;
        case 0x209394u: goto label_209394;
        case 0x209398u: goto label_209398;
        case 0x20939cu: goto label_20939c;
        case 0x2093a0u: goto label_2093a0;
        case 0x2093a4u: goto label_2093a4;
        case 0x2093a8u: goto label_2093a8;
        case 0x2093acu: goto label_2093ac;
        case 0x2093b0u: goto label_2093b0;
        case 0x2093b4u: goto label_2093b4;
        case 0x2093b8u: goto label_2093b8;
        case 0x2093bcu: goto label_2093bc;
        case 0x2093c0u: goto label_2093c0;
        case 0x2093c4u: goto label_2093c4;
        case 0x2093c8u: goto label_2093c8;
        case 0x2093ccu: goto label_2093cc;
        case 0x2093d0u: goto label_2093d0;
        case 0x2093d4u: goto label_2093d4;
        case 0x2093d8u: goto label_2093d8;
        case 0x2093dcu: goto label_2093dc;
        case 0x2093e0u: goto label_2093e0;
        case 0x2093e4u: goto label_2093e4;
        case 0x2093e8u: goto label_2093e8;
        case 0x2093ecu: goto label_2093ec;
        case 0x2093f0u: goto label_2093f0;
        case 0x2093f4u: goto label_2093f4;
        case 0x2093f8u: goto label_2093f8;
        case 0x2093fcu: goto label_2093fc;
        case 0x209400u: goto label_209400;
        case 0x209404u: goto label_209404;
        case 0x209408u: goto label_209408;
        case 0x20940cu: goto label_20940c;
        case 0x209410u: goto label_209410;
        case 0x209414u: goto label_209414;
        case 0x209418u: goto label_209418;
        case 0x20941cu: goto label_20941c;
        case 0x209420u: goto label_209420;
        case 0x209424u: goto label_209424;
        case 0x209428u: goto label_209428;
        case 0x20942cu: goto label_20942c;
        case 0x209430u: goto label_209430;
        case 0x209434u: goto label_209434;
        case 0x209438u: goto label_209438;
        case 0x20943cu: goto label_20943c;
        case 0x209440u: goto label_209440;
        case 0x209444u: goto label_209444;
        case 0x209448u: goto label_209448;
        case 0x20944cu: goto label_20944c;
        case 0x209450u: goto label_209450;
        case 0x209454u: goto label_209454;
        case 0x209458u: goto label_209458;
        case 0x20945cu: goto label_20945c;
        case 0x209460u: goto label_209460;
        case 0x209464u: goto label_209464;
        case 0x209468u: goto label_209468;
        case 0x20946cu: goto label_20946c;
        case 0x209470u: goto label_209470;
        case 0x209474u: goto label_209474;
        case 0x209478u: goto label_209478;
        case 0x20947cu: goto label_20947c;
        case 0x209480u: goto label_209480;
        case 0x209484u: goto label_209484;
        case 0x209488u: goto label_209488;
        case 0x20948cu: goto label_20948c;
        case 0x209490u: goto label_209490;
        case 0x209494u: goto label_209494;
        case 0x209498u: goto label_209498;
        case 0x20949cu: goto label_20949c;
        case 0x2094a0u: goto label_2094a0;
        case 0x2094a4u: goto label_2094a4;
        case 0x2094a8u: goto label_2094a8;
        case 0x2094acu: goto label_2094ac;
        case 0x2094b0u: goto label_2094b0;
        case 0x2094b4u: goto label_2094b4;
        case 0x2094b8u: goto label_2094b8;
        case 0x2094bcu: goto label_2094bc;
        case 0x2094c0u: goto label_2094c0;
        case 0x2094c4u: goto label_2094c4;
        case 0x2094c8u: goto label_2094c8;
        case 0x2094ccu: goto label_2094cc;
        case 0x2094d0u: goto label_2094d0;
        case 0x2094d4u: goto label_2094d4;
        case 0x2094d8u: goto label_2094d8;
        case 0x2094dcu: goto label_2094dc;
        case 0x2094e0u: goto label_2094e0;
        case 0x2094e4u: goto label_2094e4;
        case 0x2094e8u: goto label_2094e8;
        case 0x2094ecu: goto label_2094ec;
        case 0x2094f0u: goto label_2094f0;
        case 0x2094f4u: goto label_2094f4;
        case 0x2094f8u: goto label_2094f8;
        case 0x2094fcu: goto label_2094fc;
        case 0x209500u: goto label_209500;
        case 0x209504u: goto label_209504;
        case 0x209508u: goto label_209508;
        case 0x20950cu: goto label_20950c;
        default: break;
    }

    ctx->pc = 0x208aa0u;

label_208aa0:
    // 0x208aa0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208aa4:
    // 0x208aa4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x208aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_208aa8:
    // 0x208aa8: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x208aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_208aac:
    // 0x208aac: 0x2463e520  addiu       $v1, $v1, -0x1AE0
    ctx->pc = 0x208aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960416));
label_208ab0:
    // 0x208ab0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x208ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_208ab4:
    // 0x208ab4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208ab8:
    // 0x208ab8: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x208ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_208abc:
    // 0x208abc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x208abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_208ac0:
    // 0x208ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208ac4:
    // 0x208ac4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x208ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_208ac8:
    // 0x208ac8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208acc:
    // 0x208acc: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x208accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_208ad0:
    // 0x208ad0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x208ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_208ad4:
    // 0x208ad4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x208ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_208ad8:
    // 0x208ad8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x208ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_208adc:
    // 0x208adc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x208adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_208ae0:
    // 0x208ae0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208ae4:
    // 0x208ae4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x208ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_208ae8:
    // 0x208ae8: 0x2442e4e0  addiu       $v0, $v0, -0x1B20
    ctx->pc = 0x208ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960352));
label_208aec:
    // 0x208aec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x208aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_208af0:
    // 0x208af0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x208af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_208af4:
    // 0x208af4: 0x2463e3d0  addiu       $v1, $v1, -0x1C30
    ctx->pc = 0x208af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960080));
label_208af8:
    // 0x208af8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208afc:
    // 0x208afc: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x208afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_208b00:
    // 0x208b00: 0x2442e3a0  addiu       $v0, $v0, -0x1C60
    ctx->pc = 0x208b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960032));
label_208b04:
    // 0x208b04: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x208b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_208b08:
    // 0x208b08: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x208b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
label_208b0c:
    // 0x208b0c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x208b0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_208b10:
    // 0x208b10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_208b14:
    if (ctx->pc == 0x208B14u) {
        ctx->pc = 0x208B14u;
            // 0x208b14: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->pc = 0x208B18u;
        goto label_208b18;
    }
    ctx->pc = 0x208B10u;
    {
        const bool branch_taken_0x208b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b10) {
            ctx->pc = 0x208B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208B10u;
            // 0x208b14: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208B28u;
            goto label_208b28;
        }
    }
    ctx->pc = 0x208B18u;
label_208b18:
    // 0x208b18: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x208b18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_208b1c:
    // 0x208b1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_208b20:
    // 0x208b20: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x208b20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_208b24:
    // 0x208b24: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x208b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
label_208b28:
    // 0x208b28: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x208b28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_208b2c:
    // 0x208b2c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_208b30:
    if (ctx->pc == 0x208B30u) {
        ctx->pc = 0x208B30u;
            // 0x208b30: 0xc4c00010  lwc1        $f0, 0x10($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x208B34u;
        goto label_208b34;
    }
    ctx->pc = 0x208B2Cu;
    {
        const bool branch_taken_0x208b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b2c) {
            ctx->pc = 0x208B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208B2Cu;
            // 0x208b30: 0xc4c00010  lwc1        $f0, 0x10($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x208B44u;
            goto label_208b44;
        }
    }
    ctx->pc = 0x208B34u;
label_208b34:
    // 0x208b34: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x208b34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_208b38:
    // 0x208b38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_208b3c:
    // 0x208b3c: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x208b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
label_208b40:
    // 0x208b40: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x208b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208b44:
    // 0x208b44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x208b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208b48:
    // 0x208b48: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x208b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_208b4c:
    // 0x208b4c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x208b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208b50:
    // 0x208b50: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x208b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_208b54:
    // 0x208b54: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x208b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208b58:
    // 0x208b58: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x208b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_208b5c:
    // 0x208b5c: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x208b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208b60:
    // 0x208b60: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x208b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_208b64:
    // 0x208b64: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x208b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_208b68:
    // 0x208b68: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x208b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_208b6c:
    // 0x208b6c: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x208b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_208b70:
    // 0x208b70: 0x3e00008  jr          $ra
label_208b74:
    if (ctx->pc == 0x208B74u) {
        ctx->pc = 0x208B74u;
            // 0x208b74: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x208B78u;
        goto label_208b78;
    }
    ctx->pc = 0x208B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208B70u;
            // 0x208b74: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208B78u;
label_208b78:
    // 0x208b78: 0x0  nop
    ctx->pc = 0x208b78u;
    // NOP
label_208b7c:
    // 0x208b7c: 0x0  nop
    ctx->pc = 0x208b7cu;
    // NOP
label_208b80:
    // 0x208b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_208b84:
    // 0x208b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_208b88:
    // 0x208b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_208b8c:
    // 0x208b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208b90:
    // 0x208b90: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_208b94:
    if (ctx->pc == 0x208B94u) {
        ctx->pc = 0x208B94u;
            // 0x208b94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208B98u;
        goto label_208b98;
    }
    ctx->pc = 0x208B90u;
    {
        const bool branch_taken_0x208b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b90) {
            ctx->pc = 0x208B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208B90u;
            // 0x208b94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208C00u;
            goto label_208c00;
        }
    }
    ctx->pc = 0x208B98u;
label_208b98:
    // 0x208b98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208b9c:
    // 0x208b9c: 0x2442e520  addiu       $v0, $v0, -0x1AE0
    ctx->pc = 0x208b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960416));
label_208ba0:
    // 0x208ba0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_208ba4:
    if (ctx->pc == 0x208BA4u) {
        ctx->pc = 0x208BA4u;
            // 0x208ba4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x208BA8u;
        goto label_208ba8;
    }
    ctx->pc = 0x208BA0u;
    {
        const bool branch_taken_0x208ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208BA0u;
            // 0x208ba4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ba0) {
            ctx->pc = 0x208BD4u;
            goto label_208bd4;
        }
    }
    ctx->pc = 0x208BA8u;
label_208ba8:
    // 0x208ba8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208bac:
    // 0x208bac: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x208bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_208bb0:
    // 0x208bb0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_208bb4:
    if (ctx->pc == 0x208BB4u) {
        ctx->pc = 0x208BB4u;
            // 0x208bb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x208BB8u;
        goto label_208bb8;
    }
    ctx->pc = 0x208BB0u;
    {
        const bool branch_taken_0x208bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208BB0u;
            // 0x208bb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bb0) {
            ctx->pc = 0x208BD4u;
            goto label_208bd4;
        }
    }
    ctx->pc = 0x208BB8u;
label_208bb8:
    // 0x208bb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208bbc:
    // 0x208bbc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x208bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_208bc0:
    // 0x208bc0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_208bc4:
    if (ctx->pc == 0x208BC4u) {
        ctx->pc = 0x208BC4u;
            // 0x208bc4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x208BC8u;
        goto label_208bc8;
    }
    ctx->pc = 0x208BC0u;
    {
        const bool branch_taken_0x208bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208BC0u;
            // 0x208bc4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bc0) {
            ctx->pc = 0x208BD4u;
            goto label_208bd4;
        }
    }
    ctx->pc = 0x208BC8u;
label_208bc8:
    // 0x208bc8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208bcc:
    // 0x208bcc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x208bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_208bd0:
    // 0x208bd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x208bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_208bd4:
    // 0x208bd4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x208bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_208bd8:
    // 0x208bd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x208bd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_208bdc:
    // 0x208bdc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_208be0:
    if (ctx->pc == 0x208BE0u) {
        ctx->pc = 0x208BE4u;
        goto label_208be4;
    }
    ctx->pc = 0x208BDCu;
    {
        const bool branch_taken_0x208bdc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x208bdc) {
            ctx->pc = 0x208BFCu;
            goto label_208bfc;
        }
    }
    ctx->pc = 0x208BE4u;
label_208be4:
    // 0x208be4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x208be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_208be8:
    // 0x208be8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x208be8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_208bec:
    // 0x208bec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x208becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_208bf0:
    // 0x208bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208bf4:
    // 0x208bf4: 0xc0a7ab4  jal         func_29EAD0
label_208bf8:
    if (ctx->pc == 0x208BF8u) {
        ctx->pc = 0x208BF8u;
            // 0x208bf8: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x208BFCu;
        goto label_208bfc;
    }
    ctx->pc = 0x208BF4u;
    SET_GPR_U32(ctx, 31, 0x208BFCu);
    ctx->pc = 0x208BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208BF4u;
            // 0x208bf8: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BFCu; }
        if (ctx->pc != 0x208BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BFCu; }
        if (ctx->pc != 0x208BFCu) { return; }
    }
    ctx->pc = 0x208BFCu;
label_208bfc:
    // 0x208bfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x208bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208c00:
    // 0x208c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_208c04:
    // 0x208c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_208c08:
    // 0x208c08: 0x3e00008  jr          $ra
label_208c0c:
    if (ctx->pc == 0x208C0Cu) {
        ctx->pc = 0x208C0Cu;
            // 0x208c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x208C10u;
        goto label_208c10;
    }
    ctx->pc = 0x208C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C08u;
            // 0x208c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208C10u;
label_208c10:
    // 0x208c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_208c14:
    // 0x208c14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x208c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_208c18:
    // 0x208c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x208c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_208c1c:
    // 0x208c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_208c20:
    // 0x208c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208c24:
    // 0x208c24: 0x1220004d  beqz        $s1, . + 4 + (0x4D << 2)
label_208c28:
    if (ctx->pc == 0x208C28u) {
        ctx->pc = 0x208C28u;
            // 0x208c28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208C2Cu;
        goto label_208c2c;
    }
    ctx->pc = 0x208C24u;
    {
        const bool branch_taken_0x208c24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C24u;
            // 0x208c28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c24) {
            ctx->pc = 0x208D5Cu;
            goto label_208d5c;
        }
    }
    ctx->pc = 0x208C2Cu;
label_208c2c:
    // 0x208c2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208c30:
    // 0x208c30: 0x2442e4e0  addiu       $v0, $v0, -0x1B20
    ctx->pc = 0x208c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960352));
label_208c34:
    // 0x208c34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x208c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_208c38:
    // 0x208c38: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x208c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_208c3c:
    // 0x208c3c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x208c3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_208c40:
    // 0x208c40: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_208c44:
    if (ctx->pc == 0x208C44u) {
        ctx->pc = 0x208C44u;
            // 0x208c44: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x208C48u;
        goto label_208c48;
    }
    ctx->pc = 0x208C40u;
    {
        const bool branch_taken_0x208c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208c40) {
            ctx->pc = 0x208C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208C40u;
            // 0x208c44: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208C80u;
            goto label_208c80;
        }
    }
    ctx->pc = 0x208C48u;
label_208c48:
    // 0x208c48: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x208c48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_208c4c:
    // 0x208c4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x208c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_208c50:
    // 0x208c50: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x208c50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_208c54:
    // 0x208c54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x208c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_208c58:
    // 0x208c58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x208c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_208c5c:
    // 0x208c5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_208c60:
    if (ctx->pc == 0x208C60u) {
        ctx->pc = 0x208C64u;
        goto label_208c64;
    }
    ctx->pc = 0x208C5Cu;
    {
        const bool branch_taken_0x208c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208c5c) {
            ctx->pc = 0x208C7Cu;
            goto label_208c7c;
        }
    }
    ctx->pc = 0x208C64u;
label_208c64:
    // 0x208c64: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_208c68:
    if (ctx->pc == 0x208C68u) {
        ctx->pc = 0x208C6Cu;
        goto label_208c6c;
    }
    ctx->pc = 0x208C64u;
    {
        const bool branch_taken_0x208c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208c64) {
            ctx->pc = 0x208C7Cu;
            goto label_208c7c;
        }
    }
    ctx->pc = 0x208C6Cu;
label_208c6c:
    // 0x208c6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x208c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_208c70:
    // 0x208c70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x208c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_208c74:
    // 0x208c74: 0x320f809  jalr        $t9
label_208c78:
    if (ctx->pc == 0x208C78u) {
        ctx->pc = 0x208C78u;
            // 0x208c78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x208C7Cu;
        goto label_208c7c;
    }
    ctx->pc = 0x208C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x208C7Cu);
        ctx->pc = 0x208C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C74u;
            // 0x208c78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x208C7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208C7Cu; }
            if (ctx->pc != 0x208C7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x208C7Cu;
label_208c7c:
    // 0x208c7c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x208c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_208c80:
    // 0x208c80: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_208c84:
    if (ctx->pc == 0x208C84u) {
        ctx->pc = 0x208C88u;
        goto label_208c88;
    }
    ctx->pc = 0x208C80u;
    {
        const bool branch_taken_0x208c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208c80) {
            ctx->pc = 0x208CF0u;
            goto label_208cf0;
        }
    }
    ctx->pc = 0x208C88u;
label_208c88:
    // 0x208c88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208c8c:
    // 0x208c8c: 0x2442e3a0  addiu       $v0, $v0, -0x1C60
    ctx->pc = 0x208c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960032));
label_208c90:
    // 0x208c90: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x208c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_208c94:
    // 0x208c94: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x208c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_208c98:
    // 0x208c98: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x208c98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_208c9c:
    // 0x208c9c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_208ca0:
    if (ctx->pc == 0x208CA0u) {
        ctx->pc = 0x208CA0u;
            // 0x208ca0: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x208CA4u;
        goto label_208ca4;
    }
    ctx->pc = 0x208C9Cu;
    {
        const bool branch_taken_0x208c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208c9c) {
            ctx->pc = 0x208CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208C9Cu;
            // 0x208ca0: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208CDCu;
            goto label_208cdc;
        }
    }
    ctx->pc = 0x208CA4u;
label_208ca4:
    // 0x208ca4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x208ca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_208ca8:
    // 0x208ca8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x208ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_208cac:
    // 0x208cac: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x208cacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_208cb0:
    // 0x208cb0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x208cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_208cb4:
    // 0x208cb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x208cb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_208cb8:
    // 0x208cb8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_208cbc:
    if (ctx->pc == 0x208CBCu) {
        ctx->pc = 0x208CC0u;
        goto label_208cc0;
    }
    ctx->pc = 0x208CB8u;
    {
        const bool branch_taken_0x208cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208cb8) {
            ctx->pc = 0x208CD8u;
            goto label_208cd8;
        }
    }
    ctx->pc = 0x208CC0u;
label_208cc0:
    // 0x208cc0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_208cc4:
    if (ctx->pc == 0x208CC4u) {
        ctx->pc = 0x208CC8u;
        goto label_208cc8;
    }
    ctx->pc = 0x208CC0u;
    {
        const bool branch_taken_0x208cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208cc0) {
            ctx->pc = 0x208CD8u;
            goto label_208cd8;
        }
    }
    ctx->pc = 0x208CC8u;
label_208cc8:
    // 0x208cc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x208cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_208ccc:
    // 0x208ccc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x208cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_208cd0:
    // 0x208cd0: 0x320f809  jalr        $t9
label_208cd4:
    if (ctx->pc == 0x208CD4u) {
        ctx->pc = 0x208CD4u;
            // 0x208cd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x208CD8u;
        goto label_208cd8;
    }
    ctx->pc = 0x208CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x208CD8u);
        ctx->pc = 0x208CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208CD0u;
            // 0x208cd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x208CD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208CD8u; }
            if (ctx->pc != 0x208CD8u) { return; }
        }
        }
    }
    ctx->pc = 0x208CD8u;
label_208cd8:
    // 0x208cd8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x208cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_208cdc:
    // 0x208cdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_208ce0:
    if (ctx->pc == 0x208CE0u) {
        ctx->pc = 0x208CE4u;
        goto label_208ce4;
    }
    ctx->pc = 0x208CDCu;
    {
        const bool branch_taken_0x208cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208cdc) {
            ctx->pc = 0x208CF0u;
            goto label_208cf0;
        }
    }
    ctx->pc = 0x208CE4u;
label_208ce4:
    // 0x208ce4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208ce8:
    // 0x208ce8: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x208ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
label_208cec:
    // 0x208cec: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x208cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_208cf0:
    // 0x208cf0: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
label_208cf4:
    if (ctx->pc == 0x208CF4u) {
        ctx->pc = 0x208CF4u;
            // 0x208cf4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x208CF8u;
        goto label_208cf8;
    }
    ctx->pc = 0x208CF0u;
    {
        const bool branch_taken_0x208cf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x208cf0) {
            ctx->pc = 0x208CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208CF0u;
            // 0x208cf4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208D38u;
            goto label_208d38;
        }
    }
    ctx->pc = 0x208CF8u;
label_208cf8:
    // 0x208cf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208cfc:
    // 0x208cfc: 0x2442e520  addiu       $v0, $v0, -0x1AE0
    ctx->pc = 0x208cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960416));
label_208d00:
    // 0x208d00: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_208d04:
    if (ctx->pc == 0x208D04u) {
        ctx->pc = 0x208D04u;
            // 0x208d04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x208D08u;
        goto label_208d08;
    }
    ctx->pc = 0x208D00u;
    {
        const bool branch_taken_0x208d00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D00u;
            // 0x208d04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d00) {
            ctx->pc = 0x208D34u;
            goto label_208d34;
        }
    }
    ctx->pc = 0x208D08u;
label_208d08:
    // 0x208d08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208d0c:
    // 0x208d0c: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x208d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_208d10:
    // 0x208d10: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_208d14:
    if (ctx->pc == 0x208D14u) {
        ctx->pc = 0x208D14u;
            // 0x208d14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x208D18u;
        goto label_208d18;
    }
    ctx->pc = 0x208D10u;
    {
        const bool branch_taken_0x208d10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D10u;
            // 0x208d14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d10) {
            ctx->pc = 0x208D34u;
            goto label_208d34;
        }
    }
    ctx->pc = 0x208D18u;
label_208d18:
    // 0x208d18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208d1c:
    // 0x208d1c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x208d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_208d20:
    // 0x208d20: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_208d24:
    if (ctx->pc == 0x208D24u) {
        ctx->pc = 0x208D24u;
            // 0x208d24: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x208D28u;
        goto label_208d28;
    }
    ctx->pc = 0x208D20u;
    {
        const bool branch_taken_0x208d20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D20u;
            // 0x208d24: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d20) {
            ctx->pc = 0x208D34u;
            goto label_208d34;
        }
    }
    ctx->pc = 0x208D28u;
label_208d28:
    // 0x208d28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208d2c:
    // 0x208d2c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x208d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_208d30:
    // 0x208d30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x208d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_208d34:
    // 0x208d34: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x208d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_208d38:
    // 0x208d38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x208d38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_208d3c:
    // 0x208d3c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_208d40:
    if (ctx->pc == 0x208D40u) {
        ctx->pc = 0x208D40u;
            // 0x208d40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208D44u;
        goto label_208d44;
    }
    ctx->pc = 0x208D3Cu;
    {
        const bool branch_taken_0x208d3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x208d3c) {
            ctx->pc = 0x208D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208D3Cu;
            // 0x208d40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208D60u;
            goto label_208d60;
        }
    }
    ctx->pc = 0x208D44u;
label_208d44:
    // 0x208d44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x208d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_208d48:
    // 0x208d48: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x208d48u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_208d4c:
    // 0x208d4c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x208d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_208d50:
    // 0x208d50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x208d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_208d54:
    // 0x208d54: 0xc0a7ab4  jal         func_29EAD0
label_208d58:
    if (ctx->pc == 0x208D58u) {
        ctx->pc = 0x208D58u;
            // 0x208d58: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x208D5Cu;
        goto label_208d5c;
    }
    ctx->pc = 0x208D54u;
    SET_GPR_U32(ctx, 31, 0x208D5Cu);
    ctx->pc = 0x208D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208D54u;
            // 0x208d58: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D5Cu; }
        if (ctx->pc != 0x208D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D5Cu; }
        if (ctx->pc != 0x208D5Cu) { return; }
    }
    ctx->pc = 0x208D5Cu;
label_208d5c:
    // 0x208d5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x208d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_208d60:
    // 0x208d60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x208d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_208d64:
    // 0x208d64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x208d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_208d68:
    // 0x208d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_208d6c:
    // 0x208d6c: 0x3e00008  jr          $ra
label_208d70:
    if (ctx->pc == 0x208D70u) {
        ctx->pc = 0x208D70u;
            // 0x208d70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x208D74u;
        goto label_208d74;
    }
    ctx->pc = 0x208D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D6Cu;
            // 0x208d70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208D74u;
label_208d74:
    // 0x208d74: 0x0  nop
    ctx->pc = 0x208d74u;
    // NOP
label_208d78:
    // 0x208d78: 0x0  nop
    ctx->pc = 0x208d78u;
    // NOP
label_208d7c:
    // 0x208d7c: 0x0  nop
    ctx->pc = 0x208d7cu;
    // NOP
label_208d80:
    // 0x208d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_208d84:
    // 0x208d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208d88:
    // 0x208d88: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x208d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_208d8c:
    // 0x208d8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x208d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_208d90:
    // 0x208d90: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x208d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_208d94:
    // 0x208d94: 0x320f809  jalr        $t9
label_208d98:
    if (ctx->pc == 0x208D98u) {
        ctx->pc = 0x208D9Cu;
        goto label_208d9c;
    }
    ctx->pc = 0x208D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x208D9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x208D9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208D9Cu; }
            if (ctx->pc != 0x208D9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x208D9Cu;
label_208d9c:
    // 0x208d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208da0:
    // 0x208da0: 0x3e00008  jr          $ra
label_208da4:
    if (ctx->pc == 0x208DA4u) {
        ctx->pc = 0x208DA4u;
            // 0x208da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x208DA8u;
        goto label_208da8;
    }
    ctx->pc = 0x208DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208DA0u;
            // 0x208da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208DA8u;
label_208da8:
    // 0x208da8: 0x0  nop
    ctx->pc = 0x208da8u;
    // NOP
label_208dac:
    // 0x208dac: 0x0  nop
    ctx->pc = 0x208dacu;
    // NOP
label_208db0:
    // 0x208db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_208db4:
    // 0x208db4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x208db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_208db8:
    // 0x208db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208dbc:
    // 0x208dbc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x208dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_208dc0:
    // 0x208dc0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x208dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_208dc4:
    // 0x208dc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x208dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208dc8:
    // 0x208dc8: 0xc09e820  jal         func_27A080
label_208dcc:
    if (ctx->pc == 0x208DCCu) {
        ctx->pc = 0x208DCCu;
            // 0x208dcc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x208DD0u;
        goto label_208dd0;
    }
    ctx->pc = 0x208DC8u;
    SET_GPR_U32(ctx, 31, 0x208DD0u);
    ctx->pc = 0x208DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208DC8u;
            // 0x208dcc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A080u;
    if (runtime->hasFunction(0x27A080u)) {
        auto targetFn = runtime->lookupFunction(0x27A080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208DD0u; }
        if (ctx->pc != 0x208DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A080_0x27a080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208DD0u; }
        if (ctx->pc != 0x208DD0u) { return; }
    }
    ctx->pc = 0x208DD0u;
label_208dd0:
    // 0x208dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208dd4:
    // 0x208dd4: 0x3e00008  jr          $ra
label_208dd8:
    if (ctx->pc == 0x208DD8u) {
        ctx->pc = 0x208DD8u;
            // 0x208dd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x208DDCu;
        goto label_208ddc;
    }
    ctx->pc = 0x208DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208DD4u;
            // 0x208dd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208DDCu;
label_208ddc:
    // 0x208ddc: 0x0  nop
    ctx->pc = 0x208ddcu;
    // NOP
label_208de0:
    // 0x208de0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x208de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_208de4:
    // 0x208de4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x208de4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_208de8:
    // 0x208de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208dec:
    // 0x208dec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x208decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_208df0:
    // 0x208df0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x208df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_208df4:
    // 0x208df4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x208df4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_208df8:
    // 0x208df8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x208df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208dfc:
    // 0x208dfc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x208dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208e00:
    // 0x208e00: 0xc09e4f4  jal         func_2793D0
label_208e04:
    if (ctx->pc == 0x208E04u) {
        ctx->pc = 0x208E04u;
            // 0x208e04: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x208E08u;
        goto label_208e08;
    }
    ctx->pc = 0x208E00u;
    SET_GPR_U32(ctx, 31, 0x208E08u);
    ctx->pc = 0x208E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208E00u;
            // 0x208e04: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2793D0u;
    if (runtime->hasFunction(0x2793D0u)) {
        auto targetFn = runtime->lookupFunction(0x2793D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E08u; }
        if (ctx->pc != 0x208E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002793D0_0x2793d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E08u; }
        if (ctx->pc != 0x208E08u) { return; }
    }
    ctx->pc = 0x208E08u;
label_208e08:
    // 0x208e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208e0c:
    // 0x208e0c: 0x3e00008  jr          $ra
label_208e10:
    if (ctx->pc == 0x208E10u) {
        ctx->pc = 0x208E10u;
            // 0x208e10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x208E14u;
        goto label_208e14;
    }
    ctx->pc = 0x208E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208E0Cu;
            // 0x208e10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208E14u;
label_208e14:
    // 0x208e14: 0x0  nop
    ctx->pc = 0x208e14u;
    // NOP
label_208e18:
    // 0x208e18: 0x0  nop
    ctx->pc = 0x208e18u;
    // NOP
label_208e1c:
    // 0x208e1c: 0x0  nop
    ctx->pc = 0x208e1cu;
    // NOP
label_208e20:
    // 0x208e20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x208e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_208e24:
    // 0x208e24: 0x3c024b80  lui         $v0, 0x4B80
    ctx->pc = 0x208e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19328 << 16));
label_208e28:
    // 0x208e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208e2c:
    // 0x208e2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x208e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_208e30:
    // 0x208e30: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x208e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_208e34:
    // 0x208e34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x208e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_208e38:
    // 0x208e38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208e3c:
    // 0x208e3c: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x208e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_208e40:
    // 0x208e40: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x208e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_208e44:
    // 0x208e44: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x208e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_208e48:
    // 0x208e48: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x208e48u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_208e4c:
    // 0x208e4c: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x208e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_208e50:
    // 0x208e50: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x208e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_208e54:
    // 0x208e54: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x208e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_208e58:
    // 0x208e58: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x208e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_208e5c:
    // 0x208e5c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x208e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_208e60:
    // 0x208e60: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x208e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_208e64:
    // 0x208e64: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x208e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_208e68:
    // 0x208e68: 0x46012800  add.s       $f0, $f5, $f1
    ctx->pc = 0x208e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_208e6c:
    // 0x208e6c: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x208e6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_208e70:
    // 0x208e70: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x208e70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_208e74:
    // 0x208e74: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x208e74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_208e78:
    // 0x208e78: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x208e78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_208e7c:
    // 0x208e7c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x208e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_208e80:
    // 0x208e80: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x208e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208e84:
    // 0x208e84: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x208e84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208e88:
    // 0x208e88: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_208e8c:
    if (ctx->pc == 0x208E8Cu) {
        ctx->pc = 0x208E8Cu;
            // 0x208e8c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208E90u;
        goto label_208e90;
    }
    ctx->pc = 0x208E88u;
    {
        const bool branch_taken_0x208e88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x208E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208E88u;
            // 0x208e8c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e88) {
            ctx->pc = 0x208E98u;
            goto label_208e98;
        }
    }
    ctx->pc = 0x208E90u;
label_208e90:
    // 0x208e90: 0x10000003  b           . + 4 + (0x3 << 2)
label_208e94:
    if (ctx->pc == 0x208E94u) {
        ctx->pc = 0x208E94u;
            // 0x208e94: 0xe7a50050  swc1        $f5, 0x50($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->pc = 0x208E98u;
        goto label_208e98;
    }
    ctx->pc = 0x208E90u;
    {
        const bool branch_taken_0x208e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208E90u;
            // 0x208e94: 0xe7a50050  swc1        $f5, 0x50($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e90) {
            ctx->pc = 0x208EA0u;
            goto label_208ea0;
        }
    }
    ctx->pc = 0x208E98u;
label_208e98:
    // 0x208e98: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x208e98u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_208e9c:
    // 0x208e9c: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x208e9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_208ea0:
    // 0x208ea0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x208ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208ea4:
    // 0x208ea4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x208ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208ea8:
    // 0x208ea8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x208ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208eac:
    // 0x208eac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_208eb0:
    if (ctx->pc == 0x208EB0u) {
        ctx->pc = 0x208EB0u;
            // 0x208eb0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x208EB4u;
        goto label_208eb4;
    }
    ctx->pc = 0x208EACu;
    {
        const bool branch_taken_0x208eac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208eac) {
            ctx->pc = 0x208EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208EACu;
            // 0x208eb0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208EB4u;
            goto label_208eb4;
        }
    }
    ctx->pc = 0x208EB4u;
label_208eb4:
    // 0x208eb4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x208eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_208eb8:
    // 0x208eb8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x208eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208ebc:
    // 0x208ebc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x208ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208ec0:
    // 0x208ec0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x208ec0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208ec4:
    // 0x208ec4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_208ec8:
    if (ctx->pc == 0x208EC8u) {
        ctx->pc = 0x208EC8u;
            // 0x208ec8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x208ECCu;
        goto label_208ecc;
    }
    ctx->pc = 0x208EC4u;
    {
        const bool branch_taken_0x208ec4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208ec4) {
            ctx->pc = 0x208EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208EC4u;
            // 0x208ec8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208ECCu;
            goto label_208ecc;
        }
    }
    ctx->pc = 0x208ECCu;
label_208ecc:
    // 0x208ecc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x208eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_208ed0:
    // 0x208ed0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x208ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208ed4:
    // 0x208ed4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x208ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208ed8:
    // 0x208ed8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x208ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208edc:
    // 0x208edc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_208ee0:
    if (ctx->pc == 0x208EE0u) {
        ctx->pc = 0x208EE0u;
            // 0x208ee0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x208EE4u;
        goto label_208ee4;
    }
    ctx->pc = 0x208EDCu;
    {
        const bool branch_taken_0x208edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208edc) {
            ctx->pc = 0x208EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208EDCu;
            // 0x208ee0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208EE4u;
            goto label_208ee4;
        }
    }
    ctx->pc = 0x208EE4u;
label_208ee4:
    // 0x208ee4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x208ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_208ee8:
    // 0x208ee8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x208ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208eec:
    // 0x208eec: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x208eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208ef0:
    // 0x208ef0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x208ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208ef4:
    // 0x208ef4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_208ef8:
    if (ctx->pc == 0x208EF8u) {
        ctx->pc = 0x208EF8u;
            // 0x208ef8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x208EFCu;
        goto label_208efc;
    }
    ctx->pc = 0x208EF4u;
    {
        const bool branch_taken_0x208ef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208ef4) {
            ctx->pc = 0x208EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208EF4u;
            // 0x208ef8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208EFCu;
            goto label_208efc;
        }
    }
    ctx->pc = 0x208EFCu;
label_208efc:
    // 0x208efc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x208efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_208f00:
    // 0x208f00: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x208f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208f04:
    // 0x208f04: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x208f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208f08:
    // 0x208f08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x208f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208f0c:
    // 0x208f0c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_208f10:
    if (ctx->pc == 0x208F10u) {
        ctx->pc = 0x208F10u;
            // 0x208f10: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x208F14u;
        goto label_208f14;
    }
    ctx->pc = 0x208F0Cu;
    {
        const bool branch_taken_0x208f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208f0c) {
            ctx->pc = 0x208F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208F0Cu;
            // 0x208f10: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208F14u;
            goto label_208f14;
        }
    }
    ctx->pc = 0x208F14u;
label_208f14:
    // 0x208f14: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x208f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_208f18:
    // 0x208f18: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x208f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208f1c:
    // 0x208f1c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x208f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208f20:
    // 0x208f20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x208f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208f24:
    // 0x208f24: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_208f28:
    if (ctx->pc == 0x208F28u) {
        ctx->pc = 0x208F28u;
            // 0x208f28: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x208F2Cu;
        goto label_208f2c;
    }
    ctx->pc = 0x208F24u;
    {
        const bool branch_taken_0x208f24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208f24) {
            ctx->pc = 0x208F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208F24u;
            // 0x208f28: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208F2Cu;
            goto label_208f2c;
        }
    }
    ctx->pc = 0x208F2Cu;
label_208f2c:
    // 0x208f2c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x208f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_208f30:
    // 0x208f30: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x208f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208f34:
    // 0x208f34: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x208f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208f38:
    // 0x208f38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x208f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208f3c:
    // 0x208f3c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_208f40:
    if (ctx->pc == 0x208F40u) {
        ctx->pc = 0x208F40u;
            // 0x208f40: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x208F44u;
        goto label_208f44;
    }
    ctx->pc = 0x208F3Cu;
    {
        const bool branch_taken_0x208f3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208f3c) {
            ctx->pc = 0x208F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208F3Cu;
            // 0x208f40: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208F44u;
            goto label_208f44;
        }
    }
    ctx->pc = 0x208F44u;
label_208f44:
    // 0x208f44: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x208f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_208f48:
    // 0x208f48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x208f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_208f4c:
    // 0x208f4c: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x208f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_208f50:
    // 0x208f50: 0xc09e538  jal         func_2794E0
label_208f54:
    if (ctx->pc == 0x208F54u) {
        ctx->pc = 0x208F54u;
            // 0x208f54: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x208F58u;
        goto label_208f58;
    }
    ctx->pc = 0x208F50u;
    SET_GPR_U32(ctx, 31, 0x208F58u);
    ctx->pc = 0x208F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208F50u;
            // 0x208f54: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2794E0u;
    if (runtime->hasFunction(0x2794E0u)) {
        auto targetFn = runtime->lookupFunction(0x2794E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F58u; }
        if (ctx->pc != 0x208F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002794E0_0x2794e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208F58u; }
        if (ctx->pc != 0x208F58u) { return; }
    }
    ctx->pc = 0x208F58u;
label_208f58:
    // 0x208f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208f5c:
    // 0x208f5c: 0x3e00008  jr          $ra
label_208f60:
    if (ctx->pc == 0x208F60u) {
        ctx->pc = 0x208F60u;
            // 0x208f60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x208F64u;
        goto label_208f64;
    }
    ctx->pc = 0x208F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208F5Cu;
            // 0x208f60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208F64u;
label_208f64:
    // 0x208f64: 0x0  nop
    ctx->pc = 0x208f64u;
    // NOP
label_208f68:
    // 0x208f68: 0x0  nop
    ctx->pc = 0x208f68u;
    // NOP
label_208f6c:
    // 0x208f6c: 0x0  nop
    ctx->pc = 0x208f6cu;
    // NOP
label_208f70:
    // 0x208f70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x208f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_208f74:
    // 0x208f74: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x208f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_208f78:
    // 0x208f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_208f7c:
    // 0x208f7c: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x208f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_208f80:
    // 0x208f80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_208f84:
    // 0x208f84: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x208f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_208f88:
    // 0x208f88: 0x8c880030  lw          $t0, 0x30($a0)
    ctx->pc = 0x208f88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_208f8c:
    // 0x208f8c: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x208f8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_208f90:
    // 0x208f90: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x208f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_208f94:
    // 0x208f94: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x208f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208f98:
    // 0x208f98: 0x3c024b80  lui         $v0, 0x4B80
    ctx->pc = 0x208f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19328 << 16));
label_208f9c:
    // 0x208f9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x208f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_208fa0:
    // 0x208fa0: 0x0  nop
    ctx->pc = 0x208fa0u;
    // NOP
label_208fa4:
    // 0x208fa4: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x208fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
label_208fa8:
    // 0x208fa8: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x208fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_208fac:
    // 0x208fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208fb0:
    // 0x208fb0: 0xe5220014  swc1        $f2, 0x14($t1)
    ctx->pc = 0x208fb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
label_208fb4:
    // 0x208fb4: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x208fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_208fb8:
    // 0x208fb8: 0xe5220018  swc1        $f2, 0x18($t1)
    ctx->pc = 0x208fb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 24), bits); }
label_208fbc:
    // 0x208fbc: 0xc482002c  lwc1        $f2, 0x2C($a0)
    ctx->pc = 0x208fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_208fc0:
    // 0x208fc0: 0xe522001c  swc1        $f2, 0x1C($t1)
    ctx->pc = 0x208fc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
label_208fc4:
    // 0x208fc4: 0xad230020  sw          $v1, 0x20($t1)
    ctx->pc = 0x208fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 3));
label_208fc8:
    // 0x208fc8: 0xad280024  sw          $t0, 0x24($t1)
    ctx->pc = 0x208fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 8));
label_208fcc:
    // 0x208fcc: 0xad280028  sw          $t0, 0x28($t1)
    ctx->pc = 0x208fccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 8));
label_208fd0:
    // 0x208fd0: 0xc482002c  lwc1        $f2, 0x2C($a0)
    ctx->pc = 0x208fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_208fd4:
    // 0x208fd4: 0xc4850020  lwc1        $f5, 0x20($a0)
    ctx->pc = 0x208fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_208fd8:
    // 0x208fd8: 0xc4840024  lwc1        $f4, 0x24($a0)
    ctx->pc = 0x208fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_208fdc:
    // 0x208fdc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x208fdcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_208fe0:
    // 0x208fe0: 0xc4830028  lwc1        $f3, 0x28($a0)
    ctx->pc = 0x208fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_208fe4:
    // 0x208fe4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x208fe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_208fe8:
    // 0x208fe8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x208fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_208fec:
    // 0x208fec: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x208fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_208ff0:
    // 0x208ff0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x208ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_208ff4:
    // 0x208ff4: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x208ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_208ff8:
    // 0x208ff8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x208ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_208ffc:
    // 0x208ffc: 0x46012800  add.s       $f0, $f5, $f1
    ctx->pc = 0x208ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_209000:
    // 0x209000: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x209000u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_209004:
    // 0x209004: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x209004u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_209008:
    // 0x209008: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x209008u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_20900c:
    // 0x20900c: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x20900cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_209010:
    // 0x209010: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x209010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_209014:
    // 0x209014: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x209014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209018:
    // 0x209018: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x209018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20901c:
    // 0x20901c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_209020:
    if (ctx->pc == 0x209020u) {
        ctx->pc = 0x209020u;
            // 0x209020: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x209024u;
        goto label_209024;
    }
    ctx->pc = 0x20901Cu;
    {
        const bool branch_taken_0x20901c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20901c) {
            ctx->pc = 0x209020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20901Cu;
            // 0x209020: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x209024u;
            goto label_209024;
        }
    }
    ctx->pc = 0x209024u;
label_209024:
    // 0x209024: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x209024u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_209028:
    // 0x209028: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x209028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20902c:
    // 0x20902c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x20902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209030:
    // 0x209030: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x209030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209034:
    // 0x209034: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_209038:
    if (ctx->pc == 0x209038u) {
        ctx->pc = 0x209038u;
            // 0x209038: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20903Cu;
        goto label_20903c;
    }
    ctx->pc = 0x209034u;
    {
        const bool branch_taken_0x209034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209034) {
            ctx->pc = 0x209038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209034u;
            // 0x209038: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20903Cu;
            goto label_20903c;
        }
    }
    ctx->pc = 0x20903Cu;
label_20903c:
    // 0x20903c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x20903cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_209040:
    // 0x209040: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x209040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209044:
    // 0x209044: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x209044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209048:
    // 0x209048: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x209048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20904c:
    // 0x20904c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_209050:
    if (ctx->pc == 0x209050u) {
        ctx->pc = 0x209050u;
            // 0x209050: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x209054u;
        goto label_209054;
    }
    ctx->pc = 0x20904Cu;
    {
        const bool branch_taken_0x20904c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20904c) {
            ctx->pc = 0x209050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20904Cu;
            // 0x209050: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x209054u;
            goto label_209054;
        }
    }
    ctx->pc = 0x209054u;
label_209054:
    // 0x209054: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x209054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_209058:
    // 0x209058: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x209058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20905c:
    // 0x20905c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x20905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209060:
    // 0x209060: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x209060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209064:
    // 0x209064: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_209068:
    if (ctx->pc == 0x209068u) {
        ctx->pc = 0x209068u;
            // 0x209068: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20906Cu;
        goto label_20906c;
    }
    ctx->pc = 0x209064u;
    {
        const bool branch_taken_0x209064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209064) {
            ctx->pc = 0x209068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209064u;
            // 0x209068: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20906Cu;
            goto label_20906c;
        }
    }
    ctx->pc = 0x20906Cu;
label_20906c:
    // 0x20906c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x20906cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_209070:
    // 0x209070: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x209070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209074:
    // 0x209074: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x209074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209078:
    // 0x209078: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x209078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20907c:
    // 0x20907c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_209080:
    if (ctx->pc == 0x209080u) {
        ctx->pc = 0x209080u;
            // 0x209080: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x209084u;
        goto label_209084;
    }
    ctx->pc = 0x20907Cu;
    {
        const bool branch_taken_0x20907c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20907c) {
            ctx->pc = 0x209080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20907Cu;
            // 0x209080: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x209084u;
            goto label_209084;
        }
    }
    ctx->pc = 0x209084u;
label_209084:
    // 0x209084: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x209084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_209088:
    // 0x209088: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x209088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20908c:
    // 0x20908c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x20908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209090:
    // 0x209090: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x209090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209094:
    // 0x209094: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_209098:
    if (ctx->pc == 0x209098u) {
        ctx->pc = 0x209098u;
            // 0x209098: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20909Cu;
        goto label_20909c;
    }
    ctx->pc = 0x209094u;
    {
        const bool branch_taken_0x209094 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209094) {
            ctx->pc = 0x209098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209094u;
            // 0x209098: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20909Cu;
            goto label_20909c;
        }
    }
    ctx->pc = 0x20909Cu;
label_20909c:
    // 0x20909c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x20909cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2090a0:
    // 0x2090a0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2090a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2090a4:
    // 0x2090a4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2090a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2090a8:
    // 0x2090a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2090a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2090ac:
    // 0x2090ac: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2090b0:
    if (ctx->pc == 0x2090B0u) {
        ctx->pc = 0x2090B0u;
            // 0x2090b0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2090B4u;
        goto label_2090b4;
    }
    ctx->pc = 0x2090ACu;
    {
        const bool branch_taken_0x2090ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2090ac) {
            ctx->pc = 0x2090B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2090ACu;
            // 0x2090b0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2090B4u;
            goto label_2090b4;
        }
    }
    ctx->pc = 0x2090B4u;
label_2090b4:
    // 0x2090b4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2090b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2090b8:
    // 0x2090b8: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x2090b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2090bc:
    // 0x2090bc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2090bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2090c0:
    // 0x2090c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2090c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2090c4:
    // 0x2090c4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2090c8:
    if (ctx->pc == 0x2090C8u) {
        ctx->pc = 0x2090C8u;
            // 0x2090c8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2090CCu;
        goto label_2090cc;
    }
    ctx->pc = 0x2090C4u;
    {
        const bool branch_taken_0x2090c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2090c4) {
            ctx->pc = 0x2090C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2090C4u;
            // 0x2090c8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2090CCu;
            goto label_2090cc;
        }
    }
    ctx->pc = 0x2090CCu;
label_2090cc:
    // 0x2090cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2090ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2090d0:
    // 0x2090d0: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x2090d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
label_2090d4:
    // 0x2090d4: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2090d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_2090d8:
    // 0x2090d8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2090d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2090dc:
    // 0x2090dc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2090dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_2090e0:
    // 0x2090e0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x2090e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_2090e4:
    // 0x2090e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2090e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2090e8:
    // 0x2090e8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2090e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2090ec:
    // 0x2090ec: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2090ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2090f0:
    // 0x2090f0: 0xc09e538  jal         func_2794E0
label_2090f4:
    if (ctx->pc == 0x2090F4u) {
        ctx->pc = 0x2090F4u;
            // 0x2090f4: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->pc = 0x2090F8u;
        goto label_2090f8;
    }
    ctx->pc = 0x2090F0u;
    SET_GPR_U32(ctx, 31, 0x2090F8u);
    ctx->pc = 0x2090F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2090F0u;
            // 0x2090f4: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2794E0u;
    if (runtime->hasFunction(0x2794E0u)) {
        auto targetFn = runtime->lookupFunction(0x2794E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090F8u; }
        if (ctx->pc != 0x2090F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002794E0_0x2794e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090F8u; }
        if (ctx->pc != 0x2090F8u) { return; }
    }
    ctx->pc = 0x2090F8u;
label_2090f8:
    // 0x2090f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2090f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2090fc:
    // 0x2090fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2090fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_209100:
    // 0x209100: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x209100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_209104:
    // 0x209104: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x209104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_209108:
    // 0x209108: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_20910c:
    if (ctx->pc == 0x20910Cu) {
        ctx->pc = 0x20910Cu;
            // 0x20910c: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x209110u;
        goto label_209110;
    }
    ctx->pc = 0x209108u;
    {
        const bool branch_taken_0x209108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209108u;
            // 0x20910c: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209108) {
            ctx->pc = 0x209134u;
            goto label_209134;
        }
    }
    ctx->pc = 0x209110u;
label_209110:
    // 0x209110: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209114:
    // 0x209114: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x209114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_209118:
    // 0x209118: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x209118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_20911c:
    // 0x20911c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x20911cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_209120:
    // 0x209120: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x209120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_209124:
    // 0x209124: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x209124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_209128:
    // 0x209128: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x209128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_20912c:
    // 0x20912c: 0xc0a7ab4  jal         func_29EAD0
label_209130:
    if (ctx->pc == 0x209130u) {
        ctx->pc = 0x209130u;
            // 0x209130: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x209134u;
        goto label_209134;
    }
    ctx->pc = 0x20912Cu;
    SET_GPR_U32(ctx, 31, 0x209134u);
    ctx->pc = 0x209130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20912Cu;
            // 0x209130: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209134u; }
        if (ctx->pc != 0x209134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209134u; }
        if (ctx->pc != 0x209134u) { return; }
    }
    ctx->pc = 0x209134u;
label_209134:
    // 0x209134: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x209134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209138:
    // 0x209138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20913c:
    // 0x20913c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20913cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_209140:
    // 0x209140: 0x3e00008  jr          $ra
label_209144:
    if (ctx->pc == 0x209144u) {
        ctx->pc = 0x209144u;
            // 0x209144: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x209148u;
        goto label_209148;
    }
    ctx->pc = 0x209140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209140u;
            // 0x209144: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209148u;
label_209148:
    // 0x209148: 0x0  nop
    ctx->pc = 0x209148u;
    // NOP
label_20914c:
    // 0x20914c: 0x0  nop
    ctx->pc = 0x20914cu;
    // NOP
label_209150:
    // 0x209150: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x209150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_209154:
    // 0x209154: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209158:
    // 0x209158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20915c:
    // 0x20915c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x20915cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_209160:
    // 0x209160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_209164:
    // 0x209164: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x209164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_209168:
    // 0x209168: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20916c:
    // 0x20916c: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x20916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_209170:
    // 0x209170: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x209170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_209174:
    // 0x209174: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x209174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_209178:
    // 0x209178: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20917c:
    // 0x20917c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x20917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_209180:
    // 0x209180: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x209180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_209184:
    // 0x209184: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_209188:
    if (ctx->pc == 0x209188u) {
        ctx->pc = 0x209188u;
            // 0x209188: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x20918Cu;
        goto label_20918c;
    }
    ctx->pc = 0x209184u;
    {
        const bool branch_taken_0x209184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209184u;
            // 0x209188: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209184) {
            ctx->pc = 0x2091B4u;
            goto label_2091b4;
        }
    }
    ctx->pc = 0x20918Cu;
label_20918c:
    // 0x20918c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_209190:
    // 0x209190: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x209190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_209194:
    // 0x209194: 0x2442bed8  addiu       $v0, $v0, -0x4128
    ctx->pc = 0x209194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950616));
label_209198:
    // 0x209198: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x209198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20919c:
    // 0x20919c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2091a0:
    // 0x2091a0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2091a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2091a4:
    // 0x2091a4: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2091a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_2091a8:
    // 0x2091a8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2091a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2091ac:
    // 0x2091ac: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x2091acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_2091b0:
    // 0x2091b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2091b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2091b4:
    // 0x2091b4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2091b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2091b8:
    // 0x2091b8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2091b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_2091bc:
    // 0x2091bc: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x2091bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_2091c0:
    // 0x2091c0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x2091c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_2091c4:
    // 0x2091c4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2091c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2091c8:
    // 0x2091c8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2091c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2091cc:
    // 0x2091cc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2091ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2091d0:
    // 0x2091d0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2091d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2091d4:
    // 0x2091d4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2091d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2091d8:
    // 0x2091d8: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x2091d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2091dc:
    // 0x2091dc: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2091dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2091e0:
    // 0x2091e0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2091e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2091e4:
    // 0x2091e4: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x2091e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_2091e8:
    // 0x2091e8: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2091e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2091ec:
    // 0x2091ec: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x2091ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_2091f0:
    // 0x2091f0: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2091f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2091f4:
    // 0x2091f4: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x2091f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_2091f8:
    // 0x2091f8: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2091f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2091fc:
    // 0x2091fc: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x2091fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_209200:
    // 0x209200: 0xace20020  sw          $v0, 0x20($a3)
    ctx->pc = 0x209200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 2));
label_209204:
    // 0x209204: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x209204u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
label_209208:
    // 0x209208: 0xace30028  sw          $v1, 0x28($a3)
    ctx->pc = 0x209208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 3));
label_20920c:
    // 0x20920c: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x20920cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_209210:
    // 0x209210: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
label_209214:
    if (ctx->pc == 0x209214u) {
        ctx->pc = 0x209214u;
            // 0x209214: 0x27a400ec  addiu       $a0, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->pc = 0x209218u;
        goto label_209218;
    }
    ctx->pc = 0x209210u;
    {
        const bool branch_taken_0x209210 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x209210) {
            ctx->pc = 0x209214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209210u;
            // 0x209214: 0x27a400ec  addiu       $a0, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209220u;
            goto label_209220;
        }
    }
    ctx->pc = 0x209218u;
label_209218:
    // 0x209218: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x209218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_20921c:
    // 0x20921c: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x20921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_209220:
    // 0x209220: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x209220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_209224:
    // 0x209224: 0xc09e0ec  jal         func_2783B0
label_209228:
    if (ctx->pc == 0x209228u) {
        ctx->pc = 0x209228u;
            // 0x209228: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20922Cu;
        goto label_20922c;
    }
    ctx->pc = 0x209224u;
    SET_GPR_U32(ctx, 31, 0x20922Cu);
    ctx->pc = 0x209228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209224u;
            // 0x209228: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2783B0u;
    if (runtime->hasFunction(0x2783B0u)) {
        auto targetFn = runtime->lookupFunction(0x2783B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20922Cu; }
        if (ctx->pc != 0x20922Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002783B0_0x2783b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20922Cu; }
        if (ctx->pc != 0x20922Cu) { return; }
    }
    ctx->pc = 0x20922Cu;
label_20922c:
    // 0x20922c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x20922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_209230:
    // 0x209230: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x209230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_209234:
    // 0x209234: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x209234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_209238:
    // 0x209238: 0x83a200ec  lb          $v0, 0xEC($sp)
    ctx->pc = 0x209238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 236)));
label_20923c:
    // 0x20923c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_209240:
    if (ctx->pc == 0x209240u) {
        ctx->pc = 0x209240u;
            // 0x209240: 0x83a500ec  lb          $a1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->pc = 0x209244u;
        goto label_209244;
    }
    ctx->pc = 0x20923Cu;
    {
        const bool branch_taken_0x20923c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20923Cu;
            // 0x209240: 0x83a500ec  lb          $a1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20923c) {
            ctx->pc = 0x209254u;
            goto label_209254;
        }
    }
    ctx->pc = 0x209244u;
label_209244:
    // 0x209244: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x209244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_209248:
    // 0x209248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x209248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20924c:
    // 0x20924c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_209250:
    // 0x209250: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x209250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_209254:
    // 0x209254: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209258:
    // 0x209258: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x209258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_20925c:
    // 0x20925c: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x20925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_209260:
    // 0x209260: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209264:
    // 0x209264: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x209264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_209268:
    // 0x209268: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x209268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20926c:
    // 0x20926c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_209270:
    if (ctx->pc == 0x209270u) {
        ctx->pc = 0x209270u;
            // 0x209270: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x209274u;
        goto label_209274;
    }
    ctx->pc = 0x20926Cu;
    {
        const bool branch_taken_0x20926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20926Cu;
            // 0x209270: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20926c) {
            ctx->pc = 0x20929Cu;
            goto label_20929c;
        }
    }
    ctx->pc = 0x209274u;
label_209274:
    // 0x209274: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x209274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_209278:
    // 0x209278: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x209278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20927c:
    // 0x20927c: 0x2442bee8  addiu       $v0, $v0, -0x4118
    ctx->pc = 0x20927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950632));
label_209280:
    // 0x209280: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x209280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_209284:
    // 0x209284: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x209284u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_209288:
    // 0x209288: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x209288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_20928c:
    // 0x20928c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_209290:
    // 0x209290: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x209290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_209294:
    // 0x209294: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x209294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_209298:
    // 0x209298: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x209298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_20929c:
    // 0x20929c: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x20929cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_2092a0:
    // 0x2092a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2092a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2092a4:
    // 0x2092a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2092a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2092a8:
    // 0x2092a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2092a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2092ac:
    // 0x2092ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2092acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2092b0:
    // 0x2092b0: 0x3e00008  jr          $ra
label_2092b4:
    if (ctx->pc == 0x2092B4u) {
        ctx->pc = 0x2092B4u;
            // 0x2092b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2092B8u;
        goto label_2092b8;
    }
    ctx->pc = 0x2092B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2092B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2092B0u;
            // 0x2092b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2092B8u;
label_2092b8:
    // 0x2092b8: 0x0  nop
    ctx->pc = 0x2092b8u;
    // NOP
label_2092bc:
    // 0x2092bc: 0x0  nop
    ctx->pc = 0x2092bcu;
    // NOP
label_2092c0:
    // 0x2092c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2092c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2092c4:
    // 0x2092c4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2092c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2092c8:
    // 0x2092c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2092c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2092cc:
    // 0x2092cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2092ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2092d0:
    // 0x2092d0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x2092d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_2092d4:
    // 0x2092d4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2092d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2092d8:
    // 0x2092d8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2092d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2092dc:
    // 0x2092dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2092dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2092e0:
    // 0x2092e0: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x2092e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_2092e4:
    // 0x2092e4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2092e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2092e8:
    // 0x2092e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2092ec:
    if (ctx->pc == 0x2092ECu) {
        ctx->pc = 0x2092ECu;
            // 0x2092ec: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x2092F0u;
        goto label_2092f0;
    }
    ctx->pc = 0x2092E8u;
    {
        const bool branch_taken_0x2092e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2092ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2092E8u;
            // 0x2092ec: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2092e8) {
            ctx->pc = 0x209318u;
            goto label_209318;
        }
    }
    ctx->pc = 0x2092F0u;
label_2092f0:
    // 0x2092f0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2092f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2092f4:
    // 0x2092f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2092f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2092f8:
    // 0x2092f8: 0x2442bed8  addiu       $v0, $v0, -0x4128
    ctx->pc = 0x2092f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950616));
label_2092fc:
    // 0x2092fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2092fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_209300:
    // 0x209300: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x209300u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_209304:
    // 0x209304: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x209304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_209308:
    // 0x209308: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x209308u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_20930c:
    // 0x20930c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x20930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_209310:
    // 0x209310: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x209310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
label_209314:
    // 0x209314: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x209314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_209318:
    // 0x209318: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x209318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_20931c:
    // 0x20931c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x20931cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_209320:
    // 0x209320: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x209320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
label_209324:
    // 0x209324: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x209324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_209328:
    // 0x209328: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x209328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_20932c:
    // 0x20932c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x20932cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_209330:
    // 0x209330: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x209330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_209334:
    // 0x209334: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_209338:
    if (ctx->pc == 0x209338u) {
        ctx->pc = 0x209338u;
            // 0x209338: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->pc = 0x20933Cu;
        goto label_20933c;
    }
    ctx->pc = 0x209334u;
    {
        const bool branch_taken_0x209334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x209338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209334u;
            // 0x209338: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209334) {
            ctx->pc = 0x209340u;
            goto label_209340;
        }
    }
    ctx->pc = 0x20933Cu;
label_20933c:
    // 0x20933c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x20933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_209340:
    // 0x209340: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x209340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_209344:
    // 0x209344: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x209344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_209348:
    // 0x209348: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x209348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20934c:
    // 0x20934c: 0xc09e174  jal         func_2785D0
label_209350:
    if (ctx->pc == 0x209350u) {
        ctx->pc = 0x209350u;
            // 0x209350: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x209354u;
        goto label_209354;
    }
    ctx->pc = 0x20934Cu;
    SET_GPR_U32(ctx, 31, 0x209354u);
    ctx->pc = 0x209350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20934Cu;
            // 0x209350: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2785D0u;
    if (runtime->hasFunction(0x2785D0u)) {
        auto targetFn = runtime->lookupFunction(0x2785D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209354u; }
        if (ctx->pc != 0x209354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002785D0_0x2785d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209354u; }
        if (ctx->pc != 0x209354u) { return; }
    }
    ctx->pc = 0x209354u;
label_209354:
    // 0x209354: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x209354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_209358:
    // 0x209358: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x209358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_20935c:
    // 0x20935c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x20935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_209360:
    // 0x209360: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x209360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_209364:
    // 0x209364: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x209364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_209368:
    // 0x209368: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x209368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20936c:
    // 0x20936c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_209370:
    if (ctx->pc == 0x209370u) {
        ctx->pc = 0x209370u;
            // 0x209370: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x209374u;
        goto label_209374;
    }
    ctx->pc = 0x20936Cu;
    {
        const bool branch_taken_0x20936c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20936Cu;
            // 0x209370: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20936c) {
            ctx->pc = 0x20939Cu;
            goto label_20939c;
        }
    }
    ctx->pc = 0x209374u;
label_209374:
    // 0x209374: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x209374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_209378:
    // 0x209378: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x209378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_20937c:
    // 0x20937c: 0x2463bee8  addiu       $v1, $v1, -0x4118
    ctx->pc = 0x20937cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950632));
label_209380:
    // 0x209380: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x209380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_209384:
    // 0x209384: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x209384u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_209388:
    // 0x209388: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x209388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_20938c:
    // 0x20938c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20938cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_209390:
    // 0x209390: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x209390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_209394:
    // 0x209394: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x209394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_209398:
    // 0x209398: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x209398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_20939c:
    // 0x20939c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2093a0:
    // 0x2093a0: 0x3e00008  jr          $ra
label_2093a4:
    if (ctx->pc == 0x2093A4u) {
        ctx->pc = 0x2093A4u;
            // 0x2093a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2093A8u;
        goto label_2093a8;
    }
    ctx->pc = 0x2093A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2093A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2093A0u;
            // 0x2093a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2093A8u;
label_2093a8:
    // 0x2093a8: 0x0  nop
    ctx->pc = 0x2093a8u;
    // NOP
label_2093ac:
    // 0x2093ac: 0x0  nop
    ctx->pc = 0x2093acu;
    // NOP
label_2093b0:
    // 0x2093b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2093b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2093b4:
    // 0x2093b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2093b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2093b8:
    // 0x2093b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2093b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2093bc:
    // 0x2093bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2093bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2093c0:
    // 0x2093c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2093c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2093c4:
    // 0x2093c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2093c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2093c8:
    // 0x2093c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2093c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2093cc:
    // 0x2093cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2093ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2093d0:
    // 0x2093d0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2093d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2093d4:
    // 0x2093d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2093d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2093d8:
    // 0x2093d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2093d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2093dc:
    // 0x2093dc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2093dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2093e0:
    // 0x2093e0: 0x320f809  jalr        $t9
label_2093e4:
    if (ctx->pc == 0x2093E4u) {
        ctx->pc = 0x2093E4u;
            // 0x2093e4: 0x24a5bef0  addiu       $a1, $a1, -0x4110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950640));
        ctx->pc = 0x2093E8u;
        goto label_2093e8;
    }
    ctx->pc = 0x2093E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2093E8u);
        ctx->pc = 0x2093E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2093E0u;
            // 0x2093e4: 0x24a5bef0  addiu       $a1, $a1, -0x4110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950640));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2093E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2093E8u; }
            if (ctx->pc != 0x2093E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2093E8u;
label_2093e8:
    // 0x2093e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2093e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2093ec:
    // 0x2093ec: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2093ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2093f0:
    // 0x2093f0: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x2093f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2093f4:
    // 0x2093f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2093f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2093f8:
    // 0x2093f8: 0x24a5bf00  addiu       $a1, $a1, -0x4100
    ctx->pc = 0x2093f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950656));
label_2093fc:
    // 0x2093fc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2093fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_209400:
    // 0x209400: 0x320f809  jalr        $t9
label_209404:
    if (ctx->pc == 0x209404u) {
        ctx->pc = 0x209404u;
            // 0x209404: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x209408u;
        goto label_209408;
    }
    ctx->pc = 0x209400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209408u);
        ctx->pc = 0x209404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209400u;
            // 0x209404: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209408u; }
            if (ctx->pc != 0x209408u) { return; }
        }
        }
    }
    ctx->pc = 0x209408u;
label_209408:
    // 0x209408: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x209408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20940c:
    // 0x20940c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x20940cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_209410:
    // 0x209410: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x209410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209414:
    // 0x209414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209418:
    // 0x209418: 0x24a5bf08  addiu       $a1, $a1, -0x40F8
    ctx->pc = 0x209418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950664));
label_20941c:
    // 0x20941c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20941cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209420:
    // 0x209420: 0x8ce80024  lw          $t0, 0x24($a3)
    ctx->pc = 0x209420u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_209424:
    // 0x209424: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x209424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_209428:
    // 0x209428: 0x320f809  jalr        $t9
label_20942c:
    if (ctx->pc == 0x20942Cu) {
        ctx->pc = 0x20942Cu;
            // 0x20942c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209430u;
        goto label_209430;
    }
    ctx->pc = 0x209428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209430u);
        ctx->pc = 0x20942Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209428u;
            // 0x20942c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209430u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209430u; }
            if (ctx->pc != 0x209430u) { return; }
        }
        }
    }
    ctx->pc = 0x209430u;
label_209430:
    // 0x209430: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x209430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209434:
    // 0x209434: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x209434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_209438:
    // 0x209438: 0x320f809  jalr        $t9
label_20943c:
    if (ctx->pc == 0x20943Cu) {
        ctx->pc = 0x20943Cu;
            // 0x20943c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209440u;
        goto label_209440;
    }
    ctx->pc = 0x209438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209440u);
        ctx->pc = 0x20943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209438u;
            // 0x20943c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209440u; }
            if (ctx->pc != 0x209440u) { return; }
        }
        }
    }
    ctx->pc = 0x209440u;
label_209440:
    // 0x209440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_209444:
    // 0x209444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x209444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_209448:
    // 0x209448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x209448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20944c:
    // 0x20944c: 0x3e00008  jr          $ra
label_209450:
    if (ctx->pc == 0x209450u) {
        ctx->pc = 0x209450u;
            // 0x209450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x209454u;
        goto label_209454;
    }
    ctx->pc = 0x20944Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20944Cu;
            // 0x209450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209454u;
label_209454:
    // 0x209454: 0x0  nop
    ctx->pc = 0x209454u;
    // NOP
label_209458:
    // 0x209458: 0x0  nop
    ctx->pc = 0x209458u;
    // NOP
label_20945c:
    // 0x20945c: 0x0  nop
    ctx->pc = 0x20945cu;
    // NOP
label_209460:
    // 0x209460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_209464:
    // 0x209464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_209468:
    // 0x209468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20946c:
    // 0x20946c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_209470:
    // 0x209470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209474:
    // 0x209474: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x209474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_209478:
    // 0x209478: 0x24b0ffc0  addiu       $s0, $a1, -0x40
    ctx->pc = 0x209478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
label_20947c:
    // 0x20947c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20947cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_209480:
    // 0x209480: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x209480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_209484:
    // 0x209484: 0x320f809  jalr        $t9
label_209488:
    if (ctx->pc == 0x209488u) {
        ctx->pc = 0x209488u;
            // 0x209488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20948Cu;
        goto label_20948c;
    }
    ctx->pc = 0x209484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20948Cu);
        ctx->pc = 0x209488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209484u;
            // 0x209488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20948Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20948Cu; }
            if (ctx->pc != 0x20948Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20948Cu;
label_20948c:
    // 0x20948c: 0x442000e  bltzl       $v0, . + 4 + (0xE << 2)
label_209490:
    if (ctx->pc == 0x209490u) {
        ctx->pc = 0x209490u;
            // 0x209490: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x209494u;
        goto label_209494;
    }
    ctx->pc = 0x20948Cu;
    {
        const bool branch_taken_0x20948c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20948c) {
            ctx->pc = 0x209490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20948Cu;
            // 0x209490: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2094C8u;
            goto label_2094c8;
        }
    }
    ctx->pc = 0x209494u;
label_209494:
    // 0x209494: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x209494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_209498:
    // 0x209498: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_20949c:
    if (ctx->pc == 0x20949Cu) {
        ctx->pc = 0x20949Cu;
            // 0x20949c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2094A0u;
        goto label_2094a0;
    }
    ctx->pc = 0x209498u;
    {
        const bool branch_taken_0x209498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x209498) {
            ctx->pc = 0x20949Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209498u;
            // 0x20949c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2094ACu;
            goto label_2094ac;
        }
    }
    ctx->pc = 0x2094A0u;
label_2094a0:
    // 0x2094a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2094a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2094a4:
    // 0x2094a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2094a8:
    if (ctx->pc == 0x2094A8u) {
        ctx->pc = 0x2094ACu;
        goto label_2094ac;
    }
    ctx->pc = 0x2094A4u;
    {
        const bool branch_taken_0x2094a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2094a4) {
            ctx->pc = 0x2094C8u;
            goto label_2094c8;
        }
    }
    ctx->pc = 0x2094ACu;
label_2094ac:
    // 0x2094ac: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x2094acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2094b0:
    // 0x2094b0: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_2094b4:
    if (ctx->pc == 0x2094B4u) {
        ctx->pc = 0x2094B4u;
            // 0x2094b4: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x2094B8u;
        goto label_2094b8;
    }
    ctx->pc = 0x2094B0u;
    {
        const bool branch_taken_0x2094b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2094b0) {
            ctx->pc = 0x2094B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2094B0u;
            // 0x2094b4: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2094C4u;
            goto label_2094c4;
        }
    }
    ctx->pc = 0x2094B8u;
label_2094b8:
    // 0x2094b8: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2094b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_2094bc:
    // 0x2094bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2094c0:
    if (ctx->pc == 0x2094C0u) {
        ctx->pc = 0x2094C0u;
            // 0x2094c0: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x2094C4u;
        goto label_2094c4;
    }
    ctx->pc = 0x2094BCu;
    {
        const bool branch_taken_0x2094bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2094C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2094BCu;
            // 0x2094c0: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094bc) {
            ctx->pc = 0x2094C8u;
            goto label_2094c8;
        }
    }
    ctx->pc = 0x2094C4u;
label_2094c4:
    // 0x2094c4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2094c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2094c8:
    // 0x2094c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2094c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2094cc:
    // 0x2094cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2094ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2094d0:
    // 0x2094d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2094d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2094d4:
    // 0x2094d4: 0x3e00008  jr          $ra
label_2094d8:
    if (ctx->pc == 0x2094D8u) {
        ctx->pc = 0x2094D8u;
            // 0x2094d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2094DCu;
        goto label_2094dc;
    }
    ctx->pc = 0x2094D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2094D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2094D4u;
            // 0x2094d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2094DCu;
label_2094dc:
    // 0x2094dc: 0x0  nop
    ctx->pc = 0x2094dcu;
    // NOP
label_2094e0:
    // 0x2094e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2094e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2094e4:
    // 0x2094e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2094e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2094e8:
    // 0x2094e8: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x2094e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2094ec:
    // 0x2094ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2094ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2094f0:
    // 0x2094f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2094f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2094f4:
    // 0x2094f4: 0x320f809  jalr        $t9
label_2094f8:
    if (ctx->pc == 0x2094F8u) {
        ctx->pc = 0x2094FCu;
        goto label_2094fc;
    }
    ctx->pc = 0x2094F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2094FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2094FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2094FCu; }
            if (ctx->pc != 0x2094FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2094FCu;
label_2094fc:
    // 0x2094fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2094fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209500:
    // 0x209500: 0x3e00008  jr          $ra
label_209504:
    if (ctx->pc == 0x209504u) {
        ctx->pc = 0x209504u;
            // 0x209504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x209508u;
        goto label_209508;
    }
    ctx->pc = 0x209500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209500u;
            // 0x209504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209508u;
label_209508:
    // 0x209508: 0x0  nop
    ctx->pc = 0x209508u;
    // NOP
label_20950c:
    // 0x20950c: 0x0  nop
    ctx->pc = 0x20950cu;
    // NOP
}
