#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00314B10
// Address: 0x314b10 - 0x316150
void sub_00314B10_0x314b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314B10_0x314b10");
#endif

    switch (ctx->pc) {
        case 0x314b10u: goto label_314b10;
        case 0x314b14u: goto label_314b14;
        case 0x314b18u: goto label_314b18;
        case 0x314b1cu: goto label_314b1c;
        case 0x314b20u: goto label_314b20;
        case 0x314b24u: goto label_314b24;
        case 0x314b28u: goto label_314b28;
        case 0x314b2cu: goto label_314b2c;
        case 0x314b30u: goto label_314b30;
        case 0x314b34u: goto label_314b34;
        case 0x314b38u: goto label_314b38;
        case 0x314b3cu: goto label_314b3c;
        case 0x314b40u: goto label_314b40;
        case 0x314b44u: goto label_314b44;
        case 0x314b48u: goto label_314b48;
        case 0x314b4cu: goto label_314b4c;
        case 0x314b50u: goto label_314b50;
        case 0x314b54u: goto label_314b54;
        case 0x314b58u: goto label_314b58;
        case 0x314b5cu: goto label_314b5c;
        case 0x314b60u: goto label_314b60;
        case 0x314b64u: goto label_314b64;
        case 0x314b68u: goto label_314b68;
        case 0x314b6cu: goto label_314b6c;
        case 0x314b70u: goto label_314b70;
        case 0x314b74u: goto label_314b74;
        case 0x314b78u: goto label_314b78;
        case 0x314b7cu: goto label_314b7c;
        case 0x314b80u: goto label_314b80;
        case 0x314b84u: goto label_314b84;
        case 0x314b88u: goto label_314b88;
        case 0x314b8cu: goto label_314b8c;
        case 0x314b90u: goto label_314b90;
        case 0x314b94u: goto label_314b94;
        case 0x314b98u: goto label_314b98;
        case 0x314b9cu: goto label_314b9c;
        case 0x314ba0u: goto label_314ba0;
        case 0x314ba4u: goto label_314ba4;
        case 0x314ba8u: goto label_314ba8;
        case 0x314bacu: goto label_314bac;
        case 0x314bb0u: goto label_314bb0;
        case 0x314bb4u: goto label_314bb4;
        case 0x314bb8u: goto label_314bb8;
        case 0x314bbcu: goto label_314bbc;
        case 0x314bc0u: goto label_314bc0;
        case 0x314bc4u: goto label_314bc4;
        case 0x314bc8u: goto label_314bc8;
        case 0x314bccu: goto label_314bcc;
        case 0x314bd0u: goto label_314bd0;
        case 0x314bd4u: goto label_314bd4;
        case 0x314bd8u: goto label_314bd8;
        case 0x314bdcu: goto label_314bdc;
        case 0x314be0u: goto label_314be0;
        case 0x314be4u: goto label_314be4;
        case 0x314be8u: goto label_314be8;
        case 0x314becu: goto label_314bec;
        case 0x314bf0u: goto label_314bf0;
        case 0x314bf4u: goto label_314bf4;
        case 0x314bf8u: goto label_314bf8;
        case 0x314bfcu: goto label_314bfc;
        case 0x314c00u: goto label_314c00;
        case 0x314c04u: goto label_314c04;
        case 0x314c08u: goto label_314c08;
        case 0x314c0cu: goto label_314c0c;
        case 0x314c10u: goto label_314c10;
        case 0x314c14u: goto label_314c14;
        case 0x314c18u: goto label_314c18;
        case 0x314c1cu: goto label_314c1c;
        case 0x314c20u: goto label_314c20;
        case 0x314c24u: goto label_314c24;
        case 0x314c28u: goto label_314c28;
        case 0x314c2cu: goto label_314c2c;
        case 0x314c30u: goto label_314c30;
        case 0x314c34u: goto label_314c34;
        case 0x314c38u: goto label_314c38;
        case 0x314c3cu: goto label_314c3c;
        case 0x314c40u: goto label_314c40;
        case 0x314c44u: goto label_314c44;
        case 0x314c48u: goto label_314c48;
        case 0x314c4cu: goto label_314c4c;
        case 0x314c50u: goto label_314c50;
        case 0x314c54u: goto label_314c54;
        case 0x314c58u: goto label_314c58;
        case 0x314c5cu: goto label_314c5c;
        case 0x314c60u: goto label_314c60;
        case 0x314c64u: goto label_314c64;
        case 0x314c68u: goto label_314c68;
        case 0x314c6cu: goto label_314c6c;
        case 0x314c70u: goto label_314c70;
        case 0x314c74u: goto label_314c74;
        case 0x314c78u: goto label_314c78;
        case 0x314c7cu: goto label_314c7c;
        case 0x314c80u: goto label_314c80;
        case 0x314c84u: goto label_314c84;
        case 0x314c88u: goto label_314c88;
        case 0x314c8cu: goto label_314c8c;
        case 0x314c90u: goto label_314c90;
        case 0x314c94u: goto label_314c94;
        case 0x314c98u: goto label_314c98;
        case 0x314c9cu: goto label_314c9c;
        case 0x314ca0u: goto label_314ca0;
        case 0x314ca4u: goto label_314ca4;
        case 0x314ca8u: goto label_314ca8;
        case 0x314cacu: goto label_314cac;
        case 0x314cb0u: goto label_314cb0;
        case 0x314cb4u: goto label_314cb4;
        case 0x314cb8u: goto label_314cb8;
        case 0x314cbcu: goto label_314cbc;
        case 0x314cc0u: goto label_314cc0;
        case 0x314cc4u: goto label_314cc4;
        case 0x314cc8u: goto label_314cc8;
        case 0x314cccu: goto label_314ccc;
        case 0x314cd0u: goto label_314cd0;
        case 0x314cd4u: goto label_314cd4;
        case 0x314cd8u: goto label_314cd8;
        case 0x314cdcu: goto label_314cdc;
        case 0x314ce0u: goto label_314ce0;
        case 0x314ce4u: goto label_314ce4;
        case 0x314ce8u: goto label_314ce8;
        case 0x314cecu: goto label_314cec;
        case 0x314cf0u: goto label_314cf0;
        case 0x314cf4u: goto label_314cf4;
        case 0x314cf8u: goto label_314cf8;
        case 0x314cfcu: goto label_314cfc;
        case 0x314d00u: goto label_314d00;
        case 0x314d04u: goto label_314d04;
        case 0x314d08u: goto label_314d08;
        case 0x314d0cu: goto label_314d0c;
        case 0x314d10u: goto label_314d10;
        case 0x314d14u: goto label_314d14;
        case 0x314d18u: goto label_314d18;
        case 0x314d1cu: goto label_314d1c;
        case 0x314d20u: goto label_314d20;
        case 0x314d24u: goto label_314d24;
        case 0x314d28u: goto label_314d28;
        case 0x314d2cu: goto label_314d2c;
        case 0x314d30u: goto label_314d30;
        case 0x314d34u: goto label_314d34;
        case 0x314d38u: goto label_314d38;
        case 0x314d3cu: goto label_314d3c;
        case 0x314d40u: goto label_314d40;
        case 0x314d44u: goto label_314d44;
        case 0x314d48u: goto label_314d48;
        case 0x314d4cu: goto label_314d4c;
        case 0x314d50u: goto label_314d50;
        case 0x314d54u: goto label_314d54;
        case 0x314d58u: goto label_314d58;
        case 0x314d5cu: goto label_314d5c;
        case 0x314d60u: goto label_314d60;
        case 0x314d64u: goto label_314d64;
        case 0x314d68u: goto label_314d68;
        case 0x314d6cu: goto label_314d6c;
        case 0x314d70u: goto label_314d70;
        case 0x314d74u: goto label_314d74;
        case 0x314d78u: goto label_314d78;
        case 0x314d7cu: goto label_314d7c;
        case 0x314d80u: goto label_314d80;
        case 0x314d84u: goto label_314d84;
        case 0x314d88u: goto label_314d88;
        case 0x314d8cu: goto label_314d8c;
        case 0x314d90u: goto label_314d90;
        case 0x314d94u: goto label_314d94;
        case 0x314d98u: goto label_314d98;
        case 0x314d9cu: goto label_314d9c;
        case 0x314da0u: goto label_314da0;
        case 0x314da4u: goto label_314da4;
        case 0x314da8u: goto label_314da8;
        case 0x314dacu: goto label_314dac;
        case 0x314db0u: goto label_314db0;
        case 0x314db4u: goto label_314db4;
        case 0x314db8u: goto label_314db8;
        case 0x314dbcu: goto label_314dbc;
        case 0x314dc0u: goto label_314dc0;
        case 0x314dc4u: goto label_314dc4;
        case 0x314dc8u: goto label_314dc8;
        case 0x314dccu: goto label_314dcc;
        case 0x314dd0u: goto label_314dd0;
        case 0x314dd4u: goto label_314dd4;
        case 0x314dd8u: goto label_314dd8;
        case 0x314ddcu: goto label_314ddc;
        case 0x314de0u: goto label_314de0;
        case 0x314de4u: goto label_314de4;
        case 0x314de8u: goto label_314de8;
        case 0x314decu: goto label_314dec;
        case 0x314df0u: goto label_314df0;
        case 0x314df4u: goto label_314df4;
        case 0x314df8u: goto label_314df8;
        case 0x314dfcu: goto label_314dfc;
        case 0x314e00u: goto label_314e00;
        case 0x314e04u: goto label_314e04;
        case 0x314e08u: goto label_314e08;
        case 0x314e0cu: goto label_314e0c;
        case 0x314e10u: goto label_314e10;
        case 0x314e14u: goto label_314e14;
        case 0x314e18u: goto label_314e18;
        case 0x314e1cu: goto label_314e1c;
        case 0x314e20u: goto label_314e20;
        case 0x314e24u: goto label_314e24;
        case 0x314e28u: goto label_314e28;
        case 0x314e2cu: goto label_314e2c;
        case 0x314e30u: goto label_314e30;
        case 0x314e34u: goto label_314e34;
        case 0x314e38u: goto label_314e38;
        case 0x314e3cu: goto label_314e3c;
        case 0x314e40u: goto label_314e40;
        case 0x314e44u: goto label_314e44;
        case 0x314e48u: goto label_314e48;
        case 0x314e4cu: goto label_314e4c;
        case 0x314e50u: goto label_314e50;
        case 0x314e54u: goto label_314e54;
        case 0x314e58u: goto label_314e58;
        case 0x314e5cu: goto label_314e5c;
        case 0x314e60u: goto label_314e60;
        case 0x314e64u: goto label_314e64;
        case 0x314e68u: goto label_314e68;
        case 0x314e6cu: goto label_314e6c;
        case 0x314e70u: goto label_314e70;
        case 0x314e74u: goto label_314e74;
        case 0x314e78u: goto label_314e78;
        case 0x314e7cu: goto label_314e7c;
        case 0x314e80u: goto label_314e80;
        case 0x314e84u: goto label_314e84;
        case 0x314e88u: goto label_314e88;
        case 0x314e8cu: goto label_314e8c;
        case 0x314e90u: goto label_314e90;
        case 0x314e94u: goto label_314e94;
        case 0x314e98u: goto label_314e98;
        case 0x314e9cu: goto label_314e9c;
        case 0x314ea0u: goto label_314ea0;
        case 0x314ea4u: goto label_314ea4;
        case 0x314ea8u: goto label_314ea8;
        case 0x314eacu: goto label_314eac;
        case 0x314eb0u: goto label_314eb0;
        case 0x314eb4u: goto label_314eb4;
        case 0x314eb8u: goto label_314eb8;
        case 0x314ebcu: goto label_314ebc;
        case 0x314ec0u: goto label_314ec0;
        case 0x314ec4u: goto label_314ec4;
        case 0x314ec8u: goto label_314ec8;
        case 0x314eccu: goto label_314ecc;
        case 0x314ed0u: goto label_314ed0;
        case 0x314ed4u: goto label_314ed4;
        case 0x314ed8u: goto label_314ed8;
        case 0x314edcu: goto label_314edc;
        case 0x314ee0u: goto label_314ee0;
        case 0x314ee4u: goto label_314ee4;
        case 0x314ee8u: goto label_314ee8;
        case 0x314eecu: goto label_314eec;
        case 0x314ef0u: goto label_314ef0;
        case 0x314ef4u: goto label_314ef4;
        case 0x314ef8u: goto label_314ef8;
        case 0x314efcu: goto label_314efc;
        case 0x314f00u: goto label_314f00;
        case 0x314f04u: goto label_314f04;
        case 0x314f08u: goto label_314f08;
        case 0x314f0cu: goto label_314f0c;
        case 0x314f10u: goto label_314f10;
        case 0x314f14u: goto label_314f14;
        case 0x314f18u: goto label_314f18;
        case 0x314f1cu: goto label_314f1c;
        case 0x314f20u: goto label_314f20;
        case 0x314f24u: goto label_314f24;
        case 0x314f28u: goto label_314f28;
        case 0x314f2cu: goto label_314f2c;
        case 0x314f30u: goto label_314f30;
        case 0x314f34u: goto label_314f34;
        case 0x314f38u: goto label_314f38;
        case 0x314f3cu: goto label_314f3c;
        case 0x314f40u: goto label_314f40;
        case 0x314f44u: goto label_314f44;
        case 0x314f48u: goto label_314f48;
        case 0x314f4cu: goto label_314f4c;
        case 0x314f50u: goto label_314f50;
        case 0x314f54u: goto label_314f54;
        case 0x314f58u: goto label_314f58;
        case 0x314f5cu: goto label_314f5c;
        case 0x314f60u: goto label_314f60;
        case 0x314f64u: goto label_314f64;
        case 0x314f68u: goto label_314f68;
        case 0x314f6cu: goto label_314f6c;
        case 0x314f70u: goto label_314f70;
        case 0x314f74u: goto label_314f74;
        case 0x314f78u: goto label_314f78;
        case 0x314f7cu: goto label_314f7c;
        case 0x314f80u: goto label_314f80;
        case 0x314f84u: goto label_314f84;
        case 0x314f88u: goto label_314f88;
        case 0x314f8cu: goto label_314f8c;
        case 0x314f90u: goto label_314f90;
        case 0x314f94u: goto label_314f94;
        case 0x314f98u: goto label_314f98;
        case 0x314f9cu: goto label_314f9c;
        case 0x314fa0u: goto label_314fa0;
        case 0x314fa4u: goto label_314fa4;
        case 0x314fa8u: goto label_314fa8;
        case 0x314facu: goto label_314fac;
        case 0x314fb0u: goto label_314fb0;
        case 0x314fb4u: goto label_314fb4;
        case 0x314fb8u: goto label_314fb8;
        case 0x314fbcu: goto label_314fbc;
        case 0x314fc0u: goto label_314fc0;
        case 0x314fc4u: goto label_314fc4;
        case 0x314fc8u: goto label_314fc8;
        case 0x314fccu: goto label_314fcc;
        case 0x314fd0u: goto label_314fd0;
        case 0x314fd4u: goto label_314fd4;
        case 0x314fd8u: goto label_314fd8;
        case 0x314fdcu: goto label_314fdc;
        case 0x314fe0u: goto label_314fe0;
        case 0x314fe4u: goto label_314fe4;
        case 0x314fe8u: goto label_314fe8;
        case 0x314fecu: goto label_314fec;
        case 0x314ff0u: goto label_314ff0;
        case 0x314ff4u: goto label_314ff4;
        case 0x314ff8u: goto label_314ff8;
        case 0x314ffcu: goto label_314ffc;
        case 0x315000u: goto label_315000;
        case 0x315004u: goto label_315004;
        case 0x315008u: goto label_315008;
        case 0x31500cu: goto label_31500c;
        case 0x315010u: goto label_315010;
        case 0x315014u: goto label_315014;
        case 0x315018u: goto label_315018;
        case 0x31501cu: goto label_31501c;
        case 0x315020u: goto label_315020;
        case 0x315024u: goto label_315024;
        case 0x315028u: goto label_315028;
        case 0x31502cu: goto label_31502c;
        case 0x315030u: goto label_315030;
        case 0x315034u: goto label_315034;
        case 0x315038u: goto label_315038;
        case 0x31503cu: goto label_31503c;
        case 0x315040u: goto label_315040;
        case 0x315044u: goto label_315044;
        case 0x315048u: goto label_315048;
        case 0x31504cu: goto label_31504c;
        case 0x315050u: goto label_315050;
        case 0x315054u: goto label_315054;
        case 0x315058u: goto label_315058;
        case 0x31505cu: goto label_31505c;
        case 0x315060u: goto label_315060;
        case 0x315064u: goto label_315064;
        case 0x315068u: goto label_315068;
        case 0x31506cu: goto label_31506c;
        case 0x315070u: goto label_315070;
        case 0x315074u: goto label_315074;
        case 0x315078u: goto label_315078;
        case 0x31507cu: goto label_31507c;
        case 0x315080u: goto label_315080;
        case 0x315084u: goto label_315084;
        case 0x315088u: goto label_315088;
        case 0x31508cu: goto label_31508c;
        case 0x315090u: goto label_315090;
        case 0x315094u: goto label_315094;
        case 0x315098u: goto label_315098;
        case 0x31509cu: goto label_31509c;
        case 0x3150a0u: goto label_3150a0;
        case 0x3150a4u: goto label_3150a4;
        case 0x3150a8u: goto label_3150a8;
        case 0x3150acu: goto label_3150ac;
        case 0x3150b0u: goto label_3150b0;
        case 0x3150b4u: goto label_3150b4;
        case 0x3150b8u: goto label_3150b8;
        case 0x3150bcu: goto label_3150bc;
        case 0x3150c0u: goto label_3150c0;
        case 0x3150c4u: goto label_3150c4;
        case 0x3150c8u: goto label_3150c8;
        case 0x3150ccu: goto label_3150cc;
        case 0x3150d0u: goto label_3150d0;
        case 0x3150d4u: goto label_3150d4;
        case 0x3150d8u: goto label_3150d8;
        case 0x3150dcu: goto label_3150dc;
        case 0x3150e0u: goto label_3150e0;
        case 0x3150e4u: goto label_3150e4;
        case 0x3150e8u: goto label_3150e8;
        case 0x3150ecu: goto label_3150ec;
        case 0x3150f0u: goto label_3150f0;
        case 0x3150f4u: goto label_3150f4;
        case 0x3150f8u: goto label_3150f8;
        case 0x3150fcu: goto label_3150fc;
        case 0x315100u: goto label_315100;
        case 0x315104u: goto label_315104;
        case 0x315108u: goto label_315108;
        case 0x31510cu: goto label_31510c;
        case 0x315110u: goto label_315110;
        case 0x315114u: goto label_315114;
        case 0x315118u: goto label_315118;
        case 0x31511cu: goto label_31511c;
        case 0x315120u: goto label_315120;
        case 0x315124u: goto label_315124;
        case 0x315128u: goto label_315128;
        case 0x31512cu: goto label_31512c;
        case 0x315130u: goto label_315130;
        case 0x315134u: goto label_315134;
        case 0x315138u: goto label_315138;
        case 0x31513cu: goto label_31513c;
        case 0x315140u: goto label_315140;
        case 0x315144u: goto label_315144;
        case 0x315148u: goto label_315148;
        case 0x31514cu: goto label_31514c;
        case 0x315150u: goto label_315150;
        case 0x315154u: goto label_315154;
        case 0x315158u: goto label_315158;
        case 0x31515cu: goto label_31515c;
        case 0x315160u: goto label_315160;
        case 0x315164u: goto label_315164;
        case 0x315168u: goto label_315168;
        case 0x31516cu: goto label_31516c;
        case 0x315170u: goto label_315170;
        case 0x315174u: goto label_315174;
        case 0x315178u: goto label_315178;
        case 0x31517cu: goto label_31517c;
        case 0x315180u: goto label_315180;
        case 0x315184u: goto label_315184;
        case 0x315188u: goto label_315188;
        case 0x31518cu: goto label_31518c;
        case 0x315190u: goto label_315190;
        case 0x315194u: goto label_315194;
        case 0x315198u: goto label_315198;
        case 0x31519cu: goto label_31519c;
        case 0x3151a0u: goto label_3151a0;
        case 0x3151a4u: goto label_3151a4;
        case 0x3151a8u: goto label_3151a8;
        case 0x3151acu: goto label_3151ac;
        case 0x3151b0u: goto label_3151b0;
        case 0x3151b4u: goto label_3151b4;
        case 0x3151b8u: goto label_3151b8;
        case 0x3151bcu: goto label_3151bc;
        case 0x3151c0u: goto label_3151c0;
        case 0x3151c4u: goto label_3151c4;
        case 0x3151c8u: goto label_3151c8;
        case 0x3151ccu: goto label_3151cc;
        case 0x3151d0u: goto label_3151d0;
        case 0x3151d4u: goto label_3151d4;
        case 0x3151d8u: goto label_3151d8;
        case 0x3151dcu: goto label_3151dc;
        case 0x3151e0u: goto label_3151e0;
        case 0x3151e4u: goto label_3151e4;
        case 0x3151e8u: goto label_3151e8;
        case 0x3151ecu: goto label_3151ec;
        case 0x3151f0u: goto label_3151f0;
        case 0x3151f4u: goto label_3151f4;
        case 0x3151f8u: goto label_3151f8;
        case 0x3151fcu: goto label_3151fc;
        case 0x315200u: goto label_315200;
        case 0x315204u: goto label_315204;
        case 0x315208u: goto label_315208;
        case 0x31520cu: goto label_31520c;
        case 0x315210u: goto label_315210;
        case 0x315214u: goto label_315214;
        case 0x315218u: goto label_315218;
        case 0x31521cu: goto label_31521c;
        case 0x315220u: goto label_315220;
        case 0x315224u: goto label_315224;
        case 0x315228u: goto label_315228;
        case 0x31522cu: goto label_31522c;
        case 0x315230u: goto label_315230;
        case 0x315234u: goto label_315234;
        case 0x315238u: goto label_315238;
        case 0x31523cu: goto label_31523c;
        case 0x315240u: goto label_315240;
        case 0x315244u: goto label_315244;
        case 0x315248u: goto label_315248;
        case 0x31524cu: goto label_31524c;
        case 0x315250u: goto label_315250;
        case 0x315254u: goto label_315254;
        case 0x315258u: goto label_315258;
        case 0x31525cu: goto label_31525c;
        case 0x315260u: goto label_315260;
        case 0x315264u: goto label_315264;
        case 0x315268u: goto label_315268;
        case 0x31526cu: goto label_31526c;
        case 0x315270u: goto label_315270;
        case 0x315274u: goto label_315274;
        case 0x315278u: goto label_315278;
        case 0x31527cu: goto label_31527c;
        case 0x315280u: goto label_315280;
        case 0x315284u: goto label_315284;
        case 0x315288u: goto label_315288;
        case 0x31528cu: goto label_31528c;
        case 0x315290u: goto label_315290;
        case 0x315294u: goto label_315294;
        case 0x315298u: goto label_315298;
        case 0x31529cu: goto label_31529c;
        case 0x3152a0u: goto label_3152a0;
        case 0x3152a4u: goto label_3152a4;
        case 0x3152a8u: goto label_3152a8;
        case 0x3152acu: goto label_3152ac;
        case 0x3152b0u: goto label_3152b0;
        case 0x3152b4u: goto label_3152b4;
        case 0x3152b8u: goto label_3152b8;
        case 0x3152bcu: goto label_3152bc;
        case 0x3152c0u: goto label_3152c0;
        case 0x3152c4u: goto label_3152c4;
        case 0x3152c8u: goto label_3152c8;
        case 0x3152ccu: goto label_3152cc;
        case 0x3152d0u: goto label_3152d0;
        case 0x3152d4u: goto label_3152d4;
        case 0x3152d8u: goto label_3152d8;
        case 0x3152dcu: goto label_3152dc;
        case 0x3152e0u: goto label_3152e0;
        case 0x3152e4u: goto label_3152e4;
        case 0x3152e8u: goto label_3152e8;
        case 0x3152ecu: goto label_3152ec;
        case 0x3152f0u: goto label_3152f0;
        case 0x3152f4u: goto label_3152f4;
        case 0x3152f8u: goto label_3152f8;
        case 0x3152fcu: goto label_3152fc;
        case 0x315300u: goto label_315300;
        case 0x315304u: goto label_315304;
        case 0x315308u: goto label_315308;
        case 0x31530cu: goto label_31530c;
        case 0x315310u: goto label_315310;
        case 0x315314u: goto label_315314;
        case 0x315318u: goto label_315318;
        case 0x31531cu: goto label_31531c;
        case 0x315320u: goto label_315320;
        case 0x315324u: goto label_315324;
        case 0x315328u: goto label_315328;
        case 0x31532cu: goto label_31532c;
        case 0x315330u: goto label_315330;
        case 0x315334u: goto label_315334;
        case 0x315338u: goto label_315338;
        case 0x31533cu: goto label_31533c;
        case 0x315340u: goto label_315340;
        case 0x315344u: goto label_315344;
        case 0x315348u: goto label_315348;
        case 0x31534cu: goto label_31534c;
        case 0x315350u: goto label_315350;
        case 0x315354u: goto label_315354;
        case 0x315358u: goto label_315358;
        case 0x31535cu: goto label_31535c;
        case 0x315360u: goto label_315360;
        case 0x315364u: goto label_315364;
        case 0x315368u: goto label_315368;
        case 0x31536cu: goto label_31536c;
        case 0x315370u: goto label_315370;
        case 0x315374u: goto label_315374;
        case 0x315378u: goto label_315378;
        case 0x31537cu: goto label_31537c;
        case 0x315380u: goto label_315380;
        case 0x315384u: goto label_315384;
        case 0x315388u: goto label_315388;
        case 0x31538cu: goto label_31538c;
        case 0x315390u: goto label_315390;
        case 0x315394u: goto label_315394;
        case 0x315398u: goto label_315398;
        case 0x31539cu: goto label_31539c;
        case 0x3153a0u: goto label_3153a0;
        case 0x3153a4u: goto label_3153a4;
        case 0x3153a8u: goto label_3153a8;
        case 0x3153acu: goto label_3153ac;
        case 0x3153b0u: goto label_3153b0;
        case 0x3153b4u: goto label_3153b4;
        case 0x3153b8u: goto label_3153b8;
        case 0x3153bcu: goto label_3153bc;
        case 0x3153c0u: goto label_3153c0;
        case 0x3153c4u: goto label_3153c4;
        case 0x3153c8u: goto label_3153c8;
        case 0x3153ccu: goto label_3153cc;
        case 0x3153d0u: goto label_3153d0;
        case 0x3153d4u: goto label_3153d4;
        case 0x3153d8u: goto label_3153d8;
        case 0x3153dcu: goto label_3153dc;
        case 0x3153e0u: goto label_3153e0;
        case 0x3153e4u: goto label_3153e4;
        case 0x3153e8u: goto label_3153e8;
        case 0x3153ecu: goto label_3153ec;
        case 0x3153f0u: goto label_3153f0;
        case 0x3153f4u: goto label_3153f4;
        case 0x3153f8u: goto label_3153f8;
        case 0x3153fcu: goto label_3153fc;
        case 0x315400u: goto label_315400;
        case 0x315404u: goto label_315404;
        case 0x315408u: goto label_315408;
        case 0x31540cu: goto label_31540c;
        case 0x315410u: goto label_315410;
        case 0x315414u: goto label_315414;
        case 0x315418u: goto label_315418;
        case 0x31541cu: goto label_31541c;
        case 0x315420u: goto label_315420;
        case 0x315424u: goto label_315424;
        case 0x315428u: goto label_315428;
        case 0x31542cu: goto label_31542c;
        case 0x315430u: goto label_315430;
        case 0x315434u: goto label_315434;
        case 0x315438u: goto label_315438;
        case 0x31543cu: goto label_31543c;
        case 0x315440u: goto label_315440;
        case 0x315444u: goto label_315444;
        case 0x315448u: goto label_315448;
        case 0x31544cu: goto label_31544c;
        case 0x315450u: goto label_315450;
        case 0x315454u: goto label_315454;
        case 0x315458u: goto label_315458;
        case 0x31545cu: goto label_31545c;
        case 0x315460u: goto label_315460;
        case 0x315464u: goto label_315464;
        case 0x315468u: goto label_315468;
        case 0x31546cu: goto label_31546c;
        case 0x315470u: goto label_315470;
        case 0x315474u: goto label_315474;
        case 0x315478u: goto label_315478;
        case 0x31547cu: goto label_31547c;
        case 0x315480u: goto label_315480;
        case 0x315484u: goto label_315484;
        case 0x315488u: goto label_315488;
        case 0x31548cu: goto label_31548c;
        case 0x315490u: goto label_315490;
        case 0x315494u: goto label_315494;
        case 0x315498u: goto label_315498;
        case 0x31549cu: goto label_31549c;
        case 0x3154a0u: goto label_3154a0;
        case 0x3154a4u: goto label_3154a4;
        case 0x3154a8u: goto label_3154a8;
        case 0x3154acu: goto label_3154ac;
        case 0x3154b0u: goto label_3154b0;
        case 0x3154b4u: goto label_3154b4;
        case 0x3154b8u: goto label_3154b8;
        case 0x3154bcu: goto label_3154bc;
        case 0x3154c0u: goto label_3154c0;
        case 0x3154c4u: goto label_3154c4;
        case 0x3154c8u: goto label_3154c8;
        case 0x3154ccu: goto label_3154cc;
        case 0x3154d0u: goto label_3154d0;
        case 0x3154d4u: goto label_3154d4;
        case 0x3154d8u: goto label_3154d8;
        case 0x3154dcu: goto label_3154dc;
        case 0x3154e0u: goto label_3154e0;
        case 0x3154e4u: goto label_3154e4;
        case 0x3154e8u: goto label_3154e8;
        case 0x3154ecu: goto label_3154ec;
        case 0x3154f0u: goto label_3154f0;
        case 0x3154f4u: goto label_3154f4;
        case 0x3154f8u: goto label_3154f8;
        case 0x3154fcu: goto label_3154fc;
        case 0x315500u: goto label_315500;
        case 0x315504u: goto label_315504;
        case 0x315508u: goto label_315508;
        case 0x31550cu: goto label_31550c;
        case 0x315510u: goto label_315510;
        case 0x315514u: goto label_315514;
        case 0x315518u: goto label_315518;
        case 0x31551cu: goto label_31551c;
        case 0x315520u: goto label_315520;
        case 0x315524u: goto label_315524;
        case 0x315528u: goto label_315528;
        case 0x31552cu: goto label_31552c;
        case 0x315530u: goto label_315530;
        case 0x315534u: goto label_315534;
        case 0x315538u: goto label_315538;
        case 0x31553cu: goto label_31553c;
        case 0x315540u: goto label_315540;
        case 0x315544u: goto label_315544;
        case 0x315548u: goto label_315548;
        case 0x31554cu: goto label_31554c;
        case 0x315550u: goto label_315550;
        case 0x315554u: goto label_315554;
        case 0x315558u: goto label_315558;
        case 0x31555cu: goto label_31555c;
        case 0x315560u: goto label_315560;
        case 0x315564u: goto label_315564;
        case 0x315568u: goto label_315568;
        case 0x31556cu: goto label_31556c;
        case 0x315570u: goto label_315570;
        case 0x315574u: goto label_315574;
        case 0x315578u: goto label_315578;
        case 0x31557cu: goto label_31557c;
        case 0x315580u: goto label_315580;
        case 0x315584u: goto label_315584;
        case 0x315588u: goto label_315588;
        case 0x31558cu: goto label_31558c;
        case 0x315590u: goto label_315590;
        case 0x315594u: goto label_315594;
        case 0x315598u: goto label_315598;
        case 0x31559cu: goto label_31559c;
        case 0x3155a0u: goto label_3155a0;
        case 0x3155a4u: goto label_3155a4;
        case 0x3155a8u: goto label_3155a8;
        case 0x3155acu: goto label_3155ac;
        case 0x3155b0u: goto label_3155b0;
        case 0x3155b4u: goto label_3155b4;
        case 0x3155b8u: goto label_3155b8;
        case 0x3155bcu: goto label_3155bc;
        case 0x3155c0u: goto label_3155c0;
        case 0x3155c4u: goto label_3155c4;
        case 0x3155c8u: goto label_3155c8;
        case 0x3155ccu: goto label_3155cc;
        case 0x3155d0u: goto label_3155d0;
        case 0x3155d4u: goto label_3155d4;
        case 0x3155d8u: goto label_3155d8;
        case 0x3155dcu: goto label_3155dc;
        case 0x3155e0u: goto label_3155e0;
        case 0x3155e4u: goto label_3155e4;
        case 0x3155e8u: goto label_3155e8;
        case 0x3155ecu: goto label_3155ec;
        case 0x3155f0u: goto label_3155f0;
        case 0x3155f4u: goto label_3155f4;
        case 0x3155f8u: goto label_3155f8;
        case 0x3155fcu: goto label_3155fc;
        case 0x315600u: goto label_315600;
        case 0x315604u: goto label_315604;
        case 0x315608u: goto label_315608;
        case 0x31560cu: goto label_31560c;
        case 0x315610u: goto label_315610;
        case 0x315614u: goto label_315614;
        case 0x315618u: goto label_315618;
        case 0x31561cu: goto label_31561c;
        case 0x315620u: goto label_315620;
        case 0x315624u: goto label_315624;
        case 0x315628u: goto label_315628;
        case 0x31562cu: goto label_31562c;
        case 0x315630u: goto label_315630;
        case 0x315634u: goto label_315634;
        case 0x315638u: goto label_315638;
        case 0x31563cu: goto label_31563c;
        case 0x315640u: goto label_315640;
        case 0x315644u: goto label_315644;
        case 0x315648u: goto label_315648;
        case 0x31564cu: goto label_31564c;
        case 0x315650u: goto label_315650;
        case 0x315654u: goto label_315654;
        case 0x315658u: goto label_315658;
        case 0x31565cu: goto label_31565c;
        case 0x315660u: goto label_315660;
        case 0x315664u: goto label_315664;
        case 0x315668u: goto label_315668;
        case 0x31566cu: goto label_31566c;
        case 0x315670u: goto label_315670;
        case 0x315674u: goto label_315674;
        case 0x315678u: goto label_315678;
        case 0x31567cu: goto label_31567c;
        case 0x315680u: goto label_315680;
        case 0x315684u: goto label_315684;
        case 0x315688u: goto label_315688;
        case 0x31568cu: goto label_31568c;
        case 0x315690u: goto label_315690;
        case 0x315694u: goto label_315694;
        case 0x315698u: goto label_315698;
        case 0x31569cu: goto label_31569c;
        case 0x3156a0u: goto label_3156a0;
        case 0x3156a4u: goto label_3156a4;
        case 0x3156a8u: goto label_3156a8;
        case 0x3156acu: goto label_3156ac;
        case 0x3156b0u: goto label_3156b0;
        case 0x3156b4u: goto label_3156b4;
        case 0x3156b8u: goto label_3156b8;
        case 0x3156bcu: goto label_3156bc;
        case 0x3156c0u: goto label_3156c0;
        case 0x3156c4u: goto label_3156c4;
        case 0x3156c8u: goto label_3156c8;
        case 0x3156ccu: goto label_3156cc;
        case 0x3156d0u: goto label_3156d0;
        case 0x3156d4u: goto label_3156d4;
        case 0x3156d8u: goto label_3156d8;
        case 0x3156dcu: goto label_3156dc;
        case 0x3156e0u: goto label_3156e0;
        case 0x3156e4u: goto label_3156e4;
        case 0x3156e8u: goto label_3156e8;
        case 0x3156ecu: goto label_3156ec;
        case 0x3156f0u: goto label_3156f0;
        case 0x3156f4u: goto label_3156f4;
        case 0x3156f8u: goto label_3156f8;
        case 0x3156fcu: goto label_3156fc;
        case 0x315700u: goto label_315700;
        case 0x315704u: goto label_315704;
        case 0x315708u: goto label_315708;
        case 0x31570cu: goto label_31570c;
        case 0x315710u: goto label_315710;
        case 0x315714u: goto label_315714;
        case 0x315718u: goto label_315718;
        case 0x31571cu: goto label_31571c;
        case 0x315720u: goto label_315720;
        case 0x315724u: goto label_315724;
        case 0x315728u: goto label_315728;
        case 0x31572cu: goto label_31572c;
        case 0x315730u: goto label_315730;
        case 0x315734u: goto label_315734;
        case 0x315738u: goto label_315738;
        case 0x31573cu: goto label_31573c;
        case 0x315740u: goto label_315740;
        case 0x315744u: goto label_315744;
        case 0x315748u: goto label_315748;
        case 0x31574cu: goto label_31574c;
        case 0x315750u: goto label_315750;
        case 0x315754u: goto label_315754;
        case 0x315758u: goto label_315758;
        case 0x31575cu: goto label_31575c;
        case 0x315760u: goto label_315760;
        case 0x315764u: goto label_315764;
        case 0x315768u: goto label_315768;
        case 0x31576cu: goto label_31576c;
        case 0x315770u: goto label_315770;
        case 0x315774u: goto label_315774;
        case 0x315778u: goto label_315778;
        case 0x31577cu: goto label_31577c;
        case 0x315780u: goto label_315780;
        case 0x315784u: goto label_315784;
        case 0x315788u: goto label_315788;
        case 0x31578cu: goto label_31578c;
        case 0x315790u: goto label_315790;
        case 0x315794u: goto label_315794;
        case 0x315798u: goto label_315798;
        case 0x31579cu: goto label_31579c;
        case 0x3157a0u: goto label_3157a0;
        case 0x3157a4u: goto label_3157a4;
        case 0x3157a8u: goto label_3157a8;
        case 0x3157acu: goto label_3157ac;
        case 0x3157b0u: goto label_3157b0;
        case 0x3157b4u: goto label_3157b4;
        case 0x3157b8u: goto label_3157b8;
        case 0x3157bcu: goto label_3157bc;
        case 0x3157c0u: goto label_3157c0;
        case 0x3157c4u: goto label_3157c4;
        case 0x3157c8u: goto label_3157c8;
        case 0x3157ccu: goto label_3157cc;
        case 0x3157d0u: goto label_3157d0;
        case 0x3157d4u: goto label_3157d4;
        case 0x3157d8u: goto label_3157d8;
        case 0x3157dcu: goto label_3157dc;
        case 0x3157e0u: goto label_3157e0;
        case 0x3157e4u: goto label_3157e4;
        case 0x3157e8u: goto label_3157e8;
        case 0x3157ecu: goto label_3157ec;
        case 0x3157f0u: goto label_3157f0;
        case 0x3157f4u: goto label_3157f4;
        case 0x3157f8u: goto label_3157f8;
        case 0x3157fcu: goto label_3157fc;
        case 0x315800u: goto label_315800;
        case 0x315804u: goto label_315804;
        case 0x315808u: goto label_315808;
        case 0x31580cu: goto label_31580c;
        case 0x315810u: goto label_315810;
        case 0x315814u: goto label_315814;
        case 0x315818u: goto label_315818;
        case 0x31581cu: goto label_31581c;
        case 0x315820u: goto label_315820;
        case 0x315824u: goto label_315824;
        case 0x315828u: goto label_315828;
        case 0x31582cu: goto label_31582c;
        case 0x315830u: goto label_315830;
        case 0x315834u: goto label_315834;
        case 0x315838u: goto label_315838;
        case 0x31583cu: goto label_31583c;
        case 0x315840u: goto label_315840;
        case 0x315844u: goto label_315844;
        case 0x315848u: goto label_315848;
        case 0x31584cu: goto label_31584c;
        case 0x315850u: goto label_315850;
        case 0x315854u: goto label_315854;
        case 0x315858u: goto label_315858;
        case 0x31585cu: goto label_31585c;
        case 0x315860u: goto label_315860;
        case 0x315864u: goto label_315864;
        case 0x315868u: goto label_315868;
        case 0x31586cu: goto label_31586c;
        case 0x315870u: goto label_315870;
        case 0x315874u: goto label_315874;
        case 0x315878u: goto label_315878;
        case 0x31587cu: goto label_31587c;
        case 0x315880u: goto label_315880;
        case 0x315884u: goto label_315884;
        case 0x315888u: goto label_315888;
        case 0x31588cu: goto label_31588c;
        case 0x315890u: goto label_315890;
        case 0x315894u: goto label_315894;
        case 0x315898u: goto label_315898;
        case 0x31589cu: goto label_31589c;
        case 0x3158a0u: goto label_3158a0;
        case 0x3158a4u: goto label_3158a4;
        case 0x3158a8u: goto label_3158a8;
        case 0x3158acu: goto label_3158ac;
        case 0x3158b0u: goto label_3158b0;
        case 0x3158b4u: goto label_3158b4;
        case 0x3158b8u: goto label_3158b8;
        case 0x3158bcu: goto label_3158bc;
        case 0x3158c0u: goto label_3158c0;
        case 0x3158c4u: goto label_3158c4;
        case 0x3158c8u: goto label_3158c8;
        case 0x3158ccu: goto label_3158cc;
        case 0x3158d0u: goto label_3158d0;
        case 0x3158d4u: goto label_3158d4;
        case 0x3158d8u: goto label_3158d8;
        case 0x3158dcu: goto label_3158dc;
        case 0x3158e0u: goto label_3158e0;
        case 0x3158e4u: goto label_3158e4;
        case 0x3158e8u: goto label_3158e8;
        case 0x3158ecu: goto label_3158ec;
        case 0x3158f0u: goto label_3158f0;
        case 0x3158f4u: goto label_3158f4;
        case 0x3158f8u: goto label_3158f8;
        case 0x3158fcu: goto label_3158fc;
        case 0x315900u: goto label_315900;
        case 0x315904u: goto label_315904;
        case 0x315908u: goto label_315908;
        case 0x31590cu: goto label_31590c;
        case 0x315910u: goto label_315910;
        case 0x315914u: goto label_315914;
        case 0x315918u: goto label_315918;
        case 0x31591cu: goto label_31591c;
        case 0x315920u: goto label_315920;
        case 0x315924u: goto label_315924;
        case 0x315928u: goto label_315928;
        case 0x31592cu: goto label_31592c;
        case 0x315930u: goto label_315930;
        case 0x315934u: goto label_315934;
        case 0x315938u: goto label_315938;
        case 0x31593cu: goto label_31593c;
        case 0x315940u: goto label_315940;
        case 0x315944u: goto label_315944;
        case 0x315948u: goto label_315948;
        case 0x31594cu: goto label_31594c;
        case 0x315950u: goto label_315950;
        case 0x315954u: goto label_315954;
        case 0x315958u: goto label_315958;
        case 0x31595cu: goto label_31595c;
        case 0x315960u: goto label_315960;
        case 0x315964u: goto label_315964;
        case 0x315968u: goto label_315968;
        case 0x31596cu: goto label_31596c;
        case 0x315970u: goto label_315970;
        case 0x315974u: goto label_315974;
        case 0x315978u: goto label_315978;
        case 0x31597cu: goto label_31597c;
        case 0x315980u: goto label_315980;
        case 0x315984u: goto label_315984;
        case 0x315988u: goto label_315988;
        case 0x31598cu: goto label_31598c;
        case 0x315990u: goto label_315990;
        case 0x315994u: goto label_315994;
        case 0x315998u: goto label_315998;
        case 0x31599cu: goto label_31599c;
        case 0x3159a0u: goto label_3159a0;
        case 0x3159a4u: goto label_3159a4;
        case 0x3159a8u: goto label_3159a8;
        case 0x3159acu: goto label_3159ac;
        case 0x3159b0u: goto label_3159b0;
        case 0x3159b4u: goto label_3159b4;
        case 0x3159b8u: goto label_3159b8;
        case 0x3159bcu: goto label_3159bc;
        case 0x3159c0u: goto label_3159c0;
        case 0x3159c4u: goto label_3159c4;
        case 0x3159c8u: goto label_3159c8;
        case 0x3159ccu: goto label_3159cc;
        case 0x3159d0u: goto label_3159d0;
        case 0x3159d4u: goto label_3159d4;
        case 0x3159d8u: goto label_3159d8;
        case 0x3159dcu: goto label_3159dc;
        case 0x3159e0u: goto label_3159e0;
        case 0x3159e4u: goto label_3159e4;
        case 0x3159e8u: goto label_3159e8;
        case 0x3159ecu: goto label_3159ec;
        case 0x3159f0u: goto label_3159f0;
        case 0x3159f4u: goto label_3159f4;
        case 0x3159f8u: goto label_3159f8;
        case 0x3159fcu: goto label_3159fc;
        case 0x315a00u: goto label_315a00;
        case 0x315a04u: goto label_315a04;
        case 0x315a08u: goto label_315a08;
        case 0x315a0cu: goto label_315a0c;
        case 0x315a10u: goto label_315a10;
        case 0x315a14u: goto label_315a14;
        case 0x315a18u: goto label_315a18;
        case 0x315a1cu: goto label_315a1c;
        case 0x315a20u: goto label_315a20;
        case 0x315a24u: goto label_315a24;
        case 0x315a28u: goto label_315a28;
        case 0x315a2cu: goto label_315a2c;
        case 0x315a30u: goto label_315a30;
        case 0x315a34u: goto label_315a34;
        case 0x315a38u: goto label_315a38;
        case 0x315a3cu: goto label_315a3c;
        case 0x315a40u: goto label_315a40;
        case 0x315a44u: goto label_315a44;
        case 0x315a48u: goto label_315a48;
        case 0x315a4cu: goto label_315a4c;
        case 0x315a50u: goto label_315a50;
        case 0x315a54u: goto label_315a54;
        case 0x315a58u: goto label_315a58;
        case 0x315a5cu: goto label_315a5c;
        case 0x315a60u: goto label_315a60;
        case 0x315a64u: goto label_315a64;
        case 0x315a68u: goto label_315a68;
        case 0x315a6cu: goto label_315a6c;
        case 0x315a70u: goto label_315a70;
        case 0x315a74u: goto label_315a74;
        case 0x315a78u: goto label_315a78;
        case 0x315a7cu: goto label_315a7c;
        case 0x315a80u: goto label_315a80;
        case 0x315a84u: goto label_315a84;
        case 0x315a88u: goto label_315a88;
        case 0x315a8cu: goto label_315a8c;
        case 0x315a90u: goto label_315a90;
        case 0x315a94u: goto label_315a94;
        case 0x315a98u: goto label_315a98;
        case 0x315a9cu: goto label_315a9c;
        case 0x315aa0u: goto label_315aa0;
        case 0x315aa4u: goto label_315aa4;
        case 0x315aa8u: goto label_315aa8;
        case 0x315aacu: goto label_315aac;
        case 0x315ab0u: goto label_315ab0;
        case 0x315ab4u: goto label_315ab4;
        case 0x315ab8u: goto label_315ab8;
        case 0x315abcu: goto label_315abc;
        case 0x315ac0u: goto label_315ac0;
        case 0x315ac4u: goto label_315ac4;
        case 0x315ac8u: goto label_315ac8;
        case 0x315accu: goto label_315acc;
        case 0x315ad0u: goto label_315ad0;
        case 0x315ad4u: goto label_315ad4;
        case 0x315ad8u: goto label_315ad8;
        case 0x315adcu: goto label_315adc;
        case 0x315ae0u: goto label_315ae0;
        case 0x315ae4u: goto label_315ae4;
        case 0x315ae8u: goto label_315ae8;
        case 0x315aecu: goto label_315aec;
        case 0x315af0u: goto label_315af0;
        case 0x315af4u: goto label_315af4;
        case 0x315af8u: goto label_315af8;
        case 0x315afcu: goto label_315afc;
        case 0x315b00u: goto label_315b00;
        case 0x315b04u: goto label_315b04;
        case 0x315b08u: goto label_315b08;
        case 0x315b0cu: goto label_315b0c;
        case 0x315b10u: goto label_315b10;
        case 0x315b14u: goto label_315b14;
        case 0x315b18u: goto label_315b18;
        case 0x315b1cu: goto label_315b1c;
        case 0x315b20u: goto label_315b20;
        case 0x315b24u: goto label_315b24;
        case 0x315b28u: goto label_315b28;
        case 0x315b2cu: goto label_315b2c;
        case 0x315b30u: goto label_315b30;
        case 0x315b34u: goto label_315b34;
        case 0x315b38u: goto label_315b38;
        case 0x315b3cu: goto label_315b3c;
        case 0x315b40u: goto label_315b40;
        case 0x315b44u: goto label_315b44;
        case 0x315b48u: goto label_315b48;
        case 0x315b4cu: goto label_315b4c;
        case 0x315b50u: goto label_315b50;
        case 0x315b54u: goto label_315b54;
        case 0x315b58u: goto label_315b58;
        case 0x315b5cu: goto label_315b5c;
        case 0x315b60u: goto label_315b60;
        case 0x315b64u: goto label_315b64;
        case 0x315b68u: goto label_315b68;
        case 0x315b6cu: goto label_315b6c;
        case 0x315b70u: goto label_315b70;
        case 0x315b74u: goto label_315b74;
        case 0x315b78u: goto label_315b78;
        case 0x315b7cu: goto label_315b7c;
        case 0x315b80u: goto label_315b80;
        case 0x315b84u: goto label_315b84;
        case 0x315b88u: goto label_315b88;
        case 0x315b8cu: goto label_315b8c;
        case 0x315b90u: goto label_315b90;
        case 0x315b94u: goto label_315b94;
        case 0x315b98u: goto label_315b98;
        case 0x315b9cu: goto label_315b9c;
        case 0x315ba0u: goto label_315ba0;
        case 0x315ba4u: goto label_315ba4;
        case 0x315ba8u: goto label_315ba8;
        case 0x315bacu: goto label_315bac;
        case 0x315bb0u: goto label_315bb0;
        case 0x315bb4u: goto label_315bb4;
        case 0x315bb8u: goto label_315bb8;
        case 0x315bbcu: goto label_315bbc;
        case 0x315bc0u: goto label_315bc0;
        case 0x315bc4u: goto label_315bc4;
        case 0x315bc8u: goto label_315bc8;
        case 0x315bccu: goto label_315bcc;
        case 0x315bd0u: goto label_315bd0;
        case 0x315bd4u: goto label_315bd4;
        case 0x315bd8u: goto label_315bd8;
        case 0x315bdcu: goto label_315bdc;
        case 0x315be0u: goto label_315be0;
        case 0x315be4u: goto label_315be4;
        case 0x315be8u: goto label_315be8;
        case 0x315becu: goto label_315bec;
        case 0x315bf0u: goto label_315bf0;
        case 0x315bf4u: goto label_315bf4;
        case 0x315bf8u: goto label_315bf8;
        case 0x315bfcu: goto label_315bfc;
        case 0x315c00u: goto label_315c00;
        case 0x315c04u: goto label_315c04;
        case 0x315c08u: goto label_315c08;
        case 0x315c0cu: goto label_315c0c;
        case 0x315c10u: goto label_315c10;
        case 0x315c14u: goto label_315c14;
        case 0x315c18u: goto label_315c18;
        case 0x315c1cu: goto label_315c1c;
        case 0x315c20u: goto label_315c20;
        case 0x315c24u: goto label_315c24;
        case 0x315c28u: goto label_315c28;
        case 0x315c2cu: goto label_315c2c;
        case 0x315c30u: goto label_315c30;
        case 0x315c34u: goto label_315c34;
        case 0x315c38u: goto label_315c38;
        case 0x315c3cu: goto label_315c3c;
        case 0x315c40u: goto label_315c40;
        case 0x315c44u: goto label_315c44;
        case 0x315c48u: goto label_315c48;
        case 0x315c4cu: goto label_315c4c;
        case 0x315c50u: goto label_315c50;
        case 0x315c54u: goto label_315c54;
        case 0x315c58u: goto label_315c58;
        case 0x315c5cu: goto label_315c5c;
        case 0x315c60u: goto label_315c60;
        case 0x315c64u: goto label_315c64;
        case 0x315c68u: goto label_315c68;
        case 0x315c6cu: goto label_315c6c;
        case 0x315c70u: goto label_315c70;
        case 0x315c74u: goto label_315c74;
        case 0x315c78u: goto label_315c78;
        case 0x315c7cu: goto label_315c7c;
        case 0x315c80u: goto label_315c80;
        case 0x315c84u: goto label_315c84;
        case 0x315c88u: goto label_315c88;
        case 0x315c8cu: goto label_315c8c;
        case 0x315c90u: goto label_315c90;
        case 0x315c94u: goto label_315c94;
        case 0x315c98u: goto label_315c98;
        case 0x315c9cu: goto label_315c9c;
        case 0x315ca0u: goto label_315ca0;
        case 0x315ca4u: goto label_315ca4;
        case 0x315ca8u: goto label_315ca8;
        case 0x315cacu: goto label_315cac;
        case 0x315cb0u: goto label_315cb0;
        case 0x315cb4u: goto label_315cb4;
        case 0x315cb8u: goto label_315cb8;
        case 0x315cbcu: goto label_315cbc;
        case 0x315cc0u: goto label_315cc0;
        case 0x315cc4u: goto label_315cc4;
        case 0x315cc8u: goto label_315cc8;
        case 0x315cccu: goto label_315ccc;
        case 0x315cd0u: goto label_315cd0;
        case 0x315cd4u: goto label_315cd4;
        case 0x315cd8u: goto label_315cd8;
        case 0x315cdcu: goto label_315cdc;
        case 0x315ce0u: goto label_315ce0;
        case 0x315ce4u: goto label_315ce4;
        case 0x315ce8u: goto label_315ce8;
        case 0x315cecu: goto label_315cec;
        case 0x315cf0u: goto label_315cf0;
        case 0x315cf4u: goto label_315cf4;
        case 0x315cf8u: goto label_315cf8;
        case 0x315cfcu: goto label_315cfc;
        case 0x315d00u: goto label_315d00;
        case 0x315d04u: goto label_315d04;
        case 0x315d08u: goto label_315d08;
        case 0x315d0cu: goto label_315d0c;
        case 0x315d10u: goto label_315d10;
        case 0x315d14u: goto label_315d14;
        case 0x315d18u: goto label_315d18;
        case 0x315d1cu: goto label_315d1c;
        case 0x315d20u: goto label_315d20;
        case 0x315d24u: goto label_315d24;
        case 0x315d28u: goto label_315d28;
        case 0x315d2cu: goto label_315d2c;
        case 0x315d30u: goto label_315d30;
        case 0x315d34u: goto label_315d34;
        case 0x315d38u: goto label_315d38;
        case 0x315d3cu: goto label_315d3c;
        case 0x315d40u: goto label_315d40;
        case 0x315d44u: goto label_315d44;
        case 0x315d48u: goto label_315d48;
        case 0x315d4cu: goto label_315d4c;
        case 0x315d50u: goto label_315d50;
        case 0x315d54u: goto label_315d54;
        case 0x315d58u: goto label_315d58;
        case 0x315d5cu: goto label_315d5c;
        case 0x315d60u: goto label_315d60;
        case 0x315d64u: goto label_315d64;
        case 0x315d68u: goto label_315d68;
        case 0x315d6cu: goto label_315d6c;
        case 0x315d70u: goto label_315d70;
        case 0x315d74u: goto label_315d74;
        case 0x315d78u: goto label_315d78;
        case 0x315d7cu: goto label_315d7c;
        case 0x315d80u: goto label_315d80;
        case 0x315d84u: goto label_315d84;
        case 0x315d88u: goto label_315d88;
        case 0x315d8cu: goto label_315d8c;
        case 0x315d90u: goto label_315d90;
        case 0x315d94u: goto label_315d94;
        case 0x315d98u: goto label_315d98;
        case 0x315d9cu: goto label_315d9c;
        case 0x315da0u: goto label_315da0;
        case 0x315da4u: goto label_315da4;
        case 0x315da8u: goto label_315da8;
        case 0x315dacu: goto label_315dac;
        case 0x315db0u: goto label_315db0;
        case 0x315db4u: goto label_315db4;
        case 0x315db8u: goto label_315db8;
        case 0x315dbcu: goto label_315dbc;
        case 0x315dc0u: goto label_315dc0;
        case 0x315dc4u: goto label_315dc4;
        case 0x315dc8u: goto label_315dc8;
        case 0x315dccu: goto label_315dcc;
        case 0x315dd0u: goto label_315dd0;
        case 0x315dd4u: goto label_315dd4;
        case 0x315dd8u: goto label_315dd8;
        case 0x315ddcu: goto label_315ddc;
        case 0x315de0u: goto label_315de0;
        case 0x315de4u: goto label_315de4;
        case 0x315de8u: goto label_315de8;
        case 0x315decu: goto label_315dec;
        case 0x315df0u: goto label_315df0;
        case 0x315df4u: goto label_315df4;
        case 0x315df8u: goto label_315df8;
        case 0x315dfcu: goto label_315dfc;
        case 0x315e00u: goto label_315e00;
        case 0x315e04u: goto label_315e04;
        case 0x315e08u: goto label_315e08;
        case 0x315e0cu: goto label_315e0c;
        case 0x315e10u: goto label_315e10;
        case 0x315e14u: goto label_315e14;
        case 0x315e18u: goto label_315e18;
        case 0x315e1cu: goto label_315e1c;
        case 0x315e20u: goto label_315e20;
        case 0x315e24u: goto label_315e24;
        case 0x315e28u: goto label_315e28;
        case 0x315e2cu: goto label_315e2c;
        case 0x315e30u: goto label_315e30;
        case 0x315e34u: goto label_315e34;
        case 0x315e38u: goto label_315e38;
        case 0x315e3cu: goto label_315e3c;
        case 0x315e40u: goto label_315e40;
        case 0x315e44u: goto label_315e44;
        case 0x315e48u: goto label_315e48;
        case 0x315e4cu: goto label_315e4c;
        case 0x315e50u: goto label_315e50;
        case 0x315e54u: goto label_315e54;
        case 0x315e58u: goto label_315e58;
        case 0x315e5cu: goto label_315e5c;
        case 0x315e60u: goto label_315e60;
        case 0x315e64u: goto label_315e64;
        case 0x315e68u: goto label_315e68;
        case 0x315e6cu: goto label_315e6c;
        case 0x315e70u: goto label_315e70;
        case 0x315e74u: goto label_315e74;
        case 0x315e78u: goto label_315e78;
        case 0x315e7cu: goto label_315e7c;
        case 0x315e80u: goto label_315e80;
        case 0x315e84u: goto label_315e84;
        case 0x315e88u: goto label_315e88;
        case 0x315e8cu: goto label_315e8c;
        case 0x315e90u: goto label_315e90;
        case 0x315e94u: goto label_315e94;
        case 0x315e98u: goto label_315e98;
        case 0x315e9cu: goto label_315e9c;
        case 0x315ea0u: goto label_315ea0;
        case 0x315ea4u: goto label_315ea4;
        case 0x315ea8u: goto label_315ea8;
        case 0x315eacu: goto label_315eac;
        case 0x315eb0u: goto label_315eb0;
        case 0x315eb4u: goto label_315eb4;
        case 0x315eb8u: goto label_315eb8;
        case 0x315ebcu: goto label_315ebc;
        case 0x315ec0u: goto label_315ec0;
        case 0x315ec4u: goto label_315ec4;
        case 0x315ec8u: goto label_315ec8;
        case 0x315eccu: goto label_315ecc;
        case 0x315ed0u: goto label_315ed0;
        case 0x315ed4u: goto label_315ed4;
        case 0x315ed8u: goto label_315ed8;
        case 0x315edcu: goto label_315edc;
        case 0x315ee0u: goto label_315ee0;
        case 0x315ee4u: goto label_315ee4;
        case 0x315ee8u: goto label_315ee8;
        case 0x315eecu: goto label_315eec;
        case 0x315ef0u: goto label_315ef0;
        case 0x315ef4u: goto label_315ef4;
        case 0x315ef8u: goto label_315ef8;
        case 0x315efcu: goto label_315efc;
        case 0x315f00u: goto label_315f00;
        case 0x315f04u: goto label_315f04;
        case 0x315f08u: goto label_315f08;
        case 0x315f0cu: goto label_315f0c;
        case 0x315f10u: goto label_315f10;
        case 0x315f14u: goto label_315f14;
        case 0x315f18u: goto label_315f18;
        case 0x315f1cu: goto label_315f1c;
        case 0x315f20u: goto label_315f20;
        case 0x315f24u: goto label_315f24;
        case 0x315f28u: goto label_315f28;
        case 0x315f2cu: goto label_315f2c;
        case 0x315f30u: goto label_315f30;
        case 0x315f34u: goto label_315f34;
        case 0x315f38u: goto label_315f38;
        case 0x315f3cu: goto label_315f3c;
        case 0x315f40u: goto label_315f40;
        case 0x315f44u: goto label_315f44;
        case 0x315f48u: goto label_315f48;
        case 0x315f4cu: goto label_315f4c;
        case 0x315f50u: goto label_315f50;
        case 0x315f54u: goto label_315f54;
        case 0x315f58u: goto label_315f58;
        case 0x315f5cu: goto label_315f5c;
        case 0x315f60u: goto label_315f60;
        case 0x315f64u: goto label_315f64;
        case 0x315f68u: goto label_315f68;
        case 0x315f6cu: goto label_315f6c;
        case 0x315f70u: goto label_315f70;
        case 0x315f74u: goto label_315f74;
        case 0x315f78u: goto label_315f78;
        case 0x315f7cu: goto label_315f7c;
        case 0x315f80u: goto label_315f80;
        case 0x315f84u: goto label_315f84;
        case 0x315f88u: goto label_315f88;
        case 0x315f8cu: goto label_315f8c;
        case 0x315f90u: goto label_315f90;
        case 0x315f94u: goto label_315f94;
        case 0x315f98u: goto label_315f98;
        case 0x315f9cu: goto label_315f9c;
        case 0x315fa0u: goto label_315fa0;
        case 0x315fa4u: goto label_315fa4;
        case 0x315fa8u: goto label_315fa8;
        case 0x315facu: goto label_315fac;
        case 0x315fb0u: goto label_315fb0;
        case 0x315fb4u: goto label_315fb4;
        case 0x315fb8u: goto label_315fb8;
        case 0x315fbcu: goto label_315fbc;
        case 0x315fc0u: goto label_315fc0;
        case 0x315fc4u: goto label_315fc4;
        case 0x315fc8u: goto label_315fc8;
        case 0x315fccu: goto label_315fcc;
        case 0x315fd0u: goto label_315fd0;
        case 0x315fd4u: goto label_315fd4;
        case 0x315fd8u: goto label_315fd8;
        case 0x315fdcu: goto label_315fdc;
        case 0x315fe0u: goto label_315fe0;
        case 0x315fe4u: goto label_315fe4;
        case 0x315fe8u: goto label_315fe8;
        case 0x315fecu: goto label_315fec;
        case 0x315ff0u: goto label_315ff0;
        case 0x315ff4u: goto label_315ff4;
        case 0x315ff8u: goto label_315ff8;
        case 0x315ffcu: goto label_315ffc;
        case 0x316000u: goto label_316000;
        case 0x316004u: goto label_316004;
        case 0x316008u: goto label_316008;
        case 0x31600cu: goto label_31600c;
        case 0x316010u: goto label_316010;
        case 0x316014u: goto label_316014;
        case 0x316018u: goto label_316018;
        case 0x31601cu: goto label_31601c;
        case 0x316020u: goto label_316020;
        case 0x316024u: goto label_316024;
        case 0x316028u: goto label_316028;
        case 0x31602cu: goto label_31602c;
        case 0x316030u: goto label_316030;
        case 0x316034u: goto label_316034;
        case 0x316038u: goto label_316038;
        case 0x31603cu: goto label_31603c;
        case 0x316040u: goto label_316040;
        case 0x316044u: goto label_316044;
        case 0x316048u: goto label_316048;
        case 0x31604cu: goto label_31604c;
        case 0x316050u: goto label_316050;
        case 0x316054u: goto label_316054;
        case 0x316058u: goto label_316058;
        case 0x31605cu: goto label_31605c;
        case 0x316060u: goto label_316060;
        case 0x316064u: goto label_316064;
        case 0x316068u: goto label_316068;
        case 0x31606cu: goto label_31606c;
        case 0x316070u: goto label_316070;
        case 0x316074u: goto label_316074;
        case 0x316078u: goto label_316078;
        case 0x31607cu: goto label_31607c;
        case 0x316080u: goto label_316080;
        case 0x316084u: goto label_316084;
        case 0x316088u: goto label_316088;
        case 0x31608cu: goto label_31608c;
        case 0x316090u: goto label_316090;
        case 0x316094u: goto label_316094;
        case 0x316098u: goto label_316098;
        case 0x31609cu: goto label_31609c;
        case 0x3160a0u: goto label_3160a0;
        case 0x3160a4u: goto label_3160a4;
        case 0x3160a8u: goto label_3160a8;
        case 0x3160acu: goto label_3160ac;
        case 0x3160b0u: goto label_3160b0;
        case 0x3160b4u: goto label_3160b4;
        case 0x3160b8u: goto label_3160b8;
        case 0x3160bcu: goto label_3160bc;
        case 0x3160c0u: goto label_3160c0;
        case 0x3160c4u: goto label_3160c4;
        case 0x3160c8u: goto label_3160c8;
        case 0x3160ccu: goto label_3160cc;
        case 0x3160d0u: goto label_3160d0;
        case 0x3160d4u: goto label_3160d4;
        case 0x3160d8u: goto label_3160d8;
        case 0x3160dcu: goto label_3160dc;
        case 0x3160e0u: goto label_3160e0;
        case 0x3160e4u: goto label_3160e4;
        case 0x3160e8u: goto label_3160e8;
        case 0x3160ecu: goto label_3160ec;
        case 0x3160f0u: goto label_3160f0;
        case 0x3160f4u: goto label_3160f4;
        case 0x3160f8u: goto label_3160f8;
        case 0x3160fcu: goto label_3160fc;
        case 0x316100u: goto label_316100;
        case 0x316104u: goto label_316104;
        case 0x316108u: goto label_316108;
        case 0x31610cu: goto label_31610c;
        case 0x316110u: goto label_316110;
        case 0x316114u: goto label_316114;
        case 0x316118u: goto label_316118;
        case 0x31611cu: goto label_31611c;
        case 0x316120u: goto label_316120;
        case 0x316124u: goto label_316124;
        case 0x316128u: goto label_316128;
        case 0x31612cu: goto label_31612c;
        case 0x316130u: goto label_316130;
        case 0x316134u: goto label_316134;
        case 0x316138u: goto label_316138;
        case 0x31613cu: goto label_31613c;
        case 0x316140u: goto label_316140;
        case 0x316144u: goto label_316144;
        case 0x316148u: goto label_316148;
        case 0x31614cu: goto label_31614c;
        default: break;
    }

    ctx->pc = 0x314b10u;

label_314b10:
    // 0x314b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x314b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_314b14:
    // 0x314b14: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x314b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_314b18:
    // 0x314b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x314b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_314b1c:
    // 0x314b1c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x314b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_314b20:
    // 0x314b20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_314b24:
    // 0x314b24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_314b28:
    // 0x314b28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x314b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_314b2c:
    // 0x314b2c: 0xc10f6ec  jal         func_43DBB0
label_314b30:
    if (ctx->pc == 0x314B30u) {
        ctx->pc = 0x314B30u;
            // 0x314b30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314B34u;
        goto label_314b34;
    }
    ctx->pc = 0x314B2Cu;
    SET_GPR_U32(ctx, 31, 0x314B34u);
    ctx->pc = 0x314B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314B2Cu;
            // 0x314b30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B34u; }
        if (ctx->pc != 0x314B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B34u; }
        if (ctx->pc != 0x314B34u) { return; }
    }
    ctx->pc = 0x314B34u;
label_314b34:
    // 0x314b34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x314b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_314b38:
    // 0x314b38: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x314b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_314b3c:
    // 0x314b3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x314b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_314b40:
    // 0x314b40: 0x24424390  addiu       $v0, $v0, 0x4390
    ctx->pc = 0x314b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17296));
label_314b44:
    // 0x314b44: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x314b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_314b48:
    // 0x314b48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x314b48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_314b4c:
    // 0x314b4c: 0xc04cbd8  jal         func_132F60
label_314b50:
    if (ctx->pc == 0x314B50u) {
        ctx->pc = 0x314B50u;
            // 0x314b50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x314B54u;
        goto label_314b54;
    }
    ctx->pc = 0x314B4Cu;
    SET_GPR_U32(ctx, 31, 0x314B54u);
    ctx->pc = 0x314B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314B4Cu;
            // 0x314b50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B54u; }
        if (ctx->pc != 0x314B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B54u; }
        if (ctx->pc != 0x314B54u) { return; }
    }
    ctx->pc = 0x314B54u;
label_314b54:
    // 0x314b54: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x314b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_314b58:
    // 0x314b58: 0xc04cc04  jal         func_133010
label_314b5c:
    if (ctx->pc == 0x314B5Cu) {
        ctx->pc = 0x314B5Cu;
            // 0x314b5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x314B60u;
        goto label_314b60;
    }
    ctx->pc = 0x314B58u;
    SET_GPR_U32(ctx, 31, 0x314B60u);
    ctx->pc = 0x314B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314B58u;
            // 0x314b5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B60u; }
        if (ctx->pc != 0x314B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B60u; }
        if (ctx->pc != 0x314B60u) { return; }
    }
    ctx->pc = 0x314B60u;
label_314b60:
    // 0x314b60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x314b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_314b64:
    // 0x314b64: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x314b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_314b68:
    // 0x314b68: 0xc040180  jal         func_100600
label_314b6c:
    if (ctx->pc == 0x314B6Cu) {
        ctx->pc = 0x314B6Cu;
            // 0x314b6c: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x314B70u;
        goto label_314b70;
    }
    ctx->pc = 0x314B68u;
    SET_GPR_U32(ctx, 31, 0x314B70u);
    ctx->pc = 0x314B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314B68u;
            // 0x314b6c: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B70u; }
        if (ctx->pc != 0x314B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B70u; }
        if (ctx->pc != 0x314B70u) { return; }
    }
    ctx->pc = 0x314B70u;
label_314b70:
    // 0x314b70: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_314b74:
    if (ctx->pc == 0x314B74u) {
        ctx->pc = 0x314B74u;
            // 0x314b74: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x314B78u;
        goto label_314b78;
    }
    ctx->pc = 0x314B70u;
    {
        const bool branch_taken_0x314b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314b70) {
            ctx->pc = 0x314B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314B70u;
            // 0x314b74: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314B94u;
            goto label_314b94;
        }
    }
    ctx->pc = 0x314B78u;
label_314b78:
    // 0x314b78: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x314b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_314b7c:
    // 0x314b7c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x314b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_314b80:
    // 0x314b80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x314b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314b84:
    // 0x314b84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x314b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_314b88:
    // 0x314b88: 0xc0c3f60  jal         func_30FD80
label_314b8c:
    if (ctx->pc == 0x314B8Cu) {
        ctx->pc = 0x314B8Cu;
            // 0x314b8c: 0x24c6f6d0  addiu       $a2, $a2, -0x930 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964944));
        ctx->pc = 0x314B90u;
        goto label_314b90;
    }
    ctx->pc = 0x314B88u;
    SET_GPR_U32(ctx, 31, 0x314B90u);
    ctx->pc = 0x314B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314B88u;
            // 0x314b8c: 0x24c6f6d0  addiu       $a2, $a2, -0x930 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B90u; }
        if (ctx->pc != 0x314B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B90u; }
        if (ctx->pc != 0x314B90u) { return; }
    }
    ctx->pc = 0x314B90u;
label_314b90:
    // 0x314b90: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x314b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_314b94:
    // 0x314b94: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x314b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_314b98:
    // 0x314b98: 0x94460064  lhu         $a2, 0x64($v0)
    ctx->pc = 0x314b98u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
label_314b9c:
    // 0x314b9c: 0x26040ec0  addiu       $a0, $s0, 0xEC0
    ctx->pc = 0x314b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_314ba0:
    // 0x314ba0: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x314ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_314ba4:
    // 0x314ba4: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x314ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
label_314ba8:
    // 0x314ba8: 0xa4460064  sh          $a2, 0x64($v0)
    ctx->pc = 0x314ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 6));
label_314bac:
    // 0x314bac: 0xac4500c0  sw          $a1, 0xC0($v0)
    ctx->pc = 0x314bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 5));
label_314bb0:
    // 0x314bb0: 0xac4400c4  sw          $a0, 0xC4($v0)
    ctx->pc = 0x314bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 4));
label_314bb4:
    // 0x314bb4: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x314bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
label_314bb8:
    // 0x314bb8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x314bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_314bbc:
    // 0x314bbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x314bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314bc0:
    // 0x314bc0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x314bc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_314bc4:
    // 0x314bc4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x314bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_314bc8:
    // 0x314bc8: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x314bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_314bcc:
    // 0x314bcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x314bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_314bd0:
    // 0x314bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314bd4:
    // 0x314bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_314bd8:
    // 0x314bd8: 0x3e00008  jr          $ra
label_314bdc:
    if (ctx->pc == 0x314BDCu) {
        ctx->pc = 0x314BDCu;
            // 0x314bdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x314BE0u;
        goto label_314be0;
    }
    ctx->pc = 0x314BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314BD8u;
            // 0x314bdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314BE0u;
label_314be0:
    // 0x314be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x314be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_314be4:
    // 0x314be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x314be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_314be8:
    // 0x314be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_314bec:
    // 0x314bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_314bf0:
    // 0x314bf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x314bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_314bf4:
    // 0x314bf4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_314bf8:
    if (ctx->pc == 0x314BF8u) {
        ctx->pc = 0x314BF8u;
            // 0x314bf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314BFCu;
        goto label_314bfc;
    }
    ctx->pc = 0x314BF4u;
    {
        const bool branch_taken_0x314bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x314BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314BF4u;
            // 0x314bf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314bf4) {
            ctx->pc = 0x314C58u;
            goto label_314c58;
        }
    }
    ctx->pc = 0x314BFCu;
label_314bfc:
    // 0x314bfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x314bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_314c00:
    // 0x314c00: 0x24424390  addiu       $v0, $v0, 0x4390
    ctx->pc = 0x314c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17296));
label_314c04:
    // 0x314c04: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x314c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_314c08:
    // 0x314c08: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x314c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_314c0c:
    // 0x314c0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x314c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314c10:
    // 0x314c10: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x314c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_314c14:
    // 0x314c14: 0x320f809  jalr        $t9
label_314c18:
    if (ctx->pc == 0x314C18u) {
        ctx->pc = 0x314C18u;
            // 0x314c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314C1Cu;
        goto label_314c1c;
    }
    ctx->pc = 0x314C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314C1Cu);
        ctx->pc = 0x314C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314C14u;
            // 0x314c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314C1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314C1Cu; }
            if (ctx->pc != 0x314C1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x314C1Cu;
label_314c1c:
    // 0x314c1c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_314c20:
    if (ctx->pc == 0x314C20u) {
        ctx->pc = 0x314C20u;
            // 0x314c20: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x314C24u;
        goto label_314c24;
    }
    ctx->pc = 0x314C1Cu;
    {
        const bool branch_taken_0x314c1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x314c1c) {
            ctx->pc = 0x314C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314C1Cu;
            // 0x314c20: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314C44u;
            goto label_314c44;
        }
    }
    ctx->pc = 0x314C24u;
label_314c24:
    // 0x314c24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x314c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_314c28:
    // 0x314c28: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x314c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_314c2c:
    // 0x314c2c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_314c30:
    if (ctx->pc == 0x314C30u) {
        ctx->pc = 0x314C30u;
            // 0x314c30: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x314C34u;
        goto label_314c34;
    }
    ctx->pc = 0x314C2Cu;
    {
        const bool branch_taken_0x314c2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314C2Cu;
            // 0x314c30: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c2c) {
            ctx->pc = 0x314C40u;
            goto label_314c40;
        }
    }
    ctx->pc = 0x314C34u;
label_314c34:
    // 0x314c34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x314c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_314c38:
    // 0x314c38: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x314c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_314c3c:
    // 0x314c3c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x314c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_314c40:
    // 0x314c40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x314c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_314c44:
    // 0x314c44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x314c44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_314c48:
    // 0x314c48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_314c4c:
    if (ctx->pc == 0x314C4Cu) {
        ctx->pc = 0x314C4Cu;
            // 0x314c4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314C50u;
        goto label_314c50;
    }
    ctx->pc = 0x314C48u;
    {
        const bool branch_taken_0x314c48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x314c48) {
            ctx->pc = 0x314C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314C48u;
            // 0x314c4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314C5Cu;
            goto label_314c5c;
        }
    }
    ctx->pc = 0x314C50u;
label_314c50:
    // 0x314c50: 0xc0400a8  jal         func_1002A0
label_314c54:
    if (ctx->pc == 0x314C54u) {
        ctx->pc = 0x314C54u;
            // 0x314c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314C58u;
        goto label_314c58;
    }
    ctx->pc = 0x314C50u;
    SET_GPR_U32(ctx, 31, 0x314C58u);
    ctx->pc = 0x314C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314C50u;
            // 0x314c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C58u; }
        if (ctx->pc != 0x314C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C58u; }
        if (ctx->pc != 0x314C58u) { return; }
    }
    ctx->pc = 0x314C58u;
label_314c58:
    // 0x314c58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x314c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314c5c:
    // 0x314c5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x314c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_314c60:
    // 0x314c60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314c64:
    // 0x314c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_314c68:
    // 0x314c68: 0x3e00008  jr          $ra
label_314c6c:
    if (ctx->pc == 0x314C6Cu) {
        ctx->pc = 0x314C6Cu;
            // 0x314c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x314C70u;
        goto label_314c70;
    }
    ctx->pc = 0x314C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314C68u;
            // 0x314c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314C70u;
label_314c70:
    // 0x314c70: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x314c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_314c74:
    // 0x314c74: 0x3e00008  jr          $ra
label_314c78:
    if (ctx->pc == 0x314C78u) {
        ctx->pc = 0x314C78u;
            // 0x314c78: 0xc440bd40  lwc1        $f0, -0x42C0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x314C7Cu;
        goto label_314c7c;
    }
    ctx->pc = 0x314C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314C74u;
            // 0x314c78: 0xc440bd40  lwc1        $f0, -0x42C0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314C7Cu;
label_314c7c:
    // 0x314c7c: 0x0  nop
    ctx->pc = 0x314c7cu;
    // NOP
label_314c80:
    // 0x314c80: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x314c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_314c84:
    // 0x314c84: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x314c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_314c88:
    // 0x314c88: 0xc440bd40  lwc1        $f0, -0x42C0($v0)
    ctx->pc = 0x314c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_314c8c:
    // 0x314c8c: 0x3e00008  jr          $ra
label_314c90:
    if (ctx->pc == 0x314C90u) {
        ctx->pc = 0x314C90u;
            // 0x314c90: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x314C94u;
        goto label_314c94;
    }
    ctx->pc = 0x314C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314C8Cu;
            // 0x314c90: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314C94u;
label_314c94:
    // 0x314c94: 0x0  nop
    ctx->pc = 0x314c94u;
    // NOP
label_314c98:
    // 0x314c98: 0x0  nop
    ctx->pc = 0x314c98u;
    // NOP
label_314c9c:
    // 0x314c9c: 0x0  nop
    ctx->pc = 0x314c9cu;
    // NOP
label_314ca0:
    // 0x314ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x314ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_314ca4:
    // 0x314ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_314ca8:
    // 0x314ca8: 0x8c84006c  lw          $a0, 0x6C($a0)
    ctx->pc = 0x314ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_314cac:
    // 0x314cac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_314cb0:
    if (ctx->pc == 0x314CB0u) {
        ctx->pc = 0x314CB0u;
            // 0x314cb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x314CB4u;
        goto label_314cb4;
    }
    ctx->pc = 0x314CACu;
    {
        const bool branch_taken_0x314cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x314cac) {
            ctx->pc = 0x314CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314CACu;
            // 0x314cb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314CC0u;
            goto label_314cc0;
        }
    }
    ctx->pc = 0x314CB4u;
label_314cb4:
    // 0x314cb4: 0xc10c9b4  jal         func_4326D0
label_314cb8:
    if (ctx->pc == 0x314CB8u) {
        ctx->pc = 0x314CBCu;
        goto label_314cbc;
    }
    ctx->pc = 0x314CB4u;
    SET_GPR_U32(ctx, 31, 0x314CBCu);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314CBCu; }
        if (ctx->pc != 0x314CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314CBCu; }
        if (ctx->pc != 0x314CBCu) { return; }
    }
    ctx->pc = 0x314CBCu;
label_314cbc:
    // 0x314cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_314cc0:
    // 0x314cc0: 0x3e00008  jr          $ra
label_314cc4:
    if (ctx->pc == 0x314CC4u) {
        ctx->pc = 0x314CC4u;
            // 0x314cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x314CC8u;
        goto label_314cc8;
    }
    ctx->pc = 0x314CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314CC0u;
            // 0x314cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314CC8u;
label_314cc8:
    // 0x314cc8: 0x0  nop
    ctx->pc = 0x314cc8u;
    // NOP
label_314ccc:
    // 0x314ccc: 0x0  nop
    ctx->pc = 0x314cccu;
    // NOP
label_314cd0:
    // 0x314cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x314cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_314cd4:
    // 0x314cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x314cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_314cd8:
    // 0x314cd8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x314cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_314cdc:
    // 0x314cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_314ce0:
    // 0x314ce0: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x314ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_314ce4:
    // 0x314ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x314ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_314ce8:
    // 0x314ce8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x314ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_314cec:
    // 0x314cec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x314cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_314cf0:
    // 0x314cf0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x314cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_314cf4:
    // 0x314cf4: 0x2484f5d8  addiu       $a0, $a0, -0xA28
    ctx->pc = 0x314cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964696));
label_314cf8:
    // 0x314cf8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314cfc:
    // 0x314cfc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x314cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_314d00:
    // 0x314d00: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x314d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_314d04:
    // 0x314d04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314d08:
    // 0x314d08: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x314d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_314d0c:
    // 0x314d0c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x314d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_314d10:
    // 0x314d10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314d14:
    // 0x314d14: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x314d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_314d18:
    // 0x314d18: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x314d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_314d1c:
    // 0x314d1c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x314d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_314d20:
    // 0x314d20: 0xc075128  jal         func_1D44A0
label_314d24:
    if (ctx->pc == 0x314D24u) {
        ctx->pc = 0x314D24u;
            // 0x314d24: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x314D28u;
        goto label_314d28;
    }
    ctx->pc = 0x314D20u;
    SET_GPR_U32(ctx, 31, 0x314D28u);
    ctx->pc = 0x314D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314D20u;
            // 0x314d24: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314D28u; }
        if (ctx->pc != 0x314D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314D28u; }
        if (ctx->pc != 0x314D28u) { return; }
    }
    ctx->pc = 0x314D28u;
label_314d28:
    // 0x314d28: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x314d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_314d2c:
    // 0x314d2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x314d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_314d30:
    // 0x314d30: 0x8c65f5d8  lw          $a1, -0xA28($v1)
    ctx->pc = 0x314d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964696)));
label_314d34:
    // 0x314d34: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x314d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_314d38:
    // 0x314d38: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x314d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_314d3c:
    // 0x314d3c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x314d3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_314d40:
    // 0x314d40: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_314d44:
    if (ctx->pc == 0x314D44u) {
        ctx->pc = 0x314D48u;
        goto label_314d48;
    }
    ctx->pc = 0x314D40u;
    {
        const bool branch_taken_0x314d40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314d40) {
            ctx->pc = 0x314D50u;
            goto label_314d50;
        }
    }
    ctx->pc = 0x314D48u;
label_314d48:
    // 0x314d48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x314d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_314d4c:
    // 0x314d4c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x314d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_314d50:
    // 0x314d50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x314d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_314d54:
    // 0x314d54: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x314d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_314d58:
    // 0x314d58: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x314d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_314d5c:
    // 0x314d5c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x314d5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_314d60:
    // 0x314d60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_314d64:
    if (ctx->pc == 0x314D64u) {
        ctx->pc = 0x314D64u;
            // 0x314d64: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->pc = 0x314D68u;
        goto label_314d68;
    }
    ctx->pc = 0x314D60u;
    {
        const bool branch_taken_0x314d60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314D60u;
            // 0x314d64: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d60) {
            ctx->pc = 0x314D70u;
            goto label_314d70;
        }
    }
    ctx->pc = 0x314D68u;
label_314d68:
    // 0x314d68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x314d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_314d6c:
    // 0x314d6c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x314d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_314d70:
    // 0x314d70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x314d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_314d74:
    // 0x314d74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x314d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314d78:
    // 0x314d78: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x314d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_314d7c:
    // 0x314d7c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x314d7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_314d80:
    // 0x314d80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_314d84:
    if (ctx->pc == 0x314D84u) {
        ctx->pc = 0x314D88u;
        goto label_314d88;
    }
    ctx->pc = 0x314D80u;
    {
        const bool branch_taken_0x314d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314d80) {
            ctx->pc = 0x314D90u;
            goto label_314d90;
        }
    }
    ctx->pc = 0x314D88u;
label_314d88:
    // 0x314d88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x314d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_314d8c:
    // 0x314d8c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x314d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_314d90:
    // 0x314d90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x314d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_314d94:
    // 0x314d94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x314d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314d98:
    // 0x314d98: 0x8c42e3a0  lw          $v0, -0x1C60($v0)
    ctx->pc = 0x314d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960032)));
label_314d9c:
    // 0x314d9c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x314d9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_314da0:
    // 0x314da0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_314da4:
    if (ctx->pc == 0x314DA4u) {
        ctx->pc = 0x314DA8u;
        goto label_314da8;
    }
    ctx->pc = 0x314DA0u;
    {
        const bool branch_taken_0x314da0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314da0) {
            ctx->pc = 0x314DB0u;
            goto label_314db0;
        }
    }
    ctx->pc = 0x314DA8u;
label_314da8:
    // 0x314da8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x314da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_314dac:
    // 0x314dac: 0xac43e3a0  sw          $v1, -0x1C60($v0)
    ctx->pc = 0x314dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960032), GPR_U32(ctx, 3));
label_314db0:
    // 0x314db0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x314db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_314db4:
    // 0x314db4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x314db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_314db8:
    // 0x314db8: 0x8c63f5e0  lw          $v1, -0xA20($v1)
    ctx->pc = 0x314db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964704)));
label_314dbc:
    // 0x314dbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x314dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_314dc0:
    // 0x314dc0: 0x2484f5fc  addiu       $a0, $a0, -0xA04
    ctx->pc = 0x314dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964732));
label_314dc4:
    // 0x314dc4: 0xac43f5f8  sw          $v1, -0xA08($v0)
    ctx->pc = 0x314dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964728), GPR_U32(ctx, 3));
label_314dc8:
    // 0x314dc8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x314dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_314dcc:
    // 0x314dcc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x314dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_314dd0:
    // 0x314dd0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x314dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_314dd4:
    // 0x314dd4: 0xc074ea0  jal         func_1D3A80
label_314dd8:
    if (ctx->pc == 0x314DD8u) {
        ctx->pc = 0x314DD8u;
            // 0x314dd8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x314DDCu;
        goto label_314ddc;
    }
    ctx->pc = 0x314DD4u;
    SET_GPR_U32(ctx, 31, 0x314DDCu);
    ctx->pc = 0x314DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314DD4u;
            // 0x314dd8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314DDCu; }
        if (ctx->pc != 0x314DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314DDCu; }
        if (ctx->pc != 0x314DDCu) { return; }
    }
    ctx->pc = 0x314DDCu;
label_314ddc:
    // 0x314ddc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x314ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_314de0:
    // 0x314de0: 0x8c63f5b8  lw          $v1, -0xA48($v1)
    ctx->pc = 0x314de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964664)));
label_314de4:
    // 0x314de4: 0x54600038  bnel        $v1, $zero, . + 4 + (0x38 << 2)
label_314de8:
    if (ctx->pc == 0x314DE8u) {
        ctx->pc = 0x314DE8u;
            // 0x314de8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x314DECu;
        goto label_314dec;
    }
    ctx->pc = 0x314DE4u;
    {
        const bool branch_taken_0x314de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314de4) {
            ctx->pc = 0x314DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314DE4u;
            // 0x314de8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314EC8u;
            goto label_314ec8;
        }
    }
    ctx->pc = 0x314DECu;
label_314dec:
    // 0x314dec: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x314decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_314df0:
    // 0x314df0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x314df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_314df4:
    // 0x314df4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x314df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_314df8:
    // 0x314df8: 0x2484f5b8  addiu       $a0, $a0, -0xA48
    ctx->pc = 0x314df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964664));
label_314dfc:
    // 0x314dfc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x314dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_314e00:
    // 0x314e00: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x314e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_314e04:
    // 0x314e04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314e08:
    // 0x314e08: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x314e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_314e0c:
    // 0x314e0c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x314e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_314e10:
    // 0x314e10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314e14:
    // 0x314e14: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x314e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_314e18:
    // 0x314e18: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x314e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_314e1c:
    // 0x314e1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314e20:
    // 0x314e20: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x314e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_314e24:
    // 0x314e24: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x314e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_314e28:
    // 0x314e28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314e2c:
    // 0x314e2c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x314e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_314e30:
    // 0x314e30: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x314e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_314e34:
    // 0x314e34: 0xc075128  jal         func_1D44A0
label_314e38:
    if (ctx->pc == 0x314E38u) {
        ctx->pc = 0x314E38u;
            // 0x314e38: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x314E3Cu;
        goto label_314e3c;
    }
    ctx->pc = 0x314E34u;
    SET_GPR_U32(ctx, 31, 0x314E3Cu);
    ctx->pc = 0x314E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314E34u;
            // 0x314e38: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E3Cu; }
        if (ctx->pc != 0x314E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E3Cu; }
        if (ctx->pc != 0x314E3Cu) { return; }
    }
    ctx->pc = 0x314E3Cu;
label_314e3c:
    // 0x314e3c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x314e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_314e40:
    // 0x314e40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_314e44:
    // 0x314e44: 0x8c86f5b8  lw          $a2, -0xA48($a0)
    ctx->pc = 0x314e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964664)));
label_314e48:
    // 0x314e48: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x314e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_314e4c:
    // 0x314e4c: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x314e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_314e50:
    // 0x314e50: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x314e50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_314e54:
    // 0x314e54: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_314e58:
    if (ctx->pc == 0x314E58u) {
        ctx->pc = 0x314E5Cu;
        goto label_314e5c;
    }
    ctx->pc = 0x314E54u;
    {
        const bool branch_taken_0x314e54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314e54) {
            ctx->pc = 0x314E64u;
            goto label_314e64;
        }
    }
    ctx->pc = 0x314E5Cu;
label_314e5c:
    // 0x314e5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_314e60:
    // 0x314e60: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x314e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_314e64:
    // 0x314e64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_314e68:
    // 0x314e68: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x314e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_314e6c:
    // 0x314e6c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x314e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_314e70:
    // 0x314e70: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x314e70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_314e74:
    // 0x314e74: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_314e78:
    if (ctx->pc == 0x314E78u) {
        ctx->pc = 0x314E78u;
            // 0x314e78: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x314E7Cu;
        goto label_314e7c;
    }
    ctx->pc = 0x314E74u;
    {
        const bool branch_taken_0x314e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x314E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314E74u;
            // 0x314e78: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e74) {
            ctx->pc = 0x314E84u;
            goto label_314e84;
        }
    }
    ctx->pc = 0x314E7Cu;
label_314e7c:
    // 0x314e7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_314e80:
    // 0x314e80: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x314e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_314e84:
    // 0x314e84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_314e88:
    // 0x314e88: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x314e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_314e8c:
    // 0x314e8c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x314e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_314e90:
    // 0x314e90: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x314e90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_314e94:
    // 0x314e94: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_314e98:
    if (ctx->pc == 0x314E98u) {
        ctx->pc = 0x314E9Cu;
        goto label_314e9c;
    }
    ctx->pc = 0x314E94u;
    {
        const bool branch_taken_0x314e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314e94) {
            ctx->pc = 0x314EA4u;
            goto label_314ea4;
        }
    }
    ctx->pc = 0x314E9Cu;
label_314e9c:
    // 0x314e9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_314ea0:
    // 0x314ea0: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x314ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_314ea4:
    // 0x314ea4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_314ea8:
    // 0x314ea8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x314ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_314eac:
    // 0x314eac: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x314eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_314eb0:
    // 0x314eb0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x314eb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_314eb4:
    // 0x314eb4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_314eb8:
    if (ctx->pc == 0x314EB8u) {
        ctx->pc = 0x314EBCu;
        goto label_314ebc;
    }
    ctx->pc = 0x314EB4u;
    {
        const bool branch_taken_0x314eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314eb4) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314EBCu;
label_314ebc:
    // 0x314ebc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_314ec0:
    // 0x314ec0: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x314ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_314ec4:
    // 0x314ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x314ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_314ec8:
    // 0x314ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_314ecc:
    // 0x314ecc: 0x3e00008  jr          $ra
label_314ed0:
    if (ctx->pc == 0x314ED0u) {
        ctx->pc = 0x314ED0u;
            // 0x314ed0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x314ED4u;
        goto label_314ed4;
    }
    ctx->pc = 0x314ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314ECCu;
            // 0x314ed0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314ED4u;
label_314ed4:
    // 0x314ed4: 0x0  nop
    ctx->pc = 0x314ed4u;
    // NOP
label_314ed8:
    // 0x314ed8: 0x0  nop
    ctx->pc = 0x314ed8u;
    // NOP
label_314edc:
    // 0x314edc: 0x0  nop
    ctx->pc = 0x314edcu;
    // NOP
label_314ee0:
    // 0x314ee0: 0x3e00008  jr          $ra
label_314ee4:
    if (ctx->pc == 0x314EE4u) {
        ctx->pc = 0x314EE8u;
        goto label_314ee8;
    }
    ctx->pc = 0x314EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314EE8u;
label_314ee8:
    // 0x314ee8: 0x0  nop
    ctx->pc = 0x314ee8u;
    // NOP
label_314eec:
    // 0x314eec: 0x0  nop
    ctx->pc = 0x314eecu;
    // NOP
label_314ef0:
    // 0x314ef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x314ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_314ef4:
    // 0x314ef4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x314ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_314ef8:
    // 0x314ef8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x314ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_314efc:
    // 0x314efc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_314f00:
    // 0x314f00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_314f04:
    // 0x314f04: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x314f04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_314f08:
    // 0x314f08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x314f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_314f0c:
    // 0x314f0c: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x314f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_314f10:
    // 0x314f10: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x314f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_314f14:
    // 0x314f14: 0x90c5010f  lbu         $a1, 0x10F($a2)
    ctx->pc = 0x314f14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 271)));
label_314f18:
    // 0x314f18: 0x24a3fff3  addiu       $v1, $a1, -0xD
    ctx->pc = 0x314f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967283));
label_314f1c:
    // 0x314f1c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x314f1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_314f20:
    // 0x314f20: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_314f24:
    if (ctx->pc == 0x314F24u) {
        ctx->pc = 0x314F24u;
            // 0x314f24: 0x2484f5d8  addiu       $a0, $a0, -0xA28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964696));
        ctx->pc = 0x314F28u;
        goto label_314f28;
    }
    ctx->pc = 0x314F20u;
    {
        const bool branch_taken_0x314f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314F20u;
            // 0x314f24: 0x2484f5d8  addiu       $a0, $a0, -0xA28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f20) {
            ctx->pc = 0x314F48u;
            goto label_314f48;
        }
    }
    ctx->pc = 0x314F28u;
label_314f28:
    // 0x314f28: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x314f28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_314f2c:
    // 0x314f2c: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
label_314f30:
    if (ctx->pc == 0x314F30u) {
        ctx->pc = 0x314F30u;
            // 0x314f30: 0xa2050060  sb          $a1, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x314F34u;
        goto label_314f34;
    }
    ctx->pc = 0x314F2Cu;
    {
        const bool branch_taken_0x314f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x314f2c) {
            ctx->pc = 0x314F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314F2Cu;
            // 0x314f30: 0xa2050060  sb          $a1, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314F40u;
            goto label_314f40;
        }
    }
    ctx->pc = 0x314F34u;
label_314f34:
    // 0x314f34: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x314f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_314f38:
    // 0x314f38: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x314f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_314f3c:
    // 0x314f3c: 0xa2050060  sb          $a1, 0x60($s0)
    ctx->pc = 0x314f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 5));
label_314f40:
    // 0x314f40: 0xc4c0003c  lwc1        $f0, 0x3C($a2)
    ctx->pc = 0x314f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_314f44:
    // 0x314f44: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x314f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_314f48:
    // 0x314f48: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x314f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_314f4c:
    // 0x314f4c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x314f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_314f50:
    // 0x314f50: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_314f54:
    if (ctx->pc == 0x314F54u) {
        ctx->pc = 0x314F54u;
            // 0x314f54: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->pc = 0x314F58u;
        goto label_314f58;
    }
    ctx->pc = 0x314F50u;
    {
        const bool branch_taken_0x314f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x314f50) {
            ctx->pc = 0x314F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314F50u;
            // 0x314f54: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314F74u;
            goto label_314f74;
        }
    }
    ctx->pc = 0x314F58u;
label_314f58:
    // 0x314f58: 0xc621118c  lwc1        $f1, 0x118C($s1)
    ctx->pc = 0x314f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_314f5c:
    // 0x314f5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314f60:
    // 0x314f60: 0x0  nop
    ctx->pc = 0x314f60u;
    // NOP
label_314f64:
    // 0x314f64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x314f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314f68:
    // 0x314f68: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_314f6c:
    if (ctx->pc == 0x314F6Cu) {
        ctx->pc = 0x314F6Cu;
            // 0x314f6c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x314F70u;
        goto label_314f70;
    }
    ctx->pc = 0x314F68u;
    {
        const bool branch_taken_0x314f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x314f68) {
            ctx->pc = 0x314F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314F68u;
            // 0x314f6c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314FA4u;
            goto label_314fa4;
        }
    }
    ctx->pc = 0x314F70u;
label_314f70:
    // 0x314f70: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x314f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_314f74:
    // 0x314f74: 0xc10c9b4  jal         func_4326D0
label_314f78:
    if (ctx->pc == 0x314F78u) {
        ctx->pc = 0x314F7Cu;
        goto label_314f7c;
    }
    ctx->pc = 0x314F74u;
    SET_GPR_U32(ctx, 31, 0x314F7Cu);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314F7Cu; }
        if (ctx->pc != 0x314F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314F7Cu; }
        if (ctx->pc != 0x314F7Cu) { return; }
    }
    ctx->pc = 0x314F7Cu;
label_314f7c:
    // 0x314f7c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x314f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_314f80:
    // 0x314f80: 0x50a0007a  beql        $a1, $zero, . + 4 + (0x7A << 2)
label_314f84:
    if (ctx->pc == 0x314F84u) {
        ctx->pc = 0x314F84u;
            // 0x314f84: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x314F88u;
        goto label_314f88;
    }
    ctx->pc = 0x314F80u;
    {
        const bool branch_taken_0x314f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x314f80) {
            ctx->pc = 0x314F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314F80u;
            // 0x314f84: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31516Cu;
            goto label_31516c;
        }
    }
    ctx->pc = 0x314F88u;
label_314f88:
    // 0x314f88: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x314f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_314f8c:
    // 0x314f8c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x314f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_314f90:
    // 0x314f90: 0xc057b7c  jal         func_15EDF0
label_314f94:
    if (ctx->pc == 0x314F94u) {
        ctx->pc = 0x314F94u;
            // 0x314f94: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x314F98u;
        goto label_314f98;
    }
    ctx->pc = 0x314F90u;
    SET_GPR_U32(ctx, 31, 0x314F98u);
    ctx->pc = 0x314F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314F90u;
            // 0x314f94: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314F98u; }
        if (ctx->pc != 0x314F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314F98u; }
        if (ctx->pc != 0x314F98u) { return; }
    }
    ctx->pc = 0x314F98u;
label_314f98:
    // 0x314f98: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x314f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_314f9c:
    // 0x314f9c: 0x10000073  b           . + 4 + (0x73 << 2)
label_314fa0:
    if (ctx->pc == 0x314FA0u) {
        ctx->pc = 0x314FA4u;
        goto label_314fa4;
    }
    ctx->pc = 0x314F9Cu;
    {
        const bool branch_taken_0x314f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314f9c) {
            ctx->pc = 0x31516Cu;
            goto label_31516c;
        }
    }
    ctx->pc = 0x314FA4u;
label_314fa4:
    // 0x314fa4: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x314fa4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_314fa8:
    // 0x314fa8: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x314fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_314fac:
    // 0x314fac: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_314fb0:
    if (ctx->pc == 0x314FB0u) {
        ctx->pc = 0x314FB0u;
            // 0x314fb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314FB4u;
        goto label_314fb4;
    }
    ctx->pc = 0x314FACu;
    {
        const bool branch_taken_0x314fac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x314FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314FACu;
            // 0x314fb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fac) {
            ctx->pc = 0x314FC4u;
            goto label_314fc4;
        }
    }
    ctx->pc = 0x314FB4u;
label_314fb4:
    // 0x314fb4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x314fb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_314fb8:
    // 0x314fb8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_314fbc:
    if (ctx->pc == 0x314FBCu) {
        ctx->pc = 0x314FC0u;
        goto label_314fc0;
    }
    ctx->pc = 0x314FB8u;
    {
        const bool branch_taken_0x314fb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314fb8) {
            ctx->pc = 0x314FC4u;
            goto label_314fc4;
        }
    }
    ctx->pc = 0x314FC0u;
label_314fc0:
    // 0x314fc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x314fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_314fc4:
    // 0x314fc4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_314fc8:
    if (ctx->pc == 0x314FC8u) {
        ctx->pc = 0x314FCCu;
        goto label_314fcc;
    }
    ctx->pc = 0x314FC4u;
    {
        const bool branch_taken_0x314fc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x314fc4) {
            ctx->pc = 0x314FE0u;
            goto label_314fe0;
        }
    }
    ctx->pc = 0x314FCCu;
label_314fcc:
    // 0x314fcc: 0xc075eb4  jal         func_1D7AD0
label_314fd0:
    if (ctx->pc == 0x314FD0u) {
        ctx->pc = 0x314FD4u;
        goto label_314fd4;
    }
    ctx->pc = 0x314FCCu;
    SET_GPR_U32(ctx, 31, 0x314FD4u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314FD4u; }
        if (ctx->pc != 0x314FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314FD4u; }
        if (ctx->pc != 0x314FD4u) { return; }
    }
    ctx->pc = 0x314FD4u;
label_314fd4:
    // 0x314fd4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_314fd8:
    if (ctx->pc == 0x314FD8u) {
        ctx->pc = 0x314FDCu;
        goto label_314fdc;
    }
    ctx->pc = 0x314FD4u;
    {
        const bool branch_taken_0x314fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314fd4) {
            ctx->pc = 0x314FE0u;
            goto label_314fe0;
        }
    }
    ctx->pc = 0x314FDCu;
label_314fdc:
    // 0x314fdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x314fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314fe0:
    // 0x314fe0: 0x56400027  bnel        $s2, $zero, . + 4 + (0x27 << 2)
label_314fe4:
    if (ctx->pc == 0x314FE4u) {
        ctx->pc = 0x314FE4u;
            // 0x314fe4: 0xc6210e1c  lwc1        $f1, 0xE1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x314FE8u;
        goto label_314fe8;
    }
    ctx->pc = 0x314FE0u;
    {
        const bool branch_taken_0x314fe0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x314fe0) {
            ctx->pc = 0x314FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314FE0u;
            // 0x314fe4: 0xc6210e1c  lwc1        $f1, 0xE1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x315080u;
            goto label_315080;
        }
    }
    ctx->pc = 0x314FE8u;
label_314fe8:
    // 0x314fe8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x314fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_314fec:
    // 0x314fec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x314fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_314ff0:
    // 0x314ff0: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x314ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_314ff4:
    // 0x314ff4: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_314ff8:
    if (ctx->pc == 0x314FF8u) {
        ctx->pc = 0x314FFCu;
        goto label_314ffc;
    }
    ctx->pc = 0x314FF4u;
    {
        const bool branch_taken_0x314ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x314ff4) {
            ctx->pc = 0x31507Cu;
            goto label_31507c;
        }
    }
    ctx->pc = 0x314FFCu;
label_314ffc:
    // 0x314ffc: 0xc0756f4  jal         func_1D5BD0
label_315000:
    if (ctx->pc == 0x315000u) {
        ctx->pc = 0x315000u;
            // 0x315000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315004u;
        goto label_315004;
    }
    ctx->pc = 0x314FFCu;
    SET_GPR_U32(ctx, 31, 0x315004u);
    ctx->pc = 0x315000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314FFCu;
            // 0x315000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BD0u;
    if (runtime->hasFunction(0x1D5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315004u; }
        if (ctx->pc != 0x315004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5BD0_0x1d5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315004u; }
        if (ctx->pc != 0x315004u) { return; }
    }
    ctx->pc = 0x315004u;
label_315004:
    // 0x315004: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x315004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_315008:
    // 0x315008: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31500c:
    // 0x31500c: 0x0  nop
    ctx->pc = 0x31500cu;
    // NOP
label_315010:
    // 0x315010: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x315010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315014:
    // 0x315014: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
label_315018:
    if (ctx->pc == 0x315018u) {
        ctx->pc = 0x315018u;
            // 0x315018: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->pc = 0x31501Cu;
        goto label_31501c;
    }
    ctx->pc = 0x315014u;
    {
        const bool branch_taken_0x315014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x315014) {
            ctx->pc = 0x315018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315014u;
            // 0x315018: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315074u;
            goto label_315074;
        }
    }
    ctx->pc = 0x31501Cu;
label_31501c:
    // 0x31501c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x31501cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_315020:
    // 0x315020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315024:
    // 0x315024: 0x0  nop
    ctx->pc = 0x315024u;
    // NOP
label_315028:
    // 0x315028: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x315028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31502c:
    // 0x31502c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_315030:
    if (ctx->pc == 0x315030u) {
        ctx->pc = 0x315030u;
            // 0x315030: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x315034u;
        goto label_315034;
    }
    ctx->pc = 0x31502Cu;
    {
        const bool branch_taken_0x31502c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31502c) {
            ctx->pc = 0x315030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31502Cu;
            // 0x315030: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x315044u;
            goto label_315044;
        }
    }
    ctx->pc = 0x315034u;
label_315034:
    // 0x315034: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315034u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_315038:
    // 0x315038: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x315038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_31503c:
    // 0x31503c: 0x10000007  b           . + 4 + (0x7 << 2)
label_315040:
    if (ctx->pc == 0x315040u) {
        ctx->pc = 0x315040u;
            // 0x315040: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->pc = 0x315044u;
        goto label_315044;
    }
    ctx->pc = 0x31503Cu;
    {
        const bool branch_taken_0x31503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31503Cu;
            // 0x315040: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31503c) {
            ctx->pc = 0x31505Cu;
            goto label_31505c;
        }
    }
    ctx->pc = 0x315044u;
label_315044:
    // 0x315044: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x315044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_315048:
    // 0x315048: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315048u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_31504c:
    // 0x31504c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x31504cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_315050:
    // 0x315050: 0x0  nop
    ctx->pc = 0x315050u;
    // NOP
label_315054:
    // 0x315054: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x315054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_315058:
    // 0x315058: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x315058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_31505c:
    // 0x31505c: 0xc10c990  jal         func_432640
label_315060:
    if (ctx->pc == 0x315060u) {
        ctx->pc = 0x315064u;
        goto label_315064;
    }
    ctx->pc = 0x31505Cu;
    SET_GPR_U32(ctx, 31, 0x315064u);
    ctx->pc = 0x432640u;
    if (runtime->hasFunction(0x432640u)) {
        auto targetFn = runtime->lookupFunction(0x432640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315064u; }
        if (ctx->pc != 0x315064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432640_0x432640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315064u; }
        if (ctx->pc != 0x315064u) { return; }
    }
    ctx->pc = 0x315064u;
label_315064:
    // 0x315064: 0xc10c9d8  jal         func_432760
label_315068:
    if (ctx->pc == 0x315068u) {
        ctx->pc = 0x315068u;
            // 0x315068: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->pc = 0x31506Cu;
        goto label_31506c;
    }
    ctx->pc = 0x315064u;
    SET_GPR_U32(ctx, 31, 0x31506Cu);
    ctx->pc = 0x315068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315064u;
            // 0x315068: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31506Cu; }
        if (ctx->pc != 0x31506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31506Cu; }
        if (ctx->pc != 0x31506Cu) { return; }
    }
    ctx->pc = 0x31506Cu;
label_31506c:
    // 0x31506c: 0x10000003  b           . + 4 + (0x3 << 2)
label_315070:
    if (ctx->pc == 0x315070u) {
        ctx->pc = 0x315074u;
        goto label_315074;
    }
    ctx->pc = 0x31506Cu;
    {
        const bool branch_taken_0x31506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31506c) {
            ctx->pc = 0x31507Cu;
            goto label_31507c;
        }
    }
    ctx->pc = 0x315074u;
label_315074:
    // 0x315074: 0xc10c9b4  jal         func_4326D0
label_315078:
    if (ctx->pc == 0x315078u) {
        ctx->pc = 0x31507Cu;
        goto label_31507c;
    }
    ctx->pc = 0x315074u;
    SET_GPR_U32(ctx, 31, 0x31507Cu);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31507Cu; }
        if (ctx->pc != 0x31507Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31507Cu; }
        if (ctx->pc != 0x31507Cu) { return; }
    }
    ctx->pc = 0x31507Cu;
label_31507c:
    // 0x31507c: 0xc6210e1c  lwc1        $f1, 0xE1C($s1)
    ctx->pc = 0x31507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315080:
    // 0x315080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315084:
    // 0x315084: 0x0  nop
    ctx->pc = 0x315084u;
    // NOP
label_315088:
    // 0x315088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x315088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31508c:
    // 0x31508c: 0x45010037  bc1t        . + 4 + (0x37 << 2)
label_315090:
    if (ctx->pc == 0x315090u) {
        ctx->pc = 0x315094u;
        goto label_315094;
    }
    ctx->pc = 0x31508Cu;
    {
        const bool branch_taken_0x31508c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31508c) {
            ctx->pc = 0x31516Cu;
            goto label_31516c;
        }
    }
    ctx->pc = 0x315094u;
label_315094:
    // 0x315094: 0x822511ad  lb          $a1, 0x11AD($s1)
    ctx->pc = 0x315094u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4525)));
label_315098:
    // 0x315098: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x315098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_31509c:
    // 0x31509c: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x31509cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_3150a0:
    // 0x3150a0: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x3150a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3150a4:
    // 0x3150a4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3150a4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3150a8:
    // 0x3150a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3150a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3150ac:
    // 0x3150ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3150acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3150b0:
    // 0x3150b0: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x3150b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3150b4:
    // 0x3150b4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3150b8:
    if (ctx->pc == 0x3150B8u) {
        ctx->pc = 0x3150B8u;
            // 0x3150b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3150BCu;
        goto label_3150bc;
    }
    ctx->pc = 0x3150B4u;
    {
        const bool branch_taken_0x3150b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3150B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3150B4u;
            // 0x3150b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150b4) {
            ctx->pc = 0x3150CCu;
            goto label_3150cc;
        }
    }
    ctx->pc = 0x3150BCu;
label_3150bc:
    // 0x3150bc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3150bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3150c0:
    // 0x3150c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3150c4:
    if (ctx->pc == 0x3150C4u) {
        ctx->pc = 0x3150C8u;
        goto label_3150c8;
    }
    ctx->pc = 0x3150C0u;
    {
        const bool branch_taken_0x3150c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3150c0) {
            ctx->pc = 0x3150CCu;
            goto label_3150cc;
        }
    }
    ctx->pc = 0x3150C8u;
label_3150c8:
    // 0x3150c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3150c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3150cc:
    // 0x3150cc: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_3150d0:
    if (ctx->pc == 0x3150D0u) {
        ctx->pc = 0x3150D4u;
        goto label_3150d4;
    }
    ctx->pc = 0x3150CCu;
    {
        const bool branch_taken_0x3150cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3150cc) {
            ctx->pc = 0x3150E8u;
            goto label_3150e8;
        }
    }
    ctx->pc = 0x3150D4u;
label_3150d4:
    // 0x3150d4: 0xc075eb4  jal         func_1D7AD0
label_3150d8:
    if (ctx->pc == 0x3150D8u) {
        ctx->pc = 0x3150D8u;
            // 0x3150d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3150DCu;
        goto label_3150dc;
    }
    ctx->pc = 0x3150D4u;
    SET_GPR_U32(ctx, 31, 0x3150DCu);
    ctx->pc = 0x3150D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3150D4u;
            // 0x3150d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3150DCu; }
        if (ctx->pc != 0x3150DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3150DCu; }
        if (ctx->pc != 0x3150DCu) { return; }
    }
    ctx->pc = 0x3150DCu;
label_3150dc:
    // 0x3150dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3150e0:
    if (ctx->pc == 0x3150E0u) {
        ctx->pc = 0x3150E4u;
        goto label_3150e4;
    }
    ctx->pc = 0x3150DCu;
    {
        const bool branch_taken_0x3150dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3150dc) {
            ctx->pc = 0x3150E8u;
            goto label_3150e8;
        }
    }
    ctx->pc = 0x3150E4u;
label_3150e4:
    // 0x3150e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3150e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3150e8:
    // 0x3150e8: 0x5600001b  bnel        $s0, $zero, . + 4 + (0x1B << 2)
label_3150ec:
    if (ctx->pc == 0x3150ECu) {
        ctx->pc = 0x3150ECu;
            // 0x3150ec: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->pc = 0x3150F0u;
        goto label_3150f0;
    }
    ctx->pc = 0x3150E8u;
    {
        const bool branch_taken_0x3150e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3150e8) {
            ctx->pc = 0x3150ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3150E8u;
            // 0x3150ec: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315158u;
            goto label_315158;
        }
    }
    ctx->pc = 0x3150F0u;
label_3150f0:
    // 0x3150f0: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x3150f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3150f4:
    // 0x3150f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3150f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3150f8:
    // 0x3150f8: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_3150fc:
    if (ctx->pc == 0x3150FCu) {
        ctx->pc = 0x315100u;
        goto label_315100;
    }
    ctx->pc = 0x3150F8u;
    {
        const bool branch_taken_0x3150f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3150f8) {
            ctx->pc = 0x315154u;
            goto label_315154;
        }
    }
    ctx->pc = 0x315100u;
label_315100:
    // 0x315100: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x315100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_315104:
    // 0x315104: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x315104u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_315108:
    // 0x315108: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_31510c:
    if (ctx->pc == 0x31510Cu) {
        ctx->pc = 0x31510Cu;
            // 0x31510c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315110u;
        goto label_315110;
    }
    ctx->pc = 0x315108u;
    {
        const bool branch_taken_0x315108 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x31510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315108u;
            // 0x31510c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315108) {
            ctx->pc = 0x315120u;
            goto label_315120;
        }
    }
    ctx->pc = 0x315110u;
label_315110:
    // 0x315110: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x315110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_315114:
    // 0x315114: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_315118:
    if (ctx->pc == 0x315118u) {
        ctx->pc = 0x31511Cu;
        goto label_31511c;
    }
    ctx->pc = 0x315114u;
    {
        const bool branch_taken_0x315114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x315114) {
            ctx->pc = 0x315120u;
            goto label_315120;
        }
    }
    ctx->pc = 0x31511Cu;
label_31511c:
    // 0x31511c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31511cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315120:
    // 0x315120: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_315124:
    if (ctx->pc == 0x315124u) {
        ctx->pc = 0x315128u;
        goto label_315128;
    }
    ctx->pc = 0x315120u;
    {
        const bool branch_taken_0x315120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x315120) {
            ctx->pc = 0x31513Cu;
            goto label_31513c;
        }
    }
    ctx->pc = 0x315128u;
label_315128:
    // 0x315128: 0xc075eb4  jal         func_1D7AD0
label_31512c:
    if (ctx->pc == 0x31512Cu) {
        ctx->pc = 0x31512Cu;
            // 0x31512c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315130u;
        goto label_315130;
    }
    ctx->pc = 0x315128u;
    SET_GPR_U32(ctx, 31, 0x315130u);
    ctx->pc = 0x31512Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315128u;
            // 0x31512c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315130u; }
        if (ctx->pc != 0x315130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315130u; }
        if (ctx->pc != 0x315130u) { return; }
    }
    ctx->pc = 0x315130u;
label_315130:
    // 0x315130: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_315134:
    if (ctx->pc == 0x315134u) {
        ctx->pc = 0x315138u;
        goto label_315138;
    }
    ctx->pc = 0x315130u;
    {
        const bool branch_taken_0x315130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315130) {
            ctx->pc = 0x31513Cu;
            goto label_31513c;
        }
    }
    ctx->pc = 0x315138u;
label_315138:
    // 0x315138: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x315138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31513c:
    // 0x31513c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_315140:
    if (ctx->pc == 0x315140u) {
        ctx->pc = 0x315144u;
        goto label_315144;
    }
    ctx->pc = 0x31513Cu;
    {
        const bool branch_taken_0x31513c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31513c) {
            ctx->pc = 0x315154u;
            goto label_315154;
        }
    }
    ctx->pc = 0x315144u;
label_315144:
    // 0x315144: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x315144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_315148:
    // 0x315148: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x315148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31514c:
    // 0x31514c: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_315150:
    if (ctx->pc == 0x315150u) {
        ctx->pc = 0x315150u;
            // 0x315150: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->pc = 0x315154u;
        goto label_315154;
    }
    ctx->pc = 0x31514Cu;
    {
        const bool branch_taken_0x31514c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31514c) {
            ctx->pc = 0x315150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31514Cu;
            // 0x315150: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315164u;
            goto label_315164;
        }
    }
    ctx->pc = 0x315154u;
label_315154:
    // 0x315154: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x315154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_315158:
    // 0x315158: 0xc073234  jal         func_1CC8D0
label_31515c:
    if (ctx->pc == 0x31515Cu) {
        ctx->pc = 0x31515Cu;
            // 0x31515c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x315160u;
        goto label_315160;
    }
    ctx->pc = 0x315158u;
    SET_GPR_U32(ctx, 31, 0x315160u);
    ctx->pc = 0x31515Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315158u;
            // 0x31515c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315160u; }
        if (ctx->pc != 0x315160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315160u; }
        if (ctx->pc != 0x315160u) { return; }
    }
    ctx->pc = 0x315160u;
label_315160:
    // 0x315160: 0xae200e1c  sw          $zero, 0xE1C($s1)
    ctx->pc = 0x315160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
label_315164:
    // 0x315164: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x315164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_315168:
    // 0x315168: 0xa22311ad  sb          $v1, 0x11AD($s1)
    ctx->pc = 0x315168u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4525), (uint8_t)GPR_U32(ctx, 3));
label_31516c:
    // 0x31516c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31516cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_315170:
    // 0x315170: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x315170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_315174:
    // 0x315174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315178:
    // 0x315178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31517c:
    // 0x31517c: 0x3e00008  jr          $ra
label_315180:
    if (ctx->pc == 0x315180u) {
        ctx->pc = 0x315180u;
            // 0x315180: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x315184u;
        goto label_315184;
    }
    ctx->pc = 0x31517Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31517Cu;
            // 0x315180: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x315184u;
label_315184:
    // 0x315184: 0x0  nop
    ctx->pc = 0x315184u;
    // NOP
label_315188:
    // 0x315188: 0x0  nop
    ctx->pc = 0x315188u;
    // NOP
label_31518c:
    // 0x31518c: 0x0  nop
    ctx->pc = 0x31518cu;
    // NOP
label_315190:
    // 0x315190: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x315190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_315194:
    // 0x315194: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x315194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_315198:
    // 0x315198: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x315198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_31519c:
    // 0x31519c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3151a0:
    // 0x3151a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3151a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3151a4:
    // 0x3151a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3151a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3151a8:
    // 0x3151a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3151a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3151ac:
    // 0x3151ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3151acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3151b0:
    // 0x3151b0: 0xc075740  jal         func_1D5D00
label_3151b4:
    if (ctx->pc == 0x3151B4u) {
        ctx->pc = 0x3151B4u;
            // 0x3151b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3151B8u;
        goto label_3151b8;
    }
    ctx->pc = 0x3151B0u;
    SET_GPR_U32(ctx, 31, 0x3151B8u);
    ctx->pc = 0x3151B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3151B0u;
            // 0x3151b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D00u;
    if (runtime->hasFunction(0x1D5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3151B8u; }
        if (ctx->pc != 0x3151B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5D00_0x1d5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3151B8u; }
        if (ctx->pc != 0x3151B8u) { return; }
    }
    ctx->pc = 0x3151B8u;
label_3151b8:
    // 0x3151b8: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x3151b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3151bc:
    // 0x3151bc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3151bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3151c0:
    // 0x3151c0: 0x8e240550  lw          $a0, 0x550($s1)
    ctx->pc = 0x3151c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3151c4:
    // 0x3151c4: 0x8084010f  lb          $a0, 0x10F($a0)
    ctx->pc = 0x3151c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_3151c8:
    // 0x3151c8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_3151cc:
    if (ctx->pc == 0x3151CCu) {
        ctx->pc = 0x3151D0u;
        goto label_3151d0;
    }
    ctx->pc = 0x3151C8u;
    {
        const bool branch_taken_0x3151c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3151c8) {
            ctx->pc = 0x3151DCu;
            goto label_3151dc;
        }
    }
    ctx->pc = 0x3151D0u;
label_3151d0:
    // 0x3151d0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3151d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3151d4:
    // 0x3151d4: 0x54830048  bnel        $a0, $v1, . + 4 + (0x48 << 2)
label_3151d8:
    if (ctx->pc == 0x3151D8u) {
        ctx->pc = 0x3151D8u;
            // 0x3151d8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3151DCu;
        goto label_3151dc;
    }
    ctx->pc = 0x3151D4u;
    {
        const bool branch_taken_0x3151d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3151d4) {
            ctx->pc = 0x3151D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3151D4u;
            // 0x3151d8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3152F8u;
            goto label_3152f8;
        }
    }
    ctx->pc = 0x3151DCu;
label_3151dc:
    // 0x3151dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3151dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3151e0:
    // 0x3151e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3151e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3151e4:
    // 0x3151e4: 0x8c74e370  lw          $s4, -0x1C90($v1)
    ctx->pc = 0x3151e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_3151e8:
    // 0x3151e8: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x3151e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_3151ec:
    // 0x3151ec: 0x8c95e378  lw          $s5, -0x1C88($a0)
    ctx->pc = 0x3151ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_3151f0:
    // 0x3151f0: 0x2610f5d8  addiu       $s0, $s0, -0xA28
    ctx->pc = 0x3151f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964696));
label_3151f4:
    // 0x3151f4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3151f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3151f8:
    // 0x3151f8: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x3151f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3151fc:
    // 0x3151fc: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x3151fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_315200:
    // 0x315200: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x315200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_315204:
    // 0x315204: 0x8cc60130  lw          $a2, 0x130($a2)
    ctx->pc = 0x315204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_315208:
    // 0x315208: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x315208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_31520c:
    // 0x31520c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x31520cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_315210:
    // 0x315210: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x315210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_315214:
    // 0x315214: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x315214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_315218:
    // 0x315218: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x315218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_31521c:
    // 0x31521c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x31521cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_315220:
    // 0x315220: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
label_315224:
    if (ctx->pc == 0x315224u) {
        ctx->pc = 0x315224u;
            // 0x315224: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x315228u;
        goto label_315228;
    }
    ctx->pc = 0x315220u;
    {
        const bool branch_taken_0x315220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x315224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315220u;
            // 0x315224: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315220) {
            ctx->pc = 0x3152F4u;
            goto label_3152f4;
        }
    }
    ctx->pc = 0x315228u;
label_315228:
    // 0x315228: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x315228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_31522c:
    // 0x31522c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31522cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315230:
    // 0x315230: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x315230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_315234:
    // 0x315234: 0x320f809  jalr        $t9
label_315238:
    if (ctx->pc == 0x315238u) {
        ctx->pc = 0x315238u;
            // 0x315238: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x31523Cu;
        goto label_31523c;
    }
    ctx->pc = 0x315234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31523Cu);
        ctx->pc = 0x315238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315234u;
            // 0x315238: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31523Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31523Cu; }
            if (ctx->pc != 0x31523Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31523Cu;
label_31523c:
    // 0x31523c: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x31523cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
label_315240:
    // 0x315240: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x315240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_315244:
    // 0x315244: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x315244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_315248:
    // 0x315248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x315248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31524c:
    // 0x31524c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x31524cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_315250:
    // 0x315250: 0xc04e4a4  jal         func_139290
label_315254:
    if (ctx->pc == 0x315254u) {
        ctx->pc = 0x315254u;
            // 0x315254: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->pc = 0x315258u;
        goto label_315258;
    }
    ctx->pc = 0x315250u;
    SET_GPR_U32(ctx, 31, 0x315258u);
    ctx->pc = 0x315254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315250u;
            // 0x315254: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315258u; }
        if (ctx->pc != 0x315258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315258u; }
        if (ctx->pc != 0x315258u) { return; }
    }
    ctx->pc = 0x315258u;
label_315258:
    // 0x315258: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x315258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_31525c:
    // 0x31525c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31525cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315260:
    // 0x315260: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x315260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_315264:
    // 0x315264: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x315264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_315268:
    // 0x315268: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x315268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31526c:
    // 0x31526c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31526cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_315270:
    // 0x315270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_315274:
    // 0x315274: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x315274u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_315278:
    // 0x315278: 0xc0517b0  jal         func_145EC0
label_31527c:
    if (ctx->pc == 0x31527Cu) {
        ctx->pc = 0x31527Cu;
            // 0x31527c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315280u;
        goto label_315280;
    }
    ctx->pc = 0x315278u;
    SET_GPR_U32(ctx, 31, 0x315280u);
    ctx->pc = 0x31527Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315278u;
            // 0x31527c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315280u; }
        if (ctx->pc != 0x315280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EC0_0x145ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315280u; }
        if (ctx->pc != 0x315280u) { return; }
    }
    ctx->pc = 0x315280u;
label_315280:
    // 0x315280: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x315280u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_315284:
    // 0x315284: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x315284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_315288:
    // 0x315288: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x315288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_31528c:
    // 0x31528c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x31528cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_315290:
    // 0x315290: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x315290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_315294:
    // 0x315294: 0xc04cd60  jal         func_133580
label_315298:
    if (ctx->pc == 0x315298u) {
        ctx->pc = 0x315298u;
            // 0x315298: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x31529Cu;
        goto label_31529c;
    }
    ctx->pc = 0x315294u;
    SET_GPR_U32(ctx, 31, 0x31529Cu);
    ctx->pc = 0x315298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315294u;
            // 0x315298: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31529Cu; }
        if (ctx->pc != 0x31529Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31529Cu; }
        if (ctx->pc != 0x31529Cu) { return; }
    }
    ctx->pc = 0x31529Cu;
label_31529c:
    // 0x31529c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x31529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3152a0:
    // 0x3152a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3152a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3152a4:
    // 0x3152a4: 0xc04cd60  jal         func_133580
label_3152a8:
    if (ctx->pc == 0x3152A8u) {
        ctx->pc = 0x3152A8u;
            // 0x3152a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3152ACu;
        goto label_3152ac;
    }
    ctx->pc = 0x3152A4u;
    SET_GPR_U32(ctx, 31, 0x3152ACu);
    ctx->pc = 0x3152A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3152A4u;
            // 0x3152a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152ACu; }
        if (ctx->pc != 0x3152ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152ACu; }
        if (ctx->pc != 0x3152ACu) { return; }
    }
    ctx->pc = 0x3152ACu;
label_3152ac:
    // 0x3152ac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3152acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3152b0:
    // 0x3152b0: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x3152b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3152b4:
    // 0x3152b4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3152b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3152b8:
    // 0x3152b8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3152b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3152bc:
    // 0x3152bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3152bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3152c0:
    // 0x3152c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3152c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3152c4:
    // 0x3152c4: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x3152c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3152c8:
    // 0x3152c8: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x3152c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_3152cc:
    // 0x3152cc: 0xc04cff4  jal         func_133FD0
label_3152d0:
    if (ctx->pc == 0x3152D0u) {
        ctx->pc = 0x3152D0u;
            // 0x3152d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3152D4u;
        goto label_3152d4;
    }
    ctx->pc = 0x3152CCu;
    SET_GPR_U32(ctx, 31, 0x3152D4u);
    ctx->pc = 0x3152D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3152CCu;
            // 0x3152d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152D4u; }
        if (ctx->pc != 0x3152D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152D4u; }
        if (ctx->pc != 0x3152D4u) { return; }
    }
    ctx->pc = 0x3152D4u;
label_3152d4:
    // 0x3152d4: 0xc04e738  jal         func_139CE0
label_3152d8:
    if (ctx->pc == 0x3152D8u) {
        ctx->pc = 0x3152D8u;
            // 0x3152d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x3152DCu;
        goto label_3152dc;
    }
    ctx->pc = 0x3152D4u;
    SET_GPR_U32(ctx, 31, 0x3152DCu);
    ctx->pc = 0x3152D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3152D4u;
            // 0x3152d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152DCu; }
        if (ctx->pc != 0x3152DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152DCu; }
        if (ctx->pc != 0x3152DCu) { return; }
    }
    ctx->pc = 0x3152DCu;
label_3152dc:
    // 0x3152dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3152dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3152e0:
    // 0x3152e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3152e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3152e4:
    // 0x3152e4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3152e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3152e8:
    // 0x3152e8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3152e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3152ec:
    // 0x3152ec: 0xc050044  jal         func_140110
label_3152f0:
    if (ctx->pc == 0x3152F0u) {
        ctx->pc = 0x3152F0u;
            // 0x3152f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3152F4u;
        goto label_3152f4;
    }
    ctx->pc = 0x3152ECu;
    SET_GPR_U32(ctx, 31, 0x3152F4u);
    ctx->pc = 0x3152F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3152ECu;
            // 0x3152f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152F4u; }
        if (ctx->pc != 0x3152F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152F4u; }
        if (ctx->pc != 0x3152F4u) { return; }
    }
    ctx->pc = 0x3152F4u;
label_3152f4:
    // 0x3152f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3152f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3152f8:
    // 0x3152f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3152f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3152fc:
    // 0x3152fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3152fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_315300:
    // 0x315300: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x315300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_315304:
    // 0x315304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x315304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_315308:
    // 0x315308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31530c:
    // 0x31530c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31530cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_315310:
    // 0x315310: 0x3e00008  jr          $ra
label_315314:
    if (ctx->pc == 0x315314u) {
        ctx->pc = 0x315314u;
            // 0x315314: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x315318u;
        goto label_315318;
    }
    ctx->pc = 0x315310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315310u;
            // 0x315314: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x315318u;
label_315318:
    // 0x315318: 0x0  nop
    ctx->pc = 0x315318u;
    // NOP
label_31531c:
    // 0x31531c: 0x0  nop
    ctx->pc = 0x31531cu;
    // NOP
label_315320:
    // 0x315320: 0x3e00008  jr          $ra
label_315324:
    if (ctx->pc == 0x315324u) {
        ctx->pc = 0x315328u;
        goto label_315328;
    }
    ctx->pc = 0x315320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x315328u;
label_315328:
    // 0x315328: 0x0  nop
    ctx->pc = 0x315328u;
    // NOP
label_31532c:
    // 0x31532c: 0x0  nop
    ctx->pc = 0x31532cu;
    // NOP
label_315330:
    // 0x315330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x315330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_315334:
    // 0x315334: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x315334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_315338:
    // 0x315338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x315338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31533c:
    // 0x31533c: 0x24c6f5d8  addiu       $a2, $a2, -0xA28
    ctx->pc = 0x31533cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964696));
label_315340:
    // 0x315340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_315344:
    // 0x315344: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x315344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_315348:
    // 0x315348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x315348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31534c:
    // 0x31534c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x31534cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_315350:
    // 0x315350: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x315350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_315354:
    // 0x315354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x315354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315358:
    // 0x315358: 0xa0820060  sb          $v0, 0x60($a0)
    ctx->pc = 0x315358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 2));
label_31535c:
    // 0x31535c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x31535cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_315360:
    // 0x315360: 0x8c63f5f8  lw          $v1, -0xA08($v1)
    ctx->pc = 0x315360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964728)));
label_315364:
    // 0x315364: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x315364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_315368:
    // 0x315368: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x315368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
label_31536c:
    // 0x31536c: 0x8c42f5fc  lw          $v0, -0xA04($v0)
    ctx->pc = 0x31536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964732)));
label_315370:
    // 0x315370: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x315370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
label_315374:
    // 0x315374: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x315374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_315378:
    // 0x315378: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x315378u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_31537c:
    // 0x31537c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x31537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_315380:
    // 0x315380: 0xc12ca3c  jal         func_4B28F0
label_315384:
    if (ctx->pc == 0x315384u) {
        ctx->pc = 0x315384u;
            // 0x315384: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x315388u;
        goto label_315388;
    }
    ctx->pc = 0x315380u;
    SET_GPR_U32(ctx, 31, 0x315388u);
    ctx->pc = 0x315384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315380u;
            // 0x315384: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315388u; }
        if (ctx->pc != 0x315388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315388u; }
        if (ctx->pc != 0x315388u) { return; }
    }
    ctx->pc = 0x315388u;
label_315388:
    // 0x315388: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x315388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31538c:
    // 0x31538c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x31538cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_315390:
    // 0x315390: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x315390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_315394:
    // 0x315394: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_315398:
    if (ctx->pc == 0x315398u) {
        ctx->pc = 0x315398u;
            // 0x315398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31539Cu;
        goto label_31539c;
    }
    ctx->pc = 0x315394u;
    {
        const bool branch_taken_0x315394 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x315398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315394u;
            // 0x315398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315394) {
            ctx->pc = 0x3153ACu;
            goto label_3153ac;
        }
    }
    ctx->pc = 0x31539Cu;
label_31539c:
    // 0x31539c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x31539cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3153a0:
    // 0x3153a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3153a4:
    if (ctx->pc == 0x3153A4u) {
        ctx->pc = 0x3153A8u;
        goto label_3153a8;
    }
    ctx->pc = 0x3153A0u;
    {
        const bool branch_taken_0x3153a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3153a0) {
            ctx->pc = 0x3153ACu;
            goto label_3153ac;
        }
    }
    ctx->pc = 0x3153A8u;
label_3153a8:
    // 0x3153a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3153a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3153ac:
    // 0x3153ac: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_3153b0:
    if (ctx->pc == 0x3153B0u) {
        ctx->pc = 0x3153B4u;
        goto label_3153b4;
    }
    ctx->pc = 0x3153ACu;
    {
        const bool branch_taken_0x3153ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3153ac) {
            ctx->pc = 0x3153C8u;
            goto label_3153c8;
        }
    }
    ctx->pc = 0x3153B4u;
label_3153b4:
    // 0x3153b4: 0xc075eb4  jal         func_1D7AD0
label_3153b8:
    if (ctx->pc == 0x3153B8u) {
        ctx->pc = 0x3153BCu;
        goto label_3153bc;
    }
    ctx->pc = 0x3153B4u;
    SET_GPR_U32(ctx, 31, 0x3153BCu);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3153BCu; }
        if (ctx->pc != 0x3153BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3153BCu; }
        if (ctx->pc != 0x3153BCu) { return; }
    }
    ctx->pc = 0x3153BCu;
label_3153bc:
    // 0x3153bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3153c0:
    if (ctx->pc == 0x3153C0u) {
        ctx->pc = 0x3153C4u;
        goto label_3153c4;
    }
    ctx->pc = 0x3153BCu;
    {
        const bool branch_taken_0x3153bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3153bc) {
            ctx->pc = 0x3153C8u;
            goto label_3153c8;
        }
    }
    ctx->pc = 0x3153C4u;
label_3153c4:
    // 0x3153c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3153c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3153c8:
    // 0x3153c8: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
label_3153cc:
    if (ctx->pc == 0x3153CCu) {
        ctx->pc = 0x3153CCu;
            // 0x3153cc: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->pc = 0x3153D0u;
        goto label_3153d0;
    }
    ctx->pc = 0x3153C8u;
    {
        const bool branch_taken_0x3153c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3153c8) {
            ctx->pc = 0x3153CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3153C8u;
            // 0x3153cc: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3153E8u;
            goto label_3153e8;
        }
    }
    ctx->pc = 0x3153D0u;
label_3153d0:
    // 0x3153d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3153d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3153d4:
    // 0x3153d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3153d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3153d8:
    // 0x3153d8: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x3153d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3153dc:
    // 0x3153dc: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_3153e0:
    if (ctx->pc == 0x3153E0u) {
        ctx->pc = 0x3153E0u;
            // 0x3153e0: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x3153E4u;
        goto label_3153e4;
    }
    ctx->pc = 0x3153DCu;
    {
        const bool branch_taken_0x3153dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3153dc) {
            ctx->pc = 0x3153E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3153DCu;
            // 0x3153e0: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315400u;
            goto label_315400;
        }
    }
    ctx->pc = 0x3153E4u;
label_3153e4:
    // 0x3153e4: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x3153e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_3153e8:
    // 0x3153e8: 0xc10c9d8  jal         func_432760
label_3153ec:
    if (ctx->pc == 0x3153ECu) {
        ctx->pc = 0x3153F0u;
        goto label_3153f0;
    }
    ctx->pc = 0x3153E8u;
    SET_GPR_U32(ctx, 31, 0x3153F0u);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3153F0u; }
        if (ctx->pc != 0x3153F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3153F0u; }
        if (ctx->pc != 0x3153F0u) { return; }
    }
    ctx->pc = 0x3153F0u;
label_3153f0:
    // 0x3153f0: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x3153f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_3153f4:
    // 0x3153f4: 0xc10c990  jal         func_432640
label_3153f8:
    if (ctx->pc == 0x3153F8u) {
        ctx->pc = 0x3153F8u;
            // 0x3153f8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x3153FCu;
        goto label_3153fc;
    }
    ctx->pc = 0x3153F4u;
    SET_GPR_U32(ctx, 31, 0x3153FCu);
    ctx->pc = 0x3153F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3153F4u;
            // 0x3153f8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432640u;
    if (runtime->hasFunction(0x432640u)) {
        auto targetFn = runtime->lookupFunction(0x432640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3153FCu; }
        if (ctx->pc != 0x3153FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432640_0x432640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3153FCu; }
        if (ctx->pc != 0x3153FCu) { return; }
    }
    ctx->pc = 0x3153FCu;
label_3153fc:
    // 0x3153fc: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3153fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_315400:
    // 0x315400: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_315404:
    if (ctx->pc == 0x315404u) {
        ctx->pc = 0x315404u;
            // 0x315404: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x315408u;
        goto label_315408;
    }
    ctx->pc = 0x315400u;
    {
        const bool branch_taken_0x315400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x315400) {
            ctx->pc = 0x315404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315400u;
            // 0x315404: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315454u;
            goto label_315454;
        }
    }
    ctx->pc = 0x315408u;
label_315408:
    // 0x315408: 0xc040180  jal         func_100600
label_31540c:
    if (ctx->pc == 0x31540Cu) {
        ctx->pc = 0x31540Cu;
            // 0x31540c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x315410u;
        goto label_315410;
    }
    ctx->pc = 0x315408u;
    SET_GPR_U32(ctx, 31, 0x315410u);
    ctx->pc = 0x31540Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315408u;
            // 0x31540c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315410u; }
        if (ctx->pc != 0x315410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315410u; }
        if (ctx->pc != 0x315410u) { return; }
    }
    ctx->pc = 0x315410u;
label_315410:
    // 0x315410: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_315414:
    if (ctx->pc == 0x315414u) {
        ctx->pc = 0x315414u;
            // 0x315414: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315418u;
        goto label_315418;
    }
    ctx->pc = 0x315410u;
    {
        const bool branch_taken_0x315410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315410u;
            // 0x315414: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315410) {
            ctx->pc = 0x31544Cu;
            goto label_31544c;
        }
    }
    ctx->pc = 0x315418u;
label_315418:
    // 0x315418: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x315418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_31541c:
    // 0x31541c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315420:
    // 0x315420: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x315420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_315424:
    // 0x315424: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x315424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315428:
    // 0x315428: 0xc10ca68  jal         func_4329A0
label_31542c:
    if (ctx->pc == 0x31542Cu) {
        ctx->pc = 0x31542Cu;
            // 0x31542c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315430u;
        goto label_315430;
    }
    ctx->pc = 0x315428u;
    SET_GPR_U32(ctx, 31, 0x315430u);
    ctx->pc = 0x31542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315428u;
            // 0x31542c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315430u; }
        if (ctx->pc != 0x315430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315430u; }
        if (ctx->pc != 0x315430u) { return; }
    }
    ctx->pc = 0x315430u;
label_315430:
    // 0x315430: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x315430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_315434:
    // 0x315434: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x315434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_315438:
    // 0x315438: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x315438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_31543c:
    // 0x31543c: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x31543cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_315440:
    // 0x315440: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x315440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_315444:
    // 0x315444: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x315444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_315448:
    // 0x315448: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x315448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_31544c:
    // 0x31544c: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x31544cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_315450:
    // 0x315450: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x315450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_315454:
    // 0x315454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315458:
    // 0x315458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31545c:
    // 0x31545c: 0x3e00008  jr          $ra
label_315460:
    if (ctx->pc == 0x315460u) {
        ctx->pc = 0x315460u;
            // 0x315460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x315464u;
        goto label_315464;
    }
    ctx->pc = 0x31545Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31545Cu;
            // 0x315460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x315464u;
label_315464:
    // 0x315464: 0x0  nop
    ctx->pc = 0x315464u;
    // NOP
label_315468:
    // 0x315468: 0x0  nop
    ctx->pc = 0x315468u;
    // NOP
label_31546c:
    // 0x31546c: 0x0  nop
    ctx->pc = 0x31546cu;
    // NOP
label_315470:
    // 0x315470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x315470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_315474:
    // 0x315474: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x315474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_315478:
    // 0x315478: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x315478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_31547c:
    // 0x31547c: 0x24a5ce30  addiu       $a1, $a1, -0x31D0
    ctx->pc = 0x31547cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
label_315480:
    // 0x315480: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x315480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_315484:
    // 0x315484: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x315484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_315488:
    // 0x315488: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x315488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31548c:
    // 0x31548c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31548cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_315490:
    // 0x315490: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x315490u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_315494:
    // 0x315494: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x315494u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_315498:
    // 0x315498: 0xc075728  jal         func_1D5CA0
label_31549c:
    if (ctx->pc == 0x31549Cu) {
        ctx->pc = 0x31549Cu;
            // 0x31549c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x3154A0u;
        goto label_3154a0;
    }
    ctx->pc = 0x315498u;
    SET_GPR_U32(ctx, 31, 0x3154A0u);
    ctx->pc = 0x31549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315498u;
            // 0x31549c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3154A0u; }
        if (ctx->pc != 0x3154A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3154A0u; }
        if (ctx->pc != 0x3154A0u) { return; }
    }
    ctx->pc = 0x3154A0u;
label_3154a0:
    // 0x3154a0: 0x54400097  bnel        $v0, $zero, . + 4 + (0x97 << 2)
label_3154a4:
    if (ctx->pc == 0x3154A4u) {
        ctx->pc = 0x3154A4u;
            // 0x3154a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3154A8u;
        goto label_3154a8;
    }
    ctx->pc = 0x3154A0u;
    {
        const bool branch_taken_0x3154a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3154a0) {
            ctx->pc = 0x3154A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3154A0u;
            // 0x3154a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315700u;
            goto label_315700;
        }
    }
    ctx->pc = 0x3154A8u;
label_3154a8:
    // 0x3154a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3154a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3154ac:
    // 0x3154ac: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3154acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3154b0:
    // 0x3154b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3154b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3154b4:
    // 0x3154b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3154b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3154b8:
    // 0x3154b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3154b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3154bc:
    // 0x3154bc: 0x8c850550  lw          $a1, 0x550($a0)
    ctx->pc = 0x3154bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_3154c0:
    // 0x3154c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3154c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3154c4:
    // 0x3154c4: 0x8c910d6c  lw          $s1, 0xD6C($a0)
    ctx->pc = 0x3154c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
label_3154c8:
    // 0x3154c8: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x3154c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3154cc:
    // 0x3154cc: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3154ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_3154d0:
    // 0x3154d0: 0x0  nop
    ctx->pc = 0x3154d0u;
    // NOP
label_3154d4:
    // 0x3154d4: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x3154d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_3154d8:
    // 0x3154d8: 0xc4820dec  lwc1        $f2, 0xDEC($a0)
    ctx->pc = 0x3154d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3154dc:
    // 0x3154dc: 0xc4800dbc  lwc1        $f0, 0xDBC($a0)
    ctx->pc = 0x3154dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3154e0:
    // 0x3154e0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x3154e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_3154e4:
    // 0x3154e4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3154e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3154e8:
    // 0x3154e8: 0x46020d1d  msub.s      $f20, $f1, $f2
    ctx->pc = 0x3154e8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3154ec:
    // 0x3154ec: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3154ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3154f0:
    // 0x3154f0: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x3154f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_3154f4:
    // 0x3154f4: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x3154f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3154f8:
    // 0x3154f8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3154f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3154fc:
    // 0x3154fc: 0x3c024265  lui         $v0, 0x4265
    ctx->pc = 0x3154fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16997 << 16));
label_315500:
    // 0x315500: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x315500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_315504:
    // 0x315504: 0x34432ee1  ori         $v1, $v0, 0x2EE1
    ctx->pc = 0x315504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12001);
label_315508:
    // 0x315508: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x315508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_31550c:
    // 0x31550c: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x31550cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_315510:
    // 0x315510: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x315510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_315514:
    // 0x315514: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x315514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_315518:
    // 0x315518: 0x46022818  adda.s      $f5, $f2
    ctx->pc = 0x315518u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_31551c:
    // 0x31551c: 0x4604189c  madd.s      $f2, $f3, $f4
    ctx->pc = 0x31551cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_315520:
    // 0x315520: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x315520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315524:
    // 0x315524: 0x0  nop
    ctx->pc = 0x315524u;
    // NOP
label_315528:
    // 0x315528: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x315528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_31552c:
    // 0x31552c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31552cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315530:
    // 0x315530: 0x0  nop
    ctx->pc = 0x315530u;
    // NOP
label_315534:
    // 0x315534: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x315534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315538:
    // 0x315538: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_31553c:
    if (ctx->pc == 0x31553Cu) {
        ctx->pc = 0x31553Cu;
            // 0x31553c: 0xe6420024  swc1        $f2, 0x24($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->pc = 0x315540u;
        goto label_315540;
    }
    ctx->pc = 0x315538u;
    {
        const bool branch_taken_0x315538 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31553Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315538u;
            // 0x31553c: 0xe6420024  swc1        $f2, 0x24($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315538) {
            ctx->pc = 0x315558u;
            goto label_315558;
        }
    }
    ctx->pc = 0x315540u;
label_315540:
    // 0x315540: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x315540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_315544:
    // 0x315544: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x315544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_315548:
    // 0x315548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31554c:
    // 0x31554c: 0x0  nop
    ctx->pc = 0x31554cu;
    // NOP
label_315550:
    // 0x315550: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x315550u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_315554:
    // 0x315554: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x315554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_315558:
    // 0x315558: 0xc6550024  lwc1        $f21, 0x24($s2)
    ctx->pc = 0x315558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_31555c:
    // 0x31555c: 0xc0477a8  jal         func_11DEA0
label_315560:
    if (ctx->pc == 0x315560u) {
        ctx->pc = 0x315560u;
            // 0x315560: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x315564u;
        goto label_315564;
    }
    ctx->pc = 0x31555Cu;
    SET_GPR_U32(ctx, 31, 0x315564u);
    ctx->pc = 0x315560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31555Cu;
            // 0x315560: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315564u; }
        if (ctx->pc != 0x315564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315564u; }
        if (ctx->pc != 0x315564u) { return; }
    }
    ctx->pc = 0x315564u;
label_315564:
    // 0x315564: 0x3c024563  lui         $v0, 0x4563
    ctx->pc = 0x315564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17763 << 16));
label_315568:
    // 0x315568: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x315568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_31556c:
    // 0x31556c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31556cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_315570:
    // 0x315570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x315570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315574:
    // 0x315574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315578:
    // 0x315578: 0x0  nop
    ctx->pc = 0x315578u;
    // NOP
label_31557c:
    // 0x31557c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31557cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_315580:
    // 0x315580: 0x4600a582  mul.s       $f22, $f20, $f0
    ctx->pc = 0x315580u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_315584:
    // 0x315584: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315584u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_315588:
    // 0x315588: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x315588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_31558c:
    // 0x31558c: 0xc04cab0  jal         func_132AC0
label_315590:
    if (ctx->pc == 0x315590u) {
        ctx->pc = 0x315590u;
            // 0x315590: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315594u;
        goto label_315594;
    }
    ctx->pc = 0x31558Cu;
    SET_GPR_U32(ctx, 31, 0x315594u);
    ctx->pc = 0x315590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31558Cu;
            // 0x315590: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315594u; }
        if (ctx->pc != 0x315594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315594u; }
        if (ctx->pc != 0x315594u) { return; }
    }
    ctx->pc = 0x315594u;
label_315594:
    // 0x315594: 0x8e390054  lw          $t9, 0x54($s1)
    ctx->pc = 0x315594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_315598:
    // 0x315598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31559c:
    // 0x31559c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x31559cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3155a0:
    // 0x3155a0: 0x320f809  jalr        $t9
label_3155a4:
    if (ctx->pc == 0x3155A4u) {
        ctx->pc = 0x3155A4u;
            // 0x3155a4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x3155A8u;
        goto label_3155a8;
    }
    ctx->pc = 0x3155A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3155A8u);
        ctx->pc = 0x3155A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3155A0u;
            // 0x3155a4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3155A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3155A8u; }
            if (ctx->pc != 0x3155A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3155A8u;
label_3155a8:
    // 0x3155a8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3155a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_3155ac:
    // 0x3155ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3155acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3155b0:
    // 0x3155b0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3155b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3155b4:
    // 0x3155b4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3155b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3155b8:
    // 0x3155b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3155b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3155bc:
    // 0x3155bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3155bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3155c0:
    // 0x3155c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3155c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3155c4:
    // 0x3155c4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3155c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3155c8:
    // 0x3155c8: 0xc04c72c  jal         func_131CB0
label_3155cc:
    if (ctx->pc == 0x3155CCu) {
        ctx->pc = 0x3155CCu;
            // 0x3155cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3155D0u;
        goto label_3155d0;
    }
    ctx->pc = 0x3155C8u;
    SET_GPR_U32(ctx, 31, 0x3155D0u);
    ctx->pc = 0x3155CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3155C8u;
            // 0x3155cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3155D0u; }
        if (ctx->pc != 0x3155D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3155D0u; }
        if (ctx->pc != 0x3155D0u) { return; }
    }
    ctx->pc = 0x3155D0u;
label_3155d0:
    // 0x3155d0: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x3155d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
label_3155d4:
    // 0x3155d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3155d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3155d8:
    // 0x3155d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3155d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3155dc:
    // 0x3155dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3155dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3155e0:
    // 0x3155e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3155e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3155e4:
    // 0x3155e4: 0xc04cab0  jal         func_132AC0
label_3155e8:
    if (ctx->pc == 0x3155E8u) {
        ctx->pc = 0x3155E8u;
            // 0x3155e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3155ECu;
        goto label_3155ec;
    }
    ctx->pc = 0x3155E4u;
    SET_GPR_U32(ctx, 31, 0x3155ECu);
    ctx->pc = 0x3155E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3155E4u;
            // 0x3155e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3155ECu; }
        if (ctx->pc != 0x3155ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3155ECu; }
        if (ctx->pc != 0x3155ECu) { return; }
    }
    ctx->pc = 0x3155ECu;
label_3155ec:
    // 0x3155ec: 0x8e390054  lw          $t9, 0x54($s1)
    ctx->pc = 0x3155ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3155f0:
    // 0x3155f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3155f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3155f4:
    // 0x3155f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3155f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3155f8:
    // 0x3155f8: 0x320f809  jalr        $t9
label_3155fc:
    if (ctx->pc == 0x3155FCu) {
        ctx->pc = 0x3155FCu;
            // 0x3155fc: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->pc = 0x315600u;
        goto label_315600;
    }
    ctx->pc = 0x3155F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315600u);
        ctx->pc = 0x3155FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3155F8u;
            // 0x3155fc: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315600u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315600u; }
            if (ctx->pc != 0x315600u) { return; }
        }
        }
    }
    ctx->pc = 0x315600u;
label_315600:
    // 0x315600: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x315600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_315604:
    // 0x315604: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x315604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_315608:
    // 0x315608: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x315608u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_31560c:
    // 0x31560c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31560cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_315610:
    // 0x315610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_315614:
    // 0x315614: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x315614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_315618:
    // 0x315618: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x315618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31561c:
    // 0x31561c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x31561cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_315620:
    // 0x315620: 0xc04c72c  jal         func_131CB0
label_315624:
    if (ctx->pc == 0x315624u) {
        ctx->pc = 0x315624u;
            // 0x315624: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315628u;
        goto label_315628;
    }
    ctx->pc = 0x315620u;
    SET_GPR_U32(ctx, 31, 0x315628u);
    ctx->pc = 0x315624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315620u;
            // 0x315624: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315628u; }
        if (ctx->pc != 0x315628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315628u; }
        if (ctx->pc != 0x315628u) { return; }
    }
    ctx->pc = 0x315628u;
label_315628:
    // 0x315628: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x315628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
label_31562c:
    // 0x31562c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31562cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315630:
    // 0x315630: 0xc0477a8  jal         func_11DEA0
label_315634:
    if (ctx->pc == 0x315634u) {
        ctx->pc = 0x315634u;
            // 0x315634: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x315638u;
        goto label_315638;
    }
    ctx->pc = 0x315630u;
    SET_GPR_U32(ctx, 31, 0x315638u);
    ctx->pc = 0x315634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315630u;
            // 0x315634: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315638u; }
        if (ctx->pc != 0x315638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315638u; }
        if (ctx->pc != 0x315638u) { return; }
    }
    ctx->pc = 0x315638u;
label_315638:
    // 0x315638: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x315638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_31563c:
    // 0x31563c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31563cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_315640:
    // 0x315640: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x315640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_315644:
    // 0x315644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x315644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315648:
    // 0x315648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31564c:
    // 0x31564c: 0x0  nop
    ctx->pc = 0x31564cu;
    // NOP
label_315650:
    // 0x315650: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_315654:
    // 0x315654: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x315654u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_315658:
    // 0x315658: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315658u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_31565c:
    // 0x31565c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x31565cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_315660:
    // 0x315660: 0xc04cab0  jal         func_132AC0
label_315664:
    if (ctx->pc == 0x315664u) {
        ctx->pc = 0x315664u;
            // 0x315664: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315668u;
        goto label_315668;
    }
    ctx->pc = 0x315660u;
    SET_GPR_U32(ctx, 31, 0x315668u);
    ctx->pc = 0x315664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315660u;
            // 0x315664: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315668u; }
        if (ctx->pc != 0x315668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315668u; }
        if (ctx->pc != 0x315668u) { return; }
    }
    ctx->pc = 0x315668u;
label_315668:
    // 0x315668: 0x8e390054  lw          $t9, 0x54($s1)
    ctx->pc = 0x315668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_31566c:
    // 0x31566c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315670:
    // 0x315670: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x315670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_315674:
    // 0x315674: 0x320f809  jalr        $t9
label_315678:
    if (ctx->pc == 0x315678u) {
        ctx->pc = 0x315678u;
            // 0x315678: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x31567Cu;
        goto label_31567c;
    }
    ctx->pc = 0x315674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31567Cu);
        ctx->pc = 0x315678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315674u;
            // 0x315678: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31567Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31567Cu; }
            if (ctx->pc != 0x31567Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31567Cu;
label_31567c:
    // 0x31567c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x31567cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_315680:
    // 0x315680: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x315680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_315684:
    // 0x315684: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x315684u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_315688:
    // 0x315688: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x315688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_31568c:
    // 0x31568c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_315690:
    // 0x315690: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x315690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_315694:
    // 0x315694: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x315694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_315698:
    // 0x315698: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x315698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_31569c:
    // 0x31569c: 0xc04c72c  jal         func_131CB0
label_3156a0:
    if (ctx->pc == 0x3156A0u) {
        ctx->pc = 0x3156A0u;
            // 0x3156a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3156A4u;
        goto label_3156a4;
    }
    ctx->pc = 0x31569Cu;
    SET_GPR_U32(ctx, 31, 0x3156A4u);
    ctx->pc = 0x3156A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31569Cu;
            // 0x3156a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3156A4u; }
        if (ctx->pc != 0x3156A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3156A4u; }
        if (ctx->pc != 0x3156A4u) { return; }
    }
    ctx->pc = 0x3156A4u;
label_3156a4:
    // 0x3156a4: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x3156a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_3156a8:
    // 0x3156a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3156a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3156ac:
    // 0x3156ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3156acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3156b0:
    // 0x3156b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3156b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3156b4:
    // 0x3156b4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3156b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3156b8:
    // 0x3156b8: 0xc04cab0  jal         func_132AC0
label_3156bc:
    if (ctx->pc == 0x3156BCu) {
        ctx->pc = 0x3156BCu;
            // 0x3156bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3156C0u;
        goto label_3156c0;
    }
    ctx->pc = 0x3156B8u;
    SET_GPR_U32(ctx, 31, 0x3156C0u);
    ctx->pc = 0x3156BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3156B8u;
            // 0x3156bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3156C0u; }
        if (ctx->pc != 0x3156C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3156C0u; }
        if (ctx->pc != 0x3156C0u) { return; }
    }
    ctx->pc = 0x3156C0u;
label_3156c0:
    // 0x3156c0: 0x8e390054  lw          $t9, 0x54($s1)
    ctx->pc = 0x3156c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3156c4:
    // 0x3156c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3156c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3156c8:
    // 0x3156c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3156c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3156cc:
    // 0x3156cc: 0x320f809  jalr        $t9
label_3156d0:
    if (ctx->pc == 0x3156D0u) {
        ctx->pc = 0x3156D0u;
            // 0x3156d0: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x3156D4u;
        goto label_3156d4;
    }
    ctx->pc = 0x3156CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3156D4u);
        ctx->pc = 0x3156D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3156CCu;
            // 0x3156d0: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3156D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3156D4u; }
            if (ctx->pc != 0x3156D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3156D4u;
label_3156d4:
    // 0x3156d4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3156d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_3156d8:
    // 0x3156d8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3156d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3156dc:
    // 0x3156dc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3156dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3156e0:
    // 0x3156e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3156e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3156e4:
    // 0x3156e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3156e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3156e8:
    // 0x3156e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3156e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3156ec:
    // 0x3156ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3156ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3156f0:
    // 0x3156f0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3156f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3156f4:
    // 0x3156f4: 0xc04c72c  jal         func_131CB0
label_3156f8:
    if (ctx->pc == 0x3156F8u) {
        ctx->pc = 0x3156F8u;
            // 0x3156f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3156FCu;
        goto label_3156fc;
    }
    ctx->pc = 0x3156F4u;
    SET_GPR_U32(ctx, 31, 0x3156FCu);
    ctx->pc = 0x3156F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3156F4u;
            // 0x3156f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3156FCu; }
        if (ctx->pc != 0x3156FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3156FCu; }
        if (ctx->pc != 0x3156FCu) { return; }
    }
    ctx->pc = 0x3156FCu;
label_3156fc:
    // 0x3156fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3156fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_315700:
    // 0x315700: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x315700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_315704:
    // 0x315704: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x315704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_315708:
    // 0x315708: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x315708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_31570c:
    // 0x31570c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31570cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_315710:
    // 0x315710: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x315710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_315714:
    // 0x315714: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315718:
    // 0x315718: 0x3e00008  jr          $ra
label_31571c:
    if (ctx->pc == 0x31571Cu) {
        ctx->pc = 0x31571Cu;
            // 0x31571c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x315720u;
        goto label_315720;
    }
    ctx->pc = 0x315718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315718u;
            // 0x31571c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x315720u;
label_315720:
    // 0x315720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x315720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_315724:
    // 0x315724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x315724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_315728:
    // 0x315728: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x315728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31572c:
    // 0x31572c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31572cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_315730:
    // 0x315730: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x315730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_315734:
    // 0x315734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x315734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315738:
    // 0x315738: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x315738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_31573c:
    // 0x31573c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x31573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_315740:
    // 0x315740: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x315740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_315744:
    // 0x315744: 0x2484f740  addiu       $a0, $a0, -0x8C0
    ctx->pc = 0x315744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965056));
label_315748:
    // 0x315748: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x315748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31574c:
    // 0x31574c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x31574cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_315750:
    // 0x315750: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x315750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_315754:
    // 0x315754: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x315754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_315758:
    // 0x315758: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x315758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_31575c:
    // 0x31575c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x31575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_315760:
    // 0x315760: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x315760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_315764:
    // 0x315764: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x315764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_315768:
    // 0x315768: 0xc075128  jal         func_1D44A0
label_31576c:
    if (ctx->pc == 0x31576Cu) {
        ctx->pc = 0x31576Cu;
            // 0x31576c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x315770u;
        goto label_315770;
    }
    ctx->pc = 0x315768u;
    SET_GPR_U32(ctx, 31, 0x315770u);
    ctx->pc = 0x31576Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315768u;
            // 0x31576c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315770u; }
        if (ctx->pc != 0x315770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315770u; }
        if (ctx->pc != 0x315770u) { return; }
    }
    ctx->pc = 0x315770u;
label_315770:
    // 0x315770: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x315770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_315774:
    // 0x315774: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x315774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_315778:
    // 0x315778: 0x8c86f740  lw          $a2, -0x8C0($a0)
    ctx->pc = 0x315778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965056)));
label_31577c:
    // 0x31577c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x31577cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_315780:
    // 0x315780: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x315780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_315784:
    // 0x315784: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x315784u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_315788:
    // 0x315788: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31578c:
    if (ctx->pc == 0x31578Cu) {
        ctx->pc = 0x315790u;
        goto label_315790;
    }
    ctx->pc = 0x315788u;
    {
        const bool branch_taken_0x315788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x315788) {
            ctx->pc = 0x315798u;
            goto label_315798;
        }
    }
    ctx->pc = 0x315790u;
label_315790:
    // 0x315790: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x315790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_315794:
    // 0x315794: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x315794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_315798:
    // 0x315798: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x315798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31579c:
    // 0x31579c: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x31579cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_3157a0:
    // 0x3157a0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3157a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3157a4:
    // 0x3157a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3157a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3157a8:
    // 0x3157a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3157ac:
    if (ctx->pc == 0x3157ACu) {
        ctx->pc = 0x3157ACu;
            // 0x3157ac: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x3157B0u;
        goto label_3157b0;
    }
    ctx->pc = 0x3157A8u;
    {
        const bool branch_taken_0x3157a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3157ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3157A8u;
            // 0x3157ac: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3157a8) {
            ctx->pc = 0x3157B8u;
            goto label_3157b8;
        }
    }
    ctx->pc = 0x3157B0u;
label_3157b0:
    // 0x3157b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3157b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3157b4:
    // 0x3157b4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3157b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3157b8:
    // 0x3157b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3157b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3157bc:
    // 0x3157bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3157bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3157c0:
    // 0x3157c0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3157c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3157c4:
    // 0x3157c4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3157c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3157c8:
    // 0x3157c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3157cc:
    if (ctx->pc == 0x3157CCu) {
        ctx->pc = 0x3157D0u;
        goto label_3157d0;
    }
    ctx->pc = 0x3157C8u;
    {
        const bool branch_taken_0x3157c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3157c8) {
            ctx->pc = 0x3157D8u;
            goto label_3157d8;
        }
    }
    ctx->pc = 0x3157D0u;
label_3157d0:
    // 0x3157d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3157d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3157d4:
    // 0x3157d4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3157d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3157d8:
    // 0x3157d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3157d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3157dc:
    // 0x3157dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3157dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3157e0:
    // 0x3157e0: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x3157e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_3157e4:
    // 0x3157e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3157e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3157e8:
    // 0x3157e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3157ec:
    if (ctx->pc == 0x3157ECu) {
        ctx->pc = 0x3157F0u;
        goto label_3157f0;
    }
    ctx->pc = 0x3157E8u;
    {
        const bool branch_taken_0x3157e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3157e8) {
            ctx->pc = 0x3157F8u;
            goto label_3157f8;
        }
    }
    ctx->pc = 0x3157F0u;
label_3157f0:
    // 0x3157f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3157f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3157f4:
    // 0x3157f4: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x3157f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_3157f8:
    // 0x3157f8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3157f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3157fc:
    // 0x3157fc: 0x8c63f5b8  lw          $v1, -0xA48($v1)
    ctx->pc = 0x3157fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964664)));
label_315800:
    // 0x315800: 0x54600038  bnel        $v1, $zero, . + 4 + (0x38 << 2)
label_315804:
    if (ctx->pc == 0x315804u) {
        ctx->pc = 0x315804u;
            // 0x315804: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x315808u;
        goto label_315808;
    }
    ctx->pc = 0x315800u;
    {
        const bool branch_taken_0x315800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x315800) {
            ctx->pc = 0x315804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315800u;
            // 0x315804: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3158E4u;
            goto label_3158e4;
        }
    }
    ctx->pc = 0x315808u;
label_315808:
    // 0x315808: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x315808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_31580c:
    // 0x31580c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x31580cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_315810:
    // 0x315810: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x315810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_315814:
    // 0x315814: 0x2484f5b8  addiu       $a0, $a0, -0xA48
    ctx->pc = 0x315814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964664));
label_315818:
    // 0x315818: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x315818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31581c:
    // 0x31581c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x31581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_315820:
    // 0x315820: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x315820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_315824:
    // 0x315824: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x315824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_315828:
    // 0x315828: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x315828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_31582c:
    // 0x31582c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_315830:
    // 0x315830: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x315830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_315834:
    // 0x315834: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x315834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_315838:
    // 0x315838: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x315838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31583c:
    // 0x31583c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x31583cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_315840:
    // 0x315840: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x315840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_315844:
    // 0x315844: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x315844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_315848:
    // 0x315848: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x315848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_31584c:
    // 0x31584c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x31584cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_315850:
    // 0x315850: 0xc075128  jal         func_1D44A0
label_315854:
    if (ctx->pc == 0x315854u) {
        ctx->pc = 0x315854u;
            // 0x315854: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x315858u;
        goto label_315858;
    }
    ctx->pc = 0x315850u;
    SET_GPR_U32(ctx, 31, 0x315858u);
    ctx->pc = 0x315854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315850u;
            // 0x315854: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315858u; }
        if (ctx->pc != 0x315858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315858u; }
        if (ctx->pc != 0x315858u) { return; }
    }
    ctx->pc = 0x315858u;
label_315858:
    // 0x315858: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x315858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_31585c:
    // 0x31585c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x31585cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_315860:
    // 0x315860: 0x8c86f5b8  lw          $a2, -0xA48($a0)
    ctx->pc = 0x315860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964664)));
label_315864:
    // 0x315864: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x315864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_315868:
    // 0x315868: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x315868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_31586c:
    // 0x31586c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x31586cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_315870:
    // 0x315870: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_315874:
    if (ctx->pc == 0x315874u) {
        ctx->pc = 0x315878u;
        goto label_315878;
    }
    ctx->pc = 0x315870u;
    {
        const bool branch_taken_0x315870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x315870) {
            ctx->pc = 0x315880u;
            goto label_315880;
        }
    }
    ctx->pc = 0x315878u;
label_315878:
    // 0x315878: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x315878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31587c:
    // 0x31587c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x31587cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_315880:
    // 0x315880: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x315880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_315884:
    // 0x315884: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x315884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_315888:
    // 0x315888: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x315888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_31588c:
    // 0x31588c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x31588cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_315890:
    // 0x315890: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_315894:
    if (ctx->pc == 0x315894u) {
        ctx->pc = 0x315894u;
            // 0x315894: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x315898u;
        goto label_315898;
    }
    ctx->pc = 0x315890u;
    {
        const bool branch_taken_0x315890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x315894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315890u;
            // 0x315894: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315890) {
            ctx->pc = 0x3158A0u;
            goto label_3158a0;
        }
    }
    ctx->pc = 0x315898u;
label_315898:
    // 0x315898: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x315898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31589c:
    // 0x31589c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x31589cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3158a0:
    // 0x3158a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3158a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3158a4:
    // 0x3158a4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3158a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3158a8:
    // 0x3158a8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3158a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3158ac:
    // 0x3158ac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3158acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3158b0:
    // 0x3158b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3158b4:
    if (ctx->pc == 0x3158B4u) {
        ctx->pc = 0x3158B8u;
        goto label_3158b8;
    }
    ctx->pc = 0x3158B0u;
    {
        const bool branch_taken_0x3158b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3158b0) {
            ctx->pc = 0x3158C0u;
            goto label_3158c0;
        }
    }
    ctx->pc = 0x3158B8u;
label_3158b8:
    // 0x3158b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3158b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3158bc:
    // 0x3158bc: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3158bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3158c0:
    // 0x3158c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3158c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3158c4:
    // 0x3158c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3158c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3158c8:
    // 0x3158c8: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x3158c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_3158cc:
    // 0x3158cc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3158ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3158d0:
    // 0x3158d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3158d4:
    if (ctx->pc == 0x3158D4u) {
        ctx->pc = 0x3158D8u;
        goto label_3158d8;
    }
    ctx->pc = 0x3158D0u;
    {
        const bool branch_taken_0x3158d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3158d0) {
            ctx->pc = 0x3158E0u;
            goto label_3158e0;
        }
    }
    ctx->pc = 0x3158D8u;
label_3158d8:
    // 0x3158d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3158d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3158dc:
    // 0x3158dc: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x3158dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_3158e0:
    // 0x3158e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3158e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3158e4:
    // 0x3158e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3158e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3158e8:
    // 0x3158e8: 0x3e00008  jr          $ra
label_3158ec:
    if (ctx->pc == 0x3158ECu) {
        ctx->pc = 0x3158ECu;
            // 0x3158ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3158F0u;
        goto label_3158f0;
    }
    ctx->pc = 0x3158E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3158ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3158E8u;
            // 0x3158ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3158F0u;
label_3158f0:
    // 0x3158f0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3158f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_3158f4:
    // 0x3158f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3158f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3158f8:
    // 0x3158f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3158f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3158fc:
    // 0x3158fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3158fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_315900:
    // 0x315900: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x315900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_315904:
    // 0x315904: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x315904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315908:
    // 0x315908: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x315908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31590c:
    // 0x31590c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_315910:
    // 0x315910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_315914:
    // 0x315914: 0xc075740  jal         func_1D5D00
label_315918:
    if (ctx->pc == 0x315918u) {
        ctx->pc = 0x315918u;
            // 0x315918: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x31591Cu;
        goto label_31591c;
    }
    ctx->pc = 0x315914u;
    SET_GPR_U32(ctx, 31, 0x31591Cu);
    ctx->pc = 0x315918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315914u;
            // 0x315918: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D00u;
    if (runtime->hasFunction(0x1D5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31591Cu; }
        if (ctx->pc != 0x31591Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5D00_0x1d5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31591Cu; }
        if (ctx->pc != 0x31591Cu) { return; }
    }
    ctx->pc = 0x31591Cu;
label_31591c:
    // 0x31591c: 0x8eb10008  lw          $s1, 0x8($s5)
    ctx->pc = 0x31591cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_315920:
    // 0x315920: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x315920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_315924:
    // 0x315924: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x315924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_315928:
    // 0x315928: 0x5483006e  bnel        $a0, $v1, . + 4 + (0x6E << 2)
label_31592c:
    if (ctx->pc == 0x31592Cu) {
        ctx->pc = 0x31592Cu;
            // 0x31592c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x315930u;
        goto label_315930;
    }
    ctx->pc = 0x315928u;
    {
        const bool branch_taken_0x315928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x315928) {
            ctx->pc = 0x31592Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315928u;
            // 0x31592c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315AE4u;
            goto label_315ae4;
        }
    }
    ctx->pc = 0x315930u;
label_315930:
    // 0x315930: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x315930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_315934:
    // 0x315934: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x315934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_315938:
    // 0x315938: 0x8c53e370  lw          $s3, -0x1C90($v0)
    ctx->pc = 0x315938u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_31593c:
    // 0x31593c: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x31593cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_315940:
    // 0x315940: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x315940u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_315944:
    // 0x315944: 0x2610f740  addiu       $s0, $s0, -0x8C0
    ctx->pc = 0x315944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965056));
label_315948:
    // 0x315948: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x315948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_31594c:
    // 0x31594c: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x31594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_315950:
    // 0x315950: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x315950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_315954:
    // 0x315954: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x315954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_315958:
    // 0x315958: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x315958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_31595c:
    // 0x31595c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x31595cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_315960:
    // 0x315960: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x315960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_315964:
    // 0x315964: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x315964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_315968:
    // 0x315968: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x315968u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_31596c:
    // 0x31596c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_315970:
    // 0x315970: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x315970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_315974:
    // 0x315974: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x315974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_315978:
    // 0x315978: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x315978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_31597c:
    // 0x31597c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_315980:
    if (ctx->pc == 0x315980u) {
        ctx->pc = 0x315980u;
            // 0x315980: 0x24760010  addiu       $s6, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x315984u;
        goto label_315984;
    }
    ctx->pc = 0x31597Cu;
    {
        const bool branch_taken_0x31597c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x315980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31597Cu;
            // 0x315980: 0x24760010  addiu       $s6, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31597c) {
            ctx->pc = 0x315990u;
            goto label_315990;
        }
    }
    ctx->pc = 0x315984u;
label_315984:
    // 0x315984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315988:
    // 0x315988: 0x10000008  b           . + 4 + (0x8 << 2)
label_31598c:
    if (ctx->pc == 0x31598Cu) {
        ctx->pc = 0x31598Cu;
            // 0x31598c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x315990u;
        goto label_315990;
    }
    ctx->pc = 0x315988u;
    {
        const bool branch_taken_0x315988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31598Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315988u;
            // 0x31598c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315988) {
            ctx->pc = 0x3159ACu;
            goto label_3159ac;
        }
    }
    ctx->pc = 0x315990u;
label_315990:
    // 0x315990: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x315990u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_315994:
    // 0x315994: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x315994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_315998:
    // 0x315998: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x315998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31599c:
    // 0x31599c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31599cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3159a0:
    // 0x3159a0: 0x0  nop
    ctx->pc = 0x3159a0u;
    // NOP
label_3159a4:
    // 0x3159a4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3159a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3159a8:
    // 0x3159a8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3159a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3159ac:
    // 0x3159ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3159acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3159b0:
    // 0x3159b0: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x3159b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_3159b4:
    // 0x3159b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3159b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3159b8:
    // 0x3159b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3159b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3159bc:
    // 0x3159bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3159bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3159c0:
    // 0x3159c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3159c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3159c4:
    // 0x3159c4: 0x0  nop
    ctx->pc = 0x3159c4u;
    // NOP
label_3159c8:
    // 0x3159c8: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x3159c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_3159cc:
    // 0x3159cc: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x3159ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_3159d0:
    // 0x3159d0: 0xc04f3f4  jal         func_13CFD0
label_3159d4:
    if (ctx->pc == 0x3159D4u) {
        ctx->pc = 0x3159D4u;
            // 0x3159d4: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x3159D8u;
        goto label_3159d8;
    }
    ctx->pc = 0x3159D0u;
    SET_GPR_U32(ctx, 31, 0x3159D8u);
    ctx->pc = 0x3159D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3159D0u;
            // 0x3159d4: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3159D8u; }
        if (ctx->pc != 0x3159D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3159D8u; }
        if (ctx->pc != 0x3159D8u) { return; }
    }
    ctx->pc = 0x3159D8u;
label_3159d8:
    // 0x3159d8: 0x8eb90054  lw          $t9, 0x54($s5)
    ctx->pc = 0x3159d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3159dc:
    // 0x3159dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3159dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3159e0:
    // 0x3159e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3159e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3159e4:
    // 0x3159e4: 0x320f809  jalr        $t9
label_3159e8:
    if (ctx->pc == 0x3159E8u) {
        ctx->pc = 0x3159E8u;
            // 0x3159e8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3159ECu;
        goto label_3159ec;
    }
    ctx->pc = 0x3159E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3159ECu);
        ctx->pc = 0x3159E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3159E4u;
            // 0x3159e8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3159ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3159ECu; }
            if (ctx->pc != 0x3159ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3159ECu;
label_3159ec:
    // 0x3159ec: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x3159ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
label_3159f0:
    // 0x3159f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3159f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3159f4:
    // 0x3159f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3159f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3159f8:
    // 0x3159f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3159f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3159fc:
    // 0x3159fc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3159fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_315a00:
    // 0x315a00: 0xc04e4a4  jal         func_139290
label_315a04:
    if (ctx->pc == 0x315A04u) {
        ctx->pc = 0x315A04u;
            // 0x315a04: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->pc = 0x315A08u;
        goto label_315a08;
    }
    ctx->pc = 0x315A00u;
    SET_GPR_U32(ctx, 31, 0x315A08u);
    ctx->pc = 0x315A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315A00u;
            // 0x315a04: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A08u; }
        if (ctx->pc != 0x315A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A08u; }
        if (ctx->pc != 0x315A08u) { return; }
    }
    ctx->pc = 0x315A08u;
label_315a08:
    // 0x315a08: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x315a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_315a0c:
    // 0x315a0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x315a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315a10:
    // 0x315a10: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x315a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_315a14:
    // 0x315a14: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x315a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_315a18:
    // 0x315a18: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x315a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_315a1c:
    // 0x315a1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x315a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_315a20:
    // 0x315a20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_315a24:
    // 0x315a24: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x315a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_315a28:
    // 0x315a28: 0xc0517b0  jal         func_145EC0
label_315a2c:
    if (ctx->pc == 0x315A2Cu) {
        ctx->pc = 0x315A2Cu;
            // 0x315a2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315A30u;
        goto label_315a30;
    }
    ctx->pc = 0x315A28u;
    SET_GPR_U32(ctx, 31, 0x315A30u);
    ctx->pc = 0x315A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315A28u;
            // 0x315a2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A30u; }
        if (ctx->pc != 0x315A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EC0_0x145ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A30u; }
        if (ctx->pc != 0x315A30u) { return; }
    }
    ctx->pc = 0x315A30u;
label_315a30:
    // 0x315a30: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x315a30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_315a34:
    // 0x315a34: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x315a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_315a38:
    // 0x315a38: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x315a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_315a3c:
    // 0x315a3c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x315a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_315a40:
    // 0x315a40: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x315a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_315a44:
    // 0x315a44: 0xc04cd60  jal         func_133580
label_315a48:
    if (ctx->pc == 0x315A48u) {
        ctx->pc = 0x315A48u;
            // 0x315a48: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x315A4Cu;
        goto label_315a4c;
    }
    ctx->pc = 0x315A44u;
    SET_GPR_U32(ctx, 31, 0x315A4Cu);
    ctx->pc = 0x315A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315A44u;
            // 0x315a48: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A4Cu; }
        if (ctx->pc != 0x315A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A4Cu; }
        if (ctx->pc != 0x315A4Cu) { return; }
    }
    ctx->pc = 0x315A4Cu;
label_315a4c:
    // 0x315a4c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x315a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_315a50:
    // 0x315a50: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x315a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_315a54:
    // 0x315a54: 0xc04cd60  jal         func_133580
label_315a58:
    if (ctx->pc == 0x315A58u) {
        ctx->pc = 0x315A58u;
            // 0x315a58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315A5Cu;
        goto label_315a5c;
    }
    ctx->pc = 0x315A54u;
    SET_GPR_U32(ctx, 31, 0x315A5Cu);
    ctx->pc = 0x315A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315A54u;
            // 0x315a58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A5Cu; }
        if (ctx->pc != 0x315A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A5Cu; }
        if (ctx->pc != 0x315A5Cu) { return; }
    }
    ctx->pc = 0x315A5Cu;
label_315a5c:
    // 0x315a5c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x315a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_315a60:
    // 0x315a60: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x315a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_315a64:
    // 0x315a64: 0xc04cd60  jal         func_133580
label_315a68:
    if (ctx->pc == 0x315A68u) {
        ctx->pc = 0x315A68u;
            // 0x315a68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315A6Cu;
        goto label_315a6c;
    }
    ctx->pc = 0x315A64u;
    SET_GPR_U32(ctx, 31, 0x315A6Cu);
    ctx->pc = 0x315A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315A64u;
            // 0x315a68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A6Cu; }
        if (ctx->pc != 0x315A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A6Cu; }
        if (ctx->pc != 0x315A6Cu) { return; }
    }
    ctx->pc = 0x315A6Cu;
label_315a6c:
    // 0x315a6c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x315a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_315a70:
    // 0x315a70: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x315a70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_315a74:
    // 0x315a74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x315a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315a78:
    // 0x315a78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x315a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315a7c:
    // 0x315a7c: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x315a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_315a80:
    // 0x315a80: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x315a80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_315a84:
    // 0x315a84: 0xc04cfcc  jal         func_133F30
label_315a88:
    if (ctx->pc == 0x315A88u) {
        ctx->pc = 0x315A88u;
            // 0x315a88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315A8Cu;
        goto label_315a8c;
    }
    ctx->pc = 0x315A84u;
    SET_GPR_U32(ctx, 31, 0x315A8Cu);
    ctx->pc = 0x315A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315A84u;
            // 0x315a88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A8Cu; }
        if (ctx->pc != 0x315A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A8Cu; }
        if (ctx->pc != 0x315A8Cu) { return; }
    }
    ctx->pc = 0x315A8Cu;
label_315a8c:
    // 0x315a8c: 0xc04e738  jal         func_139CE0
label_315a90:
    if (ctx->pc == 0x315A90u) {
        ctx->pc = 0x315A90u;
            // 0x315a90: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x315A94u;
        goto label_315a94;
    }
    ctx->pc = 0x315A8Cu;
    SET_GPR_U32(ctx, 31, 0x315A94u);
    ctx->pc = 0x315A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315A8Cu;
            // 0x315a90: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A94u; }
        if (ctx->pc != 0x315A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315A94u; }
        if (ctx->pc != 0x315A94u) { return; }
    }
    ctx->pc = 0x315A94u;
label_315a94:
    // 0x315a94: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x315a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_315a98:
    // 0x315a98: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x315a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_315a9c:
    // 0x315a9c: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x315a9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_315aa0:
    // 0x315aa0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x315aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_315aa4:
    // 0x315aa4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x315aa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_315aa8:
    // 0x315aa8: 0x34180  sll         $t0, $v1, 6
    ctx->pc = 0x315aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_315aac:
    // 0x315aac: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x315aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_315ab0:
    // 0x315ab0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_315ab4:
    if (ctx->pc == 0x315AB4u) {
        ctx->pc = 0x315AB4u;
            // 0x315ab4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x315AB8u;
        goto label_315ab8;
    }
    ctx->pc = 0x315AB0u;
    {
        const bool branch_taken_0x315ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315AB0u;
            // 0x315ab4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ab0) {
            ctx->pc = 0x315AD0u;
            goto label_315ad0;
        }
    }
    ctx->pc = 0x315AB8u;
label_315ab8:
    // 0x315ab8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x315ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315abc:
    // 0x315abc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x315abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315ac0:
    // 0x315ac0: 0xc0538d8  jal         func_14E360
label_315ac4:
    if (ctx->pc == 0x315AC4u) {
        ctx->pc = 0x315AC4u;
            // 0x315ac4: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x315AC8u;
        goto label_315ac8;
    }
    ctx->pc = 0x315AC0u;
    SET_GPR_U32(ctx, 31, 0x315AC8u);
    ctx->pc = 0x315AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315AC0u;
            // 0x315ac4: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315AC8u; }
        if (ctx->pc != 0x315AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315AC8u; }
        if (ctx->pc != 0x315AC8u) { return; }
    }
    ctx->pc = 0x315AC8u;
label_315ac8:
    // 0x315ac8: 0x10000005  b           . + 4 + (0x5 << 2)
label_315acc:
    if (ctx->pc == 0x315ACCu) {
        ctx->pc = 0x315AD0u;
        goto label_315ad0;
    }
    ctx->pc = 0x315AC8u;
    {
        const bool branch_taken_0x315ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315ac8) {
            ctx->pc = 0x315AE0u;
            goto label_315ae0;
        }
    }
    ctx->pc = 0x315AD0u;
label_315ad0:
    // 0x315ad0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x315ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315ad4:
    // 0x315ad4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x315ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315ad8:
    // 0x315ad8: 0xc050044  jal         func_140110
label_315adc:
    if (ctx->pc == 0x315ADCu) {
        ctx->pc = 0x315ADCu;
            // 0x315adc: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x315AE0u;
        goto label_315ae0;
    }
    ctx->pc = 0x315AD8u;
    SET_GPR_U32(ctx, 31, 0x315AE0u);
    ctx->pc = 0x315ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315AD8u;
            // 0x315adc: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315AE0u; }
        if (ctx->pc != 0x315AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315AE0u; }
        if (ctx->pc != 0x315AE0u) { return; }
    }
    ctx->pc = 0x315AE0u;
label_315ae0:
    // 0x315ae0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x315ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_315ae4:
    // 0x315ae4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x315ae4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_315ae8:
    // 0x315ae8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x315ae8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_315aec:
    // 0x315aec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x315aecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_315af0:
    // 0x315af0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x315af0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_315af4:
    // 0x315af4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x315af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_315af8:
    // 0x315af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315afc:
    // 0x315afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_315b00:
    // 0x315b00: 0x3e00008  jr          $ra
label_315b04:
    if (ctx->pc == 0x315B04u) {
        ctx->pc = 0x315B04u;
            // 0x315b04: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x315B08u;
        goto label_315b08;
    }
    ctx->pc = 0x315B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315B00u;
            // 0x315b04: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x315B08u;
label_315b08:
    // 0x315b08: 0x0  nop
    ctx->pc = 0x315b08u;
    // NOP
label_315b0c:
    // 0x315b0c: 0x0  nop
    ctx->pc = 0x315b0cu;
    // NOP
label_315b10:
    // 0x315b10: 0x3e00008  jr          $ra
label_315b14:
    if (ctx->pc == 0x315B14u) {
        ctx->pc = 0x315B18u;
        goto label_315b18;
    }
    ctx->pc = 0x315B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x315B18u;
label_315b18:
    // 0x315b18: 0x0  nop
    ctx->pc = 0x315b18u;
    // NOP
label_315b1c:
    // 0x315b1c: 0x0  nop
    ctx->pc = 0x315b1cu;
    // NOP
label_315b20:
    // 0x315b20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x315b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_315b24:
    // 0x315b24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x315b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_315b28:
    // 0x315b28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x315b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_315b2c:
    // 0x315b2c: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x315b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_315b30:
    // 0x315b30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x315b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_315b34:
    // 0x315b34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x315b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_315b38:
    // 0x315b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_315b3c:
    // 0x315b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x315b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_315b40:
    // 0x315b40: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x315b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_315b44:
    // 0x315b44: 0x820311ad  lb          $v1, 0x11AD($s0)
    ctx->pc = 0x315b44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4525)));
label_315b48:
    // 0x315b48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x315b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_315b4c:
    // 0x315b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_315b50:
    // 0x315b50: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x315b50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_315b54:
    // 0x315b54: 0xc075830  jal         func_1D60C0
label_315b58:
    if (ctx->pc == 0x315B58u) {
        ctx->pc = 0x315B58u;
            // 0x315b58: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315B5Cu;
        goto label_315b5c;
    }
    ctx->pc = 0x315B54u;
    SET_GPR_U32(ctx, 31, 0x315B5Cu);
    ctx->pc = 0x315B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315B54u;
            // 0x315b58: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315B5Cu; }
        if (ctx->pc != 0x315B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315B5Cu; }
        if (ctx->pc != 0x315B5Cu) { return; }
    }
    ctx->pc = 0x315B5Cu;
label_315b5c:
    // 0x315b5c: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x315b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_315b60:
    // 0x315b60: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x315b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_315b64:
    // 0x315b64: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_315b68:
    if (ctx->pc == 0x315B68u) {
        ctx->pc = 0x315B68u;
            // 0x315b68: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x315B6Cu;
        goto label_315b6c;
    }
    ctx->pc = 0x315B64u;
    {
        const bool branch_taken_0x315b64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x315b64) {
            ctx->pc = 0x315B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315B64u;
            // 0x315b68: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315B88u;
            goto label_315b88;
        }
    }
    ctx->pc = 0x315B6Cu;
label_315b6c:
    // 0x315b6c: 0xc601118c  lwc1        $f1, 0x118C($s0)
    ctx->pc = 0x315b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315b70:
    // 0x315b70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315b74:
    // 0x315b74: 0x0  nop
    ctx->pc = 0x315b74u;
    // NOP
label_315b78:
    // 0x315b78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x315b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315b7c:
    // 0x315b7c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_315b80:
    if (ctx->pc == 0x315B80u) {
        ctx->pc = 0x315B80u;
            // 0x315b80: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x315B84u;
        goto label_315b84;
    }
    ctx->pc = 0x315B7Cu;
    {
        const bool branch_taken_0x315b7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x315b7c) {
            ctx->pc = 0x315B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315B7Cu;
            // 0x315b80: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315BB8u;
            goto label_315bb8;
        }
    }
    ctx->pc = 0x315B84u;
label_315b84:
    // 0x315b84: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x315b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_315b88:
    // 0x315b88: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_315b8c:
    if (ctx->pc == 0x315B8Cu) {
        ctx->pc = 0x315B8Cu;
            // 0x315b8c: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x315B90u;
        goto label_315b90;
    }
    ctx->pc = 0x315B88u;
    {
        const bool branch_taken_0x315b88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x315b88) {
            ctx->pc = 0x315B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315B88u;
            // 0x315b8c: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315BA4u;
            goto label_315ba4;
        }
    }
    ctx->pc = 0x315B90u;
label_315b90:
    // 0x315b90: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x315b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_315b94:
    // 0x315b94: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x315b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_315b98:
    // 0x315b98: 0xc057b7c  jal         func_15EDF0
label_315b9c:
    if (ctx->pc == 0x315B9Cu) {
        ctx->pc = 0x315B9Cu;
            // 0x315b9c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x315BA0u;
        goto label_315ba0;
    }
    ctx->pc = 0x315B98u;
    SET_GPR_U32(ctx, 31, 0x315BA0u);
    ctx->pc = 0x315B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315B98u;
            // 0x315b9c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315BA0u; }
        if (ctx->pc != 0x315BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315BA0u; }
        if (ctx->pc != 0x315BA0u) { return; }
    }
    ctx->pc = 0x315BA0u;
label_315ba0:
    // 0x315ba0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x315ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_315ba4:
    // 0x315ba4: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x315ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_315ba8:
    // 0x315ba8: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x315ba8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_315bac:
    // 0x315bac: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x315bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_315bb0:
    // 0x315bb0: 0x1000006d  b           . + 4 + (0x6D << 2)
label_315bb4:
    if (ctx->pc == 0x315BB4u) {
        ctx->pc = 0x315BB4u;
            // 0x315bb4: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x315BB8u;
        goto label_315bb8;
    }
    ctx->pc = 0x315BB0u;
    {
        const bool branch_taken_0x315bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315BB0u;
            // 0x315bb4: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bb0) {
            ctx->pc = 0x315D68u;
            goto label_315d68;
        }
    }
    ctx->pc = 0x315BB8u;
label_315bb8:
    // 0x315bb8: 0x50430068  beql        $v0, $v1, . + 4 + (0x68 << 2)
label_315bbc:
    if (ctx->pc == 0x315BBCu) {
        ctx->pc = 0x315BBCu;
            // 0x315bbc: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->pc = 0x315BC0u;
        goto label_315bc0;
    }
    ctx->pc = 0x315BB8u;
    {
        const bool branch_taken_0x315bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x315bb8) {
            ctx->pc = 0x315BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315BB8u;
            // 0x315bbc: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315D5Cu;
            goto label_315d5c;
        }
    }
    ctx->pc = 0x315BC0u;
label_315bc0:
    // 0x315bc0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x315bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_315bc4:
    // 0x315bc4: 0x50430037  beql        $v0, $v1, . + 4 + (0x37 << 2)
label_315bc8:
    if (ctx->pc == 0x315BC8u) {
        ctx->pc = 0x315BC8u;
            // 0x315bc8: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x315BCCu;
        goto label_315bcc;
    }
    ctx->pc = 0x315BC4u;
    {
        const bool branch_taken_0x315bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x315bc4) {
            ctx->pc = 0x315BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315BC4u;
            // 0x315bc8: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315CA4u;
            goto label_315ca4;
        }
    }
    ctx->pc = 0x315BCCu;
label_315bcc:
    // 0x315bcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x315bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_315bd0:
    // 0x315bd0: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_315bd4:
    if (ctx->pc == 0x315BD4u) {
        ctx->pc = 0x315BD4u;
            // 0x315bd4: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x315BD8u;
        goto label_315bd8;
    }
    ctx->pc = 0x315BD0u;
    {
        const bool branch_taken_0x315bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x315bd0) {
            ctx->pc = 0x315BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315BD0u;
            // 0x315bd4: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315BE0u;
            goto label_315be0;
        }
    }
    ctx->pc = 0x315BD8u;
label_315bd8:
    // 0x315bd8: 0x10000064  b           . + 4 + (0x64 << 2)
label_315bdc:
    if (ctx->pc == 0x315BDCu) {
        ctx->pc = 0x315BDCu;
            // 0x315bdc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x315BE0u;
        goto label_315be0;
    }
    ctx->pc = 0x315BD8u;
    {
        const bool branch_taken_0x315bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315BD8u;
            // 0x315bdc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bd8) {
            ctx->pc = 0x315D6Cu;
            goto label_315d6c;
        }
    }
    ctx->pc = 0x315BE0u;
label_315be0:
    // 0x315be0: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x315be0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_315be4:
    // 0x315be4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_315be8:
    if (ctx->pc == 0x315BE8u) {
        ctx->pc = 0x315BE8u;
            // 0x315be8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315BECu;
        goto label_315bec;
    }
    ctx->pc = 0x315BE4u;
    {
        const bool branch_taken_0x315be4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x315BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315BE4u;
            // 0x315be8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315be4) {
            ctx->pc = 0x315BFCu;
            goto label_315bfc;
        }
    }
    ctx->pc = 0x315BECu;
label_315bec:
    // 0x315bec: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x315becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_315bf0:
    // 0x315bf0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_315bf4:
    if (ctx->pc == 0x315BF4u) {
        ctx->pc = 0x315BF8u;
        goto label_315bf8;
    }
    ctx->pc = 0x315BF0u;
    {
        const bool branch_taken_0x315bf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x315bf0) {
            ctx->pc = 0x315BFCu;
            goto label_315bfc;
        }
    }
    ctx->pc = 0x315BF8u;
label_315bf8:
    // 0x315bf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x315bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315bfc:
    // 0x315bfc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_315c00:
    if (ctx->pc == 0x315C00u) {
        ctx->pc = 0x315C04u;
        goto label_315c04;
    }
    ctx->pc = 0x315BFCu;
    {
        const bool branch_taken_0x315bfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x315bfc) {
            ctx->pc = 0x315C18u;
            goto label_315c18;
        }
    }
    ctx->pc = 0x315C04u;
label_315c04:
    // 0x315c04: 0xc075eb4  jal         func_1D7AD0
label_315c08:
    if (ctx->pc == 0x315C08u) {
        ctx->pc = 0x315C08u;
            // 0x315c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315C0Cu;
        goto label_315c0c;
    }
    ctx->pc = 0x315C04u;
    SET_GPR_U32(ctx, 31, 0x315C0Cu);
    ctx->pc = 0x315C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315C04u;
            // 0x315c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C0Cu; }
        if (ctx->pc != 0x315C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C0Cu; }
        if (ctx->pc != 0x315C0Cu) { return; }
    }
    ctx->pc = 0x315C0Cu;
label_315c0c:
    // 0x315c0c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_315c10:
    if (ctx->pc == 0x315C10u) {
        ctx->pc = 0x315C14u;
        goto label_315c14;
    }
    ctx->pc = 0x315C0Cu;
    {
        const bool branch_taken_0x315c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315c0c) {
            ctx->pc = 0x315C18u;
            goto label_315c18;
        }
    }
    ctx->pc = 0x315C14u;
label_315c14:
    // 0x315c14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x315c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315c18:
    // 0x315c18: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_315c1c:
    if (ctx->pc == 0x315C1Cu) {
        ctx->pc = 0x315C1Cu;
            // 0x315c1c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->pc = 0x315C20u;
        goto label_315c20;
    }
    ctx->pc = 0x315C18u;
    {
        const bool branch_taken_0x315c18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x315c18) {
            ctx->pc = 0x315C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315C18u;
            // 0x315c1c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315C88u;
            goto label_315c88;
        }
    }
    ctx->pc = 0x315C20u;
label_315c20:
    // 0x315c20: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x315c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_315c24:
    // 0x315c24: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x315c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_315c28:
    // 0x315c28: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_315c2c:
    if (ctx->pc == 0x315C2Cu) {
        ctx->pc = 0x315C30u;
        goto label_315c30;
    }
    ctx->pc = 0x315C28u;
    {
        const bool branch_taken_0x315c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x315c28) {
            ctx->pc = 0x315C84u;
            goto label_315c84;
        }
    }
    ctx->pc = 0x315C30u;
label_315c30:
    // 0x315c30: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x315c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_315c34:
    // 0x315c34: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x315c34u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_315c38:
    // 0x315c38: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_315c3c:
    if (ctx->pc == 0x315C3Cu) {
        ctx->pc = 0x315C3Cu;
            // 0x315c3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315C40u;
        goto label_315c40;
    }
    ctx->pc = 0x315C38u;
    {
        const bool branch_taken_0x315c38 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x315C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315C38u;
            // 0x315c3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c38) {
            ctx->pc = 0x315C50u;
            goto label_315c50;
        }
    }
    ctx->pc = 0x315C40u;
label_315c40:
    // 0x315c40: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x315c40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_315c44:
    // 0x315c44: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_315c48:
    if (ctx->pc == 0x315C48u) {
        ctx->pc = 0x315C4Cu;
        goto label_315c4c;
    }
    ctx->pc = 0x315C44u;
    {
        const bool branch_taken_0x315c44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x315c44) {
            ctx->pc = 0x315C50u;
            goto label_315c50;
        }
    }
    ctx->pc = 0x315C4Cu;
label_315c4c:
    // 0x315c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315c50:
    // 0x315c50: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_315c54:
    if (ctx->pc == 0x315C54u) {
        ctx->pc = 0x315C58u;
        goto label_315c58;
    }
    ctx->pc = 0x315C50u;
    {
        const bool branch_taken_0x315c50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x315c50) {
            ctx->pc = 0x315C6Cu;
            goto label_315c6c;
        }
    }
    ctx->pc = 0x315C58u;
label_315c58:
    // 0x315c58: 0xc075eb4  jal         func_1D7AD0
label_315c5c:
    if (ctx->pc == 0x315C5Cu) {
        ctx->pc = 0x315C5Cu;
            // 0x315c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315C60u;
        goto label_315c60;
    }
    ctx->pc = 0x315C58u;
    SET_GPR_U32(ctx, 31, 0x315C60u);
    ctx->pc = 0x315C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315C58u;
            // 0x315c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C60u; }
        if (ctx->pc != 0x315C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C60u; }
        if (ctx->pc != 0x315C60u) { return; }
    }
    ctx->pc = 0x315C60u;
label_315c60:
    // 0x315c60: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_315c64:
    if (ctx->pc == 0x315C64u) {
        ctx->pc = 0x315C68u;
        goto label_315c68;
    }
    ctx->pc = 0x315C60u;
    {
        const bool branch_taken_0x315c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315c60) {
            ctx->pc = 0x315C6Cu;
            goto label_315c6c;
        }
    }
    ctx->pc = 0x315C68u;
label_315c68:
    // 0x315c68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x315c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315c6c:
    // 0x315c6c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_315c70:
    if (ctx->pc == 0x315C70u) {
        ctx->pc = 0x315C74u;
        goto label_315c74;
    }
    ctx->pc = 0x315C6Cu;
    {
        const bool branch_taken_0x315c6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x315c6c) {
            ctx->pc = 0x315C84u;
            goto label_315c84;
        }
    }
    ctx->pc = 0x315C74u;
label_315c74:
    // 0x315c74: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x315c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_315c78:
    // 0x315c78: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x315c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_315c7c:
    // 0x315c7c: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_315c80:
    if (ctx->pc == 0x315C80u) {
        ctx->pc = 0x315C80u;
            // 0x315c80: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->pc = 0x315C84u;
        goto label_315c84;
    }
    ctx->pc = 0x315C7Cu;
    {
        const bool branch_taken_0x315c7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x315c7c) {
            ctx->pc = 0x315C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315C7Cu;
            // 0x315c80: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315C94u;
            goto label_315c94;
        }
    }
    ctx->pc = 0x315C84u;
label_315c84:
    // 0x315c84: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x315c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_315c88:
    // 0x315c88: 0xc073234  jal         func_1CC8D0
label_315c8c:
    if (ctx->pc == 0x315C8Cu) {
        ctx->pc = 0x315C8Cu;
            // 0x315c8c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x315C90u;
        goto label_315c90;
    }
    ctx->pc = 0x315C88u;
    SET_GPR_U32(ctx, 31, 0x315C90u);
    ctx->pc = 0x315C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315C88u;
            // 0x315c8c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C90u; }
        if (ctx->pc != 0x315C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315C90u; }
        if (ctx->pc != 0x315C90u) { return; }
    }
    ctx->pc = 0x315C90u;
label_315c90:
    // 0x315c90: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x315c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_315c94:
    // 0x315c94: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x315c94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_315c98:
    // 0x315c98: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x315c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_315c9c:
    // 0x315c9c: 0x10000032  b           . + 4 + (0x32 << 2)
label_315ca0:
    if (ctx->pc == 0x315CA0u) {
        ctx->pc = 0x315CA0u;
            // 0x315ca0: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x315CA4u;
        goto label_315ca4;
    }
    ctx->pc = 0x315C9Cu;
    {
        const bool branch_taken_0x315c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315C9Cu;
            // 0x315ca0: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c9c) {
            ctx->pc = 0x315D68u;
            goto label_315d68;
        }
    }
    ctx->pc = 0x315CA4u;
label_315ca4:
    // 0x315ca4: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x315ca4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_315ca8:
    // 0x315ca8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_315cac:
    if (ctx->pc == 0x315CACu) {
        ctx->pc = 0x315CACu;
            // 0x315cac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315CB0u;
        goto label_315cb0;
    }
    ctx->pc = 0x315CA8u;
    {
        const bool branch_taken_0x315ca8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x315CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315CA8u;
            // 0x315cac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ca8) {
            ctx->pc = 0x315CC0u;
            goto label_315cc0;
        }
    }
    ctx->pc = 0x315CB0u;
label_315cb0:
    // 0x315cb0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x315cb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_315cb4:
    // 0x315cb4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_315cb8:
    if (ctx->pc == 0x315CB8u) {
        ctx->pc = 0x315CBCu;
        goto label_315cbc;
    }
    ctx->pc = 0x315CB4u;
    {
        const bool branch_taken_0x315cb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x315cb4) {
            ctx->pc = 0x315CC0u;
            goto label_315cc0;
        }
    }
    ctx->pc = 0x315CBCu;
label_315cbc:
    // 0x315cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x315cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315cc0:
    // 0x315cc0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_315cc4:
    if (ctx->pc == 0x315CC4u) {
        ctx->pc = 0x315CC8u;
        goto label_315cc8;
    }
    ctx->pc = 0x315CC0u;
    {
        const bool branch_taken_0x315cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x315cc0) {
            ctx->pc = 0x315CDCu;
            goto label_315cdc;
        }
    }
    ctx->pc = 0x315CC8u;
label_315cc8:
    // 0x315cc8: 0xc075eb4  jal         func_1D7AD0
label_315ccc:
    if (ctx->pc == 0x315CCCu) {
        ctx->pc = 0x315CCCu;
            // 0x315ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315CD0u;
        goto label_315cd0;
    }
    ctx->pc = 0x315CC8u;
    SET_GPR_U32(ctx, 31, 0x315CD0u);
    ctx->pc = 0x315CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315CC8u;
            // 0x315ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315CD0u; }
        if (ctx->pc != 0x315CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315CD0u; }
        if (ctx->pc != 0x315CD0u) { return; }
    }
    ctx->pc = 0x315CD0u;
label_315cd0:
    // 0x315cd0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_315cd4:
    if (ctx->pc == 0x315CD4u) {
        ctx->pc = 0x315CD8u;
        goto label_315cd8;
    }
    ctx->pc = 0x315CD0u;
    {
        const bool branch_taken_0x315cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315cd0) {
            ctx->pc = 0x315CDCu;
            goto label_315cdc;
        }
    }
    ctx->pc = 0x315CD8u;
label_315cd8:
    // 0x315cd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x315cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315cdc:
    // 0x315cdc: 0x5640001b  bnel        $s2, $zero, . + 4 + (0x1B << 2)
label_315ce0:
    if (ctx->pc == 0x315CE0u) {
        ctx->pc = 0x315CE0u;
            // 0x315ce0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->pc = 0x315CE4u;
        goto label_315ce4;
    }
    ctx->pc = 0x315CDCu;
    {
        const bool branch_taken_0x315cdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x315cdc) {
            ctx->pc = 0x315CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315CDCu;
            // 0x315ce0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315D4Cu;
            goto label_315d4c;
        }
    }
    ctx->pc = 0x315CE4u;
label_315ce4:
    // 0x315ce4: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x315ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_315ce8:
    // 0x315ce8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x315ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_315cec:
    // 0x315cec: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_315cf0:
    if (ctx->pc == 0x315CF0u) {
        ctx->pc = 0x315CF4u;
        goto label_315cf4;
    }
    ctx->pc = 0x315CECu;
    {
        const bool branch_taken_0x315cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x315cec) {
            ctx->pc = 0x315D48u;
            goto label_315d48;
        }
    }
    ctx->pc = 0x315CF4u;
label_315cf4:
    // 0x315cf4: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x315cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_315cf8:
    // 0x315cf8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x315cf8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_315cfc:
    // 0x315cfc: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_315d00:
    if (ctx->pc == 0x315D00u) {
        ctx->pc = 0x315D00u;
            // 0x315d00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315D04u;
        goto label_315d04;
    }
    ctx->pc = 0x315CFCu;
    {
        const bool branch_taken_0x315cfc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x315D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315CFCu;
            // 0x315d00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315cfc) {
            ctx->pc = 0x315D14u;
            goto label_315d14;
        }
    }
    ctx->pc = 0x315D04u;
label_315d04:
    // 0x315d04: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x315d04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_315d08:
    // 0x315d08: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_315d0c:
    if (ctx->pc == 0x315D0Cu) {
        ctx->pc = 0x315D10u;
        goto label_315d10;
    }
    ctx->pc = 0x315D08u;
    {
        const bool branch_taken_0x315d08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x315d08) {
            ctx->pc = 0x315D14u;
            goto label_315d14;
        }
    }
    ctx->pc = 0x315D10u;
label_315d10:
    // 0x315d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315d14:
    // 0x315d14: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_315d18:
    if (ctx->pc == 0x315D18u) {
        ctx->pc = 0x315D1Cu;
        goto label_315d1c;
    }
    ctx->pc = 0x315D14u;
    {
        const bool branch_taken_0x315d14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x315d14) {
            ctx->pc = 0x315D30u;
            goto label_315d30;
        }
    }
    ctx->pc = 0x315D1Cu;
label_315d1c:
    // 0x315d1c: 0xc075eb4  jal         func_1D7AD0
label_315d20:
    if (ctx->pc == 0x315D20u) {
        ctx->pc = 0x315D20u;
            // 0x315d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315D24u;
        goto label_315d24;
    }
    ctx->pc = 0x315D1Cu;
    SET_GPR_U32(ctx, 31, 0x315D24u);
    ctx->pc = 0x315D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315D1Cu;
            // 0x315d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315D24u; }
        if (ctx->pc != 0x315D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315D24u; }
        if (ctx->pc != 0x315D24u) { return; }
    }
    ctx->pc = 0x315D24u;
label_315d24:
    // 0x315d24: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_315d28:
    if (ctx->pc == 0x315D28u) {
        ctx->pc = 0x315D2Cu;
        goto label_315d2c;
    }
    ctx->pc = 0x315D24u;
    {
        const bool branch_taken_0x315d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315d24) {
            ctx->pc = 0x315D30u;
            goto label_315d30;
        }
    }
    ctx->pc = 0x315D2Cu;
label_315d2c:
    // 0x315d2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x315d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315d30:
    // 0x315d30: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_315d34:
    if (ctx->pc == 0x315D34u) {
        ctx->pc = 0x315D38u;
        goto label_315d38;
    }
    ctx->pc = 0x315D30u;
    {
        const bool branch_taken_0x315d30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x315d30) {
            ctx->pc = 0x315D48u;
            goto label_315d48;
        }
    }
    ctx->pc = 0x315D38u;
label_315d38:
    // 0x315d38: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x315d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_315d3c:
    // 0x315d3c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x315d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_315d40:
    // 0x315d40: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_315d44:
    if (ctx->pc == 0x315D44u) {
        ctx->pc = 0x315D48u;
        goto label_315d48;
    }
    ctx->pc = 0x315D40u;
    {
        const bool branch_taken_0x315d40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x315d40) {
            ctx->pc = 0x315D68u;
            goto label_315d68;
        }
    }
    ctx->pc = 0x315D48u;
label_315d48:
    // 0x315d48: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x315d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_315d4c:
    // 0x315d4c: 0xc073234  jal         func_1CC8D0
label_315d50:
    if (ctx->pc == 0x315D50u) {
        ctx->pc = 0x315D50u;
            // 0x315d50: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x315D54u;
        goto label_315d54;
    }
    ctx->pc = 0x315D4Cu;
    SET_GPR_U32(ctx, 31, 0x315D54u);
    ctx->pc = 0x315D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315D4Cu;
            // 0x315d50: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315D54u; }
        if (ctx->pc != 0x315D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315D54u; }
        if (ctx->pc != 0x315D54u) { return; }
    }
    ctx->pc = 0x315D54u;
label_315d54:
    // 0x315d54: 0x10000004  b           . + 4 + (0x4 << 2)
label_315d58:
    if (ctx->pc == 0x315D58u) {
        ctx->pc = 0x315D5Cu;
        goto label_315d5c;
    }
    ctx->pc = 0x315D54u;
    {
        const bool branch_taken_0x315d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315d54) {
            ctx->pc = 0x315D68u;
            goto label_315d68;
        }
    }
    ctx->pc = 0x315D5Cu;
label_315d5c:
    // 0x315d5c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x315d5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_315d60:
    // 0x315d60: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x315d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_315d64:
    // 0x315d64: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x315d64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_315d68:
    // 0x315d68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x315d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_315d6c:
    // 0x315d6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x315d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_315d70:
    // 0x315d70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x315d70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_315d74:
    // 0x315d74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315d78:
    // 0x315d78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_315d7c:
    // 0x315d7c: 0x3e00008  jr          $ra
label_315d80:
    if (ctx->pc == 0x315D80u) {
        ctx->pc = 0x315D80u;
            // 0x315d80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x315D84u;
        goto label_315d84;
    }
    ctx->pc = 0x315D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315D7Cu;
            // 0x315d80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x315D84u;
label_315d84:
    // 0x315d84: 0x0  nop
    ctx->pc = 0x315d84u;
    // NOP
label_315d88:
    // 0x315d88: 0x0  nop
    ctx->pc = 0x315d88u;
    // NOP
label_315d8c:
    // 0x315d8c: 0x0  nop
    ctx->pc = 0x315d8cu;
    // NOP
label_315d90:
    // 0x315d90: 0x3e00008  jr          $ra
label_315d94:
    if (ctx->pc == 0x315D94u) {
        ctx->pc = 0x315D98u;
        goto label_315d98;
    }
    ctx->pc = 0x315D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x315D98u;
label_315d98:
    // 0x315d98: 0x0  nop
    ctx->pc = 0x315d98u;
    // NOP
label_315d9c:
    // 0x315d9c: 0x0  nop
    ctx->pc = 0x315d9cu;
    // NOP
label_315da0:
    // 0x315da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x315da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_315da4:
    // 0x315da4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x315da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_315da8:
    // 0x315da8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x315da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_315dac:
    // 0x315dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_315db0:
    // 0x315db0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x315db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_315db4:
    // 0x315db4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x315db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_315db8:
    // 0x315db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x315db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315dbc:
    // 0x315dbc: 0xc12ca3c  jal         func_4B28F0
label_315dc0:
    if (ctx->pc == 0x315DC0u) {
        ctx->pc = 0x315DC0u;
            // 0x315dc0: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x315DC4u;
        goto label_315dc4;
    }
    ctx->pc = 0x315DBCu;
    SET_GPR_U32(ctx, 31, 0x315DC4u);
    ctx->pc = 0x315DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315DBCu;
            // 0x315dc0: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315DC4u; }
        if (ctx->pc != 0x315DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315DC4u; }
        if (ctx->pc != 0x315DC4u) { return; }
    }
    ctx->pc = 0x315DC4u;
label_315dc4:
    // 0x315dc4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x315dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_315dc8:
    // 0x315dc8: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_315dcc:
    if (ctx->pc == 0x315DCCu) {
        ctx->pc = 0x315DCCu;
            // 0x315dcc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x315DD0u;
        goto label_315dd0;
    }
    ctx->pc = 0x315DC8u;
    {
        const bool branch_taken_0x315dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x315dc8) {
            ctx->pc = 0x315DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315DC8u;
            // 0x315dcc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x315E1Cu;
            goto label_315e1c;
        }
    }
    ctx->pc = 0x315DD0u;
label_315dd0:
    // 0x315dd0: 0xc040180  jal         func_100600
label_315dd4:
    if (ctx->pc == 0x315DD4u) {
        ctx->pc = 0x315DD4u;
            // 0x315dd4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x315DD8u;
        goto label_315dd8;
    }
    ctx->pc = 0x315DD0u;
    SET_GPR_U32(ctx, 31, 0x315DD8u);
    ctx->pc = 0x315DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315DD0u;
            // 0x315dd4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315DD8u; }
        if (ctx->pc != 0x315DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315DD8u; }
        if (ctx->pc != 0x315DD8u) { return; }
    }
    ctx->pc = 0x315DD8u;
label_315dd8:
    // 0x315dd8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_315ddc:
    if (ctx->pc == 0x315DDCu) {
        ctx->pc = 0x315DDCu;
            // 0x315ddc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315DE0u;
        goto label_315de0;
    }
    ctx->pc = 0x315DD8u;
    {
        const bool branch_taken_0x315dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315DD8u;
            // 0x315ddc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315dd8) {
            ctx->pc = 0x315E14u;
            goto label_315e14;
        }
    }
    ctx->pc = 0x315DE0u;
label_315de0:
    // 0x315de0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x315de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_315de4:
    // 0x315de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315de8:
    // 0x315de8: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x315de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_315dec:
    // 0x315dec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x315decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315df0:
    // 0x315df0: 0xc10ca68  jal         func_4329A0
label_315df4:
    if (ctx->pc == 0x315DF4u) {
        ctx->pc = 0x315DF4u;
            // 0x315df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315DF8u;
        goto label_315df8;
    }
    ctx->pc = 0x315DF0u;
    SET_GPR_U32(ctx, 31, 0x315DF8u);
    ctx->pc = 0x315DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315DF0u;
            // 0x315df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315DF8u; }
        if (ctx->pc != 0x315DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315DF8u; }
        if (ctx->pc != 0x315DF8u) { return; }
    }
    ctx->pc = 0x315DF8u;
label_315df8:
    // 0x315df8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x315df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_315dfc:
    // 0x315dfc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x315dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_315e00:
    // 0x315e00: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x315e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_315e04:
    // 0x315e04: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x315e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_315e08:
    // 0x315e08: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x315e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_315e0c:
    // 0x315e0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x315e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_315e10:
    // 0x315e10: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x315e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_315e14:
    // 0x315e14: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x315e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_315e18:
    // 0x315e18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x315e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_315e1c:
    // 0x315e1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315e20:
    // 0x315e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_315e24:
    // 0x315e24: 0x3e00008  jr          $ra
label_315e28:
    if (ctx->pc == 0x315E28u) {
        ctx->pc = 0x315E28u;
            // 0x315e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x315E2Cu;
        goto label_315e2c;
    }
    ctx->pc = 0x315E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315E24u;
            // 0x315e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x315E2Cu;
label_315e2c:
    // 0x315e2c: 0x0  nop
    ctx->pc = 0x315e2cu;
    // NOP
label_315e30:
    // 0x315e30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x315e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_315e34:
    // 0x315e34: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x315e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_315e38:
    // 0x315e38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x315e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_315e3c:
    // 0x315e3c: 0x24a5ce70  addiu       $a1, $a1, -0x3190
    ctx->pc = 0x315e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954608));
label_315e40:
    // 0x315e40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x315e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_315e44:
    // 0x315e44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x315e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_315e48:
    // 0x315e48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x315e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_315e4c:
    // 0x315e4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_315e50:
    // 0x315e50: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x315e50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_315e54:
    // 0x315e54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x315e54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_315e58:
    // 0x315e58: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x315e58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_315e5c:
    // 0x315e5c: 0xc075728  jal         func_1D5CA0
label_315e60:
    if (ctx->pc == 0x315E60u) {
        ctx->pc = 0x315E60u;
            // 0x315e60: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315E64u;
        goto label_315e64;
    }
    ctx->pc = 0x315E5Cu;
    SET_GPR_U32(ctx, 31, 0x315E64u);
    ctx->pc = 0x315E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315E5Cu;
            // 0x315e60: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315E64u; }
        if (ctx->pc != 0x315E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315E64u; }
        if (ctx->pc != 0x315E64u) { return; }
    }
    ctx->pc = 0x315E64u;
label_315e64:
    // 0x315e64: 0x544000b1  bnel        $v0, $zero, . + 4 + (0xB1 << 2)
label_315e68:
    if (ctx->pc == 0x315E68u) {
        ctx->pc = 0x315E68u;
            // 0x315e68: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x315E6Cu;
        goto label_315e6c;
    }
    ctx->pc = 0x315E64u;
    {
        const bool branch_taken_0x315e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315e64) {
            ctx->pc = 0x315E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x315E64u;
            // 0x315e68: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31612Cu;
            goto label_31612c;
        }
    }
    ctx->pc = 0x315E6Cu;
label_315e6c:
    // 0x315e6c: 0x8e030550  lw          $v1, 0x550($s0)
    ctx->pc = 0x315e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_315e70:
    // 0x315e70: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x315e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_315e74:
    // 0x315e74: 0x8e120d6c  lw          $s2, 0xD6C($s0)
    ctx->pc = 0x315e74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_315e78:
    // 0x315e78: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x315e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_315e7c:
    // 0x315e7c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x315e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_315e80:
    // 0x315e80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x315e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_315e84:
    // 0x315e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_315e88:
    // 0x315e88: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x315e88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_315e8c:
    // 0x315e8c: 0x320f809  jalr        $t9
label_315e90:
    if (ctx->pc == 0x315E90u) {
        ctx->pc = 0x315E90u;
            // 0x315e90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315E94u;
        goto label_315e94;
    }
    ctx->pc = 0x315E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315E94u);
        ctx->pc = 0x315E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315E8Cu;
            // 0x315e90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315E94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315E94u; }
            if (ctx->pc != 0x315E94u) { return; }
        }
        }
    }
    ctx->pc = 0x315E94u;
label_315e94:
    // 0x315e94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x315e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_315e98:
    // 0x315e98: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x315e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_315e9c:
    // 0x315e9c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x315e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_315ea0:
    // 0x315ea0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x315ea0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_315ea4:
    // 0x315ea4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x315ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_315ea8:
    // 0x315ea8: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x315ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315eac:
    // 0x315eac: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x315eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315eb0:
    // 0x315eb0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x315eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_315eb4:
    // 0x315eb4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x315eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_315eb8:
    // 0x315eb8: 0x0  nop
    ctx->pc = 0x315eb8u;
    // NOP
label_315ebc:
    // 0x315ebc: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x315ebcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_315ec0:
    // 0x315ec0: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x315ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_315ec4:
    // 0x315ec4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x315ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_315ec8:
    // 0x315ec8: 0xc6010dbc  lwc1        $f1, 0xDBC($s0)
    ctx->pc = 0x315ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315ecc:
    // 0x315ecc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x315eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_315ed0:
    // 0x315ed0: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x315ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
label_315ed4:
    // 0x315ed4: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x315ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_315ed8:
    // 0x315ed8: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x315ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_315edc:
    // 0x315edc: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x315edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_315ee0:
    // 0x315ee0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x315ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_315ee4:
    // 0x315ee4: 0xc6620060  lwc1        $f2, 0x60($s3)
    ctx->pc = 0x315ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315ee8:
    // 0x315ee8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x315ee8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315eec:
    // 0x315eec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315ef0:
    // 0x315ef0: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x315ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_315ef4:
    // 0x315ef4: 0x46022818  adda.s      $f5, $f2
    ctx->pc = 0x315ef4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_315ef8:
    // 0x315ef8: 0x4604a082  mul.s       $f2, $f20, $f4
    ctx->pc = 0x315ef8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_315efc:
    // 0x315efc: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x315efcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_315f00:
    // 0x315f00: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x315f00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_315f04:
    // 0x315f04: 0xe6620060  swc1        $f2, 0x60($s3)
    ctx->pc = 0x315f04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
label_315f08:
    // 0x315f08: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x315f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315f0c:
    // 0x315f0c: 0x8e020d70  lw          $v0, 0xD70($s0)
    ctx->pc = 0x315f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_315f10:
    // 0x315f10: 0x46141d5d  msub.s      $f21, $f3, $f20
    ctx->pc = 0x315f10u;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
label_315f14:
    // 0x315f14: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x315f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_315f18:
    // 0x315f18: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x315f18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_315f1c:
    // 0x315f1c: 0xc0477a8  jal         func_11DEA0
label_315f20:
    if (ctx->pc == 0x315F20u) {
        ctx->pc = 0x315F20u;
            // 0x315f20: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x315F24u;
        goto label_315f24;
    }
    ctx->pc = 0x315F1Cu;
    SET_GPR_U32(ctx, 31, 0x315F24u);
    ctx->pc = 0x315F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315F1Cu;
            // 0x315f20: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315F24u; }
        if (ctx->pc != 0x315F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315F24u; }
        if (ctx->pc != 0x315F24u) { return; }
    }
    ctx->pc = 0x315F24u;
label_315f24:
    // 0x315f24: 0x3c034563  lui         $v1, 0x4563
    ctx->pc = 0x315f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17763 << 16));
label_315f28:
    // 0x315f28: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x315f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_315f2c:
    // 0x315f2c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x315f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_315f30:
    // 0x315f30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x315f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_315f34:
    // 0x315f34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x315f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315f38:
    // 0x315f38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x315f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_315f3c:
    // 0x315f3c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x315f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_315f40:
    // 0x315f40: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x315f40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_315f44:
    // 0x315f44: 0x2402238e  addiu       $v0, $zero, 0x238E
    ctx->pc = 0x315f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9102));
label_315f48:
    // 0x315f48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x315f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315f4c:
    // 0x315f4c: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x315f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_315f50:
    // 0x315f50: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x315f50u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_315f54:
    // 0x315f54: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x315f54u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315f58:
    // 0x315f58: 0x0  nop
    ctx->pc = 0x315f58u;
    // NOP
label_315f5c:
    // 0x315f5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x315f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_315f60:
    // 0x315f60: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x315f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_315f64:
    // 0x315f64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_315f68:
    // 0x315f68: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x315f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_315f6c:
    // 0x315f6c: 0xc04cab0  jal         func_132AC0
label_315f70:
    if (ctx->pc == 0x315F70u) {
        ctx->pc = 0x315F70u;
            // 0x315f70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315F74u;
        goto label_315f74;
    }
    ctx->pc = 0x315F6Cu;
    SET_GPR_U32(ctx, 31, 0x315F74u);
    ctx->pc = 0x315F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315F6Cu;
            // 0x315f70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315F74u; }
        if (ctx->pc != 0x315F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315F74u; }
        if (ctx->pc != 0x315F74u) { return; }
    }
    ctx->pc = 0x315F74u;
label_315f74:
    // 0x315f74: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x315f74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_315f78:
    // 0x315f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x315f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315f7c:
    // 0x315f7c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x315f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_315f80:
    // 0x315f80: 0x320f809  jalr        $t9
label_315f84:
    if (ctx->pc == 0x315F84u) {
        ctx->pc = 0x315F84u;
            // 0x315f84: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x315F88u;
        goto label_315f88;
    }
    ctx->pc = 0x315F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315F88u);
        ctx->pc = 0x315F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315F80u;
            // 0x315f84: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315F88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315F88u; }
            if (ctx->pc != 0x315F88u) { return; }
        }
        }
    }
    ctx->pc = 0x315F88u;
label_315f88:
    // 0x315f88: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x315f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_315f8c:
    // 0x315f8c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x315f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_315f90:
    // 0x315f90: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x315f90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_315f94:
    // 0x315f94: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x315f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_315f98:
    // 0x315f98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_315f9c:
    // 0x315f9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x315f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_315fa0:
    // 0x315fa0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x315fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_315fa4:
    // 0x315fa4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x315fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_315fa8:
    // 0x315fa8: 0xc04c72c  jal         func_131CB0
label_315fac:
    if (ctx->pc == 0x315FACu) {
        ctx->pc = 0x315FACu;
            // 0x315fac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315FB0u;
        goto label_315fb0;
    }
    ctx->pc = 0x315FA8u;
    SET_GPR_U32(ctx, 31, 0x315FB0u);
    ctx->pc = 0x315FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315FA8u;
            // 0x315fac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315FB0u; }
        if (ctx->pc != 0x315FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315FB0u; }
        if (ctx->pc != 0x315FB0u) { return; }
    }
    ctx->pc = 0x315FB0u;
label_315fb0:
    // 0x315fb0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x315fb0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315fb4:
    // 0x315fb4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x315fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_315fb8:
    // 0x315fb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x315fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_315fbc:
    // 0x315fbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x315fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315fc0:
    // 0x315fc0: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x315fc0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
label_315fc4:
    // 0x315fc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x315fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_315fc8:
    // 0x315fc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315fc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_315fcc:
    // 0x315fcc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x315fccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_315fd0:
    // 0x315fd0: 0xc04cab0  jal         func_132AC0
label_315fd4:
    if (ctx->pc == 0x315FD4u) {
        ctx->pc = 0x315FD4u;
            // 0x315fd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315FD8u;
        goto label_315fd8;
    }
    ctx->pc = 0x315FD0u;
    SET_GPR_U32(ctx, 31, 0x315FD8u);
    ctx->pc = 0x315FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315FD0u;
            // 0x315fd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315FD8u; }
        if (ctx->pc != 0x315FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315FD8u; }
        if (ctx->pc != 0x315FD8u) { return; }
    }
    ctx->pc = 0x315FD8u;
label_315fd8:
    // 0x315fd8: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x315fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_315fdc:
    // 0x315fdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x315fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315fe0:
    // 0x315fe0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x315fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_315fe4:
    // 0x315fe4: 0x320f809  jalr        $t9
label_315fe8:
    if (ctx->pc == 0x315FE8u) {
        ctx->pc = 0x315FE8u;
            // 0x315fe8: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->pc = 0x315FECu;
        goto label_315fec;
    }
    ctx->pc = 0x315FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315FECu);
        ctx->pc = 0x315FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315FE4u;
            // 0x315fe8: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315FECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315FECu; }
            if (ctx->pc != 0x315FECu) { return; }
        }
        }
    }
    ctx->pc = 0x315FECu;
label_315fec:
    // 0x315fec: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x315fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_315ff0:
    // 0x315ff0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x315ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_315ff4:
    // 0x315ff4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x315ff4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_315ff8:
    // 0x315ff8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x315ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_315ffc:
    // 0x315ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_316000:
    // 0x316000: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x316000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_316004:
    // 0x316004: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x316004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_316008:
    // 0x316008: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x316008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_31600c:
    // 0x31600c: 0xc04c72c  jal         func_131CB0
label_316010:
    if (ctx->pc == 0x316010u) {
        ctx->pc = 0x316010u;
            // 0x316010: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316014u;
        goto label_316014;
    }
    ctx->pc = 0x31600Cu;
    SET_GPR_U32(ctx, 31, 0x316014u);
    ctx->pc = 0x316010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31600Cu;
            // 0x316010: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316014u; }
        if (ctx->pc != 0x316014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316014u; }
        if (ctx->pc != 0x316014u) { return; }
    }
    ctx->pc = 0x316014u;
label_316014:
    // 0x316014: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x316014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_316018:
    // 0x316018: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x316018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_31601c:
    // 0x31601c: 0xc6750060  lwc1        $f21, 0x60($s3)
    ctx->pc = 0x31601cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_316020:
    // 0x316020: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x316020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_316024:
    // 0x316024: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x316024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_316028:
    // 0x316028: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31602c:
    // 0x31602c: 0x0  nop
    ctx->pc = 0x31602cu;
    // NOP
label_316030:
    // 0x316030: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x316030u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_316034:
    // 0x316034: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x316034u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_316038:
    // 0x316038: 0xc0477a8  jal         func_11DEA0
label_31603c:
    if (ctx->pc == 0x31603Cu) {
        ctx->pc = 0x31603Cu;
            // 0x31603c: 0x4614151d  msub.s      $f20, $f2, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->pc = 0x316040u;
        goto label_316040;
    }
    ctx->pc = 0x316038u;
    SET_GPR_U32(ctx, 31, 0x316040u);
    ctx->pc = 0x31603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316038u;
            // 0x31603c: 0x4614151d  msub.s      $f20, $f2, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316040u; }
        if (ctx->pc != 0x316040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316040u; }
        if (ctx->pc != 0x316040u) { return; }
    }
    ctx->pc = 0x316040u;
label_316040:
    // 0x316040: 0x3c024563  lui         $v0, 0x4563
    ctx->pc = 0x316040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17763 << 16));
label_316044:
    // 0x316044: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x316044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_316048:
    // 0x316048: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x316048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_31604c:
    // 0x31604c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31604cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316050:
    // 0x316050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x316050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_316054:
    // 0x316054: 0x0  nop
    ctx->pc = 0x316054u;
    // NOP
label_316058:
    // 0x316058: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x316058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31605c:
    // 0x31605c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31605cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_316060:
    // 0x316060: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316060u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_316064:
    // 0x316064: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x316064u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_316068:
    // 0x316068: 0xc04cab0  jal         func_132AC0
label_31606c:
    if (ctx->pc == 0x31606Cu) {
        ctx->pc = 0x31606Cu;
            // 0x31606c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316070u;
        goto label_316070;
    }
    ctx->pc = 0x316068u;
    SET_GPR_U32(ctx, 31, 0x316070u);
    ctx->pc = 0x31606Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316068u;
            // 0x31606c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316070u; }
        if (ctx->pc != 0x316070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316070u; }
        if (ctx->pc != 0x316070u) { return; }
    }
    ctx->pc = 0x316070u;
label_316070:
    // 0x316070: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x316070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_316074:
    // 0x316074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x316074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_316078:
    // 0x316078: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x316078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_31607c:
    // 0x31607c: 0x320f809  jalr        $t9
label_316080:
    if (ctx->pc == 0x316080u) {
        ctx->pc = 0x316080u;
            // 0x316080: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x316084u;
        goto label_316084;
    }
    ctx->pc = 0x31607Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316084u);
        ctx->pc = 0x316080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31607Cu;
            // 0x316080: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316084u; }
            if (ctx->pc != 0x316084u) { return; }
        }
        }
    }
    ctx->pc = 0x316084u;
label_316084:
    // 0x316084: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x316084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_316088:
    // 0x316088: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x316088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31608c:
    // 0x31608c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x31608cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_316090:
    // 0x316090: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x316090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_316094:
    // 0x316094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_316098:
    // 0x316098: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x316098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_31609c:
    // 0x31609c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x31609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3160a0:
    // 0x3160a0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3160a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3160a4:
    // 0x3160a4: 0xc04c72c  jal         func_131CB0
label_3160a8:
    if (ctx->pc == 0x3160A8u) {
        ctx->pc = 0x3160A8u;
            // 0x3160a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3160ACu;
        goto label_3160ac;
    }
    ctx->pc = 0x3160A4u;
    SET_GPR_U32(ctx, 31, 0x3160ACu);
    ctx->pc = 0x3160A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3160A4u;
            // 0x3160a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3160ACu; }
        if (ctx->pc != 0x3160ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3160ACu; }
        if (ctx->pc != 0x3160ACu) { return; }
    }
    ctx->pc = 0x3160ACu;
label_3160ac:
    // 0x3160ac: 0x3c02c160  lui         $v0, 0xC160
    ctx->pc = 0x3160acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49504 << 16));
label_3160b0:
    // 0x3160b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3160b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3160b4:
    // 0x3160b4: 0xc0477a8  jal         func_11DEA0
label_3160b8:
    if (ctx->pc == 0x3160B8u) {
        ctx->pc = 0x3160B8u;
            // 0x3160b8: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3160BCu;
        goto label_3160bc;
    }
    ctx->pc = 0x3160B4u;
    SET_GPR_U32(ctx, 31, 0x3160BCu);
    ctx->pc = 0x3160B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3160B4u;
            // 0x3160b8: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3160BCu; }
        if (ctx->pc != 0x3160BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3160BCu; }
        if (ctx->pc != 0x3160BCu) { return; }
    }
    ctx->pc = 0x3160BCu;
label_3160bc:
    // 0x3160bc: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x3160bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_3160c0:
    // 0x3160c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3160c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3160c4:
    // 0x3160c4: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x3160c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_3160c8:
    // 0x3160c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3160c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3160cc:
    // 0x3160cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3160ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3160d0:
    // 0x3160d0: 0x0  nop
    ctx->pc = 0x3160d0u;
    // NOP
label_3160d4:
    // 0x3160d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3160d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3160d8:
    // 0x3160d8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3160d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3160dc:
    // 0x3160dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3160dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3160e0:
    // 0x3160e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3160e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3160e4:
    // 0x3160e4: 0xc04cab0  jal         func_132AC0
label_3160e8:
    if (ctx->pc == 0x3160E8u) {
        ctx->pc = 0x3160E8u;
            // 0x3160e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3160ECu;
        goto label_3160ec;
    }
    ctx->pc = 0x3160E4u;
    SET_GPR_U32(ctx, 31, 0x3160ECu);
    ctx->pc = 0x3160E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3160E4u;
            // 0x3160e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3160ECu; }
        if (ctx->pc != 0x3160ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3160ECu; }
        if (ctx->pc != 0x3160ECu) { return; }
    }
    ctx->pc = 0x3160ECu;
label_3160ec:
    // 0x3160ec: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x3160ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3160f0:
    // 0x3160f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3160f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3160f4:
    // 0x3160f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3160f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3160f8:
    // 0x3160f8: 0x320f809  jalr        $t9
label_3160fc:
    if (ctx->pc == 0x3160FCu) {
        ctx->pc = 0x3160FCu;
            // 0x3160fc: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x316100u;
        goto label_316100;
    }
    ctx->pc = 0x3160F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316100u);
        ctx->pc = 0x3160FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3160F8u;
            // 0x3160fc: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316100u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316100u; }
            if (ctx->pc != 0x316100u) { return; }
        }
        }
    }
    ctx->pc = 0x316100u;
label_316100:
    // 0x316100: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x316100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_316104:
    // 0x316104: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x316104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_316108:
    // 0x316108: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x316108u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_31610c:
    // 0x31610c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_316110:
    // 0x316110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_316114:
    // 0x316114: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x316114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_316118:
    // 0x316118: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x316118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_31611c:
    // 0x31611c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x31611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_316120:
    // 0x316120: 0xc04c72c  jal         func_131CB0
label_316124:
    if (ctx->pc == 0x316124u) {
        ctx->pc = 0x316124u;
            // 0x316124: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316128u;
        goto label_316128;
    }
    ctx->pc = 0x316120u;
    SET_GPR_U32(ctx, 31, 0x316128u);
    ctx->pc = 0x316124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316120u;
            // 0x316124: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316128u; }
        if (ctx->pc != 0x316128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316128u; }
        if (ctx->pc != 0x316128u) { return; }
    }
    ctx->pc = 0x316128u;
label_316128:
    // 0x316128: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x316128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31612c:
    // 0x31612c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x31612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_316130:
    // 0x316130: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x316130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_316134:
    // 0x316134: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x316134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_316138:
    // 0x316138: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x316138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31613c:
    // 0x31613c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31613cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_316140:
    // 0x316140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316144:
    // 0x316144: 0x3e00008  jr          $ra
label_316148:
    if (ctx->pc == 0x316148u) {
        ctx->pc = 0x316148u;
            // 0x316148: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x31614Cu;
        goto label_31614c;
    }
    ctx->pc = 0x316144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316144u;
            // 0x316148: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31614Cu;
label_31614c:
    // 0x31614c: 0x0  nop
    ctx->pc = 0x31614cu;
    // NOP
}
