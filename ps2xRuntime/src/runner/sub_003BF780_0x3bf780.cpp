#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF780
// Address: 0x3bf780 - 0x3bf7b0
void sub_003BF780_0x3bf780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF780_0x3bf780");
#endif

    ctx->pc = 0x3bf780u;

    // 0x3bf780: 0x80830112  lb          $v1, 0x112($a0)
    ctx->pc = 0x3bf780u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 274)));
    // 0x3bf784: 0x8082010f  lb          $v0, 0x10F($a0)
    ctx->pc = 0x3bf784u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
    // 0x3bf788: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bf788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3bf78c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bf78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bf790: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bf790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bf794: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x3bf794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x3bf798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bf798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bf79c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF79Cu;
            // 0x3bf7a0: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF7A4u;
    // 0x3bf7a4: 0x0  nop
    ctx->pc = 0x3bf7a4u;
    // NOP
    // 0x3bf7a8: 0x0  nop
    ctx->pc = 0x3bf7a8u;
    // NOP
    // 0x3bf7ac: 0x0  nop
    ctx->pc = 0x3bf7acu;
    // NOP
}
