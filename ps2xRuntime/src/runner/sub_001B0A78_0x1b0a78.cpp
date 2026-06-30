#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0A78
// Address: 0x1b0a78 - 0x1b0af0
void sub_001B0A78_0x1b0a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0A78_0x1b0a78");
#endif

    switch (ctx->pc) {
        case 0x1b0accu: goto label_1b0acc;
        case 0x1b0ad8u: goto label_1b0ad8;
        default: break;
    }

    ctx->pc = 0x1b0a78u;

    // 0x1b0a78: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1b0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1b0a7c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0a80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b0a84: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1b0a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1b0a88: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1b0a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1b0a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0a90: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b0a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b0a94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0a98: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1b0a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b0a9c: 0x752c0  sll         $t2, $a3, 11
    ctx->pc = 0x1b0a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x1b0aa0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b0aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b0aa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b0aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0aa8: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x1b0aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x1b0aac: 0xae0a0018  sw          $t2, 0x18($s0)
    ctx->pc = 0x1b0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
    // 0x1b0ab0: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x1b0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x1b0ab4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1b0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1b0ab8: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x1b0ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x1b0abc: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x1b0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x1b0ac0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1b0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1b0ac4: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x1B0AC4u;
    SET_GPR_U32(ctx, 31, 0x1B0ACCu);
    ctx->pc = 0x1B0AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0AC4u;
            // 0x1b0ac8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0ACCu; }
        if (ctx->pc != 0x1B0ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0ACCu; }
        if (ctx->pc != 0x1B0ACCu) { return; }
    }
    ctx->pc = 0x1B0ACCu;
label_1b0acc:
    // 0x1b0acc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1b0accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1b0ad0: 0xc06c2bc  jal         func_1B0AF0
    ctx->pc = 0x1B0AD0u;
    SET_GPR_U32(ctx, 31, 0x1B0AD8u);
    ctx->pc = 0x1B0AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0AD0u;
            // 0x1b0ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AF0u;
    if (runtime->hasFunction(0x1B0AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0AD8u; }
        if (ctx->pc != 0x1B0AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AF0_0x1b0af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0AD8u; }
        if (ctx->pc != 0x1B0AD8u) { return; }
    }
    ctx->pc = 0x1B0AD8u;
label_1b0ad8:
    // 0x1b0ad8: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x1b0ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x1b0adc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b0adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b0ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0ae4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b0ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0AE8u;
            // 0x1b0aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0AF0u;
}
