#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00416A80
// Address: 0x416a80 - 0x4174f0
void sub_00416A80_0x416a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416A80_0x416a80");
#endif

    switch (ctx->pc) {
        case 0x416a80u: goto label_416a80;
        case 0x416a84u: goto label_416a84;
        case 0x416a88u: goto label_416a88;
        case 0x416a8cu: goto label_416a8c;
        case 0x416a90u: goto label_416a90;
        case 0x416a94u: goto label_416a94;
        case 0x416a98u: goto label_416a98;
        case 0x416a9cu: goto label_416a9c;
        case 0x416aa0u: goto label_416aa0;
        case 0x416aa4u: goto label_416aa4;
        case 0x416aa8u: goto label_416aa8;
        case 0x416aacu: goto label_416aac;
        case 0x416ab0u: goto label_416ab0;
        case 0x416ab4u: goto label_416ab4;
        case 0x416ab8u: goto label_416ab8;
        case 0x416abcu: goto label_416abc;
        case 0x416ac0u: goto label_416ac0;
        case 0x416ac4u: goto label_416ac4;
        case 0x416ac8u: goto label_416ac8;
        case 0x416accu: goto label_416acc;
        case 0x416ad0u: goto label_416ad0;
        case 0x416ad4u: goto label_416ad4;
        case 0x416ad8u: goto label_416ad8;
        case 0x416adcu: goto label_416adc;
        case 0x416ae0u: goto label_416ae0;
        case 0x416ae4u: goto label_416ae4;
        case 0x416ae8u: goto label_416ae8;
        case 0x416aecu: goto label_416aec;
        case 0x416af0u: goto label_416af0;
        case 0x416af4u: goto label_416af4;
        case 0x416af8u: goto label_416af8;
        case 0x416afcu: goto label_416afc;
        case 0x416b00u: goto label_416b00;
        case 0x416b04u: goto label_416b04;
        case 0x416b08u: goto label_416b08;
        case 0x416b0cu: goto label_416b0c;
        case 0x416b10u: goto label_416b10;
        case 0x416b14u: goto label_416b14;
        case 0x416b18u: goto label_416b18;
        case 0x416b1cu: goto label_416b1c;
        case 0x416b20u: goto label_416b20;
        case 0x416b24u: goto label_416b24;
        case 0x416b28u: goto label_416b28;
        case 0x416b2cu: goto label_416b2c;
        case 0x416b30u: goto label_416b30;
        case 0x416b34u: goto label_416b34;
        case 0x416b38u: goto label_416b38;
        case 0x416b3cu: goto label_416b3c;
        case 0x416b40u: goto label_416b40;
        case 0x416b44u: goto label_416b44;
        case 0x416b48u: goto label_416b48;
        case 0x416b4cu: goto label_416b4c;
        case 0x416b50u: goto label_416b50;
        case 0x416b54u: goto label_416b54;
        case 0x416b58u: goto label_416b58;
        case 0x416b5cu: goto label_416b5c;
        case 0x416b60u: goto label_416b60;
        case 0x416b64u: goto label_416b64;
        case 0x416b68u: goto label_416b68;
        case 0x416b6cu: goto label_416b6c;
        case 0x416b70u: goto label_416b70;
        case 0x416b74u: goto label_416b74;
        case 0x416b78u: goto label_416b78;
        case 0x416b7cu: goto label_416b7c;
        case 0x416b80u: goto label_416b80;
        case 0x416b84u: goto label_416b84;
        case 0x416b88u: goto label_416b88;
        case 0x416b8cu: goto label_416b8c;
        case 0x416b90u: goto label_416b90;
        case 0x416b94u: goto label_416b94;
        case 0x416b98u: goto label_416b98;
        case 0x416b9cu: goto label_416b9c;
        case 0x416ba0u: goto label_416ba0;
        case 0x416ba4u: goto label_416ba4;
        case 0x416ba8u: goto label_416ba8;
        case 0x416bacu: goto label_416bac;
        case 0x416bb0u: goto label_416bb0;
        case 0x416bb4u: goto label_416bb4;
        case 0x416bb8u: goto label_416bb8;
        case 0x416bbcu: goto label_416bbc;
        case 0x416bc0u: goto label_416bc0;
        case 0x416bc4u: goto label_416bc4;
        case 0x416bc8u: goto label_416bc8;
        case 0x416bccu: goto label_416bcc;
        case 0x416bd0u: goto label_416bd0;
        case 0x416bd4u: goto label_416bd4;
        case 0x416bd8u: goto label_416bd8;
        case 0x416bdcu: goto label_416bdc;
        case 0x416be0u: goto label_416be0;
        case 0x416be4u: goto label_416be4;
        case 0x416be8u: goto label_416be8;
        case 0x416becu: goto label_416bec;
        case 0x416bf0u: goto label_416bf0;
        case 0x416bf4u: goto label_416bf4;
        case 0x416bf8u: goto label_416bf8;
        case 0x416bfcu: goto label_416bfc;
        case 0x416c00u: goto label_416c00;
        case 0x416c04u: goto label_416c04;
        case 0x416c08u: goto label_416c08;
        case 0x416c0cu: goto label_416c0c;
        case 0x416c10u: goto label_416c10;
        case 0x416c14u: goto label_416c14;
        case 0x416c18u: goto label_416c18;
        case 0x416c1cu: goto label_416c1c;
        case 0x416c20u: goto label_416c20;
        case 0x416c24u: goto label_416c24;
        case 0x416c28u: goto label_416c28;
        case 0x416c2cu: goto label_416c2c;
        case 0x416c30u: goto label_416c30;
        case 0x416c34u: goto label_416c34;
        case 0x416c38u: goto label_416c38;
        case 0x416c3cu: goto label_416c3c;
        case 0x416c40u: goto label_416c40;
        case 0x416c44u: goto label_416c44;
        case 0x416c48u: goto label_416c48;
        case 0x416c4cu: goto label_416c4c;
        case 0x416c50u: goto label_416c50;
        case 0x416c54u: goto label_416c54;
        case 0x416c58u: goto label_416c58;
        case 0x416c5cu: goto label_416c5c;
        case 0x416c60u: goto label_416c60;
        case 0x416c64u: goto label_416c64;
        case 0x416c68u: goto label_416c68;
        case 0x416c6cu: goto label_416c6c;
        case 0x416c70u: goto label_416c70;
        case 0x416c74u: goto label_416c74;
        case 0x416c78u: goto label_416c78;
        case 0x416c7cu: goto label_416c7c;
        case 0x416c80u: goto label_416c80;
        case 0x416c84u: goto label_416c84;
        case 0x416c88u: goto label_416c88;
        case 0x416c8cu: goto label_416c8c;
        case 0x416c90u: goto label_416c90;
        case 0x416c94u: goto label_416c94;
        case 0x416c98u: goto label_416c98;
        case 0x416c9cu: goto label_416c9c;
        case 0x416ca0u: goto label_416ca0;
        case 0x416ca4u: goto label_416ca4;
        case 0x416ca8u: goto label_416ca8;
        case 0x416cacu: goto label_416cac;
        case 0x416cb0u: goto label_416cb0;
        case 0x416cb4u: goto label_416cb4;
        case 0x416cb8u: goto label_416cb8;
        case 0x416cbcu: goto label_416cbc;
        case 0x416cc0u: goto label_416cc0;
        case 0x416cc4u: goto label_416cc4;
        case 0x416cc8u: goto label_416cc8;
        case 0x416cccu: goto label_416ccc;
        case 0x416cd0u: goto label_416cd0;
        case 0x416cd4u: goto label_416cd4;
        case 0x416cd8u: goto label_416cd8;
        case 0x416cdcu: goto label_416cdc;
        case 0x416ce0u: goto label_416ce0;
        case 0x416ce4u: goto label_416ce4;
        case 0x416ce8u: goto label_416ce8;
        case 0x416cecu: goto label_416cec;
        case 0x416cf0u: goto label_416cf0;
        case 0x416cf4u: goto label_416cf4;
        case 0x416cf8u: goto label_416cf8;
        case 0x416cfcu: goto label_416cfc;
        case 0x416d00u: goto label_416d00;
        case 0x416d04u: goto label_416d04;
        case 0x416d08u: goto label_416d08;
        case 0x416d0cu: goto label_416d0c;
        case 0x416d10u: goto label_416d10;
        case 0x416d14u: goto label_416d14;
        case 0x416d18u: goto label_416d18;
        case 0x416d1cu: goto label_416d1c;
        case 0x416d20u: goto label_416d20;
        case 0x416d24u: goto label_416d24;
        case 0x416d28u: goto label_416d28;
        case 0x416d2cu: goto label_416d2c;
        case 0x416d30u: goto label_416d30;
        case 0x416d34u: goto label_416d34;
        case 0x416d38u: goto label_416d38;
        case 0x416d3cu: goto label_416d3c;
        case 0x416d40u: goto label_416d40;
        case 0x416d44u: goto label_416d44;
        case 0x416d48u: goto label_416d48;
        case 0x416d4cu: goto label_416d4c;
        case 0x416d50u: goto label_416d50;
        case 0x416d54u: goto label_416d54;
        case 0x416d58u: goto label_416d58;
        case 0x416d5cu: goto label_416d5c;
        case 0x416d60u: goto label_416d60;
        case 0x416d64u: goto label_416d64;
        case 0x416d68u: goto label_416d68;
        case 0x416d6cu: goto label_416d6c;
        case 0x416d70u: goto label_416d70;
        case 0x416d74u: goto label_416d74;
        case 0x416d78u: goto label_416d78;
        case 0x416d7cu: goto label_416d7c;
        case 0x416d80u: goto label_416d80;
        case 0x416d84u: goto label_416d84;
        case 0x416d88u: goto label_416d88;
        case 0x416d8cu: goto label_416d8c;
        case 0x416d90u: goto label_416d90;
        case 0x416d94u: goto label_416d94;
        case 0x416d98u: goto label_416d98;
        case 0x416d9cu: goto label_416d9c;
        case 0x416da0u: goto label_416da0;
        case 0x416da4u: goto label_416da4;
        case 0x416da8u: goto label_416da8;
        case 0x416dacu: goto label_416dac;
        case 0x416db0u: goto label_416db0;
        case 0x416db4u: goto label_416db4;
        case 0x416db8u: goto label_416db8;
        case 0x416dbcu: goto label_416dbc;
        case 0x416dc0u: goto label_416dc0;
        case 0x416dc4u: goto label_416dc4;
        case 0x416dc8u: goto label_416dc8;
        case 0x416dccu: goto label_416dcc;
        case 0x416dd0u: goto label_416dd0;
        case 0x416dd4u: goto label_416dd4;
        case 0x416dd8u: goto label_416dd8;
        case 0x416ddcu: goto label_416ddc;
        case 0x416de0u: goto label_416de0;
        case 0x416de4u: goto label_416de4;
        case 0x416de8u: goto label_416de8;
        case 0x416decu: goto label_416dec;
        case 0x416df0u: goto label_416df0;
        case 0x416df4u: goto label_416df4;
        case 0x416df8u: goto label_416df8;
        case 0x416dfcu: goto label_416dfc;
        case 0x416e00u: goto label_416e00;
        case 0x416e04u: goto label_416e04;
        case 0x416e08u: goto label_416e08;
        case 0x416e0cu: goto label_416e0c;
        case 0x416e10u: goto label_416e10;
        case 0x416e14u: goto label_416e14;
        case 0x416e18u: goto label_416e18;
        case 0x416e1cu: goto label_416e1c;
        case 0x416e20u: goto label_416e20;
        case 0x416e24u: goto label_416e24;
        case 0x416e28u: goto label_416e28;
        case 0x416e2cu: goto label_416e2c;
        case 0x416e30u: goto label_416e30;
        case 0x416e34u: goto label_416e34;
        case 0x416e38u: goto label_416e38;
        case 0x416e3cu: goto label_416e3c;
        case 0x416e40u: goto label_416e40;
        case 0x416e44u: goto label_416e44;
        case 0x416e48u: goto label_416e48;
        case 0x416e4cu: goto label_416e4c;
        case 0x416e50u: goto label_416e50;
        case 0x416e54u: goto label_416e54;
        case 0x416e58u: goto label_416e58;
        case 0x416e5cu: goto label_416e5c;
        case 0x416e60u: goto label_416e60;
        case 0x416e64u: goto label_416e64;
        case 0x416e68u: goto label_416e68;
        case 0x416e6cu: goto label_416e6c;
        case 0x416e70u: goto label_416e70;
        case 0x416e74u: goto label_416e74;
        case 0x416e78u: goto label_416e78;
        case 0x416e7cu: goto label_416e7c;
        case 0x416e80u: goto label_416e80;
        case 0x416e84u: goto label_416e84;
        case 0x416e88u: goto label_416e88;
        case 0x416e8cu: goto label_416e8c;
        case 0x416e90u: goto label_416e90;
        case 0x416e94u: goto label_416e94;
        case 0x416e98u: goto label_416e98;
        case 0x416e9cu: goto label_416e9c;
        case 0x416ea0u: goto label_416ea0;
        case 0x416ea4u: goto label_416ea4;
        case 0x416ea8u: goto label_416ea8;
        case 0x416eacu: goto label_416eac;
        case 0x416eb0u: goto label_416eb0;
        case 0x416eb4u: goto label_416eb4;
        case 0x416eb8u: goto label_416eb8;
        case 0x416ebcu: goto label_416ebc;
        case 0x416ec0u: goto label_416ec0;
        case 0x416ec4u: goto label_416ec4;
        case 0x416ec8u: goto label_416ec8;
        case 0x416eccu: goto label_416ecc;
        case 0x416ed0u: goto label_416ed0;
        case 0x416ed4u: goto label_416ed4;
        case 0x416ed8u: goto label_416ed8;
        case 0x416edcu: goto label_416edc;
        case 0x416ee0u: goto label_416ee0;
        case 0x416ee4u: goto label_416ee4;
        case 0x416ee8u: goto label_416ee8;
        case 0x416eecu: goto label_416eec;
        case 0x416ef0u: goto label_416ef0;
        case 0x416ef4u: goto label_416ef4;
        case 0x416ef8u: goto label_416ef8;
        case 0x416efcu: goto label_416efc;
        case 0x416f00u: goto label_416f00;
        case 0x416f04u: goto label_416f04;
        case 0x416f08u: goto label_416f08;
        case 0x416f0cu: goto label_416f0c;
        case 0x416f10u: goto label_416f10;
        case 0x416f14u: goto label_416f14;
        case 0x416f18u: goto label_416f18;
        case 0x416f1cu: goto label_416f1c;
        case 0x416f20u: goto label_416f20;
        case 0x416f24u: goto label_416f24;
        case 0x416f28u: goto label_416f28;
        case 0x416f2cu: goto label_416f2c;
        case 0x416f30u: goto label_416f30;
        case 0x416f34u: goto label_416f34;
        case 0x416f38u: goto label_416f38;
        case 0x416f3cu: goto label_416f3c;
        case 0x416f40u: goto label_416f40;
        case 0x416f44u: goto label_416f44;
        case 0x416f48u: goto label_416f48;
        case 0x416f4cu: goto label_416f4c;
        case 0x416f50u: goto label_416f50;
        case 0x416f54u: goto label_416f54;
        case 0x416f58u: goto label_416f58;
        case 0x416f5cu: goto label_416f5c;
        case 0x416f60u: goto label_416f60;
        case 0x416f64u: goto label_416f64;
        case 0x416f68u: goto label_416f68;
        case 0x416f6cu: goto label_416f6c;
        case 0x416f70u: goto label_416f70;
        case 0x416f74u: goto label_416f74;
        case 0x416f78u: goto label_416f78;
        case 0x416f7cu: goto label_416f7c;
        case 0x416f80u: goto label_416f80;
        case 0x416f84u: goto label_416f84;
        case 0x416f88u: goto label_416f88;
        case 0x416f8cu: goto label_416f8c;
        case 0x416f90u: goto label_416f90;
        case 0x416f94u: goto label_416f94;
        case 0x416f98u: goto label_416f98;
        case 0x416f9cu: goto label_416f9c;
        case 0x416fa0u: goto label_416fa0;
        case 0x416fa4u: goto label_416fa4;
        case 0x416fa8u: goto label_416fa8;
        case 0x416facu: goto label_416fac;
        case 0x416fb0u: goto label_416fb0;
        case 0x416fb4u: goto label_416fb4;
        case 0x416fb8u: goto label_416fb8;
        case 0x416fbcu: goto label_416fbc;
        case 0x416fc0u: goto label_416fc0;
        case 0x416fc4u: goto label_416fc4;
        case 0x416fc8u: goto label_416fc8;
        case 0x416fccu: goto label_416fcc;
        case 0x416fd0u: goto label_416fd0;
        case 0x416fd4u: goto label_416fd4;
        case 0x416fd8u: goto label_416fd8;
        case 0x416fdcu: goto label_416fdc;
        case 0x416fe0u: goto label_416fe0;
        case 0x416fe4u: goto label_416fe4;
        case 0x416fe8u: goto label_416fe8;
        case 0x416fecu: goto label_416fec;
        case 0x416ff0u: goto label_416ff0;
        case 0x416ff4u: goto label_416ff4;
        case 0x416ff8u: goto label_416ff8;
        case 0x416ffcu: goto label_416ffc;
        case 0x417000u: goto label_417000;
        case 0x417004u: goto label_417004;
        case 0x417008u: goto label_417008;
        case 0x41700cu: goto label_41700c;
        case 0x417010u: goto label_417010;
        case 0x417014u: goto label_417014;
        case 0x417018u: goto label_417018;
        case 0x41701cu: goto label_41701c;
        case 0x417020u: goto label_417020;
        case 0x417024u: goto label_417024;
        case 0x417028u: goto label_417028;
        case 0x41702cu: goto label_41702c;
        case 0x417030u: goto label_417030;
        case 0x417034u: goto label_417034;
        case 0x417038u: goto label_417038;
        case 0x41703cu: goto label_41703c;
        case 0x417040u: goto label_417040;
        case 0x417044u: goto label_417044;
        case 0x417048u: goto label_417048;
        case 0x41704cu: goto label_41704c;
        case 0x417050u: goto label_417050;
        case 0x417054u: goto label_417054;
        case 0x417058u: goto label_417058;
        case 0x41705cu: goto label_41705c;
        case 0x417060u: goto label_417060;
        case 0x417064u: goto label_417064;
        case 0x417068u: goto label_417068;
        case 0x41706cu: goto label_41706c;
        case 0x417070u: goto label_417070;
        case 0x417074u: goto label_417074;
        case 0x417078u: goto label_417078;
        case 0x41707cu: goto label_41707c;
        case 0x417080u: goto label_417080;
        case 0x417084u: goto label_417084;
        case 0x417088u: goto label_417088;
        case 0x41708cu: goto label_41708c;
        case 0x417090u: goto label_417090;
        case 0x417094u: goto label_417094;
        case 0x417098u: goto label_417098;
        case 0x41709cu: goto label_41709c;
        case 0x4170a0u: goto label_4170a0;
        case 0x4170a4u: goto label_4170a4;
        case 0x4170a8u: goto label_4170a8;
        case 0x4170acu: goto label_4170ac;
        case 0x4170b0u: goto label_4170b0;
        case 0x4170b4u: goto label_4170b4;
        case 0x4170b8u: goto label_4170b8;
        case 0x4170bcu: goto label_4170bc;
        case 0x4170c0u: goto label_4170c0;
        case 0x4170c4u: goto label_4170c4;
        case 0x4170c8u: goto label_4170c8;
        case 0x4170ccu: goto label_4170cc;
        case 0x4170d0u: goto label_4170d0;
        case 0x4170d4u: goto label_4170d4;
        case 0x4170d8u: goto label_4170d8;
        case 0x4170dcu: goto label_4170dc;
        case 0x4170e0u: goto label_4170e0;
        case 0x4170e4u: goto label_4170e4;
        case 0x4170e8u: goto label_4170e8;
        case 0x4170ecu: goto label_4170ec;
        case 0x4170f0u: goto label_4170f0;
        case 0x4170f4u: goto label_4170f4;
        case 0x4170f8u: goto label_4170f8;
        case 0x4170fcu: goto label_4170fc;
        case 0x417100u: goto label_417100;
        case 0x417104u: goto label_417104;
        case 0x417108u: goto label_417108;
        case 0x41710cu: goto label_41710c;
        case 0x417110u: goto label_417110;
        case 0x417114u: goto label_417114;
        case 0x417118u: goto label_417118;
        case 0x41711cu: goto label_41711c;
        case 0x417120u: goto label_417120;
        case 0x417124u: goto label_417124;
        case 0x417128u: goto label_417128;
        case 0x41712cu: goto label_41712c;
        case 0x417130u: goto label_417130;
        case 0x417134u: goto label_417134;
        case 0x417138u: goto label_417138;
        case 0x41713cu: goto label_41713c;
        case 0x417140u: goto label_417140;
        case 0x417144u: goto label_417144;
        case 0x417148u: goto label_417148;
        case 0x41714cu: goto label_41714c;
        case 0x417150u: goto label_417150;
        case 0x417154u: goto label_417154;
        case 0x417158u: goto label_417158;
        case 0x41715cu: goto label_41715c;
        case 0x417160u: goto label_417160;
        case 0x417164u: goto label_417164;
        case 0x417168u: goto label_417168;
        case 0x41716cu: goto label_41716c;
        case 0x417170u: goto label_417170;
        case 0x417174u: goto label_417174;
        case 0x417178u: goto label_417178;
        case 0x41717cu: goto label_41717c;
        case 0x417180u: goto label_417180;
        case 0x417184u: goto label_417184;
        case 0x417188u: goto label_417188;
        case 0x41718cu: goto label_41718c;
        case 0x417190u: goto label_417190;
        case 0x417194u: goto label_417194;
        case 0x417198u: goto label_417198;
        case 0x41719cu: goto label_41719c;
        case 0x4171a0u: goto label_4171a0;
        case 0x4171a4u: goto label_4171a4;
        case 0x4171a8u: goto label_4171a8;
        case 0x4171acu: goto label_4171ac;
        case 0x4171b0u: goto label_4171b0;
        case 0x4171b4u: goto label_4171b4;
        case 0x4171b8u: goto label_4171b8;
        case 0x4171bcu: goto label_4171bc;
        case 0x4171c0u: goto label_4171c0;
        case 0x4171c4u: goto label_4171c4;
        case 0x4171c8u: goto label_4171c8;
        case 0x4171ccu: goto label_4171cc;
        case 0x4171d0u: goto label_4171d0;
        case 0x4171d4u: goto label_4171d4;
        case 0x4171d8u: goto label_4171d8;
        case 0x4171dcu: goto label_4171dc;
        case 0x4171e0u: goto label_4171e0;
        case 0x4171e4u: goto label_4171e4;
        case 0x4171e8u: goto label_4171e8;
        case 0x4171ecu: goto label_4171ec;
        case 0x4171f0u: goto label_4171f0;
        case 0x4171f4u: goto label_4171f4;
        case 0x4171f8u: goto label_4171f8;
        case 0x4171fcu: goto label_4171fc;
        case 0x417200u: goto label_417200;
        case 0x417204u: goto label_417204;
        case 0x417208u: goto label_417208;
        case 0x41720cu: goto label_41720c;
        case 0x417210u: goto label_417210;
        case 0x417214u: goto label_417214;
        case 0x417218u: goto label_417218;
        case 0x41721cu: goto label_41721c;
        case 0x417220u: goto label_417220;
        case 0x417224u: goto label_417224;
        case 0x417228u: goto label_417228;
        case 0x41722cu: goto label_41722c;
        case 0x417230u: goto label_417230;
        case 0x417234u: goto label_417234;
        case 0x417238u: goto label_417238;
        case 0x41723cu: goto label_41723c;
        case 0x417240u: goto label_417240;
        case 0x417244u: goto label_417244;
        case 0x417248u: goto label_417248;
        case 0x41724cu: goto label_41724c;
        case 0x417250u: goto label_417250;
        case 0x417254u: goto label_417254;
        case 0x417258u: goto label_417258;
        case 0x41725cu: goto label_41725c;
        case 0x417260u: goto label_417260;
        case 0x417264u: goto label_417264;
        case 0x417268u: goto label_417268;
        case 0x41726cu: goto label_41726c;
        case 0x417270u: goto label_417270;
        case 0x417274u: goto label_417274;
        case 0x417278u: goto label_417278;
        case 0x41727cu: goto label_41727c;
        case 0x417280u: goto label_417280;
        case 0x417284u: goto label_417284;
        case 0x417288u: goto label_417288;
        case 0x41728cu: goto label_41728c;
        case 0x417290u: goto label_417290;
        case 0x417294u: goto label_417294;
        case 0x417298u: goto label_417298;
        case 0x41729cu: goto label_41729c;
        case 0x4172a0u: goto label_4172a0;
        case 0x4172a4u: goto label_4172a4;
        case 0x4172a8u: goto label_4172a8;
        case 0x4172acu: goto label_4172ac;
        case 0x4172b0u: goto label_4172b0;
        case 0x4172b4u: goto label_4172b4;
        case 0x4172b8u: goto label_4172b8;
        case 0x4172bcu: goto label_4172bc;
        case 0x4172c0u: goto label_4172c0;
        case 0x4172c4u: goto label_4172c4;
        case 0x4172c8u: goto label_4172c8;
        case 0x4172ccu: goto label_4172cc;
        case 0x4172d0u: goto label_4172d0;
        case 0x4172d4u: goto label_4172d4;
        case 0x4172d8u: goto label_4172d8;
        case 0x4172dcu: goto label_4172dc;
        case 0x4172e0u: goto label_4172e0;
        case 0x4172e4u: goto label_4172e4;
        case 0x4172e8u: goto label_4172e8;
        case 0x4172ecu: goto label_4172ec;
        case 0x4172f0u: goto label_4172f0;
        case 0x4172f4u: goto label_4172f4;
        case 0x4172f8u: goto label_4172f8;
        case 0x4172fcu: goto label_4172fc;
        case 0x417300u: goto label_417300;
        case 0x417304u: goto label_417304;
        case 0x417308u: goto label_417308;
        case 0x41730cu: goto label_41730c;
        case 0x417310u: goto label_417310;
        case 0x417314u: goto label_417314;
        case 0x417318u: goto label_417318;
        case 0x41731cu: goto label_41731c;
        case 0x417320u: goto label_417320;
        case 0x417324u: goto label_417324;
        case 0x417328u: goto label_417328;
        case 0x41732cu: goto label_41732c;
        case 0x417330u: goto label_417330;
        case 0x417334u: goto label_417334;
        case 0x417338u: goto label_417338;
        case 0x41733cu: goto label_41733c;
        case 0x417340u: goto label_417340;
        case 0x417344u: goto label_417344;
        case 0x417348u: goto label_417348;
        case 0x41734cu: goto label_41734c;
        case 0x417350u: goto label_417350;
        case 0x417354u: goto label_417354;
        case 0x417358u: goto label_417358;
        case 0x41735cu: goto label_41735c;
        case 0x417360u: goto label_417360;
        case 0x417364u: goto label_417364;
        case 0x417368u: goto label_417368;
        case 0x41736cu: goto label_41736c;
        case 0x417370u: goto label_417370;
        case 0x417374u: goto label_417374;
        case 0x417378u: goto label_417378;
        case 0x41737cu: goto label_41737c;
        case 0x417380u: goto label_417380;
        case 0x417384u: goto label_417384;
        case 0x417388u: goto label_417388;
        case 0x41738cu: goto label_41738c;
        case 0x417390u: goto label_417390;
        case 0x417394u: goto label_417394;
        case 0x417398u: goto label_417398;
        case 0x41739cu: goto label_41739c;
        case 0x4173a0u: goto label_4173a0;
        case 0x4173a4u: goto label_4173a4;
        case 0x4173a8u: goto label_4173a8;
        case 0x4173acu: goto label_4173ac;
        case 0x4173b0u: goto label_4173b0;
        case 0x4173b4u: goto label_4173b4;
        case 0x4173b8u: goto label_4173b8;
        case 0x4173bcu: goto label_4173bc;
        case 0x4173c0u: goto label_4173c0;
        case 0x4173c4u: goto label_4173c4;
        case 0x4173c8u: goto label_4173c8;
        case 0x4173ccu: goto label_4173cc;
        case 0x4173d0u: goto label_4173d0;
        case 0x4173d4u: goto label_4173d4;
        case 0x4173d8u: goto label_4173d8;
        case 0x4173dcu: goto label_4173dc;
        case 0x4173e0u: goto label_4173e0;
        case 0x4173e4u: goto label_4173e4;
        case 0x4173e8u: goto label_4173e8;
        case 0x4173ecu: goto label_4173ec;
        case 0x4173f0u: goto label_4173f0;
        case 0x4173f4u: goto label_4173f4;
        case 0x4173f8u: goto label_4173f8;
        case 0x4173fcu: goto label_4173fc;
        case 0x417400u: goto label_417400;
        case 0x417404u: goto label_417404;
        case 0x417408u: goto label_417408;
        case 0x41740cu: goto label_41740c;
        case 0x417410u: goto label_417410;
        case 0x417414u: goto label_417414;
        case 0x417418u: goto label_417418;
        case 0x41741cu: goto label_41741c;
        case 0x417420u: goto label_417420;
        case 0x417424u: goto label_417424;
        case 0x417428u: goto label_417428;
        case 0x41742cu: goto label_41742c;
        case 0x417430u: goto label_417430;
        case 0x417434u: goto label_417434;
        case 0x417438u: goto label_417438;
        case 0x41743cu: goto label_41743c;
        case 0x417440u: goto label_417440;
        case 0x417444u: goto label_417444;
        case 0x417448u: goto label_417448;
        case 0x41744cu: goto label_41744c;
        case 0x417450u: goto label_417450;
        case 0x417454u: goto label_417454;
        case 0x417458u: goto label_417458;
        case 0x41745cu: goto label_41745c;
        case 0x417460u: goto label_417460;
        case 0x417464u: goto label_417464;
        case 0x417468u: goto label_417468;
        case 0x41746cu: goto label_41746c;
        case 0x417470u: goto label_417470;
        case 0x417474u: goto label_417474;
        case 0x417478u: goto label_417478;
        case 0x41747cu: goto label_41747c;
        case 0x417480u: goto label_417480;
        case 0x417484u: goto label_417484;
        case 0x417488u: goto label_417488;
        case 0x41748cu: goto label_41748c;
        case 0x417490u: goto label_417490;
        case 0x417494u: goto label_417494;
        case 0x417498u: goto label_417498;
        case 0x41749cu: goto label_41749c;
        case 0x4174a0u: goto label_4174a0;
        case 0x4174a4u: goto label_4174a4;
        case 0x4174a8u: goto label_4174a8;
        case 0x4174acu: goto label_4174ac;
        case 0x4174b0u: goto label_4174b0;
        case 0x4174b4u: goto label_4174b4;
        case 0x4174b8u: goto label_4174b8;
        case 0x4174bcu: goto label_4174bc;
        case 0x4174c0u: goto label_4174c0;
        case 0x4174c4u: goto label_4174c4;
        case 0x4174c8u: goto label_4174c8;
        case 0x4174ccu: goto label_4174cc;
        case 0x4174d0u: goto label_4174d0;
        case 0x4174d4u: goto label_4174d4;
        case 0x4174d8u: goto label_4174d8;
        case 0x4174dcu: goto label_4174dc;
        case 0x4174e0u: goto label_4174e0;
        case 0x4174e4u: goto label_4174e4;
        case 0x4174e8u: goto label_4174e8;
        case 0x4174ecu: goto label_4174ec;
        default: break;
    }

    ctx->pc = 0x416a80u;

label_416a80:
    // 0x416a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x416a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_416a84:
    // 0x416a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x416a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_416a88:
    // 0x416a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x416a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_416a8c:
    // 0x416a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x416a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_416a90:
    // 0x416a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x416a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_416a94:
    // 0x416a94: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_416a98:
    if (ctx->pc == 0x416A98u) {
        ctx->pc = 0x416A98u;
            // 0x416a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416A9Cu;
        goto label_416a9c;
    }
    ctx->pc = 0x416A94u;
    {
        const bool branch_taken_0x416a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416A94u;
            // 0x416a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a94) {
            ctx->pc = 0x416BC8u;
            goto label_416bc8;
        }
    }
    ctx->pc = 0x416A9Cu;
label_416a9c:
    // 0x416a9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x416a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_416aa0:
    // 0x416aa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x416aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_416aa4:
    // 0x416aa4: 0x2463b460  addiu       $v1, $v1, -0x4BA0
    ctx->pc = 0x416aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947936));
label_416aa8:
    // 0x416aa8: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x416aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_416aac:
    // 0x416aac: 0x2442b498  addiu       $v0, $v0, -0x4B68
    ctx->pc = 0x416aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947992));
label_416ab0:
    // 0x416ab0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x416ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_416ab4:
    // 0x416ab4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x416ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_416ab8:
    // 0x416ab8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x416ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_416abc:
    // 0x416abc: 0xc0407c0  jal         func_101F00
label_416ac0:
    if (ctx->pc == 0x416AC0u) {
        ctx->pc = 0x416AC0u;
            // 0x416ac0: 0x24a56be0  addiu       $a1, $a1, 0x6BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27616));
        ctx->pc = 0x416AC4u;
        goto label_416ac4;
    }
    ctx->pc = 0x416ABCu;
    SET_GPR_U32(ctx, 31, 0x416AC4u);
    ctx->pc = 0x416AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416ABCu;
            // 0x416ac0: 0x24a56be0  addiu       $a1, $a1, 0x6BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416AC4u; }
        if (ctx->pc != 0x416AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416AC4u; }
        if (ctx->pc != 0x416AC4u) { return; }
    }
    ctx->pc = 0x416AC4u;
label_416ac4:
    // 0x416ac4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x416ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_416ac8:
    // 0x416ac8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_416acc:
    if (ctx->pc == 0x416ACCu) {
        ctx->pc = 0x416ACCu;
            // 0x416acc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x416AD0u;
        goto label_416ad0;
    }
    ctx->pc = 0x416AC8u;
    {
        const bool branch_taken_0x416ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416ac8) {
            ctx->pc = 0x416ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416AC8u;
            // 0x416acc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416ADCu;
            goto label_416adc;
        }
    }
    ctx->pc = 0x416AD0u;
label_416ad0:
    // 0x416ad0: 0xc07507c  jal         func_1D41F0
label_416ad4:
    if (ctx->pc == 0x416AD4u) {
        ctx->pc = 0x416AD4u;
            // 0x416ad4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x416AD8u;
        goto label_416ad8;
    }
    ctx->pc = 0x416AD0u;
    SET_GPR_U32(ctx, 31, 0x416AD8u);
    ctx->pc = 0x416AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416AD0u;
            // 0x416ad4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416AD8u; }
        if (ctx->pc != 0x416AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416AD8u; }
        if (ctx->pc != 0x416AD8u) { return; }
    }
    ctx->pc = 0x416AD8u;
label_416ad8:
    // 0x416ad8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x416ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_416adc:
    // 0x416adc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_416ae0:
    if (ctx->pc == 0x416AE0u) {
        ctx->pc = 0x416AE0u;
            // 0x416ae0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x416AE4u;
        goto label_416ae4;
    }
    ctx->pc = 0x416ADCu;
    {
        const bool branch_taken_0x416adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416adc) {
            ctx->pc = 0x416AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416ADCu;
            // 0x416ae0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416B0Cu;
            goto label_416b0c;
        }
    }
    ctx->pc = 0x416AE4u;
label_416ae4:
    // 0x416ae4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_416ae8:
    if (ctx->pc == 0x416AE8u) {
        ctx->pc = 0x416AECu;
        goto label_416aec;
    }
    ctx->pc = 0x416AE4u;
    {
        const bool branch_taken_0x416ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416ae4) {
            ctx->pc = 0x416B08u;
            goto label_416b08;
        }
    }
    ctx->pc = 0x416AECu;
label_416aec:
    // 0x416aec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_416af0:
    if (ctx->pc == 0x416AF0u) {
        ctx->pc = 0x416AF4u;
        goto label_416af4;
    }
    ctx->pc = 0x416AECu;
    {
        const bool branch_taken_0x416aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416aec) {
            ctx->pc = 0x416B08u;
            goto label_416b08;
        }
    }
    ctx->pc = 0x416AF4u;
label_416af4:
    // 0x416af4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x416af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_416af8:
    // 0x416af8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_416afc:
    if (ctx->pc == 0x416AFCu) {
        ctx->pc = 0x416B00u;
        goto label_416b00;
    }
    ctx->pc = 0x416AF8u;
    {
        const bool branch_taken_0x416af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x416af8) {
            ctx->pc = 0x416B08u;
            goto label_416b08;
        }
    }
    ctx->pc = 0x416B00u;
label_416b00:
    // 0x416b00: 0xc0400a8  jal         func_1002A0
label_416b04:
    if (ctx->pc == 0x416B04u) {
        ctx->pc = 0x416B08u;
        goto label_416b08;
    }
    ctx->pc = 0x416B00u;
    SET_GPR_U32(ctx, 31, 0x416B08u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416B08u; }
        if (ctx->pc != 0x416B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416B08u; }
        if (ctx->pc != 0x416B08u) { return; }
    }
    ctx->pc = 0x416B08u;
label_416b08:
    // 0x416b08: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x416b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_416b0c:
    // 0x416b0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_416b10:
    if (ctx->pc == 0x416B10u) {
        ctx->pc = 0x416B10u;
            // 0x416b10: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x416B14u;
        goto label_416b14;
    }
    ctx->pc = 0x416B0Cu;
    {
        const bool branch_taken_0x416b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416b0c) {
            ctx->pc = 0x416B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416B0Cu;
            // 0x416b10: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416B3Cu;
            goto label_416b3c;
        }
    }
    ctx->pc = 0x416B14u;
label_416b14:
    // 0x416b14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_416b18:
    if (ctx->pc == 0x416B18u) {
        ctx->pc = 0x416B1Cu;
        goto label_416b1c;
    }
    ctx->pc = 0x416B14u;
    {
        const bool branch_taken_0x416b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416b14) {
            ctx->pc = 0x416B38u;
            goto label_416b38;
        }
    }
    ctx->pc = 0x416B1Cu;
label_416b1c:
    // 0x416b1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_416b20:
    if (ctx->pc == 0x416B20u) {
        ctx->pc = 0x416B24u;
        goto label_416b24;
    }
    ctx->pc = 0x416B1Cu;
    {
        const bool branch_taken_0x416b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416b1c) {
            ctx->pc = 0x416B38u;
            goto label_416b38;
        }
    }
    ctx->pc = 0x416B24u;
label_416b24:
    // 0x416b24: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x416b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_416b28:
    // 0x416b28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_416b2c:
    if (ctx->pc == 0x416B2Cu) {
        ctx->pc = 0x416B30u;
        goto label_416b30;
    }
    ctx->pc = 0x416B28u;
    {
        const bool branch_taken_0x416b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x416b28) {
            ctx->pc = 0x416B38u;
            goto label_416b38;
        }
    }
    ctx->pc = 0x416B30u;
label_416b30:
    // 0x416b30: 0xc0400a8  jal         func_1002A0
label_416b34:
    if (ctx->pc == 0x416B34u) {
        ctx->pc = 0x416B38u;
        goto label_416b38;
    }
    ctx->pc = 0x416B30u;
    SET_GPR_U32(ctx, 31, 0x416B38u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416B38u; }
        if (ctx->pc != 0x416B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416B38u; }
        if (ctx->pc != 0x416B38u) { return; }
    }
    ctx->pc = 0x416B38u;
label_416b38:
    // 0x416b38: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x416b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_416b3c:
    // 0x416b3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_416b40:
    if (ctx->pc == 0x416B40u) {
        ctx->pc = 0x416B44u;
        goto label_416b44;
    }
    ctx->pc = 0x416B3Cu;
    {
        const bool branch_taken_0x416b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416b3c) {
            ctx->pc = 0x416B58u;
            goto label_416b58;
        }
    }
    ctx->pc = 0x416B44u;
label_416b44:
    // 0x416b44: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x416b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_416b48:
    // 0x416b48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x416b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_416b4c:
    // 0x416b4c: 0x2463b448  addiu       $v1, $v1, -0x4BB8
    ctx->pc = 0x416b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947912));
label_416b50:
    // 0x416b50: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x416b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_416b54:
    // 0x416b54: 0xac407310  sw          $zero, 0x7310($v0)
    ctx->pc = 0x416b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29456), GPR_U32(ctx, 0));
label_416b58:
    // 0x416b58: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_416b5c:
    if (ctx->pc == 0x416B5Cu) {
        ctx->pc = 0x416B5Cu;
            // 0x416b5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x416B60u;
        goto label_416b60;
    }
    ctx->pc = 0x416B58u;
    {
        const bool branch_taken_0x416b58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x416b58) {
            ctx->pc = 0x416B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416B58u;
            // 0x416b5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416BB4u;
            goto label_416bb4;
        }
    }
    ctx->pc = 0x416B60u;
label_416b60:
    // 0x416b60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x416b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_416b64:
    // 0x416b64: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x416b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_416b68:
    // 0x416b68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x416b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_416b6c:
    // 0x416b6c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x416b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_416b70:
    // 0x416b70: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_416b74:
    if (ctx->pc == 0x416B74u) {
        ctx->pc = 0x416B74u;
            // 0x416b74: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x416B78u;
        goto label_416b78;
    }
    ctx->pc = 0x416B70u;
    {
        const bool branch_taken_0x416b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x416b70) {
            ctx->pc = 0x416B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416B70u;
            // 0x416b74: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416B8Cu;
            goto label_416b8c;
        }
    }
    ctx->pc = 0x416B78u;
label_416b78:
    // 0x416b78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x416b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_416b7c:
    // 0x416b7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x416b7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_416b80:
    // 0x416b80: 0x320f809  jalr        $t9
label_416b84:
    if (ctx->pc == 0x416B84u) {
        ctx->pc = 0x416B84u;
            // 0x416b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x416B88u;
        goto label_416b88;
    }
    ctx->pc = 0x416B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416B88u);
        ctx->pc = 0x416B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416B80u;
            // 0x416b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x416B88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416B88u; }
            if (ctx->pc != 0x416B88u) { return; }
        }
        }
    }
    ctx->pc = 0x416B88u;
label_416b88:
    // 0x416b88: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x416b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_416b8c:
    // 0x416b8c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_416b90:
    if (ctx->pc == 0x416B90u) {
        ctx->pc = 0x416B90u;
            // 0x416b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416B94u;
        goto label_416b94;
    }
    ctx->pc = 0x416B8Cu;
    {
        const bool branch_taken_0x416b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x416b8c) {
            ctx->pc = 0x416B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416B8Cu;
            // 0x416b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416BA8u;
            goto label_416ba8;
        }
    }
    ctx->pc = 0x416B94u;
label_416b94:
    // 0x416b94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x416b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_416b98:
    // 0x416b98: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x416b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_416b9c:
    // 0x416b9c: 0x320f809  jalr        $t9
label_416ba0:
    if (ctx->pc == 0x416BA0u) {
        ctx->pc = 0x416BA0u;
            // 0x416ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x416BA4u;
        goto label_416ba4;
    }
    ctx->pc = 0x416B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416BA4u);
        ctx->pc = 0x416BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416B9Cu;
            // 0x416ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x416BA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416BA4u; }
            if (ctx->pc != 0x416BA4u) { return; }
        }
        }
    }
    ctx->pc = 0x416BA4u;
label_416ba4:
    // 0x416ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x416ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_416ba8:
    // 0x416ba8: 0xc075bf8  jal         func_1D6FE0
label_416bac:
    if (ctx->pc == 0x416BACu) {
        ctx->pc = 0x416BACu;
            // 0x416bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416BB0u;
        goto label_416bb0;
    }
    ctx->pc = 0x416BA8u;
    SET_GPR_U32(ctx, 31, 0x416BB0u);
    ctx->pc = 0x416BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416BA8u;
            // 0x416bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416BB0u; }
        if (ctx->pc != 0x416BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416BB0u; }
        if (ctx->pc != 0x416BB0u) { return; }
    }
    ctx->pc = 0x416BB0u;
label_416bb0:
    // 0x416bb0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x416bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_416bb4:
    // 0x416bb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x416bb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_416bb8:
    // 0x416bb8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_416bbc:
    if (ctx->pc == 0x416BBCu) {
        ctx->pc = 0x416BBCu;
            // 0x416bbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416BC0u;
        goto label_416bc0;
    }
    ctx->pc = 0x416BB8u;
    {
        const bool branch_taken_0x416bb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x416bb8) {
            ctx->pc = 0x416BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416BB8u;
            // 0x416bbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416BCCu;
            goto label_416bcc;
        }
    }
    ctx->pc = 0x416BC0u;
label_416bc0:
    // 0x416bc0: 0xc0400a8  jal         func_1002A0
label_416bc4:
    if (ctx->pc == 0x416BC4u) {
        ctx->pc = 0x416BC4u;
            // 0x416bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416BC8u;
        goto label_416bc8;
    }
    ctx->pc = 0x416BC0u;
    SET_GPR_U32(ctx, 31, 0x416BC8u);
    ctx->pc = 0x416BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416BC0u;
            // 0x416bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416BC8u; }
        if (ctx->pc != 0x416BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416BC8u; }
        if (ctx->pc != 0x416BC8u) { return; }
    }
    ctx->pc = 0x416BC8u;
label_416bc8:
    // 0x416bc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x416bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_416bcc:
    // 0x416bcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x416bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_416bd0:
    // 0x416bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x416bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_416bd4:
    // 0x416bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x416bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_416bd8:
    // 0x416bd8: 0x3e00008  jr          $ra
label_416bdc:
    if (ctx->pc == 0x416BDCu) {
        ctx->pc = 0x416BDCu;
            // 0x416bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x416BE0u;
        goto label_416be0;
    }
    ctx->pc = 0x416BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416BD8u;
            // 0x416bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x416BE0u;
label_416be0:
    // 0x416be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x416be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_416be4:
    // 0x416be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x416be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_416be8:
    // 0x416be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x416be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_416bec:
    // 0x416bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x416becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_416bf0:
    // 0x416bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x416bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_416bf4:
    // 0x416bf4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_416bf8:
    if (ctx->pc == 0x416BF8u) {
        ctx->pc = 0x416BF8u;
            // 0x416bf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416BFCu;
        goto label_416bfc;
    }
    ctx->pc = 0x416BF4u;
    {
        const bool branch_taken_0x416bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x416BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416BF4u;
            // 0x416bf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416bf4) {
            ctx->pc = 0x416CBCu;
            goto label_416cbc;
        }
    }
    ctx->pc = 0x416BFCu;
label_416bfc:
    // 0x416bfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x416bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_416c00:
    // 0x416c00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x416c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_416c04:
    // 0x416c04: 0x2463b500  addiu       $v1, $v1, -0x4B00
    ctx->pc = 0x416c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948096));
label_416c08:
    // 0x416c08: 0x2442b540  addiu       $v0, $v0, -0x4AC0
    ctx->pc = 0x416c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948160));
label_416c0c:
    // 0x416c0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x416c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_416c10:
    // 0x416c10: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x416c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_416c14:
    // 0x416c14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x416c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_416c18:
    // 0x416c18: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x416c18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_416c1c:
    // 0x416c1c: 0x320f809  jalr        $t9
label_416c20:
    if (ctx->pc == 0x416C20u) {
        ctx->pc = 0x416C24u;
        goto label_416c24;
    }
    ctx->pc = 0x416C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416C24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x416C24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416C24u; }
            if (ctx->pc != 0x416C24u) { return; }
        }
        }
    }
    ctx->pc = 0x416C24u;
label_416c24:
    // 0x416c24: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_416c28:
    if (ctx->pc == 0x416C28u) {
        ctx->pc = 0x416C28u;
            // 0x416c28: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x416C2Cu;
        goto label_416c2c;
    }
    ctx->pc = 0x416C24u;
    {
        const bool branch_taken_0x416c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x416c24) {
            ctx->pc = 0x416C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416C24u;
            // 0x416c28: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416CA8u;
            goto label_416ca8;
        }
    }
    ctx->pc = 0x416C2Cu;
label_416c2c:
    // 0x416c2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x416c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_416c30:
    // 0x416c30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x416c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_416c34:
    // 0x416c34: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x416c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_416c38:
    // 0x416c38: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x416c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_416c3c:
    // 0x416c3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x416c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_416c40:
    // 0x416c40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x416c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_416c44:
    // 0x416c44: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x416c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_416c48:
    // 0x416c48: 0xc0aecc4  jal         func_2BB310
label_416c4c:
    if (ctx->pc == 0x416C4Cu) {
        ctx->pc = 0x416C4Cu;
            // 0x416c4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x416C50u;
        goto label_416c50;
    }
    ctx->pc = 0x416C48u;
    SET_GPR_U32(ctx, 31, 0x416C50u);
    ctx->pc = 0x416C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416C48u;
            // 0x416c4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416C50u; }
        if (ctx->pc != 0x416C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416C50u; }
        if (ctx->pc != 0x416C50u) { return; }
    }
    ctx->pc = 0x416C50u;
label_416c50:
    // 0x416c50: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x416c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_416c54:
    // 0x416c54: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x416c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_416c58:
    // 0x416c58: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_416c5c:
    if (ctx->pc == 0x416C5Cu) {
        ctx->pc = 0x416C5Cu;
            // 0x416c5c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x416C60u;
        goto label_416c60;
    }
    ctx->pc = 0x416C58u;
    {
        const bool branch_taken_0x416c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x416c58) {
            ctx->pc = 0x416C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416C58u;
            // 0x416c5c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416C74u;
            goto label_416c74;
        }
    }
    ctx->pc = 0x416C60u;
label_416c60:
    // 0x416c60: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x416c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_416c64:
    // 0x416c64: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x416c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_416c68:
    // 0x416c68: 0x320f809  jalr        $t9
label_416c6c:
    if (ctx->pc == 0x416C6Cu) {
        ctx->pc = 0x416C6Cu;
            // 0x416c6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x416C70u;
        goto label_416c70;
    }
    ctx->pc = 0x416C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416C70u);
        ctx->pc = 0x416C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416C68u;
            // 0x416c6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x416C70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416C70u; }
            if (ctx->pc != 0x416C70u) { return; }
        }
        }
    }
    ctx->pc = 0x416C70u;
label_416c70:
    // 0x416c70: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x416c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_416c74:
    // 0x416c74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x416c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_416c78:
    // 0x416c78: 0xc0aec9c  jal         func_2BB270
label_416c7c:
    if (ctx->pc == 0x416C7Cu) {
        ctx->pc = 0x416C7Cu;
            // 0x416c7c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x416C80u;
        goto label_416c80;
    }
    ctx->pc = 0x416C78u;
    SET_GPR_U32(ctx, 31, 0x416C80u);
    ctx->pc = 0x416C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416C78u;
            // 0x416c7c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416C80u; }
        if (ctx->pc != 0x416C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416C80u; }
        if (ctx->pc != 0x416C80u) { return; }
    }
    ctx->pc = 0x416C80u;
label_416c80:
    // 0x416c80: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x416c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_416c84:
    // 0x416c84: 0xc0aec88  jal         func_2BB220
label_416c88:
    if (ctx->pc == 0x416C88u) {
        ctx->pc = 0x416C88u;
            // 0x416c88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x416C8Cu;
        goto label_416c8c;
    }
    ctx->pc = 0x416C84u;
    SET_GPR_U32(ctx, 31, 0x416C8Cu);
    ctx->pc = 0x416C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416C84u;
            // 0x416c88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416C8Cu; }
        if (ctx->pc != 0x416C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416C8Cu; }
        if (ctx->pc != 0x416C8Cu) { return; }
    }
    ctx->pc = 0x416C8Cu;
label_416c8c:
    // 0x416c8c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x416c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_416c90:
    // 0x416c90: 0xc0aec0c  jal         func_2BB030
label_416c94:
    if (ctx->pc == 0x416C94u) {
        ctx->pc = 0x416C94u;
            // 0x416c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416C98u;
        goto label_416c98;
    }
    ctx->pc = 0x416C90u;
    SET_GPR_U32(ctx, 31, 0x416C98u);
    ctx->pc = 0x416C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416C90u;
            // 0x416c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416C98u; }
        if (ctx->pc != 0x416C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416C98u; }
        if (ctx->pc != 0x416C98u) { return; }
    }
    ctx->pc = 0x416C98u;
label_416c98:
    // 0x416c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x416c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_416c9c:
    // 0x416c9c: 0xc0aeaa8  jal         func_2BAAA0
label_416ca0:
    if (ctx->pc == 0x416CA0u) {
        ctx->pc = 0x416CA0u;
            // 0x416ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416CA4u;
        goto label_416ca4;
    }
    ctx->pc = 0x416C9Cu;
    SET_GPR_U32(ctx, 31, 0x416CA4u);
    ctx->pc = 0x416CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416C9Cu;
            // 0x416ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416CA4u; }
        if (ctx->pc != 0x416CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416CA4u; }
        if (ctx->pc != 0x416CA4u) { return; }
    }
    ctx->pc = 0x416CA4u;
label_416ca4:
    // 0x416ca4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x416ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_416ca8:
    // 0x416ca8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x416ca8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_416cac:
    // 0x416cac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_416cb0:
    if (ctx->pc == 0x416CB0u) {
        ctx->pc = 0x416CB0u;
            // 0x416cb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416CB4u;
        goto label_416cb4;
    }
    ctx->pc = 0x416CACu;
    {
        const bool branch_taken_0x416cac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x416cac) {
            ctx->pc = 0x416CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416CACu;
            // 0x416cb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416CC0u;
            goto label_416cc0;
        }
    }
    ctx->pc = 0x416CB4u;
label_416cb4:
    // 0x416cb4: 0xc0400a8  jal         func_1002A0
label_416cb8:
    if (ctx->pc == 0x416CB8u) {
        ctx->pc = 0x416CB8u;
            // 0x416cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416CBCu;
        goto label_416cbc;
    }
    ctx->pc = 0x416CB4u;
    SET_GPR_U32(ctx, 31, 0x416CBCu);
    ctx->pc = 0x416CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416CB4u;
            // 0x416cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416CBCu; }
        if (ctx->pc != 0x416CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416CBCu; }
        if (ctx->pc != 0x416CBCu) { return; }
    }
    ctx->pc = 0x416CBCu;
label_416cbc:
    // 0x416cbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x416cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_416cc0:
    // 0x416cc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x416cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_416cc4:
    // 0x416cc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x416cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_416cc8:
    // 0x416cc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x416cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_416ccc:
    // 0x416ccc: 0x3e00008  jr          $ra
label_416cd0:
    if (ctx->pc == 0x416CD0u) {
        ctx->pc = 0x416CD0u;
            // 0x416cd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x416CD4u;
        goto label_416cd4;
    }
    ctx->pc = 0x416CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416CCCu;
            // 0x416cd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x416CD4u;
label_416cd4:
    // 0x416cd4: 0x0  nop
    ctx->pc = 0x416cd4u;
    // NOP
label_416cd8:
    // 0x416cd8: 0x0  nop
    ctx->pc = 0x416cd8u;
    // NOP
label_416cdc:
    // 0x416cdc: 0x0  nop
    ctx->pc = 0x416cdcu;
    // NOP
label_416ce0:
    // 0x416ce0: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x416ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
label_416ce4:
    // 0x416ce4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x416ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_416ce8:
    // 0x416ce8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x416ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_416cec:
    // 0x416cec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x416cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_416cf0:
    // 0x416cf0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x416cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_416cf4:
    // 0x416cf4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x416cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_416cf8:
    // 0x416cf8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x416cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_416cfc:
    // 0x416cfc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x416cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_416d00:
    // 0x416d00: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x416d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_416d04:
    // 0x416d04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x416d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_416d08:
    // 0x416d08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x416d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_416d0c:
    // 0x416d0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x416d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_416d10:
    // 0x416d10: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x416d10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_416d14:
    // 0x416d14: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x416d14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_416d18:
    // 0x416d18: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x416d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_416d1c:
    // 0x416d1c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x416d1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_416d20:
    // 0x416d20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x416d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_416d24:
    // 0x416d24: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_416d28:
    if (ctx->pc == 0x416D28u) {
        ctx->pc = 0x416D28u;
            // 0x416d28: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416D2Cu;
        goto label_416d2c;
    }
    ctx->pc = 0x416D24u;
    {
        const bool branch_taken_0x416d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x416D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416D24u;
            // 0x416d28: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416d24) {
            ctx->pc = 0x416D68u;
            goto label_416d68;
        }
    }
    ctx->pc = 0x416D2Cu;
label_416d2c:
    // 0x416d2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x416d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_416d30:
    // 0x416d30: 0x50a301df  beql        $a1, $v1, . + 4 + (0x1DF << 2)
label_416d34:
    if (ctx->pc == 0x416D34u) {
        ctx->pc = 0x416D34u;
            // 0x416d34: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x416D38u;
        goto label_416d38;
    }
    ctx->pc = 0x416D30u;
    {
        const bool branch_taken_0x416d30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x416d30) {
            ctx->pc = 0x416D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416D30u;
            // 0x416d34: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4174B0u;
            goto label_4174b0;
        }
    }
    ctx->pc = 0x416D38u;
label_416d38:
    // 0x416d38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x416d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_416d3c:
    // 0x416d3c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_416d40:
    if (ctx->pc == 0x416D40u) {
        ctx->pc = 0x416D40u;
            // 0x416d40: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x416D44u;
        goto label_416d44;
    }
    ctx->pc = 0x416D3Cu;
    {
        const bool branch_taken_0x416d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x416d3c) {
            ctx->pc = 0x416D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x416D3Cu;
            // 0x416d40: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x416D4Cu;
            goto label_416d4c;
        }
    }
    ctx->pc = 0x416D44u;
label_416d44:
    // 0x416d44: 0x100001d9  b           . + 4 + (0x1D9 << 2)
label_416d48:
    if (ctx->pc == 0x416D48u) {
        ctx->pc = 0x416D4Cu;
        goto label_416d4c;
    }
    ctx->pc = 0x416D44u;
    {
        const bool branch_taken_0x416d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x416d44) {
            ctx->pc = 0x4174ACu;
            goto label_4174ac;
        }
    }
    ctx->pc = 0x416D4Cu;
label_416d4c:
    // 0x416d4c: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x416d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_416d50:
    // 0x416d50: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x416d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_416d54:
    // 0x416d54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x416d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_416d58:
    // 0x416d58: 0x320f809  jalr        $t9
label_416d5c:
    if (ctx->pc == 0x416D5Cu) {
        ctx->pc = 0x416D5Cu;
            // 0x416d5c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x416D60u;
        goto label_416d60;
    }
    ctx->pc = 0x416D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416D60u);
        ctx->pc = 0x416D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416D58u;
            // 0x416d5c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x416D60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416D60u; }
            if (ctx->pc != 0x416D60u) { return; }
        }
        }
    }
    ctx->pc = 0x416D60u;
label_416d60:
    // 0x416d60: 0x100001d2  b           . + 4 + (0x1D2 << 2)
label_416d64:
    if (ctx->pc == 0x416D64u) {
        ctx->pc = 0x416D68u;
        goto label_416d68;
    }
    ctx->pc = 0x416D60u;
    {
        const bool branch_taken_0x416d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x416d60) {
            ctx->pc = 0x4174ACu;
            goto label_4174ac;
        }
    }
    ctx->pc = 0x416D68u;
label_416d68:
    // 0x416d68: 0x8e710070  lw          $s1, 0x70($s3)
    ctx->pc = 0x416d68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_416d6c:
    // 0x416d6c: 0x122001cf  beqz        $s1, . + 4 + (0x1CF << 2)
label_416d70:
    if (ctx->pc == 0x416D70u) {
        ctx->pc = 0x416D74u;
        goto label_416d74;
    }
    ctx->pc = 0x416D6Cu;
    {
        const bool branch_taken_0x416d6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x416d6c) {
            ctx->pc = 0x4174ACu;
            goto label_4174ac;
        }
    }
    ctx->pc = 0x416D74u;
label_416d74:
    // 0x416d74: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x416d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_416d78:
    // 0x416d78: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x416d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_416d7c:
    // 0x416d7c: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x416d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_416d80:
    // 0x416d80: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x416d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_416d84:
    // 0x416d84: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x416d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_416d88:
    // 0x416d88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x416d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_416d8c:
    // 0x416d8c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x416d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_416d90:
    // 0x416d90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x416d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_416d94:
    // 0x416d94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x416d94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_416d98:
    // 0x416d98: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x416d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_416d9c:
    // 0x416d9c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x416d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_416da0:
    // 0x416da0: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x416da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_416da4:
    // 0x416da4: 0x24960010  addiu       $s6, $a0, 0x10
    ctx->pc = 0x416da4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_416da8:
    // 0x416da8: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x416da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_416dac:
    // 0x416dac: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x416dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_416db0:
    // 0x416db0: 0xc04e738  jal         func_139CE0
label_416db4:
    if (ctx->pc == 0x416DB4u) {
        ctx->pc = 0x416DB4u;
            // 0x416db4: 0x26700084  addiu       $s0, $s3, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
        ctx->pc = 0x416DB8u;
        goto label_416db8;
    }
    ctx->pc = 0x416DB0u;
    SET_GPR_U32(ctx, 31, 0x416DB8u);
    ctx->pc = 0x416DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416DB0u;
            // 0x416db4: 0x26700084  addiu       $s0, $s3, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416DB8u; }
        if (ctx->pc != 0x416DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416DB8u; }
        if (ctx->pc != 0x416DB8u) { return; }
    }
    ctx->pc = 0x416DB8u;
label_416db8:
    // 0x416db8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x416db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_416dbc:
    // 0x416dbc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x416dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_416dc0:
    // 0x416dc0: 0xc475c4b0  lwc1        $f21, -0x3B50($v1)
    ctx->pc = 0x416dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_416dc4:
    // 0x416dc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x416dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416dc8:
    // 0x416dc8: 0xc454c4b0  lwc1        $f20, -0x3B50($v0)
    ctx->pc = 0x416dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_416dcc:
    // 0x416dcc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x416dccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416dd0:
    // 0x416dd0: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x416dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_416dd4:
    // 0x416dd4: 0x27a3025c  addiu       $v1, $sp, 0x25C
    ctx->pc = 0x416dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_416dd8:
    // 0x416dd8: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x416dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_416ddc:
    // 0x416ddc: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x416ddcu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_416de0:
    // 0x416de0: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x416de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_416de4:
    // 0x416de4: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x416de4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_416de8:
    // 0x416de8: 0xafa30258  sw          $v1, 0x258($sp)
    ctx->pc = 0x416de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 3));
label_416dec:
    // 0x416dec: 0x2684006c  addiu       $a0, $s4, 0x6C
    ctx->pc = 0x416decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
label_416df0:
    // 0x416df0: 0xc0d639c  jal         func_358E70
label_416df4:
    if (ctx->pc == 0x416DF4u) {
        ctx->pc = 0x416DF4u;
            // 0x416df4: 0xafa201c0  sw          $v0, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
        ctx->pc = 0x416DF8u;
        goto label_416df8;
    }
    ctx->pc = 0x416DF0u;
    SET_GPR_U32(ctx, 31, 0x416DF8u);
    ctx->pc = 0x416DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416DF0u;
            // 0x416df4: 0xafa201c0  sw          $v0, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416DF8u; }
        if (ctx->pc != 0x416DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416DF8u; }
        if (ctx->pc != 0x416DF8u) { return; }
    }
    ctx->pc = 0x416DF8u;
label_416df8:
    // 0x416df8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_416dfc:
    if (ctx->pc == 0x416DFCu) {
        ctx->pc = 0x416E00u;
        goto label_416e00;
    }
    ctx->pc = 0x416DF8u;
    {
        const bool branch_taken_0x416df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416df8) {
            ctx->pc = 0x416F28u;
            goto label_416f28;
        }
    }
    ctx->pc = 0x416E00u;
label_416e00:
    // 0x416e00: 0xc0d1c14  jal         func_347050
label_416e04:
    if (ctx->pc == 0x416E04u) {
        ctx->pc = 0x416E04u;
            // 0x416e04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416E08u;
        goto label_416e08;
    }
    ctx->pc = 0x416E00u;
    SET_GPR_U32(ctx, 31, 0x416E08u);
    ctx->pc = 0x416E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416E00u;
            // 0x416e04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E08u; }
        if (ctx->pc != 0x416E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E08u; }
        if (ctx->pc != 0x416E08u) { return; }
    }
    ctx->pc = 0x416E08u;
label_416e08:
    // 0x416e08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x416e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_416e0c:
    // 0x416e0c: 0xc04f278  jal         func_13C9E0
label_416e10:
    if (ctx->pc == 0x416E10u) {
        ctx->pc = 0x416E10u;
            // 0x416e10: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x416E14u;
        goto label_416e14;
    }
    ctx->pc = 0x416E0Cu;
    SET_GPR_U32(ctx, 31, 0x416E14u);
    ctx->pc = 0x416E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416E0Cu;
            // 0x416e10: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E14u; }
        if (ctx->pc != 0x416E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E14u; }
        if (ctx->pc != 0x416E14u) { return; }
    }
    ctx->pc = 0x416E14u;
label_416e14:
    // 0x416e14: 0xc0d1c10  jal         func_347040
label_416e18:
    if (ctx->pc == 0x416E18u) {
        ctx->pc = 0x416E18u;
            // 0x416e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416E1Cu;
        goto label_416e1c;
    }
    ctx->pc = 0x416E14u;
    SET_GPR_U32(ctx, 31, 0x416E1Cu);
    ctx->pc = 0x416E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416E14u;
            // 0x416e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E1Cu; }
        if (ctx->pc != 0x416E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E1Cu; }
        if (ctx->pc != 0x416E1Cu) { return; }
    }
    ctx->pc = 0x416E1Cu;
label_416e1c:
    // 0x416e1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x416e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_416e20:
    // 0x416e20: 0xc04ce80  jal         func_133A00
label_416e24:
    if (ctx->pc == 0x416E24u) {
        ctx->pc = 0x416E24u;
            // 0x416e24: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x416E28u;
        goto label_416e28;
    }
    ctx->pc = 0x416E20u;
    SET_GPR_U32(ctx, 31, 0x416E28u);
    ctx->pc = 0x416E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416E20u;
            // 0x416e24: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E28u; }
        if (ctx->pc != 0x416E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E28u; }
        if (ctx->pc != 0x416E28u) { return; }
    }
    ctx->pc = 0x416E28u;
label_416e28:
    // 0x416e28: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x416e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_416e2c:
    // 0x416e2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_416e30:
    if (ctx->pc == 0x416E30u) {
        ctx->pc = 0x416E34u;
        goto label_416e34;
    }
    ctx->pc = 0x416E2Cu;
    {
        const bool branch_taken_0x416e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416e2c) {
            ctx->pc = 0x416E40u;
            goto label_416e40;
        }
    }
    ctx->pc = 0x416E34u;
label_416e34:
    // 0x416e34: 0x10000044  b           . + 4 + (0x44 << 2)
label_416e38:
    if (ctx->pc == 0x416E38u) {
        ctx->pc = 0x416E38u;
            // 0x416e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416E3Cu;
        goto label_416e3c;
    }
    ctx->pc = 0x416E34u;
    {
        const bool branch_taken_0x416e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416E34u;
            // 0x416e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416e34) {
            ctx->pc = 0x416F48u;
            goto label_416f48;
        }
    }
    ctx->pc = 0x416E3Cu;
label_416e3c:
    // 0x416e3c: 0x0  nop
    ctx->pc = 0x416e3cu;
    // NOP
label_416e40:
    // 0x416e40: 0xc0d4108  jal         func_350420
label_416e44:
    if (ctx->pc == 0x416E44u) {
        ctx->pc = 0x416E48u;
        goto label_416e48;
    }
    ctx->pc = 0x416E40u;
    SET_GPR_U32(ctx, 31, 0x416E48u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E48u; }
        if (ctx->pc != 0x416E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E48u; }
        if (ctx->pc != 0x416E48u) { return; }
    }
    ctx->pc = 0x416E48u;
label_416e48:
    // 0x416e48: 0xc0b36b4  jal         func_2CDAD0
label_416e4c:
    if (ctx->pc == 0x416E4Cu) {
        ctx->pc = 0x416E4Cu;
            // 0x416e4c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416E50u;
        goto label_416e50;
    }
    ctx->pc = 0x416E48u;
    SET_GPR_U32(ctx, 31, 0x416E50u);
    ctx->pc = 0x416E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416E48u;
            // 0x416e4c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E50u; }
        if (ctx->pc != 0x416E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E50u; }
        if (ctx->pc != 0x416E50u) { return; }
    }
    ctx->pc = 0x416E50u;
label_416e50:
    // 0x416e50: 0xc0b9c64  jal         func_2E7190
label_416e54:
    if (ctx->pc == 0x416E54u) {
        ctx->pc = 0x416E54u;
            // 0x416e54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416E58u;
        goto label_416e58;
    }
    ctx->pc = 0x416E50u;
    SET_GPR_U32(ctx, 31, 0x416E58u);
    ctx->pc = 0x416E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416E50u;
            // 0x416e54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E58u; }
        if (ctx->pc != 0x416E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E58u; }
        if (ctx->pc != 0x416E58u) { return; }
    }
    ctx->pc = 0x416E58u;
label_416e58:
    // 0x416e58: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x416e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_416e5c:
    // 0x416e5c: 0xc0d4104  jal         func_350410
label_416e60:
    if (ctx->pc == 0x416E60u) {
        ctx->pc = 0x416E60u;
            // 0x416e60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416E64u;
        goto label_416e64;
    }
    ctx->pc = 0x416E5Cu;
    SET_GPR_U32(ctx, 31, 0x416E64u);
    ctx->pc = 0x416E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416E5Cu;
            // 0x416e60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E64u; }
        if (ctx->pc != 0x416E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E64u; }
        if (ctx->pc != 0x416E64u) { return; }
    }
    ctx->pc = 0x416E64u;
label_416e64:
    // 0x416e64: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x416e64u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_416e68:
    // 0x416e68: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x416e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_416e6c:
    // 0x416e6c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x416e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416e70:
    // 0x416e70: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x416e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_416e74:
    // 0x416e74: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x416e74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_416e78:
    // 0x416e78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x416e78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416e7c:
    // 0x416e7c: 0xc0d40ac  jal         func_3502B0
label_416e80:
    if (ctx->pc == 0x416E80u) {
        ctx->pc = 0x416E80u;
            // 0x416e80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x416E84u;
        goto label_416e84;
    }
    ctx->pc = 0x416E7Cu;
    SET_GPR_U32(ctx, 31, 0x416E84u);
    ctx->pc = 0x416E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416E7Cu;
            // 0x416e80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E84u; }
        if (ctx->pc != 0x416E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416E84u; }
        if (ctx->pc != 0x416E84u) { return; }
    }
    ctx->pc = 0x416E84u;
label_416e84:
    // 0x416e84: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x416e84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_416e88:
    // 0x416e88: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_416e8c:
    if (ctx->pc == 0x416E8Cu) {
        ctx->pc = 0x416E8Cu;
            // 0x416e8c: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x416E90u;
        goto label_416e90;
    }
    ctx->pc = 0x416E88u;
    {
        const bool branch_taken_0x416e88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x416E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416E88u;
            // 0x416e8c: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416e88) {
            ctx->pc = 0x416E98u;
            goto label_416e98;
        }
    }
    ctx->pc = 0x416E90u;
label_416e90:
    // 0x416e90: 0x1000002d  b           . + 4 + (0x2D << 2)
label_416e94:
    if (ctx->pc == 0x416E94u) {
        ctx->pc = 0x416E94u;
            // 0x416e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416E98u;
        goto label_416e98;
    }
    ctx->pc = 0x416E90u;
    {
        const bool branch_taken_0x416e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416E90u;
            // 0x416e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416e90) {
            ctx->pc = 0x416F48u;
            goto label_416f48;
        }
    }
    ctx->pc = 0x416E98u;
label_416e98:
    // 0x416e98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x416e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416e9c:
    // 0x416e9c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x416e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_416ea0:
    // 0x416ea0: 0xc105d3c  jal         func_4174F0
label_416ea4:
    if (ctx->pc == 0x416EA4u) {
        ctx->pc = 0x416EA4u;
            // 0x416ea4: 0x27a60258  addiu       $a2, $sp, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
        ctx->pc = 0x416EA8u;
        goto label_416ea8;
    }
    ctx->pc = 0x416EA0u;
    SET_GPR_U32(ctx, 31, 0x416EA8u);
    ctx->pc = 0x416EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416EA0u;
            // 0x416ea4: 0x27a60258  addiu       $a2, $sp, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4174F0u;
    if (runtime->hasFunction(0x4174F0u)) {
        auto targetFn = runtime->lookupFunction(0x4174F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416EA8u; }
        if (ctx->pc != 0x416EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004174F0_0x4174f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416EA8u; }
        if (ctx->pc != 0x416EA8u) { return; }
    }
    ctx->pc = 0x416EA8u;
label_416ea8:
    // 0x416ea8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x416ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_416eac:
    // 0x416eac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x416eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_416eb0:
    // 0x416eb0: 0xc04cd60  jal         func_133580
label_416eb4:
    if (ctx->pc == 0x416EB4u) {
        ctx->pc = 0x416EB4u;
            // 0x416eb4: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x416EB8u;
        goto label_416eb8;
    }
    ctx->pc = 0x416EB0u;
    SET_GPR_U32(ctx, 31, 0x416EB8u);
    ctx->pc = 0x416EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416EB0u;
            // 0x416eb4: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416EB8u; }
        if (ctx->pc != 0x416EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416EB8u; }
        if (ctx->pc != 0x416EB8u) { return; }
    }
    ctx->pc = 0x416EB8u;
label_416eb8:
    // 0x416eb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x416eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416ebc:
    // 0x416ebc: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x416ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_416ec0:
    // 0x416ec0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x416ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_416ec4:
    // 0x416ec4: 0xc04e4a4  jal         func_139290
label_416ec8:
    if (ctx->pc == 0x416EC8u) {
        ctx->pc = 0x416EC8u;
            // 0x416ec8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x416ECCu;
        goto label_416ecc;
    }
    ctx->pc = 0x416EC4u;
    SET_GPR_U32(ctx, 31, 0x416ECCu);
    ctx->pc = 0x416EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416EC4u;
            // 0x416ec8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416ECCu; }
        if (ctx->pc != 0x416ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416ECCu; }
        if (ctx->pc != 0x416ECCu) { return; }
    }
    ctx->pc = 0x416ECCu;
label_416ecc:
    // 0x416ecc: 0xc0d5d80  jal         func_357600
label_416ed0:
    if (ctx->pc == 0x416ED0u) {
        ctx->pc = 0x416ED0u;
            // 0x416ed0: 0x8e84009c  lw          $a0, 0x9C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
        ctx->pc = 0x416ED4u;
        goto label_416ed4;
    }
    ctx->pc = 0x416ECCu;
    SET_GPR_U32(ctx, 31, 0x416ED4u);
    ctx->pc = 0x416ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416ECCu;
            // 0x416ed0: 0x8e84009c  lw          $a0, 0x9C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357600u;
    if (runtime->hasFunction(0x357600u)) {
        auto targetFn = runtime->lookupFunction(0x357600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416ED4u; }
        if (ctx->pc != 0x416ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357600_0x357600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416ED4u; }
        if (ctx->pc != 0x416ED4u) { return; }
    }
    ctx->pc = 0x416ED4u;
label_416ed4:
    // 0x416ed4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_416ed8:
    if (ctx->pc == 0x416ED8u) {
        ctx->pc = 0x416EDCu;
        goto label_416edc;
    }
    ctx->pc = 0x416ED4u;
    {
        const bool branch_taken_0x416ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416ed4) {
            ctx->pc = 0x416EE8u;
            goto label_416ee8;
        }
    }
    ctx->pc = 0x416EDCu;
label_416edc:
    // 0x416edc: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x416edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_416ee0:
    // 0x416ee0: 0x10000003  b           . + 4 + (0x3 << 2)
label_416ee4:
    if (ctx->pc == 0x416EE4u) {
        ctx->pc = 0x416EE4u;
            // 0x416ee4: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x416EE8u;
        goto label_416ee8;
    }
    ctx->pc = 0x416EE0u;
    {
        const bool branch_taken_0x416ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416EE0u;
            // 0x416ee4: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416ee0) {
            ctx->pc = 0x416EF0u;
            goto label_416ef0;
        }
    }
    ctx->pc = 0x416EE8u;
label_416ee8:
    // 0x416ee8: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x416ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_416eec:
    // 0x416eec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x416eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_416ef0:
    // 0x416ef0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x416ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_416ef4:
    // 0x416ef4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x416ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_416ef8:
    // 0x416ef8: 0x320f809  jalr        $t9
label_416efc:
    if (ctx->pc == 0x416EFCu) {
        ctx->pc = 0x416EFCu;
            // 0x416efc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416F00u;
        goto label_416f00;
    }
    ctx->pc = 0x416EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x416F00u);
        ctx->pc = 0x416EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416EF8u;
            // 0x416efc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x416F00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x416F00u; }
            if (ctx->pc != 0x416F00u) { return; }
        }
        }
    }
    ctx->pc = 0x416F00u;
label_416f00:
    // 0x416f00: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x416f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_416f04:
    // 0x416f04: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x416f04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_416f08:
    // 0x416f08: 0x8fa50258  lw          $a1, 0x258($sp)
    ctx->pc = 0x416f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_416f0c:
    // 0x416f0c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x416f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_416f10:
    // 0x416f10: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x416f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416f14:
    // 0x416f14: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x416f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_416f18:
    // 0x416f18: 0xc04cfcc  jal         func_133F30
label_416f1c:
    if (ctx->pc == 0x416F1Cu) {
        ctx->pc = 0x416F1Cu;
            // 0x416f1c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x416F20u;
        goto label_416f20;
    }
    ctx->pc = 0x416F18u;
    SET_GPR_U32(ctx, 31, 0x416F20u);
    ctx->pc = 0x416F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416F18u;
            // 0x416f1c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416F20u; }
        if (ctx->pc != 0x416F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416F20u; }
        if (ctx->pc != 0x416F20u) { return; }
    }
    ctx->pc = 0x416F20u;
label_416f20:
    // 0x416f20: 0x10000003  b           . + 4 + (0x3 << 2)
label_416f24:
    if (ctx->pc == 0x416F24u) {
        ctx->pc = 0x416F28u;
        goto label_416f28;
    }
    ctx->pc = 0x416F20u;
    {
        const bool branch_taken_0x416f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x416f20) {
            ctx->pc = 0x416F30u;
            goto label_416f30;
        }
    }
    ctx->pc = 0x416F28u;
label_416f28:
    // 0x416f28: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x416f28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416f2c:
    // 0x416f2c: 0x0  nop
    ctx->pc = 0x416f2cu;
    // NOP
label_416f30:
    // 0x416f30: 0x8e84009c  lw          $a0, 0x9C($s4)
    ctx->pc = 0x416f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_416f34:
    // 0x416f34: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x416f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416f38:
    // 0x416f38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x416f38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_416f3c:
    // 0x416f3c: 0xc0e325c  jal         func_38C970
label_416f40:
    if (ctx->pc == 0x416F40u) {
        ctx->pc = 0x416F40u;
            // 0x416f40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x416F44u;
        goto label_416f44;
    }
    ctx->pc = 0x416F3Cu;
    SET_GPR_U32(ctx, 31, 0x416F44u);
    ctx->pc = 0x416F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416F3Cu;
            // 0x416f40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416F44u; }
        if (ctx->pc != 0x416F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416F44u; }
        if (ctx->pc != 0x416F44u) { return; }
    }
    ctx->pc = 0x416F44u;
label_416f44:
    // 0x416f44: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x416f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_416f48:
    // 0x416f48: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_416f4c:
    if (ctx->pc == 0x416F4Cu) {
        ctx->pc = 0x416F50u;
        goto label_416f50;
    }
    ctx->pc = 0x416F48u;
    {
        const bool branch_taken_0x416f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x416f48) {
            ctx->pc = 0x416FA0u;
            goto label_416fa0;
        }
    }
    ctx->pc = 0x416F50u;
label_416f50:
    // 0x416f50: 0x8e74008c  lw          $s4, 0x8C($s3)
    ctx->pc = 0x416f50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_416f54:
    // 0x416f54: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x416f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_416f58:
    // 0x416f58: 0x86830066  lh          $v1, 0x66($s4)
    ctx->pc = 0x416f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 102)));
label_416f5c:
    // 0x416f5c: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x416f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_416f60:
    // 0x416f60: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x416f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_416f64:
    // 0x416f64: 0xc04cce8  jal         func_1333A0
label_416f68:
    if (ctx->pc == 0x416F68u) {
        ctx->pc = 0x416F68u;
            // 0x416f68: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x416F6Cu;
        goto label_416f6c;
    }
    ctx->pc = 0x416F64u;
    SET_GPR_U32(ctx, 31, 0x416F6Cu);
    ctx->pc = 0x416F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416F64u;
            // 0x416f68: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416F6Cu; }
        if (ctx->pc != 0x416F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416F6Cu; }
        if (ctx->pc != 0x416F6Cu) { return; }
    }
    ctx->pc = 0x416F6Cu;
label_416f6c:
    // 0x416f6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x416f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_416f70:
    // 0x416f70: 0x86840066  lh          $a0, 0x66($s4)
    ctx->pc = 0x416f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 102)));
label_416f74:
    // 0x416f74: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x416f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_416f78:
    // 0x416f78: 0x86830064  lh          $v1, 0x64($s4)
    ctx->pc = 0x416f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 100)));
label_416f7c:
    // 0x416f7c: 0x9042007e  lbu         $v0, 0x7E($v0)
    ctx->pc = 0x416f7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 126)));
label_416f80:
    // 0x416f80: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x416f80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_416f84:
    // 0x416f84: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x416f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_416f88:
    // 0x416f88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x416f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_416f8c:
    // 0x416f8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x416f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_416f90:
    // 0x416f90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x416f90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_416f94:
    // 0x416f94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x416f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_416f98:
    // 0x416f98: 0xa6820066  sh          $v0, 0x66($s4)
    ctx->pc = 0x416f98u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 102), (uint16_t)GPR_U32(ctx, 2));
label_416f9c:
    // 0x416f9c: 0x0  nop
    ctx->pc = 0x416f9cu;
    // NOP
label_416fa0:
    // 0x416fa0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x416fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_416fa4:
    // 0x416fa4: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x416fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_416fa8:
    // 0x416fa8: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
label_416fac:
    if (ctx->pc == 0x416FACu) {
        ctx->pc = 0x416FACu;
            // 0x416fac: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x416FB0u;
        goto label_416fb0;
    }
    ctx->pc = 0x416FA8u;
    {
        const bool branch_taken_0x416fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x416FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x416FA8u;
            // 0x416fac: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416fa8) {
            ctx->pc = 0x416DD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_416dd0;
        }
    }
    ctx->pc = 0x416FB0u;
label_416fb0:
    // 0x416fb0: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x416fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_416fb4:
    // 0x416fb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x416fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_416fb8:
    // 0x416fb8: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x416fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_416fbc:
    // 0x416fbc: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x416fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_416fc0:
    // 0x416fc0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x416fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_416fc4:
    // 0x416fc4: 0x8c42e3c0  lw          $v0, -0x1C40($v0)
    ctx->pc = 0x416fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_416fc8:
    // 0x416fc8: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_416fcc:
    if (ctx->pc == 0x416FCCu) {
        ctx->pc = 0x416FD0u;
        goto label_416fd0;
    }
    ctx->pc = 0x416FC8u;
    {
        const bool branch_taken_0x416fc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x416fc8) {
            ctx->pc = 0x417000u;
            goto label_417000;
        }
    }
    ctx->pc = 0x416FD0u;
label_416fd0:
    // 0x416fd0: 0xc04e738  jal         func_139CE0
label_416fd4:
    if (ctx->pc == 0x416FD4u) {
        ctx->pc = 0x416FD4u;
            // 0x416fd4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x416FD8u;
        goto label_416fd8;
    }
    ctx->pc = 0x416FD0u;
    SET_GPR_U32(ctx, 31, 0x416FD8u);
    ctx->pc = 0x416FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416FD0u;
            // 0x416fd4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416FD8u; }
        if (ctx->pc != 0x416FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x416FD8u; }
        if (ctx->pc != 0x416FD8u) { return; }
    }
    ctx->pc = 0x416FD8u;
label_416fd8:
    // 0x416fd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x416fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_416fdc:
    // 0x416fdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x416fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416fe0:
    // 0x416fe0: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x416fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_416fe4:
    // 0x416fe4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x416fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_416fe8:
    // 0x416fe8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x416fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_416fec:
    // 0x416fec: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x416fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_416ff0:
    // 0x416ff0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x416ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_416ff4:
    // 0x416ff4: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x416ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_416ff8:
    // 0x416ff8: 0xc055990  jal         func_156640
label_416ffc:
    if (ctx->pc == 0x416FFCu) {
        ctx->pc = 0x416FFCu;
            // 0x416ffc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417000u;
        goto label_417000;
    }
    ctx->pc = 0x416FF8u;
    SET_GPR_U32(ctx, 31, 0x417000u);
    ctx->pc = 0x416FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x416FF8u;
            // 0x416ffc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417000u; }
        if (ctx->pc != 0x417000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417000u; }
        if (ctx->pc != 0x417000u) { return; }
    }
    ctx->pc = 0x417000u;
label_417000:
    // 0x417000: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x417000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_417004:
    // 0x417004: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x417004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_417008:
    // 0x417008: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x417008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_41700c:
    // 0x41700c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x41700cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_417010:
    // 0x417010: 0xc04e738  jal         func_139CE0
label_417014:
    if (ctx->pc == 0x417014u) {
        ctx->pc = 0x417014u;
            // 0x417014: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x417018u;
        goto label_417018;
    }
    ctx->pc = 0x417010u;
    SET_GPR_U32(ctx, 31, 0x417018u);
    ctx->pc = 0x417014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417010u;
            // 0x417014: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417018u; }
        if (ctx->pc != 0x417018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417018u; }
        if (ctx->pc != 0x417018u) { return; }
    }
    ctx->pc = 0x417018u;
label_417018:
    // 0x417018: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x417018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41701c:
    // 0x41701c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x41701cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417020:
    // 0x417020: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x417020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_417024:
    // 0x417024: 0x27a3025c  addiu       $v1, $sp, 0x25C
    ctx->pc = 0x417024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_417028:
    // 0x417028: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x417028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_41702c:
    // 0x41702c: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x41702cu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_417030:
    // 0x417030: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x417030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_417034:
    // 0x417034: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x417034u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_417038:
    // 0x417038: 0xafa30254  sw          $v1, 0x254($sp)
    ctx->pc = 0x417038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 3));
label_41703c:
    // 0x41703c: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x41703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_417040:
    // 0x417040: 0xc0d639c  jal         func_358E70
label_417044:
    if (ctx->pc == 0x417044u) {
        ctx->pc = 0x417044u;
            // 0x417044: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->pc = 0x417048u;
        goto label_417048;
    }
    ctx->pc = 0x417040u;
    SET_GPR_U32(ctx, 31, 0x417048u);
    ctx->pc = 0x417044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417040u;
            // 0x417044: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417048u; }
        if (ctx->pc != 0x417048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417048u; }
        if (ctx->pc != 0x417048u) { return; }
    }
    ctx->pc = 0x417048u;
label_417048:
    // 0x417048: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_41704c:
    if (ctx->pc == 0x41704Cu) {
        ctx->pc = 0x417050u;
        goto label_417050;
    }
    ctx->pc = 0x417048u;
    {
        const bool branch_taken_0x417048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417048) {
            ctx->pc = 0x417178u;
            goto label_417178;
        }
    }
    ctx->pc = 0x417050u;
label_417050:
    // 0x417050: 0xc0d1c14  jal         func_347050
label_417054:
    if (ctx->pc == 0x417054u) {
        ctx->pc = 0x417054u;
            // 0x417054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417058u;
        goto label_417058;
    }
    ctx->pc = 0x417050u;
    SET_GPR_U32(ctx, 31, 0x417058u);
    ctx->pc = 0x417054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417050u;
            // 0x417054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417058u; }
        if (ctx->pc != 0x417058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417058u; }
        if (ctx->pc != 0x417058u) { return; }
    }
    ctx->pc = 0x417058u;
label_417058:
    // 0x417058: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x417058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41705c:
    // 0x41705c: 0xc04f278  jal         func_13C9E0
label_417060:
    if (ctx->pc == 0x417060u) {
        ctx->pc = 0x417060u;
            // 0x417060: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x417064u;
        goto label_417064;
    }
    ctx->pc = 0x41705Cu;
    SET_GPR_U32(ctx, 31, 0x417064u);
    ctx->pc = 0x417060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41705Cu;
            // 0x417060: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417064u; }
        if (ctx->pc != 0x417064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417064u; }
        if (ctx->pc != 0x417064u) { return; }
    }
    ctx->pc = 0x417064u;
label_417064:
    // 0x417064: 0xc0d1c10  jal         func_347040
label_417068:
    if (ctx->pc == 0x417068u) {
        ctx->pc = 0x417068u;
            // 0x417068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41706Cu;
        goto label_41706c;
    }
    ctx->pc = 0x417064u;
    SET_GPR_U32(ctx, 31, 0x41706Cu);
    ctx->pc = 0x417068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417064u;
            // 0x417068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41706Cu; }
        if (ctx->pc != 0x41706Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41706Cu; }
        if (ctx->pc != 0x41706Cu) { return; }
    }
    ctx->pc = 0x41706Cu;
label_41706c:
    // 0x41706c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41706cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417070:
    // 0x417070: 0xc04ce80  jal         func_133A00
label_417074:
    if (ctx->pc == 0x417074u) {
        ctx->pc = 0x417074u;
            // 0x417074: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x417078u;
        goto label_417078;
    }
    ctx->pc = 0x417070u;
    SET_GPR_U32(ctx, 31, 0x417078u);
    ctx->pc = 0x417074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417070u;
            // 0x417074: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417078u; }
        if (ctx->pc != 0x417078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417078u; }
        if (ctx->pc != 0x417078u) { return; }
    }
    ctx->pc = 0x417078u;
label_417078:
    // 0x417078: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x417078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_41707c:
    // 0x41707c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_417080:
    // 0x417080: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_417084:
    if (ctx->pc == 0x417084u) {
        ctx->pc = 0x417088u;
        goto label_417088;
    }
    ctx->pc = 0x417080u;
    {
        const bool branch_taken_0x417080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x417080) {
            ctx->pc = 0x417090u;
            goto label_417090;
        }
    }
    ctx->pc = 0x417088u;
label_417088:
    // 0x417088: 0x10000043  b           . + 4 + (0x43 << 2)
label_41708c:
    if (ctx->pc == 0x41708Cu) {
        ctx->pc = 0x41708Cu;
            // 0x41708c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417090u;
        goto label_417090;
    }
    ctx->pc = 0x417088u;
    {
        const bool branch_taken_0x417088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41708Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417088u;
            // 0x41708c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417088) {
            ctx->pc = 0x417198u;
            goto label_417198;
        }
    }
    ctx->pc = 0x417090u;
label_417090:
    // 0x417090: 0xc0d4108  jal         func_350420
label_417094:
    if (ctx->pc == 0x417094u) {
        ctx->pc = 0x417098u;
        goto label_417098;
    }
    ctx->pc = 0x417090u;
    SET_GPR_U32(ctx, 31, 0x417098u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417098u; }
        if (ctx->pc != 0x417098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417098u; }
        if (ctx->pc != 0x417098u) { return; }
    }
    ctx->pc = 0x417098u;
label_417098:
    // 0x417098: 0xc0b36b4  jal         func_2CDAD0
label_41709c:
    if (ctx->pc == 0x41709Cu) {
        ctx->pc = 0x41709Cu;
            // 0x41709c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4170A0u;
        goto label_4170a0;
    }
    ctx->pc = 0x417098u;
    SET_GPR_U32(ctx, 31, 0x4170A0u);
    ctx->pc = 0x41709Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417098u;
            // 0x41709c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4170A0u; }
        if (ctx->pc != 0x4170A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4170A0u; }
        if (ctx->pc != 0x4170A0u) { return; }
    }
    ctx->pc = 0x4170A0u;
label_4170a0:
    // 0x4170a0: 0xc0b9c64  jal         func_2E7190
label_4170a4:
    if (ctx->pc == 0x4170A4u) {
        ctx->pc = 0x4170A4u;
            // 0x4170a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4170A8u;
        goto label_4170a8;
    }
    ctx->pc = 0x4170A0u;
    SET_GPR_U32(ctx, 31, 0x4170A8u);
    ctx->pc = 0x4170A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4170A0u;
            // 0x4170a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4170A8u; }
        if (ctx->pc != 0x4170A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4170A8u; }
        if (ctx->pc != 0x4170A8u) { return; }
    }
    ctx->pc = 0x4170A8u;
label_4170a8:
    // 0x4170a8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x4170a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_4170ac:
    // 0x4170ac: 0xc0d4104  jal         func_350410
label_4170b0:
    if (ctx->pc == 0x4170B0u) {
        ctx->pc = 0x4170B0u;
            // 0x4170b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4170B4u;
        goto label_4170b4;
    }
    ctx->pc = 0x4170ACu;
    SET_GPR_U32(ctx, 31, 0x4170B4u);
    ctx->pc = 0x4170B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4170ACu;
            // 0x4170b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4170B4u; }
        if (ctx->pc != 0x4170B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4170B4u; }
        if (ctx->pc != 0x4170B4u) { return; }
    }
    ctx->pc = 0x4170B4u;
label_4170b4:
    // 0x4170b4: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x4170b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4170b8:
    // 0x4170b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4170b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4170bc:
    // 0x4170bc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4170bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4170c0:
    // 0x4170c0: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x4170c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4170c4:
    // 0x4170c4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4170c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4170c8:
    // 0x4170c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4170c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4170cc:
    // 0x4170cc: 0xc0d40ac  jal         func_3502B0
label_4170d0:
    if (ctx->pc == 0x4170D0u) {
        ctx->pc = 0x4170D0u;
            // 0x4170d0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4170D4u;
        goto label_4170d4;
    }
    ctx->pc = 0x4170CCu;
    SET_GPR_U32(ctx, 31, 0x4170D4u);
    ctx->pc = 0x4170D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4170CCu;
            // 0x4170d0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4170D4u; }
        if (ctx->pc != 0x4170D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4170D4u; }
        if (ctx->pc != 0x4170D4u) { return; }
    }
    ctx->pc = 0x4170D4u;
label_4170d4:
    // 0x4170d4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4170d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4170d8:
    // 0x4170d8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_4170dc:
    if (ctx->pc == 0x4170DCu) {
        ctx->pc = 0x4170DCu;
            // 0x4170dc: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4170E0u;
        goto label_4170e0;
    }
    ctx->pc = 0x4170D8u;
    {
        const bool branch_taken_0x4170d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4170DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4170D8u;
            // 0x4170dc: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4170d8) {
            ctx->pc = 0x4170E8u;
            goto label_4170e8;
        }
    }
    ctx->pc = 0x4170E0u;
label_4170e0:
    // 0x4170e0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_4170e4:
    if (ctx->pc == 0x4170E4u) {
        ctx->pc = 0x4170E4u;
            // 0x4170e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4170E8u;
        goto label_4170e8;
    }
    ctx->pc = 0x4170E0u;
    {
        const bool branch_taken_0x4170e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4170E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4170E0u;
            // 0x4170e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4170e0) {
            ctx->pc = 0x417198u;
            goto label_417198;
        }
    }
    ctx->pc = 0x4170E8u;
label_4170e8:
    // 0x4170e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4170e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4170ec:
    // 0x4170ec: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x4170ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4170f0:
    // 0x4170f0: 0xc105d3c  jal         func_4174F0
label_4170f4:
    if (ctx->pc == 0x4170F4u) {
        ctx->pc = 0x4170F4u;
            // 0x4170f4: 0x27a60254  addiu       $a2, $sp, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
        ctx->pc = 0x4170F8u;
        goto label_4170f8;
    }
    ctx->pc = 0x4170F0u;
    SET_GPR_U32(ctx, 31, 0x4170F8u);
    ctx->pc = 0x4170F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4170F0u;
            // 0x4170f4: 0x27a60254  addiu       $a2, $sp, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4174F0u;
    if (runtime->hasFunction(0x4174F0u)) {
        auto targetFn = runtime->lookupFunction(0x4174F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4170F8u; }
        if (ctx->pc != 0x4170F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004174F0_0x4174f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4170F8u; }
        if (ctx->pc != 0x4170F8u) { return; }
    }
    ctx->pc = 0x4170F8u;
label_4170f8:
    // 0x4170f8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4170f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4170fc:
    // 0x4170fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4170fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_417100:
    // 0x417100: 0xc04cd60  jal         func_133580
label_417104:
    if (ctx->pc == 0x417104u) {
        ctx->pc = 0x417104u;
            // 0x417104: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x417108u;
        goto label_417108;
    }
    ctx->pc = 0x417100u;
    SET_GPR_U32(ctx, 31, 0x417108u);
    ctx->pc = 0x417104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417100u;
            // 0x417104: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417108u; }
        if (ctx->pc != 0x417108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417108u; }
        if (ctx->pc != 0x417108u) { return; }
    }
    ctx->pc = 0x417108u;
label_417108:
    // 0x417108: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x417108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41710c:
    // 0x41710c: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x41710cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_417110:
    // 0x417110: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x417110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_417114:
    // 0x417114: 0xc04e4a4  jal         func_139290
label_417118:
    if (ctx->pc == 0x417118u) {
        ctx->pc = 0x417118u;
            // 0x417118: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41711Cu;
        goto label_41711c;
    }
    ctx->pc = 0x417114u;
    SET_GPR_U32(ctx, 31, 0x41711Cu);
    ctx->pc = 0x417118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417114u;
            // 0x417118: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41711Cu; }
        if (ctx->pc != 0x41711Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41711Cu; }
        if (ctx->pc != 0x41711Cu) { return; }
    }
    ctx->pc = 0x41711Cu;
label_41711c:
    // 0x41711c: 0xc0d5d80  jal         func_357600
label_417120:
    if (ctx->pc == 0x417120u) {
        ctx->pc = 0x417120u;
            // 0x417120: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->pc = 0x417124u;
        goto label_417124;
    }
    ctx->pc = 0x41711Cu;
    SET_GPR_U32(ctx, 31, 0x417124u);
    ctx->pc = 0x417120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41711Cu;
            // 0x417120: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357600u;
    if (runtime->hasFunction(0x357600u)) {
        auto targetFn = runtime->lookupFunction(0x357600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417124u; }
        if (ctx->pc != 0x417124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357600_0x357600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417124u; }
        if (ctx->pc != 0x417124u) { return; }
    }
    ctx->pc = 0x417124u;
label_417124:
    // 0x417124: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_417128:
    if (ctx->pc == 0x417128u) {
        ctx->pc = 0x41712Cu;
        goto label_41712c;
    }
    ctx->pc = 0x417124u;
    {
        const bool branch_taken_0x417124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417124) {
            ctx->pc = 0x417138u;
            goto label_417138;
        }
    }
    ctx->pc = 0x41712Cu;
label_41712c:
    // 0x41712c: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x41712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_417130:
    // 0x417130: 0x10000003  b           . + 4 + (0x3 << 2)
label_417134:
    if (ctx->pc == 0x417134u) {
        ctx->pc = 0x417134u;
            // 0x417134: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x417138u;
        goto label_417138;
    }
    ctx->pc = 0x417130u;
    {
        const bool branch_taken_0x417130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417130u;
            // 0x417134: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417130) {
            ctx->pc = 0x417140u;
            goto label_417140;
        }
    }
    ctx->pc = 0x417138u;
label_417138:
    // 0x417138: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x417138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_41713c:
    // 0x41713c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x41713cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_417140:
    // 0x417140: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x417140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_417144:
    // 0x417144: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x417144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_417148:
    // 0x417148: 0x320f809  jalr        $t9
label_41714c:
    if (ctx->pc == 0x41714Cu) {
        ctx->pc = 0x41714Cu;
            // 0x41714c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417150u;
        goto label_417150;
    }
    ctx->pc = 0x417148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x417150u);
        ctx->pc = 0x41714Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417148u;
            // 0x41714c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x417150u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x417150u; }
            if (ctx->pc != 0x417150u) { return; }
        }
        }
    }
    ctx->pc = 0x417150u;
label_417150:
    // 0x417150: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x417150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_417154:
    // 0x417154: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x417154u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_417158:
    // 0x417158: 0x8fa50254  lw          $a1, 0x254($sp)
    ctx->pc = 0x417158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_41715c:
    // 0x41715c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x41715cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417160:
    // 0x417160: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x417160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_417164:
    // 0x417164: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x417164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_417168:
    // 0x417168: 0xc04cfcc  jal         func_133F30
label_41716c:
    if (ctx->pc == 0x41716Cu) {
        ctx->pc = 0x41716Cu;
            // 0x41716c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x417170u;
        goto label_417170;
    }
    ctx->pc = 0x417168u;
    SET_GPR_U32(ctx, 31, 0x417170u);
    ctx->pc = 0x41716Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417168u;
            // 0x41716c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417170u; }
        if (ctx->pc != 0x417170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417170u; }
        if (ctx->pc != 0x417170u) { return; }
    }
    ctx->pc = 0x417170u;
label_417170:
    // 0x417170: 0x10000003  b           . + 4 + (0x3 << 2)
label_417174:
    if (ctx->pc == 0x417174u) {
        ctx->pc = 0x417178u;
        goto label_417178;
    }
    ctx->pc = 0x417170u;
    {
        const bool branch_taken_0x417170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x417170) {
            ctx->pc = 0x417180u;
            goto label_417180;
        }
    }
    ctx->pc = 0x417178u;
label_417178:
    // 0x417178: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x417178u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41717c:
    // 0x41717c: 0x0  nop
    ctx->pc = 0x41717cu;
    // NOP
label_417180:
    // 0x417180: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x417180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_417184:
    // 0x417184: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x417184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_417188:
    // 0x417188: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x417188u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_41718c:
    // 0x41718c: 0xc0e325c  jal         func_38C970
label_417190:
    if (ctx->pc == 0x417190u) {
        ctx->pc = 0x417190u;
            // 0x417190: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417194u;
        goto label_417194;
    }
    ctx->pc = 0x41718Cu;
    SET_GPR_U32(ctx, 31, 0x417194u);
    ctx->pc = 0x417190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41718Cu;
            // 0x417190: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417194u; }
        if (ctx->pc != 0x417194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417194u; }
        if (ctx->pc != 0x417194u) { return; }
    }
    ctx->pc = 0x417194u;
label_417194:
    // 0x417194: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x417194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_417198:
    // 0x417198: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_41719c:
    if (ctx->pc == 0x41719Cu) {
        ctx->pc = 0x4171A0u;
        goto label_4171a0;
    }
    ctx->pc = 0x417198u;
    {
        const bool branch_taken_0x417198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417198) {
            ctx->pc = 0x4171F0u;
            goto label_4171f0;
        }
    }
    ctx->pc = 0x4171A0u;
label_4171a0:
    // 0x4171a0: 0x8e72008c  lw          $s2, 0x8C($s3)
    ctx->pc = 0x4171a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_4171a4:
    // 0x4171a4: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x4171a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4171a8:
    // 0x4171a8: 0x86430066  lh          $v1, 0x66($s2)
    ctx->pc = 0x4171a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4171ac:
    // 0x4171ac: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4171acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4171b0:
    // 0x4171b0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4171b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4171b4:
    // 0x4171b4: 0xc04cce8  jal         func_1333A0
label_4171b8:
    if (ctx->pc == 0x4171B8u) {
        ctx->pc = 0x4171B8u;
            // 0x4171b8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4171BCu;
        goto label_4171bc;
    }
    ctx->pc = 0x4171B4u;
    SET_GPR_U32(ctx, 31, 0x4171BCu);
    ctx->pc = 0x4171B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4171B4u;
            // 0x4171b8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4171BCu; }
        if (ctx->pc != 0x4171BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4171BCu; }
        if (ctx->pc != 0x4171BCu) { return; }
    }
    ctx->pc = 0x4171BCu;
label_4171bc:
    // 0x4171bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4171bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4171c0:
    // 0x4171c0: 0x86440066  lh          $a0, 0x66($s2)
    ctx->pc = 0x4171c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4171c4:
    // 0x4171c4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4171c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4171c8:
    // 0x4171c8: 0x86430064  lh          $v1, 0x64($s2)
    ctx->pc = 0x4171c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
label_4171cc:
    // 0x4171cc: 0x9042007e  lbu         $v0, 0x7E($v0)
    ctx->pc = 0x4171ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 126)));
label_4171d0:
    // 0x4171d0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x4171d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4171d4:
    // 0x4171d4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4171d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4171d8:
    // 0x4171d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4171d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4171dc:
    // 0x4171dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4171dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4171e0:
    // 0x4171e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4171e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4171e4:
    // 0x4171e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4171e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4171e8:
    // 0x4171e8: 0xa6420066  sh          $v0, 0x66($s2)
    ctx->pc = 0x4171e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 2));
label_4171ec:
    // 0x4171ec: 0x0  nop
    ctx->pc = 0x4171ecu;
    // NOP
label_4171f0:
    // 0x4171f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4171f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4171f4:
    // 0x4171f4: 0x291102b  sltu        $v0, $s4, $s1
    ctx->pc = 0x4171f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4171f8:
    // 0x4171f8: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
label_4171fc:
    if (ctx->pc == 0x4171FCu) {
        ctx->pc = 0x4171FCu;
            // 0x4171fc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x417200u;
        goto label_417200;
    }
    ctx->pc = 0x4171F8u;
    {
        const bool branch_taken_0x4171f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4171FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4171F8u;
            // 0x4171fc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4171f8) {
            ctx->pc = 0x417020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_417020;
        }
    }
    ctx->pc = 0x417200u;
label_417200:
    // 0x417200: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x417200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_417204:
    // 0x417204: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x417204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_417208:
    // 0x417208: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x417208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41720c:
    // 0x41720c: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x41720cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_417210:
    // 0x417210: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x417210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_417214:
    // 0x417214: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x417214u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_417218:
    // 0x417218: 0x8c42e3c0  lw          $v0, -0x1C40($v0)
    ctx->pc = 0x417218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_41721c:
    // 0x41721c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_417220:
    if (ctx->pc == 0x417220u) {
        ctx->pc = 0x417224u;
        goto label_417224;
    }
    ctx->pc = 0x41721Cu;
    {
        const bool branch_taken_0x41721c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41721c) {
            ctx->pc = 0x417254u;
            goto label_417254;
        }
    }
    ctx->pc = 0x417224u;
label_417224:
    // 0x417224: 0xc04e738  jal         func_139CE0
label_417228:
    if (ctx->pc == 0x417228u) {
        ctx->pc = 0x417228u;
            // 0x417228: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x41722Cu;
        goto label_41722c;
    }
    ctx->pc = 0x417224u;
    SET_GPR_U32(ctx, 31, 0x41722Cu);
    ctx->pc = 0x417228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417224u;
            // 0x417228: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41722Cu; }
        if (ctx->pc != 0x41722Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41722Cu; }
        if (ctx->pc != 0x41722Cu) { return; }
    }
    ctx->pc = 0x41722Cu;
label_41722c:
    // 0x41722c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41722cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_417230:
    // 0x417230: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x417230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_417234:
    // 0x417234: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x417234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_417238:
    // 0x417238: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x417238u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_41723c:
    // 0x41723c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41723cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_417240:
    // 0x417240: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x417240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_417244:
    // 0x417244: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x417244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_417248:
    // 0x417248: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x417248u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_41724c:
    // 0x41724c: 0xc055990  jal         func_156640
label_417250:
    if (ctx->pc == 0x417250u) {
        ctx->pc = 0x417250u;
            // 0x417250: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417254u;
        goto label_417254;
    }
    ctx->pc = 0x41724Cu;
    SET_GPR_U32(ctx, 31, 0x417254u);
    ctx->pc = 0x417250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41724Cu;
            // 0x417250: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417254u; }
        if (ctx->pc != 0x417254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417254u; }
        if (ctx->pc != 0x417254u) { return; }
    }
    ctx->pc = 0x417254u;
label_417254:
    // 0x417254: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x417254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_417258:
    // 0x417258: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x417258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41725c:
    // 0x41725c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x41725cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_417260:
    // 0x417260: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x417260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_417264:
    // 0x417264: 0xc04e738  jal         func_139CE0
label_417268:
    if (ctx->pc == 0x417268u) {
        ctx->pc = 0x417268u;
            // 0x417268: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x41726Cu;
        goto label_41726c;
    }
    ctx->pc = 0x417264u;
    SET_GPR_U32(ctx, 31, 0x41726Cu);
    ctx->pc = 0x417268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417264u;
            // 0x417268: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41726Cu; }
        if (ctx->pc != 0x41726Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41726Cu; }
        if (ctx->pc != 0x41726Cu) { return; }
    }
    ctx->pc = 0x41726Cu;
label_41726c:
    // 0x41726c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x41726cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417270:
    // 0x417270: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x417270u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417274:
    // 0x417274: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x417274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_417278:
    // 0x417278: 0x27a3025c  addiu       $v1, $sp, 0x25C
    ctx->pc = 0x417278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_41727c:
    // 0x41727c: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x41727cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_417280:
    // 0x417280: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x417280u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_417284:
    // 0x417284: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x417284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_417288:
    // 0x417288: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x417288u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41728c:
    // 0x41728c: 0xafa30250  sw          $v1, 0x250($sp)
    ctx->pc = 0x41728cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 3));
label_417290:
    // 0x417290: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x417290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_417294:
    // 0x417294: 0xc0d639c  jal         func_358E70
label_417298:
    if (ctx->pc == 0x417298u) {
        ctx->pc = 0x417298u;
            // 0x417298: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->pc = 0x41729Cu;
        goto label_41729c;
    }
    ctx->pc = 0x417294u;
    SET_GPR_U32(ctx, 31, 0x41729Cu);
    ctx->pc = 0x417298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417294u;
            // 0x417298: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41729Cu; }
        if (ctx->pc != 0x41729Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41729Cu; }
        if (ctx->pc != 0x41729Cu) { return; }
    }
    ctx->pc = 0x41729Cu;
label_41729c:
    // 0x41729c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_4172a0:
    if (ctx->pc == 0x4172A0u) {
        ctx->pc = 0x4172A4u;
        goto label_4172a4;
    }
    ctx->pc = 0x41729Cu;
    {
        const bool branch_taken_0x41729c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41729c) {
            ctx->pc = 0x4173D0u;
            goto label_4173d0;
        }
    }
    ctx->pc = 0x4172A4u;
label_4172a4:
    // 0x4172a4: 0xc0d1c14  jal         func_347050
label_4172a8:
    if (ctx->pc == 0x4172A8u) {
        ctx->pc = 0x4172A8u;
            // 0x4172a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4172ACu;
        goto label_4172ac;
    }
    ctx->pc = 0x4172A4u;
    SET_GPR_U32(ctx, 31, 0x4172ACu);
    ctx->pc = 0x4172A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4172A4u;
            // 0x4172a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172ACu; }
        if (ctx->pc != 0x4172ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172ACu; }
        if (ctx->pc != 0x4172ACu) { return; }
    }
    ctx->pc = 0x4172ACu;
label_4172ac:
    // 0x4172ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4172acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4172b0:
    // 0x4172b0: 0xc04f278  jal         func_13C9E0
label_4172b4:
    if (ctx->pc == 0x4172B4u) {
        ctx->pc = 0x4172B4u;
            // 0x4172b4: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4172B8u;
        goto label_4172b8;
    }
    ctx->pc = 0x4172B0u;
    SET_GPR_U32(ctx, 31, 0x4172B8u);
    ctx->pc = 0x4172B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4172B0u;
            // 0x4172b4: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172B8u; }
        if (ctx->pc != 0x4172B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172B8u; }
        if (ctx->pc != 0x4172B8u) { return; }
    }
    ctx->pc = 0x4172B8u;
label_4172b8:
    // 0x4172b8: 0xc0d1c10  jal         func_347040
label_4172bc:
    if (ctx->pc == 0x4172BCu) {
        ctx->pc = 0x4172BCu;
            // 0x4172bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4172C0u;
        goto label_4172c0;
    }
    ctx->pc = 0x4172B8u;
    SET_GPR_U32(ctx, 31, 0x4172C0u);
    ctx->pc = 0x4172BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4172B8u;
            // 0x4172bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172C0u; }
        if (ctx->pc != 0x4172C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172C0u; }
        if (ctx->pc != 0x4172C0u) { return; }
    }
    ctx->pc = 0x4172C0u;
label_4172c0:
    // 0x4172c0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x4172c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4172c4:
    // 0x4172c4: 0xc04ce80  jal         func_133A00
label_4172c8:
    if (ctx->pc == 0x4172C8u) {
        ctx->pc = 0x4172C8u;
            // 0x4172c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4172CCu;
        goto label_4172cc;
    }
    ctx->pc = 0x4172C4u;
    SET_GPR_U32(ctx, 31, 0x4172CCu);
    ctx->pc = 0x4172C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4172C4u;
            // 0x4172c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172CCu; }
        if (ctx->pc != 0x4172CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172CCu; }
        if (ctx->pc != 0x4172CCu) { return; }
    }
    ctx->pc = 0x4172CCu;
label_4172cc:
    // 0x4172cc: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x4172ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_4172d0:
    // 0x4172d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4172d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4172d4:
    // 0x4172d4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_4172d8:
    if (ctx->pc == 0x4172D8u) {
        ctx->pc = 0x4172DCu;
        goto label_4172dc;
    }
    ctx->pc = 0x4172D4u;
    {
        const bool branch_taken_0x4172d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4172d4) {
            ctx->pc = 0x4172E8u;
            goto label_4172e8;
        }
    }
    ctx->pc = 0x4172DCu;
label_4172dc:
    // 0x4172dc: 0x10000044  b           . + 4 + (0x44 << 2)
label_4172e0:
    if (ctx->pc == 0x4172E0u) {
        ctx->pc = 0x4172E0u;
            // 0x4172e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4172E4u;
        goto label_4172e4;
    }
    ctx->pc = 0x4172DCu;
    {
        const bool branch_taken_0x4172dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4172E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4172DCu;
            // 0x4172e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4172dc) {
            ctx->pc = 0x4173F0u;
            goto label_4173f0;
        }
    }
    ctx->pc = 0x4172E4u;
label_4172e4:
    // 0x4172e4: 0x0  nop
    ctx->pc = 0x4172e4u;
    // NOP
label_4172e8:
    // 0x4172e8: 0xc0d4108  jal         func_350420
label_4172ec:
    if (ctx->pc == 0x4172ECu) {
        ctx->pc = 0x4172F0u;
        goto label_4172f0;
    }
    ctx->pc = 0x4172E8u;
    SET_GPR_U32(ctx, 31, 0x4172F0u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172F0u; }
        if (ctx->pc != 0x4172F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172F0u; }
        if (ctx->pc != 0x4172F0u) { return; }
    }
    ctx->pc = 0x4172F0u;
label_4172f0:
    // 0x4172f0: 0xc0b36b4  jal         func_2CDAD0
label_4172f4:
    if (ctx->pc == 0x4172F4u) {
        ctx->pc = 0x4172F4u;
            // 0x4172f4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4172F8u;
        goto label_4172f8;
    }
    ctx->pc = 0x4172F0u;
    SET_GPR_U32(ctx, 31, 0x4172F8u);
    ctx->pc = 0x4172F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4172F0u;
            // 0x4172f4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172F8u; }
        if (ctx->pc != 0x4172F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4172F8u; }
        if (ctx->pc != 0x4172F8u) { return; }
    }
    ctx->pc = 0x4172F8u;
label_4172f8:
    // 0x4172f8: 0xc0b9c64  jal         func_2E7190
label_4172fc:
    if (ctx->pc == 0x4172FCu) {
        ctx->pc = 0x4172FCu;
            // 0x4172fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417300u;
        goto label_417300;
    }
    ctx->pc = 0x4172F8u;
    SET_GPR_U32(ctx, 31, 0x417300u);
    ctx->pc = 0x4172FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4172F8u;
            // 0x4172fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417300u; }
        if (ctx->pc != 0x417300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417300u; }
        if (ctx->pc != 0x417300u) { return; }
    }
    ctx->pc = 0x417300u;
label_417300:
    // 0x417300: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x417300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_417304:
    // 0x417304: 0xc0d4104  jal         func_350410
label_417308:
    if (ctx->pc == 0x417308u) {
        ctx->pc = 0x417308u;
            // 0x417308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41730Cu;
        goto label_41730c;
    }
    ctx->pc = 0x417304u;
    SET_GPR_U32(ctx, 31, 0x41730Cu);
    ctx->pc = 0x417308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417304u;
            // 0x417308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41730Cu; }
        if (ctx->pc != 0x41730Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41730Cu; }
        if (ctx->pc != 0x41730Cu) { return; }
    }
    ctx->pc = 0x41730Cu;
label_41730c:
    // 0x41730c: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x41730cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_417310:
    // 0x417310: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x417310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_417314:
    // 0x417314: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x417314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_417318:
    // 0x417318: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x417318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_41731c:
    // 0x41731c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x41731cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417320:
    // 0x417320: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x417320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417324:
    // 0x417324: 0xc0d40ac  jal         func_3502B0
label_417328:
    if (ctx->pc == 0x417328u) {
        ctx->pc = 0x417328u;
            // 0x417328: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x41732Cu;
        goto label_41732c;
    }
    ctx->pc = 0x417324u;
    SET_GPR_U32(ctx, 31, 0x41732Cu);
    ctx->pc = 0x417328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417324u;
            // 0x417328: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41732Cu; }
        if (ctx->pc != 0x41732Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41732Cu; }
        if (ctx->pc != 0x41732Cu) { return; }
    }
    ctx->pc = 0x41732Cu;
label_41732c:
    // 0x41732c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x41732cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_417330:
    // 0x417330: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_417334:
    if (ctx->pc == 0x417334u) {
        ctx->pc = 0x417334u;
            // 0x417334: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x417338u;
        goto label_417338;
    }
    ctx->pc = 0x417330u;
    {
        const bool branch_taken_0x417330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x417334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417330u;
            // 0x417334: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417330) {
            ctx->pc = 0x417340u;
            goto label_417340;
        }
    }
    ctx->pc = 0x417338u;
label_417338:
    // 0x417338: 0x1000002d  b           . + 4 + (0x2D << 2)
label_41733c:
    if (ctx->pc == 0x41733Cu) {
        ctx->pc = 0x41733Cu;
            // 0x41733c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417340u;
        goto label_417340;
    }
    ctx->pc = 0x417338u;
    {
        const bool branch_taken_0x417338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41733Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417338u;
            // 0x41733c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417338) {
            ctx->pc = 0x4173F0u;
            goto label_4173f0;
        }
    }
    ctx->pc = 0x417340u;
label_417340:
    // 0x417340: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x417340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_417344:
    // 0x417344: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x417344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_417348:
    // 0x417348: 0xc105d3c  jal         func_4174F0
label_41734c:
    if (ctx->pc == 0x41734Cu) {
        ctx->pc = 0x41734Cu;
            // 0x41734c: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x417350u;
        goto label_417350;
    }
    ctx->pc = 0x417348u;
    SET_GPR_U32(ctx, 31, 0x417350u);
    ctx->pc = 0x41734Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417348u;
            // 0x41734c: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4174F0u;
    if (runtime->hasFunction(0x4174F0u)) {
        auto targetFn = runtime->lookupFunction(0x4174F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417350u; }
        if (ctx->pc != 0x417350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004174F0_0x4174f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417350u; }
        if (ctx->pc != 0x417350u) { return; }
    }
    ctx->pc = 0x417350u;
label_417350:
    // 0x417350: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x417350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_417354:
    // 0x417354: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x417354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_417358:
    // 0x417358: 0xc04cd60  jal         func_133580
label_41735c:
    if (ctx->pc == 0x41735Cu) {
        ctx->pc = 0x41735Cu;
            // 0x41735c: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x417360u;
        goto label_417360;
    }
    ctx->pc = 0x417358u;
    SET_GPR_U32(ctx, 31, 0x417360u);
    ctx->pc = 0x41735Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417358u;
            // 0x41735c: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417360u; }
        if (ctx->pc != 0x417360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417360u; }
        if (ctx->pc != 0x417360u) { return; }
    }
    ctx->pc = 0x417360u;
label_417360:
    // 0x417360: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x417360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_417364:
    // 0x417364: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x417364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_417368:
    // 0x417368: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x417368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_41736c:
    // 0x41736c: 0xc04e4a4  jal         func_139290
label_417370:
    if (ctx->pc == 0x417370u) {
        ctx->pc = 0x417370u;
            // 0x417370: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x417374u;
        goto label_417374;
    }
    ctx->pc = 0x41736Cu;
    SET_GPR_U32(ctx, 31, 0x417374u);
    ctx->pc = 0x417370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41736Cu;
            // 0x417370: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417374u; }
        if (ctx->pc != 0x417374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417374u; }
        if (ctx->pc != 0x417374u) { return; }
    }
    ctx->pc = 0x417374u;
label_417374:
    // 0x417374: 0xc0d5d80  jal         func_357600
label_417378:
    if (ctx->pc == 0x417378u) {
        ctx->pc = 0x417378u;
            // 0x417378: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->pc = 0x41737Cu;
        goto label_41737c;
    }
    ctx->pc = 0x417374u;
    SET_GPR_U32(ctx, 31, 0x41737Cu);
    ctx->pc = 0x417378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417374u;
            // 0x417378: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357600u;
    if (runtime->hasFunction(0x357600u)) {
        auto targetFn = runtime->lookupFunction(0x357600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41737Cu; }
        if (ctx->pc != 0x41737Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357600_0x357600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41737Cu; }
        if (ctx->pc != 0x41737Cu) { return; }
    }
    ctx->pc = 0x41737Cu;
label_41737c:
    // 0x41737c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_417380:
    if (ctx->pc == 0x417380u) {
        ctx->pc = 0x417384u;
        goto label_417384;
    }
    ctx->pc = 0x41737Cu;
    {
        const bool branch_taken_0x41737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41737c) {
            ctx->pc = 0x417390u;
            goto label_417390;
        }
    }
    ctx->pc = 0x417384u;
label_417384:
    // 0x417384: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x417384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_417388:
    // 0x417388: 0x10000003  b           . + 4 + (0x3 << 2)
label_41738c:
    if (ctx->pc == 0x41738Cu) {
        ctx->pc = 0x41738Cu;
            // 0x41738c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x417390u;
        goto label_417390;
    }
    ctx->pc = 0x417388u;
    {
        const bool branch_taken_0x417388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417388u;
            // 0x41738c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417388) {
            ctx->pc = 0x417398u;
            goto label_417398;
        }
    }
    ctx->pc = 0x417390u;
label_417390:
    // 0x417390: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x417390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_417394:
    // 0x417394: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x417394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_417398:
    // 0x417398: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x417398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41739c:
    // 0x41739c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x41739cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4173a0:
    // 0x4173a0: 0x320f809  jalr        $t9
label_4173a4:
    if (ctx->pc == 0x4173A4u) {
        ctx->pc = 0x4173A4u;
            // 0x4173a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4173A8u;
        goto label_4173a8;
    }
    ctx->pc = 0x4173A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4173A8u);
        ctx->pc = 0x4173A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4173A0u;
            // 0x4173a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4173A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4173A8u; }
            if (ctx->pc != 0x4173A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4173A8u;
label_4173a8:
    // 0x4173a8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x4173a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_4173ac:
    // 0x4173ac: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4173acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4173b0:
    // 0x4173b0: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x4173b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_4173b4:
    // 0x4173b4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4173b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4173b8:
    // 0x4173b8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4173b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4173bc:
    // 0x4173bc: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x4173bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4173c0:
    // 0x4173c0: 0xc04cfcc  jal         func_133F30
label_4173c4:
    if (ctx->pc == 0x4173C4u) {
        ctx->pc = 0x4173C4u;
            // 0x4173c4: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x4173C8u;
        goto label_4173c8;
    }
    ctx->pc = 0x4173C0u;
    SET_GPR_U32(ctx, 31, 0x4173C8u);
    ctx->pc = 0x4173C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4173C0u;
            // 0x4173c4: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4173C8u; }
        if (ctx->pc != 0x4173C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4173C8u; }
        if (ctx->pc != 0x4173C8u) { return; }
    }
    ctx->pc = 0x4173C8u;
label_4173c8:
    // 0x4173c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_4173cc:
    if (ctx->pc == 0x4173CCu) {
        ctx->pc = 0x4173D0u;
        goto label_4173d0;
    }
    ctx->pc = 0x4173C8u;
    {
        const bool branch_taken_0x4173c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4173c8) {
            ctx->pc = 0x4173D8u;
            goto label_4173d8;
        }
    }
    ctx->pc = 0x4173D0u;
label_4173d0:
    // 0x4173d0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4173d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4173d4:
    // 0x4173d4: 0x0  nop
    ctx->pc = 0x4173d4u;
    // NOP
label_4173d8:
    // 0x4173d8: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x4173d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_4173dc:
    // 0x4173dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4173dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4173e0:
    // 0x4173e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4173e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4173e4:
    // 0x4173e4: 0xc0e325c  jal         func_38C970
label_4173e8:
    if (ctx->pc == 0x4173E8u) {
        ctx->pc = 0x4173E8u;
            // 0x4173e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4173ECu;
        goto label_4173ec;
    }
    ctx->pc = 0x4173E4u;
    SET_GPR_U32(ctx, 31, 0x4173ECu);
    ctx->pc = 0x4173E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4173E4u;
            // 0x4173e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4173ECu; }
        if (ctx->pc != 0x4173ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4173ECu; }
        if (ctx->pc != 0x4173ECu) { return; }
    }
    ctx->pc = 0x4173ECu;
label_4173ec:
    // 0x4173ec: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x4173ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_4173f0:
    // 0x4173f0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_4173f4:
    if (ctx->pc == 0x4173F4u) {
        ctx->pc = 0x4173F8u;
        goto label_4173f8;
    }
    ctx->pc = 0x4173F0u;
    {
        const bool branch_taken_0x4173f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4173f0) {
            ctx->pc = 0x417448u;
            goto label_417448;
        }
    }
    ctx->pc = 0x4173F8u;
label_4173f8:
    // 0x4173f8: 0x8e72008c  lw          $s2, 0x8C($s3)
    ctx->pc = 0x4173f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_4173fc:
    // 0x4173fc: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x4173fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_417400:
    // 0x417400: 0x86430066  lh          $v1, 0x66($s2)
    ctx->pc = 0x417400u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_417404:
    // 0x417404: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x417404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_417408:
    // 0x417408: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x417408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_41740c:
    // 0x41740c: 0xc04cce8  jal         func_1333A0
label_417410:
    if (ctx->pc == 0x417410u) {
        ctx->pc = 0x417410u;
            // 0x417410: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x417414u;
        goto label_417414;
    }
    ctx->pc = 0x41740Cu;
    SET_GPR_U32(ctx, 31, 0x417414u);
    ctx->pc = 0x417410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41740Cu;
            // 0x417410: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417414u; }
        if (ctx->pc != 0x417414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417414u; }
        if (ctx->pc != 0x417414u) { return; }
    }
    ctx->pc = 0x417414u;
label_417414:
    // 0x417414: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x417414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_417418:
    // 0x417418: 0x86450066  lh          $a1, 0x66($s2)
    ctx->pc = 0x417418u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_41741c:
    // 0x41741c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x41741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_417420:
    // 0x417420: 0x86440064  lh          $a0, 0x64($s2)
    ctx->pc = 0x417420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
label_417424:
    // 0x417424: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x417424u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_417428:
    // 0x417428: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x417428u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_41742c:
    // 0x41742c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x41742cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_417430:
    // 0x417430: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x417430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_417434:
    // 0x417434: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x417434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_417438:
    // 0x417438: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x417438u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_41743c:
    // 0x41743c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x41743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_417440:
    // 0x417440: 0xa6430066  sh          $v1, 0x66($s2)
    ctx->pc = 0x417440u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 3));
label_417444:
    // 0x417444: 0x0  nop
    ctx->pc = 0x417444u;
    // NOP
label_417448:
    // 0x417448: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x417448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_41744c:
    // 0x41744c: 0x291182b  sltu        $v1, $s4, $s1
    ctx->pc = 0x41744cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_417450:
    // 0x417450: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
label_417454:
    if (ctx->pc == 0x417454u) {
        ctx->pc = 0x417454u;
            // 0x417454: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x417458u;
        goto label_417458;
    }
    ctx->pc = 0x417450u;
    {
        const bool branch_taken_0x417450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x417454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417450u;
            // 0x417454: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417450) {
            ctx->pc = 0x417274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_417274;
        }
    }
    ctx->pc = 0x417458u;
label_417458:
    // 0x417458: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x417458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_41745c:
    // 0x41745c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41745cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_417460:
    // 0x417460: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x417460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_417464:
    // 0x417464: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x417464u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_417468:
    // 0x417468: 0x8e640094  lw          $a0, 0x94($s3)
    ctx->pc = 0x417468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_41746c:
    // 0x41746c: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x41746cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_417470:
    // 0x417470: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x417470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_417474:
    // 0x417474: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_417478:
    if (ctx->pc == 0x417478u) {
        ctx->pc = 0x41747Cu;
        goto label_41747c;
    }
    ctx->pc = 0x417474u;
    {
        const bool branch_taken_0x417474 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x417474) {
            ctx->pc = 0x4174ACu;
            goto label_4174ac;
        }
    }
    ctx->pc = 0x41747Cu;
label_41747c:
    // 0x41747c: 0xc04e738  jal         func_139CE0
label_417480:
    if (ctx->pc == 0x417480u) {
        ctx->pc = 0x417480u;
            // 0x417480: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x417484u;
        goto label_417484;
    }
    ctx->pc = 0x41747Cu;
    SET_GPR_U32(ctx, 31, 0x417484u);
    ctx->pc = 0x417480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41747Cu;
            // 0x417480: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417484u; }
        if (ctx->pc != 0x417484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417484u; }
        if (ctx->pc != 0x417484u) { return; }
    }
    ctx->pc = 0x417484u;
label_417484:
    // 0x417484: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x417484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_417488:
    // 0x417488: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x417488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41748c:
    // 0x41748c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x41748cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_417490:
    // 0x417490: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x417490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_417494:
    // 0x417494: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x417494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_417498:
    // 0x417498: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x417498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_41749c:
    // 0x41749c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41749cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4174a0:
    // 0x4174a0: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4174a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4174a4:
    // 0x4174a4: 0xc055990  jal         func_156640
label_4174a8:
    if (ctx->pc == 0x4174A8u) {
        ctx->pc = 0x4174A8u;
            // 0x4174a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4174ACu;
        goto label_4174ac;
    }
    ctx->pc = 0x4174A4u;
    SET_GPR_U32(ctx, 31, 0x4174ACu);
    ctx->pc = 0x4174A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4174A4u;
            // 0x4174a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4174ACu; }
        if (ctx->pc != 0x4174ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4174ACu; }
        if (ctx->pc != 0x4174ACu) { return; }
    }
    ctx->pc = 0x4174ACu;
label_4174ac:
    // 0x4174ac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4174acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4174b0:
    // 0x4174b0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4174b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4174b4:
    // 0x4174b4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4174b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4174b8:
    // 0x4174b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4174b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4174bc:
    // 0x4174bc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4174bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4174c0:
    // 0x4174c0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4174c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4174c4:
    // 0x4174c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4174c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4174c8:
    // 0x4174c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4174c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4174cc:
    // 0x4174cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4174ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4174d0:
    // 0x4174d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4174d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4174d4:
    // 0x4174d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4174d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4174d8:
    // 0x4174d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4174d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4174dc:
    // 0x4174dc: 0x3e00008  jr          $ra
label_4174e0:
    if (ctx->pc == 0x4174E0u) {
        ctx->pc = 0x4174E0u;
            // 0x4174e0: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x4174E4u;
        goto label_4174e4;
    }
    ctx->pc = 0x4174DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4174E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4174DCu;
            // 0x4174e0: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4174E4u;
label_4174e4:
    // 0x4174e4: 0x0  nop
    ctx->pc = 0x4174e4u;
    // NOP
label_4174e8:
    // 0x4174e8: 0x0  nop
    ctx->pc = 0x4174e8u;
    // NOP
label_4174ec:
    // 0x4174ec: 0x0  nop
    ctx->pc = 0x4174ecu;
    // NOP
}
