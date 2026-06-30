#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5C40
// Address: 0x1b5c40 - 0x1b5c88
void sub_001B5C40_0x1b5c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5C40_0x1b5c40");
#endif

    ctx->pc = 0x1b5c40u;

    // 0x1b5c40: 0x24851fa0  addiu       $a1, $a0, 0x1FA0
    ctx->pc = 0x1b5c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8096));
    // 0x1b5c44: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b5c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5c48: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1b5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1b5c4c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b5c50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b5c54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b5c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b5c5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b5c60: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b5c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b5c64: 0x8c8313d0  lw          $v1, 0x13D0($a0)
    ctx->pc = 0x1b5c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5072)));
    // 0x1b5c68: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b5c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b5c70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b5c74: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b5c78: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1b5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1b5c7c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b5c7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b5c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C80u;
            // 0x1b5c84: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5C88u;
}
