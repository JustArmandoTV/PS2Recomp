#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175488
// Address: 0x175488 - 0x1754e8
void sub_00175488_0x175488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175488_0x175488");
#endif

    ctx->pc = 0x175488u;

    // 0x175488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17548c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175490: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x175490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x175494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175498: 0x805bbf6  j           func_16EFD8
    ctx->pc = 0x175498u;
    ctx->pc = 0x17549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175498u;
            // 0x17549c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EFD8u;
    if (runtime->hasFunction(0x16EFD8u)) {
        auto targetFn = runtime->lookupFunction(0x16EFD8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016EFD8_0x16efd8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1754A0u;
    // 0x1754a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1754A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1754A8u;
    // 0x1754a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1754A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1754ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1754A8u;
            // 0x1754ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1754B0u;
    // 0x1754b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1754B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1754B8u;
    // 0x1754b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1754B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1754C0u;
    // 0x1754c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1754C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1754C8u;
    // 0x1754c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1754C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1754D0u;
    // 0x1754d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1754d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1754d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1754d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1754d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1754d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1754dc: 0x8059f44  j           func_167D10
    ctx->pc = 0x1754DCu;
    ctx->pc = 0x1754E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1754DCu;
            // 0x1754e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D10u;
    {
        auto targetFn = runtime->lookupFunction(0x167D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1754E4u;
    // 0x1754e4: 0x0  nop
    ctx->pc = 0x1754e4u;
    // NOP
}
