#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001033B8
// Address: 0x1033b8 - 0x1033f8
void sub_001033B8_0x1033b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001033B8_0x1033b8");
#endif

    switch (ctx->pc) {
        case 0x1033d0u: goto label_1033d0;
        case 0x1033dcu: goto label_1033dc;
        default: break;
    }

    ctx->pc = 0x1033b8u;

    // 0x1033b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1033b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1033bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1033bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1033c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1033c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1033c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1033c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1033c8: 0xc0431a0  jal         func_10C680
    ctx->pc = 0x1033C8u;
    SET_GPR_U32(ctx, 31, 0x1033D0u);
    ctx->pc = 0x1033CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1033C8u;
            // 0x1033cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C680u;
    if (runtime->hasFunction(0x10C680u)) {
        auto targetFn = runtime->lookupFunction(0x10C680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1033D0u; }
        if (ctx->pc != 0x1033D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C680_0x10c680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1033D0u; }
        if (ctx->pc != 0x1033D0u) { return; }
    }
    ctx->pc = 0x1033D0u;
label_1033d0:
    // 0x1033d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1033d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033d4: 0xc0431a8  jal         func_10C6A0
    ctx->pc = 0x1033D4u;
    SET_GPR_U32(ctx, 31, 0x1033DCu);
    ctx->pc = 0x1033D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1033D4u;
            // 0x1033d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6A0u;
    if (runtime->hasFunction(0x10C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1033DCu; }
        if (ctx->pc != 0x1033DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C6A0_0x10c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1033DCu; }
        if (ctx->pc != 0x1033DCu) { return; }
    }
    ctx->pc = 0x1033DCu;
label_1033dc:
    // 0x1033dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1033dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1033e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1033e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1033e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1033e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1033e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1033ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1033ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1033F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1033ECu;
            // 0x1033f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1033F4u;
    // 0x1033f4: 0x0  nop
    ctx->pc = 0x1033f4u;
    // NOP
}
