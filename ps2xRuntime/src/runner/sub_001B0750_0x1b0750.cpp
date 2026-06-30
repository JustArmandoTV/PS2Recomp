#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0750
// Address: 0x1b0750 - 0x1b07e8
void sub_001B0750_0x1b0750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0750_0x1b0750");
#endif

    switch (ctx->pc) {
        case 0x1b0768u: goto label_1b0768;
        case 0x1b0790u: goto label_1b0790;
        case 0x1b07a8u: goto label_1b07a8;
        case 0x1b07c0u: goto label_1b07c0;
        case 0x1b07d4u: goto label_1b07d4;
        default: break;
    }

    ctx->pc = 0x1b0750u;

    // 0x1b0750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0754: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b0754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b0758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b075c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b075cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b0760: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B0760u;
    SET_GPR_U32(ctx, 31, 0x1B0768u);
    ctx->pc = 0x1B0764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0760u;
            // 0x1b0764: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0768u; }
        if (ctx->pc != 0x1B0768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0768u; }
        if (ctx->pc != 0x1B0768u) { return; }
    }
    ctx->pc = 0x1B0768u;
label_1b0768:
    // 0x1b0768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b076c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1b076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b0770: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b0770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0774: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1b0774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b0778: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0778u;
    {
        const bool branch_taken_0x1b0778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B077Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0778u;
            // 0x1b077c: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0778) {
            ctx->pc = 0x1B0788u;
            goto label_1b0788;
        }
    }
    ctx->pc = 0x1B0780u;
    // 0x1b0780: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B0780u;
    {
        const bool branch_taken_0x1b0780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0780u;
            // 0x1b0784: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0780) {
            ctx->pc = 0x1B07CCu;
            goto label_1b07cc;
        }
    }
    ctx->pc = 0x1B0788u;
label_1b0788:
    // 0x1b0788: 0xc06c1fa  jal         func_1B07E8
    ctx->pc = 0x1B0788u;
    SET_GPR_U32(ctx, 31, 0x1B0790u);
    ctx->pc = 0x1B07E8u;
    if (runtime->hasFunction(0x1B07E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B07E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0790u; }
        if (ctx->pc != 0x1B0790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B07E8_0x1b07e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0790u; }
        if (ctx->pc != 0x1B0790u) { return; }
    }
    ctx->pc = 0x1B0790u;
label_1b0790:
    // 0x1b0790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0794: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1b0794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0798: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B0798u;
    {
        const bool branch_taken_0x1b0798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B079Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0798u;
            // 0x1b079c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0798) {
            ctx->pc = 0x1B07CCu;
            goto label_1b07cc;
        }
    }
    ctx->pc = 0x1B07A0u;
    // 0x1b07a0: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B07A0u;
    SET_GPR_U32(ctx, 31, 0x1B07A8u);
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07A8u; }
        if (ctx->pc != 0x1B07A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07A8u; }
        if (ctx->pc != 0x1B07A8u) { return; }
    }
    ctx->pc = 0x1B07A8u;
label_1b07a8:
    // 0x1b07a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B07A8u;
    {
        const bool branch_taken_0x1b07a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07A8u;
            // 0x1b07ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07a8) {
            ctx->pc = 0x1B07CCu;
            goto label_1b07cc;
        }
    }
    ctx->pc = 0x1B07B0u;
    // 0x1b07b0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1b07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b07b4: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x1b07b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1b07b8: 0xc06df30  jal         func_1B7CC0
    ctx->pc = 0x1B07B8u;
    SET_GPR_U32(ctx, 31, 0x1B07C0u);
    ctx->pc = 0x1B07BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07B8u;
            // 0x1b07bc: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7CC0u;
    if (runtime->hasFunction(0x1B7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07C0u; }
        if (ctx->pc != 0x1B07C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7CC0_0x1b7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07C0u; }
        if (ctx->pc != 0x1B07C0u) { return; }
    }
    ctx->pc = 0x1B07C0u;
label_1b07c0:
    // 0x1b07c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1b07c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b07c4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1b07c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1b07c8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1b07c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1b07cc:
    // 0x1b07cc: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B07CCu;
    SET_GPR_U32(ctx, 31, 0x1B07D4u);
    ctx->pc = 0x1B07D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07CCu;
            // 0x1b07d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07D4u; }
        if (ctx->pc != 0x1B07D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07D4u; }
        if (ctx->pc != 0x1B07D4u) { return; }
    }
    ctx->pc = 0x1B07D4u;
label_1b07d4:
    // 0x1b07d4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1b07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b07d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b07d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b07dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b07dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b07e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B07E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B07E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07E0u;
            // 0x1b07e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B07E8u;
}
