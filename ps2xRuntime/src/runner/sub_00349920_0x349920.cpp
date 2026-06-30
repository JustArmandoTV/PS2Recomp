#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00349920
// Address: 0x349920 - 0x34aaf0
void sub_00349920_0x349920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349920_0x349920");
#endif

    switch (ctx->pc) {
        case 0x349920u: goto label_349920;
        case 0x349924u: goto label_349924;
        case 0x349928u: goto label_349928;
        case 0x34992cu: goto label_34992c;
        case 0x349930u: goto label_349930;
        case 0x349934u: goto label_349934;
        case 0x349938u: goto label_349938;
        case 0x34993cu: goto label_34993c;
        case 0x349940u: goto label_349940;
        case 0x349944u: goto label_349944;
        case 0x349948u: goto label_349948;
        case 0x34994cu: goto label_34994c;
        case 0x349950u: goto label_349950;
        case 0x349954u: goto label_349954;
        case 0x349958u: goto label_349958;
        case 0x34995cu: goto label_34995c;
        case 0x349960u: goto label_349960;
        case 0x349964u: goto label_349964;
        case 0x349968u: goto label_349968;
        case 0x34996cu: goto label_34996c;
        case 0x349970u: goto label_349970;
        case 0x349974u: goto label_349974;
        case 0x349978u: goto label_349978;
        case 0x34997cu: goto label_34997c;
        case 0x349980u: goto label_349980;
        case 0x349984u: goto label_349984;
        case 0x349988u: goto label_349988;
        case 0x34998cu: goto label_34998c;
        case 0x349990u: goto label_349990;
        case 0x349994u: goto label_349994;
        case 0x349998u: goto label_349998;
        case 0x34999cu: goto label_34999c;
        case 0x3499a0u: goto label_3499a0;
        case 0x3499a4u: goto label_3499a4;
        case 0x3499a8u: goto label_3499a8;
        case 0x3499acu: goto label_3499ac;
        case 0x3499b0u: goto label_3499b0;
        case 0x3499b4u: goto label_3499b4;
        case 0x3499b8u: goto label_3499b8;
        case 0x3499bcu: goto label_3499bc;
        case 0x3499c0u: goto label_3499c0;
        case 0x3499c4u: goto label_3499c4;
        case 0x3499c8u: goto label_3499c8;
        case 0x3499ccu: goto label_3499cc;
        case 0x3499d0u: goto label_3499d0;
        case 0x3499d4u: goto label_3499d4;
        case 0x3499d8u: goto label_3499d8;
        case 0x3499dcu: goto label_3499dc;
        case 0x3499e0u: goto label_3499e0;
        case 0x3499e4u: goto label_3499e4;
        case 0x3499e8u: goto label_3499e8;
        case 0x3499ecu: goto label_3499ec;
        case 0x3499f0u: goto label_3499f0;
        case 0x3499f4u: goto label_3499f4;
        case 0x3499f8u: goto label_3499f8;
        case 0x3499fcu: goto label_3499fc;
        case 0x349a00u: goto label_349a00;
        case 0x349a04u: goto label_349a04;
        case 0x349a08u: goto label_349a08;
        case 0x349a0cu: goto label_349a0c;
        case 0x349a10u: goto label_349a10;
        case 0x349a14u: goto label_349a14;
        case 0x349a18u: goto label_349a18;
        case 0x349a1cu: goto label_349a1c;
        case 0x349a20u: goto label_349a20;
        case 0x349a24u: goto label_349a24;
        case 0x349a28u: goto label_349a28;
        case 0x349a2cu: goto label_349a2c;
        case 0x349a30u: goto label_349a30;
        case 0x349a34u: goto label_349a34;
        case 0x349a38u: goto label_349a38;
        case 0x349a3cu: goto label_349a3c;
        case 0x349a40u: goto label_349a40;
        case 0x349a44u: goto label_349a44;
        case 0x349a48u: goto label_349a48;
        case 0x349a4cu: goto label_349a4c;
        case 0x349a50u: goto label_349a50;
        case 0x349a54u: goto label_349a54;
        case 0x349a58u: goto label_349a58;
        case 0x349a5cu: goto label_349a5c;
        case 0x349a60u: goto label_349a60;
        case 0x349a64u: goto label_349a64;
        case 0x349a68u: goto label_349a68;
        case 0x349a6cu: goto label_349a6c;
        case 0x349a70u: goto label_349a70;
        case 0x349a74u: goto label_349a74;
        case 0x349a78u: goto label_349a78;
        case 0x349a7cu: goto label_349a7c;
        case 0x349a80u: goto label_349a80;
        case 0x349a84u: goto label_349a84;
        case 0x349a88u: goto label_349a88;
        case 0x349a8cu: goto label_349a8c;
        case 0x349a90u: goto label_349a90;
        case 0x349a94u: goto label_349a94;
        case 0x349a98u: goto label_349a98;
        case 0x349a9cu: goto label_349a9c;
        case 0x349aa0u: goto label_349aa0;
        case 0x349aa4u: goto label_349aa4;
        case 0x349aa8u: goto label_349aa8;
        case 0x349aacu: goto label_349aac;
        case 0x349ab0u: goto label_349ab0;
        case 0x349ab4u: goto label_349ab4;
        case 0x349ab8u: goto label_349ab8;
        case 0x349abcu: goto label_349abc;
        case 0x349ac0u: goto label_349ac0;
        case 0x349ac4u: goto label_349ac4;
        case 0x349ac8u: goto label_349ac8;
        case 0x349accu: goto label_349acc;
        case 0x349ad0u: goto label_349ad0;
        case 0x349ad4u: goto label_349ad4;
        case 0x349ad8u: goto label_349ad8;
        case 0x349adcu: goto label_349adc;
        case 0x349ae0u: goto label_349ae0;
        case 0x349ae4u: goto label_349ae4;
        case 0x349ae8u: goto label_349ae8;
        case 0x349aecu: goto label_349aec;
        case 0x349af0u: goto label_349af0;
        case 0x349af4u: goto label_349af4;
        case 0x349af8u: goto label_349af8;
        case 0x349afcu: goto label_349afc;
        case 0x349b00u: goto label_349b00;
        case 0x349b04u: goto label_349b04;
        case 0x349b08u: goto label_349b08;
        case 0x349b0cu: goto label_349b0c;
        case 0x349b10u: goto label_349b10;
        case 0x349b14u: goto label_349b14;
        case 0x349b18u: goto label_349b18;
        case 0x349b1cu: goto label_349b1c;
        case 0x349b20u: goto label_349b20;
        case 0x349b24u: goto label_349b24;
        case 0x349b28u: goto label_349b28;
        case 0x349b2cu: goto label_349b2c;
        case 0x349b30u: goto label_349b30;
        case 0x349b34u: goto label_349b34;
        case 0x349b38u: goto label_349b38;
        case 0x349b3cu: goto label_349b3c;
        case 0x349b40u: goto label_349b40;
        case 0x349b44u: goto label_349b44;
        case 0x349b48u: goto label_349b48;
        case 0x349b4cu: goto label_349b4c;
        case 0x349b50u: goto label_349b50;
        case 0x349b54u: goto label_349b54;
        case 0x349b58u: goto label_349b58;
        case 0x349b5cu: goto label_349b5c;
        case 0x349b60u: goto label_349b60;
        case 0x349b64u: goto label_349b64;
        case 0x349b68u: goto label_349b68;
        case 0x349b6cu: goto label_349b6c;
        case 0x349b70u: goto label_349b70;
        case 0x349b74u: goto label_349b74;
        case 0x349b78u: goto label_349b78;
        case 0x349b7cu: goto label_349b7c;
        case 0x349b80u: goto label_349b80;
        case 0x349b84u: goto label_349b84;
        case 0x349b88u: goto label_349b88;
        case 0x349b8cu: goto label_349b8c;
        case 0x349b90u: goto label_349b90;
        case 0x349b94u: goto label_349b94;
        case 0x349b98u: goto label_349b98;
        case 0x349b9cu: goto label_349b9c;
        case 0x349ba0u: goto label_349ba0;
        case 0x349ba4u: goto label_349ba4;
        case 0x349ba8u: goto label_349ba8;
        case 0x349bacu: goto label_349bac;
        case 0x349bb0u: goto label_349bb0;
        case 0x349bb4u: goto label_349bb4;
        case 0x349bb8u: goto label_349bb8;
        case 0x349bbcu: goto label_349bbc;
        case 0x349bc0u: goto label_349bc0;
        case 0x349bc4u: goto label_349bc4;
        case 0x349bc8u: goto label_349bc8;
        case 0x349bccu: goto label_349bcc;
        case 0x349bd0u: goto label_349bd0;
        case 0x349bd4u: goto label_349bd4;
        case 0x349bd8u: goto label_349bd8;
        case 0x349bdcu: goto label_349bdc;
        case 0x349be0u: goto label_349be0;
        case 0x349be4u: goto label_349be4;
        case 0x349be8u: goto label_349be8;
        case 0x349becu: goto label_349bec;
        case 0x349bf0u: goto label_349bf0;
        case 0x349bf4u: goto label_349bf4;
        case 0x349bf8u: goto label_349bf8;
        case 0x349bfcu: goto label_349bfc;
        case 0x349c00u: goto label_349c00;
        case 0x349c04u: goto label_349c04;
        case 0x349c08u: goto label_349c08;
        case 0x349c0cu: goto label_349c0c;
        case 0x349c10u: goto label_349c10;
        case 0x349c14u: goto label_349c14;
        case 0x349c18u: goto label_349c18;
        case 0x349c1cu: goto label_349c1c;
        case 0x349c20u: goto label_349c20;
        case 0x349c24u: goto label_349c24;
        case 0x349c28u: goto label_349c28;
        case 0x349c2cu: goto label_349c2c;
        case 0x349c30u: goto label_349c30;
        case 0x349c34u: goto label_349c34;
        case 0x349c38u: goto label_349c38;
        case 0x349c3cu: goto label_349c3c;
        case 0x349c40u: goto label_349c40;
        case 0x349c44u: goto label_349c44;
        case 0x349c48u: goto label_349c48;
        case 0x349c4cu: goto label_349c4c;
        case 0x349c50u: goto label_349c50;
        case 0x349c54u: goto label_349c54;
        case 0x349c58u: goto label_349c58;
        case 0x349c5cu: goto label_349c5c;
        case 0x349c60u: goto label_349c60;
        case 0x349c64u: goto label_349c64;
        case 0x349c68u: goto label_349c68;
        case 0x349c6cu: goto label_349c6c;
        case 0x349c70u: goto label_349c70;
        case 0x349c74u: goto label_349c74;
        case 0x349c78u: goto label_349c78;
        case 0x349c7cu: goto label_349c7c;
        case 0x349c80u: goto label_349c80;
        case 0x349c84u: goto label_349c84;
        case 0x349c88u: goto label_349c88;
        case 0x349c8cu: goto label_349c8c;
        case 0x349c90u: goto label_349c90;
        case 0x349c94u: goto label_349c94;
        case 0x349c98u: goto label_349c98;
        case 0x349c9cu: goto label_349c9c;
        case 0x349ca0u: goto label_349ca0;
        case 0x349ca4u: goto label_349ca4;
        case 0x349ca8u: goto label_349ca8;
        case 0x349cacu: goto label_349cac;
        case 0x349cb0u: goto label_349cb0;
        case 0x349cb4u: goto label_349cb4;
        case 0x349cb8u: goto label_349cb8;
        case 0x349cbcu: goto label_349cbc;
        case 0x349cc0u: goto label_349cc0;
        case 0x349cc4u: goto label_349cc4;
        case 0x349cc8u: goto label_349cc8;
        case 0x349cccu: goto label_349ccc;
        case 0x349cd0u: goto label_349cd0;
        case 0x349cd4u: goto label_349cd4;
        case 0x349cd8u: goto label_349cd8;
        case 0x349cdcu: goto label_349cdc;
        case 0x349ce0u: goto label_349ce0;
        case 0x349ce4u: goto label_349ce4;
        case 0x349ce8u: goto label_349ce8;
        case 0x349cecu: goto label_349cec;
        case 0x349cf0u: goto label_349cf0;
        case 0x349cf4u: goto label_349cf4;
        case 0x349cf8u: goto label_349cf8;
        case 0x349cfcu: goto label_349cfc;
        case 0x349d00u: goto label_349d00;
        case 0x349d04u: goto label_349d04;
        case 0x349d08u: goto label_349d08;
        case 0x349d0cu: goto label_349d0c;
        case 0x349d10u: goto label_349d10;
        case 0x349d14u: goto label_349d14;
        case 0x349d18u: goto label_349d18;
        case 0x349d1cu: goto label_349d1c;
        case 0x349d20u: goto label_349d20;
        case 0x349d24u: goto label_349d24;
        case 0x349d28u: goto label_349d28;
        case 0x349d2cu: goto label_349d2c;
        case 0x349d30u: goto label_349d30;
        case 0x349d34u: goto label_349d34;
        case 0x349d38u: goto label_349d38;
        case 0x349d3cu: goto label_349d3c;
        case 0x349d40u: goto label_349d40;
        case 0x349d44u: goto label_349d44;
        case 0x349d48u: goto label_349d48;
        case 0x349d4cu: goto label_349d4c;
        case 0x349d50u: goto label_349d50;
        case 0x349d54u: goto label_349d54;
        case 0x349d58u: goto label_349d58;
        case 0x349d5cu: goto label_349d5c;
        case 0x349d60u: goto label_349d60;
        case 0x349d64u: goto label_349d64;
        case 0x349d68u: goto label_349d68;
        case 0x349d6cu: goto label_349d6c;
        case 0x349d70u: goto label_349d70;
        case 0x349d74u: goto label_349d74;
        case 0x349d78u: goto label_349d78;
        case 0x349d7cu: goto label_349d7c;
        case 0x349d80u: goto label_349d80;
        case 0x349d84u: goto label_349d84;
        case 0x349d88u: goto label_349d88;
        case 0x349d8cu: goto label_349d8c;
        case 0x349d90u: goto label_349d90;
        case 0x349d94u: goto label_349d94;
        case 0x349d98u: goto label_349d98;
        case 0x349d9cu: goto label_349d9c;
        case 0x349da0u: goto label_349da0;
        case 0x349da4u: goto label_349da4;
        case 0x349da8u: goto label_349da8;
        case 0x349dacu: goto label_349dac;
        case 0x349db0u: goto label_349db0;
        case 0x349db4u: goto label_349db4;
        case 0x349db8u: goto label_349db8;
        case 0x349dbcu: goto label_349dbc;
        case 0x349dc0u: goto label_349dc0;
        case 0x349dc4u: goto label_349dc4;
        case 0x349dc8u: goto label_349dc8;
        case 0x349dccu: goto label_349dcc;
        case 0x349dd0u: goto label_349dd0;
        case 0x349dd4u: goto label_349dd4;
        case 0x349dd8u: goto label_349dd8;
        case 0x349ddcu: goto label_349ddc;
        case 0x349de0u: goto label_349de0;
        case 0x349de4u: goto label_349de4;
        case 0x349de8u: goto label_349de8;
        case 0x349decu: goto label_349dec;
        case 0x349df0u: goto label_349df0;
        case 0x349df4u: goto label_349df4;
        case 0x349df8u: goto label_349df8;
        case 0x349dfcu: goto label_349dfc;
        case 0x349e00u: goto label_349e00;
        case 0x349e04u: goto label_349e04;
        case 0x349e08u: goto label_349e08;
        case 0x349e0cu: goto label_349e0c;
        case 0x349e10u: goto label_349e10;
        case 0x349e14u: goto label_349e14;
        case 0x349e18u: goto label_349e18;
        case 0x349e1cu: goto label_349e1c;
        case 0x349e20u: goto label_349e20;
        case 0x349e24u: goto label_349e24;
        case 0x349e28u: goto label_349e28;
        case 0x349e2cu: goto label_349e2c;
        case 0x349e30u: goto label_349e30;
        case 0x349e34u: goto label_349e34;
        case 0x349e38u: goto label_349e38;
        case 0x349e3cu: goto label_349e3c;
        case 0x349e40u: goto label_349e40;
        case 0x349e44u: goto label_349e44;
        case 0x349e48u: goto label_349e48;
        case 0x349e4cu: goto label_349e4c;
        case 0x349e50u: goto label_349e50;
        case 0x349e54u: goto label_349e54;
        case 0x349e58u: goto label_349e58;
        case 0x349e5cu: goto label_349e5c;
        case 0x349e60u: goto label_349e60;
        case 0x349e64u: goto label_349e64;
        case 0x349e68u: goto label_349e68;
        case 0x349e6cu: goto label_349e6c;
        case 0x349e70u: goto label_349e70;
        case 0x349e74u: goto label_349e74;
        case 0x349e78u: goto label_349e78;
        case 0x349e7cu: goto label_349e7c;
        case 0x349e80u: goto label_349e80;
        case 0x349e84u: goto label_349e84;
        case 0x349e88u: goto label_349e88;
        case 0x349e8cu: goto label_349e8c;
        case 0x349e90u: goto label_349e90;
        case 0x349e94u: goto label_349e94;
        case 0x349e98u: goto label_349e98;
        case 0x349e9cu: goto label_349e9c;
        case 0x349ea0u: goto label_349ea0;
        case 0x349ea4u: goto label_349ea4;
        case 0x349ea8u: goto label_349ea8;
        case 0x349eacu: goto label_349eac;
        case 0x349eb0u: goto label_349eb0;
        case 0x349eb4u: goto label_349eb4;
        case 0x349eb8u: goto label_349eb8;
        case 0x349ebcu: goto label_349ebc;
        case 0x349ec0u: goto label_349ec0;
        case 0x349ec4u: goto label_349ec4;
        case 0x349ec8u: goto label_349ec8;
        case 0x349eccu: goto label_349ecc;
        case 0x349ed0u: goto label_349ed0;
        case 0x349ed4u: goto label_349ed4;
        case 0x349ed8u: goto label_349ed8;
        case 0x349edcu: goto label_349edc;
        case 0x349ee0u: goto label_349ee0;
        case 0x349ee4u: goto label_349ee4;
        case 0x349ee8u: goto label_349ee8;
        case 0x349eecu: goto label_349eec;
        case 0x349ef0u: goto label_349ef0;
        case 0x349ef4u: goto label_349ef4;
        case 0x349ef8u: goto label_349ef8;
        case 0x349efcu: goto label_349efc;
        case 0x349f00u: goto label_349f00;
        case 0x349f04u: goto label_349f04;
        case 0x349f08u: goto label_349f08;
        case 0x349f0cu: goto label_349f0c;
        case 0x349f10u: goto label_349f10;
        case 0x349f14u: goto label_349f14;
        case 0x349f18u: goto label_349f18;
        case 0x349f1cu: goto label_349f1c;
        case 0x349f20u: goto label_349f20;
        case 0x349f24u: goto label_349f24;
        case 0x349f28u: goto label_349f28;
        case 0x349f2cu: goto label_349f2c;
        case 0x349f30u: goto label_349f30;
        case 0x349f34u: goto label_349f34;
        case 0x349f38u: goto label_349f38;
        case 0x349f3cu: goto label_349f3c;
        case 0x349f40u: goto label_349f40;
        case 0x349f44u: goto label_349f44;
        case 0x349f48u: goto label_349f48;
        case 0x349f4cu: goto label_349f4c;
        case 0x349f50u: goto label_349f50;
        case 0x349f54u: goto label_349f54;
        case 0x349f58u: goto label_349f58;
        case 0x349f5cu: goto label_349f5c;
        case 0x349f60u: goto label_349f60;
        case 0x349f64u: goto label_349f64;
        case 0x349f68u: goto label_349f68;
        case 0x349f6cu: goto label_349f6c;
        case 0x349f70u: goto label_349f70;
        case 0x349f74u: goto label_349f74;
        case 0x349f78u: goto label_349f78;
        case 0x349f7cu: goto label_349f7c;
        case 0x349f80u: goto label_349f80;
        case 0x349f84u: goto label_349f84;
        case 0x349f88u: goto label_349f88;
        case 0x349f8cu: goto label_349f8c;
        case 0x349f90u: goto label_349f90;
        case 0x349f94u: goto label_349f94;
        case 0x349f98u: goto label_349f98;
        case 0x349f9cu: goto label_349f9c;
        case 0x349fa0u: goto label_349fa0;
        case 0x349fa4u: goto label_349fa4;
        case 0x349fa8u: goto label_349fa8;
        case 0x349facu: goto label_349fac;
        case 0x349fb0u: goto label_349fb0;
        case 0x349fb4u: goto label_349fb4;
        case 0x349fb8u: goto label_349fb8;
        case 0x349fbcu: goto label_349fbc;
        case 0x349fc0u: goto label_349fc0;
        case 0x349fc4u: goto label_349fc4;
        case 0x349fc8u: goto label_349fc8;
        case 0x349fccu: goto label_349fcc;
        case 0x349fd0u: goto label_349fd0;
        case 0x349fd4u: goto label_349fd4;
        case 0x349fd8u: goto label_349fd8;
        case 0x349fdcu: goto label_349fdc;
        case 0x349fe0u: goto label_349fe0;
        case 0x349fe4u: goto label_349fe4;
        case 0x349fe8u: goto label_349fe8;
        case 0x349fecu: goto label_349fec;
        case 0x349ff0u: goto label_349ff0;
        case 0x349ff4u: goto label_349ff4;
        case 0x349ff8u: goto label_349ff8;
        case 0x349ffcu: goto label_349ffc;
        case 0x34a000u: goto label_34a000;
        case 0x34a004u: goto label_34a004;
        case 0x34a008u: goto label_34a008;
        case 0x34a00cu: goto label_34a00c;
        case 0x34a010u: goto label_34a010;
        case 0x34a014u: goto label_34a014;
        case 0x34a018u: goto label_34a018;
        case 0x34a01cu: goto label_34a01c;
        case 0x34a020u: goto label_34a020;
        case 0x34a024u: goto label_34a024;
        case 0x34a028u: goto label_34a028;
        case 0x34a02cu: goto label_34a02c;
        case 0x34a030u: goto label_34a030;
        case 0x34a034u: goto label_34a034;
        case 0x34a038u: goto label_34a038;
        case 0x34a03cu: goto label_34a03c;
        case 0x34a040u: goto label_34a040;
        case 0x34a044u: goto label_34a044;
        case 0x34a048u: goto label_34a048;
        case 0x34a04cu: goto label_34a04c;
        case 0x34a050u: goto label_34a050;
        case 0x34a054u: goto label_34a054;
        case 0x34a058u: goto label_34a058;
        case 0x34a05cu: goto label_34a05c;
        case 0x34a060u: goto label_34a060;
        case 0x34a064u: goto label_34a064;
        case 0x34a068u: goto label_34a068;
        case 0x34a06cu: goto label_34a06c;
        case 0x34a070u: goto label_34a070;
        case 0x34a074u: goto label_34a074;
        case 0x34a078u: goto label_34a078;
        case 0x34a07cu: goto label_34a07c;
        case 0x34a080u: goto label_34a080;
        case 0x34a084u: goto label_34a084;
        case 0x34a088u: goto label_34a088;
        case 0x34a08cu: goto label_34a08c;
        case 0x34a090u: goto label_34a090;
        case 0x34a094u: goto label_34a094;
        case 0x34a098u: goto label_34a098;
        case 0x34a09cu: goto label_34a09c;
        case 0x34a0a0u: goto label_34a0a0;
        case 0x34a0a4u: goto label_34a0a4;
        case 0x34a0a8u: goto label_34a0a8;
        case 0x34a0acu: goto label_34a0ac;
        case 0x34a0b0u: goto label_34a0b0;
        case 0x34a0b4u: goto label_34a0b4;
        case 0x34a0b8u: goto label_34a0b8;
        case 0x34a0bcu: goto label_34a0bc;
        case 0x34a0c0u: goto label_34a0c0;
        case 0x34a0c4u: goto label_34a0c4;
        case 0x34a0c8u: goto label_34a0c8;
        case 0x34a0ccu: goto label_34a0cc;
        case 0x34a0d0u: goto label_34a0d0;
        case 0x34a0d4u: goto label_34a0d4;
        case 0x34a0d8u: goto label_34a0d8;
        case 0x34a0dcu: goto label_34a0dc;
        case 0x34a0e0u: goto label_34a0e0;
        case 0x34a0e4u: goto label_34a0e4;
        case 0x34a0e8u: goto label_34a0e8;
        case 0x34a0ecu: goto label_34a0ec;
        case 0x34a0f0u: goto label_34a0f0;
        case 0x34a0f4u: goto label_34a0f4;
        case 0x34a0f8u: goto label_34a0f8;
        case 0x34a0fcu: goto label_34a0fc;
        case 0x34a100u: goto label_34a100;
        case 0x34a104u: goto label_34a104;
        case 0x34a108u: goto label_34a108;
        case 0x34a10cu: goto label_34a10c;
        case 0x34a110u: goto label_34a110;
        case 0x34a114u: goto label_34a114;
        case 0x34a118u: goto label_34a118;
        case 0x34a11cu: goto label_34a11c;
        case 0x34a120u: goto label_34a120;
        case 0x34a124u: goto label_34a124;
        case 0x34a128u: goto label_34a128;
        case 0x34a12cu: goto label_34a12c;
        case 0x34a130u: goto label_34a130;
        case 0x34a134u: goto label_34a134;
        case 0x34a138u: goto label_34a138;
        case 0x34a13cu: goto label_34a13c;
        case 0x34a140u: goto label_34a140;
        case 0x34a144u: goto label_34a144;
        case 0x34a148u: goto label_34a148;
        case 0x34a14cu: goto label_34a14c;
        case 0x34a150u: goto label_34a150;
        case 0x34a154u: goto label_34a154;
        case 0x34a158u: goto label_34a158;
        case 0x34a15cu: goto label_34a15c;
        case 0x34a160u: goto label_34a160;
        case 0x34a164u: goto label_34a164;
        case 0x34a168u: goto label_34a168;
        case 0x34a16cu: goto label_34a16c;
        case 0x34a170u: goto label_34a170;
        case 0x34a174u: goto label_34a174;
        case 0x34a178u: goto label_34a178;
        case 0x34a17cu: goto label_34a17c;
        case 0x34a180u: goto label_34a180;
        case 0x34a184u: goto label_34a184;
        case 0x34a188u: goto label_34a188;
        case 0x34a18cu: goto label_34a18c;
        case 0x34a190u: goto label_34a190;
        case 0x34a194u: goto label_34a194;
        case 0x34a198u: goto label_34a198;
        case 0x34a19cu: goto label_34a19c;
        case 0x34a1a0u: goto label_34a1a0;
        case 0x34a1a4u: goto label_34a1a4;
        case 0x34a1a8u: goto label_34a1a8;
        case 0x34a1acu: goto label_34a1ac;
        case 0x34a1b0u: goto label_34a1b0;
        case 0x34a1b4u: goto label_34a1b4;
        case 0x34a1b8u: goto label_34a1b8;
        case 0x34a1bcu: goto label_34a1bc;
        case 0x34a1c0u: goto label_34a1c0;
        case 0x34a1c4u: goto label_34a1c4;
        case 0x34a1c8u: goto label_34a1c8;
        case 0x34a1ccu: goto label_34a1cc;
        case 0x34a1d0u: goto label_34a1d0;
        case 0x34a1d4u: goto label_34a1d4;
        case 0x34a1d8u: goto label_34a1d8;
        case 0x34a1dcu: goto label_34a1dc;
        case 0x34a1e0u: goto label_34a1e0;
        case 0x34a1e4u: goto label_34a1e4;
        case 0x34a1e8u: goto label_34a1e8;
        case 0x34a1ecu: goto label_34a1ec;
        case 0x34a1f0u: goto label_34a1f0;
        case 0x34a1f4u: goto label_34a1f4;
        case 0x34a1f8u: goto label_34a1f8;
        case 0x34a1fcu: goto label_34a1fc;
        case 0x34a200u: goto label_34a200;
        case 0x34a204u: goto label_34a204;
        case 0x34a208u: goto label_34a208;
        case 0x34a20cu: goto label_34a20c;
        case 0x34a210u: goto label_34a210;
        case 0x34a214u: goto label_34a214;
        case 0x34a218u: goto label_34a218;
        case 0x34a21cu: goto label_34a21c;
        case 0x34a220u: goto label_34a220;
        case 0x34a224u: goto label_34a224;
        case 0x34a228u: goto label_34a228;
        case 0x34a22cu: goto label_34a22c;
        case 0x34a230u: goto label_34a230;
        case 0x34a234u: goto label_34a234;
        case 0x34a238u: goto label_34a238;
        case 0x34a23cu: goto label_34a23c;
        case 0x34a240u: goto label_34a240;
        case 0x34a244u: goto label_34a244;
        case 0x34a248u: goto label_34a248;
        case 0x34a24cu: goto label_34a24c;
        case 0x34a250u: goto label_34a250;
        case 0x34a254u: goto label_34a254;
        case 0x34a258u: goto label_34a258;
        case 0x34a25cu: goto label_34a25c;
        case 0x34a260u: goto label_34a260;
        case 0x34a264u: goto label_34a264;
        case 0x34a268u: goto label_34a268;
        case 0x34a26cu: goto label_34a26c;
        case 0x34a270u: goto label_34a270;
        case 0x34a274u: goto label_34a274;
        case 0x34a278u: goto label_34a278;
        case 0x34a27cu: goto label_34a27c;
        case 0x34a280u: goto label_34a280;
        case 0x34a284u: goto label_34a284;
        case 0x34a288u: goto label_34a288;
        case 0x34a28cu: goto label_34a28c;
        case 0x34a290u: goto label_34a290;
        case 0x34a294u: goto label_34a294;
        case 0x34a298u: goto label_34a298;
        case 0x34a29cu: goto label_34a29c;
        case 0x34a2a0u: goto label_34a2a0;
        case 0x34a2a4u: goto label_34a2a4;
        case 0x34a2a8u: goto label_34a2a8;
        case 0x34a2acu: goto label_34a2ac;
        case 0x34a2b0u: goto label_34a2b0;
        case 0x34a2b4u: goto label_34a2b4;
        case 0x34a2b8u: goto label_34a2b8;
        case 0x34a2bcu: goto label_34a2bc;
        case 0x34a2c0u: goto label_34a2c0;
        case 0x34a2c4u: goto label_34a2c4;
        case 0x34a2c8u: goto label_34a2c8;
        case 0x34a2ccu: goto label_34a2cc;
        case 0x34a2d0u: goto label_34a2d0;
        case 0x34a2d4u: goto label_34a2d4;
        case 0x34a2d8u: goto label_34a2d8;
        case 0x34a2dcu: goto label_34a2dc;
        case 0x34a2e0u: goto label_34a2e0;
        case 0x34a2e4u: goto label_34a2e4;
        case 0x34a2e8u: goto label_34a2e8;
        case 0x34a2ecu: goto label_34a2ec;
        case 0x34a2f0u: goto label_34a2f0;
        case 0x34a2f4u: goto label_34a2f4;
        case 0x34a2f8u: goto label_34a2f8;
        case 0x34a2fcu: goto label_34a2fc;
        case 0x34a300u: goto label_34a300;
        case 0x34a304u: goto label_34a304;
        case 0x34a308u: goto label_34a308;
        case 0x34a30cu: goto label_34a30c;
        case 0x34a310u: goto label_34a310;
        case 0x34a314u: goto label_34a314;
        case 0x34a318u: goto label_34a318;
        case 0x34a31cu: goto label_34a31c;
        case 0x34a320u: goto label_34a320;
        case 0x34a324u: goto label_34a324;
        case 0x34a328u: goto label_34a328;
        case 0x34a32cu: goto label_34a32c;
        case 0x34a330u: goto label_34a330;
        case 0x34a334u: goto label_34a334;
        case 0x34a338u: goto label_34a338;
        case 0x34a33cu: goto label_34a33c;
        case 0x34a340u: goto label_34a340;
        case 0x34a344u: goto label_34a344;
        case 0x34a348u: goto label_34a348;
        case 0x34a34cu: goto label_34a34c;
        case 0x34a350u: goto label_34a350;
        case 0x34a354u: goto label_34a354;
        case 0x34a358u: goto label_34a358;
        case 0x34a35cu: goto label_34a35c;
        case 0x34a360u: goto label_34a360;
        case 0x34a364u: goto label_34a364;
        case 0x34a368u: goto label_34a368;
        case 0x34a36cu: goto label_34a36c;
        case 0x34a370u: goto label_34a370;
        case 0x34a374u: goto label_34a374;
        case 0x34a378u: goto label_34a378;
        case 0x34a37cu: goto label_34a37c;
        case 0x34a380u: goto label_34a380;
        case 0x34a384u: goto label_34a384;
        case 0x34a388u: goto label_34a388;
        case 0x34a38cu: goto label_34a38c;
        case 0x34a390u: goto label_34a390;
        case 0x34a394u: goto label_34a394;
        case 0x34a398u: goto label_34a398;
        case 0x34a39cu: goto label_34a39c;
        case 0x34a3a0u: goto label_34a3a0;
        case 0x34a3a4u: goto label_34a3a4;
        case 0x34a3a8u: goto label_34a3a8;
        case 0x34a3acu: goto label_34a3ac;
        case 0x34a3b0u: goto label_34a3b0;
        case 0x34a3b4u: goto label_34a3b4;
        case 0x34a3b8u: goto label_34a3b8;
        case 0x34a3bcu: goto label_34a3bc;
        case 0x34a3c0u: goto label_34a3c0;
        case 0x34a3c4u: goto label_34a3c4;
        case 0x34a3c8u: goto label_34a3c8;
        case 0x34a3ccu: goto label_34a3cc;
        case 0x34a3d0u: goto label_34a3d0;
        case 0x34a3d4u: goto label_34a3d4;
        case 0x34a3d8u: goto label_34a3d8;
        case 0x34a3dcu: goto label_34a3dc;
        case 0x34a3e0u: goto label_34a3e0;
        case 0x34a3e4u: goto label_34a3e4;
        case 0x34a3e8u: goto label_34a3e8;
        case 0x34a3ecu: goto label_34a3ec;
        case 0x34a3f0u: goto label_34a3f0;
        case 0x34a3f4u: goto label_34a3f4;
        case 0x34a3f8u: goto label_34a3f8;
        case 0x34a3fcu: goto label_34a3fc;
        case 0x34a400u: goto label_34a400;
        case 0x34a404u: goto label_34a404;
        case 0x34a408u: goto label_34a408;
        case 0x34a40cu: goto label_34a40c;
        case 0x34a410u: goto label_34a410;
        case 0x34a414u: goto label_34a414;
        case 0x34a418u: goto label_34a418;
        case 0x34a41cu: goto label_34a41c;
        case 0x34a420u: goto label_34a420;
        case 0x34a424u: goto label_34a424;
        case 0x34a428u: goto label_34a428;
        case 0x34a42cu: goto label_34a42c;
        case 0x34a430u: goto label_34a430;
        case 0x34a434u: goto label_34a434;
        case 0x34a438u: goto label_34a438;
        case 0x34a43cu: goto label_34a43c;
        case 0x34a440u: goto label_34a440;
        case 0x34a444u: goto label_34a444;
        case 0x34a448u: goto label_34a448;
        case 0x34a44cu: goto label_34a44c;
        case 0x34a450u: goto label_34a450;
        case 0x34a454u: goto label_34a454;
        case 0x34a458u: goto label_34a458;
        case 0x34a45cu: goto label_34a45c;
        case 0x34a460u: goto label_34a460;
        case 0x34a464u: goto label_34a464;
        case 0x34a468u: goto label_34a468;
        case 0x34a46cu: goto label_34a46c;
        case 0x34a470u: goto label_34a470;
        case 0x34a474u: goto label_34a474;
        case 0x34a478u: goto label_34a478;
        case 0x34a47cu: goto label_34a47c;
        case 0x34a480u: goto label_34a480;
        case 0x34a484u: goto label_34a484;
        case 0x34a488u: goto label_34a488;
        case 0x34a48cu: goto label_34a48c;
        case 0x34a490u: goto label_34a490;
        case 0x34a494u: goto label_34a494;
        case 0x34a498u: goto label_34a498;
        case 0x34a49cu: goto label_34a49c;
        case 0x34a4a0u: goto label_34a4a0;
        case 0x34a4a4u: goto label_34a4a4;
        case 0x34a4a8u: goto label_34a4a8;
        case 0x34a4acu: goto label_34a4ac;
        case 0x34a4b0u: goto label_34a4b0;
        case 0x34a4b4u: goto label_34a4b4;
        case 0x34a4b8u: goto label_34a4b8;
        case 0x34a4bcu: goto label_34a4bc;
        case 0x34a4c0u: goto label_34a4c0;
        case 0x34a4c4u: goto label_34a4c4;
        case 0x34a4c8u: goto label_34a4c8;
        case 0x34a4ccu: goto label_34a4cc;
        case 0x34a4d0u: goto label_34a4d0;
        case 0x34a4d4u: goto label_34a4d4;
        case 0x34a4d8u: goto label_34a4d8;
        case 0x34a4dcu: goto label_34a4dc;
        case 0x34a4e0u: goto label_34a4e0;
        case 0x34a4e4u: goto label_34a4e4;
        case 0x34a4e8u: goto label_34a4e8;
        case 0x34a4ecu: goto label_34a4ec;
        case 0x34a4f0u: goto label_34a4f0;
        case 0x34a4f4u: goto label_34a4f4;
        case 0x34a4f8u: goto label_34a4f8;
        case 0x34a4fcu: goto label_34a4fc;
        case 0x34a500u: goto label_34a500;
        case 0x34a504u: goto label_34a504;
        case 0x34a508u: goto label_34a508;
        case 0x34a50cu: goto label_34a50c;
        case 0x34a510u: goto label_34a510;
        case 0x34a514u: goto label_34a514;
        case 0x34a518u: goto label_34a518;
        case 0x34a51cu: goto label_34a51c;
        case 0x34a520u: goto label_34a520;
        case 0x34a524u: goto label_34a524;
        case 0x34a528u: goto label_34a528;
        case 0x34a52cu: goto label_34a52c;
        case 0x34a530u: goto label_34a530;
        case 0x34a534u: goto label_34a534;
        case 0x34a538u: goto label_34a538;
        case 0x34a53cu: goto label_34a53c;
        case 0x34a540u: goto label_34a540;
        case 0x34a544u: goto label_34a544;
        case 0x34a548u: goto label_34a548;
        case 0x34a54cu: goto label_34a54c;
        case 0x34a550u: goto label_34a550;
        case 0x34a554u: goto label_34a554;
        case 0x34a558u: goto label_34a558;
        case 0x34a55cu: goto label_34a55c;
        case 0x34a560u: goto label_34a560;
        case 0x34a564u: goto label_34a564;
        case 0x34a568u: goto label_34a568;
        case 0x34a56cu: goto label_34a56c;
        case 0x34a570u: goto label_34a570;
        case 0x34a574u: goto label_34a574;
        case 0x34a578u: goto label_34a578;
        case 0x34a57cu: goto label_34a57c;
        case 0x34a580u: goto label_34a580;
        case 0x34a584u: goto label_34a584;
        case 0x34a588u: goto label_34a588;
        case 0x34a58cu: goto label_34a58c;
        case 0x34a590u: goto label_34a590;
        case 0x34a594u: goto label_34a594;
        case 0x34a598u: goto label_34a598;
        case 0x34a59cu: goto label_34a59c;
        case 0x34a5a0u: goto label_34a5a0;
        case 0x34a5a4u: goto label_34a5a4;
        case 0x34a5a8u: goto label_34a5a8;
        case 0x34a5acu: goto label_34a5ac;
        case 0x34a5b0u: goto label_34a5b0;
        case 0x34a5b4u: goto label_34a5b4;
        case 0x34a5b8u: goto label_34a5b8;
        case 0x34a5bcu: goto label_34a5bc;
        case 0x34a5c0u: goto label_34a5c0;
        case 0x34a5c4u: goto label_34a5c4;
        case 0x34a5c8u: goto label_34a5c8;
        case 0x34a5ccu: goto label_34a5cc;
        case 0x34a5d0u: goto label_34a5d0;
        case 0x34a5d4u: goto label_34a5d4;
        case 0x34a5d8u: goto label_34a5d8;
        case 0x34a5dcu: goto label_34a5dc;
        case 0x34a5e0u: goto label_34a5e0;
        case 0x34a5e4u: goto label_34a5e4;
        case 0x34a5e8u: goto label_34a5e8;
        case 0x34a5ecu: goto label_34a5ec;
        case 0x34a5f0u: goto label_34a5f0;
        case 0x34a5f4u: goto label_34a5f4;
        case 0x34a5f8u: goto label_34a5f8;
        case 0x34a5fcu: goto label_34a5fc;
        case 0x34a600u: goto label_34a600;
        case 0x34a604u: goto label_34a604;
        case 0x34a608u: goto label_34a608;
        case 0x34a60cu: goto label_34a60c;
        case 0x34a610u: goto label_34a610;
        case 0x34a614u: goto label_34a614;
        case 0x34a618u: goto label_34a618;
        case 0x34a61cu: goto label_34a61c;
        case 0x34a620u: goto label_34a620;
        case 0x34a624u: goto label_34a624;
        case 0x34a628u: goto label_34a628;
        case 0x34a62cu: goto label_34a62c;
        case 0x34a630u: goto label_34a630;
        case 0x34a634u: goto label_34a634;
        case 0x34a638u: goto label_34a638;
        case 0x34a63cu: goto label_34a63c;
        case 0x34a640u: goto label_34a640;
        case 0x34a644u: goto label_34a644;
        case 0x34a648u: goto label_34a648;
        case 0x34a64cu: goto label_34a64c;
        case 0x34a650u: goto label_34a650;
        case 0x34a654u: goto label_34a654;
        case 0x34a658u: goto label_34a658;
        case 0x34a65cu: goto label_34a65c;
        case 0x34a660u: goto label_34a660;
        case 0x34a664u: goto label_34a664;
        case 0x34a668u: goto label_34a668;
        case 0x34a66cu: goto label_34a66c;
        case 0x34a670u: goto label_34a670;
        case 0x34a674u: goto label_34a674;
        case 0x34a678u: goto label_34a678;
        case 0x34a67cu: goto label_34a67c;
        case 0x34a680u: goto label_34a680;
        case 0x34a684u: goto label_34a684;
        case 0x34a688u: goto label_34a688;
        case 0x34a68cu: goto label_34a68c;
        case 0x34a690u: goto label_34a690;
        case 0x34a694u: goto label_34a694;
        case 0x34a698u: goto label_34a698;
        case 0x34a69cu: goto label_34a69c;
        case 0x34a6a0u: goto label_34a6a0;
        case 0x34a6a4u: goto label_34a6a4;
        case 0x34a6a8u: goto label_34a6a8;
        case 0x34a6acu: goto label_34a6ac;
        case 0x34a6b0u: goto label_34a6b0;
        case 0x34a6b4u: goto label_34a6b4;
        case 0x34a6b8u: goto label_34a6b8;
        case 0x34a6bcu: goto label_34a6bc;
        case 0x34a6c0u: goto label_34a6c0;
        case 0x34a6c4u: goto label_34a6c4;
        case 0x34a6c8u: goto label_34a6c8;
        case 0x34a6ccu: goto label_34a6cc;
        case 0x34a6d0u: goto label_34a6d0;
        case 0x34a6d4u: goto label_34a6d4;
        case 0x34a6d8u: goto label_34a6d8;
        case 0x34a6dcu: goto label_34a6dc;
        case 0x34a6e0u: goto label_34a6e0;
        case 0x34a6e4u: goto label_34a6e4;
        case 0x34a6e8u: goto label_34a6e8;
        case 0x34a6ecu: goto label_34a6ec;
        case 0x34a6f0u: goto label_34a6f0;
        case 0x34a6f4u: goto label_34a6f4;
        case 0x34a6f8u: goto label_34a6f8;
        case 0x34a6fcu: goto label_34a6fc;
        case 0x34a700u: goto label_34a700;
        case 0x34a704u: goto label_34a704;
        case 0x34a708u: goto label_34a708;
        case 0x34a70cu: goto label_34a70c;
        case 0x34a710u: goto label_34a710;
        case 0x34a714u: goto label_34a714;
        case 0x34a718u: goto label_34a718;
        case 0x34a71cu: goto label_34a71c;
        case 0x34a720u: goto label_34a720;
        case 0x34a724u: goto label_34a724;
        case 0x34a728u: goto label_34a728;
        case 0x34a72cu: goto label_34a72c;
        case 0x34a730u: goto label_34a730;
        case 0x34a734u: goto label_34a734;
        case 0x34a738u: goto label_34a738;
        case 0x34a73cu: goto label_34a73c;
        case 0x34a740u: goto label_34a740;
        case 0x34a744u: goto label_34a744;
        case 0x34a748u: goto label_34a748;
        case 0x34a74cu: goto label_34a74c;
        case 0x34a750u: goto label_34a750;
        case 0x34a754u: goto label_34a754;
        case 0x34a758u: goto label_34a758;
        case 0x34a75cu: goto label_34a75c;
        case 0x34a760u: goto label_34a760;
        case 0x34a764u: goto label_34a764;
        case 0x34a768u: goto label_34a768;
        case 0x34a76cu: goto label_34a76c;
        case 0x34a770u: goto label_34a770;
        case 0x34a774u: goto label_34a774;
        case 0x34a778u: goto label_34a778;
        case 0x34a77cu: goto label_34a77c;
        case 0x34a780u: goto label_34a780;
        case 0x34a784u: goto label_34a784;
        case 0x34a788u: goto label_34a788;
        case 0x34a78cu: goto label_34a78c;
        case 0x34a790u: goto label_34a790;
        case 0x34a794u: goto label_34a794;
        case 0x34a798u: goto label_34a798;
        case 0x34a79cu: goto label_34a79c;
        case 0x34a7a0u: goto label_34a7a0;
        case 0x34a7a4u: goto label_34a7a4;
        case 0x34a7a8u: goto label_34a7a8;
        case 0x34a7acu: goto label_34a7ac;
        case 0x34a7b0u: goto label_34a7b0;
        case 0x34a7b4u: goto label_34a7b4;
        case 0x34a7b8u: goto label_34a7b8;
        case 0x34a7bcu: goto label_34a7bc;
        case 0x34a7c0u: goto label_34a7c0;
        case 0x34a7c4u: goto label_34a7c4;
        case 0x34a7c8u: goto label_34a7c8;
        case 0x34a7ccu: goto label_34a7cc;
        case 0x34a7d0u: goto label_34a7d0;
        case 0x34a7d4u: goto label_34a7d4;
        case 0x34a7d8u: goto label_34a7d8;
        case 0x34a7dcu: goto label_34a7dc;
        case 0x34a7e0u: goto label_34a7e0;
        case 0x34a7e4u: goto label_34a7e4;
        case 0x34a7e8u: goto label_34a7e8;
        case 0x34a7ecu: goto label_34a7ec;
        case 0x34a7f0u: goto label_34a7f0;
        case 0x34a7f4u: goto label_34a7f4;
        case 0x34a7f8u: goto label_34a7f8;
        case 0x34a7fcu: goto label_34a7fc;
        case 0x34a800u: goto label_34a800;
        case 0x34a804u: goto label_34a804;
        case 0x34a808u: goto label_34a808;
        case 0x34a80cu: goto label_34a80c;
        case 0x34a810u: goto label_34a810;
        case 0x34a814u: goto label_34a814;
        case 0x34a818u: goto label_34a818;
        case 0x34a81cu: goto label_34a81c;
        case 0x34a820u: goto label_34a820;
        case 0x34a824u: goto label_34a824;
        case 0x34a828u: goto label_34a828;
        case 0x34a82cu: goto label_34a82c;
        case 0x34a830u: goto label_34a830;
        case 0x34a834u: goto label_34a834;
        case 0x34a838u: goto label_34a838;
        case 0x34a83cu: goto label_34a83c;
        case 0x34a840u: goto label_34a840;
        case 0x34a844u: goto label_34a844;
        case 0x34a848u: goto label_34a848;
        case 0x34a84cu: goto label_34a84c;
        case 0x34a850u: goto label_34a850;
        case 0x34a854u: goto label_34a854;
        case 0x34a858u: goto label_34a858;
        case 0x34a85cu: goto label_34a85c;
        case 0x34a860u: goto label_34a860;
        case 0x34a864u: goto label_34a864;
        case 0x34a868u: goto label_34a868;
        case 0x34a86cu: goto label_34a86c;
        case 0x34a870u: goto label_34a870;
        case 0x34a874u: goto label_34a874;
        case 0x34a878u: goto label_34a878;
        case 0x34a87cu: goto label_34a87c;
        case 0x34a880u: goto label_34a880;
        case 0x34a884u: goto label_34a884;
        case 0x34a888u: goto label_34a888;
        case 0x34a88cu: goto label_34a88c;
        case 0x34a890u: goto label_34a890;
        case 0x34a894u: goto label_34a894;
        case 0x34a898u: goto label_34a898;
        case 0x34a89cu: goto label_34a89c;
        case 0x34a8a0u: goto label_34a8a0;
        case 0x34a8a4u: goto label_34a8a4;
        case 0x34a8a8u: goto label_34a8a8;
        case 0x34a8acu: goto label_34a8ac;
        case 0x34a8b0u: goto label_34a8b0;
        case 0x34a8b4u: goto label_34a8b4;
        case 0x34a8b8u: goto label_34a8b8;
        case 0x34a8bcu: goto label_34a8bc;
        case 0x34a8c0u: goto label_34a8c0;
        case 0x34a8c4u: goto label_34a8c4;
        case 0x34a8c8u: goto label_34a8c8;
        case 0x34a8ccu: goto label_34a8cc;
        case 0x34a8d0u: goto label_34a8d0;
        case 0x34a8d4u: goto label_34a8d4;
        case 0x34a8d8u: goto label_34a8d8;
        case 0x34a8dcu: goto label_34a8dc;
        case 0x34a8e0u: goto label_34a8e0;
        case 0x34a8e4u: goto label_34a8e4;
        case 0x34a8e8u: goto label_34a8e8;
        case 0x34a8ecu: goto label_34a8ec;
        case 0x34a8f0u: goto label_34a8f0;
        case 0x34a8f4u: goto label_34a8f4;
        case 0x34a8f8u: goto label_34a8f8;
        case 0x34a8fcu: goto label_34a8fc;
        case 0x34a900u: goto label_34a900;
        case 0x34a904u: goto label_34a904;
        case 0x34a908u: goto label_34a908;
        case 0x34a90cu: goto label_34a90c;
        case 0x34a910u: goto label_34a910;
        case 0x34a914u: goto label_34a914;
        case 0x34a918u: goto label_34a918;
        case 0x34a91cu: goto label_34a91c;
        case 0x34a920u: goto label_34a920;
        case 0x34a924u: goto label_34a924;
        case 0x34a928u: goto label_34a928;
        case 0x34a92cu: goto label_34a92c;
        case 0x34a930u: goto label_34a930;
        case 0x34a934u: goto label_34a934;
        case 0x34a938u: goto label_34a938;
        case 0x34a93cu: goto label_34a93c;
        case 0x34a940u: goto label_34a940;
        case 0x34a944u: goto label_34a944;
        case 0x34a948u: goto label_34a948;
        case 0x34a94cu: goto label_34a94c;
        case 0x34a950u: goto label_34a950;
        case 0x34a954u: goto label_34a954;
        case 0x34a958u: goto label_34a958;
        case 0x34a95cu: goto label_34a95c;
        case 0x34a960u: goto label_34a960;
        case 0x34a964u: goto label_34a964;
        case 0x34a968u: goto label_34a968;
        case 0x34a96cu: goto label_34a96c;
        case 0x34a970u: goto label_34a970;
        case 0x34a974u: goto label_34a974;
        case 0x34a978u: goto label_34a978;
        case 0x34a97cu: goto label_34a97c;
        case 0x34a980u: goto label_34a980;
        case 0x34a984u: goto label_34a984;
        case 0x34a988u: goto label_34a988;
        case 0x34a98cu: goto label_34a98c;
        case 0x34a990u: goto label_34a990;
        case 0x34a994u: goto label_34a994;
        case 0x34a998u: goto label_34a998;
        case 0x34a99cu: goto label_34a99c;
        case 0x34a9a0u: goto label_34a9a0;
        case 0x34a9a4u: goto label_34a9a4;
        case 0x34a9a8u: goto label_34a9a8;
        case 0x34a9acu: goto label_34a9ac;
        case 0x34a9b0u: goto label_34a9b0;
        case 0x34a9b4u: goto label_34a9b4;
        case 0x34a9b8u: goto label_34a9b8;
        case 0x34a9bcu: goto label_34a9bc;
        case 0x34a9c0u: goto label_34a9c0;
        case 0x34a9c4u: goto label_34a9c4;
        case 0x34a9c8u: goto label_34a9c8;
        case 0x34a9ccu: goto label_34a9cc;
        case 0x34a9d0u: goto label_34a9d0;
        case 0x34a9d4u: goto label_34a9d4;
        case 0x34a9d8u: goto label_34a9d8;
        case 0x34a9dcu: goto label_34a9dc;
        case 0x34a9e0u: goto label_34a9e0;
        case 0x34a9e4u: goto label_34a9e4;
        case 0x34a9e8u: goto label_34a9e8;
        case 0x34a9ecu: goto label_34a9ec;
        case 0x34a9f0u: goto label_34a9f0;
        case 0x34a9f4u: goto label_34a9f4;
        case 0x34a9f8u: goto label_34a9f8;
        case 0x34a9fcu: goto label_34a9fc;
        case 0x34aa00u: goto label_34aa00;
        case 0x34aa04u: goto label_34aa04;
        case 0x34aa08u: goto label_34aa08;
        case 0x34aa0cu: goto label_34aa0c;
        case 0x34aa10u: goto label_34aa10;
        case 0x34aa14u: goto label_34aa14;
        case 0x34aa18u: goto label_34aa18;
        case 0x34aa1cu: goto label_34aa1c;
        case 0x34aa20u: goto label_34aa20;
        case 0x34aa24u: goto label_34aa24;
        case 0x34aa28u: goto label_34aa28;
        case 0x34aa2cu: goto label_34aa2c;
        case 0x34aa30u: goto label_34aa30;
        case 0x34aa34u: goto label_34aa34;
        case 0x34aa38u: goto label_34aa38;
        case 0x34aa3cu: goto label_34aa3c;
        case 0x34aa40u: goto label_34aa40;
        case 0x34aa44u: goto label_34aa44;
        case 0x34aa48u: goto label_34aa48;
        case 0x34aa4cu: goto label_34aa4c;
        case 0x34aa50u: goto label_34aa50;
        case 0x34aa54u: goto label_34aa54;
        case 0x34aa58u: goto label_34aa58;
        case 0x34aa5cu: goto label_34aa5c;
        case 0x34aa60u: goto label_34aa60;
        case 0x34aa64u: goto label_34aa64;
        case 0x34aa68u: goto label_34aa68;
        case 0x34aa6cu: goto label_34aa6c;
        case 0x34aa70u: goto label_34aa70;
        case 0x34aa74u: goto label_34aa74;
        case 0x34aa78u: goto label_34aa78;
        case 0x34aa7cu: goto label_34aa7c;
        case 0x34aa80u: goto label_34aa80;
        case 0x34aa84u: goto label_34aa84;
        case 0x34aa88u: goto label_34aa88;
        case 0x34aa8cu: goto label_34aa8c;
        case 0x34aa90u: goto label_34aa90;
        case 0x34aa94u: goto label_34aa94;
        case 0x34aa98u: goto label_34aa98;
        case 0x34aa9cu: goto label_34aa9c;
        case 0x34aaa0u: goto label_34aaa0;
        case 0x34aaa4u: goto label_34aaa4;
        case 0x34aaa8u: goto label_34aaa8;
        case 0x34aaacu: goto label_34aaac;
        case 0x34aab0u: goto label_34aab0;
        case 0x34aab4u: goto label_34aab4;
        case 0x34aab8u: goto label_34aab8;
        case 0x34aabcu: goto label_34aabc;
        case 0x34aac0u: goto label_34aac0;
        case 0x34aac4u: goto label_34aac4;
        case 0x34aac8u: goto label_34aac8;
        case 0x34aaccu: goto label_34aacc;
        case 0x34aad0u: goto label_34aad0;
        case 0x34aad4u: goto label_34aad4;
        case 0x34aad8u: goto label_34aad8;
        case 0x34aadcu: goto label_34aadc;
        case 0x34aae0u: goto label_34aae0;
        case 0x34aae4u: goto label_34aae4;
        case 0x34aae8u: goto label_34aae8;
        case 0x34aaecu: goto label_34aaec;
        default: break;
    }

    ctx->pc = 0x349920u;

label_349920:
    // 0x349920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x349920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_349924:
    // 0x349924: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x349924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_349928:
    // 0x349928: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x349928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_34992c:
    // 0x34992c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x34992cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_349930:
    // 0x349930: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x349930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_349934:
    // 0x349934: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_349938:
    // 0x349938: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x349938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34993c:
    // 0x34993c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_349940:
    // 0x349940: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x349940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_349944:
    // 0x349944: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x349944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_349948:
    // 0x349948: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x349948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_34994c:
    // 0x34994c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x34994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_349950:
    // 0x349950: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x349950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_349954:
    // 0x349954: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x349954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_349958:
    // 0x349958: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x349958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_34995c:
    // 0x34995c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x34995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349960:
    // 0x349960: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x349960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349964:
    // 0x349964: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x349964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_349968:
    // 0x349968: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x349968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_34996c:
    // 0x34996c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x34996cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_349970:
    // 0x349970: 0xc0a7a88  jal         func_29EA20
label_349974:
    if (ctx->pc == 0x349974u) {
        ctx->pc = 0x349974u;
            // 0x349974: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->pc = 0x349978u;
        goto label_349978;
    }
    ctx->pc = 0x349970u;
    SET_GPR_U32(ctx, 31, 0x349978u);
    ctx->pc = 0x349974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349970u;
            // 0x349974: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349978u; }
        if (ctx->pc != 0x349978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349978u; }
        if (ctx->pc != 0x349978u) { return; }
    }
    ctx->pc = 0x349978u;
label_349978:
    // 0x349978: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x349978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_34997c:
    // 0x34997c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34997cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_349980:
    // 0x349980: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_349984:
    if (ctx->pc == 0x349984u) {
        ctx->pc = 0x349984u;
            // 0x349984: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x349988u;
        goto label_349988;
    }
    ctx->pc = 0x349980u;
    {
        const bool branch_taken_0x349980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x349984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349980u;
            // 0x349984: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349980) {
            ctx->pc = 0x3499A0u;
            goto label_3499a0;
        }
    }
    ctx->pc = 0x349988u;
label_349988:
    // 0x349988: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x349988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_34998c:
    // 0x34998c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_349990:
    // 0x349990: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x349990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_349994:
    // 0x349994: 0xc0804bc  jal         func_2012F0
label_349998:
    if (ctx->pc == 0x349998u) {
        ctx->pc = 0x349998u;
            // 0x349998: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x34999Cu;
        goto label_34999c;
    }
    ctx->pc = 0x349994u;
    SET_GPR_U32(ctx, 31, 0x34999Cu);
    ctx->pc = 0x349998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349994u;
            // 0x349998: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34999Cu; }
        if (ctx->pc != 0x34999Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34999Cu; }
        if (ctx->pc != 0x34999Cu) { return; }
    }
    ctx->pc = 0x34999Cu;
label_34999c:
    // 0x34999c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34999cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3499a0:
    // 0x3499a0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3499a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3499a4:
    // 0x3499a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3499a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3499a8:
    // 0x3499a8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3499a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3499ac:
    // 0x3499ac: 0xc0d37ec  jal         func_34DFB0
label_3499b0:
    if (ctx->pc == 0x3499B0u) {
        ctx->pc = 0x3499B0u;
            // 0x3499b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3499B4u;
        goto label_3499b4;
    }
    ctx->pc = 0x3499ACu;
    SET_GPR_U32(ctx, 31, 0x3499B4u);
    ctx->pc = 0x3499B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3499ACu;
            // 0x3499b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3499B4u; }
        if (ctx->pc != 0x3499B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3499B4u; }
        if (ctx->pc != 0x3499B4u) { return; }
    }
    ctx->pc = 0x3499B4u;
label_3499b4:
    // 0x3499b4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x3499b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3499b8:
    // 0x3499b8: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_3499bc:
    if (ctx->pc == 0x3499BCu) {
        ctx->pc = 0x3499BCu;
            // 0x3499bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3499C0u;
        goto label_3499c0;
    }
    ctx->pc = 0x3499B8u;
    {
        const bool branch_taken_0x3499b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3499b8) {
            ctx->pc = 0x3499BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3499B8u;
            // 0x3499bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3499FCu;
            goto label_3499fc;
        }
    }
    ctx->pc = 0x3499C0u;
label_3499c0:
    // 0x3499c0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x3499c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_3499c4:
    // 0x3499c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3499c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3499c8:
    // 0x3499c8: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x3499c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_3499cc:
    // 0x3499cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3499ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3499d0:
    // 0x3499d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3499d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3499d4:
    // 0x3499d4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3499d8:
    if (ctx->pc == 0x3499D8u) {
        ctx->pc = 0x3499DCu;
        goto label_3499dc;
    }
    ctx->pc = 0x3499D4u;
    {
        const bool branch_taken_0x3499d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3499d4) {
            ctx->pc = 0x3499F8u;
            goto label_3499f8;
        }
    }
    ctx->pc = 0x3499DCu;
label_3499dc:
    // 0x3499dc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3499e0:
    if (ctx->pc == 0x3499E0u) {
        ctx->pc = 0x3499E4u;
        goto label_3499e4;
    }
    ctx->pc = 0x3499DCu;
    {
        const bool branch_taken_0x3499dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3499dc) {
            ctx->pc = 0x3499F8u;
            goto label_3499f8;
        }
    }
    ctx->pc = 0x3499E4u;
label_3499e4:
    // 0x3499e4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3499e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3499e8:
    // 0x3499e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3499e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3499ec:
    // 0x3499ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3499ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3499f0:
    // 0x3499f0: 0x320f809  jalr        $t9
label_3499f4:
    if (ctx->pc == 0x3499F4u) {
        ctx->pc = 0x3499F4u;
            // 0x3499f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3499F8u;
        goto label_3499f8;
    }
    ctx->pc = 0x3499F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3499F8u);
        ctx->pc = 0x3499F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3499F0u;
            // 0x3499f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3499F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3499F8u; }
            if (ctx->pc != 0x3499F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3499F8u;
label_3499f8:
    // 0x3499f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3499f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3499fc:
    // 0x3499fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3499fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_349a00:
    // 0x349a00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_349a04:
    // 0x349a04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_349a08:
    // 0x349a08: 0x3e00008  jr          $ra
label_349a0c:
    if (ctx->pc == 0x349A0Cu) {
        ctx->pc = 0x349A0Cu;
            // 0x349a0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x349A10u;
        goto label_349a10;
    }
    ctx->pc = 0x349A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349A08u;
            // 0x349a0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x349A10u;
label_349a10:
    // 0x349a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_349a14:
    // 0x349a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_349a18:
    // 0x349a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_349a1c:
    // 0x349a1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x349a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349a20:
    // 0x349a20: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_349a24:
    if (ctx->pc == 0x349A24u) {
        ctx->pc = 0x349A24u;
            // 0x349a24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349A28u;
        goto label_349a28;
    }
    ctx->pc = 0x349A20u;
    {
        const bool branch_taken_0x349a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x349a20) {
            ctx->pc = 0x349A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349A20u;
            // 0x349a24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349A60u;
            goto label_349a60;
        }
    }
    ctx->pc = 0x349A28u;
label_349a28:
    // 0x349a28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x349a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_349a2c:
    // 0x349a2c: 0x24425990  addiu       $v0, $v0, 0x5990
    ctx->pc = 0x349a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22928));
label_349a30:
    // 0x349a30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_349a34:
    if (ctx->pc == 0x349A34u) {
        ctx->pc = 0x349A34u;
            // 0x349a34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x349A38u;
        goto label_349a38;
    }
    ctx->pc = 0x349A30u;
    {
        const bool branch_taken_0x349a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x349A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349A30u;
            // 0x349a34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349a30) {
            ctx->pc = 0x349A44u;
            goto label_349a44;
        }
    }
    ctx->pc = 0x349A38u;
label_349a38:
    // 0x349a38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x349a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_349a3c:
    // 0x349a3c: 0x2442fb70  addiu       $v0, $v0, -0x490
    ctx->pc = 0x349a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966128));
label_349a40:
    // 0x349a40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x349a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_349a44:
    // 0x349a44: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x349a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_349a48:
    // 0x349a48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x349a48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_349a4c:
    // 0x349a4c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_349a50:
    if (ctx->pc == 0x349A50u) {
        ctx->pc = 0x349A54u;
        goto label_349a54;
    }
    ctx->pc = 0x349A4Cu;
    {
        const bool branch_taken_0x349a4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x349a4c) {
            ctx->pc = 0x349A5Cu;
            goto label_349a5c;
        }
    }
    ctx->pc = 0x349A54u;
label_349a54:
    // 0x349a54: 0xc0400a8  jal         func_1002A0
label_349a58:
    if (ctx->pc == 0x349A58u) {
        ctx->pc = 0x349A58u;
            // 0x349a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349A5Cu;
        goto label_349a5c;
    }
    ctx->pc = 0x349A54u;
    SET_GPR_U32(ctx, 31, 0x349A5Cu);
    ctx->pc = 0x349A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349A54u;
            // 0x349a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349A5Cu; }
        if (ctx->pc != 0x349A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349A5Cu; }
        if (ctx->pc != 0x349A5Cu) { return; }
    }
    ctx->pc = 0x349A5Cu;
label_349a5c:
    // 0x349a5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x349a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_349a60:
    // 0x349a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_349a64:
    // 0x349a64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_349a68:
    // 0x349a68: 0x3e00008  jr          $ra
label_349a6c:
    if (ctx->pc == 0x349A6Cu) {
        ctx->pc = 0x349A6Cu;
            // 0x349a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x349A70u;
        goto label_349a70;
    }
    ctx->pc = 0x349A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349A68u;
            // 0x349a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x349A70u;
label_349a70:
    // 0x349a70: 0x3e00008  jr          $ra
label_349a74:
    if (ctx->pc == 0x349A74u) {
        ctx->pc = 0x349A74u;
            // 0x349a74: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x349A78u;
        goto label_349a78;
    }
    ctx->pc = 0x349A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349A70u;
            // 0x349a74: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x349A78u;
label_349a78:
    // 0x349a78: 0x0  nop
    ctx->pc = 0x349a78u;
    // NOP
label_349a7c:
    // 0x349a7c: 0x0  nop
    ctx->pc = 0x349a7cu;
    // NOP
label_349a80:
    // 0x349a80: 0x3e00008  jr          $ra
label_349a84:
    if (ctx->pc == 0x349A84u) {
        ctx->pc = 0x349A88u;
        goto label_349a88;
    }
    ctx->pc = 0x349A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x349A88u;
label_349a88:
    // 0x349a88: 0x0  nop
    ctx->pc = 0x349a88u;
    // NOP
label_349a8c:
    // 0x349a8c: 0x0  nop
    ctx->pc = 0x349a8cu;
    // NOP
label_349a90:
    // 0x349a90: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x349a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_349a94:
    // 0x349a94: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x349a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_349a98:
    // 0x349a98: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x349a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_349a9c:
    // 0x349a9c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x349a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_349aa0:
    // 0x349aa0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x349aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349aa4:
    // 0x349aa4: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x349aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_349aa8:
    // 0x349aa8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x349aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_349aac:
    // 0x349aac: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x349aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
label_349ab0:
    // 0x349ab0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x349ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_349ab4:
    // 0x349ab4: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x349ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_349ab8:
    // 0x349ab8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x349ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_349abc:
    // 0x349abc: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x349abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
label_349ac0:
    // 0x349ac0: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x349ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349ac4:
    // 0x349ac4: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x349ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_349ac8:
    // 0x349ac8: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x349ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349acc:
    // 0x349acc: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x349accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_349ad0:
    // 0x349ad0: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x349ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349ad4:
    // 0x349ad4: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x349ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_349ad8:
    // 0x349ad8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x349ad8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_349adc:
    // 0x349adc: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x349adcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
label_349ae0:
    // 0x349ae0: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x349ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349ae4:
    // 0x349ae4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x349ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_349ae8:
    // 0x349ae8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x349ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_349aec:
    // 0x349aec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x349aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_349af0:
    // 0x349af0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x349af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_349af4:
    // 0x349af4: 0x3200008  jr          $t9
label_349af8:
    if (ctx->pc == 0x349AF8u) {
        ctx->pc = 0x349AFCu;
        goto label_349afc;
    }
    ctx->pc = 0x349AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x349AFCu;
label_349afc:
    // 0x349afc: 0x0  nop
    ctx->pc = 0x349afcu;
    // NOP
label_349b00:
    // 0x349b00: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x349b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_349b04:
    // 0x349b04: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x349b04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_349b08:
    // 0x349b08: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x349b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_349b0c:
    // 0x349b0c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x349b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_349b10:
    // 0x349b10: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x349b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349b14:
    // 0x349b14: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x349b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_349b18:
    // 0x349b18: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x349b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_349b1c:
    // 0x349b1c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x349b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_349b20:
    // 0x349b20: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x349b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_349b24:
    // 0x349b24: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x349b24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_349b28:
    // 0x349b28: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x349b28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_349b2c:
    // 0x349b2c: 0x3e00008  jr          $ra
label_349b30:
    if (ctx->pc == 0x349B30u) {
        ctx->pc = 0x349B30u;
            // 0x349b30: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x349B34u;
        goto label_349b34;
    }
    ctx->pc = 0x349B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349B2Cu;
            // 0x349b30: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x349B34u;
label_349b34:
    // 0x349b34: 0x0  nop
    ctx->pc = 0x349b34u;
    // NOP
label_349b38:
    // 0x349b38: 0x0  nop
    ctx->pc = 0x349b38u;
    // NOP
label_349b3c:
    // 0x349b3c: 0x0  nop
    ctx->pc = 0x349b3cu;
    // NOP
label_349b40:
    // 0x349b40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x349b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_349b44:
    // 0x349b44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x349b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_349b48:
    // 0x349b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_349b4c:
    // 0x349b4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x349b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_349b50:
    // 0x349b50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_349b54:
    // 0x349b54: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x349b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
label_349b58:
    // 0x349b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_349b5c:
    // 0x349b5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x349b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349b60:
    // 0x349b60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x349b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_349b64:
    // 0x349b64: 0x24639781  addiu       $v1, $v1, -0x687F
    ctx->pc = 0x349b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940545));
label_349b68:
    // 0x349b68: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x349b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_349b6c:
    // 0x349b6c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x349b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_349b70:
    // 0x349b70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x349b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_349b74:
    // 0x349b74: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x349b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_349b78:
    // 0x349b78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x349b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_349b7c:
    // 0x349b7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x349b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_349b80:
    // 0x349b80: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x349b80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_349b84:
    // 0x349b84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_349b88:
    if (ctx->pc == 0x349B88u) {
        ctx->pc = 0x349B88u;
            // 0x349b88: 0x80640000  lb          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x349B8Cu;
        goto label_349b8c;
    }
    ctx->pc = 0x349B84u;
    {
        const bool branch_taken_0x349b84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x349B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349B84u;
            // 0x349b88: 0x80640000  lb          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349b84) {
            ctx->pc = 0x349B98u;
            goto label_349b98;
        }
    }
    ctx->pc = 0x349B8Cu;
label_349b8c:
    // 0x349b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349b90:
    // 0x349b90: 0x10000008  b           . + 4 + (0x8 << 2)
label_349b94:
    if (ctx->pc == 0x349B94u) {
        ctx->pc = 0x349B94u;
            // 0x349b94: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x349B98u;
        goto label_349b98;
    }
    ctx->pc = 0x349B90u;
    {
        const bool branch_taken_0x349b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349B90u;
            // 0x349b94: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349b90) {
            ctx->pc = 0x349BB4u;
            goto label_349bb4;
        }
    }
    ctx->pc = 0x349B98u;
label_349b98:
    // 0x349b98: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x349b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_349b9c:
    // 0x349b9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x349b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_349ba0:
    // 0x349ba0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x349ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_349ba4:
    // 0x349ba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349ba8:
    // 0x349ba8: 0x0  nop
    ctx->pc = 0x349ba8u;
    // NOP
label_349bac:
    // 0x349bac: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x349bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_349bb0:
    // 0x349bb0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x349bb0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_349bb4:
    // 0x349bb4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x349bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349bb8:
    // 0x349bb8: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x349bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
label_349bbc:
    // 0x349bbc: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x349bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
label_349bc0:
    // 0x349bc0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x349bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_349bc4:
    // 0x349bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349bc8:
    // 0x349bc8: 0x0  nop
    ctx->pc = 0x349bc8u;
    // NOP
label_349bcc:
    // 0x349bcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x349bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_349bd0:
    // 0x349bd0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x349bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_349bd4:
    // 0x349bd4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x349bd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_349bd8:
    // 0x349bd8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x349bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_349bdc:
    // 0x349bdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349bdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_349be0:
    // 0x349be0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x349be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_349be4:
    // 0x349be4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_349be8:
    if (ctx->pc == 0x349BE8u) {
        ctx->pc = 0x349BE8u;
            // 0x349be8: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x349BECu;
        goto label_349bec;
    }
    ctx->pc = 0x349BE4u;
    {
        const bool branch_taken_0x349be4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x349BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349BE4u;
            // 0x349be8: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349be4) {
            ctx->pc = 0x349BF8u;
            goto label_349bf8;
        }
    }
    ctx->pc = 0x349BECu;
label_349bec:
    // 0x349bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349bf0:
    // 0x349bf0: 0x10000008  b           . + 4 + (0x8 << 2)
label_349bf4:
    if (ctx->pc == 0x349BF4u) {
        ctx->pc = 0x349BF4u;
            // 0x349bf4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x349BF8u;
        goto label_349bf8;
    }
    ctx->pc = 0x349BF0u;
    {
        const bool branch_taken_0x349bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349BF0u;
            // 0x349bf4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349bf0) {
            ctx->pc = 0x349C14u;
            goto label_349c14;
        }
    }
    ctx->pc = 0x349BF8u;
label_349bf8:
    // 0x349bf8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x349bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_349bfc:
    // 0x349bfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x349bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_349c00:
    // 0x349c00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x349c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_349c04:
    // 0x349c04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349c04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349c08:
    // 0x349c08: 0x0  nop
    ctx->pc = 0x349c08u;
    // NOP
label_349c0c:
    // 0x349c0c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x349c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_349c10:
    // 0x349c10: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x349c10u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_349c14:
    // 0x349c14: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x349c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349c18:
    // 0x349c18: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x349c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_349c1c:
    // 0x349c1c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x349c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_349c20:
    // 0x349c20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349c24:
    // 0x349c24: 0x0  nop
    ctx->pc = 0x349c24u;
    // NOP
label_349c28:
    // 0x349c28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x349c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_349c2c:
    // 0x349c2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x349c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_349c30:
    // 0x349c30: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x349c30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_349c34:
    // 0x349c34: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x349c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_349c38:
    // 0x349c38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349c38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_349c3c:
    // 0x349c3c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x349c3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_349c40:
    // 0x349c40: 0x0  nop
    ctx->pc = 0x349c40u;
    // NOP
label_349c44:
    // 0x349c44: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x349c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_349c48:
    // 0x349c48: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x349c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_349c4c:
    // 0x349c4c: 0xc62d0028  lwc1        $f13, 0x28($s1)
    ctx->pc = 0x349c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_349c50:
    // 0x349c50: 0xc62e002c  lwc1        $f14, 0x2C($s1)
    ctx->pc = 0x349c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_349c54:
    // 0x349c54: 0xc04cbd8  jal         func_132F60
label_349c58:
    if (ctx->pc == 0x349C58u) {
        ctx->pc = 0x349C58u;
            // 0x349c58: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x349C5Cu;
        goto label_349c5c;
    }
    ctx->pc = 0x349C54u;
    SET_GPR_U32(ctx, 31, 0x349C5Cu);
    ctx->pc = 0x349C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349C54u;
            // 0x349c58: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349C5Cu; }
        if (ctx->pc != 0x349C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349C5Cu; }
        if (ctx->pc != 0x349C5Cu) { return; }
    }
    ctx->pc = 0x349C5Cu;
label_349c5c:
    // 0x349c5c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x349c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349c60:
    // 0x349c60: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x349c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
label_349c64:
    // 0x349c64: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x349c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_349c68:
    // 0x349c68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x349c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_349c6c:
    // 0x349c6c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x349c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_349c70:
    // 0x349c70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x349c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_349c74:
    // 0x349c74: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x349c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_349c78:
    // 0x349c78: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x349c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_349c7c:
    // 0x349c7c: 0x0  nop
    ctx->pc = 0x349c7cu;
    // NOP
label_349c80:
    // 0x349c80: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x349c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_349c84:
    // 0x349c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x349c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_349c88:
    // 0x349c88: 0x0  nop
    ctx->pc = 0x349c88u;
    // NOP
label_349c8c:
    // 0x349c8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x349c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_349c90:
    // 0x349c90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349c90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_349c94:
    // 0x349c94: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x349c94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_349c98:
    // 0x349c98: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x349c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349c9c:
    // 0x349c9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x349c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_349ca0:
    // 0x349ca0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x349ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_349ca4:
    // 0x349ca4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x349ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_349ca8:
    // 0x349ca8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349ca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_349cac:
    // 0x349cac: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x349cacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_349cb0:
    // 0x349cb0: 0xc04cab0  jal         func_132AC0
label_349cb4:
    if (ctx->pc == 0x349CB4u) {
        ctx->pc = 0x349CB4u;
            // 0x349cb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349CB8u;
        goto label_349cb8;
    }
    ctx->pc = 0x349CB0u;
    SET_GPR_U32(ctx, 31, 0x349CB8u);
    ctx->pc = 0x349CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349CB0u;
            // 0x349cb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349CB8u; }
        if (ctx->pc != 0x349CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349CB8u; }
        if (ctx->pc != 0x349CB8u) { return; }
    }
    ctx->pc = 0x349CB8u;
label_349cb8:
    // 0x349cb8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x349cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349cbc:
    // 0x349cbc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x349cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_349cc0:
    // 0x349cc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x349cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_349cc4:
    // 0x349cc4: 0x0  nop
    ctx->pc = 0x349cc4u;
    // NOP
label_349cc8:
    // 0x349cc8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x349cc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_349ccc:
    // 0x349ccc: 0xc04cbd8  jal         func_132F60
label_349cd0:
    if (ctx->pc == 0x349CD0u) {
        ctx->pc = 0x349CD0u;
            // 0x349cd0: 0x46000387  neg.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x349CD4u;
        goto label_349cd4;
    }
    ctx->pc = 0x349CCCu;
    SET_GPR_U32(ctx, 31, 0x349CD4u);
    ctx->pc = 0x349CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349CCCu;
            // 0x349cd0: 0x46000387  neg.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349CD4u; }
        if (ctx->pc != 0x349CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349CD4u; }
        if (ctx->pc != 0x349CD4u) { return; }
    }
    ctx->pc = 0x349CD4u;
label_349cd4:
    // 0x349cd4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x349cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_349cd8:
    // 0x349cd8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x349cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_349cdc:
    // 0x349cdc: 0xc04cd80  jal         func_133600
label_349ce0:
    if (ctx->pc == 0x349CE0u) {
        ctx->pc = 0x349CE0u;
            // 0x349ce0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x349CE4u;
        goto label_349ce4;
    }
    ctx->pc = 0x349CDCu;
    SET_GPR_U32(ctx, 31, 0x349CE4u);
    ctx->pc = 0x349CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349CDCu;
            // 0x349ce0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349CE4u; }
        if (ctx->pc != 0x349CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349CE4u; }
        if (ctx->pc != 0x349CE4u) { return; }
    }
    ctx->pc = 0x349CE4u;
label_349ce4:
    // 0x349ce4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x349ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_349ce8:
    // 0x349ce8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x349ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_349cec:
    // 0x349cec: 0xc04cca0  jal         func_133280
label_349cf0:
    if (ctx->pc == 0x349CF0u) {
        ctx->pc = 0x349CF0u;
            // 0x349cf0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349CF4u;
        goto label_349cf4;
    }
    ctx->pc = 0x349CECu;
    SET_GPR_U32(ctx, 31, 0x349CF4u);
    ctx->pc = 0x349CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349CECu;
            // 0x349cf0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349CF4u; }
        if (ctx->pc != 0x349CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349CF4u; }
        if (ctx->pc != 0x349CF4u) { return; }
    }
    ctx->pc = 0x349CF4u;
label_349cf4:
    // 0x349cf4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x349cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_349cf8:
    // 0x349cf8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x349cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_349cfc:
    // 0x349cfc: 0xc04cbe0  jal         func_132F80
label_349d00:
    if (ctx->pc == 0x349D00u) {
        ctx->pc = 0x349D00u;
            // 0x349d00: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x349D04u;
        goto label_349d04;
    }
    ctx->pc = 0x349CFCu;
    SET_GPR_U32(ctx, 31, 0x349D04u);
    ctx->pc = 0x349D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349CFCu;
            // 0x349d00: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349D04u; }
        if (ctx->pc != 0x349D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349D04u; }
        if (ctx->pc != 0x349D04u) { return; }
    }
    ctx->pc = 0x349D04u;
label_349d04:
    // 0x349d04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x349d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_349d08:
    // 0x349d08: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x349d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_349d0c:
    // 0x349d0c: 0xc04cca0  jal         func_133280
label_349d10:
    if (ctx->pc == 0x349D10u) {
        ctx->pc = 0x349D10u;
            // 0x349d10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349D14u;
        goto label_349d14;
    }
    ctx->pc = 0x349D0Cu;
    SET_GPR_U32(ctx, 31, 0x349D14u);
    ctx->pc = 0x349D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349D0Cu;
            // 0x349d10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349D14u; }
        if (ctx->pc != 0x349D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349D14u; }
        if (ctx->pc != 0x349D14u) { return; }
    }
    ctx->pc = 0x349D14u;
label_349d14:
    // 0x349d14: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x349d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_349d18:
    // 0x349d18: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_349d1c:
    if (ctx->pc == 0x349D1Cu) {
        ctx->pc = 0x349D1Cu;
            // 0x349d1c: 0x24022aaa  addiu       $v0, $zero, 0x2AAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10922));
        ctx->pc = 0x349D20u;
        goto label_349d20;
    }
    ctx->pc = 0x349D18u;
    {
        const bool branch_taken_0x349d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349d18) {
            ctx->pc = 0x349D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349D18u;
            // 0x349d1c: 0x24022aaa  addiu       $v0, $zero, 0x2AAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10922));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349D28u;
            goto label_349d28;
        }
    }
    ctx->pc = 0x349D20u;
label_349d20:
    // 0x349d20: 0x10000002  b           . + 4 + (0x2 << 2)
label_349d24:
    if (ctx->pc == 0x349D24u) {
        ctx->pc = 0x349D24u;
            // 0x349d24: 0xae020194  sw          $v0, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
        ctx->pc = 0x349D28u;
        goto label_349d28;
    }
    ctx->pc = 0x349D20u;
    {
        const bool branch_taken_0x349d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349D20u;
            // 0x349d24: 0xae020194  sw          $v0, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349d20) {
            ctx->pc = 0x349D2Cu;
            goto label_349d2c;
        }
    }
    ctx->pc = 0x349D28u;
label_349d28:
    // 0x349d28: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x349d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
label_349d2c:
    // 0x349d2c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x349d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349d30:
    // 0x349d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349d34:
    // 0x349d34: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x349d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_349d38:
    // 0x349d38: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x349d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349d3c:
    // 0x349d3c: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x349d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_349d40:
    // 0x349d40: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x349d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349d44:
    // 0x349d44: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x349d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
label_349d48:
    // 0x349d48: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x349d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_349d4c:
    // 0x349d4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x349d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349d50:
    // 0x349d50: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x349d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_349d54:
    // 0x349d54: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x349d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349d58:
    // 0x349d58: 0xe60001b4  swc1        $f0, 0x1B4($s0)
    ctx->pc = 0x349d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
label_349d5c:
    // 0x349d5c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x349d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349d60:
    // 0x349d60: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x349d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_349d64:
    // 0x349d64: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x349d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349d68:
    // 0x349d68: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x349d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
label_349d6c:
    // 0x349d6c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x349d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349d70:
    // 0x349d70: 0xe60001c0  swc1        $f0, 0x1C0($s0)
    ctx->pc = 0x349d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 448), bits); }
label_349d74:
    // 0x349d74: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x349d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349d78:
    // 0x349d78: 0xc0a9388  jal         func_2A4E20
label_349d7c:
    if (ctx->pc == 0x349D7Cu) {
        ctx->pc = 0x349D7Cu;
            // 0x349d7c: 0xe60001c4  swc1        $f0, 0x1C4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
        ctx->pc = 0x349D80u;
        goto label_349d80;
    }
    ctx->pc = 0x349D78u;
    SET_GPR_U32(ctx, 31, 0x349D80u);
    ctx->pc = 0x349D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349D78u;
            // 0x349d7c: 0xe60001c4  swc1        $f0, 0x1C4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4E20u;
    if (runtime->hasFunction(0x2A4E20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349D80u; }
        if (ctx->pc != 0x349D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4E20_0x2a4e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349D80u; }
        if (ctx->pc != 0x349D80u) { return; }
    }
    ctx->pc = 0x349D80u;
label_349d80:
    // 0x349d80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x349d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_349d84:
    // 0x349d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_349d88:
    // 0x349d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_349d8c:
    // 0x349d8c: 0x3e00008  jr          $ra
label_349d90:
    if (ctx->pc == 0x349D90u) {
        ctx->pc = 0x349D90u;
            // 0x349d90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x349D94u;
        goto label_349d94;
    }
    ctx->pc = 0x349D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349D8Cu;
            // 0x349d90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x349D94u;
label_349d94:
    // 0x349d94: 0x0  nop
    ctx->pc = 0x349d94u;
    // NOP
label_349d98:
    // 0x349d98: 0x0  nop
    ctx->pc = 0x349d98u;
    // NOP
label_349d9c:
    // 0x349d9c: 0x0  nop
    ctx->pc = 0x349d9cu;
    // NOP
label_349da0:
    // 0x349da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_349da4:
    // 0x349da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_349da8:
    // 0x349da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_349dac:
    // 0x349dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_349db0:
    // 0x349db0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x349db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349db4:
    // 0x349db4: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_349db8:
    if (ctx->pc == 0x349DB8u) {
        ctx->pc = 0x349DB8u;
            // 0x349db8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349DBCu;
        goto label_349dbc;
    }
    ctx->pc = 0x349DB4u;
    {
        const bool branch_taken_0x349db4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x349DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349DB4u;
            // 0x349db8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349db4) {
            ctx->pc = 0x349E28u;
            goto label_349e28;
        }
    }
    ctx->pc = 0x349DBCu;
label_349dbc:
    // 0x349dbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x349dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_349dc0:
    // 0x349dc0: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x349dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
label_349dc4:
    // 0x349dc4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_349dc8:
    if (ctx->pc == 0x349DC8u) {
        ctx->pc = 0x349DC8u;
            // 0x349dc8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x349DCCu;
        goto label_349dcc;
    }
    ctx->pc = 0x349DC4u;
    {
        const bool branch_taken_0x349dc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x349DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349DC4u;
            // 0x349dc8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349dc4) {
            ctx->pc = 0x349E10u;
            goto label_349e10;
        }
    }
    ctx->pc = 0x349DCCu;
label_349dcc:
    // 0x349dcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x349dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_349dd0:
    // 0x349dd0: 0x244257b0  addiu       $v0, $v0, 0x57B0
    ctx->pc = 0x349dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22448));
label_349dd4:
    // 0x349dd4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_349dd8:
    if (ctx->pc == 0x349DD8u) {
        ctx->pc = 0x349DD8u;
            // 0x349dd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x349DDCu;
        goto label_349ddc;
    }
    ctx->pc = 0x349DD4u;
    {
        const bool branch_taken_0x349dd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x349DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349DD4u;
            // 0x349dd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349dd4) {
            ctx->pc = 0x349E10u;
            goto label_349e10;
        }
    }
    ctx->pc = 0x349DDCu;
label_349ddc:
    // 0x349ddc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x349ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_349de0:
    // 0x349de0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x349de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_349de4:
    // 0x349de4: 0xc0d37dc  jal         func_34DF70
label_349de8:
    if (ctx->pc == 0x349DE8u) {
        ctx->pc = 0x349DE8u;
            // 0x349de8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x349DECu;
        goto label_349dec;
    }
    ctx->pc = 0x349DE4u;
    SET_GPR_U32(ctx, 31, 0x349DECu);
    ctx->pc = 0x349DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349DE4u;
            // 0x349de8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349DECu; }
        if (ctx->pc != 0x349DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349DECu; }
        if (ctx->pc != 0x349DECu) { return; }
    }
    ctx->pc = 0x349DECu;
label_349dec:
    // 0x349dec: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_349df0:
    if (ctx->pc == 0x349DF0u) {
        ctx->pc = 0x349DF0u;
            // 0x349df0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x349DF4u;
        goto label_349df4;
    }
    ctx->pc = 0x349DECu;
    {
        const bool branch_taken_0x349dec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x349dec) {
            ctx->pc = 0x349DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349DECu;
            // 0x349df0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349E14u;
            goto label_349e14;
        }
    }
    ctx->pc = 0x349DF4u;
label_349df4:
    // 0x349df4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x349df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_349df8:
    // 0x349df8: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x349df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_349dfc:
    // 0x349dfc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_349e00:
    if (ctx->pc == 0x349E00u) {
        ctx->pc = 0x349E00u;
            // 0x349e00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x349E04u;
        goto label_349e04;
    }
    ctx->pc = 0x349DFCu;
    {
        const bool branch_taken_0x349dfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349DFCu;
            // 0x349e00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349dfc) {
            ctx->pc = 0x349E10u;
            goto label_349e10;
        }
    }
    ctx->pc = 0x349E04u;
label_349e04:
    // 0x349e04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x349e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_349e08:
    // 0x349e08: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x349e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_349e0c:
    // 0x349e0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x349e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_349e10:
    // 0x349e10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x349e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_349e14:
    // 0x349e14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x349e14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_349e18:
    // 0x349e18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_349e1c:
    if (ctx->pc == 0x349E1Cu) {
        ctx->pc = 0x349E1Cu;
            // 0x349e1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349E20u;
        goto label_349e20;
    }
    ctx->pc = 0x349E18u;
    {
        const bool branch_taken_0x349e18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x349e18) {
            ctx->pc = 0x349E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349E18u;
            // 0x349e1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349E2Cu;
            goto label_349e2c;
        }
    }
    ctx->pc = 0x349E20u;
label_349e20:
    // 0x349e20: 0xc0400a8  jal         func_1002A0
label_349e24:
    if (ctx->pc == 0x349E24u) {
        ctx->pc = 0x349E24u;
            // 0x349e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349E28u;
        goto label_349e28;
    }
    ctx->pc = 0x349E20u;
    SET_GPR_U32(ctx, 31, 0x349E28u);
    ctx->pc = 0x349E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349E20u;
            // 0x349e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349E28u; }
        if (ctx->pc != 0x349E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349E28u; }
        if (ctx->pc != 0x349E28u) { return; }
    }
    ctx->pc = 0x349E28u;
label_349e28:
    // 0x349e28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x349e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349e2c:
    // 0x349e2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x349e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_349e30:
    // 0x349e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_349e34:
    // 0x349e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_349e38:
    // 0x349e38: 0x3e00008  jr          $ra
label_349e3c:
    if (ctx->pc == 0x349E3Cu) {
        ctx->pc = 0x349E3Cu;
            // 0x349e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x349E40u;
        goto label_349e40;
    }
    ctx->pc = 0x349E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349E38u;
            // 0x349e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x349E40u;
label_349e40:
    // 0x349e40: 0x3e00008  jr          $ra
label_349e44:
    if (ctx->pc == 0x349E44u) {
        ctx->pc = 0x349E48u;
        goto label_349e48;
    }
    ctx->pc = 0x349E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x349E48u;
label_349e48:
    // 0x349e48: 0x0  nop
    ctx->pc = 0x349e48u;
    // NOP
label_349e4c:
    // 0x349e4c: 0x0  nop
    ctx->pc = 0x349e4cu;
    // NOP
label_349e50:
    // 0x349e50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x349e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_349e54:
    // 0x349e54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x349e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_349e58:
    // 0x349e58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x349e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_349e5c:
    // 0x349e5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x349e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_349e60:
    // 0x349e60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x349e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_349e64:
    // 0x349e64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x349e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_349e68:
    // 0x349e68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x349e68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_349e6c:
    // 0x349e6c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x349e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_349e70:
    // 0x349e70: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x349e70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_349e74:
    // 0x349e74: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x349e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_349e78:
    // 0x349e78: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x349e78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_349e7c:
    // 0x349e7c: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
label_349e80:
    if (ctx->pc == 0x349E80u) {
        ctx->pc = 0x349E80u;
            // 0x349e80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349E84u;
        goto label_349e84;
    }
    ctx->pc = 0x349E7Cu;
    {
        const bool branch_taken_0x349e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349E7Cu;
            // 0x349e80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e7c) {
            ctx->pc = 0x34A068u;
            goto label_34a068;
        }
    }
    ctx->pc = 0x349E84u;
label_349e84:
    // 0x349e84: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x349e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_349e88:
    // 0x349e88: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x349e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_349e8c:
    // 0x349e8c: 0x50830077  beql        $a0, $v1, . + 4 + (0x77 << 2)
label_349e90:
    if (ctx->pc == 0x349E90u) {
        ctx->pc = 0x349E90u;
            // 0x349e90: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x349E94u;
        goto label_349e94;
    }
    ctx->pc = 0x349E8Cu;
    {
        const bool branch_taken_0x349e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x349e8c) {
            ctx->pc = 0x349E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349E8Cu;
            // 0x349e90: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A06Cu;
            goto label_34a06c;
        }
    }
    ctx->pc = 0x349E94u;
label_349e94:
    // 0x349e94: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x349e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_349e98:
    // 0x349e98: 0x10830073  beq         $a0, $v1, . + 4 + (0x73 << 2)
label_349e9c:
    if (ctx->pc == 0x349E9Cu) {
        ctx->pc = 0x349EA0u;
        goto label_349ea0;
    }
    ctx->pc = 0x349E98u;
    {
        const bool branch_taken_0x349e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x349e98) {
            ctx->pc = 0x34A068u;
            goto label_34a068;
        }
    }
    ctx->pc = 0x349EA0u;
label_349ea0:
    // 0x349ea0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x349ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_349ea4:
    // 0x349ea4: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
label_349ea8:
    if (ctx->pc == 0x349EA8u) {
        ctx->pc = 0x349EACu;
        goto label_349eac;
    }
    ctx->pc = 0x349EA4u;
    {
        const bool branch_taken_0x349ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x349ea4) {
            ctx->pc = 0x34A068u;
            goto label_34a068;
        }
    }
    ctx->pc = 0x349EACu;
label_349eac:
    // 0x349eac: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x349eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_349eb0:
    // 0x349eb0: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_349eb4:
    if (ctx->pc == 0x349EB4u) {
        ctx->pc = 0x349EB4u;
            // 0x349eb4: 0x90a30002  lbu         $v1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->pc = 0x349EB8u;
        goto label_349eb8;
    }
    ctx->pc = 0x349EB0u;
    {
        const bool branch_taken_0x349eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x349eb0) {
            ctx->pc = 0x349EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349EB0u;
            // 0x349eb4: 0x90a30002  lbu         $v1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349EC4u;
            goto label_349ec4;
        }
    }
    ctx->pc = 0x349EB8u;
label_349eb8:
    // 0x349eb8: 0x1000006b  b           . + 4 + (0x6B << 2)
label_349ebc:
    if (ctx->pc == 0x349EBCu) {
        ctx->pc = 0x349EC0u;
        goto label_349ec0;
    }
    ctx->pc = 0x349EB8u;
    {
        const bool branch_taken_0x349eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349eb8) {
            ctx->pc = 0x34A068u;
            goto label_34a068;
        }
    }
    ctx->pc = 0x349EC0u;
label_349ec0:
    // 0x349ec0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x349ec0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_349ec4:
    // 0x349ec4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x349ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_349ec8:
    // 0x349ec8: 0xa3a3006f  sb          $v1, 0x6F($sp)
    ctx->pc = 0x349ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 3));
label_349ecc:
    // 0x349ecc: 0x8e25069c  lw          $a1, 0x69C($s1)
    ctx->pc = 0x349eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_349ed0:
    // 0x349ed0: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
label_349ed4:
    if (ctx->pc == 0x349ED4u) {
        ctx->pc = 0x349ED4u;
            // 0x349ed4: 0x263005f0  addiu       $s0, $s1, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1520));
        ctx->pc = 0x349ED8u;
        goto label_349ed8;
    }
    ctx->pc = 0x349ED0u;
    {
        const bool branch_taken_0x349ed0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x349ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349ED0u;
            // 0x349ed4: 0x263005f0  addiu       $s0, $s1, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ed0) {
            ctx->pc = 0x349EE8u;
            goto label_349ee8;
        }
    }
    ctx->pc = 0x349ED8u;
label_349ed8:
    // 0x349ed8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x349ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_349edc:
    // 0x349edc: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x349edcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
label_349ee0:
    // 0x349ee0: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
label_349ee4:
    if (ctx->pc == 0x349EE4u) {
        ctx->pc = 0x349EE8u;
        goto label_349ee8;
    }
    ctx->pc = 0x349EE0u;
    {
        const bool branch_taken_0x349ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x349ee0) {
            ctx->pc = 0x34A068u;
            goto label_34a068;
        }
    }
    ctx->pc = 0x349EE8u;
label_349ee8:
    // 0x349ee8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x349ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_349eec:
    // 0x349eec: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x349eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_349ef0:
    // 0x349ef0: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x349ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_349ef4:
    // 0x349ef4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x349ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_349ef8:
    // 0x349ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x349ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_349efc:
    // 0x349efc: 0x262602c0  addiu       $a2, $s1, 0x2C0
    ctx->pc = 0x349efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_349f00:
    // 0x349f00: 0x26270820  addiu       $a3, $s1, 0x820
    ctx->pc = 0x349f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_349f04:
    // 0x349f04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x349f04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349f08:
    // 0x349f08: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x349f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_349f0c:
    // 0x349f0c: 0x27a9006f  addiu       $t1, $sp, 0x6F
    ctx->pc = 0x349f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
label_349f10:
    // 0x349f10: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x349f10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349f14:
    // 0x349f14: 0xc0b8704  jal         func_2E1C10
label_349f18:
    if (ctx->pc == 0x349F18u) {
        ctx->pc = 0x349F18u;
            // 0x349f18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349F1Cu;
        goto label_349f1c;
    }
    ctx->pc = 0x349F14u;
    SET_GPR_U32(ctx, 31, 0x349F1Cu);
    ctx->pc = 0x349F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349F14u;
            // 0x349f18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F1Cu; }
        if (ctx->pc != 0x349F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F1Cu; }
        if (ctx->pc != 0x349F1Cu) { return; }
    }
    ctx->pc = 0x349F1Cu;
label_349f1c:
    // 0x349f1c: 0x96030056  lhu         $v1, 0x56($s0)
    ctx->pc = 0x349f1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
label_349f20:
    // 0x349f20: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
label_349f24:
    if (ctx->pc == 0x349F24u) {
        ctx->pc = 0x349F28u;
        goto label_349f28;
    }
    ctx->pc = 0x349F20u;
    {
        const bool branch_taken_0x349f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349f20) {
            ctx->pc = 0x34A068u;
            goto label_34a068;
        }
    }
    ctx->pc = 0x349F28u;
label_349f28:
    // 0x349f28: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x349f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_349f2c:
    // 0x349f2c: 0xc0ab808  jal         func_2AE020
label_349f30:
    if (ctx->pc == 0x349F30u) {
        ctx->pc = 0x349F30u;
            // 0x349f30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x349F34u;
        goto label_349f34;
    }
    ctx->pc = 0x349F2Cu;
    SET_GPR_U32(ctx, 31, 0x349F34u);
    ctx->pc = 0x349F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349F2Cu;
            // 0x349f30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F34u; }
        if (ctx->pc != 0x349F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F34u; }
        if (ctx->pc != 0x349F34u) { return; }
    }
    ctx->pc = 0x349F34u;
label_349f34:
    // 0x349f34: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x349f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_349f38:
    // 0x349f38: 0xc04cc04  jal         func_133010
label_349f3c:
    if (ctx->pc == 0x349F3Cu) {
        ctx->pc = 0x349F3Cu;
            // 0x349f3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349F40u;
        goto label_349f40;
    }
    ctx->pc = 0x349F38u;
    SET_GPR_U32(ctx, 31, 0x349F40u);
    ctx->pc = 0x349F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349F38u;
            // 0x349f3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F40u; }
        if (ctx->pc != 0x349F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F40u; }
        if (ctx->pc != 0x349F40u) { return; }
    }
    ctx->pc = 0x349F40u;
label_349f40:
    // 0x349f40: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x349f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_349f44:
    // 0x349f44: 0xc075318  jal         func_1D4C60
label_349f48:
    if (ctx->pc == 0x349F48u) {
        ctx->pc = 0x349F48u;
            // 0x349f48: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x349F4Cu;
        goto label_349f4c;
    }
    ctx->pc = 0x349F44u;
    SET_GPR_U32(ctx, 31, 0x349F4Cu);
    ctx->pc = 0x349F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349F44u;
            // 0x349f48: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F4Cu; }
        if (ctx->pc != 0x349F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F4Cu; }
        if (ctx->pc != 0x349F4Cu) { return; }
    }
    ctx->pc = 0x349F4Cu;
label_349f4c:
    // 0x349f4c: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x349f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_349f50:
    // 0x349f50: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x349f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_349f54:
    // 0x349f54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x349f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_349f58:
    // 0x349f58: 0xc0c6250  jal         func_318940
label_349f5c:
    if (ctx->pc == 0x349F5Cu) {
        ctx->pc = 0x349F5Cu;
            // 0x349f5c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349F60u;
        goto label_349f60;
    }
    ctx->pc = 0x349F58u;
    SET_GPR_U32(ctx, 31, 0x349F60u);
    ctx->pc = 0x349F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349F58u;
            // 0x349f5c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F60u; }
        if (ctx->pc != 0x349F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F60u; }
        if (ctx->pc != 0x349F60u) { return; }
    }
    ctx->pc = 0x349F60u;
label_349f60:
    // 0x349f60: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x349f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_349f64:
    // 0x349f64: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x349f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_349f68:
    // 0x349f68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x349f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_349f6c:
    // 0x349f6c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x349f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_349f70:
    // 0x349f70: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x349f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_349f74:
    // 0x349f74: 0xc0c6250  jal         func_318940
label_349f78:
    if (ctx->pc == 0x349F78u) {
        ctx->pc = 0x349F78u;
            // 0x349f78: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x349F7Cu;
        goto label_349f7c;
    }
    ctx->pc = 0x349F74u;
    SET_GPR_U32(ctx, 31, 0x349F7Cu);
    ctx->pc = 0x349F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349F74u;
            // 0x349f78: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F7Cu; }
        if (ctx->pc != 0x349F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F7Cu; }
        if (ctx->pc != 0x349F7Cu) { return; }
    }
    ctx->pc = 0x349F7Cu;
label_349f7c:
    // 0x349f7c: 0xc0b9210  jal         func_2E4840
label_349f80:
    if (ctx->pc == 0x349F80u) {
        ctx->pc = 0x349F80u;
            // 0x349f80: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x349F84u;
        goto label_349f84;
    }
    ctx->pc = 0x349F7Cu;
    SET_GPR_U32(ctx, 31, 0x349F84u);
    ctx->pc = 0x349F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349F7Cu;
            // 0x349f80: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F84u; }
        if (ctx->pc != 0x349F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F84u; }
        if (ctx->pc != 0x349F84u) { return; }
    }
    ctx->pc = 0x349F84u;
label_349f84:
    // 0x349f84: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x349f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_349f88:
    // 0x349f88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349f8c:
    // 0x349f8c: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x349f8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_349f90:
    // 0x349f90: 0x5483002f  bnel        $a0, $v1, . + 4 + (0x2F << 2)
label_349f94:
    if (ctx->pc == 0x349F94u) {
        ctx->pc = 0x349F94u;
            // 0x349f94: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x349F98u;
        goto label_349f98;
    }
    ctx->pc = 0x349F90u;
    {
        const bool branch_taken_0x349f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x349f90) {
            ctx->pc = 0x349F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349F90u;
            // 0x349f94: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A050u;
            goto label_34a050;
        }
    }
    ctx->pc = 0x349F98u;
label_349f98:
    // 0x349f98: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x349f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_349f9c:
    // 0x349f9c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x349f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_349fa0:
    // 0x349fa0: 0x96060052  lhu         $a2, 0x52($s0)
    ctx->pc = 0x349fa0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
label_349fa4:
    // 0x349fa4: 0x96030050  lhu         $v1, 0x50($s0)
    ctx->pc = 0x349fa4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_349fa8:
    // 0x349fa8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x349fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_349fac:
    // 0x349fac: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x349facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_349fb0:
    // 0x349fb0: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x349fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_349fb4:
    // 0x349fb4: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x349fb4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_349fb8:
    // 0x349fb8: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x349fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_349fbc:
    // 0x349fbc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x349fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_349fc0:
    // 0x349fc0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x349fc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_349fc4:
    // 0x349fc4: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x349fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_349fc8:
    // 0x349fc8: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x349fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_349fcc:
    // 0x349fcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x349fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_349fd0:
    // 0x349fd0: 0xc04cc90  jal         func_133240
label_349fd4:
    if (ctx->pc == 0x349FD4u) {
        ctx->pc = 0x349FD4u;
            // 0x349fd4: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x349FD8u;
        goto label_349fd8;
    }
    ctx->pc = 0x349FD0u;
    SET_GPR_U32(ctx, 31, 0x349FD8u);
    ctx->pc = 0x349FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349FD0u;
            // 0x349fd4: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349FD8u; }
        if (ctx->pc != 0x349FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349FD8u; }
        if (ctx->pc != 0x349FD8u) { return; }
    }
    ctx->pc = 0x349FD8u;
label_349fd8:
    // 0x349fd8: 0x96030056  lhu         $v1, 0x56($s0)
    ctx->pc = 0x349fd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
label_349fdc:
    // 0x349fdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x349fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_349fe0:
    // 0x349fe0: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_349fe4:
    if (ctx->pc == 0x349FE4u) {
        ctx->pc = 0x349FE4u;
            // 0x349fe4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x349FE8u;
        goto label_349fe8;
    }
    ctx->pc = 0x349FE0u;
    {
        const bool branch_taken_0x349fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x349fe0) {
            ctx->pc = 0x349FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349FE0u;
            // 0x349fe4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A000u;
            goto label_34a000;
        }
    }
    ctx->pc = 0x349FE8u;
label_349fe8:
    // 0x349fe8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x349fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_349fec:
    // 0x349fec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x349fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_349ff0:
    // 0x349ff0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x349ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_349ff4:
    // 0x349ff4: 0xc04cc70  jal         func_1331C0
label_349ff8:
    if (ctx->pc == 0x349FF8u) {
        ctx->pc = 0x349FF8u;
            // 0x349ff8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349FFCu;
        goto label_349ffc;
    }
    ctx->pc = 0x349FF4u;
    SET_GPR_U32(ctx, 31, 0x349FFCu);
    ctx->pc = 0x349FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349FF4u;
            // 0x349ff8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349FFCu; }
        if (ctx->pc != 0x349FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349FFCu; }
        if (ctx->pc != 0x349FFCu) { return; }
    }
    ctx->pc = 0x349FFCu;
label_349ffc:
    // 0x349ffc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x349ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34a000:
    // 0x34a000: 0xc04cc44  jal         func_133110
label_34a004:
    if (ctx->pc == 0x34A004u) {
        ctx->pc = 0x34A004u;
            // 0x34a004: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A008u;
        goto label_34a008;
    }
    ctx->pc = 0x34A000u;
    SET_GPR_U32(ctx, 31, 0x34A008u);
    ctx->pc = 0x34A004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A000u;
            // 0x34a004: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A008u; }
        if (ctx->pc != 0x34A008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A008u; }
        if (ctx->pc != 0x34A008u) { return; }
    }
    ctx->pc = 0x34A008u;
label_34a008:
    // 0x34a008: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x34a008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_34a00c:
    // 0x34a00c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x34a00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34a010:
    // 0x34a010: 0xc075378  jal         func_1D4DE0
label_34a014:
    if (ctx->pc == 0x34A014u) {
        ctx->pc = 0x34A014u;
            // 0x34a014: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A018u;
        goto label_34a018;
    }
    ctx->pc = 0x34A010u;
    SET_GPR_U32(ctx, 31, 0x34A018u);
    ctx->pc = 0x34A014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A010u;
            // 0x34a014: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A018u; }
        if (ctx->pc != 0x34A018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A018u; }
        if (ctx->pc != 0x34A018u) { return; }
    }
    ctx->pc = 0x34A018u;
label_34a018:
    // 0x34a018: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x34a018u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_34a01c:
    // 0x34a01c: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x34a01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_34a020:
    // 0x34a020: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x34a020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_34a024:
    // 0x34a024: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34a024u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_34a028:
    // 0x34a028: 0xc0c753c  jal         func_31D4F0
label_34a02c:
    if (ctx->pc == 0x34A02Cu) {
        ctx->pc = 0x34A02Cu;
            // 0x34a02c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x34A030u;
        goto label_34a030;
    }
    ctx->pc = 0x34A028u;
    SET_GPR_U32(ctx, 31, 0x34A030u);
    ctx->pc = 0x34A02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A028u;
            // 0x34a02c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A030u; }
        if (ctx->pc != 0x34A030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A030u; }
        if (ctx->pc != 0x34A030u) { return; }
    }
    ctx->pc = 0x34A030u;
label_34a030:
    // 0x34a030: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x34a030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_34a034:
    // 0x34a034: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x34a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_34a038:
    // 0x34a038: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34a038u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_34a03c:
    // 0x34a03c: 0xc0c753c  jal         func_31D4F0
label_34a040:
    if (ctx->pc == 0x34A040u) {
        ctx->pc = 0x34A040u;
            // 0x34a040: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x34A044u;
        goto label_34a044;
    }
    ctx->pc = 0x34A03Cu;
    SET_GPR_U32(ctx, 31, 0x34A044u);
    ctx->pc = 0x34A040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A03Cu;
            // 0x34a040: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A044u; }
        if (ctx->pc != 0x34A044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A044u; }
        if (ctx->pc != 0x34A044u) { return; }
    }
    ctx->pc = 0x34A044u;
label_34a044:
    // 0x34a044: 0xc0b9210  jal         func_2E4840
label_34a048:
    if (ctx->pc == 0x34A048u) {
        ctx->pc = 0x34A048u;
            // 0x34a048: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x34A04Cu;
        goto label_34a04c;
    }
    ctx->pc = 0x34A044u;
    SET_GPR_U32(ctx, 31, 0x34A04Cu);
    ctx->pc = 0x34A048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A044u;
            // 0x34a048: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A04Cu; }
        if (ctx->pc != 0x34A04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A04Cu; }
        if (ctx->pc != 0x34A04Cu) { return; }
    }
    ctx->pc = 0x34A04Cu;
label_34a04c:
    // 0x34a04c: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x34a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_34a050:
    // 0x34a050: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34a050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_34a054:
    // 0x34a054: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_34a058:
    if (ctx->pc == 0x34A058u) {
        ctx->pc = 0x34A05Cu;
        goto label_34a05c;
    }
    ctx->pc = 0x34A054u;
    {
        const bool branch_taken_0x34a054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a054) {
            ctx->pc = 0x34A068u;
            goto label_34a068;
        }
    }
    ctx->pc = 0x34A05Cu;
label_34a05c:
    // 0x34a05c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34a060:
    // 0x34a060: 0xc0767c8  jal         func_1D9F20
label_34a064:
    if (ctx->pc == 0x34A064u) {
        ctx->pc = 0x34A064u;
            // 0x34a064: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->pc = 0x34A068u;
        goto label_34a068;
    }
    ctx->pc = 0x34A060u;
    SET_GPR_U32(ctx, 31, 0x34A068u);
    ctx->pc = 0x34A064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A060u;
            // 0x34a064: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F20u;
    if (runtime->hasFunction(0x1D9F20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A068u; }
        if (ctx->pc != 0x34A068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9F20_0x1d9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A068u; }
        if (ctx->pc != 0x34A068u) { return; }
    }
    ctx->pc = 0x34A068u;
label_34a068:
    // 0x34a068: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34a068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34a06c:
    // 0x34a06c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x34a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_34a070:
    // 0x34a070: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34a070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34a074:
    // 0x34a074: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34a074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34a078:
    // 0x34a078: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34a078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34a07c:
    // 0x34a07c: 0x3e00008  jr          $ra
label_34a080:
    if (ctx->pc == 0x34A080u) {
        ctx->pc = 0x34A080u;
            // 0x34a080: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x34A084u;
        goto label_34a084;
    }
    ctx->pc = 0x34A07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A07Cu;
            // 0x34a080: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34A084u;
label_34a084:
    // 0x34a084: 0x0  nop
    ctx->pc = 0x34a084u;
    // NOP
label_34a088:
    // 0x34a088: 0x0  nop
    ctx->pc = 0x34a088u;
    // NOP
label_34a08c:
    // 0x34a08c: 0x0  nop
    ctx->pc = 0x34a08cu;
    // NOP
label_34a090:
    // 0x34a090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x34a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_34a094:
    // 0x34a094: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x34a094u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_34a098:
    // 0x34a098: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_34a09c:
    // 0x34a09c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_34a0a0:
    // 0x34a0a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_34a0a4:
    // 0x34a0a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34a0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34a0a8:
    // 0x34a0a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_34a0ac:
    // 0x34a0ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34a0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34a0b0:
    // 0x34a0b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34a0b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_34a0b4:
    // 0x34a0b4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x34a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_34a0b8:
    // 0x34a0b8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x34a0b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_34a0bc:
    // 0x34a0bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_34a0c0:
    if (ctx->pc == 0x34A0C0u) {
        ctx->pc = 0x34A0C0u;
            // 0x34a0c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34A0C4u;
        goto label_34a0c4;
    }
    ctx->pc = 0x34A0BCu;
    {
        const bool branch_taken_0x34a0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A0BCu;
            // 0x34a0c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a0bc) {
            ctx->pc = 0x34A0D0u;
            goto label_34a0d0;
        }
    }
    ctx->pc = 0x34A0C4u;
label_34a0c4:
    // 0x34a0c4: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
label_34a0c8:
    if (ctx->pc == 0x34A0C8u) {
        ctx->pc = 0x34A0C8u;
            // 0x34a0c8: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x34A0CCu;
        goto label_34a0cc;
    }
    ctx->pc = 0x34A0C4u;
    {
        const bool branch_taken_0x34a0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x34a0c4) {
            ctx->pc = 0x34A0C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A0C4u;
            // 0x34a0c8: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A0D4u;
            goto label_34a0d4;
        }
    }
    ctx->pc = 0x34A0CCu;
label_34a0cc:
    // 0x34a0cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34a0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a0d0:
    // 0x34a0d0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x34a0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_34a0d4:
    // 0x34a0d4: 0x5060007b  beql        $v1, $zero, . + 4 + (0x7B << 2)
label_34a0d8:
    if (ctx->pc == 0x34A0D8u) {
        ctx->pc = 0x34A0D8u;
            // 0x34a0d8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x34A0DCu;
        goto label_34a0dc;
    }
    ctx->pc = 0x34A0D4u;
    {
        const bool branch_taken_0x34a0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a0d4) {
            ctx->pc = 0x34A0D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A0D4u;
            // 0x34a0d8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A2C4u;
            goto label_34a2c4;
        }
    }
    ctx->pc = 0x34A0DCu;
label_34a0dc:
    // 0x34a0dc: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x34a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_34a0e0:
    // 0x34a0e0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x34a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_34a0e4:
    // 0x34a0e4: 0x10830076  beq         $a0, $v1, . + 4 + (0x76 << 2)
label_34a0e8:
    if (ctx->pc == 0x34A0E8u) {
        ctx->pc = 0x34A0ECu;
        goto label_34a0ec;
    }
    ctx->pc = 0x34A0E4u;
    {
        const bool branch_taken_0x34a0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a0e4) {
            ctx->pc = 0x34A2C0u;
            goto label_34a2c0;
        }
    }
    ctx->pc = 0x34A0ECu;
label_34a0ec:
    // 0x34a0ec: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x34a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_34a0f0:
    // 0x34a0f0: 0x10830073  beq         $a0, $v1, . + 4 + (0x73 << 2)
label_34a0f4:
    if (ctx->pc == 0x34A0F4u) {
        ctx->pc = 0x34A0F8u;
        goto label_34a0f8;
    }
    ctx->pc = 0x34A0F0u;
    {
        const bool branch_taken_0x34a0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a0f0) {
            ctx->pc = 0x34A2C0u;
            goto label_34a2c0;
        }
    }
    ctx->pc = 0x34A0F8u;
label_34a0f8:
    // 0x34a0f8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x34a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_34a0fc:
    // 0x34a0fc: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
label_34a100:
    if (ctx->pc == 0x34A100u) {
        ctx->pc = 0x34A104u;
        goto label_34a104;
    }
    ctx->pc = 0x34A0FCu;
    {
        const bool branch_taken_0x34a0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a0fc) {
            ctx->pc = 0x34A2C0u;
            goto label_34a2c0;
        }
    }
    ctx->pc = 0x34A104u;
label_34a104:
    // 0x34a104: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x34a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_34a108:
    // 0x34a108: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_34a10c:
    if (ctx->pc == 0x34A10Cu) {
        ctx->pc = 0x34A10Cu;
            // 0x34a10c: 0x90a30002  lbu         $v1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->pc = 0x34A110u;
        goto label_34a110;
    }
    ctx->pc = 0x34A108u;
    {
        const bool branch_taken_0x34a108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a108) {
            ctx->pc = 0x34A10Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A108u;
            // 0x34a10c: 0x90a30002  lbu         $v1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A11Cu;
            goto label_34a11c;
        }
    }
    ctx->pc = 0x34A110u;
label_34a110:
    // 0x34a110: 0x1000006b  b           . + 4 + (0x6B << 2)
label_34a114:
    if (ctx->pc == 0x34A114u) {
        ctx->pc = 0x34A118u;
        goto label_34a118;
    }
    ctx->pc = 0x34A110u;
    {
        const bool branch_taken_0x34a110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a110) {
            ctx->pc = 0x34A2C0u;
            goto label_34a2c0;
        }
    }
    ctx->pc = 0x34A118u;
label_34a118:
    // 0x34a118: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x34a118u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_34a11c:
    // 0x34a11c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34a120:
    // 0x34a120: 0xa3a3006f  sb          $v1, 0x6F($sp)
    ctx->pc = 0x34a120u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 3));
label_34a124:
    // 0x34a124: 0x8e25069c  lw          $a1, 0x69C($s1)
    ctx->pc = 0x34a124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_34a128:
    // 0x34a128: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
label_34a12c:
    if (ctx->pc == 0x34A12Cu) {
        ctx->pc = 0x34A12Cu;
            // 0x34a12c: 0x263005f0  addiu       $s0, $s1, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1520));
        ctx->pc = 0x34A130u;
        goto label_34a130;
    }
    ctx->pc = 0x34A128u;
    {
        const bool branch_taken_0x34a128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x34A12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A128u;
            // 0x34a12c: 0x263005f0  addiu       $s0, $s1, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a128) {
            ctx->pc = 0x34A140u;
            goto label_34a140;
        }
    }
    ctx->pc = 0x34A130u;
label_34a130:
    // 0x34a130: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34a130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_34a134:
    // 0x34a134: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x34a134u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
label_34a138:
    // 0x34a138: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
label_34a13c:
    if (ctx->pc == 0x34A13Cu) {
        ctx->pc = 0x34A140u;
        goto label_34a140;
    }
    ctx->pc = 0x34A138u;
    {
        const bool branch_taken_0x34a138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a138) {
            ctx->pc = 0x34A2C0u;
            goto label_34a2c0;
        }
    }
    ctx->pc = 0x34A140u;
label_34a140:
    // 0x34a140: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34a140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34a144:
    // 0x34a144: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x34a144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_34a148:
    // 0x34a148: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x34a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_34a14c:
    // 0x34a14c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34a14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34a150:
    // 0x34a150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34a154:
    // 0x34a154: 0x262602c0  addiu       $a2, $s1, 0x2C0
    ctx->pc = 0x34a154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_34a158:
    // 0x34a158: 0x26270820  addiu       $a3, $s1, 0x820
    ctx->pc = 0x34a158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_34a15c:
    // 0x34a15c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34a15cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a160:
    // 0x34a160: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x34a160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_34a164:
    // 0x34a164: 0x27a9006f  addiu       $t1, $sp, 0x6F
    ctx->pc = 0x34a164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
label_34a168:
    // 0x34a168: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x34a168u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34a16c:
    // 0x34a16c: 0xc0b8704  jal         func_2E1C10
label_34a170:
    if (ctx->pc == 0x34A170u) {
        ctx->pc = 0x34A170u;
            // 0x34a170: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A174u;
        goto label_34a174;
    }
    ctx->pc = 0x34A16Cu;
    SET_GPR_U32(ctx, 31, 0x34A174u);
    ctx->pc = 0x34A170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A16Cu;
            // 0x34a170: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A174u; }
        if (ctx->pc != 0x34A174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A174u; }
        if (ctx->pc != 0x34A174u) { return; }
    }
    ctx->pc = 0x34A174u;
label_34a174:
    // 0x34a174: 0x96030056  lhu         $v1, 0x56($s0)
    ctx->pc = 0x34a174u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
label_34a178:
    // 0x34a178: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
label_34a17c:
    if (ctx->pc == 0x34A17Cu) {
        ctx->pc = 0x34A180u;
        goto label_34a180;
    }
    ctx->pc = 0x34A178u;
    {
        const bool branch_taken_0x34a178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a178) {
            ctx->pc = 0x34A2C0u;
            goto label_34a2c0;
        }
    }
    ctx->pc = 0x34A180u;
label_34a180:
    // 0x34a180: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x34a180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_34a184:
    // 0x34a184: 0xc0ab808  jal         func_2AE020
label_34a188:
    if (ctx->pc == 0x34A188u) {
        ctx->pc = 0x34A188u;
            // 0x34a188: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x34A18Cu;
        goto label_34a18c;
    }
    ctx->pc = 0x34A184u;
    SET_GPR_U32(ctx, 31, 0x34A18Cu);
    ctx->pc = 0x34A188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A184u;
            // 0x34a188: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A18Cu; }
        if (ctx->pc != 0x34A18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A18Cu; }
        if (ctx->pc != 0x34A18Cu) { return; }
    }
    ctx->pc = 0x34A18Cu;
label_34a18c:
    // 0x34a18c: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x34a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_34a190:
    // 0x34a190: 0xc04cc04  jal         func_133010
label_34a194:
    if (ctx->pc == 0x34A194u) {
        ctx->pc = 0x34A194u;
            // 0x34a194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A198u;
        goto label_34a198;
    }
    ctx->pc = 0x34A190u;
    SET_GPR_U32(ctx, 31, 0x34A198u);
    ctx->pc = 0x34A194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A190u;
            // 0x34a194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A198u; }
        if (ctx->pc != 0x34A198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A198u; }
        if (ctx->pc != 0x34A198u) { return; }
    }
    ctx->pc = 0x34A198u;
label_34a198:
    // 0x34a198: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x34a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_34a19c:
    // 0x34a19c: 0xc075318  jal         func_1D4C60
label_34a1a0:
    if (ctx->pc == 0x34A1A0u) {
        ctx->pc = 0x34A1A0u;
            // 0x34a1a0: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x34A1A4u;
        goto label_34a1a4;
    }
    ctx->pc = 0x34A19Cu;
    SET_GPR_U32(ctx, 31, 0x34A1A4u);
    ctx->pc = 0x34A1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A19Cu;
            // 0x34a1a0: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A1A4u; }
        if (ctx->pc != 0x34A1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A1A4u; }
        if (ctx->pc != 0x34A1A4u) { return; }
    }
    ctx->pc = 0x34A1A4u;
label_34a1a4:
    // 0x34a1a4: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x34a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_34a1a8:
    // 0x34a1a8: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x34a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_34a1ac:
    // 0x34a1ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x34a1acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34a1b0:
    // 0x34a1b0: 0xc0c6250  jal         func_318940
label_34a1b4:
    if (ctx->pc == 0x34A1B4u) {
        ctx->pc = 0x34A1B4u;
            // 0x34a1b4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A1B8u;
        goto label_34a1b8;
    }
    ctx->pc = 0x34A1B0u;
    SET_GPR_U32(ctx, 31, 0x34A1B8u);
    ctx->pc = 0x34A1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A1B0u;
            // 0x34a1b4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A1B8u; }
        if (ctx->pc != 0x34A1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A1B8u; }
        if (ctx->pc != 0x34A1B8u) { return; }
    }
    ctx->pc = 0x34A1B8u;
label_34a1b8:
    // 0x34a1b8: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x34a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_34a1bc:
    // 0x34a1bc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x34a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_34a1c0:
    // 0x34a1c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34a1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34a1c4:
    // 0x34a1c4: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x34a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_34a1c8:
    // 0x34a1c8: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x34a1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_34a1cc:
    // 0x34a1cc: 0xc0c6250  jal         func_318940
label_34a1d0:
    if (ctx->pc == 0x34A1D0u) {
        ctx->pc = 0x34A1D0u;
            // 0x34a1d0: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x34A1D4u;
        goto label_34a1d4;
    }
    ctx->pc = 0x34A1CCu;
    SET_GPR_U32(ctx, 31, 0x34A1D4u);
    ctx->pc = 0x34A1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A1CCu;
            // 0x34a1d0: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A1D4u; }
        if (ctx->pc != 0x34A1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A1D4u; }
        if (ctx->pc != 0x34A1D4u) { return; }
    }
    ctx->pc = 0x34A1D4u;
label_34a1d4:
    // 0x34a1d4: 0xc0b9210  jal         func_2E4840
label_34a1d8:
    if (ctx->pc == 0x34A1D8u) {
        ctx->pc = 0x34A1D8u;
            // 0x34a1d8: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x34A1DCu;
        goto label_34a1dc;
    }
    ctx->pc = 0x34A1D4u;
    SET_GPR_U32(ctx, 31, 0x34A1DCu);
    ctx->pc = 0x34A1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A1D4u;
            // 0x34a1d8: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A1DCu; }
        if (ctx->pc != 0x34A1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A1DCu; }
        if (ctx->pc != 0x34A1DCu) { return; }
    }
    ctx->pc = 0x34A1DCu;
label_34a1dc:
    // 0x34a1dc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x34a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_34a1e0:
    // 0x34a1e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34a1e4:
    // 0x34a1e4: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x34a1e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_34a1e8:
    // 0x34a1e8: 0x5483002f  bnel        $a0, $v1, . + 4 + (0x2F << 2)
label_34a1ec:
    if (ctx->pc == 0x34A1ECu) {
        ctx->pc = 0x34A1ECu;
            // 0x34a1ec: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x34A1F0u;
        goto label_34a1f0;
    }
    ctx->pc = 0x34A1E8u;
    {
        const bool branch_taken_0x34a1e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a1e8) {
            ctx->pc = 0x34A1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A1E8u;
            // 0x34a1ec: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A2A8u;
            goto label_34a2a8;
        }
    }
    ctx->pc = 0x34A1F0u;
label_34a1f0:
    // 0x34a1f0: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x34a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_34a1f4:
    // 0x34a1f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34a1f8:
    // 0x34a1f8: 0x96060052  lhu         $a2, 0x52($s0)
    ctx->pc = 0x34a1f8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
label_34a1fc:
    // 0x34a1fc: 0x96030050  lhu         $v1, 0x50($s0)
    ctx->pc = 0x34a1fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_34a200:
    // 0x34a200: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x34a200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_34a204:
    // 0x34a204: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x34a204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_34a208:
    // 0x34a208: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x34a208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_34a20c:
    // 0x34a20c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x34a20cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_34a210:
    // 0x34a210: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x34a210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_34a214:
    // 0x34a214: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x34a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_34a218:
    // 0x34a218: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x34a218u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_34a21c:
    // 0x34a21c: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x34a21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_34a220:
    // 0x34a220: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x34a220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_34a224:
    // 0x34a224: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x34a224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_34a228:
    // 0x34a228: 0xc04cc90  jal         func_133240
label_34a22c:
    if (ctx->pc == 0x34A22Cu) {
        ctx->pc = 0x34A22Cu;
            // 0x34a22c: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x34A230u;
        goto label_34a230;
    }
    ctx->pc = 0x34A228u;
    SET_GPR_U32(ctx, 31, 0x34A230u);
    ctx->pc = 0x34A22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A228u;
            // 0x34a22c: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A230u; }
        if (ctx->pc != 0x34A230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A230u; }
        if (ctx->pc != 0x34A230u) { return; }
    }
    ctx->pc = 0x34A230u;
label_34a230:
    // 0x34a230: 0x96030056  lhu         $v1, 0x56($s0)
    ctx->pc = 0x34a230u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
label_34a234:
    // 0x34a234: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34a238:
    // 0x34a238: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_34a23c:
    if (ctx->pc == 0x34A23Cu) {
        ctx->pc = 0x34A23Cu;
            // 0x34a23c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x34A240u;
        goto label_34a240;
    }
    ctx->pc = 0x34A238u;
    {
        const bool branch_taken_0x34a238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34a238) {
            ctx->pc = 0x34A23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A238u;
            // 0x34a23c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A258u;
            goto label_34a258;
        }
    }
    ctx->pc = 0x34A240u;
label_34a240:
    // 0x34a240: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x34a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_34a244:
    // 0x34a244: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34a248:
    // 0x34a248: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34a248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34a24c:
    // 0x34a24c: 0xc04cc70  jal         func_1331C0
label_34a250:
    if (ctx->pc == 0x34A250u) {
        ctx->pc = 0x34A250u;
            // 0x34a250: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A254u;
        goto label_34a254;
    }
    ctx->pc = 0x34A24Cu;
    SET_GPR_U32(ctx, 31, 0x34A254u);
    ctx->pc = 0x34A250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A24Cu;
            // 0x34a250: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A254u; }
        if (ctx->pc != 0x34A254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A254u; }
        if (ctx->pc != 0x34A254u) { return; }
    }
    ctx->pc = 0x34A254u;
label_34a254:
    // 0x34a254: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34a254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34a258:
    // 0x34a258: 0xc04cc44  jal         func_133110
label_34a25c:
    if (ctx->pc == 0x34A25Cu) {
        ctx->pc = 0x34A25Cu;
            // 0x34a25c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A260u;
        goto label_34a260;
    }
    ctx->pc = 0x34A258u;
    SET_GPR_U32(ctx, 31, 0x34A260u);
    ctx->pc = 0x34A25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A258u;
            // 0x34a25c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A260u; }
        if (ctx->pc != 0x34A260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A260u; }
        if (ctx->pc != 0x34A260u) { return; }
    }
    ctx->pc = 0x34A260u;
label_34a260:
    // 0x34a260: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x34a260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_34a264:
    // 0x34a264: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x34a264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34a268:
    // 0x34a268: 0xc075378  jal         func_1D4DE0
label_34a26c:
    if (ctx->pc == 0x34A26Cu) {
        ctx->pc = 0x34A26Cu;
            // 0x34a26c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A270u;
        goto label_34a270;
    }
    ctx->pc = 0x34A268u;
    SET_GPR_U32(ctx, 31, 0x34A270u);
    ctx->pc = 0x34A26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A268u;
            // 0x34a26c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A270u; }
        if (ctx->pc != 0x34A270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A270u; }
        if (ctx->pc != 0x34A270u) { return; }
    }
    ctx->pc = 0x34A270u;
label_34a270:
    // 0x34a270: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x34a270u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_34a274:
    // 0x34a274: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x34a274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_34a278:
    // 0x34a278: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x34a278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_34a27c:
    // 0x34a27c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34a27cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_34a280:
    // 0x34a280: 0xc0c753c  jal         func_31D4F0
label_34a284:
    if (ctx->pc == 0x34A284u) {
        ctx->pc = 0x34A284u;
            // 0x34a284: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x34A288u;
        goto label_34a288;
    }
    ctx->pc = 0x34A280u;
    SET_GPR_U32(ctx, 31, 0x34A288u);
    ctx->pc = 0x34A284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A280u;
            // 0x34a284: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A288u; }
        if (ctx->pc != 0x34A288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A288u; }
        if (ctx->pc != 0x34A288u) { return; }
    }
    ctx->pc = 0x34A288u;
label_34a288:
    // 0x34a288: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x34a288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_34a28c:
    // 0x34a28c: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x34a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_34a290:
    // 0x34a290: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34a290u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_34a294:
    // 0x34a294: 0xc0c753c  jal         func_31D4F0
label_34a298:
    if (ctx->pc == 0x34A298u) {
        ctx->pc = 0x34A298u;
            // 0x34a298: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x34A29Cu;
        goto label_34a29c;
    }
    ctx->pc = 0x34A294u;
    SET_GPR_U32(ctx, 31, 0x34A29Cu);
    ctx->pc = 0x34A298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A294u;
            // 0x34a298: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A29Cu; }
        if (ctx->pc != 0x34A29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A29Cu; }
        if (ctx->pc != 0x34A29Cu) { return; }
    }
    ctx->pc = 0x34A29Cu;
label_34a29c:
    // 0x34a29c: 0xc0b9210  jal         func_2E4840
label_34a2a0:
    if (ctx->pc == 0x34A2A0u) {
        ctx->pc = 0x34A2A0u;
            // 0x34a2a0: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x34A2A4u;
        goto label_34a2a4;
    }
    ctx->pc = 0x34A29Cu;
    SET_GPR_U32(ctx, 31, 0x34A2A4u);
    ctx->pc = 0x34A2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A29Cu;
            // 0x34a2a0: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A2A4u; }
        if (ctx->pc != 0x34A2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A2A4u; }
        if (ctx->pc != 0x34A2A4u) { return; }
    }
    ctx->pc = 0x34A2A4u;
label_34a2a4:
    // 0x34a2a4: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x34a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_34a2a8:
    // 0x34a2a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34a2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_34a2ac:
    // 0x34a2ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_34a2b0:
    if (ctx->pc == 0x34A2B0u) {
        ctx->pc = 0x34A2B4u;
        goto label_34a2b4;
    }
    ctx->pc = 0x34A2ACu;
    {
        const bool branch_taken_0x34a2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a2ac) {
            ctx->pc = 0x34A2C0u;
            goto label_34a2c0;
        }
    }
    ctx->pc = 0x34A2B4u;
label_34a2b4:
    // 0x34a2b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34a2b8:
    // 0x34a2b8: 0xc0767c8  jal         func_1D9F20
label_34a2bc:
    if (ctx->pc == 0x34A2BCu) {
        ctx->pc = 0x34A2BCu;
            // 0x34a2bc: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->pc = 0x34A2C0u;
        goto label_34a2c0;
    }
    ctx->pc = 0x34A2B8u;
    SET_GPR_U32(ctx, 31, 0x34A2C0u);
    ctx->pc = 0x34A2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A2B8u;
            // 0x34a2bc: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F20u;
    if (runtime->hasFunction(0x1D9F20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A2C0u; }
        if (ctx->pc != 0x34A2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9F20_0x1d9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A2C0u; }
        if (ctx->pc != 0x34A2C0u) { return; }
    }
    ctx->pc = 0x34A2C0u;
label_34a2c0:
    // 0x34a2c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34a2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34a2c4:
    // 0x34a2c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x34a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_34a2c8:
    // 0x34a2c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34a2c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34a2cc:
    // 0x34a2cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34a2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34a2d0:
    // 0x34a2d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34a2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34a2d4:
    // 0x34a2d4: 0x3e00008  jr          $ra
label_34a2d8:
    if (ctx->pc == 0x34A2D8u) {
        ctx->pc = 0x34A2D8u;
            // 0x34a2d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x34A2DCu;
        goto label_34a2dc;
    }
    ctx->pc = 0x34A2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A2D4u;
            // 0x34a2d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34A2DCu;
label_34a2dc:
    // 0x34a2dc: 0x0  nop
    ctx->pc = 0x34a2dcu;
    // NOP
label_34a2e0:
    // 0x34a2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34a2e4:
    // 0x34a2e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_34a2e8:
    // 0x34a2e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34a2ec:
    // 0x34a2ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34a2f0:
    // 0x34a2f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34a2f4:
    // 0x34a2f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34a2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34a2f8:
    // 0x34a2f8: 0x8c7189f0  lw          $s1, -0x7610($v1)
    ctx->pc = 0x34a2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_34a2fc:
    // 0x34a2fc: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x34a2fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_34a300:
    // 0x34a300: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34a300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34a304:
    // 0x34a304: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_34a308:
    if (ctx->pc == 0x34A308u) {
        ctx->pc = 0x34A308u;
            // 0x34a308: 0x8e040774  lw          $a0, 0x774($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1908)));
        ctx->pc = 0x34A30Cu;
        goto label_34a30c;
    }
    ctx->pc = 0x34A304u;
    {
        const bool branch_taken_0x34a304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a304) {
            ctx->pc = 0x34A308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A304u;
            // 0x34a308: 0x8e040774  lw          $a0, 0x774($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1908)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A314u;
            goto label_34a314;
        }
    }
    ctx->pc = 0x34A30Cu;
label_34a30c:
    // 0x34a30c: 0x10000017  b           . + 4 + (0x17 << 2)
label_34a310:
    if (ctx->pc == 0x34A310u) {
        ctx->pc = 0x34A310u;
            // 0x34a310: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x34A314u;
        goto label_34a314;
    }
    ctx->pc = 0x34A30Cu;
    {
        const bool branch_taken_0x34a30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A30Cu;
            // 0x34a310: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a30c) {
            ctx->pc = 0x34A36Cu;
            goto label_34a36c;
        }
    }
    ctx->pc = 0x34A314u;
label_34a314:
    // 0x34a314: 0xc12c7e8  jal         func_4B1FA0
label_34a318:
    if (ctx->pc == 0x34A318u) {
        ctx->pc = 0x34A31Cu;
        goto label_34a31c;
    }
    ctx->pc = 0x34A314u;
    SET_GPR_U32(ctx, 31, 0x34A31Cu);
    ctx->pc = 0x4B1FA0u;
    if (runtime->hasFunction(0x4B1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x4B1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A31Cu; }
        if (ctx->pc != 0x34A31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B1FA0_0x4b1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A31Cu; }
        if (ctx->pc != 0x34A31Cu) { return; }
    }
    ctx->pc = 0x34A31Cu;
label_34a31c:
    // 0x34a31c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x34a31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_34a320:
    // 0x34a320: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x34a320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_34a324:
    // 0x34a324: 0x320f809  jalr        $t9
label_34a328:
    if (ctx->pc == 0x34A328u) {
        ctx->pc = 0x34A328u;
            // 0x34a328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A32Cu;
        goto label_34a32c;
    }
    ctx->pc = 0x34A324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34A32Cu);
        ctx->pc = 0x34A328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A324u;
            // 0x34a328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34A32Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34A32Cu; }
            if (ctx->pc != 0x34A32Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34A32Cu;
label_34a32c:
    // 0x34a32c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x34a32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_34a330:
    // 0x34a330: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x34a330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_34a334:
    // 0x34a334: 0x320f809  jalr        $t9
label_34a338:
    if (ctx->pc == 0x34A338u) {
        ctx->pc = 0x34A338u;
            // 0x34a338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A33Cu;
        goto label_34a33c;
    }
    ctx->pc = 0x34A334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34A33Cu);
        ctx->pc = 0x34A338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A334u;
            // 0x34a338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34A33Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34A33Cu; }
            if (ctx->pc != 0x34A33Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34A33Cu;
label_34a33c:
    // 0x34a33c: 0x8e030790  lw          $v1, 0x790($s0)
    ctx->pc = 0x34a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
label_34a340:
    // 0x34a340: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x34a340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_34a344:
    // 0x34a344: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_34a348:
    if (ctx->pc == 0x34A348u) {
        ctx->pc = 0x34A34Cu;
        goto label_34a34c;
    }
    ctx->pc = 0x34A344u;
    {
        const bool branch_taken_0x34a344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a344) {
            ctx->pc = 0x34A368u;
            goto label_34a368;
        }
    }
    ctx->pc = 0x34A34Cu;
label_34a34c:
    // 0x34a34c: 0xc60107a8  lwc1        $f1, 0x7A8($s0)
    ctx->pc = 0x34a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34a350:
    // 0x34a350: 0xc60007ac  lwc1        $f0, 0x7AC($s0)
    ctx->pc = 0x34a350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34a354:
    // 0x34a354: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34a358:
    // 0x34a358: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_34a35c:
    if (ctx->pc == 0x34A35Cu) {
        ctx->pc = 0x34A360u;
        goto label_34a360;
    }
    ctx->pc = 0x34A358u;
    {
        const bool branch_taken_0x34a358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a358) {
            ctx->pc = 0x34A368u;
            goto label_34a368;
        }
    }
    ctx->pc = 0x34A360u;
label_34a360:
    // 0x34a360: 0xc0d3380  jal         func_34CE00
label_34a364:
    if (ctx->pc == 0x34A364u) {
        ctx->pc = 0x34A364u;
            // 0x34a364: 0x8e040898  lw          $a0, 0x898($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
        ctx->pc = 0x34A368u;
        goto label_34a368;
    }
    ctx->pc = 0x34A360u;
    SET_GPR_U32(ctx, 31, 0x34A368u);
    ctx->pc = 0x34A364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A360u;
            // 0x34a364: 0x8e040898  lw          $a0, 0x898($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34CE00u;
    if (runtime->hasFunction(0x34CE00u)) {
        auto targetFn = runtime->lookupFunction(0x34CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A368u; }
        if (ctx->pc != 0x34A368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034CE00_0x34ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A368u; }
        if (ctx->pc != 0x34A368u) { return; }
    }
    ctx->pc = 0x34A368u;
label_34a368:
    // 0x34a368: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34a368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34a36c:
    // 0x34a36c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34a370:
    // 0x34a370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34a374:
    // 0x34a374: 0x3e00008  jr          $ra
label_34a378:
    if (ctx->pc == 0x34A378u) {
        ctx->pc = 0x34A378u;
            // 0x34a378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34A37Cu;
        goto label_34a37c;
    }
    ctx->pc = 0x34A374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A374u;
            // 0x34a378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34A37Cu;
label_34a37c:
    // 0x34a37c: 0x0  nop
    ctx->pc = 0x34a37cu;
    // NOP
label_34a380:
    // 0x34a380: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x34a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_34a384:
    // 0x34a384: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34a384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34a388:
    // 0x34a388: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x34a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_34a38c:
    // 0x34a38c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34a38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34a390:
    // 0x34a390: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x34a390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_34a394:
    // 0x34a394: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x34a394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_34a398:
    // 0x34a398: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x34a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_34a39c:
    // 0x34a39c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x34a39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_34a3a0:
    // 0x34a3a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x34a3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_34a3a4:
    // 0x34a3a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x34a3a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34a3a8:
    // 0x34a3a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x34a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_34a3ac:
    // 0x34a3ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34a3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_34a3b0:
    // 0x34a3b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34a3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_34a3b4:
    // 0x34a3b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34a3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_34a3b8:
    // 0x34a3b8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x34a3b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_34a3bc:
    // 0x34a3bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34a3bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_34a3c0:
    // 0x34a3c0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x34a3c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_34a3c4:
    // 0x34a3c4: 0x8c71a140  lw          $s1, -0x5EC0($v1)
    ctx->pc = 0x34a3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943040)));
label_34a3c8:
    // 0x34a3c8: 0x10a601b5  beq         $a1, $a2, . + 4 + (0x1B5 << 2)
label_34a3cc:
    if (ctx->pc == 0x34A3CCu) {
        ctx->pc = 0x34A3CCu;
            // 0x34a3cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A3D0u;
        goto label_34a3d0;
    }
    ctx->pc = 0x34A3C8u;
    {
        const bool branch_taken_0x34a3c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x34A3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A3C8u;
            // 0x34a3cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a3c8) {
            ctx->pc = 0x34AAA0u;
            goto label_34aaa0;
        }
    }
    ctx->pc = 0x34A3D0u;
label_34a3d0:
    // 0x34a3d0: 0x10a0016e  beqz        $a1, . + 4 + (0x16E << 2)
label_34a3d4:
    if (ctx->pc == 0x34A3D4u) {
        ctx->pc = 0x34A3D8u;
        goto label_34a3d8;
    }
    ctx->pc = 0x34A3D0u;
    {
        const bool branch_taken_0x34a3d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a3d0) {
            ctx->pc = 0x34A98Cu;
            goto label_34a98c;
        }
    }
    ctx->pc = 0x34A3D8u;
label_34a3d8:
    // 0x34a3d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34a3dc:
    // 0x34a3dc: 0x50a3001d  beql        $a1, $v1, . + 4 + (0x1D << 2)
label_34a3e0:
    if (ctx->pc == 0x34A3E0u) {
        ctx->pc = 0x34A3E0u;
            // 0x34a3e0: 0x8eb00788  lw          $s0, 0x788($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1928)));
        ctx->pc = 0x34A3E4u;
        goto label_34a3e4;
    }
    ctx->pc = 0x34A3DCu;
    {
        const bool branch_taken_0x34a3dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a3dc) {
            ctx->pc = 0x34A3E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A3DCu;
            // 0x34a3e0: 0x8eb00788  lw          $s0, 0x788($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1928)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A454u;
            goto label_34a454;
        }
    }
    ctx->pc = 0x34A3E4u;
label_34a3e4:
    // 0x34a3e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34a3e8:
    // 0x34a3e8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_34a3ec:
    if (ctx->pc == 0x34A3ECu) {
        ctx->pc = 0x34A3F0u;
        goto label_34a3f0;
    }
    ctx->pc = 0x34A3E8u;
    {
        const bool branch_taken_0x34a3e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a3e8) {
            ctx->pc = 0x34A3F8u;
            goto label_34a3f8;
        }
    }
    ctx->pc = 0x34A3F0u;
label_34a3f0:
    // 0x34a3f0: 0x100001b0  b           . + 4 + (0x1B0 << 2)
label_34a3f4:
    if (ctx->pc == 0x34A3F4u) {
        ctx->pc = 0x34A3F4u;
            // 0x34a3f4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x34A3F8u;
        goto label_34a3f8;
    }
    ctx->pc = 0x34A3F0u;
    {
        const bool branch_taken_0x34a3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A3F0u;
            // 0x34a3f4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a3f0) {
            ctx->pc = 0x34AAB4u;
            goto label_34aab4;
        }
    }
    ctx->pc = 0x34A3F8u;
label_34a3f8:
    // 0x34a3f8: 0xc0d2ac8  jal         func_34AB20
label_34a3fc:
    if (ctx->pc == 0x34A3FCu) {
        ctx->pc = 0x34A400u;
        goto label_34a400;
    }
    ctx->pc = 0x34A3F8u;
    SET_GPR_U32(ctx, 31, 0x34A400u);
    ctx->pc = 0x34AB20u;
    if (runtime->hasFunction(0x34AB20u)) {
        auto targetFn = runtime->lookupFunction(0x34AB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A400u; }
        if (ctx->pc != 0x34A400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034AB20_0x34ab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A400u; }
        if (ctx->pc != 0x34A400u) { return; }
    }
    ctx->pc = 0x34A400u;
label_34a400:
    // 0x34a400: 0xc0d2ac0  jal         func_34AB00
label_34a404:
    if (ctx->pc == 0x34A404u) {
        ctx->pc = 0x34A404u;
            // 0x34a404: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A408u;
        goto label_34a408;
    }
    ctx->pc = 0x34A400u;
    SET_GPR_U32(ctx, 31, 0x34A408u);
    ctx->pc = 0x34A404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A400u;
            // 0x34a404: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34AB00u;
    if (runtime->hasFunction(0x34AB00u)) {
        auto targetFn = runtime->lookupFunction(0x34AB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A408u; }
        if (ctx->pc != 0x34A408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034AB00_0x34ab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A408u; }
        if (ctx->pc != 0x34A408u) { return; }
    }
    ctx->pc = 0x34A408u;
label_34a408:
    // 0x34a408: 0xc0d2ac0  jal         func_34AB00
label_34a40c:
    if (ctx->pc == 0x34A40Cu) {
        ctx->pc = 0x34A40Cu;
            // 0x34a40c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34A410u;
        goto label_34a410;
    }
    ctx->pc = 0x34A408u;
    SET_GPR_U32(ctx, 31, 0x34A410u);
    ctx->pc = 0x34A40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A408u;
            // 0x34a40c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34AB00u;
    if (runtime->hasFunction(0x34AB00u)) {
        auto targetFn = runtime->lookupFunction(0x34AB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A410u; }
        if (ctx->pc != 0x34A410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034AB00_0x34ab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A410u; }
        if (ctx->pc != 0x34A410u) { return; }
    }
    ctx->pc = 0x34A410u;
label_34a410:
    // 0x34a410: 0xc0d2abc  jal         func_34AAF0
label_34a414:
    if (ctx->pc == 0x34A414u) {
        ctx->pc = 0x34A418u;
        goto label_34a418;
    }
    ctx->pc = 0x34A410u;
    SET_GPR_U32(ctx, 31, 0x34A418u);
    ctx->pc = 0x34AAF0u;
    if (runtime->hasFunction(0x34AAF0u)) {
        auto targetFn = runtime->lookupFunction(0x34AAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A418u; }
        if (ctx->pc != 0x34A418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034AAF0_0x34aaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A418u; }
        if (ctx->pc != 0x34A418u) { return; }
    }
    ctx->pc = 0x34A418u;
label_34a418:
    // 0x34a418: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34a418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34a41c:
    // 0x34a41c: 0x8c63a348  lw          $v1, -0x5CB8($v1)
    ctx->pc = 0x34a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_34a420:
    // 0x34a420: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x34a420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_34a424:
    // 0x34a424: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x34a424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_34a428:
    // 0x34a428: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34a428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_34a42c:
    // 0x34a42c: 0x146001a0  bnez        $v1, . + 4 + (0x1A0 << 2)
label_34a430:
    if (ctx->pc == 0x34A430u) {
        ctx->pc = 0x34A434u;
        goto label_34a434;
    }
    ctx->pc = 0x34A42Cu;
    {
        const bool branch_taken_0x34a42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a42c) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A434u;
label_34a434:
    // 0x34a434: 0xc0d2abc  jal         func_34AAF0
label_34a438:
    if (ctx->pc == 0x34A438u) {
        ctx->pc = 0x34A43Cu;
        goto label_34a43c;
    }
    ctx->pc = 0x34A434u;
    SET_GPR_U32(ctx, 31, 0x34A43Cu);
    ctx->pc = 0x34AAF0u;
    if (runtime->hasFunction(0x34AAF0u)) {
        auto targetFn = runtime->lookupFunction(0x34AAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A43Cu; }
        if (ctx->pc != 0x34A43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034AAF0_0x34aaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A43Cu; }
        if (ctx->pc != 0x34A43Cu) { return; }
    }
    ctx->pc = 0x34A43Cu;
label_34a43c:
    // 0x34a43c: 0x1040019c  beqz        $v0, . + 4 + (0x19C << 2)
label_34a440:
    if (ctx->pc == 0x34A440u) {
        ctx->pc = 0x34A444u;
        goto label_34a444;
    }
    ctx->pc = 0x34A43Cu;
    {
        const bool branch_taken_0x34a43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a43c) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A444u;
label_34a444:
    // 0x34a444: 0xc0d2acc  jal         func_34AB30
label_34a448:
    if (ctx->pc == 0x34A448u) {
        ctx->pc = 0x34A448u;
            // 0x34a448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A44Cu;
        goto label_34a44c;
    }
    ctx->pc = 0x34A444u;
    SET_GPR_U32(ctx, 31, 0x34A44Cu);
    ctx->pc = 0x34A448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A444u;
            // 0x34a448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34AB30u;
    if (runtime->hasFunction(0x34AB30u)) {
        auto targetFn = runtime->lookupFunction(0x34AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A44Cu; }
        if (ctx->pc != 0x34A44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034AB30_0x34ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A44Cu; }
        if (ctx->pc != 0x34A44Cu) { return; }
    }
    ctx->pc = 0x34A44Cu;
label_34a44c:
    // 0x34a44c: 0x10000198  b           . + 4 + (0x198 << 2)
label_34a450:
    if (ctx->pc == 0x34A450u) {
        ctx->pc = 0x34A454u;
        goto label_34a454;
    }
    ctx->pc = 0x34A44Cu;
    {
        const bool branch_taken_0x34a44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a44c) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A454u;
label_34a454:
    // 0x34a454: 0xc0d2c08  jal         func_34B020
label_34a458:
    if (ctx->pc == 0x34A458u) {
        ctx->pc = 0x34A45Cu;
        goto label_34a45c;
    }
    ctx->pc = 0x34A454u;
    SET_GPR_U32(ctx, 31, 0x34A45Cu);
    ctx->pc = 0x34B020u;
    if (runtime->hasFunction(0x34B020u)) {
        auto targetFn = runtime->lookupFunction(0x34B020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A45Cu; }
        if (ctx->pc != 0x34A45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034B020_0x34b020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A45Cu; }
        if (ctx->pc != 0x34A45Cu) { return; }
    }
    ctx->pc = 0x34A45Cu;
label_34a45c:
    // 0x34a45c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_34a460:
    if (ctx->pc == 0x34A460u) {
        ctx->pc = 0x34A460u;
            // 0x34a460: 0x8ea40790  lw          $a0, 0x790($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
        ctx->pc = 0x34A464u;
        goto label_34a464;
    }
    ctx->pc = 0x34A45Cu;
    {
        const bool branch_taken_0x34a45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a45c) {
            ctx->pc = 0x34A460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A45Cu;
            // 0x34a460: 0x8ea40790  lw          $a0, 0x790($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A478u;
            goto label_34a478;
        }
    }
    ctx->pc = 0x34A464u;
label_34a464:
    // 0x34a464: 0xc0d2c4c  jal         func_34B130
label_34a468:
    if (ctx->pc == 0x34A468u) {
        ctx->pc = 0x34A468u;
            // 0x34a468: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A46Cu;
        goto label_34a46c;
    }
    ctx->pc = 0x34A464u;
    SET_GPR_U32(ctx, 31, 0x34A46Cu);
    ctx->pc = 0x34A468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A464u;
            // 0x34a468: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34B130u;
    if (runtime->hasFunction(0x34B130u)) {
        auto targetFn = runtime->lookupFunction(0x34B130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A46Cu; }
        if (ctx->pc != 0x34A46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034B130_0x34b130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A46Cu; }
        if (ctx->pc != 0x34A46Cu) { return; }
    }
    ctx->pc = 0x34A46Cu;
label_34a46c:
    // 0x34a46c: 0x14400190  bnez        $v0, . + 4 + (0x190 << 2)
label_34a470:
    if (ctx->pc == 0x34A470u) {
        ctx->pc = 0x34A474u;
        goto label_34a474;
    }
    ctx->pc = 0x34A46Cu;
    {
        const bool branch_taken_0x34a46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a46c) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A474u;
label_34a474:
    // 0x34a474: 0x8ea40790  lw          $a0, 0x790($s5)
    ctx->pc = 0x34a474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
label_34a478:
    // 0x34a478: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34a478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_34a47c:
    // 0x34a47c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34a47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34a480:
    // 0x34a480: 0x54600122  bnel        $v1, $zero, . + 4 + (0x122 << 2)
label_34a484:
    if (ctx->pc == 0x34A484u) {
        ctx->pc = 0x34A484u;
            // 0x34a484: 0x8ea50790  lw          $a1, 0x790($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
        ctx->pc = 0x34A488u;
        goto label_34a488;
    }
    ctx->pc = 0x34A480u;
    {
        const bool branch_taken_0x34a480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a480) {
            ctx->pc = 0x34A484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A480u;
            // 0x34a484: 0x8ea50790  lw          $a1, 0x790($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A90Cu;
            goto label_34a90c;
        }
    }
    ctx->pc = 0x34A488u;
label_34a488:
    // 0x34a488: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x34a488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_34a48c:
    // 0x34a48c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_34a490:
    // 0x34a490: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x34a490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_34a494:
    // 0x34a494: 0xc6a007a4  lwc1        $f0, 0x7A4($s5)
    ctx->pc = 0x34a494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34a498:
    // 0x34a498: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x34a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34a49c:
    // 0x34a49c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a49cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34a4a0:
    // 0x34a4a0: 0xe6a007a4  swc1        $f0, 0x7A4($s5)
    ctx->pc = 0x34a4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1956), bits); }
label_34a4a4:
    // 0x34a4a4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x34a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_34a4a8:
    // 0x34a4a8: 0xc6a207ac  lwc1        $f2, 0x7AC($s5)
    ctx->pc = 0x34a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34a4ac:
    // 0x34a4ac: 0xc6a107a8  lwc1        $f1, 0x7A8($s5)
    ctx->pc = 0x34a4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34a4b0:
    // 0x34a4b0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x34a4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34a4b4:
    // 0x34a4b4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x34a4b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_34a4b8:
    // 0x34a4b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34a4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34a4bc:
    // 0x34a4bc: 0x45030035  bc1tl       . + 4 + (0x35 << 2)
label_34a4c0:
    if (ctx->pc == 0x34A4C0u) {
        ctx->pc = 0x34A4C0u;
            // 0x34a4c0: 0xc6a107a8  lwc1        $f1, 0x7A8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x34A4C4u;
        goto label_34a4c4;
    }
    ctx->pc = 0x34A4BCu;
    {
        const bool branch_taken_0x34a4bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a4bc) {
            ctx->pc = 0x34A4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A4BCu;
            // 0x34a4c0: 0xc6a107a8  lwc1        $f1, 0x7A8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A594u;
            goto label_34a594;
        }
    }
    ctx->pc = 0x34A4C4u;
label_34a4c4:
    // 0x34a4c4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x34a4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34a4c8:
    // 0x34a4c8: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_34a4cc:
    if (ctx->pc == 0x34A4CCu) {
        ctx->pc = 0x34A4D0u;
        goto label_34a4d0;
    }
    ctx->pc = 0x34A4C8u;
    {
        const bool branch_taken_0x34a4c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a4c8) {
            ctx->pc = 0x34A590u;
            goto label_34a590;
        }
    }
    ctx->pc = 0x34A4D0u;
label_34a4d0:
    // 0x34a4d0: 0x96a30830  lhu         $v1, 0x830($s5)
    ctx->pc = 0x34a4d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2096)));
label_34a4d4:
    // 0x34a4d4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_34a4d8:
    if (ctx->pc == 0x34A4D8u) {
        ctx->pc = 0x34A4D8u;
            // 0x34a4d8: 0x26b30830  addiu       $s3, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->pc = 0x34A4DCu;
        goto label_34a4dc;
    }
    ctx->pc = 0x34A4D4u;
    {
        const bool branch_taken_0x34a4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A4D4u;
            // 0x34a4d8: 0x26b30830  addiu       $s3, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a4d4) {
            ctx->pc = 0x34A590u;
            goto label_34a590;
        }
    }
    ctx->pc = 0x34A4DCu;
label_34a4dc:
    // 0x34a4dc: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x34a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_34a4e0:
    // 0x34a4e0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34a4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34a4e4:
    // 0x34a4e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34a4e8:
    // 0x34a4e8: 0xc040140  jal         func_100500
label_34a4ec:
    if (ctx->pc == 0x34A4ECu) {
        ctx->pc = 0x34A4ECu;
            // 0x34a4ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A4F0u;
        goto label_34a4f0;
    }
    ctx->pc = 0x34A4E8u;
    SET_GPR_U32(ctx, 31, 0x34A4F0u);
    ctx->pc = 0x34A4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A4E8u;
            // 0x34a4ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A4F0u; }
        if (ctx->pc != 0x34A4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A4F0u; }
        if (ctx->pc != 0x34A4F0u) { return; }
    }
    ctx->pc = 0x34A4F0u;
label_34a4f0:
    // 0x34a4f0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_34a4f4:
    if (ctx->pc == 0x34A4F4u) {
        ctx->pc = 0x34A4F4u;
            // 0x34a4f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A4F8u;
        goto label_34a4f8;
    }
    ctx->pc = 0x34A4F0u;
    {
        const bool branch_taken_0x34a4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A4F0u;
            // 0x34a4f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a4f0) {
            ctx->pc = 0x34A580u;
            goto label_34a580;
        }
    }
    ctx->pc = 0x34A4F8u;
label_34a4f8:
    // 0x34a4f8: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x34a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_34a4fc:
    // 0x34a4fc: 0x8e76000c  lw          $s6, 0xC($s3)
    ctx->pc = 0x34a4fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_34a500:
    // 0x34a500: 0xc6740010  lwc1        $f20, 0x10($s3)
    ctx->pc = 0x34a500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_34a504:
    // 0x34a504: 0x8e770008  lw          $s7, 0x8($s3)
    ctx->pc = 0x34a504u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_34a508:
    // 0x34a508: 0xc6750004  lwc1        $f21, 0x4($s3)
    ctx->pc = 0x34a508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_34a50c:
    // 0x34a50c: 0x967e0002  lhu         $fp, 0x2($s3)
    ctx->pc = 0x34a50cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_34a510:
    // 0x34a510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34a510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34a514:
    // 0x34a514: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x34a514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_34a518:
    // 0x34a518: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x34a518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_34a51c:
    // 0x34a51c: 0xc10ca68  jal         func_4329A0
label_34a520:
    if (ctx->pc == 0x34A520u) {
        ctx->pc = 0x34A520u;
            // 0x34a520: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x34A524u;
        goto label_34a524;
    }
    ctx->pc = 0x34A51Cu;
    SET_GPR_U32(ctx, 31, 0x34A524u);
    ctx->pc = 0x34A520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A51Cu;
            // 0x34a520: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A524u; }
        if (ctx->pc != 0x34A524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A524u; }
        if (ctx->pc != 0x34A524u) { return; }
    }
    ctx->pc = 0x34A524u;
label_34a524:
    // 0x34a524: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34a524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34a528:
    // 0x34a528: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x34a528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_34a52c:
    // 0x34a52c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x34a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_34a530:
    // 0x34a530: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x34a530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_34a534:
    // 0x34a534: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x34a534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_34a538:
    // 0x34a538: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x34a538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_34a53c:
    // 0x34a53c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34a540:
    // 0x34a540: 0x2463e420  addiu       $v1, $v1, -0x1BE0
    ctx->pc = 0x34a540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960160));
label_34a544:
    // 0x34a544: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x34a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_34a548:
    // 0x34a548: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x34a548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_34a54c:
    // 0x34a54c: 0xe6550054  swc1        $f21, 0x54($s2)
    ctx->pc = 0x34a54cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_34a550:
    // 0x34a550: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34a550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34a554:
    // 0x34a554: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x34a554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_34a558:
    // 0x34a558: 0xae56005c  sw          $s6, 0x5C($s2)
    ctx->pc = 0x34a558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 22));
label_34a55c:
    // 0x34a55c: 0xae450060  sw          $a1, 0x60($s2)
    ctx->pc = 0x34a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
label_34a560:
    // 0x34a560: 0xae570064  sw          $s7, 0x64($s2)
    ctx->pc = 0x34a560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 23));
label_34a564:
    // 0x34a564: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x34a564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_34a568:
    // 0x34a568: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34a568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_34a56c:
    // 0x34a56c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x34a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_34a570:
    // 0x34a570: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x34a570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_34a574:
    // 0x34a574: 0xa240006c  sb          $zero, 0x6C($s2)
    ctx->pc = 0x34a574u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 0));
label_34a578:
    // 0x34a578: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x34a578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_34a57c:
    // 0x34a57c: 0xe6540070  swc1        $f20, 0x70($s2)
    ctx->pc = 0x34a57cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_34a580:
    // 0x34a580: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34a584:
    // 0x34a584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34a584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a588:
    // 0x34a588: 0xc04a576  jal         func_1295D8
label_34a58c:
    if (ctx->pc == 0x34A58Cu) {
        ctx->pc = 0x34A58Cu;
            // 0x34a58c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x34A590u;
        goto label_34a590;
    }
    ctx->pc = 0x34A588u;
    SET_GPR_U32(ctx, 31, 0x34A590u);
    ctx->pc = 0x34A58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A588u;
            // 0x34a58c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A590u; }
        if (ctx->pc != 0x34A590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A590u; }
        if (ctx->pc != 0x34A590u) { return; }
    }
    ctx->pc = 0x34A590u;
label_34a590:
    // 0x34a590: 0xc6a107a8  lwc1        $f1, 0x7A8($s5)
    ctx->pc = 0x34a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34a594:
    // 0x34a594: 0xc6a007ac  lwc1        $f0, 0x7AC($s5)
    ctx->pc = 0x34a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34a598:
    // 0x34a598: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34a598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34a59c:
    // 0x34a59c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_34a5a0:
    if (ctx->pc == 0x34A5A0u) {
        ctx->pc = 0x34A5A4u;
        goto label_34a5a4;
    }
    ctx->pc = 0x34A59Cu;
    {
        const bool branch_taken_0x34a59c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a59c) {
            ctx->pc = 0x34A5ACu;
            goto label_34a5ac;
        }
    }
    ctx->pc = 0x34A5A4u;
label_34a5a4:
    // 0x34a5a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_34a5a8:
    if (ctx->pc == 0x34A5A8u) {
        ctx->pc = 0x34A5A8u;
            // 0x34a5a8: 0x64140001  daddiu      $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x34A5ACu;
        goto label_34a5ac;
    }
    ctx->pc = 0x34A5A4u;
    {
        const bool branch_taken_0x34a5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A5A4u;
            // 0x34a5a8: 0x64140001  daddiu      $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a5a4) {
            ctx->pc = 0x34A5C0u;
            goto label_34a5c0;
        }
    }
    ctx->pc = 0x34A5ACu;
label_34a5ac:
    // 0x34a5ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_34a5b0:
    // 0x34a5b0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x34a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_34a5b4:
    // 0x34a5b4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x34a5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34a5b8:
    // 0x34a5b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34a5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_34a5bc:
    // 0x34a5bc: 0xe6a007a8  swc1        $f0, 0x7A8($s5)
    ctx->pc = 0x34a5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1960), bits); }
label_34a5c0:
    // 0x34a5c0: 0x8ea50790  lw          $a1, 0x790($s5)
    ctx->pc = 0x34a5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
label_34a5c4:
    // 0x34a5c4: 0x30a30400  andi        $v1, $a1, 0x400
    ctx->pc = 0x34a5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
label_34a5c8:
    // 0x34a5c8: 0x50600040  beql        $v1, $zero, . + 4 + (0x40 << 2)
label_34a5cc:
    if (ctx->pc == 0x34A5CCu) {
        ctx->pc = 0x34A5CCu;
            // 0x34a5cc: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x34A5D0u;
        goto label_34a5d0;
    }
    ctx->pc = 0x34A5C8u;
    {
        const bool branch_taken_0x34a5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a5c8) {
            ctx->pc = 0x34A5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A5C8u;
            // 0x34a5cc: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A6CCu;
            goto label_34a6cc;
        }
    }
    ctx->pc = 0x34A5D0u;
label_34a5d0:
    // 0x34a5d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34a5d4:
    // 0x34a5d4: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x34a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_34a5d8:
    // 0x34a5d8: 0xc05ccc0  jal         func_173300
label_34a5dc:
    if (ctx->pc == 0x34A5DCu) {
        ctx->pc = 0x34A5DCu;
            // 0x34a5dc: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->pc = 0x34A5E0u;
        goto label_34a5e0;
    }
    ctx->pc = 0x34A5D8u;
    SET_GPR_U32(ctx, 31, 0x34A5E0u);
    ctx->pc = 0x34A5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A5D8u;
            // 0x34a5dc: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173300u;
    if (runtime->hasFunction(0x173300u)) {
        auto targetFn = runtime->lookupFunction(0x173300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A5E0u; }
        if (ctx->pc != 0x34A5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173300_0x173300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A5E0u; }
        if (ctx->pc != 0x34A5E0u) { return; }
    }
    ctx->pc = 0x34A5E0u;
label_34a5e0:
    // 0x34a5e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34a5e4:
    // 0x34a5e4: 0x14430132  bne         $v0, $v1, . + 4 + (0x132 << 2)
label_34a5e8:
    if (ctx->pc == 0x34A5E8u) {
        ctx->pc = 0x34A5ECu;
        goto label_34a5ec;
    }
    ctx->pc = 0x34A5E4u;
    {
        const bool branch_taken_0x34a5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a5e4) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A5ECu;
label_34a5ec:
    // 0x34a5ec: 0x8ea40790  lw          $a0, 0x790($s5)
    ctx->pc = 0x34a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
label_34a5f0:
    // 0x34a5f0: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x34a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_34a5f4:
    // 0x34a5f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34a5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34a5f8:
    // 0x34a5f8: 0xaea30790  sw          $v1, 0x790($s5)
    ctx->pc = 0x34a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1936), GPR_U32(ctx, 3));
label_34a5fc:
    // 0x34a5fc: 0x96a30830  lhu         $v1, 0x830($s5)
    ctx->pc = 0x34a5fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2096)));
label_34a600:
    // 0x34a600: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_34a604:
    if (ctx->pc == 0x34A604u) {
        ctx->pc = 0x34A604u;
            // 0x34a604: 0x26b40830  addiu       $s4, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->pc = 0x34A608u;
        goto label_34a608;
    }
    ctx->pc = 0x34A600u;
    {
        const bool branch_taken_0x34a600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A600u;
            // 0x34a604: 0x26b40830  addiu       $s4, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a600) {
            ctx->pc = 0x34A6BCu;
            goto label_34a6bc;
        }
    }
    ctx->pc = 0x34A608u;
label_34a608:
    // 0x34a608: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x34a608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_34a60c:
    // 0x34a60c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34a60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34a610:
    // 0x34a610: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34a614:
    // 0x34a614: 0xc040140  jal         func_100500
label_34a618:
    if (ctx->pc == 0x34A618u) {
        ctx->pc = 0x34A618u;
            // 0x34a618: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A61Cu;
        goto label_34a61c;
    }
    ctx->pc = 0x34A614u;
    SET_GPR_U32(ctx, 31, 0x34A61Cu);
    ctx->pc = 0x34A618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A614u;
            // 0x34a618: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A61Cu; }
        if (ctx->pc != 0x34A61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A61Cu; }
        if (ctx->pc != 0x34A61Cu) { return; }
    }
    ctx->pc = 0x34A61Cu;
label_34a61c:
    // 0x34a61c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_34a620:
    if (ctx->pc == 0x34A620u) {
        ctx->pc = 0x34A620u;
            // 0x34a620: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A624u;
        goto label_34a624;
    }
    ctx->pc = 0x34A61Cu;
    {
        const bool branch_taken_0x34a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A61Cu;
            // 0x34a620: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a61c) {
            ctx->pc = 0x34A6ACu;
            goto label_34a6ac;
        }
    }
    ctx->pc = 0x34A624u;
label_34a624:
    // 0x34a624: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x34a624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_34a628:
    // 0x34a628: 0x8e92000c  lw          $s2, 0xC($s4)
    ctx->pc = 0x34a628u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_34a62c:
    // 0x34a62c: 0xc6940010  lwc1        $f20, 0x10($s4)
    ctx->pc = 0x34a62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_34a630:
    // 0x34a630: 0x8e910008  lw          $s1, 0x8($s4)
    ctx->pc = 0x34a630u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_34a634:
    // 0x34a634: 0xc6950004  lwc1        $f21, 0x4($s4)
    ctx->pc = 0x34a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_34a638:
    // 0x34a638: 0x96900002  lhu         $s0, 0x2($s4)
    ctx->pc = 0x34a638u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_34a63c:
    // 0x34a63c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34a640:
    // 0x34a640: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x34a640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_34a644:
    // 0x34a644: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x34a644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_34a648:
    // 0x34a648: 0xc10ca68  jal         func_4329A0
label_34a64c:
    if (ctx->pc == 0x34A64Cu) {
        ctx->pc = 0x34A64Cu;
            // 0x34a64c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x34A650u;
        goto label_34a650;
    }
    ctx->pc = 0x34A648u;
    SET_GPR_U32(ctx, 31, 0x34A650u);
    ctx->pc = 0x34A64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A648u;
            // 0x34a64c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A650u; }
        if (ctx->pc != 0x34A650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A650u; }
        if (ctx->pc != 0x34A650u) { return; }
    }
    ctx->pc = 0x34A650u;
label_34a650:
    // 0x34a650: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34a650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34a654:
    // 0x34a654: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x34a654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_34a658:
    // 0x34a658: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x34a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_34a65c:
    // 0x34a65c: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x34a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_34a660:
    // 0x34a660: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x34a660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_34a664:
    // 0x34a664: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x34a664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_34a668:
    // 0x34a668: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34a668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34a66c:
    // 0x34a66c: 0x2463e420  addiu       $v1, $v1, -0x1BE0
    ctx->pc = 0x34a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960160));
label_34a670:
    // 0x34a670: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x34a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_34a674:
    // 0x34a674: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x34a674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_34a678:
    // 0x34a678: 0xe6750054  swc1        $f21, 0x54($s3)
    ctx->pc = 0x34a678u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
label_34a67c:
    // 0x34a67c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34a680:
    // 0x34a680: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x34a680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_34a684:
    // 0x34a684: 0xae72005c  sw          $s2, 0x5C($s3)
    ctx->pc = 0x34a684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 18));
label_34a688:
    // 0x34a688: 0xae650060  sw          $a1, 0x60($s3)
    ctx->pc = 0x34a688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 5));
label_34a68c:
    // 0x34a68c: 0xae710064  sw          $s1, 0x64($s3)
    ctx->pc = 0x34a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 17));
label_34a690:
    // 0x34a690: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x34a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_34a694:
    // 0x34a694: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_34a698:
    // 0x34a698: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x34a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_34a69c:
    // 0x34a69c: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x34a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_34a6a0:
    // 0x34a6a0: 0xa260006c  sb          $zero, 0x6C($s3)
    ctx->pc = 0x34a6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 108), (uint8_t)GPR_U32(ctx, 0));
label_34a6a4:
    // 0x34a6a4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x34a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_34a6a8:
    // 0x34a6a8: 0xe6740070  swc1        $f20, 0x70($s3)
    ctx->pc = 0x34a6a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
label_34a6ac:
    // 0x34a6ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34a6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34a6b0:
    // 0x34a6b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34a6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a6b4:
    // 0x34a6b4: 0xc04a576  jal         func_1295D8
label_34a6b8:
    if (ctx->pc == 0x34A6B8u) {
        ctx->pc = 0x34A6B8u;
            // 0x34a6b8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x34A6BCu;
        goto label_34a6bc;
    }
    ctx->pc = 0x34A6B4u;
    SET_GPR_U32(ctx, 31, 0x34A6BCu);
    ctx->pc = 0x34A6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A6B4u;
            // 0x34a6b8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A6BCu; }
        if (ctx->pc != 0x34A6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A6BCu; }
        if (ctx->pc != 0x34A6BCu) { return; }
    }
    ctx->pc = 0x34A6BCu;
label_34a6bc:
    // 0x34a6bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_34a6c0:
    // 0x34a6c0: 0xaea307a8  sw          $v1, 0x7A8($s5)
    ctx->pc = 0x34a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1960), GPR_U32(ctx, 3));
label_34a6c4:
    // 0x34a6c4: 0x100000fa  b           . + 4 + (0xFA << 2)
label_34a6c8:
    if (ctx->pc == 0x34A6C8u) {
        ctx->pc = 0x34A6C8u;
            // 0x34a6c8: 0xaea307a4  sw          $v1, 0x7A4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1956), GPR_U32(ctx, 3));
        ctx->pc = 0x34A6CCu;
        goto label_34a6cc;
    }
    ctx->pc = 0x34A6C4u;
    {
        const bool branch_taken_0x34a6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A6C4u;
            // 0x34a6c8: 0xaea307a4  sw          $v1, 0x7A4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a6c4) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A6CCu;
label_34a6cc:
    // 0x34a6cc: 0x50600054  beql        $v1, $zero, . + 4 + (0x54 << 2)
label_34a6d0:
    if (ctx->pc == 0x34A6D0u) {
        ctx->pc = 0x34A6D0u;
            // 0x34a6d0: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x34A6D4u;
        goto label_34a6d4;
    }
    ctx->pc = 0x34A6CCu;
    {
        const bool branch_taken_0x34a6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a6cc) {
            ctx->pc = 0x34A6D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A6CCu;
            // 0x34a6d0: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A820u;
            goto label_34a820;
        }
    }
    ctx->pc = 0x34A6D4u;
label_34a6d4:
    // 0x34a6d4: 0x86a407b4  lh          $a0, 0x7B4($s5)
    ctx->pc = 0x34a6d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1972)));
label_34a6d8:
    // 0x34a6d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_34a6dc:
    // 0x34a6dc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x34a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_34a6e0:
    // 0x34a6e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34a6e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34a6e4:
    // 0x34a6e4: 0x0  nop
    ctx->pc = 0x34a6e4u;
    // NOP
label_34a6e8:
    // 0x34a6e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34a6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_34a6ec:
    // 0x34a6ec: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x34a6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34a6f0:
    // 0x34a6f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34a6f4:
    // 0x34a6f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34a6f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_34a6f8:
    // 0x34a6f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34a6f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_34a6fc:
    // 0x34a6fc: 0x0  nop
    ctx->pc = 0x34a6fcu;
    // NOP
label_34a700:
    // 0x34a700: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x34a700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_34a704:
    // 0x34a704: 0xa6a307b4  sh          $v1, 0x7B4($s5)
    ctx->pc = 0x34a704u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1972), (uint16_t)GPR_U32(ctx, 3));
label_34a708:
    // 0x34a708: 0x86a307b6  lh          $v1, 0x7B6($s5)
    ctx->pc = 0x34a708u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1974)));
label_34a70c:
    // 0x34a70c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34a70cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_34a710:
    // 0x34a710: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x34a710u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_34a714:
    // 0x34a714: 0x146000e6  bnez        $v1, . + 4 + (0xE6 << 2)
label_34a718:
    if (ctx->pc == 0x34A718u) {
        ctx->pc = 0x34A71Cu;
        goto label_34a71c;
    }
    ctx->pc = 0x34A714u;
    {
        const bool branch_taken_0x34a714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a714) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A71Cu;
label_34a71c:
    // 0x34a71c: 0x8ea50790  lw          $a1, 0x790($s5)
    ctx->pc = 0x34a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
label_34a720:
    // 0x34a720: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x34a720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_34a724:
    // 0x34a724: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34a724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_34a728:
    // 0x34a728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34a72c:
    // 0x34a72c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x34a72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_34a730:
    // 0x34a730: 0xaea40790  sw          $a0, 0x790($s5)
    ctx->pc = 0x34a730u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1936), GPR_U32(ctx, 4));
label_34a734:
    // 0x34a734: 0xaea307a8  sw          $v1, 0x7A8($s5)
    ctx->pc = 0x34a734u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1960), GPR_U32(ctx, 3));
label_34a738:
    // 0x34a738: 0x8ea40790  lw          $a0, 0x790($s5)
    ctx->pc = 0x34a738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
label_34a73c:
    // 0x34a73c: 0x30830800  andi        $v1, $a0, 0x800
    ctx->pc = 0x34a73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_34a740:
    // 0x34a740: 0x106000db  beqz        $v1, . + 4 + (0xDB << 2)
label_34a744:
    if (ctx->pc == 0x34A744u) {
        ctx->pc = 0x34A748u;
        goto label_34a748;
    }
    ctx->pc = 0x34A740u;
    {
        const bool branch_taken_0x34a740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a740) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A748u;
label_34a748:
    // 0x34a748: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x34a748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_34a74c:
    // 0x34a74c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34a74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34a750:
    // 0x34a750: 0xaea30790  sw          $v1, 0x790($s5)
    ctx->pc = 0x34a750u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1936), GPR_U32(ctx, 3));
label_34a754:
    // 0x34a754: 0xe6a007a4  swc1        $f0, 0x7A4($s5)
    ctx->pc = 0x34a754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1956), bits); }
label_34a758:
    // 0x34a758: 0x96a30830  lhu         $v1, 0x830($s5)
    ctx->pc = 0x34a758u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2096)));
label_34a75c:
    // 0x34a75c: 0x106000d4  beqz        $v1, . + 4 + (0xD4 << 2)
label_34a760:
    if (ctx->pc == 0x34A760u) {
        ctx->pc = 0x34A760u;
            // 0x34a760: 0x26b30830  addiu       $s3, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->pc = 0x34A764u;
        goto label_34a764;
    }
    ctx->pc = 0x34A75Cu;
    {
        const bool branch_taken_0x34a75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A75Cu;
            // 0x34a760: 0x26b30830  addiu       $s3, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a75c) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A764u;
label_34a764:
    // 0x34a764: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x34a764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_34a768:
    // 0x34a768: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34a768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34a76c:
    // 0x34a76c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34a770:
    // 0x34a770: 0xc040140  jal         func_100500
label_34a774:
    if (ctx->pc == 0x34A774u) {
        ctx->pc = 0x34A774u;
            // 0x34a774: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A778u;
        goto label_34a778;
    }
    ctx->pc = 0x34A770u;
    SET_GPR_U32(ctx, 31, 0x34A778u);
    ctx->pc = 0x34A774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A770u;
            // 0x34a774: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A778u; }
        if (ctx->pc != 0x34A778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A778u; }
        if (ctx->pc != 0x34A778u) { return; }
    }
    ctx->pc = 0x34A778u;
label_34a778:
    // 0x34a778: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_34a77c:
    if (ctx->pc == 0x34A77Cu) {
        ctx->pc = 0x34A77Cu;
            // 0x34a77c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A780u;
        goto label_34a780;
    }
    ctx->pc = 0x34A778u;
    {
        const bool branch_taken_0x34a778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A778u;
            // 0x34a77c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a778) {
            ctx->pc = 0x34A808u;
            goto label_34a808;
        }
    }
    ctx->pc = 0x34A780u;
label_34a780:
    // 0x34a780: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x34a780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_34a784:
    // 0x34a784: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x34a784u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_34a788:
    // 0x34a788: 0xc6740010  lwc1        $f20, 0x10($s3)
    ctx->pc = 0x34a788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_34a78c:
    // 0x34a78c: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x34a78cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_34a790:
    // 0x34a790: 0xc6750004  lwc1        $f21, 0x4($s3)
    ctx->pc = 0x34a790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_34a794:
    // 0x34a794: 0x96740002  lhu         $s4, 0x2($s3)
    ctx->pc = 0x34a794u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_34a798:
    // 0x34a798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34a798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34a79c:
    // 0x34a79c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x34a79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_34a7a0:
    // 0x34a7a0: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x34a7a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_34a7a4:
    // 0x34a7a4: 0xc10ca68  jal         func_4329A0
label_34a7a8:
    if (ctx->pc == 0x34A7A8u) {
        ctx->pc = 0x34A7A8u;
            // 0x34a7a8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x34A7ACu;
        goto label_34a7ac;
    }
    ctx->pc = 0x34A7A4u;
    SET_GPR_U32(ctx, 31, 0x34A7ACu);
    ctx->pc = 0x34A7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A7A4u;
            // 0x34a7a8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A7ACu; }
        if (ctx->pc != 0x34A7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A7ACu; }
        if (ctx->pc != 0x34A7ACu) { return; }
    }
    ctx->pc = 0x34A7ACu;
label_34a7ac:
    // 0x34a7ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34a7b0:
    // 0x34a7b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x34a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_34a7b4:
    // 0x34a7b4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x34a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_34a7b8:
    // 0x34a7b8: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x34a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_34a7bc:
    // 0x34a7bc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x34a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_34a7c0:
    // 0x34a7c0: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x34a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_34a7c4:
    // 0x34a7c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34a7c8:
    // 0x34a7c8: 0x2463e420  addiu       $v1, $v1, -0x1BE0
    ctx->pc = 0x34a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960160));
label_34a7cc:
    // 0x34a7cc: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x34a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_34a7d0:
    // 0x34a7d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x34a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_34a7d4:
    // 0x34a7d4: 0xe6550054  swc1        $f21, 0x54($s2)
    ctx->pc = 0x34a7d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_34a7d8:
    // 0x34a7d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34a7dc:
    // 0x34a7dc: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x34a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_34a7e0:
    // 0x34a7e0: 0xae51005c  sw          $s1, 0x5C($s2)
    ctx->pc = 0x34a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 17));
label_34a7e4:
    // 0x34a7e4: 0xae450060  sw          $a1, 0x60($s2)
    ctx->pc = 0x34a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
label_34a7e8:
    // 0x34a7e8: 0xae500064  sw          $s0, 0x64($s2)
    ctx->pc = 0x34a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 16));
label_34a7ec:
    // 0x34a7ec: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x34a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_34a7f0:
    // 0x34a7f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_34a7f4:
    // 0x34a7f4: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x34a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_34a7f8:
    // 0x34a7f8: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x34a7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_34a7fc:
    // 0x34a7fc: 0xa240006c  sb          $zero, 0x6C($s2)
    ctx->pc = 0x34a7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 0));
label_34a800:
    // 0x34a800: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x34a800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_34a804:
    // 0x34a804: 0xe6540070  swc1        $f20, 0x70($s2)
    ctx->pc = 0x34a804u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_34a808:
    // 0x34a808: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34a80c:
    // 0x34a80c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34a80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a810:
    // 0x34a810: 0xc04a576  jal         func_1295D8
label_34a814:
    if (ctx->pc == 0x34A814u) {
        ctx->pc = 0x34A814u;
            // 0x34a814: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x34A818u;
        goto label_34a818;
    }
    ctx->pc = 0x34A810u;
    SET_GPR_U32(ctx, 31, 0x34A818u);
    ctx->pc = 0x34A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A810u;
            // 0x34a814: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A818u; }
        if (ctx->pc != 0x34A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A818u; }
        if (ctx->pc != 0x34A818u) { return; }
    }
    ctx->pc = 0x34A818u;
label_34a818:
    // 0x34a818: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_34a81c:
    if (ctx->pc == 0x34A81Cu) {
        ctx->pc = 0x34A820u;
        goto label_34a820;
    }
    ctx->pc = 0x34A818u;
    {
        const bool branch_taken_0x34a818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a818) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A820u;
label_34a820:
    // 0x34a820: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_34a824:
    if (ctx->pc == 0x34A824u) {
        ctx->pc = 0x34A824u;
            // 0x34a824: 0x30a30002  andi        $v1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x34A828u;
        goto label_34a828;
    }
    ctx->pc = 0x34A820u;
    {
        const bool branch_taken_0x34a820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a820) {
            ctx->pc = 0x34A824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A820u;
            // 0x34a824: 0x30a30002  andi        $v1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A850u;
            goto label_34a850;
        }
    }
    ctx->pc = 0x34A828u;
label_34a828:
    // 0x34a828: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x34a828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_34a82c:
    // 0x34a82c: 0x8ea307b8  lw          $v1, 0x7B8($s5)
    ctx->pc = 0x34a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1976)));
label_34a830:
    // 0x34a830: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34a830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34a834:
    // 0x34a834: 0x1060009e  beqz        $v1, . + 4 + (0x9E << 2)
label_34a838:
    if (ctx->pc == 0x34A838u) {
        ctx->pc = 0x34A83Cu;
        goto label_34a83c;
    }
    ctx->pc = 0x34A834u;
    {
        const bool branch_taken_0x34a834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a834) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A83Cu;
label_34a83c:
    // 0x34a83c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x34a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_34a840:
    // 0x34a840: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x34a840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_34a844:
    // 0x34a844: 0xaea30790  sw          $v1, 0x790($s5)
    ctx->pc = 0x34a844u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1936), GPR_U32(ctx, 3));
label_34a848:
    // 0x34a848: 0x10000099  b           . + 4 + (0x99 << 2)
label_34a84c:
    if (ctx->pc == 0x34A84Cu) {
        ctx->pc = 0x34A84Cu;
            // 0x34a84c: 0xaea007b8  sw          $zero, 0x7B8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1976), GPR_U32(ctx, 0));
        ctx->pc = 0x34A850u;
        goto label_34a850;
    }
    ctx->pc = 0x34A848u;
    {
        const bool branch_taken_0x34a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A848u;
            // 0x34a84c: 0xaea007b8  sw          $zero, 0x7B8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a848) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A850u;
label_34a850:
    // 0x34a850: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_34a854:
    if (ctx->pc == 0x34A854u) {
        ctx->pc = 0x34A858u;
        goto label_34a858;
    }
    ctx->pc = 0x34A850u;
    {
        const bool branch_taken_0x34a850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a850) {
            ctx->pc = 0x34A8F8u;
            goto label_34a8f8;
        }
    }
    ctx->pc = 0x34A858u;
label_34a858:
    // 0x34a858: 0x12800027  beqz        $s4, . + 4 + (0x27 << 2)
label_34a85c:
    if (ctx->pc == 0x34A85Cu) {
        ctx->pc = 0x34A860u;
        goto label_34a860;
    }
    ctx->pc = 0x34A858u;
    {
        const bool branch_taken_0x34a858 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a858) {
            ctx->pc = 0x34A8F8u;
            goto label_34a8f8;
        }
    }
    ctx->pc = 0x34A860u;
label_34a860:
    // 0x34a860: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x34a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_34a864:
    // 0x34a864: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x34a864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_34a868:
    // 0x34a868: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x34a868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_34a86c:
    // 0x34a86c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x34a86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_34a870:
    // 0x34a870: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_34a874:
    if (ctx->pc == 0x34A874u) {
        ctx->pc = 0x34A874u;
            // 0x34a874: 0xaea60790  sw          $a2, 0x790($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1936), GPR_U32(ctx, 6));
        ctx->pc = 0x34A878u;
        goto label_34a878;
    }
    ctx->pc = 0x34A870u;
    {
        const bool branch_taken_0x34a870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A870u;
            // 0x34a874: 0xaea60790  sw          $a2, 0x790($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1936), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a870) {
            ctx->pc = 0x34A8B8u;
            goto label_34a8b8;
        }
    }
    ctx->pc = 0x34A878u;
label_34a878:
    // 0x34a878: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x34a878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_34a87c:
    // 0x34a87c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x34a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_34a880:
    // 0x34a880: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34a880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_34a884:
    // 0x34a884: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x34a884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_34a888:
    // 0x34a888: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x34a888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_34a88c:
    // 0x34a88c: 0xaea60790  sw          $a2, 0x790($s5)
    ctx->pc = 0x34a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1936), GPR_U32(ctx, 6));
label_34a890:
    // 0x34a890: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x34a890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_34a894:
    // 0x34a894: 0x8ea60798  lw          $a2, 0x798($s5)
    ctx->pc = 0x34a894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1944)));
label_34a898:
    // 0x34a898: 0xaea60794  sw          $a2, 0x794($s5)
    ctx->pc = 0x34a898u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1940), GPR_U32(ctx, 6));
label_34a89c:
    // 0x34a89c: 0xaea507a8  sw          $a1, 0x7A8($s5)
    ctx->pc = 0x34a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1960), GPR_U32(ctx, 5));
label_34a8a0:
    // 0x34a8a0: 0xc6a007b0  lwc1        $f0, 0x7B0($s5)
    ctx->pc = 0x34a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34a8a4:
    // 0x34a8a4: 0xe6a007ac  swc1        $f0, 0x7AC($s5)
    ctx->pc = 0x34a8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1964), bits); }
label_34a8a8:
    // 0x34a8a8: 0xaea407b0  sw          $a0, 0x7B0($s5)
    ctx->pc = 0x34a8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1968), GPR_U32(ctx, 4));
label_34a8ac:
    // 0x34a8ac: 0x8ea40790  lw          $a0, 0x790($s5)
    ctx->pc = 0x34a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
label_34a8b0:
    // 0x34a8b0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x34a8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_34a8b4:
    // 0x34a8b4: 0xaea30790  sw          $v1, 0x790($s5)
    ctx->pc = 0x34a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1936), GPR_U32(ctx, 3));
label_34a8b8:
    // 0x34a8b8: 0x8ea30790  lw          $v1, 0x790($s5)
    ctx->pc = 0x34a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
label_34a8bc:
    // 0x34a8bc: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x34a8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_34a8c0:
    // 0x34a8c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_34a8c4:
    if (ctx->pc == 0x34A8C4u) {
        ctx->pc = 0x34A8C8u;
        goto label_34a8c8;
    }
    ctx->pc = 0x34A8C0u;
    {
        const bool branch_taken_0x34a8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a8c0) {
            ctx->pc = 0x34A8F8u;
            goto label_34a8f8;
        }
    }
    ctx->pc = 0x34A8C8u;
label_34a8c8:
    // 0x34a8c8: 0x8ea40794  lw          $a0, 0x794($s5)
    ctx->pc = 0x34a8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1940)));
label_34a8cc:
    // 0x34a8cc: 0x92a308a8  lbu         $v1, 0x8A8($s5)
    ctx->pc = 0x34a8ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2216)));
label_34a8d0:
    // 0x34a8d0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x34a8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_34a8d4:
    // 0x34a8d4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_34a8d8:
    if (ctx->pc == 0x34A8D8u) {
        ctx->pc = 0x34A8DCu;
        goto label_34a8dc;
    }
    ctx->pc = 0x34A8D4u;
    {
        const bool branch_taken_0x34a8d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a8d4) {
            ctx->pc = 0x34A8F8u;
            goto label_34a8f8;
        }
    }
    ctx->pc = 0x34A8DCu;
label_34a8dc:
    // 0x34a8dc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x34a8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_34a8e0:
    // 0x34a8e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34a8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34a8e4:
    // 0x34a8e4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x34a8e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_34a8e8:
    // 0x34a8e8: 0x320f809  jalr        $t9
label_34a8ec:
    if (ctx->pc == 0x34A8ECu) {
        ctx->pc = 0x34A8ECu;
            // 0x34a8ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A8F0u;
        goto label_34a8f0;
    }
    ctx->pc = 0x34A8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34A8F0u);
        ctx->pc = 0x34A8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A8E8u;
            // 0x34a8ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34A8F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34A8F0u; }
            if (ctx->pc != 0x34A8F0u) { return; }
        }
        }
    }
    ctx->pc = 0x34A8F0u;
label_34a8f0:
    // 0x34a8f0: 0x1000006f  b           . + 4 + (0x6F << 2)
label_34a8f4:
    if (ctx->pc == 0x34A8F4u) {
        ctx->pc = 0x34A8F4u;
            // 0x34a8f4: 0xa6a007b4  sh          $zero, 0x7B4($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 1972), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x34A8F8u;
        goto label_34a8f8;
    }
    ctx->pc = 0x34A8F0u;
    {
        const bool branch_taken_0x34a8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A8F0u;
            // 0x34a8f4: 0xa6a007b4  sh          $zero, 0x7B4($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 1972), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a8f0) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A8F8u;
label_34a8f8:
    // 0x34a8f8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_34a8fc:
    if (ctx->pc == 0x34A8FCu) {
        ctx->pc = 0x34A900u;
        goto label_34a900;
    }
    ctx->pc = 0x34A8F8u;
    {
        const bool branch_taken_0x34a8f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a8f8) {
            ctx->pc = 0x34A908u;
            goto label_34a908;
        }
    }
    ctx->pc = 0x34A900u;
label_34a900:
    // 0x34a900: 0xc0d33a4  jal         func_34CE90
label_34a904:
    if (ctx->pc == 0x34A904u) {
        ctx->pc = 0x34A904u;
            // 0x34a904: 0x8ea40898  lw          $a0, 0x898($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2200)));
        ctx->pc = 0x34A908u;
        goto label_34a908;
    }
    ctx->pc = 0x34A900u;
    SET_GPR_U32(ctx, 31, 0x34A908u);
    ctx->pc = 0x34A904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A900u;
            // 0x34a904: 0x8ea40898  lw          $a0, 0x898($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34CE90u;
    if (runtime->hasFunction(0x34CE90u)) {
        auto targetFn = runtime->lookupFunction(0x34CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A908u; }
        if (ctx->pc != 0x34A908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034CE90_0x34ce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A908u; }
        if (ctx->pc != 0x34A908u) { return; }
    }
    ctx->pc = 0x34A908u;
label_34a908:
    // 0x34a908: 0x8ea50790  lw          $a1, 0x790($s5)
    ctx->pc = 0x34a908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
label_34a90c:
    // 0x34a90c: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x34a90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_34a910:
    // 0x34a910: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_34a914:
    if (ctx->pc == 0x34A914u) {
        ctx->pc = 0x34A914u;
            // 0x34a914: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x34A918u;
        goto label_34a918;
    }
    ctx->pc = 0x34A910u;
    {
        const bool branch_taken_0x34a910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a910) {
            ctx->pc = 0x34A914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A910u;
            // 0x34a914: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A944u;
            goto label_34a944;
        }
    }
    ctx->pc = 0x34A918u;
label_34a918:
    // 0x34a918: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x34a918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34a91c:
    // 0x34a91c: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x34a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_34a920:
    // 0x34a920: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
label_34a924:
    if (ctx->pc == 0x34A924u) {
        ctx->pc = 0x34A928u;
        goto label_34a928;
    }
    ctx->pc = 0x34A920u;
    {
        const bool branch_taken_0x34a920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a920) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A928u;
label_34a928:
    // 0x34a928: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x34a928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_34a92c:
    // 0x34a92c: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
label_34a930:
    if (ctx->pc == 0x34A930u) {
        ctx->pc = 0x34A934u;
        goto label_34a934;
    }
    ctx->pc = 0x34A92Cu;
    {
        const bool branch_taken_0x34a92c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a92c) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A934u;
label_34a934:
    // 0x34a934: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x34a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_34a938:
    // 0x34a938: 0x1083005d  beq         $a0, $v1, . + 4 + (0x5D << 2)
label_34a93c:
    if (ctx->pc == 0x34A93Cu) {
        ctx->pc = 0x34A940u;
        goto label_34a940;
    }
    ctx->pc = 0x34A938u;
    {
        const bool branch_taken_0x34a938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a938) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A940u;
label_34a940:
    // 0x34a940: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x34a940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_34a944:
    // 0x34a944: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_34a948:
    if (ctx->pc == 0x34A948u) {
        ctx->pc = 0x34A94Cu;
        goto label_34a94c;
    }
    ctx->pc = 0x34A944u;
    {
        const bool branch_taken_0x34a944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a944) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A94Cu;
label_34a94c:
    // 0x34a94c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34a950:
    // 0x34a950: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x34a950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_34a954:
    // 0x34a954: 0x24421450  addiu       $v0, $v0, 0x1450
    ctx->pc = 0x34a954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5200));
label_34a958:
    // 0x34a958: 0x8ea40788  lw          $a0, 0x788($s5)
    ctx->pc = 0x34a958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1928)));
label_34a95c:
    // 0x34a95c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_34a960:
    // 0x34a960: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34a964:
    // 0x34a964: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34a968:
    // 0x34a968: 0x40f809  jalr        $v0
label_34a96c:
    if (ctx->pc == 0x34A96Cu) {
        ctx->pc = 0x34A96Cu;
            // 0x34a96c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34A970u;
        goto label_34a970;
    }
    ctx->pc = 0x34A968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34A970u);
        ctx->pc = 0x34A96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A968u;
            // 0x34a96c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34A970u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34A970u; }
            if (ctx->pc != 0x34A970u) { return; }
        }
        }
    }
    ctx->pc = 0x34A970u;
label_34a970:
    // 0x34a970: 0x8ea30788  lw          $v1, 0x788($s5)
    ctx->pc = 0x34a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1928)));
label_34a974:
    // 0x34a974: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x34a974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_34a978:
    // 0x34a978: 0xaea30788  sw          $v1, 0x788($s5)
    ctx->pc = 0x34a978u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1928), GPR_U32(ctx, 3));
label_34a97c:
    // 0x34a97c: 0x8ea3079c  lw          $v1, 0x79C($s5)
    ctx->pc = 0x34a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1948)));
label_34a980:
    // 0x34a980: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34a980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34a984:
    // 0x34a984: 0x1000004a  b           . + 4 + (0x4A << 2)
label_34a988:
    if (ctx->pc == 0x34A988u) {
        ctx->pc = 0x34A988u;
            // 0x34a988: 0xaea3079c  sw          $v1, 0x79C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1948), GPR_U32(ctx, 3));
        ctx->pc = 0x34A98Cu;
        goto label_34a98c;
    }
    ctx->pc = 0x34A984u;
    {
        const bool branch_taken_0x34a984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A984u;
            // 0x34a988: 0xaea3079c  sw          $v1, 0x79C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a984) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A98Cu;
label_34a98c:
    // 0x34a98c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34a990:
    // 0x34a990: 0x8c63a348  lw          $v1, -0x5CB8($v1)
    ctx->pc = 0x34a990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_34a994:
    // 0x34a994: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x34a994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_34a998:
    // 0x34a998: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x34a998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_34a99c:
    // 0x34a99c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x34a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_34a9a0:
    // 0x34a9a0: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
label_34a9a4:
    if (ctx->pc == 0x34A9A4u) {
        ctx->pc = 0x34A9A8u;
        goto label_34a9a8;
    }
    ctx->pc = 0x34A9A0u;
    {
        const bool branch_taken_0x34a9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a9a0) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A9A8u;
label_34a9a8:
    // 0x34a9a8: 0x86a307b4  lh          $v1, 0x7B4($s5)
    ctx->pc = 0x34a9a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1972)));
label_34a9ac:
    // 0x34a9ac: 0x50660037  beql        $v1, $a2, . + 4 + (0x37 << 2)
label_34a9b0:
    if (ctx->pc == 0x34A9B0u) {
        ctx->pc = 0x34A9B0u;
            // 0x34a9b0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x34A9B4u;
        goto label_34a9b4;
    }
    ctx->pc = 0x34A9ACu;
    {
        const bool branch_taken_0x34a9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x34a9ac) {
            ctx->pc = 0x34A9B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A9ACu;
            // 0x34a9b0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AA8Cu;
            goto label_34aa8c;
        }
    }
    ctx->pc = 0x34A9B4u;
label_34a9b4:
    // 0x34a9b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_34a9b8:
    if (ctx->pc == 0x34A9B8u) {
        ctx->pc = 0x34A9BCu;
        goto label_34a9bc;
    }
    ctx->pc = 0x34A9B4u;
    {
        const bool branch_taken_0x34a9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a9b4) {
            ctx->pc = 0x34A9C4u;
            goto label_34a9c4;
        }
    }
    ctx->pc = 0x34A9BCu;
label_34a9bc:
    // 0x34a9bc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_34a9c0:
    if (ctx->pc == 0x34A9C0u) {
        ctx->pc = 0x34A9C4u;
        goto label_34a9c4;
    }
    ctx->pc = 0x34A9BCu;
    {
        const bool branch_taken_0x34a9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a9bc) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34A9C4u;
label_34a9c4:
    // 0x34a9c4: 0xc0da998  jal         func_36A660
label_34a9c8:
    if (ctx->pc == 0x34A9C8u) {
        ctx->pc = 0x34A9CCu;
        goto label_34a9cc;
    }
    ctx->pc = 0x34A9C4u;
    SET_GPR_U32(ctx, 31, 0x34A9CCu);
    ctx->pc = 0x36A660u;
    if (runtime->hasFunction(0x36A660u)) {
        auto targetFn = runtime->lookupFunction(0x36A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A9CCu; }
        if (ctx->pc != 0x34A9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036A660_0x36a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A9CCu; }
        if (ctx->pc != 0x34A9CCu) { return; }
    }
    ctx->pc = 0x34A9CCu;
label_34a9cc:
    // 0x34a9cc: 0xc0e51ac  jal         func_3946B0
label_34a9d0:
    if (ctx->pc == 0x34A9D0u) {
        ctx->pc = 0x34A9D4u;
        goto label_34a9d4;
    }
    ctx->pc = 0x34A9CCu;
    SET_GPR_U32(ctx, 31, 0x34A9D4u);
    ctx->pc = 0x3946B0u;
    if (runtime->hasFunction(0x3946B0u)) {
        auto targetFn = runtime->lookupFunction(0x3946B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A9D4u; }
        if (ctx->pc != 0x34A9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003946B0_0x3946b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A9D4u; }
        if (ctx->pc != 0x34A9D4u) { return; }
    }
    ctx->pc = 0x34A9D4u;
label_34a9d4:
    // 0x34a9d4: 0xc0f99e0  jal         func_3E6780
label_34a9d8:
    if (ctx->pc == 0x34A9D8u) {
        ctx->pc = 0x34A9DCu;
        goto label_34a9dc;
    }
    ctx->pc = 0x34A9D4u;
    SET_GPR_U32(ctx, 31, 0x34A9DCu);
    ctx->pc = 0x3E6780u;
    if (runtime->hasFunction(0x3E6780u)) {
        auto targetFn = runtime->lookupFunction(0x3E6780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A9DCu; }
        if (ctx->pc != 0x34A9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E6780_0x3e6780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A9DCu; }
        if (ctx->pc != 0x34A9DCu) { return; }
    }
    ctx->pc = 0x34A9DCu;
label_34a9dc:
    // 0x34a9dc: 0xc0e535c  jal         func_394D70
label_34a9e0:
    if (ctx->pc == 0x34A9E0u) {
        ctx->pc = 0x34A9E4u;
        goto label_34a9e4;
    }
    ctx->pc = 0x34A9DCu;
    SET_GPR_U32(ctx, 31, 0x34A9E4u);
    ctx->pc = 0x394D70u;
    if (runtime->hasFunction(0x394D70u)) {
        auto targetFn = runtime->lookupFunction(0x394D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A9E4u; }
        if (ctx->pc != 0x34A9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00394D70_0x394d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A9E4u; }
        if (ctx->pc != 0x34A9E4u) { return; }
    }
    ctx->pc = 0x34A9E4u;
label_34a9e4:
    // 0x34a9e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34a9e8:
    // 0x34a9e8: 0x8c63e3e8  lw          $v1, -0x1C18($v1)
    ctx->pc = 0x34a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960104)));
label_34a9ec:
    // 0x34a9ec: 0xa0600013  sb          $zero, 0x13($v1)
    ctx->pc = 0x34a9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 19), (uint8_t)GPR_U32(ctx, 0));
label_34a9f0:
    // 0x34a9f0: 0x8ea50760  lw          $a1, 0x760($s5)
    ctx->pc = 0x34a9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1888)));
label_34a9f4:
    // 0x34a9f4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_34a9f8:
    if (ctx->pc == 0x34A9F8u) {
        ctx->pc = 0x34A9F8u;
            // 0x34a9f8: 0x8ea50768  lw          $a1, 0x768($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1896)));
        ctx->pc = 0x34A9FCu;
        goto label_34a9fc;
    }
    ctx->pc = 0x34A9F4u;
    {
        const bool branch_taken_0x34a9f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a9f4) {
            ctx->pc = 0x34A9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A9F4u;
            // 0x34a9f8: 0x8ea50768  lw          $a1, 0x768($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1896)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AA10u;
            goto label_34aa10;
        }
    }
    ctx->pc = 0x34A9FCu;
label_34a9fc:
    // 0x34a9fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34aa00:
    // 0x34aa00: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34aa04:
    // 0x34aa04: 0xc057b7c  jal         func_15EDF0
label_34aa08:
    if (ctx->pc == 0x34AA08u) {
        ctx->pc = 0x34AA08u;
            // 0x34aa08: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34AA0Cu;
        goto label_34aa0c;
    }
    ctx->pc = 0x34AA04u;
    SET_GPR_U32(ctx, 31, 0x34AA0Cu);
    ctx->pc = 0x34AA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AA04u;
            // 0x34aa08: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AA0Cu; }
        if (ctx->pc != 0x34AA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AA0Cu; }
        if (ctx->pc != 0x34AA0Cu) { return; }
    }
    ctx->pc = 0x34AA0Cu;
label_34aa0c:
    // 0x34aa0c: 0x8ea50768  lw          $a1, 0x768($s5)
    ctx->pc = 0x34aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1896)));
label_34aa10:
    // 0x34aa10: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_34aa14:
    if (ctx->pc == 0x34AA14u) {
        ctx->pc = 0x34AA14u;
            // 0x34aa14: 0x8ea50764  lw          $a1, 0x764($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1892)));
        ctx->pc = 0x34AA18u;
        goto label_34aa18;
    }
    ctx->pc = 0x34AA10u;
    {
        const bool branch_taken_0x34aa10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aa10) {
            ctx->pc = 0x34AA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34AA10u;
            // 0x34aa14: 0x8ea50764  lw          $a1, 0x764($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1892)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AA2Cu;
            goto label_34aa2c;
        }
    }
    ctx->pc = 0x34AA18u;
label_34aa18:
    // 0x34aa18: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34aa1c:
    // 0x34aa1c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34aa20:
    // 0x34aa20: 0xc057b7c  jal         func_15EDF0
label_34aa24:
    if (ctx->pc == 0x34AA24u) {
        ctx->pc = 0x34AA24u;
            // 0x34aa24: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34AA28u;
        goto label_34aa28;
    }
    ctx->pc = 0x34AA20u;
    SET_GPR_U32(ctx, 31, 0x34AA28u);
    ctx->pc = 0x34AA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AA20u;
            // 0x34aa24: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AA28u; }
        if (ctx->pc != 0x34AA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AA28u; }
        if (ctx->pc != 0x34AA28u) { return; }
    }
    ctx->pc = 0x34AA28u;
label_34aa28:
    // 0x34aa28: 0x8ea50764  lw          $a1, 0x764($s5)
    ctx->pc = 0x34aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1892)));
label_34aa2c:
    // 0x34aa2c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_34aa30:
    if (ctx->pc == 0x34AA30u) {
        ctx->pc = 0x34AA30u;
            // 0x34aa30: 0x8ea5076c  lw          $a1, 0x76C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1900)));
        ctx->pc = 0x34AA34u;
        goto label_34aa34;
    }
    ctx->pc = 0x34AA2Cu;
    {
        const bool branch_taken_0x34aa2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aa2c) {
            ctx->pc = 0x34AA30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34AA2Cu;
            // 0x34aa30: 0x8ea5076c  lw          $a1, 0x76C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1900)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AA48u;
            goto label_34aa48;
        }
    }
    ctx->pc = 0x34AA34u;
label_34aa34:
    // 0x34aa34: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34aa38:
    // 0x34aa38: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34aa3c:
    // 0x34aa3c: 0xc057b7c  jal         func_15EDF0
label_34aa40:
    if (ctx->pc == 0x34AA40u) {
        ctx->pc = 0x34AA40u;
            // 0x34aa40: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34AA44u;
        goto label_34aa44;
    }
    ctx->pc = 0x34AA3Cu;
    SET_GPR_U32(ctx, 31, 0x34AA44u);
    ctx->pc = 0x34AA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AA3Cu;
            // 0x34aa40: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AA44u; }
        if (ctx->pc != 0x34AA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AA44u; }
        if (ctx->pc != 0x34AA44u) { return; }
    }
    ctx->pc = 0x34AA44u;
label_34aa44:
    // 0x34aa44: 0x8ea5076c  lw          $a1, 0x76C($s5)
    ctx->pc = 0x34aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1900)));
label_34aa48:
    // 0x34aa48: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_34aa4c:
    if (ctx->pc == 0x34AA4Cu) {
        ctx->pc = 0x34AA4Cu;
            // 0x34aa4c: 0x8ea50784  lw          $a1, 0x784($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1924)));
        ctx->pc = 0x34AA50u;
        goto label_34aa50;
    }
    ctx->pc = 0x34AA48u;
    {
        const bool branch_taken_0x34aa48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aa48) {
            ctx->pc = 0x34AA4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34AA48u;
            // 0x34aa4c: 0x8ea50784  lw          $a1, 0x784($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1924)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AA64u;
            goto label_34aa64;
        }
    }
    ctx->pc = 0x34AA50u;
label_34aa50:
    // 0x34aa50: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34aa54:
    // 0x34aa54: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34aa58:
    // 0x34aa58: 0xc057b7c  jal         func_15EDF0
label_34aa5c:
    if (ctx->pc == 0x34AA5Cu) {
        ctx->pc = 0x34AA5Cu;
            // 0x34aa5c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34AA60u;
        goto label_34aa60;
    }
    ctx->pc = 0x34AA58u;
    SET_GPR_U32(ctx, 31, 0x34AA60u);
    ctx->pc = 0x34AA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AA58u;
            // 0x34aa5c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AA60u; }
        if (ctx->pc != 0x34AA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AA60u; }
        if (ctx->pc != 0x34AA60u) { return; }
    }
    ctx->pc = 0x34AA60u;
label_34aa60:
    // 0x34aa60: 0x8ea50784  lw          $a1, 0x784($s5)
    ctx->pc = 0x34aa60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1924)));
label_34aa64:
    // 0x34aa64: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_34aa68:
    if (ctx->pc == 0x34AA68u) {
        ctx->pc = 0x34AA68u;
            // 0x34aa68: 0x86a307b4  lh          $v1, 0x7B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1972)));
        ctx->pc = 0x34AA6Cu;
        goto label_34aa6c;
    }
    ctx->pc = 0x34AA64u;
    {
        const bool branch_taken_0x34aa64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aa64) {
            ctx->pc = 0x34AA68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34AA64u;
            // 0x34aa68: 0x86a307b4  lh          $v1, 0x7B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1972)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AA80u;
            goto label_34aa80;
        }
    }
    ctx->pc = 0x34AA6Cu;
label_34aa6c:
    // 0x34aa6c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34aa70:
    // 0x34aa70: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34aa74:
    // 0x34aa74: 0xc057b7c  jal         func_15EDF0
label_34aa78:
    if (ctx->pc == 0x34AA78u) {
        ctx->pc = 0x34AA78u;
            // 0x34aa78: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34AA7Cu;
        goto label_34aa7c;
    }
    ctx->pc = 0x34AA74u;
    SET_GPR_U32(ctx, 31, 0x34AA7Cu);
    ctx->pc = 0x34AA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AA74u;
            // 0x34aa78: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AA7Cu; }
        if (ctx->pc != 0x34AA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AA7Cu; }
        if (ctx->pc != 0x34AA7Cu) { return; }
    }
    ctx->pc = 0x34AA7Cu;
label_34aa7c:
    // 0x34aa7c: 0x86a307b4  lh          $v1, 0x7B4($s5)
    ctx->pc = 0x34aa7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1972)));
label_34aa80:
    // 0x34aa80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34aa84:
    // 0x34aa84: 0x1000000a  b           . + 4 + (0xA << 2)
label_34aa88:
    if (ctx->pc == 0x34AA88u) {
        ctx->pc = 0x34AA88u;
            // 0x34aa88: 0xa6a307b4  sh          $v1, 0x7B4($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 1972), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x34AA8Cu;
        goto label_34aa8c;
    }
    ctx->pc = 0x34AA84u;
    {
        const bool branch_taken_0x34aa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34AA84u;
            // 0x34aa88: 0xa6a307b4  sh          $v1, 0x7B4($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 1972), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa84) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34AA8Cu;
label_34aa8c:
    // 0x34aa8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x34aa8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_34aa90:
    // 0x34aa90: 0x320f809  jalr        $t9
label_34aa94:
    if (ctx->pc == 0x34AA94u) {
        ctx->pc = 0x34AA98u;
        goto label_34aa98;
    }
    ctx->pc = 0x34AA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34AA98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x34AA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34AA98u; }
            if (ctx->pc != 0x34AA98u) { return; }
        }
        }
    }
    ctx->pc = 0x34AA98u;
label_34aa98:
    // 0x34aa98: 0x10000005  b           . + 4 + (0x5 << 2)
label_34aa9c:
    if (ctx->pc == 0x34AA9Cu) {
        ctx->pc = 0x34AAA0u;
        goto label_34aaa0;
    }
    ctx->pc = 0x34AA98u;
    {
        const bool branch_taken_0x34aa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aa98) {
            ctx->pc = 0x34AAB0u;
            goto label_34aab0;
        }
    }
    ctx->pc = 0x34AAA0u;
label_34aaa0:
    // 0x34aaa0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34aaa4:
    // 0x34aaa4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34aaa8:
    // 0x34aaa8: 0xc057b78  jal         func_15EDE0
label_34aaac:
    if (ctx->pc == 0x34AAACu) {
        ctx->pc = 0x34AAACu;
            // 0x34aaac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34AAB0u;
        goto label_34aab0;
    }
    ctx->pc = 0x34AAA8u;
    SET_GPR_U32(ctx, 31, 0x34AAB0u);
    ctx->pc = 0x34AAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AAA8u;
            // 0x34aaac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDE0u;
    if (runtime->hasFunction(0x15EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AAB0u; }
        if (ctx->pc != 0x34AAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDE0_0x15ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AAB0u; }
        if (ctx->pc != 0x34AAB0u) { return; }
    }
    ctx->pc = 0x34AAB0u;
label_34aab0:
    // 0x34aab0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x34aab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_34aab4:
    // 0x34aab4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x34aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_34aab8:
    // 0x34aab8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x34aab8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_34aabc:
    // 0x34aabc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x34aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_34aac0:
    // 0x34aac0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x34aac0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_34aac4:
    // 0x34aac4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x34aac4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_34aac8:
    // 0x34aac8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x34aac8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_34aacc:
    // 0x34aacc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x34aaccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_34aad0:
    // 0x34aad0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x34aad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34aad4:
    // 0x34aad4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34aad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34aad8:
    // 0x34aad8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34aad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34aadc:
    // 0x34aadc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34aadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34aae0:
    // 0x34aae0: 0x3e00008  jr          $ra
label_34aae4:
    if (ctx->pc == 0x34AAE4u) {
        ctx->pc = 0x34AAE4u;
            // 0x34aae4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x34AAE8u;
        goto label_34aae8;
    }
    ctx->pc = 0x34AAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34AAE0u;
            // 0x34aae4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34AAE8u;
label_34aae8:
    // 0x34aae8: 0x0  nop
    ctx->pc = 0x34aae8u;
    // NOP
label_34aaec:
    // 0x34aaec: 0x0  nop
    ctx->pc = 0x34aaecu;
    // NOP
}
