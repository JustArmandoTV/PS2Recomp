#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AF78
// Address: 0x16af78 - 0x16afb0
void sub_0016AF78_0x16af78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AF78_0x16af78");
#endif

    switch (ctx->pc) {
        case 0x16af8cu: goto label_16af8c;
        case 0x16af94u: goto label_16af94;
        case 0x16af9cu: goto label_16af9c;
        default: break;
    }

    ctx->pc = 0x16af78u;

    // 0x16af78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16af78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16af7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16af7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16af80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16af80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16af84: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16AF84u;
    SET_GPR_U32(ctx, 31, 0x16AF8Cu);
    ctx->pc = 0x16AF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF84u;
            // 0x16af88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF8Cu; }
        if (ctx->pc != 0x16AF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF8Cu; }
        if (ctx->pc != 0x16AF8Cu) { return; }
    }
    ctx->pc = 0x16AF8Cu;
label_16af8c:
    // 0x16af8c: 0xc05abec  jal         func_16AFB0
    ctx->pc = 0x16AF8Cu;
    SET_GPR_U32(ctx, 31, 0x16AF94u);
    ctx->pc = 0x16AF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF8Cu;
            // 0x16af90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AFB0u;
    if (runtime->hasFunction(0x16AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x16AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF94u; }
        if (ctx->pc != 0x16AF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AFB0_0x16afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF94u; }
        if (ctx->pc != 0x16AF94u) { return; }
    }
    ctx->pc = 0x16AF94u;
label_16af94:
    // 0x16af94: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16AF94u;
    SET_GPR_U32(ctx, 31, 0x16AF9Cu);
    ctx->pc = 0x16AF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF94u;
            // 0x16af98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF9Cu; }
        if (ctx->pc != 0x16AF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF9Cu; }
        if (ctx->pc != 0x16AF9Cu) { return; }
    }
    ctx->pc = 0x16AF9Cu;
label_16af9c:
    // 0x16af9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16af9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16afa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16afa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16afa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16afa8: 0x3e00008  jr          $ra
    ctx->pc = 0x16AFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFA8u;
            // 0x16afac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AFB0u;
}
