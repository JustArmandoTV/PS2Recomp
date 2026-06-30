#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CE40
// Address: 0x10ce40 - 0x10cea8
void sub_0010CE40_0x10ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CE40_0x10ce40");
#endif

    switch (ctx->pc) {
        case 0x10ce70u: goto label_10ce70;
        case 0x10ce78u: goto label_10ce78;
        case 0x10ce90u: goto label_10ce90;
        default: break;
    }

    ctx->pc = 0x10ce40u;

    // 0x10ce40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ce44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ce48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ce4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ce4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ce50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ce54: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10ce54u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10ce58: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10ce5c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10ce5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10ce60: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CE60u;
    {
        const bool branch_taken_0x10ce60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ce60) {
            ctx->pc = 0x10CE70u;
            goto label_10ce70;
        }
    }
    ctx->pc = 0x10CE68u;
    // 0x10ce68: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10CE68u;
    SET_GPR_U32(ctx, 31, 0x10CE70u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE70u; }
        if (ctx->pc != 0x10CE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE70u; }
        if (ctx->pc != 0x10CE70u) { return; }
    }
    ctx->pc = 0x10CE70u;
label_10ce70:
    // 0x10ce70: 0xc04302c  jal         func_10C0B0
    ctx->pc = 0x10CE70u;
    SET_GPR_U32(ctx, 31, 0x10CE78u);
    ctx->pc = 0x10CE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CE70u;
            // 0x10ce74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C0B0u;
    if (runtime->hasFunction(0x10C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE78u; }
        if (ctx->pc != 0x10CE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C0B0_0x10c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE78u; }
        if (ctx->pc != 0x10CE78u) { return; }
    }
    ctx->pc = 0x10CE78u;
label_10ce78:
    // 0x10ce78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10ce78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce7c: 0xf  sync
    ctx->pc = 0x10ce7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ce80: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CE80u;
    {
        const bool branch_taken_0x10ce80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CE80u;
            // 0x10ce84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce80) {
            ctx->pc = 0x10CE94u;
            goto label_10ce94;
        }
    }
    ctx->pc = 0x10CE88u;
    // 0x10ce88: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10CE88u;
    SET_GPR_U32(ctx, 31, 0x10CE90u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE90u; }
        if (ctx->pc != 0x10CE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE90u; }
        if (ctx->pc != 0x10CE90u) { return; }
    }
    ctx->pc = 0x10CE90u;
label_10ce90:
    // 0x10ce90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10ce90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ce94:
    // 0x10ce94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ce94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ce98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ce98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ce9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ce9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cea0: 0x3e00008  jr          $ra
    ctx->pc = 0x10CEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CEA0u;
            // 0x10cea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CEA8u;
}
