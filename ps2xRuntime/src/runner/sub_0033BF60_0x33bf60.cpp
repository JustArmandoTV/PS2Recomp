#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BF60
// Address: 0x33bf60 - 0x33bf90
void sub_0033BF60_0x33bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BF60_0x33bf60");
#endif

    ctx->pc = 0x33bf60u;

    // 0x33bf60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bf64: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x33bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x33bf68: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x33bf6c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x33bf6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33bf70: 0x90646080  lbu         $a0, 0x6080($v1)
    ctx->pc = 0x33bf70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24704)));
    // 0x33bf74: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x33bf78: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x33bf78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x33bf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x33BF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BF7Cu;
            // 0x33bf80: 0xa0646080  sb          $a0, 0x6080($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BF84u;
    // 0x33bf84: 0x0  nop
    ctx->pc = 0x33bf84u;
    // NOP
    // 0x33bf88: 0x0  nop
    ctx->pc = 0x33bf88u;
    // NOP
    // 0x33bf8c: 0x0  nop
    ctx->pc = 0x33bf8cu;
    // NOP
}
