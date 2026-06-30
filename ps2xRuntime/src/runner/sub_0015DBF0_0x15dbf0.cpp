#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015DBF0
// Address: 0x15dbf0 - 0x15dc40
void sub_0015DBF0_0x15dbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DBF0_0x15dbf0");
#endif

    ctx->pc = 0x15dbf0u;

    // 0x15dbf0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15dbf4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x15dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15dbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x15DBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBF8u;
            // 0x15dbfc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DC00u;
    // 0x15dc00: 0x805768c  j           func_15DA30
    ctx->pc = 0x15DC00u;
    ctx->pc = 0x15DC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC00u;
            // 0x15dc04: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DA30u;
    {
        auto targetFn = runtime->lookupFunction(0x15DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15DC08u;
    // 0x15dc08: 0x0  nop
    ctx->pc = 0x15dc08u;
    // NOP
    // 0x15dc0c: 0x0  nop
    ctx->pc = 0x15dc0cu;
    // NOP
    // 0x15dc10: 0x80575d8  j           func_15D760
    ctx->pc = 0x15DC10u;
    ctx->pc = 0x15DC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC10u;
            // 0x15dc14: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D760u;
    {
        auto targetFn = runtime->lookupFunction(0x15D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15DC18u;
    // 0x15dc18: 0x0  nop
    ctx->pc = 0x15dc18u;
    // NOP
    // 0x15dc1c: 0x0  nop
    ctx->pc = 0x15dc1cu;
    // NOP
    // 0x15dc20: 0x80576b4  j           func_15DAD0
    ctx->pc = 0x15DC20u;
    ctx->pc = 0x15DC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC20u;
            // 0x15dc24: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DAD0u;
    {
        auto targetFn = runtime->lookupFunction(0x15DAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15DC28u;
    // 0x15dc28: 0x0  nop
    ctx->pc = 0x15dc28u;
    // NOP
    // 0x15dc2c: 0x0  nop
    ctx->pc = 0x15dc2cu;
    // NOP
    // 0x15dc30: 0x804037c  j           func_100DF0
    ctx->pc = 0x15DC30u;
    ctx->pc = 0x15DC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC30u;
            // 0x15dc34: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100DF0u;
    {
        auto targetFn = runtime->lookupFunction(0x100DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15DC38u;
    // 0x15dc38: 0x805772c  j           func_15DCB0
    ctx->pc = 0x15DC38u;
    ctx->pc = 0x15DCB0u;
    if (runtime->hasFunction(0x15DCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DCB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015DCB0_0x15dcb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15DC40u;
}
