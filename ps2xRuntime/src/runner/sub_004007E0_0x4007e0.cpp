#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004007E0
// Address: 0x4007e0 - 0x400880
void sub_004007E0_0x4007e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004007E0_0x4007e0");
#endif

    switch (ctx->pc) {
        case 0x400834u: goto label_400834;
        case 0x40083cu: goto label_40083c;
        case 0x400868u: goto label_400868;
        default: break;
    }

    ctx->pc = 0x4007e0u;

    // 0x4007e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4007e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4007e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4007e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4007e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4007e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4007ec: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x4007ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4007f0: 0x50200014  beql        $at, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4007F0u;
    {
        const bool branch_taken_0x4007f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4007f0) {
            ctx->pc = 0x4007F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4007F0u;
            // 0x4007f4: 0xa3082b  sltu        $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x400844u;
            goto label_400844;
        }
    }
    ctx->pc = 0x4007F8u;
    // 0x4007f8: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x4007f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4007fc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4007fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x400800: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x400800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x400804: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x400804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x400808: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x400808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x40080c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x40080cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x400810: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x400810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x400814: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x400814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x400818: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x400818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x40081c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x40081cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x400820: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x400820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x400824: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x400824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x400828: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x400828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x40082c: 0xc1003a0  jal         func_400E80
    ctx->pc = 0x40082Cu;
    SET_GPR_U32(ctx, 31, 0x400834u);
    ctx->pc = 0x400830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40082Cu;
            // 0x400830: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x400E80u;
    if (runtime->hasFunction(0x400E80u)) {
        auto targetFn = runtime->lookupFunction(0x400E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400834u; }
        if (ctx->pc != 0x400834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00400E80_0x400e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400834u; }
        if (ctx->pc != 0x400834u) { return; }
    }
    ctx->pc = 0x400834u;
label_400834:
    // 0x400834: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x400834u;
    SET_GPR_U32(ctx, 31, 0x40083Cu);
    ctx->pc = 0x400838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400834u;
            // 0x400838: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40083Cu; }
        if (ctx->pc != 0x40083Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40083Cu; }
        if (ctx->pc != 0x40083Cu) { return; }
    }
    ctx->pc = 0x40083Cu;
label_40083c:
    // 0x40083c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x40083Cu;
    {
        const bool branch_taken_0x40083c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40083Cu;
            // 0x400840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40083c) {
            ctx->pc = 0x40086Cu;
            goto label_40086c;
        }
    }
    ctx->pc = 0x400844u;
label_400844:
    // 0x400844: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x400844u;
    {
        const bool branch_taken_0x400844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x400844) {
            ctx->pc = 0x400868u;
            goto label_400868;
        }
    }
    ctx->pc = 0x40084Cu;
    // 0x40084c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x40084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x400850: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x400850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x400854: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x400854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x400858: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x400858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x40085c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x40085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x400860: 0xc1002ac  jal         func_400AB0
    ctx->pc = 0x400860u;
    SET_GPR_U32(ctx, 31, 0x400868u);
    ctx->pc = 0x400864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400860u;
            // 0x400864: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x400AB0u;
    if (runtime->hasFunction(0x400AB0u)) {
        auto targetFn = runtime->lookupFunction(0x400AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400868u; }
        if (ctx->pc != 0x400868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00400AB0_0x400ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400868u; }
        if (ctx->pc != 0x400868u) { return; }
    }
    ctx->pc = 0x400868u;
label_400868:
    // 0x400868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x400868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40086c:
    // 0x40086c: 0x3e00008  jr          $ra
    ctx->pc = 0x40086Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x400870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40086Cu;
            // 0x400870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x400874u;
    // 0x400874: 0x0  nop
    ctx->pc = 0x400874u;
    // NOP
    // 0x400878: 0x0  nop
    ctx->pc = 0x400878u;
    // NOP
    // 0x40087c: 0x0  nop
    ctx->pc = 0x40087cu;
    // NOP
}
