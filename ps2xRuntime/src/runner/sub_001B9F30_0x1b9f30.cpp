#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9F30
// Address: 0x1b9f30 - 0x1b9f78
void sub_001B9F30_0x1b9f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9F30_0x1b9f30");
#endif

    switch (ctx->pc) {
        case 0x1b9f48u: goto label_1b9f48;
        case 0x1b9f60u: goto label_1b9f60;
        default: break;
    }

    ctx->pc = 0x1b9f30u;

    // 0x1b9f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9f34: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b9f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b9f38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9f3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b9f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b9f40: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B9F40u;
    SET_GPR_U32(ctx, 31, 0x1B9F48u);
    ctx->pc = 0x1B9F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F40u;
            // 0x1b9f44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F48u; }
        if (ctx->pc != 0x1B9F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F48u; }
        if (ctx->pc != 0x1B9F48u) { return; }
    }
    ctx->pc = 0x1B9F48u;
label_1b9f48:
    // 0x1b9f48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9F48u;
    {
        const bool branch_taken_0x1b9f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F48u;
            // 0x1b9f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f48) {
            ctx->pc = 0x1B9F58u;
            goto label_1b9f58;
        }
    }
    ctx->pc = 0x1B9F50u;
    // 0x1b9f50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9F50u;
    {
        const bool branch_taken_0x1b9f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F50u;
            // 0x1b9f54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f50) {
            ctx->pc = 0x1B9F64u;
            goto label_1b9f64;
        }
    }
    ctx->pc = 0x1B9F58u;
label_1b9f58:
    // 0x1b9f58: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B9F58u;
    SET_GPR_U32(ctx, 31, 0x1B9F60u);
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F60u; }
        if (ctx->pc != 0x1B9F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F60u; }
        if (ctx->pc != 0x1B9F60u) { return; }
    }
    ctx->pc = 0x1B9F60u;
label_1b9f60:
    // 0x1b9f60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b9f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b9f64:
    // 0x1b9f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b9f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F6Cu;
            // 0x1b9f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9F74u;
    // 0x1b9f74: 0x0  nop
    ctx->pc = 0x1b9f74u;
    // NOP
}
