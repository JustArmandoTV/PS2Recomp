#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034CD60
// Address: 0x34cd60 - 0x34cd80
void sub_0034CD60_0x34cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CD60_0x34cd60");
#endif

    ctx->pc = 0x34cd60u;

    // 0x34cd60: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34cd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34cd64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x34cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34cd68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34cd6c: 0x24427578  addiu       $v0, $v0, 0x7578
    ctx->pc = 0x34cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30072));
    // 0x34cd70: 0x3e00008  jr          $ra
    ctx->pc = 0x34CD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CD70u;
            // 0x34cd74: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34CD78u;
    // 0x34cd78: 0x0  nop
    ctx->pc = 0x34cd78u;
    // NOP
    // 0x34cd7c: 0x0  nop
    ctx->pc = 0x34cd7cu;
    // NOP
}
