#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E888
// Address: 0x16e888 - 0x16e908
void sub_0016E888_0x16e888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E888_0x16e888");
#endif

    ctx->pc = 0x16e888u;

    // 0x16e888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e88c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e890: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x16e890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16e894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e898: 0x8060d6c  j           func_1835B0
    ctx->pc = 0x16E898u;
    ctx->pc = 0x16E89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E898u;
            // 0x16e89c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1835B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1835B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E8A0u;
    // 0x16e8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e8ac: 0x8060dbc  j           func_1836F0
    ctx->pc = 0x16E8ACu;
    ctx->pc = 0x16E8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E8ACu;
            // 0x16e8b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1836F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1836F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E8B4u;
    // 0x16e8b4: 0x0  nop
    ctx->pc = 0x16e8b4u;
    // NOP
    // 0x16e8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e8bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e8c4: 0x8060de0  j           func_183780
    ctx->pc = 0x16E8C4u;
    ctx->pc = 0x16E8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E8C4u;
            // 0x16e8c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183780u;
    {
        auto targetFn = runtime->lookupFunction(0x183780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E8CCu;
    // 0x16e8cc: 0x0  nop
    ctx->pc = 0x16e8ccu;
    // NOP
    // 0x16e8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e8d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e8dc: 0x8060e02  j           func_183808
    ctx->pc = 0x16E8DCu;
    ctx->pc = 0x16E8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E8DCu;
            // 0x16e8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183808u;
    {
        auto targetFn = runtime->lookupFunction(0x183808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E8E4u;
    // 0x16e8e4: 0x0  nop
    ctx->pc = 0x16e8e4u;
    // NOP
    // 0x16e8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e8ec: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x16e8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x16e8f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e8f4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x16e8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x16e8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e8fc: 0x8060e0c  j           func_183830
    ctx->pc = 0x16E8FCu;
    ctx->pc = 0x16E900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E8FCu;
            // 0x16e900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183830u;
    {
        auto targetFn = runtime->lookupFunction(0x183830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E904u;
    // 0x16e904: 0x0  nop
    ctx->pc = 0x16e904u;
    // NOP
}
