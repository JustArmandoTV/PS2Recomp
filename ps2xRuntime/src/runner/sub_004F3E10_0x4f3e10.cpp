#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F3E10
// Address: 0x4f3e10 - 0x4f4070
void sub_004F3E10_0x4f3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3E10_0x4f3e10");
#endif

    switch (ctx->pc) {
        case 0x4f3e10u: goto label_4f3e10;
        case 0x4f3e14u: goto label_4f3e14;
        case 0x4f3e18u: goto label_4f3e18;
        case 0x4f3e1cu: goto label_4f3e1c;
        case 0x4f3e20u: goto label_4f3e20;
        case 0x4f3e24u: goto label_4f3e24;
        case 0x4f3e28u: goto label_4f3e28;
        case 0x4f3e2cu: goto label_4f3e2c;
        case 0x4f3e30u: goto label_4f3e30;
        case 0x4f3e34u: goto label_4f3e34;
        case 0x4f3e38u: goto label_4f3e38;
        case 0x4f3e3cu: goto label_4f3e3c;
        case 0x4f3e40u: goto label_4f3e40;
        case 0x4f3e44u: goto label_4f3e44;
        case 0x4f3e48u: goto label_4f3e48;
        case 0x4f3e4cu: goto label_4f3e4c;
        case 0x4f3e50u: goto label_4f3e50;
        case 0x4f3e54u: goto label_4f3e54;
        case 0x4f3e58u: goto label_4f3e58;
        case 0x4f3e5cu: goto label_4f3e5c;
        case 0x4f3e60u: goto label_4f3e60;
        case 0x4f3e64u: goto label_4f3e64;
        case 0x4f3e68u: goto label_4f3e68;
        case 0x4f3e6cu: goto label_4f3e6c;
        case 0x4f3e70u: goto label_4f3e70;
        case 0x4f3e74u: goto label_4f3e74;
        case 0x4f3e78u: goto label_4f3e78;
        case 0x4f3e7cu: goto label_4f3e7c;
        case 0x4f3e80u: goto label_4f3e80;
        case 0x4f3e84u: goto label_4f3e84;
        case 0x4f3e88u: goto label_4f3e88;
        case 0x4f3e8cu: goto label_4f3e8c;
        case 0x4f3e90u: goto label_4f3e90;
        case 0x4f3e94u: goto label_4f3e94;
        case 0x4f3e98u: goto label_4f3e98;
        case 0x4f3e9cu: goto label_4f3e9c;
        case 0x4f3ea0u: goto label_4f3ea0;
        case 0x4f3ea4u: goto label_4f3ea4;
        case 0x4f3ea8u: goto label_4f3ea8;
        case 0x4f3eacu: goto label_4f3eac;
        case 0x4f3eb0u: goto label_4f3eb0;
        case 0x4f3eb4u: goto label_4f3eb4;
        case 0x4f3eb8u: goto label_4f3eb8;
        case 0x4f3ebcu: goto label_4f3ebc;
        case 0x4f3ec0u: goto label_4f3ec0;
        case 0x4f3ec4u: goto label_4f3ec4;
        case 0x4f3ec8u: goto label_4f3ec8;
        case 0x4f3eccu: goto label_4f3ecc;
        case 0x4f3ed0u: goto label_4f3ed0;
        case 0x4f3ed4u: goto label_4f3ed4;
        case 0x4f3ed8u: goto label_4f3ed8;
        case 0x4f3edcu: goto label_4f3edc;
        case 0x4f3ee0u: goto label_4f3ee0;
        case 0x4f3ee4u: goto label_4f3ee4;
        case 0x4f3ee8u: goto label_4f3ee8;
        case 0x4f3eecu: goto label_4f3eec;
        case 0x4f3ef0u: goto label_4f3ef0;
        case 0x4f3ef4u: goto label_4f3ef4;
        case 0x4f3ef8u: goto label_4f3ef8;
        case 0x4f3efcu: goto label_4f3efc;
        case 0x4f3f00u: goto label_4f3f00;
        case 0x4f3f04u: goto label_4f3f04;
        case 0x4f3f08u: goto label_4f3f08;
        case 0x4f3f0cu: goto label_4f3f0c;
        case 0x4f3f10u: goto label_4f3f10;
        case 0x4f3f14u: goto label_4f3f14;
        case 0x4f3f18u: goto label_4f3f18;
        case 0x4f3f1cu: goto label_4f3f1c;
        case 0x4f3f20u: goto label_4f3f20;
        case 0x4f3f24u: goto label_4f3f24;
        case 0x4f3f28u: goto label_4f3f28;
        case 0x4f3f2cu: goto label_4f3f2c;
        case 0x4f3f30u: goto label_4f3f30;
        case 0x4f3f34u: goto label_4f3f34;
        case 0x4f3f38u: goto label_4f3f38;
        case 0x4f3f3cu: goto label_4f3f3c;
        case 0x4f3f40u: goto label_4f3f40;
        case 0x4f3f44u: goto label_4f3f44;
        case 0x4f3f48u: goto label_4f3f48;
        case 0x4f3f4cu: goto label_4f3f4c;
        case 0x4f3f50u: goto label_4f3f50;
        case 0x4f3f54u: goto label_4f3f54;
        case 0x4f3f58u: goto label_4f3f58;
        case 0x4f3f5cu: goto label_4f3f5c;
        case 0x4f3f60u: goto label_4f3f60;
        case 0x4f3f64u: goto label_4f3f64;
        case 0x4f3f68u: goto label_4f3f68;
        case 0x4f3f6cu: goto label_4f3f6c;
        case 0x4f3f70u: goto label_4f3f70;
        case 0x4f3f74u: goto label_4f3f74;
        case 0x4f3f78u: goto label_4f3f78;
        case 0x4f3f7cu: goto label_4f3f7c;
        case 0x4f3f80u: goto label_4f3f80;
        case 0x4f3f84u: goto label_4f3f84;
        case 0x4f3f88u: goto label_4f3f88;
        case 0x4f3f8cu: goto label_4f3f8c;
        case 0x4f3f90u: goto label_4f3f90;
        case 0x4f3f94u: goto label_4f3f94;
        case 0x4f3f98u: goto label_4f3f98;
        case 0x4f3f9cu: goto label_4f3f9c;
        case 0x4f3fa0u: goto label_4f3fa0;
        case 0x4f3fa4u: goto label_4f3fa4;
        case 0x4f3fa8u: goto label_4f3fa8;
        case 0x4f3facu: goto label_4f3fac;
        case 0x4f3fb0u: goto label_4f3fb0;
        case 0x4f3fb4u: goto label_4f3fb4;
        case 0x4f3fb8u: goto label_4f3fb8;
        case 0x4f3fbcu: goto label_4f3fbc;
        case 0x4f3fc0u: goto label_4f3fc0;
        case 0x4f3fc4u: goto label_4f3fc4;
        case 0x4f3fc8u: goto label_4f3fc8;
        case 0x4f3fccu: goto label_4f3fcc;
        case 0x4f3fd0u: goto label_4f3fd0;
        case 0x4f3fd4u: goto label_4f3fd4;
        case 0x4f3fd8u: goto label_4f3fd8;
        case 0x4f3fdcu: goto label_4f3fdc;
        case 0x4f3fe0u: goto label_4f3fe0;
        case 0x4f3fe4u: goto label_4f3fe4;
        case 0x4f3fe8u: goto label_4f3fe8;
        case 0x4f3fecu: goto label_4f3fec;
        case 0x4f3ff0u: goto label_4f3ff0;
        case 0x4f3ff4u: goto label_4f3ff4;
        case 0x4f3ff8u: goto label_4f3ff8;
        case 0x4f3ffcu: goto label_4f3ffc;
        case 0x4f4000u: goto label_4f4000;
        case 0x4f4004u: goto label_4f4004;
        case 0x4f4008u: goto label_4f4008;
        case 0x4f400cu: goto label_4f400c;
        case 0x4f4010u: goto label_4f4010;
        case 0x4f4014u: goto label_4f4014;
        case 0x4f4018u: goto label_4f4018;
        case 0x4f401cu: goto label_4f401c;
        case 0x4f4020u: goto label_4f4020;
        case 0x4f4024u: goto label_4f4024;
        case 0x4f4028u: goto label_4f4028;
        case 0x4f402cu: goto label_4f402c;
        case 0x4f4030u: goto label_4f4030;
        case 0x4f4034u: goto label_4f4034;
        case 0x4f4038u: goto label_4f4038;
        case 0x4f403cu: goto label_4f403c;
        case 0x4f4040u: goto label_4f4040;
        case 0x4f4044u: goto label_4f4044;
        case 0x4f4048u: goto label_4f4048;
        case 0x4f404cu: goto label_4f404c;
        case 0x4f4050u: goto label_4f4050;
        case 0x4f4054u: goto label_4f4054;
        case 0x4f4058u: goto label_4f4058;
        case 0x4f405cu: goto label_4f405c;
        case 0x4f4060u: goto label_4f4060;
        case 0x4f4064u: goto label_4f4064;
        case 0x4f4068u: goto label_4f4068;
        case 0x4f406cu: goto label_4f406c;
        default: break;
    }

    ctx->pc = 0x4f3e10u;

label_4f3e10:
    // 0x4f3e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f3e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f3e14:
    // 0x4f3e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f3e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f3e18:
    // 0x4f3e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f3e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f3e1c:
    // 0x4f3e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f3e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f3e20:
    // 0x4f3e20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f3e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3e24:
    // 0x4f3e24: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4f3e28:
    if (ctx->pc == 0x4F3E28u) {
        ctx->pc = 0x4F3E28u;
            // 0x4f3e28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3E2Cu;
        goto label_4f3e2c;
    }
    ctx->pc = 0x4F3E24u;
    {
        const bool branch_taken_0x4f3e24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3E24u;
            // 0x4f3e28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3e24) {
            ctx->pc = 0x4F3F58u;
            goto label_4f3f58;
        }
    }
    ctx->pc = 0x4F3E2Cu;
label_4f3e2c:
    // 0x4f3e2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f3e30:
    // 0x4f3e30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f3e34:
    // 0x4f3e34: 0x246344d0  addiu       $v1, $v1, 0x44D0
    ctx->pc = 0x4f3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17616));
label_4f3e38:
    // 0x4f3e38: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f3e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_4f3e3c:
    // 0x4f3e3c: 0x24424508  addiu       $v0, $v0, 0x4508
    ctx->pc = 0x4f3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17672));
label_4f3e40:
    // 0x4f3e40: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f3e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4f3e44:
    // 0x4f3e44: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4f3e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4f3e48:
    // 0x4f3e48: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4f3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4f3e4c:
    // 0x4f3e4c: 0xc0407c0  jal         func_101F00
label_4f3e50:
    if (ctx->pc == 0x4F3E50u) {
        ctx->pc = 0x4F3E50u;
            // 0x4f3e50: 0x24a53f70  addiu       $a1, $a1, 0x3F70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16240));
        ctx->pc = 0x4F3E54u;
        goto label_4f3e54;
    }
    ctx->pc = 0x4F3E4Cu;
    SET_GPR_U32(ctx, 31, 0x4F3E54u);
    ctx->pc = 0x4F3E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3E4Cu;
            // 0x4f3e50: 0x24a53f70  addiu       $a1, $a1, 0x3F70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3E54u; }
        if (ctx->pc != 0x4F3E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3E54u; }
        if (ctx->pc != 0x4F3E54u) { return; }
    }
    ctx->pc = 0x4F3E54u;
label_4f3e54:
    // 0x4f3e54: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4f3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4f3e58:
    // 0x4f3e58: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4f3e5c:
    if (ctx->pc == 0x4F3E5Cu) {
        ctx->pc = 0x4F3E5Cu;
            // 0x4f3e5c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4F3E60u;
        goto label_4f3e60;
    }
    ctx->pc = 0x4F3E58u;
    {
        const bool branch_taken_0x4f3e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3e58) {
            ctx->pc = 0x4F3E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3E58u;
            // 0x4f3e5c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3E6Cu;
            goto label_4f3e6c;
        }
    }
    ctx->pc = 0x4F3E60u;
label_4f3e60:
    // 0x4f3e60: 0xc07507c  jal         func_1D41F0
label_4f3e64:
    if (ctx->pc == 0x4F3E64u) {
        ctx->pc = 0x4F3E64u;
            // 0x4f3e64: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4F3E68u;
        goto label_4f3e68;
    }
    ctx->pc = 0x4F3E60u;
    SET_GPR_U32(ctx, 31, 0x4F3E68u);
    ctx->pc = 0x4F3E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3E60u;
            // 0x4f3e64: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3E68u; }
        if (ctx->pc != 0x4F3E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3E68u; }
        if (ctx->pc != 0x4F3E68u) { return; }
    }
    ctx->pc = 0x4F3E68u;
label_4f3e68:
    // 0x4f3e68: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4f3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4f3e6c:
    // 0x4f3e6c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4f3e70:
    if (ctx->pc == 0x4F3E70u) {
        ctx->pc = 0x4F3E70u;
            // 0x4f3e70: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4F3E74u;
        goto label_4f3e74;
    }
    ctx->pc = 0x4F3E6Cu;
    {
        const bool branch_taken_0x4f3e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3e6c) {
            ctx->pc = 0x4F3E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3E6Cu;
            // 0x4f3e70: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3E9Cu;
            goto label_4f3e9c;
        }
    }
    ctx->pc = 0x4F3E74u;
label_4f3e74:
    // 0x4f3e74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4f3e78:
    if (ctx->pc == 0x4F3E78u) {
        ctx->pc = 0x4F3E7Cu;
        goto label_4f3e7c;
    }
    ctx->pc = 0x4F3E74u;
    {
        const bool branch_taken_0x4f3e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3e74) {
            ctx->pc = 0x4F3E98u;
            goto label_4f3e98;
        }
    }
    ctx->pc = 0x4F3E7Cu;
label_4f3e7c:
    // 0x4f3e7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f3e80:
    if (ctx->pc == 0x4F3E80u) {
        ctx->pc = 0x4F3E84u;
        goto label_4f3e84;
    }
    ctx->pc = 0x4F3E7Cu;
    {
        const bool branch_taken_0x4f3e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3e7c) {
            ctx->pc = 0x4F3E98u;
            goto label_4f3e98;
        }
    }
    ctx->pc = 0x4F3E84u;
label_4f3e84:
    // 0x4f3e84: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4f3e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4f3e88:
    // 0x4f3e88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4f3e8c:
    if (ctx->pc == 0x4F3E8Cu) {
        ctx->pc = 0x4F3E90u;
        goto label_4f3e90;
    }
    ctx->pc = 0x4F3E88u;
    {
        const bool branch_taken_0x4f3e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3e88) {
            ctx->pc = 0x4F3E98u;
            goto label_4f3e98;
        }
    }
    ctx->pc = 0x4F3E90u;
label_4f3e90:
    // 0x4f3e90: 0xc0400a8  jal         func_1002A0
label_4f3e94:
    if (ctx->pc == 0x4F3E94u) {
        ctx->pc = 0x4F3E98u;
        goto label_4f3e98;
    }
    ctx->pc = 0x4F3E90u;
    SET_GPR_U32(ctx, 31, 0x4F3E98u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3E98u; }
        if (ctx->pc != 0x4F3E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3E98u; }
        if (ctx->pc != 0x4F3E98u) { return; }
    }
    ctx->pc = 0x4F3E98u;
label_4f3e98:
    // 0x4f3e98: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4f3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4f3e9c:
    // 0x4f3e9c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4f3ea0:
    if (ctx->pc == 0x4F3EA0u) {
        ctx->pc = 0x4F3EA0u;
            // 0x4f3ea0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4F3EA4u;
        goto label_4f3ea4;
    }
    ctx->pc = 0x4F3E9Cu;
    {
        const bool branch_taken_0x4f3e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3e9c) {
            ctx->pc = 0x4F3EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3E9Cu;
            // 0x4f3ea0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3ECCu;
            goto label_4f3ecc;
        }
    }
    ctx->pc = 0x4F3EA4u;
label_4f3ea4:
    // 0x4f3ea4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4f3ea8:
    if (ctx->pc == 0x4F3EA8u) {
        ctx->pc = 0x4F3EACu;
        goto label_4f3eac;
    }
    ctx->pc = 0x4F3EA4u;
    {
        const bool branch_taken_0x4f3ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3ea4) {
            ctx->pc = 0x4F3EC8u;
            goto label_4f3ec8;
        }
    }
    ctx->pc = 0x4F3EACu;
label_4f3eac:
    // 0x4f3eac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f3eb0:
    if (ctx->pc == 0x4F3EB0u) {
        ctx->pc = 0x4F3EB4u;
        goto label_4f3eb4;
    }
    ctx->pc = 0x4F3EACu;
    {
        const bool branch_taken_0x4f3eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3eac) {
            ctx->pc = 0x4F3EC8u;
            goto label_4f3ec8;
        }
    }
    ctx->pc = 0x4F3EB4u;
label_4f3eb4:
    // 0x4f3eb4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4f3eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4f3eb8:
    // 0x4f3eb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4f3ebc:
    if (ctx->pc == 0x4F3EBCu) {
        ctx->pc = 0x4F3EC0u;
        goto label_4f3ec0;
    }
    ctx->pc = 0x4F3EB8u;
    {
        const bool branch_taken_0x4f3eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3eb8) {
            ctx->pc = 0x4F3EC8u;
            goto label_4f3ec8;
        }
    }
    ctx->pc = 0x4F3EC0u;
label_4f3ec0:
    // 0x4f3ec0: 0xc0400a8  jal         func_1002A0
label_4f3ec4:
    if (ctx->pc == 0x4F3EC4u) {
        ctx->pc = 0x4F3EC8u;
        goto label_4f3ec8;
    }
    ctx->pc = 0x4F3EC0u;
    SET_GPR_U32(ctx, 31, 0x4F3EC8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3EC8u; }
        if (ctx->pc != 0x4F3EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3EC8u; }
        if (ctx->pc != 0x4F3EC8u) { return; }
    }
    ctx->pc = 0x4F3EC8u;
label_4f3ec8:
    // 0x4f3ec8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4f3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4f3ecc:
    // 0x4f3ecc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f3ed0:
    if (ctx->pc == 0x4F3ED0u) {
        ctx->pc = 0x4F3ED4u;
        goto label_4f3ed4;
    }
    ctx->pc = 0x4F3ECCu;
    {
        const bool branch_taken_0x4f3ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3ecc) {
            ctx->pc = 0x4F3EE8u;
            goto label_4f3ee8;
        }
    }
    ctx->pc = 0x4F3ED4u;
label_4f3ed4:
    // 0x4f3ed4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f3ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f3ed8:
    // 0x4f3ed8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f3edc:
    // 0x4f3edc: 0x246344c0  addiu       $v1, $v1, 0x44C0
    ctx->pc = 0x4f3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17600));
label_4f3ee0:
    // 0x4f3ee0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4f3ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4f3ee4:
    // 0x4f3ee4: 0xac4064c0  sw          $zero, 0x64C0($v0)
    ctx->pc = 0x4f3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25792), GPR_U32(ctx, 0));
label_4f3ee8:
    // 0x4f3ee8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4f3eec:
    if (ctx->pc == 0x4F3EECu) {
        ctx->pc = 0x4F3EECu;
            // 0x4f3eec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4F3EF0u;
        goto label_4f3ef0;
    }
    ctx->pc = 0x4F3EE8u;
    {
        const bool branch_taken_0x4f3ee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3ee8) {
            ctx->pc = 0x4F3EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3EE8u;
            // 0x4f3eec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3F44u;
            goto label_4f3f44;
        }
    }
    ctx->pc = 0x4F3EF0u;
label_4f3ef0:
    // 0x4f3ef0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f3ef4:
    // 0x4f3ef4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4f3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4f3ef8:
    // 0x4f3ef8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4f3efc:
    // 0x4f3efc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4f3efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4f3f00:
    // 0x4f3f00: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f3f04:
    if (ctx->pc == 0x4F3F04u) {
        ctx->pc = 0x4F3F04u;
            // 0x4f3f04: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4F3F08u;
        goto label_4f3f08;
    }
    ctx->pc = 0x4F3F00u;
    {
        const bool branch_taken_0x4f3f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3f00) {
            ctx->pc = 0x4F3F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3F00u;
            // 0x4f3f04: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3F1Cu;
            goto label_4f3f1c;
        }
    }
    ctx->pc = 0x4F3F08u;
label_4f3f08:
    // 0x4f3f08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f3f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f3f0c:
    // 0x4f3f0c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f3f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f3f10:
    // 0x4f3f10: 0x320f809  jalr        $t9
label_4f3f14:
    if (ctx->pc == 0x4F3F14u) {
        ctx->pc = 0x4F3F14u;
            // 0x4f3f14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F3F18u;
        goto label_4f3f18;
    }
    ctx->pc = 0x4F3F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F3F18u);
        ctx->pc = 0x4F3F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3F10u;
            // 0x4f3f14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F3F18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F3F18u; }
            if (ctx->pc != 0x4F3F18u) { return; }
        }
        }
    }
    ctx->pc = 0x4F3F18u;
label_4f3f18:
    // 0x4f3f18: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4f3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4f3f1c:
    // 0x4f3f1c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f3f20:
    if (ctx->pc == 0x4F3F20u) {
        ctx->pc = 0x4F3F20u;
            // 0x4f3f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3F24u;
        goto label_4f3f24;
    }
    ctx->pc = 0x4F3F1Cu;
    {
        const bool branch_taken_0x4f3f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3f1c) {
            ctx->pc = 0x4F3F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3F1Cu;
            // 0x4f3f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3F38u;
            goto label_4f3f38;
        }
    }
    ctx->pc = 0x4F3F24u;
label_4f3f24:
    // 0x4f3f24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f3f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f3f28:
    // 0x4f3f28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f3f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f3f2c:
    // 0x4f3f2c: 0x320f809  jalr        $t9
label_4f3f30:
    if (ctx->pc == 0x4F3F30u) {
        ctx->pc = 0x4F3F30u;
            // 0x4f3f30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F3F34u;
        goto label_4f3f34;
    }
    ctx->pc = 0x4F3F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F3F34u);
        ctx->pc = 0x4F3F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3F2Cu;
            // 0x4f3f30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F3F34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F3F34u; }
            if (ctx->pc != 0x4F3F34u) { return; }
        }
        }
    }
    ctx->pc = 0x4F3F34u;
label_4f3f34:
    // 0x4f3f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f3f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f3f38:
    // 0x4f3f38: 0xc075bf8  jal         func_1D6FE0
label_4f3f3c:
    if (ctx->pc == 0x4F3F3Cu) {
        ctx->pc = 0x4F3F3Cu;
            // 0x4f3f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3F40u;
        goto label_4f3f40;
    }
    ctx->pc = 0x4F3F38u;
    SET_GPR_U32(ctx, 31, 0x4F3F40u);
    ctx->pc = 0x4F3F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3F38u;
            // 0x4f3f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3F40u; }
        if (ctx->pc != 0x4F3F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3F40u; }
        if (ctx->pc != 0x4F3F40u) { return; }
    }
    ctx->pc = 0x4F3F40u;
label_4f3f40:
    // 0x4f3f40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4f3f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4f3f44:
    // 0x4f3f44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f3f44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f3f48:
    // 0x4f3f48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f3f4c:
    if (ctx->pc == 0x4F3F4Cu) {
        ctx->pc = 0x4F3F4Cu;
            // 0x4f3f4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3F50u;
        goto label_4f3f50;
    }
    ctx->pc = 0x4F3F48u;
    {
        const bool branch_taken_0x4f3f48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f3f48) {
            ctx->pc = 0x4F3F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3F48u;
            // 0x4f3f4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3F5Cu;
            goto label_4f3f5c;
        }
    }
    ctx->pc = 0x4F3F50u;
label_4f3f50:
    // 0x4f3f50: 0xc0400a8  jal         func_1002A0
label_4f3f54:
    if (ctx->pc == 0x4F3F54u) {
        ctx->pc = 0x4F3F54u;
            // 0x4f3f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3F58u;
        goto label_4f3f58;
    }
    ctx->pc = 0x4F3F50u;
    SET_GPR_U32(ctx, 31, 0x4F3F58u);
    ctx->pc = 0x4F3F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3F50u;
            // 0x4f3f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3F58u; }
        if (ctx->pc != 0x4F3F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3F58u; }
        if (ctx->pc != 0x4F3F58u) { return; }
    }
    ctx->pc = 0x4F3F58u;
label_4f3f58:
    // 0x4f3f58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f3f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f3f5c:
    // 0x4f3f5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f3f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3f60:
    // 0x4f3f60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f3f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3f64:
    // 0x4f3f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f3f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3f68:
    // 0x4f3f68: 0x3e00008  jr          $ra
label_4f3f6c:
    if (ctx->pc == 0x4F3F6Cu) {
        ctx->pc = 0x4F3F6Cu;
            // 0x4f3f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F3F70u;
        goto label_4f3f70;
    }
    ctx->pc = 0x4F3F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3F68u;
            // 0x4f3f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3F70u;
label_4f3f70:
    // 0x4f3f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f3f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f3f74:
    // 0x4f3f74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f3f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f3f78:
    // 0x4f3f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f3f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f3f7c:
    // 0x4f3f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f3f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f3f80:
    // 0x4f3f80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f3f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3f84:
    // 0x4f3f84: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4f3f88:
    if (ctx->pc == 0x4F3F88u) {
        ctx->pc = 0x4F3F88u;
            // 0x4f3f88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3F8Cu;
        goto label_4f3f8c;
    }
    ctx->pc = 0x4F3F84u;
    {
        const bool branch_taken_0x4f3f84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3F84u;
            // 0x4f3f88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3f84) {
            ctx->pc = 0x4F404Cu;
            goto label_4f404c;
        }
    }
    ctx->pc = 0x4F3F8Cu;
label_4f3f8c:
    // 0x4f3f8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f3f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f3f90:
    // 0x4f3f90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f3f94:
    // 0x4f3f94: 0x24634420  addiu       $v1, $v1, 0x4420
    ctx->pc = 0x4f3f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17440));
label_4f3f98:
    // 0x4f3f98: 0x24424460  addiu       $v0, $v0, 0x4460
    ctx->pc = 0x4f3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17504));
label_4f3f9c:
    // 0x4f3f9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f3f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f3fa0:
    // 0x4f3fa0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f3fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f3fa4:
    // 0x4f3fa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f3fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f3fa8:
    // 0x4f3fa8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4f3fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4f3fac:
    // 0x4f3fac: 0x320f809  jalr        $t9
label_4f3fb0:
    if (ctx->pc == 0x4F3FB0u) {
        ctx->pc = 0x4F3FB4u;
        goto label_4f3fb4;
    }
    ctx->pc = 0x4F3FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F3FB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F3FB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F3FB4u; }
            if (ctx->pc != 0x4F3FB4u) { return; }
        }
        }
    }
    ctx->pc = 0x4F3FB4u;
label_4f3fb4:
    // 0x4f3fb4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4f3fb8:
    if (ctx->pc == 0x4F3FB8u) {
        ctx->pc = 0x4F3FB8u;
            // 0x4f3fb8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4F3FBCu;
        goto label_4f3fbc;
    }
    ctx->pc = 0x4F3FB4u;
    {
        const bool branch_taken_0x4f3fb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3fb4) {
            ctx->pc = 0x4F3FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3FB4u;
            // 0x4f3fb8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4038u;
            goto label_4f4038;
        }
    }
    ctx->pc = 0x4F3FBCu;
label_4f3fbc:
    // 0x4f3fbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4f3fc0:
    // 0x4f3fc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f3fc4:
    // 0x4f3fc4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4f3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4f3fc8:
    // 0x4f3fc8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4f3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4f3fcc:
    // 0x4f3fcc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f3fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f3fd0:
    // 0x4f3fd0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f3fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f3fd4:
    // 0x4f3fd4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4f3fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4f3fd8:
    // 0x4f3fd8: 0xc0aecc4  jal         func_2BB310
label_4f3fdc:
    if (ctx->pc == 0x4F3FDCu) {
        ctx->pc = 0x4F3FDCu;
            // 0x4f3fdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F3FE0u;
        goto label_4f3fe0;
    }
    ctx->pc = 0x4F3FD8u;
    SET_GPR_U32(ctx, 31, 0x4F3FE0u);
    ctx->pc = 0x4F3FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3FD8u;
            // 0x4f3fdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3FE0u; }
        if (ctx->pc != 0x4F3FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3FE0u; }
        if (ctx->pc != 0x4F3FE0u) { return; }
    }
    ctx->pc = 0x4F3FE0u;
label_4f3fe0:
    // 0x4f3fe0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4f3fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4f3fe4:
    // 0x4f3fe4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4f3fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4f3fe8:
    // 0x4f3fe8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f3fec:
    if (ctx->pc == 0x4F3FECu) {
        ctx->pc = 0x4F3FECu;
            // 0x4f3fec: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4F3FF0u;
        goto label_4f3ff0;
    }
    ctx->pc = 0x4F3FE8u;
    {
        const bool branch_taken_0x4f3fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3fe8) {
            ctx->pc = 0x4F3FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3FE8u;
            // 0x4f3fec: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4004u;
            goto label_4f4004;
        }
    }
    ctx->pc = 0x4F3FF0u;
label_4f3ff0:
    // 0x4f3ff0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4f3ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4f3ff4:
    // 0x4f3ff4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f3ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f3ff8:
    // 0x4f3ff8: 0x320f809  jalr        $t9
label_4f3ffc:
    if (ctx->pc == 0x4F3FFCu) {
        ctx->pc = 0x4F3FFCu;
            // 0x4f3ffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F4000u;
        goto label_4f4000;
    }
    ctx->pc = 0x4F3FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F4000u);
        ctx->pc = 0x4F3FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3FF8u;
            // 0x4f3ffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F4000u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F4000u; }
            if (ctx->pc != 0x4F4000u) { return; }
        }
        }
    }
    ctx->pc = 0x4F4000u;
label_4f4000:
    // 0x4f4000: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4f4000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4f4004:
    // 0x4f4004: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4f4004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4f4008:
    // 0x4f4008: 0xc0aec9c  jal         func_2BB270
label_4f400c:
    if (ctx->pc == 0x4F400Cu) {
        ctx->pc = 0x4F400Cu;
            // 0x4f400c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4F4010u;
        goto label_4f4010;
    }
    ctx->pc = 0x4F4008u;
    SET_GPR_U32(ctx, 31, 0x4F4010u);
    ctx->pc = 0x4F400Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4008u;
            // 0x4f400c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4010u; }
        if (ctx->pc != 0x4F4010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4010u; }
        if (ctx->pc != 0x4F4010u) { return; }
    }
    ctx->pc = 0x4F4010u;
label_4f4010:
    // 0x4f4010: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4f4010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4f4014:
    // 0x4f4014: 0xc0aec88  jal         func_2BB220
label_4f4018:
    if (ctx->pc == 0x4F4018u) {
        ctx->pc = 0x4F4018u;
            // 0x4f4018: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4F401Cu;
        goto label_4f401c;
    }
    ctx->pc = 0x4F4014u;
    SET_GPR_U32(ctx, 31, 0x4F401Cu);
    ctx->pc = 0x4F4018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4014u;
            // 0x4f4018: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F401Cu; }
        if (ctx->pc != 0x4F401Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F401Cu; }
        if (ctx->pc != 0x4F401Cu) { return; }
    }
    ctx->pc = 0x4F401Cu;
label_4f401c:
    // 0x4f401c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4f401cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4f4020:
    // 0x4f4020: 0xc0aec0c  jal         func_2BB030
label_4f4024:
    if (ctx->pc == 0x4F4024u) {
        ctx->pc = 0x4F4024u;
            // 0x4f4024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4028u;
        goto label_4f4028;
    }
    ctx->pc = 0x4F4020u;
    SET_GPR_U32(ctx, 31, 0x4F4028u);
    ctx->pc = 0x4F4024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4020u;
            // 0x4f4024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4028u; }
        if (ctx->pc != 0x4F4028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4028u; }
        if (ctx->pc != 0x4F4028u) { return; }
    }
    ctx->pc = 0x4F4028u;
label_4f4028:
    // 0x4f4028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f4028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f402c:
    // 0x4f402c: 0xc0aeaa8  jal         func_2BAAA0
label_4f4030:
    if (ctx->pc == 0x4F4030u) {
        ctx->pc = 0x4F4030u;
            // 0x4f4030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4034u;
        goto label_4f4034;
    }
    ctx->pc = 0x4F402Cu;
    SET_GPR_U32(ctx, 31, 0x4F4034u);
    ctx->pc = 0x4F4030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F402Cu;
            // 0x4f4030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4034u; }
        if (ctx->pc != 0x4F4034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4034u; }
        if (ctx->pc != 0x4F4034u) { return; }
    }
    ctx->pc = 0x4F4034u;
label_4f4034:
    // 0x4f4034: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4f4034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4f4038:
    // 0x4f4038: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f4038u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f403c:
    // 0x4f403c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f4040:
    if (ctx->pc == 0x4F4040u) {
        ctx->pc = 0x4F4040u;
            // 0x4f4040: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4044u;
        goto label_4f4044;
    }
    ctx->pc = 0x4F403Cu;
    {
        const bool branch_taken_0x4f403c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f403c) {
            ctx->pc = 0x4F4040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F403Cu;
            // 0x4f4040: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4050u;
            goto label_4f4050;
        }
    }
    ctx->pc = 0x4F4044u;
label_4f4044:
    // 0x4f4044: 0xc0400a8  jal         func_1002A0
label_4f4048:
    if (ctx->pc == 0x4F4048u) {
        ctx->pc = 0x4F4048u;
            // 0x4f4048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F404Cu;
        goto label_4f404c;
    }
    ctx->pc = 0x4F4044u;
    SET_GPR_U32(ctx, 31, 0x4F404Cu);
    ctx->pc = 0x4F4048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4044u;
            // 0x4f4048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F404Cu; }
        if (ctx->pc != 0x4F404Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F404Cu; }
        if (ctx->pc != 0x4F404Cu) { return; }
    }
    ctx->pc = 0x4F404Cu;
label_4f404c:
    // 0x4f404c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f404cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4050:
    // 0x4f4050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f4050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4054:
    // 0x4f4054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f4054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4058:
    // 0x4f4058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f4058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f405c:
    // 0x4f405c: 0x3e00008  jr          $ra
label_4f4060:
    if (ctx->pc == 0x4F4060u) {
        ctx->pc = 0x4F4060u;
            // 0x4f4060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F4064u;
        goto label_4f4064;
    }
    ctx->pc = 0x4F405Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F405Cu;
            // 0x4f4060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F4064u;
label_4f4064:
    // 0x4f4064: 0x0  nop
    ctx->pc = 0x4f4064u;
    // NOP
label_4f4068:
    // 0x4f4068: 0x0  nop
    ctx->pc = 0x4f4068u;
    // NOP
label_4f406c:
    // 0x4f406c: 0x0  nop
    ctx->pc = 0x4f406cu;
    // NOP
}
