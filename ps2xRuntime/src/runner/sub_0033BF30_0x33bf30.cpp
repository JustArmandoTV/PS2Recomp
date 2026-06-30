#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BF30
// Address: 0x33bf30 - 0x33bf60
void sub_0033BF30_0x33bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BF30_0x33bf30");
#endif

    ctx->pc = 0x33bf30u;

    // 0x33bf30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bf34: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x33bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x33bf38: 0x802827  not         $a1, $a0
    ctx->pc = 0x33bf38u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x33bf3c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x33bf40: 0x90646080  lbu         $a0, 0x6080($v1)
    ctx->pc = 0x33bf40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24704)));
    // 0x33bf44: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x33bf44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x33bf48: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x33bf4c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x33bf4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x33bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x33BF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BF50u;
            // 0x33bf54: 0xa0646080  sb          $a0, 0x6080($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BF58u;
    // 0x33bf58: 0x0  nop
    ctx->pc = 0x33bf58u;
    // NOP
    // 0x33bf5c: 0x0  nop
    ctx->pc = 0x33bf5cu;
    // NOP
}
