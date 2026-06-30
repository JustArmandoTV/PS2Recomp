#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B120
// Address: 0x51b120 - 0x51b150
void sub_0051B120_0x51b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B120_0x51b120");
#endif

    ctx->pc = 0x51b120u;

    // 0x51b120: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x51b120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x51b124: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x51b124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x51b128: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51b128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51b12c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x51b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x51b130: 0x24429768  addiu       $v0, $v0, -0x6898
    ctx->pc = 0x51b130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940520));
    // 0x51b134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51b134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x51b138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x51b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x51b13c: 0x3e00008  jr          $ra
    ctx->pc = 0x51B13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B13Cu;
            // 0x51b140: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B144u;
    // 0x51b144: 0x0  nop
    ctx->pc = 0x51b144u;
    // NOP
    // 0x51b148: 0x0  nop
    ctx->pc = 0x51b148u;
    // NOP
    // 0x51b14c: 0x0  nop
    ctx->pc = 0x51b14cu;
    // NOP
}
