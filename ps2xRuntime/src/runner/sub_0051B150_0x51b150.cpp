#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B150
// Address: 0x51b150 - 0x51b180
void sub_0051B150_0x51b150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B150_0x51b150");
#endif

    ctx->pc = 0x51b150u;

    // 0x51b150: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x51b150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x51b154: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x51b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x51b158: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51b158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51b15c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x51b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x51b160: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x51b160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
    // 0x51b164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51b164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x51b168: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x51b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x51b16c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x51b16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x51b170: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x51b170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x51b174: 0x3e00008  jr          $ra
    ctx->pc = 0x51B174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B174u;
            // 0x51b178: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B17Cu;
    // 0x51b17c: 0x0  nop
    ctx->pc = 0x51b17cu;
    // NOP
}
