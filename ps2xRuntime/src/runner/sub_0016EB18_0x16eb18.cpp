#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EB18
// Address: 0x16eb18 - 0x16eba8
void sub_0016EB18_0x16eb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EB18_0x16eb18");
#endif

    ctx->pc = 0x16eb18u;

    // 0x16eb18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16eb1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16eb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16eb20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16eb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb24: 0x8061170  j           func_1845C0
    ctx->pc = 0x16EB24u;
    ctx->pc = 0x16EB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB24u;
            // 0x16eb28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1845C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1845C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EB2Cu;
    // 0x16eb2c: 0x0  nop
    ctx->pc = 0x16eb2cu;
    // NOP
    // 0x16eb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16eb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16eb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16eb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb3c: 0x8061196  j           func_184658
    ctx->pc = 0x16EB3Cu;
    ctx->pc = 0x16EB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB3Cu;
            // 0x16eb40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184658u;
    {
        auto targetFn = runtime->lookupFunction(0x184658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EB44u;
    // 0x16eb44: 0x0  nop
    ctx->pc = 0x16eb44u;
    // NOP
    // 0x16eb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16eb4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16eb50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16eb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb54: 0x80611a2  j           func_184688
    ctx->pc = 0x16EB54u;
    ctx->pc = 0x16EB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB54u;
            // 0x16eb58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184688u;
    {
        auto targetFn = runtime->lookupFunction(0x184688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EB5Cu;
    // 0x16eb5c: 0x0  nop
    ctx->pc = 0x16eb5cu;
    // NOP
    // 0x16eb60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16eb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16eb68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16eb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb6c: 0x80611ae  j           func_1846B8
    ctx->pc = 0x16EB6Cu;
    ctx->pc = 0x16EB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB6Cu;
            // 0x16eb70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1846B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1846B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EB74u;
    // 0x16eb74: 0x0  nop
    ctx->pc = 0x16eb74u;
    // NOP
    // 0x16eb78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16eb7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16eb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16eb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb84: 0x80611bc  j           func_1846F0
    ctx->pc = 0x16EB84u;
    ctx->pc = 0x16EB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB84u;
            // 0x16eb88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1846F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1846F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EB8Cu;
    // 0x16eb8c: 0x0  nop
    ctx->pc = 0x16eb8cu;
    // NOP
    // 0x16eb90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16eb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16eb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16eb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb9c: 0x80611c8  j           func_184720
    ctx->pc = 0x16EB9Cu;
    ctx->pc = 0x16EBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB9Cu;
            // 0x16eba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184720u;
    {
        auto targetFn = runtime->lookupFunction(0x184720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EBA4u;
    // 0x16eba4: 0x0  nop
    ctx->pc = 0x16eba4u;
    // NOP
}
