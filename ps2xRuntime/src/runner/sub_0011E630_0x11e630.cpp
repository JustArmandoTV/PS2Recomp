#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E630
// Address: 0x11e630 - 0x11e6a8
void sub_0011E630_0x11e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E630_0x11e630");
#endif

    switch (ctx->pc) {
        case 0x11e654u: goto label_11e654;
        case 0x11e670u: goto label_11e670;
        case 0x11e680u: goto label_11e680;
        default: break;
    }

    ctx->pc = 0x11e630u;

    // 0x11e630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11e634: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11e638: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11e638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11e63c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11e63cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e640: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x11e640u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x11e644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e648: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11e648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11e64c: 0xc045968  jal         func_1165A0
    ctx->pc = 0x11E64Cu;
    SET_GPR_U32(ctx, 31, 0x11E654u);
    ctx->pc = 0x11E650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E64Cu;
            // 0x11e650: 0xae32fae4  sw          $s2, -0x51C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294965988), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E654u; }
        if (ctx->pc != 0x11E654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E654u; }
        if (ctx->pc != 0x11E654u) { return; }
    }
    ctx->pc = 0x11E654u;
label_11e654:
    // 0x11e654: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11e654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11e658: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11e658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11e65c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e660: 0x24a5e5d8  addiu       $a1, $a1, -0x1A28
    ctx->pc = 0x11e660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960600));
    // 0x11e664: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x11e664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x11e668: 0xc043d8c  jal         func_10F630
    ctx->pc = 0x11E668u;
    SET_GPR_U32(ctx, 31, 0x11E670u);
    ctx->pc = 0x11E66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E668u;
            // 0x11e66c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F630u;
    if (runtime->hasFunction(0x10F630u)) {
        auto targetFn = runtime->lookupFunction(0x10F630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E670u; }
        if (ctx->pc != 0x11E670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F630_0x10f630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E670u; }
        if (ctx->pc != 0x11E670u) { return; }
    }
    ctx->pc = 0x11E670u;
label_11e670:
    // 0x11e670: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E670u;
    {
        const bool branch_taken_0x11e670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E670u;
            // 0x11e674: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e670) {
            ctx->pc = 0x11E684u;
            goto label_11e684;
        }
    }
    ctx->pc = 0x11E678u;
    // 0x11e678: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x11E678u;
    SET_GPR_U32(ctx, 31, 0x11E680u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E680u; }
        if (ctx->pc != 0x11E680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E680u; }
        if (ctx->pc != 0x11E680u) { return; }
    }
    ctx->pc = 0x11E680u;
label_11e680:
    // 0x11e680: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11e680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_11e684:
    // 0x11e684: 0xae20fae4  sw          $zero, -0x51C($s1)
    ctx->pc = 0x11e684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965988), GPR_U32(ctx, 0));
    // 0x11e688: 0xac52fb08  sw          $s2, -0x4F8($v0)
    ctx->pc = 0x11e688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966024), GPR_U32(ctx, 18));
    // 0x11e68c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11e68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e694: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11e694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e698: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11e698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e69c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6A0u;
            // 0x11e6a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E6A8u;
}
