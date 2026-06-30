#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B5D0
// Address: 0x17b5d0 - 0x17b608
void sub_0017B5D0_0x17b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B5D0_0x17b5d0");
#endif

    ctx->pc = 0x17b5d0u;

    // 0x17b5d0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b5d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b5d8: 0x8c4343fc  lw          $v1, 0x43FC($v0)
    ctx->pc = 0x17b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17404)));
    // 0x17b5dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b5e0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B5E0u;
    {
        const bool branch_taken_0x17b5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x17B5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5E0u;
            // 0x17b5e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5e0) {
            ctx->pc = 0x17B5F8u;
            goto label_17b5f8;
        }
    }
    ctx->pc = 0x17B5E8u;
    // 0x17b5e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5ec: 0x8061f8c  j           func_187E30
    ctx->pc = 0x17B5ECu;
    ctx->pc = 0x17B5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5ECu;
            // 0x17b5f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E30u;
    if (runtime->hasFunction(0x187E30u)) {
        auto targetFn = runtime->lookupFunction(0x187E30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187E30_0x187e30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17B5F4u;
    // 0x17b5f4: 0x0  nop
    ctx->pc = 0x17b5f4u;
    // NOP
label_17b5f8:
    // 0x17b5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17B5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5FCu;
            // 0x17b600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B604u;
    // 0x17b604: 0x0  nop
    ctx->pc = 0x17b604u;
    // NOP
}
