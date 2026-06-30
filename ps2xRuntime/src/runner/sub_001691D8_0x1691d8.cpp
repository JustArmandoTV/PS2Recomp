#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001691D8
// Address: 0x1691d8 - 0x169210
void sub_001691D8_0x1691d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001691D8_0x1691d8");
#endif

    switch (ctx->pc) {
        case 0x1691ecu: goto label_1691ec;
        case 0x1691f4u: goto label_1691f4;
        case 0x1691fcu: goto label_1691fc;
        default: break;
    }

    ctx->pc = 0x1691d8u;

    // 0x1691d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1691d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1691dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1691dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1691e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1691e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1691e4: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x1691E4u;
    SET_GPR_U32(ctx, 31, 0x1691ECu);
    ctx->pc = 0x1691E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1691E4u;
            // 0x1691e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1691ECu; }
        if (ctx->pc != 0x1691ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1691ECu; }
        if (ctx->pc != 0x1691ECu) { return; }
    }
    ctx->pc = 0x1691ECu;
label_1691ec:
    // 0x1691ec: 0xc05a484  jal         func_169210
    ctx->pc = 0x1691ECu;
    SET_GPR_U32(ctx, 31, 0x1691F4u);
    ctx->pc = 0x1691F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1691ECu;
            // 0x1691f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169210u;
    if (runtime->hasFunction(0x169210u)) {
        auto targetFn = runtime->lookupFunction(0x169210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1691F4u; }
        if (ctx->pc != 0x1691F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169210_0x169210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1691F4u; }
        if (ctx->pc != 0x1691F4u) { return; }
    }
    ctx->pc = 0x1691F4u;
label_1691f4:
    // 0x1691f4: 0xc05adca  jal         func_16B728
    ctx->pc = 0x1691F4u;
    SET_GPR_U32(ctx, 31, 0x1691FCu);
    ctx->pc = 0x1691F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1691F4u;
            // 0x1691f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1691FCu; }
        if (ctx->pc != 0x1691FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1691FCu; }
        if (ctx->pc != 0x1691FCu) { return; }
    }
    ctx->pc = 0x1691FCu;
label_1691fc:
    // 0x1691fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1691fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169200: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169208: 0x3e00008  jr          $ra
    ctx->pc = 0x169208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16920Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169208u;
            // 0x16920c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169210u;
}
