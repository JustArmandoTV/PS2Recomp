#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00287890
// Address: 0x287890 - 0x287e40
void sub_00287890_0x287890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287890_0x287890");
#endif

    switch (ctx->pc) {
        case 0x287890u: goto label_287890;
        case 0x287894u: goto label_287894;
        case 0x287898u: goto label_287898;
        case 0x28789cu: goto label_28789c;
        case 0x2878a0u: goto label_2878a0;
        case 0x2878a4u: goto label_2878a4;
        case 0x2878a8u: goto label_2878a8;
        case 0x2878acu: goto label_2878ac;
        case 0x2878b0u: goto label_2878b0;
        case 0x2878b4u: goto label_2878b4;
        case 0x2878b8u: goto label_2878b8;
        case 0x2878bcu: goto label_2878bc;
        case 0x2878c0u: goto label_2878c0;
        case 0x2878c4u: goto label_2878c4;
        case 0x2878c8u: goto label_2878c8;
        case 0x2878ccu: goto label_2878cc;
        case 0x2878d0u: goto label_2878d0;
        case 0x2878d4u: goto label_2878d4;
        case 0x2878d8u: goto label_2878d8;
        case 0x2878dcu: goto label_2878dc;
        case 0x2878e0u: goto label_2878e0;
        case 0x2878e4u: goto label_2878e4;
        case 0x2878e8u: goto label_2878e8;
        case 0x2878ecu: goto label_2878ec;
        case 0x2878f0u: goto label_2878f0;
        case 0x2878f4u: goto label_2878f4;
        case 0x2878f8u: goto label_2878f8;
        case 0x2878fcu: goto label_2878fc;
        case 0x287900u: goto label_287900;
        case 0x287904u: goto label_287904;
        case 0x287908u: goto label_287908;
        case 0x28790cu: goto label_28790c;
        case 0x287910u: goto label_287910;
        case 0x287914u: goto label_287914;
        case 0x287918u: goto label_287918;
        case 0x28791cu: goto label_28791c;
        case 0x287920u: goto label_287920;
        case 0x287924u: goto label_287924;
        case 0x287928u: goto label_287928;
        case 0x28792cu: goto label_28792c;
        case 0x287930u: goto label_287930;
        case 0x287934u: goto label_287934;
        case 0x287938u: goto label_287938;
        case 0x28793cu: goto label_28793c;
        case 0x287940u: goto label_287940;
        case 0x287944u: goto label_287944;
        case 0x287948u: goto label_287948;
        case 0x28794cu: goto label_28794c;
        case 0x287950u: goto label_287950;
        case 0x287954u: goto label_287954;
        case 0x287958u: goto label_287958;
        case 0x28795cu: goto label_28795c;
        case 0x287960u: goto label_287960;
        case 0x287964u: goto label_287964;
        case 0x287968u: goto label_287968;
        case 0x28796cu: goto label_28796c;
        case 0x287970u: goto label_287970;
        case 0x287974u: goto label_287974;
        case 0x287978u: goto label_287978;
        case 0x28797cu: goto label_28797c;
        case 0x287980u: goto label_287980;
        case 0x287984u: goto label_287984;
        case 0x287988u: goto label_287988;
        case 0x28798cu: goto label_28798c;
        case 0x287990u: goto label_287990;
        case 0x287994u: goto label_287994;
        case 0x287998u: goto label_287998;
        case 0x28799cu: goto label_28799c;
        case 0x2879a0u: goto label_2879a0;
        case 0x2879a4u: goto label_2879a4;
        case 0x2879a8u: goto label_2879a8;
        case 0x2879acu: goto label_2879ac;
        case 0x2879b0u: goto label_2879b0;
        case 0x2879b4u: goto label_2879b4;
        case 0x2879b8u: goto label_2879b8;
        case 0x2879bcu: goto label_2879bc;
        case 0x2879c0u: goto label_2879c0;
        case 0x2879c4u: goto label_2879c4;
        case 0x2879c8u: goto label_2879c8;
        case 0x2879ccu: goto label_2879cc;
        case 0x2879d0u: goto label_2879d0;
        case 0x2879d4u: goto label_2879d4;
        case 0x2879d8u: goto label_2879d8;
        case 0x2879dcu: goto label_2879dc;
        case 0x2879e0u: goto label_2879e0;
        case 0x2879e4u: goto label_2879e4;
        case 0x2879e8u: goto label_2879e8;
        case 0x2879ecu: goto label_2879ec;
        case 0x2879f0u: goto label_2879f0;
        case 0x2879f4u: goto label_2879f4;
        case 0x2879f8u: goto label_2879f8;
        case 0x2879fcu: goto label_2879fc;
        case 0x287a00u: goto label_287a00;
        case 0x287a04u: goto label_287a04;
        case 0x287a08u: goto label_287a08;
        case 0x287a0cu: goto label_287a0c;
        case 0x287a10u: goto label_287a10;
        case 0x287a14u: goto label_287a14;
        case 0x287a18u: goto label_287a18;
        case 0x287a1cu: goto label_287a1c;
        case 0x287a20u: goto label_287a20;
        case 0x287a24u: goto label_287a24;
        case 0x287a28u: goto label_287a28;
        case 0x287a2cu: goto label_287a2c;
        case 0x287a30u: goto label_287a30;
        case 0x287a34u: goto label_287a34;
        case 0x287a38u: goto label_287a38;
        case 0x287a3cu: goto label_287a3c;
        case 0x287a40u: goto label_287a40;
        case 0x287a44u: goto label_287a44;
        case 0x287a48u: goto label_287a48;
        case 0x287a4cu: goto label_287a4c;
        case 0x287a50u: goto label_287a50;
        case 0x287a54u: goto label_287a54;
        case 0x287a58u: goto label_287a58;
        case 0x287a5cu: goto label_287a5c;
        case 0x287a60u: goto label_287a60;
        case 0x287a64u: goto label_287a64;
        case 0x287a68u: goto label_287a68;
        case 0x287a6cu: goto label_287a6c;
        case 0x287a70u: goto label_287a70;
        case 0x287a74u: goto label_287a74;
        case 0x287a78u: goto label_287a78;
        case 0x287a7cu: goto label_287a7c;
        case 0x287a80u: goto label_287a80;
        case 0x287a84u: goto label_287a84;
        case 0x287a88u: goto label_287a88;
        case 0x287a8cu: goto label_287a8c;
        case 0x287a90u: goto label_287a90;
        case 0x287a94u: goto label_287a94;
        case 0x287a98u: goto label_287a98;
        case 0x287a9cu: goto label_287a9c;
        case 0x287aa0u: goto label_287aa0;
        case 0x287aa4u: goto label_287aa4;
        case 0x287aa8u: goto label_287aa8;
        case 0x287aacu: goto label_287aac;
        case 0x287ab0u: goto label_287ab0;
        case 0x287ab4u: goto label_287ab4;
        case 0x287ab8u: goto label_287ab8;
        case 0x287abcu: goto label_287abc;
        case 0x287ac0u: goto label_287ac0;
        case 0x287ac4u: goto label_287ac4;
        case 0x287ac8u: goto label_287ac8;
        case 0x287accu: goto label_287acc;
        case 0x287ad0u: goto label_287ad0;
        case 0x287ad4u: goto label_287ad4;
        case 0x287ad8u: goto label_287ad8;
        case 0x287adcu: goto label_287adc;
        case 0x287ae0u: goto label_287ae0;
        case 0x287ae4u: goto label_287ae4;
        case 0x287ae8u: goto label_287ae8;
        case 0x287aecu: goto label_287aec;
        case 0x287af0u: goto label_287af0;
        case 0x287af4u: goto label_287af4;
        case 0x287af8u: goto label_287af8;
        case 0x287afcu: goto label_287afc;
        case 0x287b00u: goto label_287b00;
        case 0x287b04u: goto label_287b04;
        case 0x287b08u: goto label_287b08;
        case 0x287b0cu: goto label_287b0c;
        case 0x287b10u: goto label_287b10;
        case 0x287b14u: goto label_287b14;
        case 0x287b18u: goto label_287b18;
        case 0x287b1cu: goto label_287b1c;
        case 0x287b20u: goto label_287b20;
        case 0x287b24u: goto label_287b24;
        case 0x287b28u: goto label_287b28;
        case 0x287b2cu: goto label_287b2c;
        case 0x287b30u: goto label_287b30;
        case 0x287b34u: goto label_287b34;
        case 0x287b38u: goto label_287b38;
        case 0x287b3cu: goto label_287b3c;
        case 0x287b40u: goto label_287b40;
        case 0x287b44u: goto label_287b44;
        case 0x287b48u: goto label_287b48;
        case 0x287b4cu: goto label_287b4c;
        case 0x287b50u: goto label_287b50;
        case 0x287b54u: goto label_287b54;
        case 0x287b58u: goto label_287b58;
        case 0x287b5cu: goto label_287b5c;
        case 0x287b60u: goto label_287b60;
        case 0x287b64u: goto label_287b64;
        case 0x287b68u: goto label_287b68;
        case 0x287b6cu: goto label_287b6c;
        case 0x287b70u: goto label_287b70;
        case 0x287b74u: goto label_287b74;
        case 0x287b78u: goto label_287b78;
        case 0x287b7cu: goto label_287b7c;
        case 0x287b80u: goto label_287b80;
        case 0x287b84u: goto label_287b84;
        case 0x287b88u: goto label_287b88;
        case 0x287b8cu: goto label_287b8c;
        case 0x287b90u: goto label_287b90;
        case 0x287b94u: goto label_287b94;
        case 0x287b98u: goto label_287b98;
        case 0x287b9cu: goto label_287b9c;
        case 0x287ba0u: goto label_287ba0;
        case 0x287ba4u: goto label_287ba4;
        case 0x287ba8u: goto label_287ba8;
        case 0x287bacu: goto label_287bac;
        case 0x287bb0u: goto label_287bb0;
        case 0x287bb4u: goto label_287bb4;
        case 0x287bb8u: goto label_287bb8;
        case 0x287bbcu: goto label_287bbc;
        case 0x287bc0u: goto label_287bc0;
        case 0x287bc4u: goto label_287bc4;
        case 0x287bc8u: goto label_287bc8;
        case 0x287bccu: goto label_287bcc;
        case 0x287bd0u: goto label_287bd0;
        case 0x287bd4u: goto label_287bd4;
        case 0x287bd8u: goto label_287bd8;
        case 0x287bdcu: goto label_287bdc;
        case 0x287be0u: goto label_287be0;
        case 0x287be4u: goto label_287be4;
        case 0x287be8u: goto label_287be8;
        case 0x287becu: goto label_287bec;
        case 0x287bf0u: goto label_287bf0;
        case 0x287bf4u: goto label_287bf4;
        case 0x287bf8u: goto label_287bf8;
        case 0x287bfcu: goto label_287bfc;
        case 0x287c00u: goto label_287c00;
        case 0x287c04u: goto label_287c04;
        case 0x287c08u: goto label_287c08;
        case 0x287c0cu: goto label_287c0c;
        case 0x287c10u: goto label_287c10;
        case 0x287c14u: goto label_287c14;
        case 0x287c18u: goto label_287c18;
        case 0x287c1cu: goto label_287c1c;
        case 0x287c20u: goto label_287c20;
        case 0x287c24u: goto label_287c24;
        case 0x287c28u: goto label_287c28;
        case 0x287c2cu: goto label_287c2c;
        case 0x287c30u: goto label_287c30;
        case 0x287c34u: goto label_287c34;
        case 0x287c38u: goto label_287c38;
        case 0x287c3cu: goto label_287c3c;
        case 0x287c40u: goto label_287c40;
        case 0x287c44u: goto label_287c44;
        case 0x287c48u: goto label_287c48;
        case 0x287c4cu: goto label_287c4c;
        case 0x287c50u: goto label_287c50;
        case 0x287c54u: goto label_287c54;
        case 0x287c58u: goto label_287c58;
        case 0x287c5cu: goto label_287c5c;
        case 0x287c60u: goto label_287c60;
        case 0x287c64u: goto label_287c64;
        case 0x287c68u: goto label_287c68;
        case 0x287c6cu: goto label_287c6c;
        case 0x287c70u: goto label_287c70;
        case 0x287c74u: goto label_287c74;
        case 0x287c78u: goto label_287c78;
        case 0x287c7cu: goto label_287c7c;
        case 0x287c80u: goto label_287c80;
        case 0x287c84u: goto label_287c84;
        case 0x287c88u: goto label_287c88;
        case 0x287c8cu: goto label_287c8c;
        case 0x287c90u: goto label_287c90;
        case 0x287c94u: goto label_287c94;
        case 0x287c98u: goto label_287c98;
        case 0x287c9cu: goto label_287c9c;
        case 0x287ca0u: goto label_287ca0;
        case 0x287ca4u: goto label_287ca4;
        case 0x287ca8u: goto label_287ca8;
        case 0x287cacu: goto label_287cac;
        case 0x287cb0u: goto label_287cb0;
        case 0x287cb4u: goto label_287cb4;
        case 0x287cb8u: goto label_287cb8;
        case 0x287cbcu: goto label_287cbc;
        case 0x287cc0u: goto label_287cc0;
        case 0x287cc4u: goto label_287cc4;
        case 0x287cc8u: goto label_287cc8;
        case 0x287cccu: goto label_287ccc;
        case 0x287cd0u: goto label_287cd0;
        case 0x287cd4u: goto label_287cd4;
        case 0x287cd8u: goto label_287cd8;
        case 0x287cdcu: goto label_287cdc;
        case 0x287ce0u: goto label_287ce0;
        case 0x287ce4u: goto label_287ce4;
        case 0x287ce8u: goto label_287ce8;
        case 0x287cecu: goto label_287cec;
        case 0x287cf0u: goto label_287cf0;
        case 0x287cf4u: goto label_287cf4;
        case 0x287cf8u: goto label_287cf8;
        case 0x287cfcu: goto label_287cfc;
        case 0x287d00u: goto label_287d00;
        case 0x287d04u: goto label_287d04;
        case 0x287d08u: goto label_287d08;
        case 0x287d0cu: goto label_287d0c;
        case 0x287d10u: goto label_287d10;
        case 0x287d14u: goto label_287d14;
        case 0x287d18u: goto label_287d18;
        case 0x287d1cu: goto label_287d1c;
        case 0x287d20u: goto label_287d20;
        case 0x287d24u: goto label_287d24;
        case 0x287d28u: goto label_287d28;
        case 0x287d2cu: goto label_287d2c;
        case 0x287d30u: goto label_287d30;
        case 0x287d34u: goto label_287d34;
        case 0x287d38u: goto label_287d38;
        case 0x287d3cu: goto label_287d3c;
        case 0x287d40u: goto label_287d40;
        case 0x287d44u: goto label_287d44;
        case 0x287d48u: goto label_287d48;
        case 0x287d4cu: goto label_287d4c;
        case 0x287d50u: goto label_287d50;
        case 0x287d54u: goto label_287d54;
        case 0x287d58u: goto label_287d58;
        case 0x287d5cu: goto label_287d5c;
        case 0x287d60u: goto label_287d60;
        case 0x287d64u: goto label_287d64;
        case 0x287d68u: goto label_287d68;
        case 0x287d6cu: goto label_287d6c;
        case 0x287d70u: goto label_287d70;
        case 0x287d74u: goto label_287d74;
        case 0x287d78u: goto label_287d78;
        case 0x287d7cu: goto label_287d7c;
        case 0x287d80u: goto label_287d80;
        case 0x287d84u: goto label_287d84;
        case 0x287d88u: goto label_287d88;
        case 0x287d8cu: goto label_287d8c;
        case 0x287d90u: goto label_287d90;
        case 0x287d94u: goto label_287d94;
        case 0x287d98u: goto label_287d98;
        case 0x287d9cu: goto label_287d9c;
        case 0x287da0u: goto label_287da0;
        case 0x287da4u: goto label_287da4;
        case 0x287da8u: goto label_287da8;
        case 0x287dacu: goto label_287dac;
        case 0x287db0u: goto label_287db0;
        case 0x287db4u: goto label_287db4;
        case 0x287db8u: goto label_287db8;
        case 0x287dbcu: goto label_287dbc;
        case 0x287dc0u: goto label_287dc0;
        case 0x287dc4u: goto label_287dc4;
        case 0x287dc8u: goto label_287dc8;
        case 0x287dccu: goto label_287dcc;
        case 0x287dd0u: goto label_287dd0;
        case 0x287dd4u: goto label_287dd4;
        case 0x287dd8u: goto label_287dd8;
        case 0x287ddcu: goto label_287ddc;
        case 0x287de0u: goto label_287de0;
        case 0x287de4u: goto label_287de4;
        case 0x287de8u: goto label_287de8;
        case 0x287decu: goto label_287dec;
        case 0x287df0u: goto label_287df0;
        case 0x287df4u: goto label_287df4;
        case 0x287df8u: goto label_287df8;
        case 0x287dfcu: goto label_287dfc;
        case 0x287e00u: goto label_287e00;
        case 0x287e04u: goto label_287e04;
        case 0x287e08u: goto label_287e08;
        case 0x287e0cu: goto label_287e0c;
        case 0x287e10u: goto label_287e10;
        case 0x287e14u: goto label_287e14;
        case 0x287e18u: goto label_287e18;
        case 0x287e1cu: goto label_287e1c;
        case 0x287e20u: goto label_287e20;
        case 0x287e24u: goto label_287e24;
        case 0x287e28u: goto label_287e28;
        case 0x287e2cu: goto label_287e2c;
        case 0x287e30u: goto label_287e30;
        case 0x287e34u: goto label_287e34;
        case 0x287e38u: goto label_287e38;
        case 0x287e3cu: goto label_287e3c;
        default: break;
    }

    ctx->pc = 0x287890u;

label_287890:
    // 0x287890: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x287890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_287894:
    // 0x287894: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x287894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_287898:
    // 0x287898: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x287898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_28789c:
    // 0x28789c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x28789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2878a0:
    // 0x2878a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2878a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2878a4:
    // 0x2878a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2878a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2878a8:
    // 0x2878a8: 0x27b700a8  addiu       $s7, $sp, 0xA8
    ctx->pc = 0x2878a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_2878ac:
    // 0x2878ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2878acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2878b0:
    // 0x2878b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2878b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2878b4:
    // 0x2878b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2878b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2878b8:
    // 0x2878b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2878b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2878bc:
    // 0x2878bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2878bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2878c0:
    // 0x2878c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2878c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2878c4:
    // 0x2878c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2878c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2878c8:
    // 0x2878c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2878c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2878cc:
    // 0x2878cc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2878ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2878d0:
    // 0x2878d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2878d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2878d4:
    // 0x2878d4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2878d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_2878d8:
    // 0x2878d8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x2878d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2878dc:
    // 0x2878dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2878dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2878e0:
    // 0x2878e0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2878e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_2878e4:
    // 0x2878e4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2878e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_2878e8:
    // 0x2878e8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2878e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2878ec:
    // 0x2878ec: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x2878ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_2878f0:
    // 0x2878f0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2878f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2878f4:
    // 0x2878f4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2878f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2878f8:
    // 0x2878f8: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x2878f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2878fc:
    // 0x2878fc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2878fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_287900:
    // 0x287900: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x287900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_287904:
    // 0x287904: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x287904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_287908:
    // 0x287908: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x287908u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_28790c:
    // 0x28790c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_287910:
    if (ctx->pc == 0x287910u) {
        ctx->pc = 0x287910u;
            // 0x287910: 0x27b100a0  addiu       $s1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x287914u;
        goto label_287914;
    }
    ctx->pc = 0x28790Cu;
    {
        const bool branch_taken_0x28790c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x287910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28790Cu;
            // 0x287910: 0x27b100a0  addiu       $s1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28790c) {
            ctx->pc = 0x287920u;
            goto label_287920;
        }
    }
    ctx->pc = 0x287914u;
label_287914:
    // 0x287914: 0x10000006  b           . + 4 + (0x6 << 2)
label_287918:
    if (ctx->pc == 0x287918u) {
        ctx->pc = 0x287918u;
            // 0x287918: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x28791Cu;
        goto label_28791c;
    }
    ctx->pc = 0x287914u;
    {
        const bool branch_taken_0x287914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287914u;
            // 0x287918: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287914) {
            ctx->pc = 0x287930u;
            goto label_287930;
        }
    }
    ctx->pc = 0x28791Cu;
label_28791c:
    // 0x28791c: 0x0  nop
    ctx->pc = 0x28791cu;
    // NOP
label_287920:
    // 0x287920: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x287920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_287924:
    // 0x287924: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x287924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_287928:
    // 0x287928: 0x320f809  jalr        $t9
label_28792c:
    if (ctx->pc == 0x28792Cu) {
        ctx->pc = 0x287930u;
        goto label_287930;
    }
    ctx->pc = 0x287928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x287930u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x287930u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x287930u; }
            if (ctx->pc != 0x287930u) { return; }
        }
        }
    }
    ctx->pc = 0x287930u;
label_287930:
    // 0x287930: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x287930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_287934:
    // 0x287934: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x287934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_287938:
    // 0x287938: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x287938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_28793c:
    // 0x28793c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x28793cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_287940:
    // 0x287940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287944:
    // 0x287944: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x287944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_287948:
    // 0x287948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x287948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28794c:
    // 0x28794c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28794cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287950:
    // 0x287950: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x287950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_287954:
    // 0x287954: 0xa3a200bc  sb          $v0, 0xBC($sp)
    ctx->pc = 0x287954u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 188), (uint8_t)GPR_U32(ctx, 2));
label_287958:
    // 0x287958: 0x83a500bc  lb          $a1, 0xBC($sp)
    ctx->pc = 0x287958u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 188)));
label_28795c:
    // 0x28795c: 0xc0a1da8  jal         func_2876A0
label_287960:
    if (ctx->pc == 0x287960u) {
        ctx->pc = 0x287960u;
            // 0x287960: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x287964u;
        goto label_287964;
    }
    ctx->pc = 0x28795Cu;
    SET_GPR_U32(ctx, 31, 0x287964u);
    ctx->pc = 0x287960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28795Cu;
            // 0x287960: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2876A0u;
    if (runtime->hasFunction(0x2876A0u)) {
        auto targetFn = runtime->lookupFunction(0x2876A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287964u; }
        if (ctx->pc != 0x287964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002876A0_0x2876a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287964u; }
        if (ctx->pc != 0x287964u) { return; }
    }
    ctx->pc = 0x287964u;
label_287964:
    // 0x287964: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x287964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_287968:
    // 0x287968: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x287968u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_28796c:
    // 0x28796c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x28796cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_287970:
    // 0x287970: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x287970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_287974:
    // 0x287974: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x287974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_287978:
    // 0x287978: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x287978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_28797c:
    // 0x28797c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x28797cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_287980:
    // 0x287980: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x287980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_287984:
    // 0x287984: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x287984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_287988:
    // 0x287988: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x287988u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_28798c:
    // 0x28798c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x28798cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_287990:
    // 0x287990: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x287990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_287994:
    // 0x287994: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x287994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_287998:
    // 0x287998: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x287998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_28799c:
    // 0x28799c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x28799cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2879a0:
    // 0x2879a0: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2879a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2879a4:
    // 0x2879a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2879a8:
    if (ctx->pc == 0x2879A8u) {
        ctx->pc = 0x2879A8u;
            // 0x2879a8: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2879ACu;
        goto label_2879ac;
    }
    ctx->pc = 0x2879A4u;
    {
        const bool branch_taken_0x2879a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2879A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2879A4u;
            // 0x2879a8: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879a4) {
            ctx->pc = 0x2879B8u;
            goto label_2879b8;
        }
    }
    ctx->pc = 0x2879ACu;
label_2879ac:
    // 0x2879ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_2879b0:
    if (ctx->pc == 0x2879B0u) {
        ctx->pc = 0x2879B0u;
            // 0x2879b0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2879B4u;
        goto label_2879b4;
    }
    ctx->pc = 0x2879ACu;
    {
        const bool branch_taken_0x2879ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2879B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2879ACu;
            // 0x2879b0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879ac) {
            ctx->pc = 0x2879C8u;
            goto label_2879c8;
        }
    }
    ctx->pc = 0x2879B4u;
label_2879b4:
    // 0x2879b4: 0x0  nop
    ctx->pc = 0x2879b4u;
    // NOP
label_2879b8:
    // 0x2879b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2879b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2879bc:
    // 0x2879bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2879bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2879c0:
    // 0x2879c0: 0x320f809  jalr        $t9
label_2879c4:
    if (ctx->pc == 0x2879C4u) {
        ctx->pc = 0x2879C8u;
        goto label_2879c8;
    }
    ctx->pc = 0x2879C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2879C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2879C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2879C8u; }
            if (ctx->pc != 0x2879C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2879C8u;
label_2879c8:
    // 0x2879c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2879c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2879cc:
    // 0x2879cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2879ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2879d0:
    // 0x2879d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2879d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2879d4:
    // 0x2879d4: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x2879d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2879d8:
    // 0x2879d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2879d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2879dc:
    // 0x2879dc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2879dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2879e0:
    // 0x2879e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2879e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2879e4:
    // 0x2879e4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2879e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2879e8:
    // 0x2879e8: 0xa3a000b8  sb          $zero, 0xB8($sp)
    ctx->pc = 0x2879e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 0));
label_2879ec:
    // 0x2879ec: 0x83a500b8  lb          $a1, 0xB8($sp)
    ctx->pc = 0x2879ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
label_2879f0:
    // 0x2879f0: 0xc0a1da8  jal         func_2876A0
label_2879f4:
    if (ctx->pc == 0x2879F4u) {
        ctx->pc = 0x2879F4u;
            // 0x2879f4: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2879F8u;
        goto label_2879f8;
    }
    ctx->pc = 0x2879F0u;
    SET_GPR_U32(ctx, 31, 0x2879F8u);
    ctx->pc = 0x2879F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2879F0u;
            // 0x2879f4: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2876A0u;
    if (runtime->hasFunction(0x2876A0u)) {
        auto targetFn = runtime->lookupFunction(0x2876A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2879F8u; }
        if (ctx->pc != 0x2879F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002876A0_0x2876a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2879F8u; }
        if (ctx->pc != 0x2879F8u) { return; }
    }
    ctx->pc = 0x2879F8u;
label_2879f8:
    // 0x2879f8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2879f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2879fc:
    // 0x2879fc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2879fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_287a00:
    // 0x287a00: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x287a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_287a04:
    // 0x287a04: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x287a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_287a08:
    // 0x287a08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x287a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_287a0c:
    // 0x287a0c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x287a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_287a10:
    // 0x287a10: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x287a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_287a14:
    // 0x287a14: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x287a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_287a18:
    // 0x287a18: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x287a18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_287a1c:
    // 0x287a1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_287a20:
    if (ctx->pc == 0x287A20u) {
        ctx->pc = 0x287A20u;
            // 0x287a20: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x287A24u;
        goto label_287a24;
    }
    ctx->pc = 0x287A1Cu;
    {
        const bool branch_taken_0x287a1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A1Cu;
            // 0x287a20: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a1c) {
            ctx->pc = 0x287A30u;
            goto label_287a30;
        }
    }
    ctx->pc = 0x287A24u;
label_287a24:
    // 0x287a24: 0xc0a725c  jal         func_29C970
label_287a28:
    if (ctx->pc == 0x287A28u) {
        ctx->pc = 0x287A28u;
            // 0x287a28: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x287A2Cu;
        goto label_287a2c;
    }
    ctx->pc = 0x287A24u;
    SET_GPR_U32(ctx, 31, 0x287A2Cu);
    ctx->pc = 0x287A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287A24u;
            // 0x287a28: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A2Cu; }
        if (ctx->pc != 0x287A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A2Cu; }
        if (ctx->pc != 0x287A2Cu) { return; }
    }
    ctx->pc = 0x287A2Cu;
label_287a2c:
    // 0x287a2c: 0x0  nop
    ctx->pc = 0x287a2cu;
    // NOP
label_287a30:
    // 0x287a30: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x287a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_287a34:
    // 0x287a34: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x287a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_287a38:
    // 0x287a38: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
label_287a3c:
    if (ctx->pc == 0x287A3Cu) {
        ctx->pc = 0x287A3Cu;
            // 0x287a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x287A40u;
        goto label_287a40;
    }
    ctx->pc = 0x287A38u;
    {
        const bool branch_taken_0x287a38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A38u;
            // 0x287a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a38) {
            ctx->pc = 0x287B30u;
            goto label_287b30;
        }
    }
    ctx->pc = 0x287A40u;
label_287a40:
    // 0x287a40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x287a40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287a44:
    // 0x287a44: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x287a44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_287a48:
    // 0x287a48: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x287a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_287a4c:
    // 0x287a4c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x287a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_287a50:
    // 0x287a50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x287a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_287a54:
    // 0x287a54: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x287a54u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_287a58:
    // 0x287a58: 0xa4850008  sh          $a1, 0x8($a0)
    ctx->pc = 0x287a58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 5));
label_287a5c:
    // 0x287a5c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x287a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_287a60:
    // 0x287a60: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x287a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_287a64:
    // 0x287a64: 0x94e70004  lhu         $a3, 0x4($a3)
    ctx->pc = 0x287a64u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_287a68:
    // 0x287a68: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x287a68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_287a6c:
    // 0x287a6c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x287a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_287a70:
    // 0x287a70: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x287a70u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_287a74:
    // 0x287a74: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x287a74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
label_287a78:
    // 0x287a78: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x287a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_287a7c:
    // 0x287a7c: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x287a7cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_287a80:
    // 0x287a80: 0xa485000e  sh          $a1, 0xE($a0)
    ctx->pc = 0x287a80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 5));
label_287a84:
    // 0x287a84: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x287a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_287a88:
    // 0x287a88: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x287a88u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_287a8c:
    // 0x287a8c: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x287a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_287a90:
    // 0x287a90: 0x528fc  dsll32      $a1, $a1, 3
    ctx->pc = 0x287a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 3));
label_287a94:
    // 0x287a94: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_287a98:
    if (ctx->pc == 0x287A98u) {
        ctx->pc = 0x287A98u;
            // 0x287a98: 0x528ff  dsra32      $a1, $a1, 3 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 3));
        ctx->pc = 0x287A9Cu;
        goto label_287a9c;
    }
    ctx->pc = 0x287A94u;
    {
        const bool branch_taken_0x287a94 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x287A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A94u;
            // 0x287a98: 0x528ff  dsra32      $a1, $a1, 3 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a94) {
            ctx->pc = 0x287AA4u;
            goto label_287aa4;
        }
    }
    ctx->pc = 0x287A9Cu;
label_287a9c:
    // 0x287a9c: 0x24e50007  addiu       $a1, $a3, 0x7
    ctx->pc = 0x287a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_287aa0:
    // 0x287aa0: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x287aa0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_287aa4:
    // 0x287aa4: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x287aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_287aa8:
    // 0x287aa8: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x287aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_287aac:
    // 0x287aac: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x287aacu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_287ab0:
    // 0x287ab0: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_287ab4:
    if (ctx->pc == 0x287AB4u) {
        ctx->pc = 0x287AB4u;
            // 0x287ab4: 0x838c3  sra         $a3, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 3));
        ctx->pc = 0x287AB8u;
        goto label_287ab8;
    }
    ctx->pc = 0x287AB0u;
    {
        const bool branch_taken_0x287ab0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x287AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287AB0u;
            // 0x287ab4: 0x838c3  sra         $a3, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ab0) {
            ctx->pc = 0x287AC0u;
            goto label_287ac0;
        }
    }
    ctx->pc = 0x287AB8u;
label_287ab8:
    // 0x287ab8: 0x25070007  addiu       $a3, $t0, 0x7
    ctx->pc = 0x287ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
label_287abc:
    // 0x287abc: 0x738c3  sra         $a3, $a3, 3
    ctx->pc = 0x287abcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
label_287ac0:
    // 0x287ac0: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x287ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_287ac4:
    // 0x287ac4: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x287ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_287ac8:
    // 0x287ac8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x287ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_287acc:
    // 0x287acc: 0x94e70000  lhu         $a3, 0x0($a3)
    ctx->pc = 0x287accu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_287ad0:
    // 0x287ad0: 0x14e90003  bne         $a3, $t1, . + 4 + (0x3 << 2)
label_287ad4:
    if (ctx->pc == 0x287AD4u) {
        ctx->pc = 0x287AD4u;
            // 0x287ad4: 0x740c0  sll         $t0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->pc = 0x287AD8u;
        goto label_287ad8;
    }
    ctx->pc = 0x287AD0u;
    {
        const bool branch_taken_0x287ad0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x287AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287AD0u;
            // 0x287ad4: 0x740c0  sll         $t0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ad0) {
            ctx->pc = 0x287AE0u;
            goto label_287ae0;
        }
    }
    ctx->pc = 0x287AD8u;
label_287ad8:
    // 0x287ad8: 0x10000003  b           . + 4 + (0x3 << 2)
label_287adc:
    if (ctx->pc == 0x287ADCu) {
        ctx->pc = 0x287ADCu;
            // 0x287adc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x287AE0u;
        goto label_287ae0;
    }
    ctx->pc = 0x287AD8u;
    {
        const bool branch_taken_0x287ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287AD8u;
            // 0x287adc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ad8) {
            ctx->pc = 0x287AE8u;
            goto label_287ae8;
        }
    }
    ctx->pc = 0x287AE0u;
label_287ae0:
    // 0x287ae0: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x287ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_287ae4:
    // 0x287ae4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x287ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_287ae8:
    // 0x287ae8: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x287ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_287aec:
    // 0x287aec: 0x53840  sll         $a3, $a1, 1
    ctx->pc = 0x287aecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_287af0:
    // 0x287af0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x287af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_287af4:
    // 0x287af4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x287af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_287af8:
    // 0x287af8: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x287af8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_287afc:
    // 0x287afc: 0x14a90003  bne         $a1, $t1, . + 4 + (0x3 << 2)
label_287b00:
    if (ctx->pc == 0x287B00u) {
        ctx->pc = 0x287B04u;
        goto label_287b04;
    }
    ctx->pc = 0x287AFCu;
    {
        const bool branch_taken_0x287afc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        if (branch_taken_0x287afc) {
            ctx->pc = 0x287B0Cu;
            goto label_287b0c;
        }
    }
    ctx->pc = 0x287B04u;
label_287b04:
    // 0x287b04: 0x10000004  b           . + 4 + (0x4 << 2)
label_287b08:
    if (ctx->pc == 0x287B08u) {
        ctx->pc = 0x287B08u;
            // 0x287b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x287B0Cu;
        goto label_287b0c;
    }
    ctx->pc = 0x287B04u;
    {
        const bool branch_taken_0x287b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B04u;
            // 0x287b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b04) {
            ctx->pc = 0x287B18u;
            goto label_287b18;
        }
    }
    ctx->pc = 0x287B0Cu;
label_287b0c:
    // 0x287b0c: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x287b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_287b10:
    // 0x287b10: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x287b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_287b14:
    // 0x287b14: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x287b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_287b18:
    // 0x287b18: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x287b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_287b1c:
    // 0x287b1c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x287b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_287b20:
    // 0x287b20: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x287b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_287b24:
    // 0x287b24: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x287b24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_287b28:
    // 0x287b28: 0x1480ffc7  bnez        $a0, . + 4 + (-0x39 << 2)
label_287b2c:
    if (ctx->pc == 0x287B2Cu) {
        ctx->pc = 0x287B2Cu;
            // 0x287b2c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x287B30u;
        goto label_287b30;
    }
    ctx->pc = 0x287B28u;
    {
        const bool branch_taken_0x287b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x287B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B28u;
            // 0x287b2c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b28) {
            ctx->pc = 0x287A48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287a48;
        }
    }
    ctx->pc = 0x287B30u;
label_287b30:
    // 0x287b30: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x287b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_287b34:
    // 0x287b34: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x287b34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_287b38:
    // 0x287b38: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x287b38u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287b3c:
    // 0x287b3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x287b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_287b40:
    // 0x287b40: 0x8e4c0008  lw          $t4, 0x8($s2)
    ctx->pc = 0x287b40u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_287b44:
    // 0x287b44: 0x248dffff  addiu       $t5, $a0, -0x1
    ctx->pc = 0x287b44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_287b48:
    // 0x287b48: 0x5a00077  bltz        $t5, . + 4 + (0x77 << 2)
label_287b4c:
    if (ctx->pc == 0x287B4Cu) {
        ctx->pc = 0x287B4Cu;
            // 0x287b4c: 0x340effff  ori         $t6, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x287B50u;
        goto label_287b50;
    }
    ctx->pc = 0x287B48u;
    {
        const bool branch_taken_0x287b48 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x287B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B48u;
            // 0x287b4c: 0x340effff  ori         $t6, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b48) {
            ctx->pc = 0x287D28u;
            goto label_287d28;
        }
    }
    ctx->pc = 0x287B50u;
label_287b50:
    // 0x287b50: 0xd2100  sll         $a0, $t5, 4
    ctx->pc = 0x287b50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_287b54:
    // 0x287b54: 0x0  nop
    ctx->pc = 0x287b54u;
    // NOP
label_287b58:
    // 0x287b58: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x287b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_287b5c:
    // 0x287b5c: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x287b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_287b60:
    // 0x287b60: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x287b60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_287b64:
    // 0x287b64: 0xa45821  addu        $t3, $a1, $a0
    ctx->pc = 0x287b64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_287b68:
    // 0x287b68: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x287b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_287b6c:
    // 0x287b6c: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x287b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
label_287b70:
    // 0x287b70: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x287b70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_287b74:
    // 0x287b74: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x287b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_287b78:
    // 0x287b78: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x287b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_287b7c:
    // 0x287b7c: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x287b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_287b80:
    // 0x287b80: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x287b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_287b84:
    // 0x287b84: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x287b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_287b88:
    // 0x287b88: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x287b88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
label_287b8c:
    // 0x287b8c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x287b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_287b90:
    // 0x287b90: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x287b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_287b94:
    // 0x287b94: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x287b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_287b98:
    // 0x287b98: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x287b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_287b9c:
    // 0x287b9c: 0x1465002e  bne         $v1, $a1, . + 4 + (0x2E << 2)
label_287ba0:
    if (ctx->pc == 0x287BA0u) {
        ctx->pc = 0x287BA0u;
            // 0x287ba0: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->pc = 0x287BA4u;
        goto label_287ba4;
    }
    ctx->pc = 0x287B9Cu;
    {
        const bool branch_taken_0x287b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x287BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B9Cu;
            // 0x287ba0: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b9c) {
            ctx->pc = 0x287C58u;
            goto label_287c58;
        }
    }
    ctx->pc = 0x287BA4u;
label_287ba4:
    // 0x287ba4: 0x8d660004  lw          $a2, 0x4($t3)
    ctx->pc = 0x287ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_287ba8:
    // 0x287ba8: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x287ba8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_287bac:
    // 0x287bac: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x287bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_287bb0:
    // 0x287bb0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x287bb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_287bb4:
    // 0x287bb4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_287bb8:
    if (ctx->pc == 0x287BB8u) {
        ctx->pc = 0x287BBCu;
        goto label_287bbc;
    }
    ctx->pc = 0x287BB4u;
    {
        const bool branch_taken_0x287bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x287bb4) {
            ctx->pc = 0x287BC4u;
            goto label_287bc4;
        }
    }
    ctx->pc = 0x287BBCu;
label_287bbc:
    // 0x287bbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_287bc0:
    if (ctx->pc == 0x287BC0u) {
        ctx->pc = 0x287BC0u;
            // 0x287bc0: 0x94c50002  lhu         $a1, 0x2($a2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->pc = 0x287BC4u;
        goto label_287bc4;
    }
    ctx->pc = 0x287BBCu;
    {
        const bool branch_taken_0x287bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287BBCu;
            // 0x287bc0: 0x94c50002  lhu         $a1, 0x2($a2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bbc) {
            ctx->pc = 0x287BC8u;
            goto label_287bc8;
        }
    }
    ctx->pc = 0x287BC4u;
label_287bc4:
    // 0x287bc4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x287bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_287bc8:
    // 0x287bc8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_287bcc:
    if (ctx->pc == 0x287BCCu) {
        ctx->pc = 0x287BD0u;
        goto label_287bd0;
    }
    ctx->pc = 0x287BC8u;
    {
        const bool branch_taken_0x287bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x287bc8) {
            ctx->pc = 0x287BE0u;
            goto label_287be0;
        }
    }
    ctx->pc = 0x287BD0u;
label_287bd0:
    // 0x287bd0: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x287bd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_287bd4:
    // 0x287bd4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x287bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_287bd8:
    // 0x287bd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_287bdc:
    if (ctx->pc == 0x287BDCu) {
        ctx->pc = 0x287BDCu;
            // 0x287bdc: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->pc = 0x287BE0u;
        goto label_287be0;
    }
    ctx->pc = 0x287BD8u;
    {
        const bool branch_taken_0x287bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287BD8u;
            // 0x287bdc: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bd8) {
            ctx->pc = 0x287BF8u;
            goto label_287bf8;
        }
    }
    ctx->pc = 0x287BE0u;
label_287be0:
    // 0x287be0: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x287be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_287be4:
    // 0x287be4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x287be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_287be8:
    // 0x287be8: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x287be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_287bec:
    // 0x287bec: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x287becu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_287bf0:
    // 0x287bf0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x287bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_287bf4:
    // 0x287bf4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x287bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_287bf8:
    // 0x287bf8: 0x8d660004  lw          $a2, 0x4($t3)
    ctx->pc = 0x287bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_287bfc:
    // 0x287bfc: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x287bfcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_287c00:
    // 0x287c00: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x287c00u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
label_287c04:
    // 0x287c04: 0xa5280004  sh          $t0, 0x4($t1)
    ctx->pc = 0x287c04u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 8));
label_287c08:
    // 0x287c08: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
label_287c0c:
    if (ctx->pc == 0x287C0Cu) {
        ctx->pc = 0x287C0Cu;
            // 0x287c0c: 0xa52e0002  sh          $t6, 0x2($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 14));
        ctx->pc = 0x287C10u;
        goto label_287c10;
    }
    ctx->pc = 0x287C08u;
    {
        const bool branch_taken_0x287c08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C08u;
            // 0x287c0c: 0xa52e0002  sh          $t6, 0x2($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c08) {
            ctx->pc = 0x287C18u;
            goto label_287c18;
        }
    }
    ctx->pc = 0x287C10u;
label_287c10:
    // 0x287c10: 0xa5ea0002  sh          $t2, 0x2($t7)
    ctx->pc = 0x287c10u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 10));
label_287c14:
    // 0x287c14: 0x0  nop
    ctx->pc = 0x287c14u;
    // NOP
label_287c18:
    // 0x287c18: 0x9566000e  lhu         $a2, 0xE($t3)
    ctx->pc = 0x287c18u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 14)));
label_287c1c:
    // 0x287c1c: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x287c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
label_287c20:
    // 0x287c20: 0xa46a0004  sh          $t2, 0x4($v1)
    ctx->pc = 0x287c20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 10));
label_287c24:
    // 0x287c24: 0x8d660004  lw          $a2, 0x4($t3)
    ctx->pc = 0x287c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_287c28:
    // 0x287c28: 0xd04823  subu        $t1, $a2, $s0
    ctx->pc = 0x287c28u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_287c2c:
    // 0x287c2c: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_287c30:
    if (ctx->pc == 0x287C30u) {
        ctx->pc = 0x287C30u;
            // 0x287c30: 0x930c3  sra         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 3));
        ctx->pc = 0x287C34u;
        goto label_287c34;
    }
    ctx->pc = 0x287C2Cu;
    {
        const bool branch_taken_0x287c2c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x287C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C2Cu;
            // 0x287c30: 0x930c3  sra         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c2c) {
            ctx->pc = 0x287C3Cu;
            goto label_287c3c;
        }
    }
    ctx->pc = 0x287C34u;
label_287c34:
    // 0x287c34: 0x25260007  addiu       $a2, $t1, 0x7
    ctx->pc = 0x287c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_287c38:
    // 0x287c38: 0x630c3  sra         $a2, $a2, 3
    ctx->pc = 0x287c38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
label_287c3c:
    // 0x287c3c: 0xa4660002  sh          $a2, 0x2($v1)
    ctx->pc = 0x287c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
label_287c40:
    // 0x287c40: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x287c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_287c44:
    // 0x287c44: 0xa4650002  sh          $a1, 0x2($v1)
    ctx->pc = 0x287c44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 5));
label_287c48:
    // 0x287c48: 0x95630008  lhu         $v1, 0x8($t3)
    ctx->pc = 0x287c48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
label_287c4c:
    // 0x287c4c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x287c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_287c50:
    // 0x287c50: 0x1000002f  b           . + 4 + (0x2F << 2)
label_287c54:
    if (ctx->pc == 0x287C54u) {
        ctx->pc = 0x287C54u;
            // 0x287c54: 0xa4e50004  sh          $a1, 0x4($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = 0x287C58u;
        goto label_287c58;
    }
    ctx->pc = 0x287C50u;
    {
        const bool branch_taken_0x287c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C50u;
            // 0x287c54: 0xa4e50004  sh          $a1, 0x4($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c50) {
            ctx->pc = 0x287D10u;
            goto label_287d10;
        }
    }
    ctx->pc = 0x287C58u;
label_287c58:
    // 0x287c58: 0x94650006  lhu         $a1, 0x6($v1)
    ctx->pc = 0x287c58u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_287c5c:
    // 0x287c5c: 0x38a50002  xori        $a1, $a1, 0x2
    ctx->pc = 0x287c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
label_287c60:
    // 0x287c60: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x287c60u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_287c64:
    // 0x287c64: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_287c68:
    if (ctx->pc == 0x287C68u) {
        ctx->pc = 0x287C6Cu;
        goto label_287c6c;
    }
    ctx->pc = 0x287C64u;
    {
        const bool branch_taken_0x287c64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x287c64) {
            ctx->pc = 0x287C74u;
            goto label_287c74;
        }
    }
    ctx->pc = 0x287C6Cu;
label_287c6c:
    // 0x287c6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_287c70:
    if (ctx->pc == 0x287C70u) {
        ctx->pc = 0x287C70u;
            // 0x287c70: 0x94660002  lhu         $a2, 0x2($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->pc = 0x287C74u;
        goto label_287c74;
    }
    ctx->pc = 0x287C6Cu;
    {
        const bool branch_taken_0x287c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C6Cu;
            // 0x287c70: 0x94660002  lhu         $a2, 0x2($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c6c) {
            ctx->pc = 0x287C78u;
            goto label_287c78;
        }
    }
    ctx->pc = 0x287C74u;
label_287c74:
    // 0x287c74: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x287c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_287c78:
    // 0x287c78: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_287c7c:
    if (ctx->pc == 0x287C7Cu) {
        ctx->pc = 0x287C80u;
        goto label_287c80;
    }
    ctx->pc = 0x287C78u;
    {
        const bool branch_taken_0x287c78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x287c78) {
            ctx->pc = 0x287C90u;
            goto label_287c90;
        }
    }
    ctx->pc = 0x287C80u;
label_287c80:
    // 0x287c80: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x287c80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_287c84:
    // 0x287c84: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x287c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_287c88:
    // 0x287c88: 0x10000007  b           . + 4 + (0x7 << 2)
label_287c8c:
    if (ctx->pc == 0x287C8Cu) {
        ctx->pc = 0x287C8Cu;
            // 0x287c8c: 0x2032821  addu        $a1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->pc = 0x287C90u;
        goto label_287c90;
    }
    ctx->pc = 0x287C88u;
    {
        const bool branch_taken_0x287c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C88u;
            // 0x287c8c: 0x2032821  addu        $a1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c88) {
            ctx->pc = 0x287CA8u;
            goto label_287ca8;
        }
    }
    ctx->pc = 0x287C90u;
label_287c90:
    // 0x287c90: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x287c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_287c94:
    // 0x287c94: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x287c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_287c98:
    // 0x287c98: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x287c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_287c9c:
    // 0x287c9c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x287c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_287ca0:
    // 0x287ca0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x287ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_287ca4:
    // 0x287ca4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x287ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_287ca8:
    // 0x287ca8: 0x9571000e  lhu         $s1, 0xE($t3)
    ctx->pc = 0x287ca8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 14)));
label_287cac:
    // 0x287cac: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x287cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
label_287cb0:
    // 0x287cb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x287cb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_287cb4:
    // 0x287cb4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x287cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_287cb8:
    // 0x287cb8: 0xa5310000  sh          $s1, 0x0($t1)
    ctx->pc = 0x287cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 17));
label_287cbc:
    // 0x287cbc: 0xa5260004  sh          $a2, 0x4($t1)
    ctx->pc = 0x287cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 6));
label_287cc0:
    // 0x287cc0: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
label_287cc4:
    if (ctx->pc == 0x287CC4u) {
        ctx->pc = 0x287CC4u;
            // 0x287cc4: 0xa52e0002  sh          $t6, 0x2($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 14));
        ctx->pc = 0x287CC8u;
        goto label_287cc8;
    }
    ctx->pc = 0x287CC0u;
    {
        const bool branch_taken_0x287cc0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x287CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287CC0u;
            // 0x287cc4: 0xa52e0002  sh          $t6, 0x2($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cc0) {
            ctx->pc = 0x287CD0u;
            goto label_287cd0;
        }
    }
    ctx->pc = 0x287CC8u;
label_287cc8:
    // 0x287cc8: 0xa5ea0002  sh          $t2, 0x2($t7)
    ctx->pc = 0x287cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 10));
label_287ccc:
    // 0x287ccc: 0x0  nop
    ctx->pc = 0x287cccu;
    // NOP
label_287cd0:
    // 0x287cd0: 0x9566000c  lhu         $a2, 0xC($t3)
    ctx->pc = 0x287cd0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 12)));
label_287cd4:
    // 0x287cd4: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x287cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
label_287cd8:
    // 0x287cd8: 0xa4a80004  sh          $t0, 0x4($a1)
    ctx->pc = 0x287cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 8));
label_287cdc:
    // 0x287cdc: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x287cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_287ce0:
    // 0x287ce0: 0xd04823  subu        $t1, $a2, $s0
    ctx->pc = 0x287ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_287ce4:
    // 0x287ce4: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_287ce8:
    if (ctx->pc == 0x287CE8u) {
        ctx->pc = 0x287CE8u;
            // 0x287ce8: 0x930c3  sra         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 3));
        ctx->pc = 0x287CECu;
        goto label_287cec;
    }
    ctx->pc = 0x287CE4u;
    {
        const bool branch_taken_0x287ce4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x287CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287CE4u;
            // 0x287ce8: 0x930c3  sra         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ce4) {
            ctx->pc = 0x287CF4u;
            goto label_287cf4;
        }
    }
    ctx->pc = 0x287CECu;
label_287cec:
    // 0x287cec: 0x25260007  addiu       $a2, $t1, 0x7
    ctx->pc = 0x287cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_287cf0:
    // 0x287cf0: 0x630c3  sra         $a2, $a2, 3
    ctx->pc = 0x287cf0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
label_287cf4:
    // 0x287cf4: 0xa4a60002  sh          $a2, 0x2($a1)
    ctx->pc = 0x287cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 6));
label_287cf8:
    // 0x287cf8: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x287cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_287cfc:
    // 0x287cfc: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x287cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
label_287d00:
    // 0x287d00: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x287d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_287d04:
    // 0x287d04: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x287d04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_287d08:
    // 0x287d08: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x287d08u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_287d0c:
    // 0x287d0c: 0xa4ea0004  sh          $t2, 0x4($a3)
    ctx->pc = 0x287d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 10));
label_287d10:
    // 0x287d10: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x287d10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_287d14:
    // 0x287d14: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x287d14u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_287d18:
    // 0x287d18: 0xe0782d  daddu       $t7, $a3, $zero
    ctx->pc = 0x287d18u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_287d1c:
    // 0x287d1c: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x287d1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_287d20:
    // 0x287d20: 0x5a1ff8d  bgez        $t5, . + 4 + (-0x73 << 2)
label_287d24:
    if (ctx->pc == 0x287D24u) {
        ctx->pc = 0x287D24u;
            // 0x287d24: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x287D28u;
        goto label_287d28;
    }
    ctx->pc = 0x287D20u;
    {
        const bool branch_taken_0x287d20 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x287D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D20u;
            // 0x287d24: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d20) {
            ctx->pc = 0x287B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287b58;
        }
    }
    ctx->pc = 0x287D28u;
label_287d28:
    // 0x287d28: 0xc18c0  sll         $v1, $t4, 3
    ctx->pc = 0x287d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_287d2c:
    // 0x287d2c: 0xa5ec0002  sh          $t4, 0x2($t7)
    ctx->pc = 0x287d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 12));
label_287d30:
    // 0x287d30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x287d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_287d34:
    // 0x287d34: 0xa46e0002  sh          $t6, 0x2($v1)
    ctx->pc = 0x287d34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 14));
label_287d38:
    // 0x287d38: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x287d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_287d3c:
    // 0x287d3c: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x287d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_287d40:
    // 0x287d40: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x287d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_287d44:
    // 0x287d44: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x287d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_287d48:
    // 0x287d48: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x287d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_287d4c:
    // 0x287d4c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_287d50:
    if (ctx->pc == 0x287D50u) {
        ctx->pc = 0x287D54u;
        goto label_287d54;
    }
    ctx->pc = 0x287D4Cu;
    {
        const bool branch_taken_0x287d4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x287d4c) {
            ctx->pc = 0x287D68u;
            goto label_287d68;
        }
    }
    ctx->pc = 0x287D54u;
label_287d54:
    // 0x287d54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x287d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_287d58:
    // 0x287d58: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x287d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_287d5c:
    // 0x287d5c: 0x320f809  jalr        $t9
label_287d60:
    if (ctx->pc == 0x287D60u) {
        ctx->pc = 0x287D64u;
        goto label_287d64;
    }
    ctx->pc = 0x287D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x287D64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x287D64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x287D64u; }
            if (ctx->pc != 0x287D64u) { return; }
        }
        }
    }
    ctx->pc = 0x287D64u;
label_287d64:
    // 0x287d64: 0x0  nop
    ctx->pc = 0x287d64u;
    // NOP
label_287d68:
    // 0x287d68: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x287d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_287d6c:
    // 0x287d6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x287d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_287d70:
    // 0x287d70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x287d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_287d74:
    // 0x287d74: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_287d78:
    if (ctx->pc == 0x287D78u) {
        ctx->pc = 0x287D7Cu;
        goto label_287d7c;
    }
    ctx->pc = 0x287D74u;
    {
        const bool branch_taken_0x287d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x287d74) {
            ctx->pc = 0x287DA0u;
            goto label_287da0;
        }
    }
    ctx->pc = 0x287D7Cu;
label_287d7c:
    // 0x287d7c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x287d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_287d80:
    // 0x287d80: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x287d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_287d84:
    // 0x287d84: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x287d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_287d88:
    // 0x287d88: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x287d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_287d8c:
    // 0x287d8c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x287d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_287d90:
    // 0x287d90: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x287d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_287d94:
    // 0x287d94: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x287d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_287d98:
    // 0x287d98: 0xc0a7ab4  jal         func_29EAD0
label_287d9c:
    if (ctx->pc == 0x287D9Cu) {
        ctx->pc = 0x287D9Cu;
            // 0x287d9c: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x287DA0u;
        goto label_287da0;
    }
    ctx->pc = 0x287D98u;
    SET_GPR_U32(ctx, 31, 0x287DA0u);
    ctx->pc = 0x287D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287D98u;
            // 0x287d9c: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287DA0u; }
        if (ctx->pc != 0x287DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287DA0u; }
        if (ctx->pc != 0x287DA0u) { return; }
    }
    ctx->pc = 0x287DA0u;
label_287da0:
    // 0x287da0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x287da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_287da4:
    // 0x287da4: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x287da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_287da8:
    // 0x287da8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x287da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_287dac:
    // 0x287dac: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x287dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_287db0:
    // 0x287db0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x287db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_287db4:
    // 0x287db4: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_287db8:
    if (ctx->pc == 0x287DB8u) {
        ctx->pc = 0x287DBCu;
        goto label_287dbc;
    }
    ctx->pc = 0x287DB4u;
    {
        const bool branch_taken_0x287db4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x287db4) {
            ctx->pc = 0x287DD0u;
            goto label_287dd0;
        }
    }
    ctx->pc = 0x287DBCu;
label_287dbc:
    // 0x287dbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x287dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_287dc0:
    // 0x287dc0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x287dc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_287dc4:
    // 0x287dc4: 0x320f809  jalr        $t9
label_287dc8:
    if (ctx->pc == 0x287DC8u) {
        ctx->pc = 0x287DCCu;
        goto label_287dcc;
    }
    ctx->pc = 0x287DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x287DCCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x287DCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x287DCCu; }
            if (ctx->pc != 0x287DCCu) { return; }
        }
        }
    }
    ctx->pc = 0x287DCCu;
label_287dcc:
    // 0x287dcc: 0x0  nop
    ctx->pc = 0x287dccu;
    // NOP
label_287dd0:
    // 0x287dd0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x287dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_287dd4:
    // 0x287dd4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x287dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_287dd8:
    // 0x287dd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x287dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_287ddc:
    // 0x287ddc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_287de0:
    if (ctx->pc == 0x287DE0u) {
        ctx->pc = 0x287DE4u;
        goto label_287de4;
    }
    ctx->pc = 0x287DDCu;
    {
        const bool branch_taken_0x287ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x287ddc) {
            ctx->pc = 0x287E08u;
            goto label_287e08;
        }
    }
    ctx->pc = 0x287DE4u;
label_287de4:
    // 0x287de4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x287de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_287de8:
    // 0x287de8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x287de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_287dec:
    // 0x287dec: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x287decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_287df0:
    // 0x287df0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x287df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_287df4:
    // 0x287df4: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x287df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_287df8:
    // 0x287df8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x287df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_287dfc:
    // 0x287dfc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x287dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_287e00:
    // 0x287e00: 0xc0a7ab4  jal         func_29EAD0
label_287e04:
    if (ctx->pc == 0x287E04u) {
        ctx->pc = 0x287E04u;
            // 0x287e04: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x287E08u;
        goto label_287e08;
    }
    ctx->pc = 0x287E00u;
    SET_GPR_U32(ctx, 31, 0x287E08u);
    ctx->pc = 0x287E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287E00u;
            // 0x287e04: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E08u; }
        if (ctx->pc != 0x287E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E08u; }
        if (ctx->pc != 0x287E08u) { return; }
    }
    ctx->pc = 0x287E08u;
label_287e08:
    // 0x287e08: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x287e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_287e0c:
    // 0x287e0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x287e0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_287e10:
    // 0x287e10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x287e10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_287e14:
    // 0x287e14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x287e14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_287e18:
    // 0x287e18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x287e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_287e1c:
    // 0x287e1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x287e1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_287e20:
    // 0x287e20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x287e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_287e24:
    // 0x287e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x287e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_287e28:
    // 0x287e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x287e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_287e2c:
    // 0x287e2c: 0x3e00008  jr          $ra
label_287e30:
    if (ctx->pc == 0x287E30u) {
        ctx->pc = 0x287E30u;
            // 0x287e30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x287E34u;
        goto label_287e34;
    }
    ctx->pc = 0x287E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287E2Cu;
            // 0x287e30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287E34u;
label_287e34:
    // 0x287e34: 0x0  nop
    ctx->pc = 0x287e34u;
    // NOP
label_287e38:
    // 0x287e38: 0x0  nop
    ctx->pc = 0x287e38u;
    // NOP
label_287e3c:
    // 0x287e3c: 0x0  nop
    ctx->pc = 0x287e3cu;
    // NOP
}
