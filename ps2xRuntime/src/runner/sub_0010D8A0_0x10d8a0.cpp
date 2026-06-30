#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D8A0
// Address: 0x10d8a0 - 0x10d8e0
void sub_0010D8A0_0x10d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D8A0_0x10d8a0");
#endif

    ctx->pc = 0x10d8a0u;

    // 0x10d8a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10d8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d8a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10d8a8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x10d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x10d8ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10d8b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10d8b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10d8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10d8b8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x10d8bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x10d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10d8c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10d8c4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D8C4u;
    {
        const bool branch_taken_0x10d8c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10D8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D8C4u;
            // 0x10d8c8: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8c4) {
            ctx->pc = 0x10D8D4u;
            goto label_10d8d4;
        }
    }
    ctx->pc = 0x10D8CCu;
    // 0x10d8cc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x10d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x10d8d0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x10d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_10d8d4:
    // 0x10d8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10D8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D8DCu;
    // 0x10d8dc: 0x0  nop
    ctx->pc = 0x10d8dcu;
    // NOP
}
