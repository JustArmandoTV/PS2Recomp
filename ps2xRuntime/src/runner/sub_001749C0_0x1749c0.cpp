#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001749C0
// Address: 0x1749c0 - 0x174a00
void sub_001749C0_0x1749c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001749C0_0x1749c0");
#endif

    switch (ctx->pc) {
        case 0x1749dcu: goto label_1749dc;
        case 0x1749e4u: goto label_1749e4;
        case 0x1749ecu: goto label_1749ec;
        default: break;
    }

    ctx->pc = 0x1749c0u;

    // 0x1749c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1749C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1749C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1749C0u;
            // 0x1749c4: 0xa085006d  sb          $a1, 0x6D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 109), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1749C8u;
    // 0x1749c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1749c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1749cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1749ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1749d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1749d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1749d4: 0xc0599de  jal         func_166778
    ctx->pc = 0x1749D4u;
    SET_GPR_U32(ctx, 31, 0x1749DCu);
    ctx->pc = 0x1749D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1749D4u;
            // 0x1749d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749DCu; }
        if (ctx->pc != 0x1749DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749DCu; }
        if (ctx->pc != 0x1749DCu) { return; }
    }
    ctx->pc = 0x1749DCu;
label_1749dc:
    // 0x1749dc: 0xc05d280  jal         func_174A00
    ctx->pc = 0x1749DCu;
    SET_GPR_U32(ctx, 31, 0x1749E4u);
    ctx->pc = 0x1749E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1749DCu;
            // 0x1749e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174A00u;
    if (runtime->hasFunction(0x174A00u)) {
        auto targetFn = runtime->lookupFunction(0x174A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749E4u; }
        if (ctx->pc != 0x1749E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174A00_0x174a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749E4u; }
        if (ctx->pc != 0x1749E4u) { return; }
    }
    ctx->pc = 0x1749E4u;
label_1749e4:
    // 0x1749e4: 0xc0599e0  jal         func_166780
    ctx->pc = 0x1749E4u;
    SET_GPR_U32(ctx, 31, 0x1749ECu);
    ctx->pc = 0x1749E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1749E4u;
            // 0x1749e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749ECu; }
        if (ctx->pc != 0x1749ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749ECu; }
        if (ctx->pc != 0x1749ECu) { return; }
    }
    ctx->pc = 0x1749ECu;
label_1749ec:
    // 0x1749ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1749ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1749f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1749f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1749f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1749f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1749F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1749FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1749F8u;
            // 0x1749fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174A00u;
}
