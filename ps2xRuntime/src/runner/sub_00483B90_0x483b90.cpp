#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00483B90
// Address: 0x483b90 - 0x484080
void sub_00483B90_0x483b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483B90_0x483b90");
#endif

    switch (ctx->pc) {
        case 0x483b90u: goto label_483b90;
        case 0x483b94u: goto label_483b94;
        case 0x483b98u: goto label_483b98;
        case 0x483b9cu: goto label_483b9c;
        case 0x483ba0u: goto label_483ba0;
        case 0x483ba4u: goto label_483ba4;
        case 0x483ba8u: goto label_483ba8;
        case 0x483bacu: goto label_483bac;
        case 0x483bb0u: goto label_483bb0;
        case 0x483bb4u: goto label_483bb4;
        case 0x483bb8u: goto label_483bb8;
        case 0x483bbcu: goto label_483bbc;
        case 0x483bc0u: goto label_483bc0;
        case 0x483bc4u: goto label_483bc4;
        case 0x483bc8u: goto label_483bc8;
        case 0x483bccu: goto label_483bcc;
        case 0x483bd0u: goto label_483bd0;
        case 0x483bd4u: goto label_483bd4;
        case 0x483bd8u: goto label_483bd8;
        case 0x483bdcu: goto label_483bdc;
        case 0x483be0u: goto label_483be0;
        case 0x483be4u: goto label_483be4;
        case 0x483be8u: goto label_483be8;
        case 0x483becu: goto label_483bec;
        case 0x483bf0u: goto label_483bf0;
        case 0x483bf4u: goto label_483bf4;
        case 0x483bf8u: goto label_483bf8;
        case 0x483bfcu: goto label_483bfc;
        case 0x483c00u: goto label_483c00;
        case 0x483c04u: goto label_483c04;
        case 0x483c08u: goto label_483c08;
        case 0x483c0cu: goto label_483c0c;
        case 0x483c10u: goto label_483c10;
        case 0x483c14u: goto label_483c14;
        case 0x483c18u: goto label_483c18;
        case 0x483c1cu: goto label_483c1c;
        case 0x483c20u: goto label_483c20;
        case 0x483c24u: goto label_483c24;
        case 0x483c28u: goto label_483c28;
        case 0x483c2cu: goto label_483c2c;
        case 0x483c30u: goto label_483c30;
        case 0x483c34u: goto label_483c34;
        case 0x483c38u: goto label_483c38;
        case 0x483c3cu: goto label_483c3c;
        case 0x483c40u: goto label_483c40;
        case 0x483c44u: goto label_483c44;
        case 0x483c48u: goto label_483c48;
        case 0x483c4cu: goto label_483c4c;
        case 0x483c50u: goto label_483c50;
        case 0x483c54u: goto label_483c54;
        case 0x483c58u: goto label_483c58;
        case 0x483c5cu: goto label_483c5c;
        case 0x483c60u: goto label_483c60;
        case 0x483c64u: goto label_483c64;
        case 0x483c68u: goto label_483c68;
        case 0x483c6cu: goto label_483c6c;
        case 0x483c70u: goto label_483c70;
        case 0x483c74u: goto label_483c74;
        case 0x483c78u: goto label_483c78;
        case 0x483c7cu: goto label_483c7c;
        case 0x483c80u: goto label_483c80;
        case 0x483c84u: goto label_483c84;
        case 0x483c88u: goto label_483c88;
        case 0x483c8cu: goto label_483c8c;
        case 0x483c90u: goto label_483c90;
        case 0x483c94u: goto label_483c94;
        case 0x483c98u: goto label_483c98;
        case 0x483c9cu: goto label_483c9c;
        case 0x483ca0u: goto label_483ca0;
        case 0x483ca4u: goto label_483ca4;
        case 0x483ca8u: goto label_483ca8;
        case 0x483cacu: goto label_483cac;
        case 0x483cb0u: goto label_483cb0;
        case 0x483cb4u: goto label_483cb4;
        case 0x483cb8u: goto label_483cb8;
        case 0x483cbcu: goto label_483cbc;
        case 0x483cc0u: goto label_483cc0;
        case 0x483cc4u: goto label_483cc4;
        case 0x483cc8u: goto label_483cc8;
        case 0x483cccu: goto label_483ccc;
        case 0x483cd0u: goto label_483cd0;
        case 0x483cd4u: goto label_483cd4;
        case 0x483cd8u: goto label_483cd8;
        case 0x483cdcu: goto label_483cdc;
        case 0x483ce0u: goto label_483ce0;
        case 0x483ce4u: goto label_483ce4;
        case 0x483ce8u: goto label_483ce8;
        case 0x483cecu: goto label_483cec;
        case 0x483cf0u: goto label_483cf0;
        case 0x483cf4u: goto label_483cf4;
        case 0x483cf8u: goto label_483cf8;
        case 0x483cfcu: goto label_483cfc;
        case 0x483d00u: goto label_483d00;
        case 0x483d04u: goto label_483d04;
        case 0x483d08u: goto label_483d08;
        case 0x483d0cu: goto label_483d0c;
        case 0x483d10u: goto label_483d10;
        case 0x483d14u: goto label_483d14;
        case 0x483d18u: goto label_483d18;
        case 0x483d1cu: goto label_483d1c;
        case 0x483d20u: goto label_483d20;
        case 0x483d24u: goto label_483d24;
        case 0x483d28u: goto label_483d28;
        case 0x483d2cu: goto label_483d2c;
        case 0x483d30u: goto label_483d30;
        case 0x483d34u: goto label_483d34;
        case 0x483d38u: goto label_483d38;
        case 0x483d3cu: goto label_483d3c;
        case 0x483d40u: goto label_483d40;
        case 0x483d44u: goto label_483d44;
        case 0x483d48u: goto label_483d48;
        case 0x483d4cu: goto label_483d4c;
        case 0x483d50u: goto label_483d50;
        case 0x483d54u: goto label_483d54;
        case 0x483d58u: goto label_483d58;
        case 0x483d5cu: goto label_483d5c;
        case 0x483d60u: goto label_483d60;
        case 0x483d64u: goto label_483d64;
        case 0x483d68u: goto label_483d68;
        case 0x483d6cu: goto label_483d6c;
        case 0x483d70u: goto label_483d70;
        case 0x483d74u: goto label_483d74;
        case 0x483d78u: goto label_483d78;
        case 0x483d7cu: goto label_483d7c;
        case 0x483d80u: goto label_483d80;
        case 0x483d84u: goto label_483d84;
        case 0x483d88u: goto label_483d88;
        case 0x483d8cu: goto label_483d8c;
        case 0x483d90u: goto label_483d90;
        case 0x483d94u: goto label_483d94;
        case 0x483d98u: goto label_483d98;
        case 0x483d9cu: goto label_483d9c;
        case 0x483da0u: goto label_483da0;
        case 0x483da4u: goto label_483da4;
        case 0x483da8u: goto label_483da8;
        case 0x483dacu: goto label_483dac;
        case 0x483db0u: goto label_483db0;
        case 0x483db4u: goto label_483db4;
        case 0x483db8u: goto label_483db8;
        case 0x483dbcu: goto label_483dbc;
        case 0x483dc0u: goto label_483dc0;
        case 0x483dc4u: goto label_483dc4;
        case 0x483dc8u: goto label_483dc8;
        case 0x483dccu: goto label_483dcc;
        case 0x483dd0u: goto label_483dd0;
        case 0x483dd4u: goto label_483dd4;
        case 0x483dd8u: goto label_483dd8;
        case 0x483ddcu: goto label_483ddc;
        case 0x483de0u: goto label_483de0;
        case 0x483de4u: goto label_483de4;
        case 0x483de8u: goto label_483de8;
        case 0x483decu: goto label_483dec;
        case 0x483df0u: goto label_483df0;
        case 0x483df4u: goto label_483df4;
        case 0x483df8u: goto label_483df8;
        case 0x483dfcu: goto label_483dfc;
        case 0x483e00u: goto label_483e00;
        case 0x483e04u: goto label_483e04;
        case 0x483e08u: goto label_483e08;
        case 0x483e0cu: goto label_483e0c;
        case 0x483e10u: goto label_483e10;
        case 0x483e14u: goto label_483e14;
        case 0x483e18u: goto label_483e18;
        case 0x483e1cu: goto label_483e1c;
        case 0x483e20u: goto label_483e20;
        case 0x483e24u: goto label_483e24;
        case 0x483e28u: goto label_483e28;
        case 0x483e2cu: goto label_483e2c;
        case 0x483e30u: goto label_483e30;
        case 0x483e34u: goto label_483e34;
        case 0x483e38u: goto label_483e38;
        case 0x483e3cu: goto label_483e3c;
        case 0x483e40u: goto label_483e40;
        case 0x483e44u: goto label_483e44;
        case 0x483e48u: goto label_483e48;
        case 0x483e4cu: goto label_483e4c;
        case 0x483e50u: goto label_483e50;
        case 0x483e54u: goto label_483e54;
        case 0x483e58u: goto label_483e58;
        case 0x483e5cu: goto label_483e5c;
        case 0x483e60u: goto label_483e60;
        case 0x483e64u: goto label_483e64;
        case 0x483e68u: goto label_483e68;
        case 0x483e6cu: goto label_483e6c;
        case 0x483e70u: goto label_483e70;
        case 0x483e74u: goto label_483e74;
        case 0x483e78u: goto label_483e78;
        case 0x483e7cu: goto label_483e7c;
        case 0x483e80u: goto label_483e80;
        case 0x483e84u: goto label_483e84;
        case 0x483e88u: goto label_483e88;
        case 0x483e8cu: goto label_483e8c;
        case 0x483e90u: goto label_483e90;
        case 0x483e94u: goto label_483e94;
        case 0x483e98u: goto label_483e98;
        case 0x483e9cu: goto label_483e9c;
        case 0x483ea0u: goto label_483ea0;
        case 0x483ea4u: goto label_483ea4;
        case 0x483ea8u: goto label_483ea8;
        case 0x483eacu: goto label_483eac;
        case 0x483eb0u: goto label_483eb0;
        case 0x483eb4u: goto label_483eb4;
        case 0x483eb8u: goto label_483eb8;
        case 0x483ebcu: goto label_483ebc;
        case 0x483ec0u: goto label_483ec0;
        case 0x483ec4u: goto label_483ec4;
        case 0x483ec8u: goto label_483ec8;
        case 0x483eccu: goto label_483ecc;
        case 0x483ed0u: goto label_483ed0;
        case 0x483ed4u: goto label_483ed4;
        case 0x483ed8u: goto label_483ed8;
        case 0x483edcu: goto label_483edc;
        case 0x483ee0u: goto label_483ee0;
        case 0x483ee4u: goto label_483ee4;
        case 0x483ee8u: goto label_483ee8;
        case 0x483eecu: goto label_483eec;
        case 0x483ef0u: goto label_483ef0;
        case 0x483ef4u: goto label_483ef4;
        case 0x483ef8u: goto label_483ef8;
        case 0x483efcu: goto label_483efc;
        case 0x483f00u: goto label_483f00;
        case 0x483f04u: goto label_483f04;
        case 0x483f08u: goto label_483f08;
        case 0x483f0cu: goto label_483f0c;
        case 0x483f10u: goto label_483f10;
        case 0x483f14u: goto label_483f14;
        case 0x483f18u: goto label_483f18;
        case 0x483f1cu: goto label_483f1c;
        case 0x483f20u: goto label_483f20;
        case 0x483f24u: goto label_483f24;
        case 0x483f28u: goto label_483f28;
        case 0x483f2cu: goto label_483f2c;
        case 0x483f30u: goto label_483f30;
        case 0x483f34u: goto label_483f34;
        case 0x483f38u: goto label_483f38;
        case 0x483f3cu: goto label_483f3c;
        case 0x483f40u: goto label_483f40;
        case 0x483f44u: goto label_483f44;
        case 0x483f48u: goto label_483f48;
        case 0x483f4cu: goto label_483f4c;
        case 0x483f50u: goto label_483f50;
        case 0x483f54u: goto label_483f54;
        case 0x483f58u: goto label_483f58;
        case 0x483f5cu: goto label_483f5c;
        case 0x483f60u: goto label_483f60;
        case 0x483f64u: goto label_483f64;
        case 0x483f68u: goto label_483f68;
        case 0x483f6cu: goto label_483f6c;
        case 0x483f70u: goto label_483f70;
        case 0x483f74u: goto label_483f74;
        case 0x483f78u: goto label_483f78;
        case 0x483f7cu: goto label_483f7c;
        case 0x483f80u: goto label_483f80;
        case 0x483f84u: goto label_483f84;
        case 0x483f88u: goto label_483f88;
        case 0x483f8cu: goto label_483f8c;
        case 0x483f90u: goto label_483f90;
        case 0x483f94u: goto label_483f94;
        case 0x483f98u: goto label_483f98;
        case 0x483f9cu: goto label_483f9c;
        case 0x483fa0u: goto label_483fa0;
        case 0x483fa4u: goto label_483fa4;
        case 0x483fa8u: goto label_483fa8;
        case 0x483facu: goto label_483fac;
        case 0x483fb0u: goto label_483fb0;
        case 0x483fb4u: goto label_483fb4;
        case 0x483fb8u: goto label_483fb8;
        case 0x483fbcu: goto label_483fbc;
        case 0x483fc0u: goto label_483fc0;
        case 0x483fc4u: goto label_483fc4;
        case 0x483fc8u: goto label_483fc8;
        case 0x483fccu: goto label_483fcc;
        case 0x483fd0u: goto label_483fd0;
        case 0x483fd4u: goto label_483fd4;
        case 0x483fd8u: goto label_483fd8;
        case 0x483fdcu: goto label_483fdc;
        case 0x483fe0u: goto label_483fe0;
        case 0x483fe4u: goto label_483fe4;
        case 0x483fe8u: goto label_483fe8;
        case 0x483fecu: goto label_483fec;
        case 0x483ff0u: goto label_483ff0;
        case 0x483ff4u: goto label_483ff4;
        case 0x483ff8u: goto label_483ff8;
        case 0x483ffcu: goto label_483ffc;
        case 0x484000u: goto label_484000;
        case 0x484004u: goto label_484004;
        case 0x484008u: goto label_484008;
        case 0x48400cu: goto label_48400c;
        case 0x484010u: goto label_484010;
        case 0x484014u: goto label_484014;
        case 0x484018u: goto label_484018;
        case 0x48401cu: goto label_48401c;
        case 0x484020u: goto label_484020;
        case 0x484024u: goto label_484024;
        case 0x484028u: goto label_484028;
        case 0x48402cu: goto label_48402c;
        case 0x484030u: goto label_484030;
        case 0x484034u: goto label_484034;
        case 0x484038u: goto label_484038;
        case 0x48403cu: goto label_48403c;
        case 0x484040u: goto label_484040;
        case 0x484044u: goto label_484044;
        case 0x484048u: goto label_484048;
        case 0x48404cu: goto label_48404c;
        case 0x484050u: goto label_484050;
        case 0x484054u: goto label_484054;
        case 0x484058u: goto label_484058;
        case 0x48405cu: goto label_48405c;
        case 0x484060u: goto label_484060;
        case 0x484064u: goto label_484064;
        case 0x484068u: goto label_484068;
        case 0x48406cu: goto label_48406c;
        case 0x484070u: goto label_484070;
        case 0x484074u: goto label_484074;
        case 0x484078u: goto label_484078;
        case 0x48407cu: goto label_48407c;
        default: break;
    }

    ctx->pc = 0x483b90u;

label_483b90:
    // 0x483b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x483b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_483b94:
    // 0x483b94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x483b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_483b98:
    // 0x483b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x483b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_483b9c:
    // 0x483b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_483ba0:
    // 0x483ba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x483ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483ba4:
    // 0x483ba4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_483ba8:
    if (ctx->pc == 0x483BA8u) {
        ctx->pc = 0x483BA8u;
            // 0x483ba8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483BACu;
        goto label_483bac;
    }
    ctx->pc = 0x483BA4u;
    {
        const bool branch_taken_0x483ba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x483BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483BA4u;
            // 0x483ba8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483ba4) {
            ctx->pc = 0x483CD8u;
            goto label_483cd8;
        }
    }
    ctx->pc = 0x483BACu;
label_483bac:
    // 0x483bac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x483bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_483bb0:
    // 0x483bb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x483bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_483bb4:
    // 0x483bb4: 0x2463f2a0  addiu       $v1, $v1, -0xD60
    ctx->pc = 0x483bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963872));
label_483bb8:
    // 0x483bb8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x483bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_483bbc:
    // 0x483bbc: 0x2442f2d8  addiu       $v0, $v0, -0xD28
    ctx->pc = 0x483bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963928));
label_483bc0:
    // 0x483bc0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x483bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_483bc4:
    // 0x483bc4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x483bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_483bc8:
    // 0x483bc8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x483bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_483bcc:
    // 0x483bcc: 0xc0407c0  jal         func_101F00
label_483bd0:
    if (ctx->pc == 0x483BD0u) {
        ctx->pc = 0x483BD0u;
            // 0x483bd0: 0x24a53cf0  addiu       $a1, $a1, 0x3CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15600));
        ctx->pc = 0x483BD4u;
        goto label_483bd4;
    }
    ctx->pc = 0x483BCCu;
    SET_GPR_U32(ctx, 31, 0x483BD4u);
    ctx->pc = 0x483BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483BCCu;
            // 0x483bd0: 0x24a53cf0  addiu       $a1, $a1, 0x3CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483BD4u; }
        if (ctx->pc != 0x483BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483BD4u; }
        if (ctx->pc != 0x483BD4u) { return; }
    }
    ctx->pc = 0x483BD4u;
label_483bd4:
    // 0x483bd4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x483bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_483bd8:
    // 0x483bd8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_483bdc:
    if (ctx->pc == 0x483BDCu) {
        ctx->pc = 0x483BDCu;
            // 0x483bdc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x483BE0u;
        goto label_483be0;
    }
    ctx->pc = 0x483BD8u;
    {
        const bool branch_taken_0x483bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483bd8) {
            ctx->pc = 0x483BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483BD8u;
            // 0x483bdc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483BECu;
            goto label_483bec;
        }
    }
    ctx->pc = 0x483BE0u;
label_483be0:
    // 0x483be0: 0xc07507c  jal         func_1D41F0
label_483be4:
    if (ctx->pc == 0x483BE4u) {
        ctx->pc = 0x483BE4u;
            // 0x483be4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x483BE8u;
        goto label_483be8;
    }
    ctx->pc = 0x483BE0u;
    SET_GPR_U32(ctx, 31, 0x483BE8u);
    ctx->pc = 0x483BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483BE0u;
            // 0x483be4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483BE8u; }
        if (ctx->pc != 0x483BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483BE8u; }
        if (ctx->pc != 0x483BE8u) { return; }
    }
    ctx->pc = 0x483BE8u;
label_483be8:
    // 0x483be8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x483be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_483bec:
    // 0x483bec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_483bf0:
    if (ctx->pc == 0x483BF0u) {
        ctx->pc = 0x483BF0u;
            // 0x483bf0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x483BF4u;
        goto label_483bf4;
    }
    ctx->pc = 0x483BECu;
    {
        const bool branch_taken_0x483bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483bec) {
            ctx->pc = 0x483BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483BECu;
            // 0x483bf0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483C1Cu;
            goto label_483c1c;
        }
    }
    ctx->pc = 0x483BF4u;
label_483bf4:
    // 0x483bf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_483bf8:
    if (ctx->pc == 0x483BF8u) {
        ctx->pc = 0x483BFCu;
        goto label_483bfc;
    }
    ctx->pc = 0x483BF4u;
    {
        const bool branch_taken_0x483bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483bf4) {
            ctx->pc = 0x483C18u;
            goto label_483c18;
        }
    }
    ctx->pc = 0x483BFCu;
label_483bfc:
    // 0x483bfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_483c00:
    if (ctx->pc == 0x483C00u) {
        ctx->pc = 0x483C04u;
        goto label_483c04;
    }
    ctx->pc = 0x483BFCu;
    {
        const bool branch_taken_0x483bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483bfc) {
            ctx->pc = 0x483C18u;
            goto label_483c18;
        }
    }
    ctx->pc = 0x483C04u;
label_483c04:
    // 0x483c04: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x483c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_483c08:
    // 0x483c08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_483c0c:
    if (ctx->pc == 0x483C0Cu) {
        ctx->pc = 0x483C10u;
        goto label_483c10;
    }
    ctx->pc = 0x483C08u;
    {
        const bool branch_taken_0x483c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x483c08) {
            ctx->pc = 0x483C18u;
            goto label_483c18;
        }
    }
    ctx->pc = 0x483C10u;
label_483c10:
    // 0x483c10: 0xc0400a8  jal         func_1002A0
label_483c14:
    if (ctx->pc == 0x483C14u) {
        ctx->pc = 0x483C18u;
        goto label_483c18;
    }
    ctx->pc = 0x483C10u;
    SET_GPR_U32(ctx, 31, 0x483C18u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483C18u; }
        if (ctx->pc != 0x483C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483C18u; }
        if (ctx->pc != 0x483C18u) { return; }
    }
    ctx->pc = 0x483C18u;
label_483c18:
    // 0x483c18: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x483c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_483c1c:
    // 0x483c1c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_483c20:
    if (ctx->pc == 0x483C20u) {
        ctx->pc = 0x483C20u;
            // 0x483c20: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x483C24u;
        goto label_483c24;
    }
    ctx->pc = 0x483C1Cu;
    {
        const bool branch_taken_0x483c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483c1c) {
            ctx->pc = 0x483C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483C1Cu;
            // 0x483c20: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483C4Cu;
            goto label_483c4c;
        }
    }
    ctx->pc = 0x483C24u;
label_483c24:
    // 0x483c24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_483c28:
    if (ctx->pc == 0x483C28u) {
        ctx->pc = 0x483C2Cu;
        goto label_483c2c;
    }
    ctx->pc = 0x483C24u;
    {
        const bool branch_taken_0x483c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483c24) {
            ctx->pc = 0x483C48u;
            goto label_483c48;
        }
    }
    ctx->pc = 0x483C2Cu;
label_483c2c:
    // 0x483c2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_483c30:
    if (ctx->pc == 0x483C30u) {
        ctx->pc = 0x483C34u;
        goto label_483c34;
    }
    ctx->pc = 0x483C2Cu;
    {
        const bool branch_taken_0x483c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483c2c) {
            ctx->pc = 0x483C48u;
            goto label_483c48;
        }
    }
    ctx->pc = 0x483C34u;
label_483c34:
    // 0x483c34: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x483c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_483c38:
    // 0x483c38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_483c3c:
    if (ctx->pc == 0x483C3Cu) {
        ctx->pc = 0x483C40u;
        goto label_483c40;
    }
    ctx->pc = 0x483C38u;
    {
        const bool branch_taken_0x483c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x483c38) {
            ctx->pc = 0x483C48u;
            goto label_483c48;
        }
    }
    ctx->pc = 0x483C40u;
label_483c40:
    // 0x483c40: 0xc0400a8  jal         func_1002A0
label_483c44:
    if (ctx->pc == 0x483C44u) {
        ctx->pc = 0x483C48u;
        goto label_483c48;
    }
    ctx->pc = 0x483C40u;
    SET_GPR_U32(ctx, 31, 0x483C48u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483C48u; }
        if (ctx->pc != 0x483C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483C48u; }
        if (ctx->pc != 0x483C48u) { return; }
    }
    ctx->pc = 0x483C48u;
label_483c48:
    // 0x483c48: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x483c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_483c4c:
    // 0x483c4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_483c50:
    if (ctx->pc == 0x483C50u) {
        ctx->pc = 0x483C54u;
        goto label_483c54;
    }
    ctx->pc = 0x483C4Cu;
    {
        const bool branch_taken_0x483c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483c4c) {
            ctx->pc = 0x483C68u;
            goto label_483c68;
        }
    }
    ctx->pc = 0x483C54u;
label_483c54:
    // 0x483c54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x483c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_483c58:
    // 0x483c58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x483c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_483c5c:
    // 0x483c5c: 0x2463f288  addiu       $v1, $v1, -0xD78
    ctx->pc = 0x483c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963848));
label_483c60:
    // 0x483c60: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x483c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_483c64:
    // 0x483c64: 0xac407b98  sw          $zero, 0x7B98($v0)
    ctx->pc = 0x483c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31640), GPR_U32(ctx, 0));
label_483c68:
    // 0x483c68: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_483c6c:
    if (ctx->pc == 0x483C6Cu) {
        ctx->pc = 0x483C6Cu;
            // 0x483c6c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x483C70u;
        goto label_483c70;
    }
    ctx->pc = 0x483C68u;
    {
        const bool branch_taken_0x483c68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x483c68) {
            ctx->pc = 0x483C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483C68u;
            // 0x483c6c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483CC4u;
            goto label_483cc4;
        }
    }
    ctx->pc = 0x483C70u;
label_483c70:
    // 0x483c70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x483c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_483c74:
    // 0x483c74: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x483c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_483c78:
    // 0x483c78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x483c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_483c7c:
    // 0x483c7c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x483c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_483c80:
    // 0x483c80: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_483c84:
    if (ctx->pc == 0x483C84u) {
        ctx->pc = 0x483C84u;
            // 0x483c84: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x483C88u;
        goto label_483c88;
    }
    ctx->pc = 0x483C80u;
    {
        const bool branch_taken_0x483c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x483c80) {
            ctx->pc = 0x483C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483C80u;
            // 0x483c84: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483C9Cu;
            goto label_483c9c;
        }
    }
    ctx->pc = 0x483C88u;
label_483c88:
    // 0x483c88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x483c88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_483c8c:
    // 0x483c8c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x483c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_483c90:
    // 0x483c90: 0x320f809  jalr        $t9
label_483c94:
    if (ctx->pc == 0x483C94u) {
        ctx->pc = 0x483C94u;
            // 0x483c94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x483C98u;
        goto label_483c98;
    }
    ctx->pc = 0x483C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x483C98u);
        ctx->pc = 0x483C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483C90u;
            // 0x483c94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x483C98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x483C98u; }
            if (ctx->pc != 0x483C98u) { return; }
        }
        }
    }
    ctx->pc = 0x483C98u;
label_483c98:
    // 0x483c98: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x483c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_483c9c:
    // 0x483c9c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_483ca0:
    if (ctx->pc == 0x483CA0u) {
        ctx->pc = 0x483CA0u;
            // 0x483ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483CA4u;
        goto label_483ca4;
    }
    ctx->pc = 0x483C9Cu;
    {
        const bool branch_taken_0x483c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x483c9c) {
            ctx->pc = 0x483CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483C9Cu;
            // 0x483ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483CB8u;
            goto label_483cb8;
        }
    }
    ctx->pc = 0x483CA4u;
label_483ca4:
    // 0x483ca4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x483ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_483ca8:
    // 0x483ca8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x483ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_483cac:
    // 0x483cac: 0x320f809  jalr        $t9
label_483cb0:
    if (ctx->pc == 0x483CB0u) {
        ctx->pc = 0x483CB0u;
            // 0x483cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x483CB4u;
        goto label_483cb4;
    }
    ctx->pc = 0x483CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x483CB4u);
        ctx->pc = 0x483CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483CACu;
            // 0x483cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x483CB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x483CB4u; }
            if (ctx->pc != 0x483CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x483CB4u;
label_483cb4:
    // 0x483cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x483cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_483cb8:
    // 0x483cb8: 0xc075bf8  jal         func_1D6FE0
label_483cbc:
    if (ctx->pc == 0x483CBCu) {
        ctx->pc = 0x483CBCu;
            // 0x483cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483CC0u;
        goto label_483cc0;
    }
    ctx->pc = 0x483CB8u;
    SET_GPR_U32(ctx, 31, 0x483CC0u);
    ctx->pc = 0x483CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483CB8u;
            // 0x483cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483CC0u; }
        if (ctx->pc != 0x483CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483CC0u; }
        if (ctx->pc != 0x483CC0u) { return; }
    }
    ctx->pc = 0x483CC0u;
label_483cc0:
    // 0x483cc0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x483cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_483cc4:
    // 0x483cc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x483cc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_483cc8:
    // 0x483cc8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_483ccc:
    if (ctx->pc == 0x483CCCu) {
        ctx->pc = 0x483CCCu;
            // 0x483ccc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483CD0u;
        goto label_483cd0;
    }
    ctx->pc = 0x483CC8u;
    {
        const bool branch_taken_0x483cc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x483cc8) {
            ctx->pc = 0x483CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483CC8u;
            // 0x483ccc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483CDCu;
            goto label_483cdc;
        }
    }
    ctx->pc = 0x483CD0u;
label_483cd0:
    // 0x483cd0: 0xc0400a8  jal         func_1002A0
label_483cd4:
    if (ctx->pc == 0x483CD4u) {
        ctx->pc = 0x483CD4u;
            // 0x483cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483CD8u;
        goto label_483cd8;
    }
    ctx->pc = 0x483CD0u;
    SET_GPR_U32(ctx, 31, 0x483CD8u);
    ctx->pc = 0x483CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483CD0u;
            // 0x483cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483CD8u; }
        if (ctx->pc != 0x483CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483CD8u; }
        if (ctx->pc != 0x483CD8u) { return; }
    }
    ctx->pc = 0x483CD8u;
label_483cd8:
    // 0x483cd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x483cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_483cdc:
    // 0x483cdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x483cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_483ce0:
    // 0x483ce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x483ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_483ce4:
    // 0x483ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_483ce8:
    // 0x483ce8: 0x3e00008  jr          $ra
label_483cec:
    if (ctx->pc == 0x483CECu) {
        ctx->pc = 0x483CECu;
            // 0x483cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x483CF0u;
        goto label_483cf0;
    }
    ctx->pc = 0x483CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483CE8u;
            // 0x483cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x483CF0u;
label_483cf0:
    // 0x483cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x483cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_483cf4:
    // 0x483cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x483cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_483cf8:
    // 0x483cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x483cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_483cfc:
    // 0x483cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_483d00:
    // 0x483d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x483d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483d04:
    // 0x483d04: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_483d08:
    if (ctx->pc == 0x483D08u) {
        ctx->pc = 0x483D08u;
            // 0x483d08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483D0Cu;
        goto label_483d0c;
    }
    ctx->pc = 0x483D04u;
    {
        const bool branch_taken_0x483d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x483D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483D04u;
            // 0x483d08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483d04) {
            ctx->pc = 0x483DCCu;
            goto label_483dcc;
        }
    }
    ctx->pc = 0x483D0Cu;
label_483d0c:
    // 0x483d0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x483d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_483d10:
    // 0x483d10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x483d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_483d14:
    // 0x483d14: 0x2463f340  addiu       $v1, $v1, -0xCC0
    ctx->pc = 0x483d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964032));
label_483d18:
    // 0x483d18: 0x2442f380  addiu       $v0, $v0, -0xC80
    ctx->pc = 0x483d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
label_483d1c:
    // 0x483d1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x483d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_483d20:
    // 0x483d20: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x483d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_483d24:
    // 0x483d24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x483d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_483d28:
    // 0x483d28: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x483d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_483d2c:
    // 0x483d2c: 0x320f809  jalr        $t9
label_483d30:
    if (ctx->pc == 0x483D30u) {
        ctx->pc = 0x483D34u;
        goto label_483d34;
    }
    ctx->pc = 0x483D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x483D34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x483D34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x483D34u; }
            if (ctx->pc != 0x483D34u) { return; }
        }
        }
    }
    ctx->pc = 0x483D34u;
label_483d34:
    // 0x483d34: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_483d38:
    if (ctx->pc == 0x483D38u) {
        ctx->pc = 0x483D38u;
            // 0x483d38: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x483D3Cu;
        goto label_483d3c;
    }
    ctx->pc = 0x483D34u;
    {
        const bool branch_taken_0x483d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x483d34) {
            ctx->pc = 0x483D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483D34u;
            // 0x483d38: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483DB8u;
            goto label_483db8;
        }
    }
    ctx->pc = 0x483D3Cu;
label_483d3c:
    // 0x483d3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x483d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_483d40:
    // 0x483d40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x483d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_483d44:
    // 0x483d44: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x483d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_483d48:
    // 0x483d48: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x483d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_483d4c:
    // 0x483d4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x483d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_483d50:
    // 0x483d50: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x483d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_483d54:
    // 0x483d54: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x483d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_483d58:
    // 0x483d58: 0xc0aecc4  jal         func_2BB310
label_483d5c:
    if (ctx->pc == 0x483D5Cu) {
        ctx->pc = 0x483D5Cu;
            // 0x483d5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x483D60u;
        goto label_483d60;
    }
    ctx->pc = 0x483D58u;
    SET_GPR_U32(ctx, 31, 0x483D60u);
    ctx->pc = 0x483D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483D58u;
            // 0x483d5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483D60u; }
        if (ctx->pc != 0x483D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483D60u; }
        if (ctx->pc != 0x483D60u) { return; }
    }
    ctx->pc = 0x483D60u;
label_483d60:
    // 0x483d60: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x483d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_483d64:
    // 0x483d64: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x483d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_483d68:
    // 0x483d68: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_483d6c:
    if (ctx->pc == 0x483D6Cu) {
        ctx->pc = 0x483D6Cu;
            // 0x483d6c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x483D70u;
        goto label_483d70;
    }
    ctx->pc = 0x483D68u;
    {
        const bool branch_taken_0x483d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x483d68) {
            ctx->pc = 0x483D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483D68u;
            // 0x483d6c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483D84u;
            goto label_483d84;
        }
    }
    ctx->pc = 0x483D70u;
label_483d70:
    // 0x483d70: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x483d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_483d74:
    // 0x483d74: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x483d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_483d78:
    // 0x483d78: 0x320f809  jalr        $t9
label_483d7c:
    if (ctx->pc == 0x483D7Cu) {
        ctx->pc = 0x483D7Cu;
            // 0x483d7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x483D80u;
        goto label_483d80;
    }
    ctx->pc = 0x483D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x483D80u);
        ctx->pc = 0x483D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483D78u;
            // 0x483d7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x483D80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x483D80u; }
            if (ctx->pc != 0x483D80u) { return; }
        }
        }
    }
    ctx->pc = 0x483D80u;
label_483d80:
    // 0x483d80: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x483d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_483d84:
    // 0x483d84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x483d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_483d88:
    // 0x483d88: 0xc0aec9c  jal         func_2BB270
label_483d8c:
    if (ctx->pc == 0x483D8Cu) {
        ctx->pc = 0x483D8Cu;
            // 0x483d8c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x483D90u;
        goto label_483d90;
    }
    ctx->pc = 0x483D88u;
    SET_GPR_U32(ctx, 31, 0x483D90u);
    ctx->pc = 0x483D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483D88u;
            // 0x483d8c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483D90u; }
        if (ctx->pc != 0x483D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483D90u; }
        if (ctx->pc != 0x483D90u) { return; }
    }
    ctx->pc = 0x483D90u;
label_483d90:
    // 0x483d90: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x483d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_483d94:
    // 0x483d94: 0xc0aec88  jal         func_2BB220
label_483d98:
    if (ctx->pc == 0x483D98u) {
        ctx->pc = 0x483D98u;
            // 0x483d98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x483D9Cu;
        goto label_483d9c;
    }
    ctx->pc = 0x483D94u;
    SET_GPR_U32(ctx, 31, 0x483D9Cu);
    ctx->pc = 0x483D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483D94u;
            // 0x483d98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483D9Cu; }
        if (ctx->pc != 0x483D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483D9Cu; }
        if (ctx->pc != 0x483D9Cu) { return; }
    }
    ctx->pc = 0x483D9Cu;
label_483d9c:
    // 0x483d9c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x483d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_483da0:
    // 0x483da0: 0xc0aec0c  jal         func_2BB030
label_483da4:
    if (ctx->pc == 0x483DA4u) {
        ctx->pc = 0x483DA4u;
            // 0x483da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483DA8u;
        goto label_483da8;
    }
    ctx->pc = 0x483DA0u;
    SET_GPR_U32(ctx, 31, 0x483DA8u);
    ctx->pc = 0x483DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483DA0u;
            // 0x483da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483DA8u; }
        if (ctx->pc != 0x483DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483DA8u; }
        if (ctx->pc != 0x483DA8u) { return; }
    }
    ctx->pc = 0x483DA8u;
label_483da8:
    // 0x483da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x483da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483dac:
    // 0x483dac: 0xc0aeaa8  jal         func_2BAAA0
label_483db0:
    if (ctx->pc == 0x483DB0u) {
        ctx->pc = 0x483DB0u;
            // 0x483db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483DB4u;
        goto label_483db4;
    }
    ctx->pc = 0x483DACu;
    SET_GPR_U32(ctx, 31, 0x483DB4u);
    ctx->pc = 0x483DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483DACu;
            // 0x483db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483DB4u; }
        if (ctx->pc != 0x483DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483DB4u; }
        if (ctx->pc != 0x483DB4u) { return; }
    }
    ctx->pc = 0x483DB4u;
label_483db4:
    // 0x483db4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x483db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_483db8:
    // 0x483db8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x483db8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_483dbc:
    // 0x483dbc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_483dc0:
    if (ctx->pc == 0x483DC0u) {
        ctx->pc = 0x483DC0u;
            // 0x483dc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483DC4u;
        goto label_483dc4;
    }
    ctx->pc = 0x483DBCu;
    {
        const bool branch_taken_0x483dbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x483dbc) {
            ctx->pc = 0x483DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483DBCu;
            // 0x483dc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483DD0u;
            goto label_483dd0;
        }
    }
    ctx->pc = 0x483DC4u;
label_483dc4:
    // 0x483dc4: 0xc0400a8  jal         func_1002A0
label_483dc8:
    if (ctx->pc == 0x483DC8u) {
        ctx->pc = 0x483DC8u;
            // 0x483dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483DCCu;
        goto label_483dcc;
    }
    ctx->pc = 0x483DC4u;
    SET_GPR_U32(ctx, 31, 0x483DCCu);
    ctx->pc = 0x483DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483DC4u;
            // 0x483dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483DCCu; }
        if (ctx->pc != 0x483DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483DCCu; }
        if (ctx->pc != 0x483DCCu) { return; }
    }
    ctx->pc = 0x483DCCu;
label_483dcc:
    // 0x483dcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x483dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483dd0:
    // 0x483dd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x483dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_483dd4:
    // 0x483dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x483dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_483dd8:
    // 0x483dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_483ddc:
    // 0x483ddc: 0x3e00008  jr          $ra
label_483de0:
    if (ctx->pc == 0x483DE0u) {
        ctx->pc = 0x483DE0u;
            // 0x483de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x483DE4u;
        goto label_483de4;
    }
    ctx->pc = 0x483DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483DDCu;
            // 0x483de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x483DE4u;
label_483de4:
    // 0x483de4: 0x0  nop
    ctx->pc = 0x483de4u;
    // NOP
label_483de8:
    // 0x483de8: 0x0  nop
    ctx->pc = 0x483de8u;
    // NOP
label_483dec:
    // 0x483dec: 0x0  nop
    ctx->pc = 0x483decu;
    // NOP
label_483df0:
    // 0x483df0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x483df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_483df4:
    // 0x483df4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x483df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_483df8:
    // 0x483df8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x483df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_483dfc:
    // 0x483dfc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x483dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_483e00:
    // 0x483e00: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x483e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_483e04:
    // 0x483e04: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x483e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_483e08:
    // 0x483e08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x483e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_483e0c:
    // 0x483e0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x483e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_483e10:
    // 0x483e10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x483e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_483e14:
    // 0x483e14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x483e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_483e18:
    // 0x483e18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x483e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_483e1c:
    // 0x483e1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x483e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_483e20:
    // 0x483e20: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x483e20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_483e24:
    // 0x483e24: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x483e24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_483e28:
    // 0x483e28: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_483e2c:
    if (ctx->pc == 0x483E2Cu) {
        ctx->pc = 0x483E2Cu;
            // 0x483e2c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483E30u;
        goto label_483e30;
    }
    ctx->pc = 0x483E28u;
    {
        const bool branch_taken_0x483e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x483E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483E28u;
            // 0x483e2c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483e28) {
            ctx->pc = 0x483E78u;
            goto label_483e78;
        }
    }
    ctx->pc = 0x483E30u;
label_483e30:
    // 0x483e30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x483e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_483e34:
    // 0x483e34: 0x50a30086  beql        $a1, $v1, . + 4 + (0x86 << 2)
label_483e38:
    if (ctx->pc == 0x483E38u) {
        ctx->pc = 0x483E38u;
            // 0x483e38: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x483E3Cu;
        goto label_483e3c;
    }
    ctx->pc = 0x483E34u;
    {
        const bool branch_taken_0x483e34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x483e34) {
            ctx->pc = 0x483E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483E34u;
            // 0x483e38: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x484050u;
            goto label_484050;
        }
    }
    ctx->pc = 0x483E3Cu;
label_483e3c:
    // 0x483e3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x483e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_483e40:
    // 0x483e40: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_483e44:
    if (ctx->pc == 0x483E44u) {
        ctx->pc = 0x483E48u;
        goto label_483e48;
    }
    ctx->pc = 0x483E40u;
    {
        const bool branch_taken_0x483e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x483e40) {
            ctx->pc = 0x483E50u;
            goto label_483e50;
        }
    }
    ctx->pc = 0x483E48u;
label_483e48:
    // 0x483e48: 0x10000080  b           . + 4 + (0x80 << 2)
label_483e4c:
    if (ctx->pc == 0x483E4Cu) {
        ctx->pc = 0x483E50u;
        goto label_483e50;
    }
    ctx->pc = 0x483E48u;
    {
        const bool branch_taken_0x483e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483e48) {
            ctx->pc = 0x48404Cu;
            goto label_48404c;
        }
    }
    ctx->pc = 0x483E50u;
label_483e50:
    // 0x483e50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x483e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_483e54:
    // 0x483e54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x483e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_483e58:
    // 0x483e58: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x483e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_483e5c:
    // 0x483e5c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x483e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_483e60:
    // 0x483e60: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x483e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_483e64:
    // 0x483e64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x483e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_483e68:
    // 0x483e68: 0x320f809  jalr        $t9
label_483e6c:
    if (ctx->pc == 0x483E6Cu) {
        ctx->pc = 0x483E6Cu;
            // 0x483e6c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x483E70u;
        goto label_483e70;
    }
    ctx->pc = 0x483E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x483E70u);
        ctx->pc = 0x483E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483E68u;
            // 0x483e6c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x483E70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x483E70u; }
            if (ctx->pc != 0x483E70u) { return; }
        }
        }
    }
    ctx->pc = 0x483E70u;
label_483e70:
    // 0x483e70: 0x10000076  b           . + 4 + (0x76 << 2)
label_483e74:
    if (ctx->pc == 0x483E74u) {
        ctx->pc = 0x483E78u;
        goto label_483e78;
    }
    ctx->pc = 0x483E70u;
    {
        const bool branch_taken_0x483e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483e70) {
            ctx->pc = 0x48404Cu;
            goto label_48404c;
        }
    }
    ctx->pc = 0x483E78u;
label_483e78:
    // 0x483e78: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x483e78u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_483e7c:
    // 0x483e7c: 0x12e00073  beqz        $s7, . + 4 + (0x73 << 2)
label_483e80:
    if (ctx->pc == 0x483E80u) {
        ctx->pc = 0x483E84u;
        goto label_483e84;
    }
    ctx->pc = 0x483E7Cu;
    {
        const bool branch_taken_0x483e7c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x483e7c) {
            ctx->pc = 0x48404Cu;
            goto label_48404c;
        }
    }
    ctx->pc = 0x483E84u;
label_483e84:
    // 0x483e84: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x483e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_483e88:
    // 0x483e88: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x483e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_483e8c:
    // 0x483e8c: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x483e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_483e90:
    // 0x483e90: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x483e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_483e94:
    // 0x483e94: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x483e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_483e98:
    // 0x483e98: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x483e98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_483e9c:
    // 0x483e9c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x483e9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483ea0:
    // 0x483ea0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x483ea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483ea4:
    // 0x483ea4: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x483ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_483ea8:
    // 0x483ea8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x483ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_483eac:
    // 0x483eac: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x483eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_483eb0:
    // 0x483eb0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x483eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_483eb4:
    // 0x483eb4: 0xc454fbc8  lwc1        $f20, -0x438($v0)
    ctx->pc = 0x483eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_483eb8:
    // 0x483eb8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x483eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_483ebc:
    // 0x483ebc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x483ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_483ec0:
    // 0x483ec0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x483ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_483ec4:
    // 0x483ec4: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x483ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_483ec8:
    // 0x483ec8: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x483ec8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_483ecc:
    // 0x483ecc: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x483eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_483ed0:
    // 0x483ed0: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x483ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_483ed4:
    // 0x483ed4: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x483ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_483ed8:
    // 0x483ed8: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x483ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_483edc:
    // 0x483edc: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x483edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_483ee0:
    // 0x483ee0: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x483ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_483ee4:
    // 0x483ee4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x483ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_483ee8:
    // 0x483ee8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x483ee8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_483eec:
    // 0x483eec: 0xc0d639c  jal         func_358E70
label_483ef0:
    if (ctx->pc == 0x483EF0u) {
        ctx->pc = 0x483EF0u;
            // 0x483ef0: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x483EF4u;
        goto label_483ef4;
    }
    ctx->pc = 0x483EECu;
    SET_GPR_U32(ctx, 31, 0x483EF4u);
    ctx->pc = 0x483EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483EECu;
            // 0x483ef0: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483EF4u; }
        if (ctx->pc != 0x483EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483EF4u; }
        if (ctx->pc != 0x483EF4u) { return; }
    }
    ctx->pc = 0x483EF4u;
label_483ef4:
    // 0x483ef4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_483ef8:
    if (ctx->pc == 0x483EF8u) {
        ctx->pc = 0x483EFCu;
        goto label_483efc;
    }
    ctx->pc = 0x483EF4u;
    {
        const bool branch_taken_0x483ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483ef4) {
            ctx->pc = 0x483FE0u;
            goto label_483fe0;
        }
    }
    ctx->pc = 0x483EFCu;
label_483efc:
    // 0x483efc: 0xc0d1c14  jal         func_347050
label_483f00:
    if (ctx->pc == 0x483F00u) {
        ctx->pc = 0x483F00u;
            // 0x483f00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483F04u;
        goto label_483f04;
    }
    ctx->pc = 0x483EFCu;
    SET_GPR_U32(ctx, 31, 0x483F04u);
    ctx->pc = 0x483F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483EFCu;
            // 0x483f00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F04u; }
        if (ctx->pc != 0x483F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F04u; }
        if (ctx->pc != 0x483F04u) { return; }
    }
    ctx->pc = 0x483F04u;
label_483f04:
    // 0x483f04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x483f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483f08:
    // 0x483f08: 0xc04f278  jal         func_13C9E0
label_483f0c:
    if (ctx->pc == 0x483F0Cu) {
        ctx->pc = 0x483F0Cu;
            // 0x483f0c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x483F10u;
        goto label_483f10;
    }
    ctx->pc = 0x483F08u;
    SET_GPR_U32(ctx, 31, 0x483F10u);
    ctx->pc = 0x483F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483F08u;
            // 0x483f0c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F10u; }
        if (ctx->pc != 0x483F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F10u; }
        if (ctx->pc != 0x483F10u) { return; }
    }
    ctx->pc = 0x483F10u;
label_483f10:
    // 0x483f10: 0xc0d1c10  jal         func_347040
label_483f14:
    if (ctx->pc == 0x483F14u) {
        ctx->pc = 0x483F14u;
            // 0x483f14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483F18u;
        goto label_483f18;
    }
    ctx->pc = 0x483F10u;
    SET_GPR_U32(ctx, 31, 0x483F18u);
    ctx->pc = 0x483F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483F10u;
            // 0x483f14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F18u; }
        if (ctx->pc != 0x483F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F18u; }
        if (ctx->pc != 0x483F18u) { return; }
    }
    ctx->pc = 0x483F18u;
label_483f18:
    // 0x483f18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x483f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483f1c:
    // 0x483f1c: 0xc04ce80  jal         func_133A00
label_483f20:
    if (ctx->pc == 0x483F20u) {
        ctx->pc = 0x483F20u;
            // 0x483f20: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x483F24u;
        goto label_483f24;
    }
    ctx->pc = 0x483F1Cu;
    SET_GPR_U32(ctx, 31, 0x483F24u);
    ctx->pc = 0x483F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483F1Cu;
            // 0x483f20: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F24u; }
        if (ctx->pc != 0x483F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F24u; }
        if (ctx->pc != 0x483F24u) { return; }
    }
    ctx->pc = 0x483F24u;
label_483f24:
    // 0x483f24: 0xc0d4108  jal         func_350420
label_483f28:
    if (ctx->pc == 0x483F28u) {
        ctx->pc = 0x483F2Cu;
        goto label_483f2c;
    }
    ctx->pc = 0x483F24u;
    SET_GPR_U32(ctx, 31, 0x483F2Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F2Cu; }
        if (ctx->pc != 0x483F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F2Cu; }
        if (ctx->pc != 0x483F2Cu) { return; }
    }
    ctx->pc = 0x483F2Cu;
label_483f2c:
    // 0x483f2c: 0xc0b36b4  jal         func_2CDAD0
label_483f30:
    if (ctx->pc == 0x483F30u) {
        ctx->pc = 0x483F30u;
            // 0x483f30: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483F34u;
        goto label_483f34;
    }
    ctx->pc = 0x483F2Cu;
    SET_GPR_U32(ctx, 31, 0x483F34u);
    ctx->pc = 0x483F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483F2Cu;
            // 0x483f30: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F34u; }
        if (ctx->pc != 0x483F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F34u; }
        if (ctx->pc != 0x483F34u) { return; }
    }
    ctx->pc = 0x483F34u;
label_483f34:
    // 0x483f34: 0xc0b9c64  jal         func_2E7190
label_483f38:
    if (ctx->pc == 0x483F38u) {
        ctx->pc = 0x483F38u;
            // 0x483f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483F3Cu;
        goto label_483f3c;
    }
    ctx->pc = 0x483F34u;
    SET_GPR_U32(ctx, 31, 0x483F3Cu);
    ctx->pc = 0x483F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483F34u;
            // 0x483f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F3Cu; }
        if (ctx->pc != 0x483F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F3Cu; }
        if (ctx->pc != 0x483F3Cu) { return; }
    }
    ctx->pc = 0x483F3Cu;
label_483f3c:
    // 0x483f3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x483f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483f40:
    // 0x483f40: 0xc0d4104  jal         func_350410
label_483f44:
    if (ctx->pc == 0x483F44u) {
        ctx->pc = 0x483F44u;
            // 0x483f44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483F48u;
        goto label_483f48;
    }
    ctx->pc = 0x483F40u;
    SET_GPR_U32(ctx, 31, 0x483F48u);
    ctx->pc = 0x483F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483F40u;
            // 0x483f44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F48u; }
        if (ctx->pc != 0x483F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F48u; }
        if (ctx->pc != 0x483F48u) { return; }
    }
    ctx->pc = 0x483F48u;
label_483f48:
    // 0x483f48: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x483f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_483f4c:
    // 0x483f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x483f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_483f50:
    // 0x483f50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x483f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483f54:
    // 0x483f54: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x483f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_483f58:
    // 0x483f58: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x483f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483f5c:
    // 0x483f5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x483f5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483f60:
    // 0x483f60: 0xc0d40ac  jal         func_3502B0
label_483f64:
    if (ctx->pc == 0x483F64u) {
        ctx->pc = 0x483F64u;
            // 0x483f64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x483F68u;
        goto label_483f68;
    }
    ctx->pc = 0x483F60u;
    SET_GPR_U32(ctx, 31, 0x483F68u);
    ctx->pc = 0x483F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483F60u;
            // 0x483f64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F68u; }
        if (ctx->pc != 0x483F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F68u; }
        if (ctx->pc != 0x483F68u) { return; }
    }
    ctx->pc = 0x483F68u;
label_483f68:
    // 0x483f68: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x483f68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_483f6c:
    // 0x483f6c: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_483f70:
    if (ctx->pc == 0x483F70u) {
        ctx->pc = 0x483F70u;
            // 0x483f70: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x483F74u;
        goto label_483f74;
    }
    ctx->pc = 0x483F6Cu;
    {
        const bool branch_taken_0x483f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x483F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483F6Cu;
            // 0x483f70: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483f6c) {
            ctx->pc = 0x483FF8u;
            goto label_483ff8;
        }
    }
    ctx->pc = 0x483F74u;
label_483f74:
    // 0x483f74: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x483f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_483f78:
    // 0x483f78: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x483f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_483f7c:
    // 0x483f7c: 0xc121020  jal         func_484080
label_483f80:
    if (ctx->pc == 0x483F80u) {
        ctx->pc = 0x483F80u;
            // 0x483f80: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x483F84u;
        goto label_483f84;
    }
    ctx->pc = 0x483F7Cu;
    SET_GPR_U32(ctx, 31, 0x483F84u);
    ctx->pc = 0x483F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483F7Cu;
            // 0x483f80: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x484080u;
    if (runtime->hasFunction(0x484080u)) {
        auto targetFn = runtime->lookupFunction(0x484080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F84u; }
        if (ctx->pc != 0x483F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00484080_0x484080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F84u; }
        if (ctx->pc != 0x483F84u) { return; }
    }
    ctx->pc = 0x483F84u;
label_483f84:
    // 0x483f84: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x483f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_483f88:
    // 0x483f88: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x483f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_483f8c:
    // 0x483f8c: 0xc04cd60  jal         func_133580
label_483f90:
    if (ctx->pc == 0x483F90u) {
        ctx->pc = 0x483F90u;
            // 0x483f90: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x483F94u;
        goto label_483f94;
    }
    ctx->pc = 0x483F8Cu;
    SET_GPR_U32(ctx, 31, 0x483F94u);
    ctx->pc = 0x483F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483F8Cu;
            // 0x483f90: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F94u; }
        if (ctx->pc != 0x483F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483F94u; }
        if (ctx->pc != 0x483F94u) { return; }
    }
    ctx->pc = 0x483F94u;
label_483f94:
    // 0x483f94: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x483f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_483f98:
    // 0x483f98: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x483f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_483f9c:
    // 0x483f9c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x483f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_483fa0:
    // 0x483fa0: 0xc04e4a4  jal         func_139290
label_483fa4:
    if (ctx->pc == 0x483FA4u) {
        ctx->pc = 0x483FA4u;
            // 0x483fa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x483FA8u;
        goto label_483fa8;
    }
    ctx->pc = 0x483FA0u;
    SET_GPR_U32(ctx, 31, 0x483FA8u);
    ctx->pc = 0x483FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483FA0u;
            // 0x483fa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483FA8u; }
        if (ctx->pc != 0x483FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483FA8u; }
        if (ctx->pc != 0x483FA8u) { return; }
    }
    ctx->pc = 0x483FA8u;
label_483fa8:
    // 0x483fa8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x483fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_483fac:
    // 0x483fac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x483facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_483fb0:
    // 0x483fb0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x483fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_483fb4:
    // 0x483fb4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x483fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_483fb8:
    // 0x483fb8: 0x320f809  jalr        $t9
label_483fbc:
    if (ctx->pc == 0x483FBCu) {
        ctx->pc = 0x483FBCu;
            // 0x483fbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483FC0u;
        goto label_483fc0;
    }
    ctx->pc = 0x483FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x483FC0u);
        ctx->pc = 0x483FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483FB8u;
            // 0x483fbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x483FC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x483FC0u; }
            if (ctx->pc != 0x483FC0u) { return; }
        }
        }
    }
    ctx->pc = 0x483FC0u;
label_483fc0:
    // 0x483fc0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x483fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_483fc4:
    // 0x483fc4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x483fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_483fc8:
    // 0x483fc8: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x483fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_483fcc:
    // 0x483fcc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x483fccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483fd0:
    // 0x483fd0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x483fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_483fd4:
    // 0x483fd4: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x483fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_483fd8:
    // 0x483fd8: 0xc04cfcc  jal         func_133F30
label_483fdc:
    if (ctx->pc == 0x483FDCu) {
        ctx->pc = 0x483FDCu;
            // 0x483fdc: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x483FE0u;
        goto label_483fe0;
    }
    ctx->pc = 0x483FD8u;
    SET_GPR_U32(ctx, 31, 0x483FE0u);
    ctx->pc = 0x483FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483FD8u;
            // 0x483fdc: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483FE0u; }
        if (ctx->pc != 0x483FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483FE0u; }
        if (ctx->pc != 0x483FE0u) { return; }
    }
    ctx->pc = 0x483FE0u;
label_483fe0:
    // 0x483fe0: 0x8e84009c  lw          $a0, 0x9C($s4)
    ctx->pc = 0x483fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_483fe4:
    // 0x483fe4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x483fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_483fe8:
    // 0x483fe8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x483fe8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_483fec:
    // 0x483fec: 0xc0e325c  jal         func_38C970
label_483ff0:
    if (ctx->pc == 0x483FF0u) {
        ctx->pc = 0x483FF0u;
            // 0x483ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483FF4u;
        goto label_483ff4;
    }
    ctx->pc = 0x483FECu;
    SET_GPR_U32(ctx, 31, 0x483FF4u);
    ctx->pc = 0x483FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483FECu;
            // 0x483ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483FF4u; }
        if (ctx->pc != 0x483FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483FF4u; }
        if (ctx->pc != 0x483FF4u) { return; }
    }
    ctx->pc = 0x483FF4u;
label_483ff4:
    // 0x483ff4: 0x0  nop
    ctx->pc = 0x483ff4u;
    // NOP
label_483ff8:
    // 0x483ff8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x483ff8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_483ffc:
    // 0x483ffc: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x483ffcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_484000:
    // 0x484000: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
label_484004:
    if (ctx->pc == 0x484004u) {
        ctx->pc = 0x484004u;
            // 0x484004: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x484008u;
        goto label_484008;
    }
    ctx->pc = 0x484000u;
    {
        const bool branch_taken_0x484000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x484004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484000u;
            // 0x484004: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484000) {
            ctx->pc = 0x483ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_483ed0;
        }
    }
    ctx->pc = 0x484008u;
label_484008:
    // 0x484008: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x484008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48400c:
    // 0x48400c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x48400cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_484010:
    // 0x484010: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_484014:
    if (ctx->pc == 0x484014u) {
        ctx->pc = 0x484018u;
        goto label_484018;
    }
    ctx->pc = 0x484010u;
    {
        const bool branch_taken_0x484010 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x484010) {
            ctx->pc = 0x48404Cu;
            goto label_48404c;
        }
    }
    ctx->pc = 0x484018u;
label_484018:
    // 0x484018: 0xc04e738  jal         func_139CE0
label_48401c:
    if (ctx->pc == 0x48401Cu) {
        ctx->pc = 0x48401Cu;
            // 0x48401c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x484020u;
        goto label_484020;
    }
    ctx->pc = 0x484018u;
    SET_GPR_U32(ctx, 31, 0x484020u);
    ctx->pc = 0x48401Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484018u;
            // 0x48401c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484020u; }
        if (ctx->pc != 0x484020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484020u; }
        if (ctx->pc != 0x484020u) { return; }
    }
    ctx->pc = 0x484020u;
label_484020:
    // 0x484020: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x484020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_484024:
    // 0x484024: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x484024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_484028:
    // 0x484028: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x484028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_48402c:
    // 0x48402c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x48402cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_484030:
    // 0x484030: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x484030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484034:
    // 0x484034: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x484034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_484038:
    // 0x484038: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x484038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_48403c:
    // 0x48403c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x48403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_484040:
    // 0x484040: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x484040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_484044:
    // 0x484044: 0xc055d28  jal         func_1574A0
label_484048:
    if (ctx->pc == 0x484048u) {
        ctx->pc = 0x484048u;
            // 0x484048: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48404Cu;
        goto label_48404c;
    }
    ctx->pc = 0x484044u;
    SET_GPR_U32(ctx, 31, 0x48404Cu);
    ctx->pc = 0x484048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484044u;
            // 0x484048: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48404Cu; }
        if (ctx->pc != 0x48404Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48404Cu; }
        if (ctx->pc != 0x48404Cu) { return; }
    }
    ctx->pc = 0x48404Cu;
label_48404c:
    // 0x48404c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x48404cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_484050:
    // 0x484050: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x484050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_484054:
    // 0x484054: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x484054u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_484058:
    // 0x484058: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x484058u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_48405c:
    // 0x48405c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x48405cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_484060:
    // 0x484060: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x484060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_484064:
    // 0x484064: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x484064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_484068:
    // 0x484068: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x484068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48406c:
    // 0x48406c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x48406cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_484070:
    // 0x484070: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x484070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_484074:
    // 0x484074: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x484074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484078:
    // 0x484078: 0x3e00008  jr          $ra
label_48407c:
    if (ctx->pc == 0x48407Cu) {
        ctx->pc = 0x48407Cu;
            // 0x48407c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x484080u;
        goto label_fallthrough_0x484078;
    }
    ctx->pc = 0x484078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484078u;
            // 0x48407c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x484078:
    ctx->pc = 0x484080u;
}
