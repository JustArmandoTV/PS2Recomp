#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AF10
// Address: 0x16af10 - 0x16af48
void sub_0016AF10_0x16af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AF10_0x16af10");
#endif

    switch (ctx->pc) {
        case 0x16af24u: goto label_16af24;
        case 0x16af2cu: goto label_16af2c;
        case 0x16af34u: goto label_16af34;
        default: break;
    }

    ctx->pc = 0x16af10u;

    // 0x16af10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16af14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16af18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16af1c: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16AF1Cu;
    SET_GPR_U32(ctx, 31, 0x16AF24u);
    ctx->pc = 0x16AF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF1Cu;
            // 0x16af20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF24u; }
        if (ctx->pc != 0x16AF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF24u; }
        if (ctx->pc != 0x16AF24u) { return; }
    }
    ctx->pc = 0x16AF24u;
label_16af24:
    // 0x16af24: 0xc05abd2  jal         func_16AF48
    ctx->pc = 0x16AF24u;
    SET_GPR_U32(ctx, 31, 0x16AF2Cu);
    ctx->pc = 0x16AF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF24u;
            // 0x16af28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AF48u;
    if (runtime->hasFunction(0x16AF48u)) {
        auto targetFn = runtime->lookupFunction(0x16AF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF2Cu; }
        if (ctx->pc != 0x16AF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AF48_0x16af48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF2Cu; }
        if (ctx->pc != 0x16AF2Cu) { return; }
    }
    ctx->pc = 0x16AF2Cu;
label_16af2c:
    // 0x16af2c: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16AF2Cu;
    SET_GPR_U32(ctx, 31, 0x16AF34u);
    ctx->pc = 0x16AF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF2Cu;
            // 0x16af30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF34u; }
        if (ctx->pc != 0x16AF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF34u; }
        if (ctx->pc != 0x16AF34u) { return; }
    }
    ctx->pc = 0x16AF34u;
label_16af34:
    // 0x16af34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16af34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16af38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16af38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16af3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16af40: 0x3e00008  jr          $ra
    ctx->pc = 0x16AF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF40u;
            // 0x16af44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AF48u;
}
