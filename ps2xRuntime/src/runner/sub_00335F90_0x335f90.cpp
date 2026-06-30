#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00335F90
// Address: 0x335f90 - 0x335fc0
void sub_00335F90_0x335f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335F90_0x335f90");
#endif

    ctx->pc = 0x335f90u;

    // 0x335f90: 0x90840058  lbu         $a0, 0x58($a0)
    ctx->pc = 0x335f90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x335f94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x335f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x335f98: 0x24429764  addiu       $v0, $v0, -0x689C
    ctx->pc = 0x335f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940516));
    // 0x335f9c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x335f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x335fa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x335fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x335fa4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x335fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x335fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x335fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335fac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x335facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335fb0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x335fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x335fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x335FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335FB4u;
            // 0x335fb8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x335FBCu;
    // 0x335fbc: 0x0  nop
    ctx->pc = 0x335fbcu;
    // NOP
}
