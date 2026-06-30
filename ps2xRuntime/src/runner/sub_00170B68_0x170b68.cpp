#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170B68
// Address: 0x170b68 - 0x170b88
void sub_00170B68_0x170b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170B68_0x170b68");
#endif

    ctx->pc = 0x170b68u;

    // 0x170b68: 0xdc820048  ld          $v0, 0x48($a0)
    ctx->pc = 0x170b68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x170b6c: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x170b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x170b70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x170b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x170b74: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x170b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x170b78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x170b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x170b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x170B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B7Cu;
            // 0x170b80: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170B84u;
    // 0x170b84: 0x0  nop
    ctx->pc = 0x170b84u;
    // NOP
}
