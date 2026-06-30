#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4FB0
// Address: 0x1b4fb0 - 0x1b5020
void sub_001B4FB0_0x1b4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4FB0_0x1b4fb0");
#endif

    switch (ctx->pc) {
        case 0x1b4fccu: goto label_1b4fcc;
        case 0x1b4fd4u: goto label_1b4fd4;
        default: break;
    }

    ctx->pc = 0x1b4fb0u;

    // 0x1b4fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b4fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b4fc4: 0xc06419c  jal         func_190670
    ctx->pc = 0x1B4FC4u;
    SET_GPR_U32(ctx, 31, 0x1B4FCCu);
    ctx->pc = 0x1B4FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FC4u;
            // 0x1b4fc8: 0x24060376  addiu       $a2, $zero, 0x376 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 886));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (runtime->hasFunction(0x190670u)) {
        auto targetFn = runtime->lookupFunction(0x190670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FCCu; }
        if (ctx->pc != 0x1B4FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190670_0x190670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FCCu; }
        if (ctx->pc != 0x1B4FCCu) { return; }
    }
    ctx->pc = 0x1B4FCCu;
label_1b4fcc:
    // 0x1b4fcc: 0xc06d408  jal         func_1B5020
    ctx->pc = 0x1B4FCCu;
    SET_GPR_U32(ctx, 31, 0x1B4FD4u);
    ctx->pc = 0x1B4FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FCCu;
            // 0x1b4fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5020u;
    if (runtime->hasFunction(0x1B5020u)) {
        auto targetFn = runtime->lookupFunction(0x1B5020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FD4u; }
        if (ctx->pc != 0x1B4FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5020_0x1b5020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FD4u; }
        if (ctx->pc != 0x1B4FD4u) { return; }
    }
    ctx->pc = 0x1B4FD4u;
label_1b4fd4:
    // 0x1b4fd4: 0xae000da8  sw          $zero, 0xDA8($s0)
    ctx->pc = 0x1b4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 0));
    // 0x1b4fd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4fdc: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x1b4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1b4fe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4fe4: 0xae020dd4  sw          $v0, 0xDD4($s0)
    ctx->pc = 0x1b4fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3540), GPR_U32(ctx, 2));
    // 0x1b4fe8: 0xae030dc8  sw          $v1, 0xDC8($s0)
    ctx->pc = 0x1b4fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3528), GPR_U32(ctx, 3));
    // 0x1b4fec: 0xae040dcc  sw          $a0, 0xDCC($s0)
    ctx->pc = 0x1b4fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3532), GPR_U32(ctx, 4));
    // 0x1b4ff0: 0xae000dac  sw          $zero, 0xDAC($s0)
    ctx->pc = 0x1b4ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3500), GPR_U32(ctx, 0));
    // 0x1b4ff4: 0xae030db0  sw          $v1, 0xDB0($s0)
    ctx->pc = 0x1b4ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3504), GPR_U32(ctx, 3));
    // 0x1b4ff8: 0xae040db4  sw          $a0, 0xDB4($s0)
    ctx->pc = 0x1b4ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3508), GPR_U32(ctx, 4));
    // 0x1b4ffc: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x1b4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
    // 0x1b5000: 0xae020dbc  sw          $v0, 0xDBC($s0)
    ctx->pc = 0x1b5000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3516), GPR_U32(ctx, 2));
    // 0x1b5004: 0xae000dc0  sw          $zero, 0xDC0($s0)
    ctx->pc = 0x1b5004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3520), GPR_U32(ctx, 0));
    // 0x1b5008: 0xae000dc4  sw          $zero, 0xDC4($s0)
    ctx->pc = 0x1b5008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3524), GPR_U32(ctx, 0));
    // 0x1b500c: 0xae000dd0  sw          $zero, 0xDD0($s0)
    ctx->pc = 0x1b500cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
    // 0x1b5010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b5010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5018: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5018u;
            // 0x1b501c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5020u;
}
