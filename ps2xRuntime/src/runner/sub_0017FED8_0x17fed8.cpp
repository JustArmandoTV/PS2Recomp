#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FED8
// Address: 0x17fed8 - 0x17ff10
void sub_0017FED8_0x17fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FED8_0x17fed8");
#endif

    switch (ctx->pc) {
        case 0x17feecu: goto label_17feec;
        case 0x17fef4u: goto label_17fef4;
        case 0x17fefcu: goto label_17fefc;
        default: break;
    }

    ctx->pc = 0x17fed8u;

    // 0x17fed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17fed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17fedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17fedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17fee4: 0xc06031a  jal         func_180C68
    ctx->pc = 0x17FEE4u;
    SET_GPR_U32(ctx, 31, 0x17FEECu);
    ctx->pc = 0x17FEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEE4u;
            // 0x17fee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FEECu; }
        if (ctx->pc != 0x17FEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FEECu; }
        if (ctx->pc != 0x17FEECu) { return; }
    }
    ctx->pc = 0x17FEECu;
label_17feec:
    // 0x17feec: 0xc05ffc4  jal         func_17FF10
    ctx->pc = 0x17FEECu;
    SET_GPR_U32(ctx, 31, 0x17FEF4u);
    ctx->pc = 0x17FEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEECu;
            // 0x17fef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FF10u;
    if (runtime->hasFunction(0x17FF10u)) {
        auto targetFn = runtime->lookupFunction(0x17FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FEF4u; }
        if (ctx->pc != 0x17FEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FF10_0x17ff10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FEF4u; }
        if (ctx->pc != 0x17FEF4u) { return; }
    }
    ctx->pc = 0x17FEF4u;
label_17fef4:
    // 0x17fef4: 0xc06031c  jal         func_180C70
    ctx->pc = 0x17FEF4u;
    SET_GPR_U32(ctx, 31, 0x17FEFCu);
    ctx->pc = 0x17FEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEF4u;
            // 0x17fef8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FEFCu; }
        if (ctx->pc != 0x17FEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C70_0x180c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FEFCu; }
        if (ctx->pc != 0x17FEFCu) { return; }
    }
    ctx->pc = 0x17FEFCu;
label_17fefc:
    // 0x17fefc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17fefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ff00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ff00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ff04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ff08: 0x3e00008  jr          $ra
    ctx->pc = 0x17FF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF08u;
            // 0x17ff0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FF10u;
}
