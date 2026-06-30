#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010F048
// Address: 0x10f048 - 0x10f0c8
void sub_0010F048_0x10f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F048_0x10f048");
#endif

    switch (ctx->pc) {
        case 0x10f080u: goto label_10f080;
        case 0x10f0a4u: goto label_10f0a4;
        case 0x10f0b4u: goto label_10f0b4;
        default: break;
    }

    ctx->pc = 0x10f048u;

    // 0x10f048: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x10f048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x10f04c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10f050: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10f054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f058: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10f058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10f05c: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x10f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x10f060: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x10f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x10f064: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x10f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x10f068: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x10f068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x10f06c: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x10f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x10f070: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x10f070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x10f074: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x10f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x10f078: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10F078u;
    SET_GPR_U32(ctx, 31, 0x10F080u);
    ctx->pc = 0x10F07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F078u;
            // 0x10f07c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F080u; }
        if (ctx->pc != 0x10F080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F080u; }
        if (ctx->pc != 0x10F080u) { return; }
    }
    ctx->pc = 0x10F080u;
label_10f080:
    // 0x10f080: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10f080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10f084: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x10f084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x10f088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f08c: 0x2484eeb8  addiu       $a0, $a0, -0x1148
    ctx->pc = 0x10f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962872));
    // 0x10f090: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10f090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f094: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f098: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x10f098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x10f09c: 0xc043852  jal         func_10E148
    ctx->pc = 0x10F09Cu;
    SET_GPR_U32(ctx, 31, 0x10F0A4u);
    ctx->pc = 0x10F0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F09Cu;
            // 0x10f0a0: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E148u;
    if (runtime->hasFunction(0x10E148u)) {
        auto targetFn = runtime->lookupFunction(0x10E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F0A4u; }
        if (ctx->pc != 0x10F0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E148_0x10e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F0A4u; }
        if (ctx->pc != 0x10F0A4u) { return; }
    }
    ctx->pc = 0x10F0A4u;
label_10f0a4:
    // 0x10f0a4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F0A4u;
    {
        const bool branch_taken_0x10f0a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F0A4u;
            // 0x10f0a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0a4) {
            ctx->pc = 0x10F0B8u;
            goto label_10f0b8;
        }
    }
    ctx->pc = 0x10F0ACu;
    // 0x10f0ac: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10F0ACu;
    SET_GPR_U32(ctx, 31, 0x10F0B4u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F0B4u; }
        if (ctx->pc != 0x10F0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F0B4u; }
        if (ctx->pc != 0x10F0B4u) { return; }
    }
    ctx->pc = 0x10F0B4u;
label_10f0b4:
    // 0x10f0b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10f0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10f0b8:
    // 0x10f0b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10f0b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f0bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10f0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x10F0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F0C0u;
            // 0x10f0c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F0C8u;
}
