#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116608
// Address: 0x116608 - 0x116678
void sub_00116608_0x116608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116608_0x116608");
#endif

    switch (ctx->pc) {
        case 0x116644u: goto label_116644;
        case 0x116654u: goto label_116654;
        default: break;
    }

    ctx->pc = 0x116608u;

    // 0x116608: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x116608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x11660c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x11660cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x116610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x116610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x116614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116618: 0x2442f230  addiu       $v0, $v0, -0xDD0
    ctx->pc = 0x116618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963760));
    // 0x11661c: 0x24a5f240  addiu       $a1, $a1, -0xDC0
    ctx->pc = 0x11661cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963776));
    // 0x116620: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x116620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x116624: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116628: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x116628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11662c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x11662cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x116630: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x116630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x116634: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x116634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x116638: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x116638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x11663c: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x11663Cu;
    SET_GPR_U32(ctx, 31, 0x116644u);
    ctx->pc = 0x116640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11663Cu;
            // 0x116640: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116644u; }
        if (ctx->pc != 0x116644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116644u; }
        if (ctx->pc != 0x116644u) { return; }
    }
    ctx->pc = 0x116644u;
label_116644:
    // 0x116644: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x116644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x116648: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x116648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11664c: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x11664Cu;
    SET_GPR_U32(ctx, 31, 0x116654u);
    ctx->pc = 0x116650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11664Cu;
            // 0x116650: 0xac62ead0  sw          $v0, -0x1530($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116654u; }
        if (ctx->pc != 0x116654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116654u; }
        if (ctx->pc != 0x116654u) { return; }
    }
    ctx->pc = 0x116654u;
label_116654:
    // 0x116654: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x116654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x116658: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x116658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11665c: 0xac62ead4  sw          $v0, -0x152C($v1)
    ctx->pc = 0x11665cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961876), GPR_U32(ctx, 2));
    // 0x116660: 0x3e00008  jr          $ra
    ctx->pc = 0x116660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116660u;
            // 0x116664: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116668u;
    // 0x116668: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x116668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x11666c: 0x3e00008  jr          $ra
    ctx->pc = 0x11666Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11666Cu;
            // 0x116670: 0x8c62ead4  lw          $v0, -0x152C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961876)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116674u;
    // 0x116674: 0x0  nop
    ctx->pc = 0x116674u;
    // NOP
}
