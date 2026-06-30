#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00539C80
// Address: 0x539c80 - 0x53a0c0
void sub_00539C80_0x539c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00539C80_0x539c80");
#endif

    switch (ctx->pc) {
        case 0x539c80u: goto label_539c80;
        case 0x539c84u: goto label_539c84;
        case 0x539c88u: goto label_539c88;
        case 0x539c8cu: goto label_539c8c;
        case 0x539c90u: goto label_539c90;
        case 0x539c94u: goto label_539c94;
        case 0x539c98u: goto label_539c98;
        case 0x539c9cu: goto label_539c9c;
        case 0x539ca0u: goto label_539ca0;
        case 0x539ca4u: goto label_539ca4;
        case 0x539ca8u: goto label_539ca8;
        case 0x539cacu: goto label_539cac;
        case 0x539cb0u: goto label_539cb0;
        case 0x539cb4u: goto label_539cb4;
        case 0x539cb8u: goto label_539cb8;
        case 0x539cbcu: goto label_539cbc;
        case 0x539cc0u: goto label_539cc0;
        case 0x539cc4u: goto label_539cc4;
        case 0x539cc8u: goto label_539cc8;
        case 0x539cccu: goto label_539ccc;
        case 0x539cd0u: goto label_539cd0;
        case 0x539cd4u: goto label_539cd4;
        case 0x539cd8u: goto label_539cd8;
        case 0x539cdcu: goto label_539cdc;
        case 0x539ce0u: goto label_539ce0;
        case 0x539ce4u: goto label_539ce4;
        case 0x539ce8u: goto label_539ce8;
        case 0x539cecu: goto label_539cec;
        case 0x539cf0u: goto label_539cf0;
        case 0x539cf4u: goto label_539cf4;
        case 0x539cf8u: goto label_539cf8;
        case 0x539cfcu: goto label_539cfc;
        case 0x539d00u: goto label_539d00;
        case 0x539d04u: goto label_539d04;
        case 0x539d08u: goto label_539d08;
        case 0x539d0cu: goto label_539d0c;
        case 0x539d10u: goto label_539d10;
        case 0x539d14u: goto label_539d14;
        case 0x539d18u: goto label_539d18;
        case 0x539d1cu: goto label_539d1c;
        case 0x539d20u: goto label_539d20;
        case 0x539d24u: goto label_539d24;
        case 0x539d28u: goto label_539d28;
        case 0x539d2cu: goto label_539d2c;
        case 0x539d30u: goto label_539d30;
        case 0x539d34u: goto label_539d34;
        case 0x539d38u: goto label_539d38;
        case 0x539d3cu: goto label_539d3c;
        case 0x539d40u: goto label_539d40;
        case 0x539d44u: goto label_539d44;
        case 0x539d48u: goto label_539d48;
        case 0x539d4cu: goto label_539d4c;
        case 0x539d50u: goto label_539d50;
        case 0x539d54u: goto label_539d54;
        case 0x539d58u: goto label_539d58;
        case 0x539d5cu: goto label_539d5c;
        case 0x539d60u: goto label_539d60;
        case 0x539d64u: goto label_539d64;
        case 0x539d68u: goto label_539d68;
        case 0x539d6cu: goto label_539d6c;
        case 0x539d70u: goto label_539d70;
        case 0x539d74u: goto label_539d74;
        case 0x539d78u: goto label_539d78;
        case 0x539d7cu: goto label_539d7c;
        case 0x539d80u: goto label_539d80;
        case 0x539d84u: goto label_539d84;
        case 0x539d88u: goto label_539d88;
        case 0x539d8cu: goto label_539d8c;
        case 0x539d90u: goto label_539d90;
        case 0x539d94u: goto label_539d94;
        case 0x539d98u: goto label_539d98;
        case 0x539d9cu: goto label_539d9c;
        case 0x539da0u: goto label_539da0;
        case 0x539da4u: goto label_539da4;
        case 0x539da8u: goto label_539da8;
        case 0x539dacu: goto label_539dac;
        case 0x539db0u: goto label_539db0;
        case 0x539db4u: goto label_539db4;
        case 0x539db8u: goto label_539db8;
        case 0x539dbcu: goto label_539dbc;
        case 0x539dc0u: goto label_539dc0;
        case 0x539dc4u: goto label_539dc4;
        case 0x539dc8u: goto label_539dc8;
        case 0x539dccu: goto label_539dcc;
        case 0x539dd0u: goto label_539dd0;
        case 0x539dd4u: goto label_539dd4;
        case 0x539dd8u: goto label_539dd8;
        case 0x539ddcu: goto label_539ddc;
        case 0x539de0u: goto label_539de0;
        case 0x539de4u: goto label_539de4;
        case 0x539de8u: goto label_539de8;
        case 0x539decu: goto label_539dec;
        case 0x539df0u: goto label_539df0;
        case 0x539df4u: goto label_539df4;
        case 0x539df8u: goto label_539df8;
        case 0x539dfcu: goto label_539dfc;
        case 0x539e00u: goto label_539e00;
        case 0x539e04u: goto label_539e04;
        case 0x539e08u: goto label_539e08;
        case 0x539e0cu: goto label_539e0c;
        case 0x539e10u: goto label_539e10;
        case 0x539e14u: goto label_539e14;
        case 0x539e18u: goto label_539e18;
        case 0x539e1cu: goto label_539e1c;
        case 0x539e20u: goto label_539e20;
        case 0x539e24u: goto label_539e24;
        case 0x539e28u: goto label_539e28;
        case 0x539e2cu: goto label_539e2c;
        case 0x539e30u: goto label_539e30;
        case 0x539e34u: goto label_539e34;
        case 0x539e38u: goto label_539e38;
        case 0x539e3cu: goto label_539e3c;
        case 0x539e40u: goto label_539e40;
        case 0x539e44u: goto label_539e44;
        case 0x539e48u: goto label_539e48;
        case 0x539e4cu: goto label_539e4c;
        case 0x539e50u: goto label_539e50;
        case 0x539e54u: goto label_539e54;
        case 0x539e58u: goto label_539e58;
        case 0x539e5cu: goto label_539e5c;
        case 0x539e60u: goto label_539e60;
        case 0x539e64u: goto label_539e64;
        case 0x539e68u: goto label_539e68;
        case 0x539e6cu: goto label_539e6c;
        case 0x539e70u: goto label_539e70;
        case 0x539e74u: goto label_539e74;
        case 0x539e78u: goto label_539e78;
        case 0x539e7cu: goto label_539e7c;
        case 0x539e80u: goto label_539e80;
        case 0x539e84u: goto label_539e84;
        case 0x539e88u: goto label_539e88;
        case 0x539e8cu: goto label_539e8c;
        case 0x539e90u: goto label_539e90;
        case 0x539e94u: goto label_539e94;
        case 0x539e98u: goto label_539e98;
        case 0x539e9cu: goto label_539e9c;
        case 0x539ea0u: goto label_539ea0;
        case 0x539ea4u: goto label_539ea4;
        case 0x539ea8u: goto label_539ea8;
        case 0x539eacu: goto label_539eac;
        case 0x539eb0u: goto label_539eb0;
        case 0x539eb4u: goto label_539eb4;
        case 0x539eb8u: goto label_539eb8;
        case 0x539ebcu: goto label_539ebc;
        case 0x539ec0u: goto label_539ec0;
        case 0x539ec4u: goto label_539ec4;
        case 0x539ec8u: goto label_539ec8;
        case 0x539eccu: goto label_539ecc;
        case 0x539ed0u: goto label_539ed0;
        case 0x539ed4u: goto label_539ed4;
        case 0x539ed8u: goto label_539ed8;
        case 0x539edcu: goto label_539edc;
        case 0x539ee0u: goto label_539ee0;
        case 0x539ee4u: goto label_539ee4;
        case 0x539ee8u: goto label_539ee8;
        case 0x539eecu: goto label_539eec;
        case 0x539ef0u: goto label_539ef0;
        case 0x539ef4u: goto label_539ef4;
        case 0x539ef8u: goto label_539ef8;
        case 0x539efcu: goto label_539efc;
        case 0x539f00u: goto label_539f00;
        case 0x539f04u: goto label_539f04;
        case 0x539f08u: goto label_539f08;
        case 0x539f0cu: goto label_539f0c;
        case 0x539f10u: goto label_539f10;
        case 0x539f14u: goto label_539f14;
        case 0x539f18u: goto label_539f18;
        case 0x539f1cu: goto label_539f1c;
        case 0x539f20u: goto label_539f20;
        case 0x539f24u: goto label_539f24;
        case 0x539f28u: goto label_539f28;
        case 0x539f2cu: goto label_539f2c;
        case 0x539f30u: goto label_539f30;
        case 0x539f34u: goto label_539f34;
        case 0x539f38u: goto label_539f38;
        case 0x539f3cu: goto label_539f3c;
        case 0x539f40u: goto label_539f40;
        case 0x539f44u: goto label_539f44;
        case 0x539f48u: goto label_539f48;
        case 0x539f4cu: goto label_539f4c;
        case 0x539f50u: goto label_539f50;
        case 0x539f54u: goto label_539f54;
        case 0x539f58u: goto label_539f58;
        case 0x539f5cu: goto label_539f5c;
        case 0x539f60u: goto label_539f60;
        case 0x539f64u: goto label_539f64;
        case 0x539f68u: goto label_539f68;
        case 0x539f6cu: goto label_539f6c;
        case 0x539f70u: goto label_539f70;
        case 0x539f74u: goto label_539f74;
        case 0x539f78u: goto label_539f78;
        case 0x539f7cu: goto label_539f7c;
        case 0x539f80u: goto label_539f80;
        case 0x539f84u: goto label_539f84;
        case 0x539f88u: goto label_539f88;
        case 0x539f8cu: goto label_539f8c;
        case 0x539f90u: goto label_539f90;
        case 0x539f94u: goto label_539f94;
        case 0x539f98u: goto label_539f98;
        case 0x539f9cu: goto label_539f9c;
        case 0x539fa0u: goto label_539fa0;
        case 0x539fa4u: goto label_539fa4;
        case 0x539fa8u: goto label_539fa8;
        case 0x539facu: goto label_539fac;
        case 0x539fb0u: goto label_539fb0;
        case 0x539fb4u: goto label_539fb4;
        case 0x539fb8u: goto label_539fb8;
        case 0x539fbcu: goto label_539fbc;
        case 0x539fc0u: goto label_539fc0;
        case 0x539fc4u: goto label_539fc4;
        case 0x539fc8u: goto label_539fc8;
        case 0x539fccu: goto label_539fcc;
        case 0x539fd0u: goto label_539fd0;
        case 0x539fd4u: goto label_539fd4;
        case 0x539fd8u: goto label_539fd8;
        case 0x539fdcu: goto label_539fdc;
        case 0x539fe0u: goto label_539fe0;
        case 0x539fe4u: goto label_539fe4;
        case 0x539fe8u: goto label_539fe8;
        case 0x539fecu: goto label_539fec;
        case 0x539ff0u: goto label_539ff0;
        case 0x539ff4u: goto label_539ff4;
        case 0x539ff8u: goto label_539ff8;
        case 0x539ffcu: goto label_539ffc;
        case 0x53a000u: goto label_53a000;
        case 0x53a004u: goto label_53a004;
        case 0x53a008u: goto label_53a008;
        case 0x53a00cu: goto label_53a00c;
        case 0x53a010u: goto label_53a010;
        case 0x53a014u: goto label_53a014;
        case 0x53a018u: goto label_53a018;
        case 0x53a01cu: goto label_53a01c;
        case 0x53a020u: goto label_53a020;
        case 0x53a024u: goto label_53a024;
        case 0x53a028u: goto label_53a028;
        case 0x53a02cu: goto label_53a02c;
        case 0x53a030u: goto label_53a030;
        case 0x53a034u: goto label_53a034;
        case 0x53a038u: goto label_53a038;
        case 0x53a03cu: goto label_53a03c;
        case 0x53a040u: goto label_53a040;
        case 0x53a044u: goto label_53a044;
        case 0x53a048u: goto label_53a048;
        case 0x53a04cu: goto label_53a04c;
        case 0x53a050u: goto label_53a050;
        case 0x53a054u: goto label_53a054;
        case 0x53a058u: goto label_53a058;
        case 0x53a05cu: goto label_53a05c;
        case 0x53a060u: goto label_53a060;
        case 0x53a064u: goto label_53a064;
        case 0x53a068u: goto label_53a068;
        case 0x53a06cu: goto label_53a06c;
        case 0x53a070u: goto label_53a070;
        case 0x53a074u: goto label_53a074;
        case 0x53a078u: goto label_53a078;
        case 0x53a07cu: goto label_53a07c;
        case 0x53a080u: goto label_53a080;
        case 0x53a084u: goto label_53a084;
        case 0x53a088u: goto label_53a088;
        case 0x53a08cu: goto label_53a08c;
        case 0x53a090u: goto label_53a090;
        case 0x53a094u: goto label_53a094;
        case 0x53a098u: goto label_53a098;
        case 0x53a09cu: goto label_53a09c;
        case 0x53a0a0u: goto label_53a0a0;
        case 0x53a0a4u: goto label_53a0a4;
        case 0x53a0a8u: goto label_53a0a8;
        case 0x53a0acu: goto label_53a0ac;
        case 0x53a0b0u: goto label_53a0b0;
        case 0x53a0b4u: goto label_53a0b4;
        case 0x53a0b8u: goto label_53a0b8;
        case 0x53a0bcu: goto label_53a0bc;
        default: break;
    }

    ctx->pc = 0x539c80u;

label_539c80:
    // 0x539c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x539c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_539c84:
    // 0x539c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x539c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_539c88:
    // 0x539c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x539c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_539c8c:
    // 0x539c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x539c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_539c90:
    // 0x539c90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x539c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_539c94:
    // 0x539c94: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_539c98:
    if (ctx->pc == 0x539C98u) {
        ctx->pc = 0x539C98u;
            // 0x539c98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539C9Cu;
        goto label_539c9c;
    }
    ctx->pc = 0x539C94u;
    {
        const bool branch_taken_0x539c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x539C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539C94u;
            // 0x539c98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539c94) {
            ctx->pc = 0x539DC8u;
            goto label_539dc8;
        }
    }
    ctx->pc = 0x539C9Cu;
label_539c9c:
    // 0x539c9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x539c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_539ca0:
    // 0x539ca0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x539ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_539ca4:
    // 0x539ca4: 0x246371c0  addiu       $v1, $v1, 0x71C0
    ctx->pc = 0x539ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29120));
label_539ca8:
    // 0x539ca8: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x539ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_539cac:
    // 0x539cac: 0x244271f8  addiu       $v0, $v0, 0x71F8
    ctx->pc = 0x539cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29176));
label_539cb0:
    // 0x539cb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x539cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_539cb4:
    // 0x539cb4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x539cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_539cb8:
    // 0x539cb8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x539cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_539cbc:
    // 0x539cbc: 0xc0407c0  jal         func_101F00
label_539cc0:
    if (ctx->pc == 0x539CC0u) {
        ctx->pc = 0x539CC0u;
            // 0x539cc0: 0x24a59de0  addiu       $a1, $a1, -0x6220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942176));
        ctx->pc = 0x539CC4u;
        goto label_539cc4;
    }
    ctx->pc = 0x539CBCu;
    SET_GPR_U32(ctx, 31, 0x539CC4u);
    ctx->pc = 0x539CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539CBCu;
            // 0x539cc0: 0x24a59de0  addiu       $a1, $a1, -0x6220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539CC4u; }
        if (ctx->pc != 0x539CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539CC4u; }
        if (ctx->pc != 0x539CC4u) { return; }
    }
    ctx->pc = 0x539CC4u;
label_539cc4:
    // 0x539cc4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x539cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_539cc8:
    // 0x539cc8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_539ccc:
    if (ctx->pc == 0x539CCCu) {
        ctx->pc = 0x539CCCu;
            // 0x539ccc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x539CD0u;
        goto label_539cd0;
    }
    ctx->pc = 0x539CC8u;
    {
        const bool branch_taken_0x539cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x539cc8) {
            ctx->pc = 0x539CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539CC8u;
            // 0x539ccc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539CDCu;
            goto label_539cdc;
        }
    }
    ctx->pc = 0x539CD0u;
label_539cd0:
    // 0x539cd0: 0xc07507c  jal         func_1D41F0
label_539cd4:
    if (ctx->pc == 0x539CD4u) {
        ctx->pc = 0x539CD4u;
            // 0x539cd4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x539CD8u;
        goto label_539cd8;
    }
    ctx->pc = 0x539CD0u;
    SET_GPR_U32(ctx, 31, 0x539CD8u);
    ctx->pc = 0x539CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539CD0u;
            // 0x539cd4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539CD8u; }
        if (ctx->pc != 0x539CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539CD8u; }
        if (ctx->pc != 0x539CD8u) { return; }
    }
    ctx->pc = 0x539CD8u;
label_539cd8:
    // 0x539cd8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x539cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_539cdc:
    // 0x539cdc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_539ce0:
    if (ctx->pc == 0x539CE0u) {
        ctx->pc = 0x539CE0u;
            // 0x539ce0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x539CE4u;
        goto label_539ce4;
    }
    ctx->pc = 0x539CDCu;
    {
        const bool branch_taken_0x539cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x539cdc) {
            ctx->pc = 0x539CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539CDCu;
            // 0x539ce0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539D0Cu;
            goto label_539d0c;
        }
    }
    ctx->pc = 0x539CE4u;
label_539ce4:
    // 0x539ce4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_539ce8:
    if (ctx->pc == 0x539CE8u) {
        ctx->pc = 0x539CECu;
        goto label_539cec;
    }
    ctx->pc = 0x539CE4u;
    {
        const bool branch_taken_0x539ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x539ce4) {
            ctx->pc = 0x539D08u;
            goto label_539d08;
        }
    }
    ctx->pc = 0x539CECu;
label_539cec:
    // 0x539cec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_539cf0:
    if (ctx->pc == 0x539CF0u) {
        ctx->pc = 0x539CF4u;
        goto label_539cf4;
    }
    ctx->pc = 0x539CECu;
    {
        const bool branch_taken_0x539cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x539cec) {
            ctx->pc = 0x539D08u;
            goto label_539d08;
        }
    }
    ctx->pc = 0x539CF4u;
label_539cf4:
    // 0x539cf4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x539cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_539cf8:
    // 0x539cf8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_539cfc:
    if (ctx->pc == 0x539CFCu) {
        ctx->pc = 0x539D00u;
        goto label_539d00;
    }
    ctx->pc = 0x539CF8u;
    {
        const bool branch_taken_0x539cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x539cf8) {
            ctx->pc = 0x539D08u;
            goto label_539d08;
        }
    }
    ctx->pc = 0x539D00u;
label_539d00:
    // 0x539d00: 0xc0400a8  jal         func_1002A0
label_539d04:
    if (ctx->pc == 0x539D04u) {
        ctx->pc = 0x539D08u;
        goto label_539d08;
    }
    ctx->pc = 0x539D00u;
    SET_GPR_U32(ctx, 31, 0x539D08u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539D08u; }
        if (ctx->pc != 0x539D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539D08u; }
        if (ctx->pc != 0x539D08u) { return; }
    }
    ctx->pc = 0x539D08u;
label_539d08:
    // 0x539d08: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x539d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_539d0c:
    // 0x539d0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_539d10:
    if (ctx->pc == 0x539D10u) {
        ctx->pc = 0x539D10u;
            // 0x539d10: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x539D14u;
        goto label_539d14;
    }
    ctx->pc = 0x539D0Cu;
    {
        const bool branch_taken_0x539d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x539d0c) {
            ctx->pc = 0x539D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539D0Cu;
            // 0x539d10: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539D3Cu;
            goto label_539d3c;
        }
    }
    ctx->pc = 0x539D14u;
label_539d14:
    // 0x539d14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_539d18:
    if (ctx->pc == 0x539D18u) {
        ctx->pc = 0x539D1Cu;
        goto label_539d1c;
    }
    ctx->pc = 0x539D14u;
    {
        const bool branch_taken_0x539d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x539d14) {
            ctx->pc = 0x539D38u;
            goto label_539d38;
        }
    }
    ctx->pc = 0x539D1Cu;
label_539d1c:
    // 0x539d1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_539d20:
    if (ctx->pc == 0x539D20u) {
        ctx->pc = 0x539D24u;
        goto label_539d24;
    }
    ctx->pc = 0x539D1Cu;
    {
        const bool branch_taken_0x539d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x539d1c) {
            ctx->pc = 0x539D38u;
            goto label_539d38;
        }
    }
    ctx->pc = 0x539D24u;
label_539d24:
    // 0x539d24: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x539d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_539d28:
    // 0x539d28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_539d2c:
    if (ctx->pc == 0x539D2Cu) {
        ctx->pc = 0x539D30u;
        goto label_539d30;
    }
    ctx->pc = 0x539D28u;
    {
        const bool branch_taken_0x539d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x539d28) {
            ctx->pc = 0x539D38u;
            goto label_539d38;
        }
    }
    ctx->pc = 0x539D30u;
label_539d30:
    // 0x539d30: 0xc0400a8  jal         func_1002A0
label_539d34:
    if (ctx->pc == 0x539D34u) {
        ctx->pc = 0x539D38u;
        goto label_539d38;
    }
    ctx->pc = 0x539D30u;
    SET_GPR_U32(ctx, 31, 0x539D38u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539D38u; }
        if (ctx->pc != 0x539D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539D38u; }
        if (ctx->pc != 0x539D38u) { return; }
    }
    ctx->pc = 0x539D38u;
label_539d38:
    // 0x539d38: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x539d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_539d3c:
    // 0x539d3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_539d40:
    if (ctx->pc == 0x539D40u) {
        ctx->pc = 0x539D44u;
        goto label_539d44;
    }
    ctx->pc = 0x539D3Cu;
    {
        const bool branch_taken_0x539d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x539d3c) {
            ctx->pc = 0x539D58u;
            goto label_539d58;
        }
    }
    ctx->pc = 0x539D44u;
label_539d44:
    // 0x539d44: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x539d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_539d48:
    // 0x539d48: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x539d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_539d4c:
    // 0x539d4c: 0x246371a8  addiu       $v1, $v1, 0x71A8
    ctx->pc = 0x539d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29096));
label_539d50:
    // 0x539d50: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x539d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_539d54:
    // 0x539d54: 0xac40b6b0  sw          $zero, -0x4950($v0)
    ctx->pc = 0x539d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948528), GPR_U32(ctx, 0));
label_539d58:
    // 0x539d58: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_539d5c:
    if (ctx->pc == 0x539D5Cu) {
        ctx->pc = 0x539D5Cu;
            // 0x539d5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x539D60u;
        goto label_539d60;
    }
    ctx->pc = 0x539D58u;
    {
        const bool branch_taken_0x539d58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x539d58) {
            ctx->pc = 0x539D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539D58u;
            // 0x539d5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539DB4u;
            goto label_539db4;
        }
    }
    ctx->pc = 0x539D60u;
label_539d60:
    // 0x539d60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x539d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_539d64:
    // 0x539d64: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x539d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_539d68:
    // 0x539d68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x539d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_539d6c:
    // 0x539d6c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x539d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_539d70:
    // 0x539d70: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_539d74:
    if (ctx->pc == 0x539D74u) {
        ctx->pc = 0x539D74u;
            // 0x539d74: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x539D78u;
        goto label_539d78;
    }
    ctx->pc = 0x539D70u;
    {
        const bool branch_taken_0x539d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x539d70) {
            ctx->pc = 0x539D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539D70u;
            // 0x539d74: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539D8Cu;
            goto label_539d8c;
        }
    }
    ctx->pc = 0x539D78u;
label_539d78:
    // 0x539d78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x539d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_539d7c:
    // 0x539d7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x539d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_539d80:
    // 0x539d80: 0x320f809  jalr        $t9
label_539d84:
    if (ctx->pc == 0x539D84u) {
        ctx->pc = 0x539D84u;
            // 0x539d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x539D88u;
        goto label_539d88;
    }
    ctx->pc = 0x539D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x539D88u);
        ctx->pc = 0x539D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539D80u;
            // 0x539d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x539D88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x539D88u; }
            if (ctx->pc != 0x539D88u) { return; }
        }
        }
    }
    ctx->pc = 0x539D88u;
label_539d88:
    // 0x539d88: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x539d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_539d8c:
    // 0x539d8c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_539d90:
    if (ctx->pc == 0x539D90u) {
        ctx->pc = 0x539D90u;
            // 0x539d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539D94u;
        goto label_539d94;
    }
    ctx->pc = 0x539D8Cu;
    {
        const bool branch_taken_0x539d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x539d8c) {
            ctx->pc = 0x539D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539D8Cu;
            // 0x539d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539DA8u;
            goto label_539da8;
        }
    }
    ctx->pc = 0x539D94u;
label_539d94:
    // 0x539d94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x539d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_539d98:
    // 0x539d98: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x539d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_539d9c:
    // 0x539d9c: 0x320f809  jalr        $t9
label_539da0:
    if (ctx->pc == 0x539DA0u) {
        ctx->pc = 0x539DA0u;
            // 0x539da0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x539DA4u;
        goto label_539da4;
    }
    ctx->pc = 0x539D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x539DA4u);
        ctx->pc = 0x539DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539D9Cu;
            // 0x539da0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x539DA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x539DA4u; }
            if (ctx->pc != 0x539DA4u) { return; }
        }
        }
    }
    ctx->pc = 0x539DA4u;
label_539da4:
    // 0x539da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x539da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_539da8:
    // 0x539da8: 0xc075bf8  jal         func_1D6FE0
label_539dac:
    if (ctx->pc == 0x539DACu) {
        ctx->pc = 0x539DACu;
            // 0x539dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539DB0u;
        goto label_539db0;
    }
    ctx->pc = 0x539DA8u;
    SET_GPR_U32(ctx, 31, 0x539DB0u);
    ctx->pc = 0x539DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539DA8u;
            // 0x539dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539DB0u; }
        if (ctx->pc != 0x539DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539DB0u; }
        if (ctx->pc != 0x539DB0u) { return; }
    }
    ctx->pc = 0x539DB0u;
label_539db0:
    // 0x539db0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x539db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_539db4:
    // 0x539db4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x539db4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_539db8:
    // 0x539db8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_539dbc:
    if (ctx->pc == 0x539DBCu) {
        ctx->pc = 0x539DBCu;
            // 0x539dbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539DC0u;
        goto label_539dc0;
    }
    ctx->pc = 0x539DB8u;
    {
        const bool branch_taken_0x539db8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x539db8) {
            ctx->pc = 0x539DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539DB8u;
            // 0x539dbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539DCCu;
            goto label_539dcc;
        }
    }
    ctx->pc = 0x539DC0u;
label_539dc0:
    // 0x539dc0: 0xc0400a8  jal         func_1002A0
label_539dc4:
    if (ctx->pc == 0x539DC4u) {
        ctx->pc = 0x539DC4u;
            // 0x539dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539DC8u;
        goto label_539dc8;
    }
    ctx->pc = 0x539DC0u;
    SET_GPR_U32(ctx, 31, 0x539DC8u);
    ctx->pc = 0x539DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539DC0u;
            // 0x539dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539DC8u; }
        if (ctx->pc != 0x539DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539DC8u; }
        if (ctx->pc != 0x539DC8u) { return; }
    }
    ctx->pc = 0x539DC8u;
label_539dc8:
    // 0x539dc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x539dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_539dcc:
    // 0x539dcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x539dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_539dd0:
    // 0x539dd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x539dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_539dd4:
    // 0x539dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x539dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_539dd8:
    // 0x539dd8: 0x3e00008  jr          $ra
label_539ddc:
    if (ctx->pc == 0x539DDCu) {
        ctx->pc = 0x539DDCu;
            // 0x539ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x539DE0u;
        goto label_539de0;
    }
    ctx->pc = 0x539DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x539DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539DD8u;
            // 0x539ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x539DE0u;
label_539de0:
    // 0x539de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x539de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_539de4:
    // 0x539de4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x539de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_539de8:
    // 0x539de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x539de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_539dec:
    // 0x539dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x539decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_539df0:
    // 0x539df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x539df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_539df4:
    // 0x539df4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_539df8:
    if (ctx->pc == 0x539DF8u) {
        ctx->pc = 0x539DF8u;
            // 0x539df8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539DFCu;
        goto label_539dfc;
    }
    ctx->pc = 0x539DF4u;
    {
        const bool branch_taken_0x539df4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x539DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539DF4u;
            // 0x539df8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539df4) {
            ctx->pc = 0x539E54u;
            goto label_539e54;
        }
    }
    ctx->pc = 0x539DFCu;
label_539dfc:
    // 0x539dfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x539dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_539e00:
    // 0x539e00: 0x24427260  addiu       $v0, $v0, 0x7260
    ctx->pc = 0x539e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29280));
label_539e04:
    // 0x539e04: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x539e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_539e08:
    // 0x539e08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x539e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_539e0c:
    // 0x539e0c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x539e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_539e10:
    // 0x539e10: 0x320f809  jalr        $t9
label_539e14:
    if (ctx->pc == 0x539E14u) {
        ctx->pc = 0x539E18u;
        goto label_539e18;
    }
    ctx->pc = 0x539E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x539E18u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x539E18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x539E18u; }
            if (ctx->pc != 0x539E18u) { return; }
        }
        }
    }
    ctx->pc = 0x539E18u;
label_539e18:
    // 0x539e18: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_539e1c:
    if (ctx->pc == 0x539E1Cu) {
        ctx->pc = 0x539E1Cu;
            // 0x539e1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x539E20u;
        goto label_539e20;
    }
    ctx->pc = 0x539E18u;
    {
        const bool branch_taken_0x539e18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x539e18) {
            ctx->pc = 0x539E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539E18u;
            // 0x539e1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539E40u;
            goto label_539e40;
        }
    }
    ctx->pc = 0x539E20u;
label_539e20:
    // 0x539e20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x539e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_539e24:
    // 0x539e24: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x539e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_539e28:
    // 0x539e28: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_539e2c:
    if (ctx->pc == 0x539E2Cu) {
        ctx->pc = 0x539E2Cu;
            // 0x539e2c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x539E30u;
        goto label_539e30;
    }
    ctx->pc = 0x539E28u;
    {
        const bool branch_taken_0x539e28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x539E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539E28u;
            // 0x539e2c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539e28) {
            ctx->pc = 0x539E3Cu;
            goto label_539e3c;
        }
    }
    ctx->pc = 0x539E30u;
label_539e30:
    // 0x539e30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x539e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_539e34:
    // 0x539e34: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x539e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_539e38:
    // 0x539e38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x539e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_539e3c:
    // 0x539e3c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x539e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_539e40:
    // 0x539e40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x539e40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_539e44:
    // 0x539e44: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_539e48:
    if (ctx->pc == 0x539E48u) {
        ctx->pc = 0x539E48u;
            // 0x539e48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539E4Cu;
        goto label_539e4c;
    }
    ctx->pc = 0x539E44u;
    {
        const bool branch_taken_0x539e44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x539e44) {
            ctx->pc = 0x539E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539E44u;
            // 0x539e48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539E58u;
            goto label_539e58;
        }
    }
    ctx->pc = 0x539E4Cu;
label_539e4c:
    // 0x539e4c: 0xc0400a8  jal         func_1002A0
label_539e50:
    if (ctx->pc == 0x539E50u) {
        ctx->pc = 0x539E50u;
            // 0x539e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539E54u;
        goto label_539e54;
    }
    ctx->pc = 0x539E4Cu;
    SET_GPR_U32(ctx, 31, 0x539E54u);
    ctx->pc = 0x539E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539E4Cu;
            // 0x539e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539E54u; }
        if (ctx->pc != 0x539E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539E54u; }
        if (ctx->pc != 0x539E54u) { return; }
    }
    ctx->pc = 0x539E54u;
label_539e54:
    // 0x539e54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x539e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_539e58:
    // 0x539e58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x539e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_539e5c:
    // 0x539e5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x539e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_539e60:
    // 0x539e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x539e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_539e64:
    // 0x539e64: 0x3e00008  jr          $ra
label_539e68:
    if (ctx->pc == 0x539E68u) {
        ctx->pc = 0x539E68u;
            // 0x539e68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x539E6Cu;
        goto label_539e6c;
    }
    ctx->pc = 0x539E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x539E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539E64u;
            // 0x539e68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x539E6Cu;
label_539e6c:
    // 0x539e6c: 0x0  nop
    ctx->pc = 0x539e6cu;
    // NOP
label_539e70:
    // 0x539e70: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x539e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_539e74:
    // 0x539e74: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x539e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_539e78:
    // 0x539e78: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x539e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_539e7c:
    // 0x539e7c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x539e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_539e80:
    // 0x539e80: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x539e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_539e84:
    // 0x539e84: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x539e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_539e88:
    // 0x539e88: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x539e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_539e8c:
    // 0x539e8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x539e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_539e90:
    // 0x539e90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x539e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_539e94:
    // 0x539e94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x539e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_539e98:
    // 0x539e98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x539e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_539e9c:
    // 0x539e9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x539e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_539ea0:
    // 0x539ea0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x539ea0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_539ea4:
    // 0x539ea4: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x539ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_539ea8:
    // 0x539ea8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x539ea8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_539eac:
    // 0x539eac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x539eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_539eb0:
    // 0x539eb0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_539eb4:
    if (ctx->pc == 0x539EB4u) {
        ctx->pc = 0x539EB4u;
            // 0x539eb4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539EB8u;
        goto label_539eb8;
    }
    ctx->pc = 0x539EB0u;
    {
        const bool branch_taken_0x539eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x539EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539EB0u;
            // 0x539eb4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539eb0) {
            ctx->pc = 0x539EF4u;
            goto label_539ef4;
        }
    }
    ctx->pc = 0x539EB8u;
label_539eb8:
    // 0x539eb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x539eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_539ebc:
    // 0x539ebc: 0x10a30070  beq         $a1, $v1, . + 4 + (0x70 << 2)
label_539ec0:
    if (ctx->pc == 0x539EC0u) {
        ctx->pc = 0x539EC4u;
        goto label_539ec4;
    }
    ctx->pc = 0x539EBCu;
    {
        const bool branch_taken_0x539ebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x539ebc) {
            ctx->pc = 0x53A080u;
            goto label_53a080;
        }
    }
    ctx->pc = 0x539EC4u;
label_539ec4:
    // 0x539ec4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x539ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_539ec8:
    // 0x539ec8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_539ecc:
    if (ctx->pc == 0x539ECCu) {
        ctx->pc = 0x539ECCu;
            // 0x539ecc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x539ED0u;
        goto label_539ed0;
    }
    ctx->pc = 0x539EC8u;
    {
        const bool branch_taken_0x539ec8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x539ec8) {
            ctx->pc = 0x539ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539EC8u;
            // 0x539ecc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539ED8u;
            goto label_539ed8;
        }
    }
    ctx->pc = 0x539ED0u;
label_539ed0:
    // 0x539ed0: 0x1000006b  b           . + 4 + (0x6B << 2)
label_539ed4:
    if (ctx->pc == 0x539ED4u) {
        ctx->pc = 0x539ED8u;
        goto label_539ed8;
    }
    ctx->pc = 0x539ED0u;
    {
        const bool branch_taken_0x539ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x539ed0) {
            ctx->pc = 0x53A080u;
            goto label_53a080;
        }
    }
    ctx->pc = 0x539ED8u;
label_539ed8:
    // 0x539ed8: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x539ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_539edc:
    // 0x539edc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x539edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_539ee0:
    // 0x539ee0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x539ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_539ee4:
    // 0x539ee4: 0x320f809  jalr        $t9
label_539ee8:
    if (ctx->pc == 0x539EE8u) {
        ctx->pc = 0x539EE8u;
            // 0x539ee8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x539EECu;
        goto label_539eec;
    }
    ctx->pc = 0x539EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x539EECu);
        ctx->pc = 0x539EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539EE4u;
            // 0x539ee8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x539EECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x539EECu; }
            if (ctx->pc != 0x539EECu) { return; }
        }
        }
    }
    ctx->pc = 0x539EECu;
label_539eec:
    // 0x539eec: 0x10000064  b           . + 4 + (0x64 << 2)
label_539ef0:
    if (ctx->pc == 0x539EF0u) {
        ctx->pc = 0x539EF4u;
        goto label_539ef4;
    }
    ctx->pc = 0x539EECu;
    {
        const bool branch_taken_0x539eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x539eec) {
            ctx->pc = 0x53A080u;
            goto label_53a080;
        }
    }
    ctx->pc = 0x539EF4u;
label_539ef4:
    // 0x539ef4: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x539ef4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_539ef8:
    // 0x539ef8: 0x12e00061  beqz        $s7, . + 4 + (0x61 << 2)
label_539efc:
    if (ctx->pc == 0x539EFCu) {
        ctx->pc = 0x539F00u;
        goto label_539f00;
    }
    ctx->pc = 0x539EF8u;
    {
        const bool branch_taken_0x539ef8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x539ef8) {
            ctx->pc = 0x53A080u;
            goto label_53a080;
        }
    }
    ctx->pc = 0x539F00u;
label_539f00:
    // 0x539f00: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x539f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_539f04:
    // 0x539f04: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x539f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_539f08:
    // 0x539f08: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x539f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_539f0c:
    // 0x539f0c: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x539f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_539f10:
    // 0x539f10: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x539f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_539f14:
    // 0x539f14: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x539f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_539f18:
    // 0x539f18: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x539f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_539f1c:
    // 0x539f1c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x539f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_539f20:
    // 0x539f20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x539f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_539f24:
    // 0x539f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x539f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_539f28:
    // 0x539f28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x539f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_539f2c:
    // 0x539f2c: 0xc04e738  jal         func_139CE0
label_539f30:
    if (ctx->pc == 0x539F30u) {
        ctx->pc = 0x539F30u;
            // 0x539f30: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x539F34u;
        goto label_539f34;
    }
    ctx->pc = 0x539F2Cu;
    SET_GPR_U32(ctx, 31, 0x539F34u);
    ctx->pc = 0x539F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539F2Cu;
            // 0x539f30: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F34u; }
        if (ctx->pc != 0x539F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F34u; }
        if (ctx->pc != 0x539F34u) { return; }
    }
    ctx->pc = 0x539F34u;
label_539f34:
    // 0x539f34: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x539f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_539f38:
    // 0x539f38: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x539f38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_539f3c:
    // 0x539f3c: 0xc454d2c0  lwc1        $f20, -0x2D40($v0)
    ctx->pc = 0x539f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_539f40:
    // 0x539f40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x539f40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_539f44:
    // 0x539f44: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x539f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_539f48:
    // 0x539f48: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x539f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_539f4c:
    // 0x539f4c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x539f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
label_539f50:
    // 0x539f50: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x539f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_539f54:
    // 0x539f54: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x539f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_539f58:
    // 0x539f58: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x539f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_539f5c:
    // 0x539f5c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x539f5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_539f60:
    // 0x539f60: 0xc0d1c14  jal         func_347050
label_539f64:
    if (ctx->pc == 0x539F64u) {
        ctx->pc = 0x539F64u;
            // 0x539f64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539F68u;
        goto label_539f68;
    }
    ctx->pc = 0x539F60u;
    SET_GPR_U32(ctx, 31, 0x539F68u);
    ctx->pc = 0x539F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539F60u;
            // 0x539f64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F68u; }
        if (ctx->pc != 0x539F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F68u; }
        if (ctx->pc != 0x539F68u) { return; }
    }
    ctx->pc = 0x539F68u;
label_539f68:
    // 0x539f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x539f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_539f6c:
    // 0x539f6c: 0xc04f278  jal         func_13C9E0
label_539f70:
    if (ctx->pc == 0x539F70u) {
        ctx->pc = 0x539F70u;
            // 0x539f70: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x539F74u;
        goto label_539f74;
    }
    ctx->pc = 0x539F6Cu;
    SET_GPR_U32(ctx, 31, 0x539F74u);
    ctx->pc = 0x539F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539F6Cu;
            // 0x539f70: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F74u; }
        if (ctx->pc != 0x539F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F74u; }
        if (ctx->pc != 0x539F74u) { return; }
    }
    ctx->pc = 0x539F74u;
label_539f74:
    // 0x539f74: 0xc0d1c10  jal         func_347040
label_539f78:
    if (ctx->pc == 0x539F78u) {
        ctx->pc = 0x539F78u;
            // 0x539f78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539F7Cu;
        goto label_539f7c;
    }
    ctx->pc = 0x539F74u;
    SET_GPR_U32(ctx, 31, 0x539F7Cu);
    ctx->pc = 0x539F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539F74u;
            // 0x539f78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F7Cu; }
        if (ctx->pc != 0x539F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F7Cu; }
        if (ctx->pc != 0x539F7Cu) { return; }
    }
    ctx->pc = 0x539F7Cu;
label_539f7c:
    // 0x539f7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x539f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_539f80:
    // 0x539f80: 0xc04ce80  jal         func_133A00
label_539f84:
    if (ctx->pc == 0x539F84u) {
        ctx->pc = 0x539F84u;
            // 0x539f84: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x539F88u;
        goto label_539f88;
    }
    ctx->pc = 0x539F80u;
    SET_GPR_U32(ctx, 31, 0x539F88u);
    ctx->pc = 0x539F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539F80u;
            // 0x539f84: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F88u; }
        if (ctx->pc != 0x539F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F88u; }
        if (ctx->pc != 0x539F88u) { return; }
    }
    ctx->pc = 0x539F88u;
label_539f88:
    // 0x539f88: 0xc0d4108  jal         func_350420
label_539f8c:
    if (ctx->pc == 0x539F8Cu) {
        ctx->pc = 0x539F90u;
        goto label_539f90;
    }
    ctx->pc = 0x539F88u;
    SET_GPR_U32(ctx, 31, 0x539F90u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F90u; }
        if (ctx->pc != 0x539F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F90u; }
        if (ctx->pc != 0x539F90u) { return; }
    }
    ctx->pc = 0x539F90u;
label_539f90:
    // 0x539f90: 0xc0b36b4  jal         func_2CDAD0
label_539f94:
    if (ctx->pc == 0x539F94u) {
        ctx->pc = 0x539F94u;
            // 0x539f94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539F98u;
        goto label_539f98;
    }
    ctx->pc = 0x539F90u;
    SET_GPR_U32(ctx, 31, 0x539F98u);
    ctx->pc = 0x539F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539F90u;
            // 0x539f94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F98u; }
        if (ctx->pc != 0x539F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539F98u; }
        if (ctx->pc != 0x539F98u) { return; }
    }
    ctx->pc = 0x539F98u;
label_539f98:
    // 0x539f98: 0xc0b9c64  jal         func_2E7190
label_539f9c:
    if (ctx->pc == 0x539F9Cu) {
        ctx->pc = 0x539F9Cu;
            // 0x539f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539FA0u;
        goto label_539fa0;
    }
    ctx->pc = 0x539F98u;
    SET_GPR_U32(ctx, 31, 0x539FA0u);
    ctx->pc = 0x539F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539F98u;
            // 0x539f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539FA0u; }
        if (ctx->pc != 0x539FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539FA0u; }
        if (ctx->pc != 0x539FA0u) { return; }
    }
    ctx->pc = 0x539FA0u;
label_539fa0:
    // 0x539fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x539fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_539fa4:
    // 0x539fa4: 0xc0d4104  jal         func_350410
label_539fa8:
    if (ctx->pc == 0x539FA8u) {
        ctx->pc = 0x539FA8u;
            // 0x539fa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539FACu;
        goto label_539fac;
    }
    ctx->pc = 0x539FA4u;
    SET_GPR_U32(ctx, 31, 0x539FACu);
    ctx->pc = 0x539FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539FA4u;
            // 0x539fa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539FACu; }
        if (ctx->pc != 0x539FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539FACu; }
        if (ctx->pc != 0x539FACu) { return; }
    }
    ctx->pc = 0x539FACu;
label_539fac:
    // 0x539fac: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x539facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_539fb0:
    // 0x539fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x539fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_539fb4:
    // 0x539fb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x539fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_539fb8:
    // 0x539fb8: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x539fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_539fbc:
    // 0x539fbc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x539fbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_539fc0:
    // 0x539fc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x539fc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_539fc4:
    // 0x539fc4: 0xc0d40ac  jal         func_3502B0
label_539fc8:
    if (ctx->pc == 0x539FC8u) {
        ctx->pc = 0x539FC8u;
            // 0x539fc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x539FCCu;
        goto label_539fcc;
    }
    ctx->pc = 0x539FC4u;
    SET_GPR_U32(ctx, 31, 0x539FCCu);
    ctx->pc = 0x539FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539FC4u;
            // 0x539fc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539FCCu; }
        if (ctx->pc != 0x539FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539FCCu; }
        if (ctx->pc != 0x539FCCu) { return; }
    }
    ctx->pc = 0x539FCCu;
label_539fcc:
    // 0x539fcc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x539fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_539fd0:
    // 0x539fd0: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_539fd4:
    if (ctx->pc == 0x539FD4u) {
        ctx->pc = 0x539FD4u;
            // 0x539fd4: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x539FD8u;
        goto label_539fd8;
    }
    ctx->pc = 0x539FD0u;
    {
        const bool branch_taken_0x539fd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x539FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539FD0u;
            // 0x539fd4: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539fd0) {
            ctx->pc = 0x53A070u;
            goto label_53a070;
        }
    }
    ctx->pc = 0x539FD8u;
label_539fd8:
    // 0x539fd8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x539fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_539fdc:
    // 0x539fdc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x539fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_539fe0:
    // 0x539fe0: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x539fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_539fe4:
    // 0x539fe4: 0xc14e830  jal         func_53A0C0
label_539fe8:
    if (ctx->pc == 0x539FE8u) {
        ctx->pc = 0x539FE8u;
            // 0x539fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539FECu;
        goto label_539fec;
    }
    ctx->pc = 0x539FE4u;
    SET_GPR_U32(ctx, 31, 0x539FECu);
    ctx->pc = 0x539FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539FE4u;
            // 0x539fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53A0C0u;
    if (runtime->hasFunction(0x53A0C0u)) {
        auto targetFn = runtime->lookupFunction(0x53A0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539FECu; }
        if (ctx->pc != 0x539FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053A0C0_0x53a0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539FECu; }
        if (ctx->pc != 0x539FECu) { return; }
    }
    ctx->pc = 0x539FECu;
label_539fec:
    // 0x539fec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x539fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_539ff0:
    // 0x539ff0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x539ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_539ff4:
    // 0x539ff4: 0xc04cd60  jal         func_133580
label_539ff8:
    if (ctx->pc == 0x539FF8u) {
        ctx->pc = 0x539FF8u;
            // 0x539ff8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539FFCu;
        goto label_539ffc;
    }
    ctx->pc = 0x539FF4u;
    SET_GPR_U32(ctx, 31, 0x539FFCu);
    ctx->pc = 0x539FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539FF4u;
            // 0x539ff8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539FFCu; }
        if (ctx->pc != 0x539FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539FFCu; }
        if (ctx->pc != 0x539FFCu) { return; }
    }
    ctx->pc = 0x539FFCu;
label_539ffc:
    // 0x539ffc: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x539ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_53a000:
    // 0x53a000: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x53a000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_53a004:
    // 0x53a004: 0xc04e4a4  jal         func_139290
label_53a008:
    if (ctx->pc == 0x53A008u) {
        ctx->pc = 0x53A008u;
            // 0x53a008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A00Cu;
        goto label_53a00c;
    }
    ctx->pc = 0x53A004u;
    SET_GPR_U32(ctx, 31, 0x53A00Cu);
    ctx->pc = 0x53A008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A004u;
            // 0x53a008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A00Cu; }
        if (ctx->pc != 0x53A00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A00Cu; }
        if (ctx->pc != 0x53A00Cu) { return; }
    }
    ctx->pc = 0x53A00Cu;
label_53a00c:
    // 0x53a00c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53a00cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53a010:
    // 0x53a010: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x53a010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_53a014:
    // 0x53a014: 0x320f809  jalr        $t9
label_53a018:
    if (ctx->pc == 0x53A018u) {
        ctx->pc = 0x53A018u;
            // 0x53a018: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A01Cu;
        goto label_53a01c;
    }
    ctx->pc = 0x53A014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53A01Cu);
        ctx->pc = 0x53A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A014u;
            // 0x53a018: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53A01Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53A01Cu; }
            if (ctx->pc != 0x53A01Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53A01Cu;
label_53a01c:
    // 0x53a01c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x53a01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_53a020:
    // 0x53a020: 0xc68c0060  lwc1        $f12, 0x60($s4)
    ctx->pc = 0x53a020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53a024:
    // 0x53a024: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x53a024u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_53a028:
    // 0x53a028: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x53a028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_53a02c:
    // 0x53a02c: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x53a02cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_53a030:
    // 0x53a030: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x53a030u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53a034:
    // 0x53a034: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x53a034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53a038:
    // 0x53a038: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x53a038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_53a03c:
    // 0x53a03c: 0xc04cff4  jal         func_133FD0
label_53a040:
    if (ctx->pc == 0x53A040u) {
        ctx->pc = 0x53A040u;
            // 0x53a040: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x53A044u;
        goto label_53a044;
    }
    ctx->pc = 0x53A03Cu;
    SET_GPR_U32(ctx, 31, 0x53A044u);
    ctx->pc = 0x53A040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A03Cu;
            // 0x53a040: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A044u; }
        if (ctx->pc != 0x53A044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A044u; }
        if (ctx->pc != 0x53A044u) { return; }
    }
    ctx->pc = 0x53A044u;
label_53a044:
    // 0x53a044: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x53a044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_53a048:
    // 0x53a048: 0xc68c0060  lwc1        $f12, 0x60($s4)
    ctx->pc = 0x53a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53a04c:
    // 0x53a04c: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x53a04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_53a050:
    // 0x53a050: 0xc054bbc  jal         func_152EF0
label_53a054:
    if (ctx->pc == 0x53A054u) {
        ctx->pc = 0x53A054u;
            // 0x53a054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A058u;
        goto label_53a058;
    }
    ctx->pc = 0x53A050u;
    SET_GPR_U32(ctx, 31, 0x53A058u);
    ctx->pc = 0x53A054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A050u;
            // 0x53a054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A058u; }
        if (ctx->pc != 0x53A058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A058u; }
        if (ctx->pc != 0x53A058u) { return; }
    }
    ctx->pc = 0x53A058u;
label_53a058:
    // 0x53a058: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x53a058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_53a05c:
    // 0x53a05c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x53a05cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_53a060:
    // 0x53a060: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x53a060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_53a064:
    // 0x53a064: 0x8fa60148  lw          $a2, 0x148($sp)
    ctx->pc = 0x53a064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_53a068:
    // 0x53a068: 0xc054c2c  jal         func_1530B0
label_53a06c:
    if (ctx->pc == 0x53A06Cu) {
        ctx->pc = 0x53A06Cu;
            // 0x53a06c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x53A070u;
        goto label_53a070;
    }
    ctx->pc = 0x53A068u;
    SET_GPR_U32(ctx, 31, 0x53A070u);
    ctx->pc = 0x53A06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A068u;
            // 0x53a06c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A070u; }
        if (ctx->pc != 0x53A070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A070u; }
        if (ctx->pc != 0x53A070u) { return; }
    }
    ctx->pc = 0x53A070u;
label_53a070:
    // 0x53a070: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x53a070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_53a074:
    // 0x53a074: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x53a074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_53a078:
    // 0x53a078: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
label_53a07c:
    if (ctx->pc == 0x53A07Cu) {
        ctx->pc = 0x53A07Cu;
            // 0x53a07c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x53A080u;
        goto label_53a080;
    }
    ctx->pc = 0x53A078u;
    {
        const bool branch_taken_0x53a078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x53A07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A078u;
            // 0x53a07c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a078) {
            ctx->pc = 0x539F44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_539f44;
        }
    }
    ctx->pc = 0x53A080u;
label_53a080:
    // 0x53a080: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x53a080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_53a084:
    // 0x53a084: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x53a084u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_53a088:
    // 0x53a088: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x53a088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_53a08c:
    // 0x53a08c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x53a08cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_53a090:
    // 0x53a090: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x53a090u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_53a094:
    // 0x53a094: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x53a094u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_53a098:
    // 0x53a098: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x53a098u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_53a09c:
    // 0x53a09c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x53a09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53a0a0:
    // 0x53a0a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x53a0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53a0a4:
    // 0x53a0a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x53a0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53a0a8:
    // 0x53a0a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x53a0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53a0ac:
    // 0x53a0ac: 0x3e00008  jr          $ra
label_53a0b0:
    if (ctx->pc == 0x53A0B0u) {
        ctx->pc = 0x53A0B0u;
            // 0x53a0b0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x53A0B4u;
        goto label_53a0b4;
    }
    ctx->pc = 0x53A0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A0ACu;
            // 0x53a0b0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A0B4u;
label_53a0b4:
    // 0x53a0b4: 0x0  nop
    ctx->pc = 0x53a0b4u;
    // NOP
label_53a0b8:
    // 0x53a0b8: 0x0  nop
    ctx->pc = 0x53a0b8u;
    // NOP
label_53a0bc:
    // 0x53a0bc: 0x0  nop
    ctx->pc = 0x53a0bcu;
    // NOP
}
