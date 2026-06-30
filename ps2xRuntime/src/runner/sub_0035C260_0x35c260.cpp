#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035C260
// Address: 0x35c260 - 0x35c2f0
void sub_0035C260_0x35c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C260_0x35c260");
#endif

    switch (ctx->pc) {
        case 0x35c260u: goto label_35c260;
        case 0x35c264u: goto label_35c264;
        case 0x35c268u: goto label_35c268;
        case 0x35c26cu: goto label_35c26c;
        case 0x35c270u: goto label_35c270;
        case 0x35c274u: goto label_35c274;
        case 0x35c278u: goto label_35c278;
        case 0x35c27cu: goto label_35c27c;
        case 0x35c280u: goto label_35c280;
        case 0x35c284u: goto label_35c284;
        case 0x35c288u: goto label_35c288;
        case 0x35c28cu: goto label_35c28c;
        case 0x35c290u: goto label_35c290;
        case 0x35c294u: goto label_35c294;
        case 0x35c298u: goto label_35c298;
        case 0x35c29cu: goto label_35c29c;
        case 0x35c2a0u: goto label_35c2a0;
        case 0x35c2a4u: goto label_35c2a4;
        case 0x35c2a8u: goto label_35c2a8;
        case 0x35c2acu: goto label_35c2ac;
        case 0x35c2b0u: goto label_35c2b0;
        case 0x35c2b4u: goto label_35c2b4;
        case 0x35c2b8u: goto label_35c2b8;
        case 0x35c2bcu: goto label_35c2bc;
        case 0x35c2c0u: goto label_35c2c0;
        case 0x35c2c4u: goto label_35c2c4;
        case 0x35c2c8u: goto label_35c2c8;
        case 0x35c2ccu: goto label_35c2cc;
        case 0x35c2d0u: goto label_35c2d0;
        case 0x35c2d4u: goto label_35c2d4;
        case 0x35c2d8u: goto label_35c2d8;
        case 0x35c2dcu: goto label_35c2dc;
        case 0x35c2e0u: goto label_35c2e0;
        case 0x35c2e4u: goto label_35c2e4;
        case 0x35c2e8u: goto label_35c2e8;
        case 0x35c2ecu: goto label_35c2ec;
        default: break;
    }

    ctx->pc = 0x35c260u;

label_35c260:
    // 0x35c260: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x35c260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_35c264:
    // 0x35c264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35c264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35c268:
    // 0x35c268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c26c:
    // 0x35c26c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35c26cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35c270:
    // 0x35c270: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x35c270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_35c274:
    // 0x35c274: 0x320f809  jalr        $t9
label_35c278:
    if (ctx->pc == 0x35C278u) {
        ctx->pc = 0x35C278u;
            // 0x35c278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C27Cu;
        goto label_35c27c;
    }
    ctx->pc = 0x35C274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35C27Cu);
        ctx->pc = 0x35C278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C274u;
            // 0x35c278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35C27Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35C27Cu; }
            if (ctx->pc != 0x35C27Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35C27Cu;
label_35c27c:
    // 0x35c27c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35c27cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35c280:
    // 0x35c280: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35c280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35c284:
    // 0x35c284: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x35c284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_35c288:
    // 0x35c288: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x35c288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_35c28c:
    // 0x35c28c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35c28cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35c290:
    // 0x35c290: 0xc04cbd8  jal         func_132F60
label_35c294:
    if (ctx->pc == 0x35C294u) {
        ctx->pc = 0x35C294u;
            // 0x35c294: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35C298u;
        goto label_35c298;
    }
    ctx->pc = 0x35C290u;
    SET_GPR_U32(ctx, 31, 0x35C298u);
    ctx->pc = 0x35C294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C290u;
            // 0x35c294: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C298u; }
        if (ctx->pc != 0x35C298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C298u; }
        if (ctx->pc != 0x35C298u) { return; }
    }
    ctx->pc = 0x35C298u;
label_35c298:
    // 0x35c298: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35c298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35c29c:
    // 0x35c29c: 0xc04f29c  jal         func_13CA70
label_35c2a0:
    if (ctx->pc == 0x35C2A0u) {
        ctx->pc = 0x35C2A0u;
            // 0x35c2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C2A4u;
        goto label_35c2a4;
    }
    ctx->pc = 0x35C29Cu;
    SET_GPR_U32(ctx, 31, 0x35C2A4u);
    ctx->pc = 0x35C2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C29Cu;
            // 0x35c2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C2A4u; }
        if (ctx->pc != 0x35C2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C2A4u; }
        if (ctx->pc != 0x35C2A4u) { return; }
    }
    ctx->pc = 0x35C2A4u;
label_35c2a4:
    // 0x35c2a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35c2a8:
    // 0x35c2a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x35c2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35c2ac:
    // 0x35c2ac: 0xc04cdf0  jal         func_1337C0
label_35c2b0:
    if (ctx->pc == 0x35C2B0u) {
        ctx->pc = 0x35C2B0u;
            // 0x35c2b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C2B4u;
        goto label_35c2b4;
    }
    ctx->pc = 0x35C2ACu;
    SET_GPR_U32(ctx, 31, 0x35C2B4u);
    ctx->pc = 0x35C2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C2ACu;
            // 0x35c2b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C2B4u; }
        if (ctx->pc != 0x35C2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C2B4u; }
        if (ctx->pc != 0x35C2B4u) { return; }
    }
    ctx->pc = 0x35C2B4u;
label_35c2b4:
    // 0x35c2b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35c2b8:
    // 0x35c2b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35c2bc:
    // 0x35c2bc: 0xc04cdd0  jal         func_133740
label_35c2c0:
    if (ctx->pc == 0x35C2C0u) {
        ctx->pc = 0x35C2C0u;
            // 0x35c2c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C2C4u;
        goto label_35c2c4;
    }
    ctx->pc = 0x35C2BCu;
    SET_GPR_U32(ctx, 31, 0x35C2C4u);
    ctx->pc = 0x35C2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C2BCu;
            // 0x35c2c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C2C4u; }
        if (ctx->pc != 0x35C2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C2C4u; }
        if (ctx->pc != 0x35C2C4u) { return; }
    }
    ctx->pc = 0x35C2C4u;
label_35c2c4:
    // 0x35c2c4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x35c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_35c2c8:
    // 0x35c2c8: 0xc04c994  jal         func_132650
label_35c2cc:
    if (ctx->pc == 0x35C2CCu) {
        ctx->pc = 0x35C2CCu;
            // 0x35c2cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x35C2D0u;
        goto label_35c2d0;
    }
    ctx->pc = 0x35C2C8u;
    SET_GPR_U32(ctx, 31, 0x35C2D0u);
    ctx->pc = 0x35C2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C2C8u;
            // 0x35c2cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C2D0u; }
        if (ctx->pc != 0x35C2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C2D0u; }
        if (ctx->pc != 0x35C2D0u) { return; }
    }
    ctx->pc = 0x35C2D0u;
label_35c2d0:
    // 0x35c2d0: 0xc0d6fc8  jal         func_35BF20
label_35c2d4:
    if (ctx->pc == 0x35C2D4u) {
        ctx->pc = 0x35C2D4u;
            // 0x35c2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C2D8u;
        goto label_35c2d8;
    }
    ctx->pc = 0x35C2D0u;
    SET_GPR_U32(ctx, 31, 0x35C2D8u);
    ctx->pc = 0x35C2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C2D0u;
            // 0x35c2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35BF20u;
    if (runtime->hasFunction(0x35BF20u)) {
        auto targetFn = runtime->lookupFunction(0x35BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C2D8u; }
        if (ctx->pc != 0x35C2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035BF20_0x35bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C2D8u; }
        if (ctx->pc != 0x35C2D8u) { return; }
    }
    ctx->pc = 0x35C2D8u;
label_35c2d8:
    // 0x35c2d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35c2dc:
    // 0x35c2dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c2e0:
    // 0x35c2e0: 0x3e00008  jr          $ra
label_35c2e4:
    if (ctx->pc == 0x35C2E4u) {
        ctx->pc = 0x35C2E4u;
            // 0x35c2e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x35C2E8u;
        goto label_35c2e8;
    }
    ctx->pc = 0x35C2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C2E0u;
            // 0x35c2e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C2E8u;
label_35c2e8:
    // 0x35c2e8: 0x0  nop
    ctx->pc = 0x35c2e8u;
    // NOP
label_35c2ec:
    // 0x35c2ec: 0x0  nop
    ctx->pc = 0x35c2ecu;
    // NOP
}
