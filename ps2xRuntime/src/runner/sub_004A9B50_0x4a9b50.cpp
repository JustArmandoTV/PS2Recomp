#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9B50
// Address: 0x4a9b50 - 0x4a9b90
void sub_004A9B50_0x4a9b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9B50_0x4a9b50");
#endif

    ctx->pc = 0x4a9b50u;

    // 0x4a9b50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a9b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a9b54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4a9b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9b58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a9b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a9b5c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4a9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4a9b60: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4a9b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x4a9b64: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4a9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4a9b68: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x4a9b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x4a9b6c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x4a9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a9b70: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4a9b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x4a9b74: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x4a9b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4a9b78: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4a9b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4a9b7c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4a9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4a9b80: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9B80u;
            // 0x4a9b84: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9B88u;
    // 0x4a9b88: 0x0  nop
    ctx->pc = 0x4a9b88u;
    // NOP
    // 0x4a9b8c: 0x0  nop
    ctx->pc = 0x4a9b8cu;
    // NOP
}
