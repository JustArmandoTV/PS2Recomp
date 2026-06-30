#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001960B0
// Address: 0x1960b0 - 0x1960f8
void sub_001960B0_0x1960b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001960B0_0x1960b0");
#endif

    ctx->pc = 0x1960b0u;

    // 0x1960b0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1960b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x1960b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1960b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1960b8: 0x8c62ff28  lw          $v0, -0xD8($v1)
    ctx->pc = 0x1960b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967080)));
    // 0x1960bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1960bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1960c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1960c4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x1960c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x1960c8: 0x24421100  addiu       $v0, $v0, 0x1100
    ctx->pc = 0x1960c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
    // 0x1960cc: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x1960ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
    // 0x1960d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1960d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1960d4: 0x8ca36a64  lw          $v1, 0x6A64($a1)
    ctx->pc = 0x1960d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27236)));
    // 0x1960d8: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x1960d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x1960dc: 0x806583a  j           func_1960E8
    ctx->pc = 0x1960DCu;
    ctx->pc = 0x1960E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1960DCu;
            // 0x1960e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1960E8u;
    goto label_1960e8;
    ctx->pc = 0x1960E4u;
    // 0x1960e4: 0x0  nop
    ctx->pc = 0x1960e4u;
    // NOP
label_1960e8:
    // 0x1960e8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1960e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1960ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1960ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1960F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1960ECu;
            // 0x1960f0: 0xac820110  sw          $v0, 0x110($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1960F4u;
    // 0x1960f4: 0x0  nop
    ctx->pc = 0x1960f4u;
    // NOP
}
