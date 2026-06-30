#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00488AF0
// Address: 0x488af0 - 0x4894a0
void sub_00488AF0_0x488af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488AF0_0x488af0");
#endif

    switch (ctx->pc) {
        case 0x488af0u: goto label_488af0;
        case 0x488af4u: goto label_488af4;
        case 0x488af8u: goto label_488af8;
        case 0x488afcu: goto label_488afc;
        case 0x488b00u: goto label_488b00;
        case 0x488b04u: goto label_488b04;
        case 0x488b08u: goto label_488b08;
        case 0x488b0cu: goto label_488b0c;
        case 0x488b10u: goto label_488b10;
        case 0x488b14u: goto label_488b14;
        case 0x488b18u: goto label_488b18;
        case 0x488b1cu: goto label_488b1c;
        case 0x488b20u: goto label_488b20;
        case 0x488b24u: goto label_488b24;
        case 0x488b28u: goto label_488b28;
        case 0x488b2cu: goto label_488b2c;
        case 0x488b30u: goto label_488b30;
        case 0x488b34u: goto label_488b34;
        case 0x488b38u: goto label_488b38;
        case 0x488b3cu: goto label_488b3c;
        case 0x488b40u: goto label_488b40;
        case 0x488b44u: goto label_488b44;
        case 0x488b48u: goto label_488b48;
        case 0x488b4cu: goto label_488b4c;
        case 0x488b50u: goto label_488b50;
        case 0x488b54u: goto label_488b54;
        case 0x488b58u: goto label_488b58;
        case 0x488b5cu: goto label_488b5c;
        case 0x488b60u: goto label_488b60;
        case 0x488b64u: goto label_488b64;
        case 0x488b68u: goto label_488b68;
        case 0x488b6cu: goto label_488b6c;
        case 0x488b70u: goto label_488b70;
        case 0x488b74u: goto label_488b74;
        case 0x488b78u: goto label_488b78;
        case 0x488b7cu: goto label_488b7c;
        case 0x488b80u: goto label_488b80;
        case 0x488b84u: goto label_488b84;
        case 0x488b88u: goto label_488b88;
        case 0x488b8cu: goto label_488b8c;
        case 0x488b90u: goto label_488b90;
        case 0x488b94u: goto label_488b94;
        case 0x488b98u: goto label_488b98;
        case 0x488b9cu: goto label_488b9c;
        case 0x488ba0u: goto label_488ba0;
        case 0x488ba4u: goto label_488ba4;
        case 0x488ba8u: goto label_488ba8;
        case 0x488bacu: goto label_488bac;
        case 0x488bb0u: goto label_488bb0;
        case 0x488bb4u: goto label_488bb4;
        case 0x488bb8u: goto label_488bb8;
        case 0x488bbcu: goto label_488bbc;
        case 0x488bc0u: goto label_488bc0;
        case 0x488bc4u: goto label_488bc4;
        case 0x488bc8u: goto label_488bc8;
        case 0x488bccu: goto label_488bcc;
        case 0x488bd0u: goto label_488bd0;
        case 0x488bd4u: goto label_488bd4;
        case 0x488bd8u: goto label_488bd8;
        case 0x488bdcu: goto label_488bdc;
        case 0x488be0u: goto label_488be0;
        case 0x488be4u: goto label_488be4;
        case 0x488be8u: goto label_488be8;
        case 0x488becu: goto label_488bec;
        case 0x488bf0u: goto label_488bf0;
        case 0x488bf4u: goto label_488bf4;
        case 0x488bf8u: goto label_488bf8;
        case 0x488bfcu: goto label_488bfc;
        case 0x488c00u: goto label_488c00;
        case 0x488c04u: goto label_488c04;
        case 0x488c08u: goto label_488c08;
        case 0x488c0cu: goto label_488c0c;
        case 0x488c10u: goto label_488c10;
        case 0x488c14u: goto label_488c14;
        case 0x488c18u: goto label_488c18;
        case 0x488c1cu: goto label_488c1c;
        case 0x488c20u: goto label_488c20;
        case 0x488c24u: goto label_488c24;
        case 0x488c28u: goto label_488c28;
        case 0x488c2cu: goto label_488c2c;
        case 0x488c30u: goto label_488c30;
        case 0x488c34u: goto label_488c34;
        case 0x488c38u: goto label_488c38;
        case 0x488c3cu: goto label_488c3c;
        case 0x488c40u: goto label_488c40;
        case 0x488c44u: goto label_488c44;
        case 0x488c48u: goto label_488c48;
        case 0x488c4cu: goto label_488c4c;
        case 0x488c50u: goto label_488c50;
        case 0x488c54u: goto label_488c54;
        case 0x488c58u: goto label_488c58;
        case 0x488c5cu: goto label_488c5c;
        case 0x488c60u: goto label_488c60;
        case 0x488c64u: goto label_488c64;
        case 0x488c68u: goto label_488c68;
        case 0x488c6cu: goto label_488c6c;
        case 0x488c70u: goto label_488c70;
        case 0x488c74u: goto label_488c74;
        case 0x488c78u: goto label_488c78;
        case 0x488c7cu: goto label_488c7c;
        case 0x488c80u: goto label_488c80;
        case 0x488c84u: goto label_488c84;
        case 0x488c88u: goto label_488c88;
        case 0x488c8cu: goto label_488c8c;
        case 0x488c90u: goto label_488c90;
        case 0x488c94u: goto label_488c94;
        case 0x488c98u: goto label_488c98;
        case 0x488c9cu: goto label_488c9c;
        case 0x488ca0u: goto label_488ca0;
        case 0x488ca4u: goto label_488ca4;
        case 0x488ca8u: goto label_488ca8;
        case 0x488cacu: goto label_488cac;
        case 0x488cb0u: goto label_488cb0;
        case 0x488cb4u: goto label_488cb4;
        case 0x488cb8u: goto label_488cb8;
        case 0x488cbcu: goto label_488cbc;
        case 0x488cc0u: goto label_488cc0;
        case 0x488cc4u: goto label_488cc4;
        case 0x488cc8u: goto label_488cc8;
        case 0x488cccu: goto label_488ccc;
        case 0x488cd0u: goto label_488cd0;
        case 0x488cd4u: goto label_488cd4;
        case 0x488cd8u: goto label_488cd8;
        case 0x488cdcu: goto label_488cdc;
        case 0x488ce0u: goto label_488ce0;
        case 0x488ce4u: goto label_488ce4;
        case 0x488ce8u: goto label_488ce8;
        case 0x488cecu: goto label_488cec;
        case 0x488cf0u: goto label_488cf0;
        case 0x488cf4u: goto label_488cf4;
        case 0x488cf8u: goto label_488cf8;
        case 0x488cfcu: goto label_488cfc;
        case 0x488d00u: goto label_488d00;
        case 0x488d04u: goto label_488d04;
        case 0x488d08u: goto label_488d08;
        case 0x488d0cu: goto label_488d0c;
        case 0x488d10u: goto label_488d10;
        case 0x488d14u: goto label_488d14;
        case 0x488d18u: goto label_488d18;
        case 0x488d1cu: goto label_488d1c;
        case 0x488d20u: goto label_488d20;
        case 0x488d24u: goto label_488d24;
        case 0x488d28u: goto label_488d28;
        case 0x488d2cu: goto label_488d2c;
        case 0x488d30u: goto label_488d30;
        case 0x488d34u: goto label_488d34;
        case 0x488d38u: goto label_488d38;
        case 0x488d3cu: goto label_488d3c;
        case 0x488d40u: goto label_488d40;
        case 0x488d44u: goto label_488d44;
        case 0x488d48u: goto label_488d48;
        case 0x488d4cu: goto label_488d4c;
        case 0x488d50u: goto label_488d50;
        case 0x488d54u: goto label_488d54;
        case 0x488d58u: goto label_488d58;
        case 0x488d5cu: goto label_488d5c;
        case 0x488d60u: goto label_488d60;
        case 0x488d64u: goto label_488d64;
        case 0x488d68u: goto label_488d68;
        case 0x488d6cu: goto label_488d6c;
        case 0x488d70u: goto label_488d70;
        case 0x488d74u: goto label_488d74;
        case 0x488d78u: goto label_488d78;
        case 0x488d7cu: goto label_488d7c;
        case 0x488d80u: goto label_488d80;
        case 0x488d84u: goto label_488d84;
        case 0x488d88u: goto label_488d88;
        case 0x488d8cu: goto label_488d8c;
        case 0x488d90u: goto label_488d90;
        case 0x488d94u: goto label_488d94;
        case 0x488d98u: goto label_488d98;
        case 0x488d9cu: goto label_488d9c;
        case 0x488da0u: goto label_488da0;
        case 0x488da4u: goto label_488da4;
        case 0x488da8u: goto label_488da8;
        case 0x488dacu: goto label_488dac;
        case 0x488db0u: goto label_488db0;
        case 0x488db4u: goto label_488db4;
        case 0x488db8u: goto label_488db8;
        case 0x488dbcu: goto label_488dbc;
        case 0x488dc0u: goto label_488dc0;
        case 0x488dc4u: goto label_488dc4;
        case 0x488dc8u: goto label_488dc8;
        case 0x488dccu: goto label_488dcc;
        case 0x488dd0u: goto label_488dd0;
        case 0x488dd4u: goto label_488dd4;
        case 0x488dd8u: goto label_488dd8;
        case 0x488ddcu: goto label_488ddc;
        case 0x488de0u: goto label_488de0;
        case 0x488de4u: goto label_488de4;
        case 0x488de8u: goto label_488de8;
        case 0x488decu: goto label_488dec;
        case 0x488df0u: goto label_488df0;
        case 0x488df4u: goto label_488df4;
        case 0x488df8u: goto label_488df8;
        case 0x488dfcu: goto label_488dfc;
        case 0x488e00u: goto label_488e00;
        case 0x488e04u: goto label_488e04;
        case 0x488e08u: goto label_488e08;
        case 0x488e0cu: goto label_488e0c;
        case 0x488e10u: goto label_488e10;
        case 0x488e14u: goto label_488e14;
        case 0x488e18u: goto label_488e18;
        case 0x488e1cu: goto label_488e1c;
        case 0x488e20u: goto label_488e20;
        case 0x488e24u: goto label_488e24;
        case 0x488e28u: goto label_488e28;
        case 0x488e2cu: goto label_488e2c;
        case 0x488e30u: goto label_488e30;
        case 0x488e34u: goto label_488e34;
        case 0x488e38u: goto label_488e38;
        case 0x488e3cu: goto label_488e3c;
        case 0x488e40u: goto label_488e40;
        case 0x488e44u: goto label_488e44;
        case 0x488e48u: goto label_488e48;
        case 0x488e4cu: goto label_488e4c;
        case 0x488e50u: goto label_488e50;
        case 0x488e54u: goto label_488e54;
        case 0x488e58u: goto label_488e58;
        case 0x488e5cu: goto label_488e5c;
        case 0x488e60u: goto label_488e60;
        case 0x488e64u: goto label_488e64;
        case 0x488e68u: goto label_488e68;
        case 0x488e6cu: goto label_488e6c;
        case 0x488e70u: goto label_488e70;
        case 0x488e74u: goto label_488e74;
        case 0x488e78u: goto label_488e78;
        case 0x488e7cu: goto label_488e7c;
        case 0x488e80u: goto label_488e80;
        case 0x488e84u: goto label_488e84;
        case 0x488e88u: goto label_488e88;
        case 0x488e8cu: goto label_488e8c;
        case 0x488e90u: goto label_488e90;
        case 0x488e94u: goto label_488e94;
        case 0x488e98u: goto label_488e98;
        case 0x488e9cu: goto label_488e9c;
        case 0x488ea0u: goto label_488ea0;
        case 0x488ea4u: goto label_488ea4;
        case 0x488ea8u: goto label_488ea8;
        case 0x488eacu: goto label_488eac;
        case 0x488eb0u: goto label_488eb0;
        case 0x488eb4u: goto label_488eb4;
        case 0x488eb8u: goto label_488eb8;
        case 0x488ebcu: goto label_488ebc;
        case 0x488ec0u: goto label_488ec0;
        case 0x488ec4u: goto label_488ec4;
        case 0x488ec8u: goto label_488ec8;
        case 0x488eccu: goto label_488ecc;
        case 0x488ed0u: goto label_488ed0;
        case 0x488ed4u: goto label_488ed4;
        case 0x488ed8u: goto label_488ed8;
        case 0x488edcu: goto label_488edc;
        case 0x488ee0u: goto label_488ee0;
        case 0x488ee4u: goto label_488ee4;
        case 0x488ee8u: goto label_488ee8;
        case 0x488eecu: goto label_488eec;
        case 0x488ef0u: goto label_488ef0;
        case 0x488ef4u: goto label_488ef4;
        case 0x488ef8u: goto label_488ef8;
        case 0x488efcu: goto label_488efc;
        case 0x488f00u: goto label_488f00;
        case 0x488f04u: goto label_488f04;
        case 0x488f08u: goto label_488f08;
        case 0x488f0cu: goto label_488f0c;
        case 0x488f10u: goto label_488f10;
        case 0x488f14u: goto label_488f14;
        case 0x488f18u: goto label_488f18;
        case 0x488f1cu: goto label_488f1c;
        case 0x488f20u: goto label_488f20;
        case 0x488f24u: goto label_488f24;
        case 0x488f28u: goto label_488f28;
        case 0x488f2cu: goto label_488f2c;
        case 0x488f30u: goto label_488f30;
        case 0x488f34u: goto label_488f34;
        case 0x488f38u: goto label_488f38;
        case 0x488f3cu: goto label_488f3c;
        case 0x488f40u: goto label_488f40;
        case 0x488f44u: goto label_488f44;
        case 0x488f48u: goto label_488f48;
        case 0x488f4cu: goto label_488f4c;
        case 0x488f50u: goto label_488f50;
        case 0x488f54u: goto label_488f54;
        case 0x488f58u: goto label_488f58;
        case 0x488f5cu: goto label_488f5c;
        case 0x488f60u: goto label_488f60;
        case 0x488f64u: goto label_488f64;
        case 0x488f68u: goto label_488f68;
        case 0x488f6cu: goto label_488f6c;
        case 0x488f70u: goto label_488f70;
        case 0x488f74u: goto label_488f74;
        case 0x488f78u: goto label_488f78;
        case 0x488f7cu: goto label_488f7c;
        case 0x488f80u: goto label_488f80;
        case 0x488f84u: goto label_488f84;
        case 0x488f88u: goto label_488f88;
        case 0x488f8cu: goto label_488f8c;
        case 0x488f90u: goto label_488f90;
        case 0x488f94u: goto label_488f94;
        case 0x488f98u: goto label_488f98;
        case 0x488f9cu: goto label_488f9c;
        case 0x488fa0u: goto label_488fa0;
        case 0x488fa4u: goto label_488fa4;
        case 0x488fa8u: goto label_488fa8;
        case 0x488facu: goto label_488fac;
        case 0x488fb0u: goto label_488fb0;
        case 0x488fb4u: goto label_488fb4;
        case 0x488fb8u: goto label_488fb8;
        case 0x488fbcu: goto label_488fbc;
        case 0x488fc0u: goto label_488fc0;
        case 0x488fc4u: goto label_488fc4;
        case 0x488fc8u: goto label_488fc8;
        case 0x488fccu: goto label_488fcc;
        case 0x488fd0u: goto label_488fd0;
        case 0x488fd4u: goto label_488fd4;
        case 0x488fd8u: goto label_488fd8;
        case 0x488fdcu: goto label_488fdc;
        case 0x488fe0u: goto label_488fe0;
        case 0x488fe4u: goto label_488fe4;
        case 0x488fe8u: goto label_488fe8;
        case 0x488fecu: goto label_488fec;
        case 0x488ff0u: goto label_488ff0;
        case 0x488ff4u: goto label_488ff4;
        case 0x488ff8u: goto label_488ff8;
        case 0x488ffcu: goto label_488ffc;
        case 0x489000u: goto label_489000;
        case 0x489004u: goto label_489004;
        case 0x489008u: goto label_489008;
        case 0x48900cu: goto label_48900c;
        case 0x489010u: goto label_489010;
        case 0x489014u: goto label_489014;
        case 0x489018u: goto label_489018;
        case 0x48901cu: goto label_48901c;
        case 0x489020u: goto label_489020;
        case 0x489024u: goto label_489024;
        case 0x489028u: goto label_489028;
        case 0x48902cu: goto label_48902c;
        case 0x489030u: goto label_489030;
        case 0x489034u: goto label_489034;
        case 0x489038u: goto label_489038;
        case 0x48903cu: goto label_48903c;
        case 0x489040u: goto label_489040;
        case 0x489044u: goto label_489044;
        case 0x489048u: goto label_489048;
        case 0x48904cu: goto label_48904c;
        case 0x489050u: goto label_489050;
        case 0x489054u: goto label_489054;
        case 0x489058u: goto label_489058;
        case 0x48905cu: goto label_48905c;
        case 0x489060u: goto label_489060;
        case 0x489064u: goto label_489064;
        case 0x489068u: goto label_489068;
        case 0x48906cu: goto label_48906c;
        case 0x489070u: goto label_489070;
        case 0x489074u: goto label_489074;
        case 0x489078u: goto label_489078;
        case 0x48907cu: goto label_48907c;
        case 0x489080u: goto label_489080;
        case 0x489084u: goto label_489084;
        case 0x489088u: goto label_489088;
        case 0x48908cu: goto label_48908c;
        case 0x489090u: goto label_489090;
        case 0x489094u: goto label_489094;
        case 0x489098u: goto label_489098;
        case 0x48909cu: goto label_48909c;
        case 0x4890a0u: goto label_4890a0;
        case 0x4890a4u: goto label_4890a4;
        case 0x4890a8u: goto label_4890a8;
        case 0x4890acu: goto label_4890ac;
        case 0x4890b0u: goto label_4890b0;
        case 0x4890b4u: goto label_4890b4;
        case 0x4890b8u: goto label_4890b8;
        case 0x4890bcu: goto label_4890bc;
        case 0x4890c0u: goto label_4890c0;
        case 0x4890c4u: goto label_4890c4;
        case 0x4890c8u: goto label_4890c8;
        case 0x4890ccu: goto label_4890cc;
        case 0x4890d0u: goto label_4890d0;
        case 0x4890d4u: goto label_4890d4;
        case 0x4890d8u: goto label_4890d8;
        case 0x4890dcu: goto label_4890dc;
        case 0x4890e0u: goto label_4890e0;
        case 0x4890e4u: goto label_4890e4;
        case 0x4890e8u: goto label_4890e8;
        case 0x4890ecu: goto label_4890ec;
        case 0x4890f0u: goto label_4890f0;
        case 0x4890f4u: goto label_4890f4;
        case 0x4890f8u: goto label_4890f8;
        case 0x4890fcu: goto label_4890fc;
        case 0x489100u: goto label_489100;
        case 0x489104u: goto label_489104;
        case 0x489108u: goto label_489108;
        case 0x48910cu: goto label_48910c;
        case 0x489110u: goto label_489110;
        case 0x489114u: goto label_489114;
        case 0x489118u: goto label_489118;
        case 0x48911cu: goto label_48911c;
        case 0x489120u: goto label_489120;
        case 0x489124u: goto label_489124;
        case 0x489128u: goto label_489128;
        case 0x48912cu: goto label_48912c;
        case 0x489130u: goto label_489130;
        case 0x489134u: goto label_489134;
        case 0x489138u: goto label_489138;
        case 0x48913cu: goto label_48913c;
        case 0x489140u: goto label_489140;
        case 0x489144u: goto label_489144;
        case 0x489148u: goto label_489148;
        case 0x48914cu: goto label_48914c;
        case 0x489150u: goto label_489150;
        case 0x489154u: goto label_489154;
        case 0x489158u: goto label_489158;
        case 0x48915cu: goto label_48915c;
        case 0x489160u: goto label_489160;
        case 0x489164u: goto label_489164;
        case 0x489168u: goto label_489168;
        case 0x48916cu: goto label_48916c;
        case 0x489170u: goto label_489170;
        case 0x489174u: goto label_489174;
        case 0x489178u: goto label_489178;
        case 0x48917cu: goto label_48917c;
        case 0x489180u: goto label_489180;
        case 0x489184u: goto label_489184;
        case 0x489188u: goto label_489188;
        case 0x48918cu: goto label_48918c;
        case 0x489190u: goto label_489190;
        case 0x489194u: goto label_489194;
        case 0x489198u: goto label_489198;
        case 0x48919cu: goto label_48919c;
        case 0x4891a0u: goto label_4891a0;
        case 0x4891a4u: goto label_4891a4;
        case 0x4891a8u: goto label_4891a8;
        case 0x4891acu: goto label_4891ac;
        case 0x4891b0u: goto label_4891b0;
        case 0x4891b4u: goto label_4891b4;
        case 0x4891b8u: goto label_4891b8;
        case 0x4891bcu: goto label_4891bc;
        case 0x4891c0u: goto label_4891c0;
        case 0x4891c4u: goto label_4891c4;
        case 0x4891c8u: goto label_4891c8;
        case 0x4891ccu: goto label_4891cc;
        case 0x4891d0u: goto label_4891d0;
        case 0x4891d4u: goto label_4891d4;
        case 0x4891d8u: goto label_4891d8;
        case 0x4891dcu: goto label_4891dc;
        case 0x4891e0u: goto label_4891e0;
        case 0x4891e4u: goto label_4891e4;
        case 0x4891e8u: goto label_4891e8;
        case 0x4891ecu: goto label_4891ec;
        case 0x4891f0u: goto label_4891f0;
        case 0x4891f4u: goto label_4891f4;
        case 0x4891f8u: goto label_4891f8;
        case 0x4891fcu: goto label_4891fc;
        case 0x489200u: goto label_489200;
        case 0x489204u: goto label_489204;
        case 0x489208u: goto label_489208;
        case 0x48920cu: goto label_48920c;
        case 0x489210u: goto label_489210;
        case 0x489214u: goto label_489214;
        case 0x489218u: goto label_489218;
        case 0x48921cu: goto label_48921c;
        case 0x489220u: goto label_489220;
        case 0x489224u: goto label_489224;
        case 0x489228u: goto label_489228;
        case 0x48922cu: goto label_48922c;
        case 0x489230u: goto label_489230;
        case 0x489234u: goto label_489234;
        case 0x489238u: goto label_489238;
        case 0x48923cu: goto label_48923c;
        case 0x489240u: goto label_489240;
        case 0x489244u: goto label_489244;
        case 0x489248u: goto label_489248;
        case 0x48924cu: goto label_48924c;
        case 0x489250u: goto label_489250;
        case 0x489254u: goto label_489254;
        case 0x489258u: goto label_489258;
        case 0x48925cu: goto label_48925c;
        case 0x489260u: goto label_489260;
        case 0x489264u: goto label_489264;
        case 0x489268u: goto label_489268;
        case 0x48926cu: goto label_48926c;
        case 0x489270u: goto label_489270;
        case 0x489274u: goto label_489274;
        case 0x489278u: goto label_489278;
        case 0x48927cu: goto label_48927c;
        case 0x489280u: goto label_489280;
        case 0x489284u: goto label_489284;
        case 0x489288u: goto label_489288;
        case 0x48928cu: goto label_48928c;
        case 0x489290u: goto label_489290;
        case 0x489294u: goto label_489294;
        case 0x489298u: goto label_489298;
        case 0x48929cu: goto label_48929c;
        case 0x4892a0u: goto label_4892a0;
        case 0x4892a4u: goto label_4892a4;
        case 0x4892a8u: goto label_4892a8;
        case 0x4892acu: goto label_4892ac;
        case 0x4892b0u: goto label_4892b0;
        case 0x4892b4u: goto label_4892b4;
        case 0x4892b8u: goto label_4892b8;
        case 0x4892bcu: goto label_4892bc;
        case 0x4892c0u: goto label_4892c0;
        case 0x4892c4u: goto label_4892c4;
        case 0x4892c8u: goto label_4892c8;
        case 0x4892ccu: goto label_4892cc;
        case 0x4892d0u: goto label_4892d0;
        case 0x4892d4u: goto label_4892d4;
        case 0x4892d8u: goto label_4892d8;
        case 0x4892dcu: goto label_4892dc;
        case 0x4892e0u: goto label_4892e0;
        case 0x4892e4u: goto label_4892e4;
        case 0x4892e8u: goto label_4892e8;
        case 0x4892ecu: goto label_4892ec;
        case 0x4892f0u: goto label_4892f0;
        case 0x4892f4u: goto label_4892f4;
        case 0x4892f8u: goto label_4892f8;
        case 0x4892fcu: goto label_4892fc;
        case 0x489300u: goto label_489300;
        case 0x489304u: goto label_489304;
        case 0x489308u: goto label_489308;
        case 0x48930cu: goto label_48930c;
        case 0x489310u: goto label_489310;
        case 0x489314u: goto label_489314;
        case 0x489318u: goto label_489318;
        case 0x48931cu: goto label_48931c;
        case 0x489320u: goto label_489320;
        case 0x489324u: goto label_489324;
        case 0x489328u: goto label_489328;
        case 0x48932cu: goto label_48932c;
        case 0x489330u: goto label_489330;
        case 0x489334u: goto label_489334;
        case 0x489338u: goto label_489338;
        case 0x48933cu: goto label_48933c;
        case 0x489340u: goto label_489340;
        case 0x489344u: goto label_489344;
        case 0x489348u: goto label_489348;
        case 0x48934cu: goto label_48934c;
        case 0x489350u: goto label_489350;
        case 0x489354u: goto label_489354;
        case 0x489358u: goto label_489358;
        case 0x48935cu: goto label_48935c;
        case 0x489360u: goto label_489360;
        case 0x489364u: goto label_489364;
        case 0x489368u: goto label_489368;
        case 0x48936cu: goto label_48936c;
        case 0x489370u: goto label_489370;
        case 0x489374u: goto label_489374;
        case 0x489378u: goto label_489378;
        case 0x48937cu: goto label_48937c;
        case 0x489380u: goto label_489380;
        case 0x489384u: goto label_489384;
        case 0x489388u: goto label_489388;
        case 0x48938cu: goto label_48938c;
        case 0x489390u: goto label_489390;
        case 0x489394u: goto label_489394;
        case 0x489398u: goto label_489398;
        case 0x48939cu: goto label_48939c;
        case 0x4893a0u: goto label_4893a0;
        case 0x4893a4u: goto label_4893a4;
        case 0x4893a8u: goto label_4893a8;
        case 0x4893acu: goto label_4893ac;
        case 0x4893b0u: goto label_4893b0;
        case 0x4893b4u: goto label_4893b4;
        case 0x4893b8u: goto label_4893b8;
        case 0x4893bcu: goto label_4893bc;
        case 0x4893c0u: goto label_4893c0;
        case 0x4893c4u: goto label_4893c4;
        case 0x4893c8u: goto label_4893c8;
        case 0x4893ccu: goto label_4893cc;
        case 0x4893d0u: goto label_4893d0;
        case 0x4893d4u: goto label_4893d4;
        case 0x4893d8u: goto label_4893d8;
        case 0x4893dcu: goto label_4893dc;
        case 0x4893e0u: goto label_4893e0;
        case 0x4893e4u: goto label_4893e4;
        case 0x4893e8u: goto label_4893e8;
        case 0x4893ecu: goto label_4893ec;
        case 0x4893f0u: goto label_4893f0;
        case 0x4893f4u: goto label_4893f4;
        case 0x4893f8u: goto label_4893f8;
        case 0x4893fcu: goto label_4893fc;
        case 0x489400u: goto label_489400;
        case 0x489404u: goto label_489404;
        case 0x489408u: goto label_489408;
        case 0x48940cu: goto label_48940c;
        case 0x489410u: goto label_489410;
        case 0x489414u: goto label_489414;
        case 0x489418u: goto label_489418;
        case 0x48941cu: goto label_48941c;
        case 0x489420u: goto label_489420;
        case 0x489424u: goto label_489424;
        case 0x489428u: goto label_489428;
        case 0x48942cu: goto label_48942c;
        case 0x489430u: goto label_489430;
        case 0x489434u: goto label_489434;
        case 0x489438u: goto label_489438;
        case 0x48943cu: goto label_48943c;
        case 0x489440u: goto label_489440;
        case 0x489444u: goto label_489444;
        case 0x489448u: goto label_489448;
        case 0x48944cu: goto label_48944c;
        case 0x489450u: goto label_489450;
        case 0x489454u: goto label_489454;
        case 0x489458u: goto label_489458;
        case 0x48945cu: goto label_48945c;
        case 0x489460u: goto label_489460;
        case 0x489464u: goto label_489464;
        case 0x489468u: goto label_489468;
        case 0x48946cu: goto label_48946c;
        case 0x489470u: goto label_489470;
        case 0x489474u: goto label_489474;
        case 0x489478u: goto label_489478;
        case 0x48947cu: goto label_48947c;
        case 0x489480u: goto label_489480;
        case 0x489484u: goto label_489484;
        case 0x489488u: goto label_489488;
        case 0x48948cu: goto label_48948c;
        case 0x489490u: goto label_489490;
        case 0x489494u: goto label_489494;
        case 0x489498u: goto label_489498;
        case 0x48949cu: goto label_48949c;
        default: break;
    }

    ctx->pc = 0x488af0u;

label_488af0:
    // 0x488af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x488af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_488af4:
    // 0x488af4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x488af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488af8:
    // 0x488af8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x488af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_488afc:
    // 0x488afc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x488afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_488b00:
    // 0x488b00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x488b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_488b04:
    // 0x488b04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x488b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_488b08:
    // 0x488b08: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x488b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
label_488b0c:
    // 0x488b0c: 0x8c900058  lw          $s0, 0x58($a0)
    ctx->pc = 0x488b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_488b10:
    // 0x488b10: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_488b14:
    if (ctx->pc == 0x488B14u) {
        ctx->pc = 0x488B14u;
            // 0x488b14: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488B18u;
        goto label_488b18;
    }
    ctx->pc = 0x488B10u;
    {
        const bool branch_taken_0x488b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x488B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488B10u;
            // 0x488b14: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488b10) {
            ctx->pc = 0x488B48u;
            goto label_488b48;
        }
    }
    ctx->pc = 0x488B18u;
label_488b18:
    // 0x488b18: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x488b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_488b1c:
    // 0x488b1c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_488b20:
    if (ctx->pc == 0x488B20u) {
        ctx->pc = 0x488B24u;
        goto label_488b24;
    }
    ctx->pc = 0x488B1Cu;
    {
        const bool branch_taken_0x488b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x488b1c) {
            ctx->pc = 0x488B48u;
            goto label_488b48;
        }
    }
    ctx->pc = 0x488B24u;
label_488b24:
    // 0x488b24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x488b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488b28:
    // 0x488b28: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x488b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_488b2c:
    // 0x488b2c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x488b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_488b30:
    // 0x488b30: 0x320f809  jalr        $t9
label_488b34:
    if (ctx->pc == 0x488B34u) {
        ctx->pc = 0x488B34u;
            // 0x488b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488B38u;
        goto label_488b38;
    }
    ctx->pc = 0x488B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x488B38u);
        ctx->pc = 0x488B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488B30u;
            // 0x488b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x488B38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x488B38u; }
            if (ctx->pc != 0x488B38u) { return; }
        }
        }
    }
    ctx->pc = 0x488B38u;
label_488b38:
    // 0x488b38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x488b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_488b3c:
    // 0x488b3c: 0x2e230006  sltiu       $v1, $s1, 0x6
    ctx->pc = 0x488b3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_488b40:
    // 0x488b40: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_488b44:
    if (ctx->pc == 0x488B44u) {
        ctx->pc = 0x488B44u;
            // 0x488b44: 0x26100280  addiu       $s0, $s0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
        ctx->pc = 0x488B48u;
        goto label_488b48;
    }
    ctx->pc = 0x488B40u;
    {
        const bool branch_taken_0x488b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x488B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488B40u;
            // 0x488b44: 0x26100280  addiu       $s0, $s0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488b40) {
            ctx->pc = 0x488B28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_488b28;
        }
    }
    ctx->pc = 0x488B48u;
label_488b48:
    // 0x488b48: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x488b48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_488b4c:
    // 0x488b4c: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x488b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
label_488b50:
    // 0x488b50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x488b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_488b54:
    // 0x488b54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x488b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488b58:
    // 0x488b58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488b5c:
    // 0x488b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488b60:
    // 0x488b60: 0x3e00008  jr          $ra
label_488b64:
    if (ctx->pc == 0x488B64u) {
        ctx->pc = 0x488B64u;
            // 0x488b64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x488B68u;
        goto label_488b68;
    }
    ctx->pc = 0x488B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488B60u;
            // 0x488b64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488B68u;
label_488b68:
    // 0x488b68: 0x0  nop
    ctx->pc = 0x488b68u;
    // NOP
label_488b6c:
    // 0x488b6c: 0x0  nop
    ctx->pc = 0x488b6cu;
    // NOP
label_488b70:
    // 0x488b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x488b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_488b74:
    // 0x488b74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x488b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_488b78:
    // 0x488b78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x488b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_488b7c:
    // 0x488b7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x488b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_488b80:
    // 0x488b80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x488b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_488b84:
    // 0x488b84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x488b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_488b88:
    // 0x488b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x488b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_488b8c:
    // 0x488b8c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x488b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_488b90:
    // 0x488b90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x488b90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_488b94:
    // 0x488b94: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_488b98:
    if (ctx->pc == 0x488B98u) {
        ctx->pc = 0x488B98u;
            // 0x488b98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488B9Cu;
        goto label_488b9c;
    }
    ctx->pc = 0x488B94u;
    {
        const bool branch_taken_0x488b94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x488B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488B94u;
            // 0x488b98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488b94) {
            ctx->pc = 0x488BE0u;
            goto label_488be0;
        }
    }
    ctx->pc = 0x488B9Cu;
label_488b9c:
    // 0x488b9c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x488b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_488ba0:
    // 0x488ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x488ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488ba4:
    // 0x488ba4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x488ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_488ba8:
    // 0x488ba8: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_488bac:
    if (ctx->pc == 0x488BACu) {
        ctx->pc = 0x488BACu;
            // 0x488bac: 0x24130006  addiu       $s3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x488BB0u;
        goto label_488bb0;
    }
    ctx->pc = 0x488BA8u;
    {
        const bool branch_taken_0x488ba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x488BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488BA8u;
            // 0x488bac: 0x24130006  addiu       $s3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488ba8) {
            ctx->pc = 0x488BD8u;
            goto label_488bd8;
        }
    }
    ctx->pc = 0x488BB0u;
label_488bb0:
    // 0x488bb0: 0xae330054  sw          $s3, 0x54($s1)
    ctx->pc = 0x488bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 19));
label_488bb4:
    // 0x488bb4: 0x8e320058  lw          $s2, 0x58($s1)
    ctx->pc = 0x488bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_488bb8:
    // 0x488bb8: 0xc121e50  jal         func_487940
label_488bbc:
    if (ctx->pc == 0x488BBCu) {
        ctx->pc = 0x488BBCu;
            // 0x488bbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488BC0u;
        goto label_488bc0;
    }
    ctx->pc = 0x488BB8u;
    SET_GPR_U32(ctx, 31, 0x488BC0u);
    ctx->pc = 0x488BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488BB8u;
            // 0x488bbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x487940u;
    if (runtime->hasFunction(0x487940u)) {
        auto targetFn = runtime->lookupFunction(0x487940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488BC0u; }
        if (ctx->pc != 0x488BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00487940_0x487940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488BC0u; }
        if (ctx->pc != 0x488BC0u) { return; }
    }
    ctx->pc = 0x488BC0u;
label_488bc0:
    // 0x488bc0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x488bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_488bc4:
    // 0x488bc4: 0x26520280  addiu       $s2, $s2, 0x280
    ctx->pc = 0x488bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 640));
label_488bc8:
    // 0x488bc8: 0x0  nop
    ctx->pc = 0x488bc8u;
    // NOP
label_488bcc:
    // 0x488bcc: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
label_488bd0:
    if (ctx->pc == 0x488BD0u) {
        ctx->pc = 0x488BD4u;
        goto label_488bd4;
    }
    ctx->pc = 0x488BCCu;
    {
        const bool branch_taken_0x488bcc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x488bcc) {
            ctx->pc = 0x488BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_488bb8;
        }
    }
    ctx->pc = 0x488BD4u;
label_488bd4:
    // 0x488bd4: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x488bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_488bd8:
    // 0x488bd8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x488bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_488bdc:
    // 0x488bdc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x488bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_488be0:
    // 0x488be0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x488be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_488be4:
    // 0x488be4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x488be4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_488be8:
    // 0x488be8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x488be8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488bec:
    // 0x488bec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488bf0:
    // 0x488bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488bf4:
    // 0x488bf4: 0x3e00008  jr          $ra
label_488bf8:
    if (ctx->pc == 0x488BF8u) {
        ctx->pc = 0x488BF8u;
            // 0x488bf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x488BFCu;
        goto label_488bfc;
    }
    ctx->pc = 0x488BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488BF4u;
            // 0x488bf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488BFCu;
label_488bfc:
    // 0x488bfc: 0x0  nop
    ctx->pc = 0x488bfcu;
    // NOP
label_488c00:
    // 0x488c00: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x488c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_488c04:
    // 0x488c04: 0x3e00008  jr          $ra
label_488c08:
    if (ctx->pc == 0x488C08u) {
        ctx->pc = 0x488C08u;
            // 0x488c08: 0x2442fd68  addiu       $v0, $v0, -0x298 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966632));
        ctx->pc = 0x488C0Cu;
        goto label_488c0c;
    }
    ctx->pc = 0x488C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488C04u;
            // 0x488c08: 0x2442fd68  addiu       $v0, $v0, -0x298 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966632));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488C0Cu;
label_488c0c:
    // 0x488c0c: 0x0  nop
    ctx->pc = 0x488c0cu;
    // NOP
label_488c10:
    // 0x488c10: 0x3e00008  jr          $ra
label_488c14:
    if (ctx->pc == 0x488C14u) {
        ctx->pc = 0x488C14u;
            // 0x488c14: 0x2402523a  addiu       $v0, $zero, 0x523A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21050));
        ctx->pc = 0x488C18u;
        goto label_488c18;
    }
    ctx->pc = 0x488C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488C10u;
            // 0x488c14: 0x2402523a  addiu       $v0, $zero, 0x523A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488C18u;
label_488c18:
    // 0x488c18: 0x0  nop
    ctx->pc = 0x488c18u;
    // NOP
label_488c1c:
    // 0x488c1c: 0x0  nop
    ctx->pc = 0x488c1cu;
    // NOP
label_488c20:
    // 0x488c20: 0x81221ec  j           func_4887B0
label_488c24:
    if (ctx->pc == 0x488C24u) {
        ctx->pc = 0x488C24u;
            // 0x488c24: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x488C28u;
        goto label_488c28;
    }
    ctx->pc = 0x488C20u;
    ctx->pc = 0x488C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488C20u;
            // 0x488c24: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4887B0u;
    {
        auto targetFn = runtime->lookupFunction(0x4887B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x488C28u;
label_488c28:
    // 0x488c28: 0x0  nop
    ctx->pc = 0x488c28u;
    // NOP
label_488c2c:
    // 0x488c2c: 0x0  nop
    ctx->pc = 0x488c2cu;
    // NOP
label_488c30:
    // 0x488c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x488c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_488c34:
    // 0x488c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x488c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_488c38:
    // 0x488c38: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x488c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_488c3c:
    // 0x488c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x488c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_488c40:
    // 0x488c40: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x488c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_488c44:
    // 0x488c44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x488c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488c48:
    // 0x488c48: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x488c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_488c4c:
    // 0x488c4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x488c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_488c50:
    // 0x488c50: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x488c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_488c54:
    // 0x488c54: 0x2484f9f0  addiu       $a0, $a0, -0x610
    ctx->pc = 0x488c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965744));
label_488c58:
    // 0x488c58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x488c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_488c5c:
    // 0x488c5c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x488c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_488c60:
    // 0x488c60: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x488c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_488c64:
    // 0x488c64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x488c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_488c68:
    // 0x488c68: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x488c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_488c6c:
    // 0x488c6c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x488c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_488c70:
    // 0x488c70: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x488c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_488c74:
    // 0x488c74: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x488c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_488c78:
    // 0x488c78: 0xc075128  jal         func_1D44A0
label_488c7c:
    if (ctx->pc == 0x488C7Cu) {
        ctx->pc = 0x488C7Cu;
            // 0x488c7c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x488C80u;
        goto label_488c80;
    }
    ctx->pc = 0x488C78u;
    SET_GPR_U32(ctx, 31, 0x488C80u);
    ctx->pc = 0x488C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488C78u;
            // 0x488c7c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488C80u; }
        if (ctx->pc != 0x488C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488C80u; }
        if (ctx->pc != 0x488C80u) { return; }
    }
    ctx->pc = 0x488C80u;
label_488c80:
    // 0x488c80: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x488c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_488c84:
    // 0x488c84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488c88:
    // 0x488c88: 0x8c65f9f0  lw          $a1, -0x610($v1)
    ctx->pc = 0x488c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965744)));
label_488c8c:
    // 0x488c8c: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x488c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_488c90:
    // 0x488c90: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x488c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_488c94:
    // 0x488c94: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x488c94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_488c98:
    // 0x488c98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_488c9c:
    if (ctx->pc == 0x488C9Cu) {
        ctx->pc = 0x488CA0u;
        goto label_488ca0;
    }
    ctx->pc = 0x488C98u;
    {
        const bool branch_taken_0x488c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488c98) {
            ctx->pc = 0x488CA8u;
            goto label_488ca8;
        }
    }
    ctx->pc = 0x488CA0u;
label_488ca0:
    // 0x488ca0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488ca4:
    // 0x488ca4: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x488ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_488ca8:
    // 0x488ca8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488cac:
    // 0x488cac: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x488cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_488cb0:
    // 0x488cb0: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x488cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_488cb4:
    // 0x488cb4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x488cb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_488cb8:
    // 0x488cb8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_488cbc:
    if (ctx->pc == 0x488CBCu) {
        ctx->pc = 0x488CBCu;
            // 0x488cbc: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->pc = 0x488CC0u;
        goto label_488cc0;
    }
    ctx->pc = 0x488CB8u;
    {
        const bool branch_taken_0x488cb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x488CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488CB8u;
            // 0x488cbc: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488cb8) {
            ctx->pc = 0x488CC8u;
            goto label_488cc8;
        }
    }
    ctx->pc = 0x488CC0u;
label_488cc0:
    // 0x488cc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488cc4:
    // 0x488cc4: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x488cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_488cc8:
    // 0x488cc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488ccc:
    // 0x488ccc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x488cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_488cd0:
    // 0x488cd0: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x488cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_488cd4:
    // 0x488cd4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x488cd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_488cd8:
    // 0x488cd8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_488cdc:
    if (ctx->pc == 0x488CDCu) {
        ctx->pc = 0x488CE0u;
        goto label_488ce0;
    }
    ctx->pc = 0x488CD8u;
    {
        const bool branch_taken_0x488cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488cd8) {
            ctx->pc = 0x488CE8u;
            goto label_488ce8;
        }
    }
    ctx->pc = 0x488CE0u;
label_488ce0:
    // 0x488ce0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488ce4:
    // 0x488ce4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x488ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_488ce8:
    // 0x488ce8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488cec:
    // 0x488cec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x488cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_488cf0:
    // 0x488cf0: 0x8c42e3a0  lw          $v0, -0x1C60($v0)
    ctx->pc = 0x488cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960032)));
label_488cf4:
    // 0x488cf4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x488cf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_488cf8:
    // 0x488cf8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_488cfc:
    if (ctx->pc == 0x488CFCu) {
        ctx->pc = 0x488D00u;
        goto label_488d00;
    }
    ctx->pc = 0x488CF8u;
    {
        const bool branch_taken_0x488cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488cf8) {
            ctx->pc = 0x488D08u;
            goto label_488d08;
        }
    }
    ctx->pc = 0x488D00u;
label_488d00:
    // 0x488d00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488d04:
    // 0x488d04: 0xac43e3a0  sw          $v1, -0x1C60($v0)
    ctx->pc = 0x488d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960032), GPR_U32(ctx, 3));
label_488d08:
    // 0x488d08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x488d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_488d0c:
    // 0x488d0c: 0x8c42f5b8  lw          $v0, -0xA48($v0)
    ctx->pc = 0x488d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964664)));
label_488d10:
    // 0x488d10: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_488d14:
    if (ctx->pc == 0x488D14u) {
        ctx->pc = 0x488D14u;
            // 0x488d14: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x488D18u;
        goto label_488d18;
    }
    ctx->pc = 0x488D10u;
    {
        const bool branch_taken_0x488d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x488d10) {
            ctx->pc = 0x488D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x488D10u;
            // 0x488d14: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x488DF4u;
            goto label_488df4;
        }
    }
    ctx->pc = 0x488D18u;
label_488d18:
    // 0x488d18: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x488d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_488d1c:
    // 0x488d1c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x488d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_488d20:
    // 0x488d20: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x488d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_488d24:
    // 0x488d24: 0x2484f5b8  addiu       $a0, $a0, -0xA48
    ctx->pc = 0x488d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964664));
label_488d28:
    // 0x488d28: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x488d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_488d2c:
    // 0x488d2c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x488d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_488d30:
    // 0x488d30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x488d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_488d34:
    // 0x488d34: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x488d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_488d38:
    // 0x488d38: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x488d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_488d3c:
    // 0x488d3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x488d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_488d40:
    // 0x488d40: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x488d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_488d44:
    // 0x488d44: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x488d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_488d48:
    // 0x488d48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x488d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_488d4c:
    // 0x488d4c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x488d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_488d50:
    // 0x488d50: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x488d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_488d54:
    // 0x488d54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x488d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_488d58:
    // 0x488d58: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x488d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_488d5c:
    // 0x488d5c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x488d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_488d60:
    // 0x488d60: 0xc075128  jal         func_1D44A0
label_488d64:
    if (ctx->pc == 0x488D64u) {
        ctx->pc = 0x488D64u;
            // 0x488d64: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x488D68u;
        goto label_488d68;
    }
    ctx->pc = 0x488D60u;
    SET_GPR_U32(ctx, 31, 0x488D68u);
    ctx->pc = 0x488D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488D60u;
            // 0x488d64: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488D68u; }
        if (ctx->pc != 0x488D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488D68u; }
        if (ctx->pc != 0x488D68u) { return; }
    }
    ctx->pc = 0x488D68u;
label_488d68:
    // 0x488d68: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x488d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_488d6c:
    // 0x488d6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488d70:
    // 0x488d70: 0x8c65f5b8  lw          $a1, -0xA48($v1)
    ctx->pc = 0x488d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964664)));
label_488d74:
    // 0x488d74: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x488d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_488d78:
    // 0x488d78: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x488d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_488d7c:
    // 0x488d7c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x488d7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_488d80:
    // 0x488d80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_488d84:
    if (ctx->pc == 0x488D84u) {
        ctx->pc = 0x488D88u;
        goto label_488d88;
    }
    ctx->pc = 0x488D80u;
    {
        const bool branch_taken_0x488d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488d80) {
            ctx->pc = 0x488D90u;
            goto label_488d90;
        }
    }
    ctx->pc = 0x488D88u;
label_488d88:
    // 0x488d88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488d8c:
    // 0x488d8c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x488d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_488d90:
    // 0x488d90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488d94:
    // 0x488d94: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x488d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_488d98:
    // 0x488d98: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x488d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_488d9c:
    // 0x488d9c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x488d9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_488da0:
    // 0x488da0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_488da4:
    if (ctx->pc == 0x488DA4u) {
        ctx->pc = 0x488DA4u;
            // 0x488da4: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->pc = 0x488DA8u;
        goto label_488da8;
    }
    ctx->pc = 0x488DA0u;
    {
        const bool branch_taken_0x488da0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x488DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488DA0u;
            // 0x488da4: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488da0) {
            ctx->pc = 0x488DB0u;
            goto label_488db0;
        }
    }
    ctx->pc = 0x488DA8u;
label_488da8:
    // 0x488da8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488dac:
    // 0x488dac: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x488dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_488db0:
    // 0x488db0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488db4:
    // 0x488db4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x488db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_488db8:
    // 0x488db8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x488db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_488dbc:
    // 0x488dbc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x488dbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_488dc0:
    // 0x488dc0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_488dc4:
    if (ctx->pc == 0x488DC4u) {
        ctx->pc = 0x488DC8u;
        goto label_488dc8;
    }
    ctx->pc = 0x488DC0u;
    {
        const bool branch_taken_0x488dc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488dc0) {
            ctx->pc = 0x488DD0u;
            goto label_488dd0;
        }
    }
    ctx->pc = 0x488DC8u;
label_488dc8:
    // 0x488dc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488dcc:
    // 0x488dcc: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x488dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_488dd0:
    // 0x488dd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488dd4:
    // 0x488dd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x488dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_488dd8:
    // 0x488dd8: 0x8c42e3a0  lw          $v0, -0x1C60($v0)
    ctx->pc = 0x488dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960032)));
label_488ddc:
    // 0x488ddc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x488ddcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_488de0:
    // 0x488de0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_488de4:
    if (ctx->pc == 0x488DE4u) {
        ctx->pc = 0x488DE8u;
        goto label_488de8;
    }
    ctx->pc = 0x488DE0u;
    {
        const bool branch_taken_0x488de0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488de0) {
            ctx->pc = 0x488DF0u;
            goto label_488df0;
        }
    }
    ctx->pc = 0x488DE8u;
label_488de8:
    // 0x488de8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488dec:
    // 0x488dec: 0xac43e3a0  sw          $v1, -0x1C60($v0)
    ctx->pc = 0x488decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960032), GPR_U32(ctx, 3));
label_488df0:
    // 0x488df0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x488df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_488df4:
    // 0x488df4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x488df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_488df8:
    // 0x488df8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x488df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_488dfc:
    // 0x488dfc: 0x2484fa30  addiu       $a0, $a0, -0x5D0
    ctx->pc = 0x488dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965808));
label_488e00:
    // 0x488e00: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x488e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_488e04:
    // 0x488e04: 0xc074ea0  jal         func_1D3A80
label_488e08:
    if (ctx->pc == 0x488E08u) {
        ctx->pc = 0x488E08u;
            // 0x488e08: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x488E0Cu;
        goto label_488e0c;
    }
    ctx->pc = 0x488E04u;
    SET_GPR_U32(ctx, 31, 0x488E0Cu);
    ctx->pc = 0x488E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488E04u;
            // 0x488e08: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488E0Cu; }
        if (ctx->pc != 0x488E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488E0Cu; }
        if (ctx->pc != 0x488E0Cu) { return; }
    }
    ctx->pc = 0x488E0Cu;
label_488e0c:
    // 0x488e0c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x488e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_488e10:
    // 0x488e10: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x488e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_488e14:
    // 0x488e14: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x488e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_488e18:
    // 0x488e18: 0x2484fa34  addiu       $a0, $a0, -0x5CC
    ctx->pc = 0x488e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965812));
label_488e1c:
    // 0x488e1c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x488e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_488e20:
    // 0x488e20: 0xc074ea0  jal         func_1D3A80
label_488e24:
    if (ctx->pc == 0x488E24u) {
        ctx->pc = 0x488E24u;
            // 0x488e24: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x488E28u;
        goto label_488e28;
    }
    ctx->pc = 0x488E20u;
    SET_GPR_U32(ctx, 31, 0x488E28u);
    ctx->pc = 0x488E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488E20u;
            // 0x488e24: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488E28u; }
        if (ctx->pc != 0x488E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488E28u; }
        if (ctx->pc != 0x488E28u) { return; }
    }
    ctx->pc = 0x488E28u;
label_488e28:
    // 0x488e28: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x488e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_488e2c:
    // 0x488e2c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x488e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_488e30:
    // 0x488e30: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x488e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_488e34:
    // 0x488e34: 0x2484fa18  addiu       $a0, $a0, -0x5E8
    ctx->pc = 0x488e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965784));
label_488e38:
    // 0x488e38: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x488e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_488e3c:
    // 0x488e3c: 0xc074ea0  jal         func_1D3A80
label_488e40:
    if (ctx->pc == 0x488E40u) {
        ctx->pc = 0x488E40u;
            // 0x488e40: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x488E44u;
        goto label_488e44;
    }
    ctx->pc = 0x488E3Cu;
    SET_GPR_U32(ctx, 31, 0x488E44u);
    ctx->pc = 0x488E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488E3Cu;
            // 0x488e40: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488E44u; }
        if (ctx->pc != 0x488E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488E44u; }
        if (ctx->pc != 0x488E44u) { return; }
    }
    ctx->pc = 0x488E44u;
label_488e44:
    // 0x488e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x488e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_488e48:
    // 0x488e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488e4c:
    // 0x488e4c: 0x3e00008  jr          $ra
label_488e50:
    if (ctx->pc == 0x488E50u) {
        ctx->pc = 0x488E50u;
            // 0x488e50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x488E54u;
        goto label_488e54;
    }
    ctx->pc = 0x488E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488E4Cu;
            // 0x488e50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488E54u;
label_488e54:
    // 0x488e54: 0x0  nop
    ctx->pc = 0x488e54u;
    // NOP
label_488e58:
    // 0x488e58: 0x0  nop
    ctx->pc = 0x488e58u;
    // NOP
label_488e5c:
    // 0x488e5c: 0x0  nop
    ctx->pc = 0x488e5cu;
    // NOP
label_488e60:
    // 0x488e60: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x488e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_488e64:
    // 0x488e64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x488e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_488e68:
    // 0x488e68: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x488e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_488e6c:
    // 0x488e6c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x488e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_488e70:
    // 0x488e70: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x488e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_488e74:
    // 0x488e74: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x488e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_488e78:
    // 0x488e78: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x488e78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488e7c:
    // 0x488e7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x488e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_488e80:
    // 0x488e80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x488e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_488e84:
    // 0x488e84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x488e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_488e88:
    // 0x488e88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x488e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_488e8c:
    // 0x488e8c: 0xc075740  jal         func_1D5D00
label_488e90:
    if (ctx->pc == 0x488E90u) {
        ctx->pc = 0x488E90u;
            // 0x488e90: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x488E94u;
        goto label_488e94;
    }
    ctx->pc = 0x488E8Cu;
    SET_GPR_U32(ctx, 31, 0x488E94u);
    ctx->pc = 0x488E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488E8Cu;
            // 0x488e90: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D00u;
    if (runtime->hasFunction(0x1D5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488E94u; }
        if (ctx->pc != 0x488E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5D00_0x1d5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488E94u; }
        if (ctx->pc != 0x488E94u) { return; }
    }
    ctx->pc = 0x488E94u;
label_488e94:
    // 0x488e94: 0x8eb20008  lw          $s2, 0x8($s5)
    ctx->pc = 0x488e94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_488e98:
    // 0x488e98: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x488e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_488e9c:
    // 0x488e9c: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x488e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_488ea0:
    // 0x488ea0: 0x1483006c  bne         $a0, $v1, . + 4 + (0x6C << 2)
label_488ea4:
    if (ctx->pc == 0x488EA4u) {
        ctx->pc = 0x488EA4u;
            // 0x488ea4: 0x8e510550  lw          $s1, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->pc = 0x488EA8u;
        goto label_488ea8;
    }
    ctx->pc = 0x488EA0u;
    {
        const bool branch_taken_0x488ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x488EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488EA0u;
            // 0x488ea4: 0x8e510550  lw          $s1, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488ea0) {
            ctx->pc = 0x489054u;
            goto label_489054;
        }
    }
    ctx->pc = 0x488EA8u;
label_488ea8:
    // 0x488ea8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488eac:
    // 0x488eac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x488eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_488eb0:
    // 0x488eb0: 0x8c53e370  lw          $s3, -0x1C90($v0)
    ctx->pc = 0x488eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_488eb4:
    // 0x488eb4: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x488eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_488eb8:
    // 0x488eb8: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x488eb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_488ebc:
    // 0x488ebc: 0x2610f9f0  addiu       $s0, $s0, -0x610
    ctx->pc = 0x488ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965744));
label_488ec0:
    // 0x488ec0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x488ec0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488ec4:
    // 0x488ec4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x488ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_488ec8:
    // 0x488ec8: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x488ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_488ecc:
    // 0x488ecc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x488eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_488ed0:
    // 0x488ed0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x488ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_488ed4:
    // 0x488ed4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x488ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_488ed8:
    // 0x488ed8: 0x8ca80130  lw          $t0, 0x130($a1)
    ctx->pc = 0x488ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_488edc:
    // 0x488edc: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x488edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_488ee0:
    // 0x488ee0: 0x8c65fa34  lw          $a1, -0x5CC($v1)
    ctx->pc = 0x488ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965812)));
label_488ee4:
    // 0x488ee4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x488ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_488ee8:
    // 0x488ee8: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x488ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_488eec:
    // 0x488eec: 0x8c46fa30  lw          $a2, -0x5D0($v0)
    ctx->pc = 0x488eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965808)));
label_488ef0:
    // 0x488ef0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x488ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_488ef4:
    // 0x488ef4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x488ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_488ef8:
    // 0x488ef8: 0x8c44fa18  lw          $a0, -0x5E8($v0)
    ctx->pc = 0x488ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965784)));
label_488efc:
    // 0x488efc: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x488efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_488f00:
    // 0x488f00: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x488f00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_488f04:
    // 0x488f04: 0x8223010f  lb          $v1, 0x10F($s1)
    ctx->pc = 0x488f04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 271)));
label_488f08:
    // 0x488f08: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x488f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_488f0c:
    // 0x488f0c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_488f10:
    if (ctx->pc == 0x488F10u) {
        ctx->pc = 0x488F10u;
            // 0x488f10: 0x24f70010  addiu       $s7, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->pc = 0x488F14u;
        goto label_488f14;
    }
    ctx->pc = 0x488F0Cu;
    {
        const bool branch_taken_0x488f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x488F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488F0Cu;
            // 0x488f10: 0x24f70010  addiu       $s7, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488f0c) {
            ctx->pc = 0x488F24u;
            goto label_488f24;
        }
    }
    ctx->pc = 0x488F14u;
label_488f14:
    // 0x488f14: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x488f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_488f18:
    // 0x488f18: 0xc634003c  lwc1        $f20, 0x3C($s1)
    ctx->pc = 0x488f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_488f1c:
    // 0x488f1c: 0x1000000f  b           . + 4 + (0xF << 2)
label_488f20:
    if (ctx->pc == 0x488F20u) {
        ctx->pc = 0x488F20u;
            // 0x488f20: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488F24u;
        goto label_488f24;
    }
    ctx->pc = 0x488F1Cu;
    {
        const bool branch_taken_0x488f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488F1Cu;
            // 0x488f20: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488f1c) {
            ctx->pc = 0x488F5Cu;
            goto label_488f5c;
        }
    }
    ctx->pc = 0x488F24u;
label_488f24:
    // 0x488f24: 0x2462fff1  addiu       $v0, $v1, -0xF
    ctx->pc = 0x488f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
label_488f28:
    // 0x488f28: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x488f28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_488f2c:
    // 0x488f2c: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_488f30:
    if (ctx->pc == 0x488F30u) {
        ctx->pc = 0x488F30u;
            // 0x488f30: 0x2462fff3  addiu       $v0, $v1, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
        ctx->pc = 0x488F34u;
        goto label_488f34;
    }
    ctx->pc = 0x488F2Cu;
    {
        const bool branch_taken_0x488f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488f2c) {
            ctx->pc = 0x488F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x488F2Cu;
            // 0x488f30: 0x2462fff3  addiu       $v0, $v1, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
        ctx->in_delay_slot = false;
            ctx->pc = 0x488F44u;
            goto label_488f44;
        }
    }
    ctx->pc = 0x488F34u;
label_488f34:
    // 0x488f34: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x488f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_488f38:
    // 0x488f38: 0xc634003c  lwc1        $f20, 0x3C($s1)
    ctx->pc = 0x488f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_488f3c:
    // 0x488f3c: 0x10000007  b           . + 4 + (0x7 << 2)
label_488f40:
    if (ctx->pc == 0x488F40u) {
        ctx->pc = 0x488F40u;
            // 0x488f40: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488F44u;
        goto label_488f44;
    }
    ctx->pc = 0x488F3Cu;
    {
        const bool branch_taken_0x488f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488F3Cu;
            // 0x488f40: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488f3c) {
            ctx->pc = 0x488F5Cu;
            goto label_488f5c;
        }
    }
    ctx->pc = 0x488F44u;
label_488f44:
    // 0x488f44: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x488f44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_488f48:
    // 0x488f48: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_488f4c:
    if (ctx->pc == 0x488F4Cu) {
        ctx->pc = 0x488F4Cu;
            // 0x488f4c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x488F50u;
        goto label_488f50;
    }
    ctx->pc = 0x488F48u;
    {
        const bool branch_taken_0x488f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488f48) {
            ctx->pc = 0x488F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x488F48u;
            // 0x488f4c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x488F5Cu;
            goto label_488f5c;
        }
    }
    ctx->pc = 0x488F50u;
label_488f50:
    // 0x488f50: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x488f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_488f54:
    // 0x488f54: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x488f54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488f58:
    // 0x488f58: 0xc634003c  lwc1        $f20, 0x3C($s1)
    ctx->pc = 0x488f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_488f5c:
    // 0x488f5c: 0x8eb90054  lw          $t9, 0x54($s5)
    ctx->pc = 0x488f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_488f60:
    // 0x488f60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x488f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_488f64:
    // 0x488f64: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x488f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_488f68:
    // 0x488f68: 0x320f809  jalr        $t9
label_488f6c:
    if (ctx->pc == 0x488F6Cu) {
        ctx->pc = 0x488F6Cu;
            // 0x488f6c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x488F70u;
        goto label_488f70;
    }
    ctx->pc = 0x488F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x488F70u);
        ctx->pc = 0x488F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488F68u;
            // 0x488f6c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x488F70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x488F70u; }
            if (ctx->pc != 0x488F70u) { return; }
        }
        }
    }
    ctx->pc = 0x488F70u;
label_488f70:
    // 0x488f70: 0x2ae3c  dsll32      $s5, $v0, 24
    ctx->pc = 0x488f70u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 24));
label_488f74:
    // 0x488f74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x488f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_488f78:
    // 0x488f78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x488f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_488f7c:
    // 0x488f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x488f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488f80:
    // 0x488f80: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x488f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_488f84:
    // 0x488f84: 0xc04e4a4  jal         func_139290
label_488f88:
    if (ctx->pc == 0x488F88u) {
        ctx->pc = 0x488F88u;
            // 0x488f88: 0x15ae3f  dsra32      $s5, $s5, 24 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
        ctx->pc = 0x488F8Cu;
        goto label_488f8c;
    }
    ctx->pc = 0x488F84u;
    SET_GPR_U32(ctx, 31, 0x488F8Cu);
    ctx->pc = 0x488F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488F84u;
            // 0x488f88: 0x15ae3f  dsra32      $s5, $s5, 24 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488F8Cu; }
        if (ctx->pc != 0x488F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488F8Cu; }
        if (ctx->pc != 0x488F8Cu) { return; }
    }
    ctx->pc = 0x488F8Cu;
label_488f8c:
    // 0x488f8c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x488f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_488f90:
    // 0x488f90: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x488f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_488f94:
    // 0x488f94: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x488f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_488f98:
    // 0x488f98: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x488f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_488f9c:
    // 0x488f9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x488f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_488fa0:
    // 0x488fa0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_488fa4:
    // 0x488fa4: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x488fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_488fa8:
    // 0x488fa8: 0xc0517b0  jal         func_145EC0
label_488fac:
    if (ctx->pc == 0x488FACu) {
        ctx->pc = 0x488FACu;
            // 0x488fac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488FB0u;
        goto label_488fb0;
    }
    ctx->pc = 0x488FA8u;
    SET_GPR_U32(ctx, 31, 0x488FB0u);
    ctx->pc = 0x488FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488FA8u;
            // 0x488fac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488FB0u; }
        if (ctx->pc != 0x488FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EC0_0x145ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488FB0u; }
        if (ctx->pc != 0x488FB0u) { return; }
    }
    ctx->pc = 0x488FB0u;
label_488fb0:
    // 0x488fb0: 0x92420e3d  lbu         $v0, 0xE3D($s2)
    ctx->pc = 0x488fb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3645)));
label_488fb4:
    // 0x488fb4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x488fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_488fb8:
    // 0x488fb8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x488fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_488fbc:
    // 0x488fbc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x488fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_488fc0:
    // 0x488fc0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x488fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_488fc4:
    // 0x488fc4: 0xc04cd60  jal         func_133580
label_488fc8:
    if (ctx->pc == 0x488FC8u) {
        ctx->pc = 0x488FC8u;
            // 0x488fc8: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x488FCCu;
        goto label_488fcc;
    }
    ctx->pc = 0x488FC4u;
    SET_GPR_U32(ctx, 31, 0x488FCCu);
    ctx->pc = 0x488FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488FC4u;
            // 0x488fc8: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488FCCu; }
        if (ctx->pc != 0x488FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488FCCu; }
        if (ctx->pc != 0x488FCCu) { return; }
    }
    ctx->pc = 0x488FCCu;
label_488fcc:
    // 0x488fcc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x488fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_488fd0:
    // 0x488fd0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x488fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_488fd4:
    // 0x488fd4: 0xc04cd60  jal         func_133580
label_488fd8:
    if (ctx->pc == 0x488FD8u) {
        ctx->pc = 0x488FD8u;
            // 0x488fd8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488FDCu;
        goto label_488fdc;
    }
    ctx->pc = 0x488FD4u;
    SET_GPR_U32(ctx, 31, 0x488FDCu);
    ctx->pc = 0x488FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488FD4u;
            // 0x488fd8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488FDCu; }
        if (ctx->pc != 0x488FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488FDCu; }
        if (ctx->pc != 0x488FDCu) { return; }
    }
    ctx->pc = 0x488FDCu;
label_488fdc:
    // 0x488fdc: 0x56c0000b  bnel        $s6, $zero, . + 4 + (0xB << 2)
label_488fe0:
    if (ctx->pc == 0x488FE0u) {
        ctx->pc = 0x488FE0u;
            // 0x488fe0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x488FE4u;
        goto label_488fe4;
    }
    ctx->pc = 0x488FDCu;
    {
        const bool branch_taken_0x488fdc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x488fdc) {
            ctx->pc = 0x488FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x488FDCu;
            // 0x488fe0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48900Cu;
            goto label_48900c;
        }
    }
    ctx->pc = 0x488FE4u;
label_488fe4:
    // 0x488fe4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x488fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_488fe8:
    // 0x488fe8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x488fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_488fec:
    // 0x488fec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x488fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_488ff0:
    // 0x488ff0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x488ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_488ff4:
    // 0x488ff4: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x488ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_488ff8:
    // 0x488ff8: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x488ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_488ffc:
    // 0x488ffc: 0xc04cfcc  jal         func_133F30
label_489000:
    if (ctx->pc == 0x489000u) {
        ctx->pc = 0x489000u;
            // 0x489000: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489004u;
        goto label_489004;
    }
    ctx->pc = 0x488FFCu;
    SET_GPR_U32(ctx, 31, 0x489004u);
    ctx->pc = 0x489000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488FFCu;
            // 0x489000: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489004u; }
        if (ctx->pc != 0x489004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489004u; }
        if (ctx->pc != 0x489004u) { return; }
    }
    ctx->pc = 0x489004u;
label_489004:
    // 0x489004: 0x1000000b  b           . + 4 + (0xB << 2)
label_489008:
    if (ctx->pc == 0x489008u) {
        ctx->pc = 0x489008u;
            // 0x489008: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x48900Cu;
        goto label_48900c;
    }
    ctx->pc = 0x489004u;
    {
        const bool branch_taken_0x489004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x489008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489004u;
            // 0x489008: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489004) {
            ctx->pc = 0x489034u;
            goto label_489034;
        }
    }
    ctx->pc = 0x48900Cu;
label_48900c:
    // 0x48900c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x48900cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_489010:
    // 0x489010: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x489010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_489014:
    // 0x489014: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x489014u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_489018:
    // 0x489018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x489018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48901c:
    // 0x48901c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x48901cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_489020:
    // 0x489020: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x489020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_489024:
    // 0x489024: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x489024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_489028:
    // 0x489028: 0xc04cff4  jal         func_133FD0
label_48902c:
    if (ctx->pc == 0x48902Cu) {
        ctx->pc = 0x48902Cu;
            // 0x48902c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489030u;
        goto label_489030;
    }
    ctx->pc = 0x489028u;
    SET_GPR_U32(ctx, 31, 0x489030u);
    ctx->pc = 0x48902Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489028u;
            // 0x48902c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489030u; }
        if (ctx->pc != 0x489030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489030u; }
        if (ctx->pc != 0x489030u) { return; }
    }
    ctx->pc = 0x489030u;
label_489030:
    // 0x489030: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x489030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_489034:
    // 0x489034: 0xc04e738  jal         func_139CE0
label_489038:
    if (ctx->pc == 0x489038u) {
        ctx->pc = 0x48903Cu;
        goto label_48903c;
    }
    ctx->pc = 0x489034u;
    SET_GPR_U32(ctx, 31, 0x48903Cu);
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48903Cu; }
        if (ctx->pc != 0x48903Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48903Cu; }
        if (ctx->pc != 0x48903Cu) { return; }
    }
    ctx->pc = 0x48903Cu;
label_48903c:
    // 0x48903c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x48903cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_489040:
    // 0x489040: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x489040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489044:
    // 0x489044: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x489044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_489048:
    // 0x489048: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x489048u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_48904c:
    // 0x48904c: 0xc050044  jal         func_140110
label_489050:
    if (ctx->pc == 0x489050u) {
        ctx->pc = 0x489050u;
            // 0x489050: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489054u;
        goto label_489054;
    }
    ctx->pc = 0x48904Cu;
    SET_GPR_U32(ctx, 31, 0x489054u);
    ctx->pc = 0x489050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48904Cu;
            // 0x489050: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489054u; }
        if (ctx->pc != 0x489054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489054u; }
        if (ctx->pc != 0x489054u) { return; }
    }
    ctx->pc = 0x489054u;
label_489054:
    // 0x489054: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x489054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_489058:
    // 0x489058: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x489058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_48905c:
    // 0x48905c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x48905cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_489060:
    // 0x489060: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x489060u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_489064:
    // 0x489064: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x489064u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_489068:
    // 0x489068: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x489068u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48906c:
    // 0x48906c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x48906cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_489070:
    // 0x489070: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x489070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_489074:
    // 0x489074: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x489074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_489078:
    // 0x489078: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x489078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48907c:
    // 0x48907c: 0x3e00008  jr          $ra
label_489080:
    if (ctx->pc == 0x489080u) {
        ctx->pc = 0x489080u;
            // 0x489080: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x489084u;
        goto label_489084;
    }
    ctx->pc = 0x48907Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48907Cu;
            // 0x489080: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489084u;
label_489084:
    // 0x489084: 0x0  nop
    ctx->pc = 0x489084u;
    // NOP
label_489088:
    // 0x489088: 0x0  nop
    ctx->pc = 0x489088u;
    // NOP
label_48908c:
    // 0x48908c: 0x0  nop
    ctx->pc = 0x48908cu;
    // NOP
label_489090:
    // 0x489090: 0x3e00008  jr          $ra
label_489094:
    if (ctx->pc == 0x489094u) {
        ctx->pc = 0x489098u;
        goto label_489098;
    }
    ctx->pc = 0x489090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489098u;
label_489098:
    // 0x489098: 0x0  nop
    ctx->pc = 0x489098u;
    // NOP
label_48909c:
    // 0x48909c: 0x0  nop
    ctx->pc = 0x48909cu;
    // NOP
label_4890a0:
    // 0x4890a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4890a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4890a4:
    // 0x4890a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4890a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4890a8:
    // 0x4890a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4890a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4890ac:
    // 0x4890ac: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x4890acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_4890b0:
    // 0x4890b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4890b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4890b4:
    // 0x4890b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4890b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4890b8:
    // 0x4890b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4890b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4890bc:
    // 0x4890bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4890bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4890c0:
    // 0x4890c0: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x4890c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4890c4:
    // 0x4890c4: 0x820311ad  lb          $v1, 0x11AD($s0)
    ctx->pc = 0x4890c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4525)));
label_4890c8:
    // 0x4890c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4890c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4890cc:
    // 0x4890cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4890ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4890d0:
    // 0x4890d0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4890d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4890d4:
    // 0x4890d4: 0xc075830  jal         func_1D60C0
label_4890d8:
    if (ctx->pc == 0x4890D8u) {
        ctx->pc = 0x4890D8u;
            // 0x4890d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4890DCu;
        goto label_4890dc;
    }
    ctx->pc = 0x4890D4u;
    SET_GPR_U32(ctx, 31, 0x4890DCu);
    ctx->pc = 0x4890D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4890D4u;
            // 0x4890d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4890DCu; }
        if (ctx->pc != 0x4890DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4890DCu; }
        if (ctx->pc != 0x4890DCu) { return; }
    }
    ctx->pc = 0x4890DCu;
label_4890dc:
    // 0x4890dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4890dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4890e0:
    // 0x4890e0: 0x50430064  beql        $v0, $v1, . + 4 + (0x64 << 2)
label_4890e4:
    if (ctx->pc == 0x4890E4u) {
        ctx->pc = 0x4890E4u;
            // 0x4890e4: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x4890E8u;
        goto label_4890e8;
    }
    ctx->pc = 0x4890E0u;
    {
        const bool branch_taken_0x4890e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4890e0) {
            ctx->pc = 0x4890E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4890E0u;
            // 0x4890e4: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489274u;
            goto label_489274;
        }
    }
    ctx->pc = 0x4890E8u;
label_4890e8:
    // 0x4890e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4890e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4890ec:
    // 0x4890ec: 0x50430034  beql        $v0, $v1, . + 4 + (0x34 << 2)
label_4890f0:
    if (ctx->pc == 0x4890F0u) {
        ctx->pc = 0x4890F0u;
            // 0x4890f0: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x4890F4u;
        goto label_4890f4;
    }
    ctx->pc = 0x4890ECu;
    {
        const bool branch_taken_0x4890ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4890ec) {
            ctx->pc = 0x4890F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4890ECu;
            // 0x4890f0: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4891C0u;
            goto label_4891c0;
        }
    }
    ctx->pc = 0x4890F4u;
label_4890f4:
    // 0x4890f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4890f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4890f8:
    // 0x4890f8: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_4890fc:
    if (ctx->pc == 0x4890FCu) {
        ctx->pc = 0x4890FCu;
            // 0x4890fc: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x489100u;
        goto label_489100;
    }
    ctx->pc = 0x4890F8u;
    {
        const bool branch_taken_0x4890f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4890f8) {
            ctx->pc = 0x4890FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4890F8u;
            // 0x4890fc: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489108u;
            goto label_489108;
        }
    }
    ctx->pc = 0x489100u;
label_489100:
    // 0x489100: 0x1000005b  b           . + 4 + (0x5B << 2)
label_489104:
    if (ctx->pc == 0x489104u) {
        ctx->pc = 0x489108u;
        goto label_489108;
    }
    ctx->pc = 0x489100u;
    {
        const bool branch_taken_0x489100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x489100) {
            ctx->pc = 0x489270u;
            goto label_489270;
        }
    }
    ctx->pc = 0x489108u;
label_489108:
    // 0x489108: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x489108u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_48910c:
    // 0x48910c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_489110:
    if (ctx->pc == 0x489110u) {
        ctx->pc = 0x489110u;
            // 0x489110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489114u;
        goto label_489114;
    }
    ctx->pc = 0x48910Cu;
    {
        const bool branch_taken_0x48910c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x489110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48910Cu;
            // 0x489110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48910c) {
            ctx->pc = 0x489124u;
            goto label_489124;
        }
    }
    ctx->pc = 0x489114u;
label_489114:
    // 0x489114: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x489114u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_489118:
    // 0x489118: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_48911c:
    if (ctx->pc == 0x48911Cu) {
        ctx->pc = 0x489120u;
        goto label_489120;
    }
    ctx->pc = 0x489118u;
    {
        const bool branch_taken_0x489118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x489118) {
            ctx->pc = 0x489124u;
            goto label_489124;
        }
    }
    ctx->pc = 0x489120u;
label_489120:
    // 0x489120: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x489120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489124:
    // 0x489124: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_489128:
    if (ctx->pc == 0x489128u) {
        ctx->pc = 0x48912Cu;
        goto label_48912c;
    }
    ctx->pc = 0x489124u;
    {
        const bool branch_taken_0x489124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x489124) {
            ctx->pc = 0x489140u;
            goto label_489140;
        }
    }
    ctx->pc = 0x48912Cu;
label_48912c:
    // 0x48912c: 0xc075eb4  jal         func_1D7AD0
label_489130:
    if (ctx->pc == 0x489130u) {
        ctx->pc = 0x489130u;
            // 0x489130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489134u;
        goto label_489134;
    }
    ctx->pc = 0x48912Cu;
    SET_GPR_U32(ctx, 31, 0x489134u);
    ctx->pc = 0x489130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48912Cu;
            // 0x489130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489134u; }
        if (ctx->pc != 0x489134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489134u; }
        if (ctx->pc != 0x489134u) { return; }
    }
    ctx->pc = 0x489134u;
label_489134:
    // 0x489134: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_489138:
    if (ctx->pc == 0x489138u) {
        ctx->pc = 0x48913Cu;
        goto label_48913c;
    }
    ctx->pc = 0x489134u;
    {
        const bool branch_taken_0x489134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489134) {
            ctx->pc = 0x489140u;
            goto label_489140;
        }
    }
    ctx->pc = 0x48913Cu;
label_48913c:
    // 0x48913c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48913cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_489140:
    // 0x489140: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_489144:
    if (ctx->pc == 0x489144u) {
        ctx->pc = 0x489144u;
            // 0x489144: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x489148u;
        goto label_489148;
    }
    ctx->pc = 0x489140u;
    {
        const bool branch_taken_0x489140 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x489140) {
            ctx->pc = 0x489144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489140u;
            // 0x489144: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4891B0u;
            goto label_4891b0;
        }
    }
    ctx->pc = 0x489148u;
label_489148:
    // 0x489148: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x489148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_48914c:
    // 0x48914c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x48914cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_489150:
    // 0x489150: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_489154:
    if (ctx->pc == 0x489154u) {
        ctx->pc = 0x489158u;
        goto label_489158;
    }
    ctx->pc = 0x489150u;
    {
        const bool branch_taken_0x489150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x489150) {
            ctx->pc = 0x4891ACu;
            goto label_4891ac;
        }
    }
    ctx->pc = 0x489158u;
label_489158:
    // 0x489158: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x489158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_48915c:
    // 0x48915c: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x48915cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_489160:
    // 0x489160: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_489164:
    if (ctx->pc == 0x489164u) {
        ctx->pc = 0x489164u;
            // 0x489164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489168u;
        goto label_489168;
    }
    ctx->pc = 0x489160u;
    {
        const bool branch_taken_0x489160 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x489164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489160u;
            // 0x489164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489160) {
            ctx->pc = 0x489178u;
            goto label_489178;
        }
    }
    ctx->pc = 0x489168u;
label_489168:
    // 0x489168: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x489168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_48916c:
    // 0x48916c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_489170:
    if (ctx->pc == 0x489170u) {
        ctx->pc = 0x489174u;
        goto label_489174;
    }
    ctx->pc = 0x48916Cu;
    {
        const bool branch_taken_0x48916c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48916c) {
            ctx->pc = 0x489178u;
            goto label_489178;
        }
    }
    ctx->pc = 0x489174u;
label_489174:
    // 0x489174: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x489174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489178:
    // 0x489178: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_48917c:
    if (ctx->pc == 0x48917Cu) {
        ctx->pc = 0x489180u;
        goto label_489180;
    }
    ctx->pc = 0x489178u;
    {
        const bool branch_taken_0x489178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x489178) {
            ctx->pc = 0x489194u;
            goto label_489194;
        }
    }
    ctx->pc = 0x489180u;
label_489180:
    // 0x489180: 0xc075eb4  jal         func_1D7AD0
label_489184:
    if (ctx->pc == 0x489184u) {
        ctx->pc = 0x489184u;
            // 0x489184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489188u;
        goto label_489188;
    }
    ctx->pc = 0x489180u;
    SET_GPR_U32(ctx, 31, 0x489188u);
    ctx->pc = 0x489184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489180u;
            // 0x489184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489188u; }
        if (ctx->pc != 0x489188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489188u; }
        if (ctx->pc != 0x489188u) { return; }
    }
    ctx->pc = 0x489188u;
label_489188:
    // 0x489188: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_48918c:
    if (ctx->pc == 0x48918Cu) {
        ctx->pc = 0x489190u;
        goto label_489190;
    }
    ctx->pc = 0x489188u;
    {
        const bool branch_taken_0x489188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489188) {
            ctx->pc = 0x489194u;
            goto label_489194;
        }
    }
    ctx->pc = 0x489190u;
label_489190:
    // 0x489190: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x489190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_489194:
    // 0x489194: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_489198:
    if (ctx->pc == 0x489198u) {
        ctx->pc = 0x48919Cu;
        goto label_48919c;
    }
    ctx->pc = 0x489194u;
    {
        const bool branch_taken_0x489194 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x489194) {
            ctx->pc = 0x4891ACu;
            goto label_4891ac;
        }
    }
    ctx->pc = 0x48919Cu;
label_48919c:
    // 0x48919c: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x48919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_4891a0:
    // 0x4891a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4891a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4891a4:
    // 0x4891a4: 0x14830032  bne         $a0, $v1, . + 4 + (0x32 << 2)
label_4891a8:
    if (ctx->pc == 0x4891A8u) {
        ctx->pc = 0x4891ACu;
        goto label_4891ac;
    }
    ctx->pc = 0x4891A4u;
    {
        const bool branch_taken_0x4891a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4891a4) {
            ctx->pc = 0x489270u;
            goto label_489270;
        }
    }
    ctx->pc = 0x4891ACu;
label_4891ac:
    // 0x4891ac: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x4891acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_4891b0:
    // 0x4891b0: 0xc073234  jal         func_1CC8D0
label_4891b4:
    if (ctx->pc == 0x4891B4u) {
        ctx->pc = 0x4891B4u;
            // 0x4891b4: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x4891B8u;
        goto label_4891b8;
    }
    ctx->pc = 0x4891B0u;
    SET_GPR_U32(ctx, 31, 0x4891B8u);
    ctx->pc = 0x4891B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4891B0u;
            // 0x4891b4: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4891B8u; }
        if (ctx->pc != 0x4891B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4891B8u; }
        if (ctx->pc != 0x4891B8u) { return; }
    }
    ctx->pc = 0x4891B8u;
label_4891b8:
    // 0x4891b8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_4891bc:
    if (ctx->pc == 0x4891BCu) {
        ctx->pc = 0x4891C0u;
        goto label_4891c0;
    }
    ctx->pc = 0x4891B8u;
    {
        const bool branch_taken_0x4891b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4891b8) {
            ctx->pc = 0x489270u;
            goto label_489270;
        }
    }
    ctx->pc = 0x4891C0u;
label_4891c0:
    // 0x4891c0: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x4891c0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4891c4:
    // 0x4891c4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4891c8:
    if (ctx->pc == 0x4891C8u) {
        ctx->pc = 0x4891C8u;
            // 0x4891c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4891CCu;
        goto label_4891cc;
    }
    ctx->pc = 0x4891C4u;
    {
        const bool branch_taken_0x4891c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4891C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4891C4u;
            // 0x4891c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4891c4) {
            ctx->pc = 0x4891DCu;
            goto label_4891dc;
        }
    }
    ctx->pc = 0x4891CCu;
label_4891cc:
    // 0x4891cc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4891ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4891d0:
    // 0x4891d0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4891d4:
    if (ctx->pc == 0x4891D4u) {
        ctx->pc = 0x4891D8u;
        goto label_4891d8;
    }
    ctx->pc = 0x4891D0u;
    {
        const bool branch_taken_0x4891d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4891d0) {
            ctx->pc = 0x4891DCu;
            goto label_4891dc;
        }
    }
    ctx->pc = 0x4891D8u;
label_4891d8:
    // 0x4891d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4891d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4891dc:
    // 0x4891dc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4891e0:
    if (ctx->pc == 0x4891E0u) {
        ctx->pc = 0x4891E4u;
        goto label_4891e4;
    }
    ctx->pc = 0x4891DCu;
    {
        const bool branch_taken_0x4891dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4891dc) {
            ctx->pc = 0x4891F8u;
            goto label_4891f8;
        }
    }
    ctx->pc = 0x4891E4u;
label_4891e4:
    // 0x4891e4: 0xc075eb4  jal         func_1D7AD0
label_4891e8:
    if (ctx->pc == 0x4891E8u) {
        ctx->pc = 0x4891E8u;
            // 0x4891e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4891ECu;
        goto label_4891ec;
    }
    ctx->pc = 0x4891E4u;
    SET_GPR_U32(ctx, 31, 0x4891ECu);
    ctx->pc = 0x4891E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4891E4u;
            // 0x4891e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4891ECu; }
        if (ctx->pc != 0x4891ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4891ECu; }
        if (ctx->pc != 0x4891ECu) { return; }
    }
    ctx->pc = 0x4891ECu;
label_4891ec:
    // 0x4891ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4891f0:
    if (ctx->pc == 0x4891F0u) {
        ctx->pc = 0x4891F4u;
        goto label_4891f4;
    }
    ctx->pc = 0x4891ECu;
    {
        const bool branch_taken_0x4891ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4891ec) {
            ctx->pc = 0x4891F8u;
            goto label_4891f8;
        }
    }
    ctx->pc = 0x4891F4u;
label_4891f4:
    // 0x4891f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4891f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4891f8:
    // 0x4891f8: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_4891fc:
    if (ctx->pc == 0x4891FCu) {
        ctx->pc = 0x4891FCu;
            // 0x4891fc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->pc = 0x489200u;
        goto label_489200;
    }
    ctx->pc = 0x4891F8u;
    {
        const bool branch_taken_0x4891f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4891f8) {
            ctx->pc = 0x4891FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4891F8u;
            // 0x4891fc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489268u;
            goto label_489268;
        }
    }
    ctx->pc = 0x489200u;
label_489200:
    // 0x489200: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x489200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_489204:
    // 0x489204: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x489204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_489208:
    // 0x489208: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_48920c:
    if (ctx->pc == 0x48920Cu) {
        ctx->pc = 0x489210u;
        goto label_489210;
    }
    ctx->pc = 0x489208u;
    {
        const bool branch_taken_0x489208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x489208) {
            ctx->pc = 0x489264u;
            goto label_489264;
        }
    }
    ctx->pc = 0x489210u;
label_489210:
    // 0x489210: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x489210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_489214:
    // 0x489214: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x489214u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_489218:
    // 0x489218: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_48921c:
    if (ctx->pc == 0x48921Cu) {
        ctx->pc = 0x48921Cu;
            // 0x48921c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489220u;
        goto label_489220;
    }
    ctx->pc = 0x489218u;
    {
        const bool branch_taken_0x489218 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x48921Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489218u;
            // 0x48921c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489218) {
            ctx->pc = 0x489230u;
            goto label_489230;
        }
    }
    ctx->pc = 0x489220u;
label_489220:
    // 0x489220: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x489220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_489224:
    // 0x489224: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_489228:
    if (ctx->pc == 0x489228u) {
        ctx->pc = 0x48922Cu;
        goto label_48922c;
    }
    ctx->pc = 0x489224u;
    {
        const bool branch_taken_0x489224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x489224) {
            ctx->pc = 0x489230u;
            goto label_489230;
        }
    }
    ctx->pc = 0x48922Cu;
label_48922c:
    // 0x48922c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x48922cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489230:
    // 0x489230: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_489234:
    if (ctx->pc == 0x489234u) {
        ctx->pc = 0x489238u;
        goto label_489238;
    }
    ctx->pc = 0x489230u;
    {
        const bool branch_taken_0x489230 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x489230) {
            ctx->pc = 0x48924Cu;
            goto label_48924c;
        }
    }
    ctx->pc = 0x489238u;
label_489238:
    // 0x489238: 0xc075eb4  jal         func_1D7AD0
label_48923c:
    if (ctx->pc == 0x48923Cu) {
        ctx->pc = 0x48923Cu;
            // 0x48923c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489240u;
        goto label_489240;
    }
    ctx->pc = 0x489238u;
    SET_GPR_U32(ctx, 31, 0x489240u);
    ctx->pc = 0x48923Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489238u;
            // 0x48923c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489240u; }
        if (ctx->pc != 0x489240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489240u; }
        if (ctx->pc != 0x489240u) { return; }
    }
    ctx->pc = 0x489240u;
label_489240:
    // 0x489240: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_489244:
    if (ctx->pc == 0x489244u) {
        ctx->pc = 0x489248u;
        goto label_489248;
    }
    ctx->pc = 0x489240u;
    {
        const bool branch_taken_0x489240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489240) {
            ctx->pc = 0x48924Cu;
            goto label_48924c;
        }
    }
    ctx->pc = 0x489248u;
label_489248:
    // 0x489248: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x489248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48924c:
    // 0x48924c: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_489250:
    if (ctx->pc == 0x489250u) {
        ctx->pc = 0x489254u;
        goto label_489254;
    }
    ctx->pc = 0x48924Cu;
    {
        const bool branch_taken_0x48924c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x48924c) {
            ctx->pc = 0x489264u;
            goto label_489264;
        }
    }
    ctx->pc = 0x489254u;
label_489254:
    // 0x489254: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x489254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_489258:
    // 0x489258: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x489258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_48925c:
    // 0x48925c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_489260:
    if (ctx->pc == 0x489260u) {
        ctx->pc = 0x489264u;
        goto label_489264;
    }
    ctx->pc = 0x48925Cu;
    {
        const bool branch_taken_0x48925c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x48925c) {
            ctx->pc = 0x489270u;
            goto label_489270;
        }
    }
    ctx->pc = 0x489264u;
label_489264:
    // 0x489264: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x489264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_489268:
    // 0x489268: 0xc073234  jal         func_1CC8D0
label_48926c:
    if (ctx->pc == 0x48926Cu) {
        ctx->pc = 0x48926Cu;
            // 0x48926c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x489270u;
        goto label_489270;
    }
    ctx->pc = 0x489268u;
    SET_GPR_U32(ctx, 31, 0x489270u);
    ctx->pc = 0x48926Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489268u;
            // 0x48926c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489270u; }
        if (ctx->pc != 0x489270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489270u; }
        if (ctx->pc != 0x489270u) { return; }
    }
    ctx->pc = 0x489270u;
label_489270:
    // 0x489270: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x489270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_489274:
    // 0x489274: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x489274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_489278:
    // 0x489278: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_48927c:
    if (ctx->pc == 0x48927Cu) {
        ctx->pc = 0x48927Cu;
            // 0x48927c: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x489280u;
        goto label_489280;
    }
    ctx->pc = 0x489278u;
    {
        const bool branch_taken_0x489278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x489278) {
            ctx->pc = 0x48927Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489278u;
            // 0x48927c: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48929Cu;
            goto label_48929c;
        }
    }
    ctx->pc = 0x489280u;
label_489280:
    // 0x489280: 0xc601118c  lwc1        $f1, 0x118C($s0)
    ctx->pc = 0x489280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_489284:
    // 0x489284: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x489284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_489288:
    // 0x489288: 0x0  nop
    ctx->pc = 0x489288u;
    // NOP
label_48928c:
    // 0x48928c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x48928cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_489290:
    // 0x489290: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_489294:
    if (ctx->pc == 0x489294u) {
        ctx->pc = 0x489294u;
            // 0x489294: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x489298u;
        goto label_489298;
    }
    ctx->pc = 0x489290u;
    {
        const bool branch_taken_0x489290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x489290) {
            ctx->pc = 0x489294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489290u;
            // 0x489294: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4892FCu;
            goto label_4892fc;
        }
    }
    ctx->pc = 0x489298u;
label_489298:
    // 0x489298: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x489298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_48929c:
    // 0x48929c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4892a0:
    if (ctx->pc == 0x4892A0u) {
        ctx->pc = 0x4892A0u;
            // 0x4892a0: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x4892A4u;
        goto label_4892a4;
    }
    ctx->pc = 0x48929Cu;
    {
        const bool branch_taken_0x48929c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48929c) {
            ctx->pc = 0x4892A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48929Cu;
            // 0x4892a0: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4892B8u;
            goto label_4892b8;
        }
    }
    ctx->pc = 0x4892A4u;
label_4892a4:
    // 0x4892a4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4892a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4892a8:
    // 0x4892a8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4892a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4892ac:
    // 0x4892ac: 0xc057b7c  jal         func_15EDF0
label_4892b0:
    if (ctx->pc == 0x4892B0u) {
        ctx->pc = 0x4892B0u;
            // 0x4892b0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4892B4u;
        goto label_4892b4;
    }
    ctx->pc = 0x4892ACu;
    SET_GPR_U32(ctx, 31, 0x4892B4u);
    ctx->pc = 0x4892B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4892ACu;
            // 0x4892b0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4892B4u; }
        if (ctx->pc != 0x4892B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4892B4u; }
        if (ctx->pc != 0x4892B4u) { return; }
    }
    ctx->pc = 0x4892B4u;
label_4892b4:
    // 0x4892b4: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x4892b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_4892b8:
    // 0x4892b8: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x4892b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_4892bc:
    // 0x4892bc: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4892bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4892c0:
    // 0x4892c0: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x4892c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_4892c4:
    // 0x4892c4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4892c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4892c8:
    // 0x4892c8: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x4892c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_4892cc:
    // 0x4892cc: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4892ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4892d0:
    // 0x4892d0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x4892d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_4892d4:
    // 0x4892d4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4892d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4892d8:
    // 0x4892d8: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x4892d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4892dc:
    // 0x4892dc: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4892dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4892e0:
    // 0x4892e0: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x4892e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_4892e4:
    // 0x4892e4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4892e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4892e8:
    // 0x4892e8: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x4892e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4892ec:
    // 0x4892ec: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4892ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4892f0:
    // 0x4892f0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x4892f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_4892f4:
    // 0x4892f4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4892f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4892f8:
    // 0x4892f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4892f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4892fc:
    // 0x4892fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4892fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_489300:
    // 0x489300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x489300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_489304:
    // 0x489304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x489304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_489308:
    // 0x489308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x489308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48930c:
    // 0x48930c: 0x3e00008  jr          $ra
label_489310:
    if (ctx->pc == 0x489310u) {
        ctx->pc = 0x489310u;
            // 0x489310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x489314u;
        goto label_489314;
    }
    ctx->pc = 0x48930Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48930Cu;
            // 0x489310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489314u;
label_489314:
    // 0x489314: 0x0  nop
    ctx->pc = 0x489314u;
    // NOP
label_489318:
    // 0x489318: 0x0  nop
    ctx->pc = 0x489318u;
    // NOP
label_48931c:
    // 0x48931c: 0x0  nop
    ctx->pc = 0x48931cu;
    // NOP
label_489320:
    // 0x489320: 0x3e00008  jr          $ra
label_489324:
    if (ctx->pc == 0x489324u) {
        ctx->pc = 0x489328u;
        goto label_489328;
    }
    ctx->pc = 0x489320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489328u;
label_489328:
    // 0x489328: 0x0  nop
    ctx->pc = 0x489328u;
    // NOP
label_48932c:
    // 0x48932c: 0x0  nop
    ctx->pc = 0x48932cu;
    // NOP
label_489330:
    // 0x489330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x489330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_489334:
    // 0x489334: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x489334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_489338:
    // 0x489338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x489338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48933c:
    // 0x48933c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_489340:
    // 0x489340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x489340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_489344:
    // 0x489344: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x489344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_489348:
    // 0x489348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x489348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48934c:
    // 0x48934c: 0x8c640d60  lw          $a0, 0xD60($v1)
    ctx->pc = 0x48934cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3424)));
label_489350:
    // 0x489350: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x489350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_489354:
    // 0x489354: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x489354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_489358:
    // 0x489358: 0x320f809  jalr        $t9
label_48935c:
    if (ctx->pc == 0x48935Cu) {
        ctx->pc = 0x48935Cu;
            // 0x48935c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x489360u;
        goto label_489360;
    }
    ctx->pc = 0x489358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x489360u);
        ctx->pc = 0x48935Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489358u;
            // 0x48935c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x489360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x489360u; }
            if (ctx->pc != 0x489360u) { return; }
        }
        }
    }
    ctx->pc = 0x489360u;
label_489360:
    // 0x489360: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x489360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_489364:
    // 0x489364: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x489364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_489368:
    // 0x489368: 0xc12ca3c  jal         func_4B28F0
label_48936c:
    if (ctx->pc == 0x48936Cu) {
        ctx->pc = 0x48936Cu;
            // 0x48936c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x489370u;
        goto label_489370;
    }
    ctx->pc = 0x489368u;
    SET_GPR_U32(ctx, 31, 0x489370u);
    ctx->pc = 0x48936Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489368u;
            // 0x48936c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489370u; }
        if (ctx->pc != 0x489370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489370u; }
        if (ctx->pc != 0x489370u) { return; }
    }
    ctx->pc = 0x489370u;
label_489370:
    // 0x489370: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x489370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_489374:
    // 0x489374: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489374u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489378:
    // 0x489378: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x489378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_48937c:
    // 0x48937c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x48937cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_489380:
    // 0x489380: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x489380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_489384:
    // 0x489384: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489384u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489388:
    // 0x489388: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x489388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_48938c:
    // 0x48938c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x48938cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_489390:
    // 0x489390: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x489390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_489394:
    // 0x489394: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489394u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489398:
    // 0x489398: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x489398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_48939c:
    // 0x48939c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x48939cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4893a0:
    // 0x4893a0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4893a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4893a4:
    // 0x4893a4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4893a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4893a8:
    // 0x4893a8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x4893a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_4893ac:
    // 0x4893ac: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4893acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4893b0:
    // 0x4893b0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x4893b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4893b4:
    // 0x4893b4: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_4893b8:
    if (ctx->pc == 0x4893B8u) {
        ctx->pc = 0x4893B8u;
            // 0x4893b8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4893BCu;
        goto label_4893bc;
    }
    ctx->pc = 0x4893B4u;
    {
        const bool branch_taken_0x4893b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4893b4) {
            ctx->pc = 0x4893B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4893B4u;
            // 0x4893b8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489408u;
            goto label_489408;
        }
    }
    ctx->pc = 0x4893BCu;
label_4893bc:
    // 0x4893bc: 0xc040180  jal         func_100600
label_4893c0:
    if (ctx->pc == 0x4893C0u) {
        ctx->pc = 0x4893C0u;
            // 0x4893c0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x4893C4u;
        goto label_4893c4;
    }
    ctx->pc = 0x4893BCu;
    SET_GPR_U32(ctx, 31, 0x4893C4u);
    ctx->pc = 0x4893C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4893BCu;
            // 0x4893c0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4893C4u; }
        if (ctx->pc != 0x4893C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4893C4u; }
        if (ctx->pc != 0x4893C4u) { return; }
    }
    ctx->pc = 0x4893C4u;
label_4893c4:
    // 0x4893c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4893c8:
    if (ctx->pc == 0x4893C8u) {
        ctx->pc = 0x4893C8u;
            // 0x4893c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4893CCu;
        goto label_4893cc;
    }
    ctx->pc = 0x4893C4u;
    {
        const bool branch_taken_0x4893c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4893C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4893C4u;
            // 0x4893c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4893c4) {
            ctx->pc = 0x489400u;
            goto label_489400;
        }
    }
    ctx->pc = 0x4893CCu;
label_4893cc:
    // 0x4893cc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4893ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4893d0:
    // 0x4893d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4893d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4893d4:
    // 0x4893d4: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x4893d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_4893d8:
    // 0x4893d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4893d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4893dc:
    // 0x4893dc: 0xc10ca68  jal         func_4329A0
label_4893e0:
    if (ctx->pc == 0x4893E0u) {
        ctx->pc = 0x4893E0u;
            // 0x4893e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4893E4u;
        goto label_4893e4;
    }
    ctx->pc = 0x4893DCu;
    SET_GPR_U32(ctx, 31, 0x4893E4u);
    ctx->pc = 0x4893E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4893DCu;
            // 0x4893e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4893E4u; }
        if (ctx->pc != 0x4893E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4893E4u; }
        if (ctx->pc != 0x4893E4u) { return; }
    }
    ctx->pc = 0x4893E4u;
label_4893e4:
    // 0x4893e4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4893e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4893e8:
    // 0x4893e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4893e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4893ec:
    // 0x4893ec: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x4893ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_4893f0:
    // 0x4893f0: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x4893f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_4893f4:
    // 0x4893f4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4893f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4893f8:
    // 0x4893f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4893f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4893fc:
    // 0x4893fc: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x4893fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_489400:
    // 0x489400: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x489400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_489404:
    // 0x489404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x489404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_489408:
    // 0x489408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x489408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48940c:
    // 0x48940c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48940cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_489410:
    // 0x489410: 0x3e00008  jr          $ra
label_489414:
    if (ctx->pc == 0x489414u) {
        ctx->pc = 0x489414u;
            // 0x489414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x489418u;
        goto label_489418;
    }
    ctx->pc = 0x489410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489410u;
            // 0x489414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489418u;
label_489418:
    // 0x489418: 0x0  nop
    ctx->pc = 0x489418u;
    // NOP
label_48941c:
    // 0x48941c: 0x0  nop
    ctx->pc = 0x48941cu;
    // NOP
label_489420:
    // 0x489420: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x489420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_489424:
    // 0x489424: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x489424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_489428:
    // 0x489428: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x489428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48942c:
    // 0x48942c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x48942cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_489430:
    // 0x489430: 0x8cc60030  lw          $a2, 0x30($a2)
    ctx->pc = 0x489430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_489434:
    // 0x489434: 0xacc012a8  sw          $zero, 0x12A8($a2)
    ctx->pc = 0x489434u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4776), GPR_U32(ctx, 0));
label_489438:
    // 0x489438: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x489438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_48943c:
    // 0x48943c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x48943cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
label_489440:
    // 0x489440: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x489440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
label_489444:
    // 0x489444: 0xac85006c  sw          $a1, 0x6C($a0)
    ctx->pc = 0x489444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
label_489448:
    // 0x489448: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x489448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_48944c:
    // 0x48944c: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x48944cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
label_489450:
    // 0x489450: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x489450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
label_489454:
    // 0x489454: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x489454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_489458:
    // 0x489458: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x489458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_48945c:
    // 0x48945c: 0x94a30064  lhu         $v1, 0x64($a1)
    ctx->pc = 0x48945cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_489460:
    // 0x489460: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x489460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_489464:
    // 0x489464: 0xa4a30064  sh          $v1, 0x64($a1)
    ctx->pc = 0x489464u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 3));
label_489468:
    // 0x489468: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x489468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_48946c:
    // 0x48946c: 0x94a30064  lhu         $v1, 0x64($a1)
    ctx->pc = 0x48946cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_489470:
    // 0x489470: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x489470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_489474:
    // 0x489474: 0xa4a30064  sh          $v1, 0x64($a1)
    ctx->pc = 0x489474u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 3));
label_489478:
    // 0x489478: 0x8c850084  lw          $a1, 0x84($a0)
    ctx->pc = 0x489478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_48947c:
    // 0x48947c: 0x94a30064  lhu         $v1, 0x64($a1)
    ctx->pc = 0x48947cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_489480:
    // 0x489480: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x489480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_489484:
    // 0x489484: 0xa4a30064  sh          $v1, 0x64($a1)
    ctx->pc = 0x489484u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 3));
label_489488:
    // 0x489488: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x489488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_48948c:
    // 0x48948c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x48948cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489490:
    // 0x489490: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x489490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_489494:
    // 0x489494: 0x3e00008  jr          $ra
label_489498:
    if (ctx->pc == 0x489498u) {
        ctx->pc = 0x489498u;
            // 0x489498: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x48949Cu;
        goto label_48949c;
    }
    ctx->pc = 0x489494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489494u;
            // 0x489498: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48949Cu;
label_48949c:
    // 0x48949c: 0x0  nop
    ctx->pc = 0x48949cu;
    // NOP
}
