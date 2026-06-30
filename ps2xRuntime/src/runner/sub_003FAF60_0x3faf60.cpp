#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FAF60
// Address: 0x3faf60 - 0x3faf80
void sub_003FAF60_0x3faf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FAF60_0x3faf60");
#endif

    ctx->pc = 0x3faf60u;

    // 0x3faf60: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3faf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3faf64: 0x94a30c7e  lhu         $v1, 0xC7E($a1)
    ctx->pc = 0x3faf64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 3198)));
    // 0x3faf68: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3faf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3faf6c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3faf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3faf70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3faf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3faf74: 0x3e00008  jr          $ra
    ctx->pc = 0x3FAF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FAF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAF74u;
            // 0x3faf78: 0x9042002a  lbu         $v0, 0x2A($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FAF7Cu;
    // 0x3faf7c: 0x0  nop
    ctx->pc = 0x3faf7cu;
    // NOP
}
