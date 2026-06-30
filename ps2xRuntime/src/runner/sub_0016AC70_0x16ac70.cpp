#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AC70
// Address: 0x16ac70 - 0x16aca8
void sub_0016AC70_0x16ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AC70_0x16ac70");
#endif

    switch (ctx->pc) {
        case 0x16ac84u: goto label_16ac84;
        case 0x16ac8cu: goto label_16ac8c;
        case 0x16ac94u: goto label_16ac94;
        default: break;
    }

    ctx->pc = 0x16ac70u;

    // 0x16ac70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ac74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ac78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16ac7c: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16AC7Cu;
    SET_GPR_U32(ctx, 31, 0x16AC84u);
    ctx->pc = 0x16AC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC7Cu;
            // 0x16ac80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC84u; }
        if (ctx->pc != 0x16AC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC84u; }
        if (ctx->pc != 0x16AC84u) { return; }
    }
    ctx->pc = 0x16AC84u;
label_16ac84:
    // 0x16ac84: 0xc05ab2a  jal         func_16ACA8
    ctx->pc = 0x16AC84u;
    SET_GPR_U32(ctx, 31, 0x16AC8Cu);
    ctx->pc = 0x16AC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC84u;
            // 0x16ac88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ACA8u;
    if (runtime->hasFunction(0x16ACA8u)) {
        auto targetFn = runtime->lookupFunction(0x16ACA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC8Cu; }
        if (ctx->pc != 0x16AC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ACA8_0x16aca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC8Cu; }
        if (ctx->pc != 0x16AC8Cu) { return; }
    }
    ctx->pc = 0x16AC8Cu;
label_16ac8c:
    // 0x16ac8c: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16AC8Cu;
    SET_GPR_U32(ctx, 31, 0x16AC94u);
    ctx->pc = 0x16AC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC8Cu;
            // 0x16ac90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC94u; }
        if (ctx->pc != 0x16AC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC94u; }
        if (ctx->pc != 0x16AC94u) { return; }
    }
    ctx->pc = 0x16AC94u;
label_16ac94:
    // 0x16ac94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ac94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ac98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16ac98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ac9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aca0: 0x3e00008  jr          $ra
    ctx->pc = 0x16ACA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ACA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACA0u;
            // 0x16aca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16ACA8u;
}
