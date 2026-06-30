#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6B78
// Address: 0x1b6b78 - 0x1b6bb8
void sub_001B6B78_0x1b6b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6B78_0x1b6b78");
#endif

    switch (ctx->pc) {
        case 0x1b6b8cu: goto label_1b6b8c;
        case 0x1b6ba0u: goto label_1b6ba0;
        default: break;
    }

    ctx->pc = 0x1b6b78u;

    // 0x1b6b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6b7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6b80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6b84: 0xc06daee  jal         func_1B6BB8
    ctx->pc = 0x1B6B84u;
    SET_GPR_U32(ctx, 31, 0x1B6B8Cu);
    ctx->pc = 0x1B6B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B84u;
            // 0x1b6b88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BB8u;
    if (runtime->hasFunction(0x1B6BB8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B8Cu; }
        if (ctx->pc != 0x1B6B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6BB8_0x1b6bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B8Cu; }
        if (ctx->pc != 0x1B6B8Cu) { return; }
    }
    ctx->pc = 0x1B6B8Cu;
label_1b6b8c:
    // 0x1b6b8c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b6b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b6b90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6B90u;
    {
        const bool branch_taken_0x1b6b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B90u;
            // 0x1b6b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b90) {
            ctx->pc = 0x1B6BA4u;
            goto label_1b6ba4;
        }
    }
    ctx->pc = 0x1B6B98u;
    // 0x1b6b98: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B6B98u;
    SET_GPR_U32(ctx, 31, 0x1B6BA0u);
    ctx->pc = 0x1B6B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B98u;
            // 0x1b6b9c: 0x34a50222  ori         $a1, $a1, 0x222 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)546);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BA0u; }
        if (ctx->pc != 0x1B6BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BA0u; }
        if (ctx->pc != 0x1B6BA0u) { return; }
    }
    ctx->pc = 0x1B6BA0u;
label_1b6ba0:
    // 0x1b6ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6ba4:
    // 0x1b6ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6ba8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BACu;
            // 0x1b6bb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6BB4u;
    // 0x1b6bb4: 0x0  nop
    ctx->pc = 0x1b6bb4u;
    // NOP
}
