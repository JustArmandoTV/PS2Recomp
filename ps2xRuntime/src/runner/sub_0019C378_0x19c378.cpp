#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C378
// Address: 0x19c378 - 0x19c3e0
void sub_0019C378_0x19c378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C378_0x19c378");
#endif

    ctx->pc = 0x19c378u;

    // 0x19c378: 0x8c8801d0  lw          $t0, 0x1D0($a0)
    ctx->pc = 0x19c378u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x19c37c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19c37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c380: 0x248304f8  addiu       $v1, $a0, 0x4F8
    ctx->pc = 0x19c380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1272));
    // 0x19c384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c388: 0x15060013  bne         $t0, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x19C388u;
    {
        const bool branch_taken_0x19c388 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x19C38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C388u;
            // 0x19c38c: 0x2487051c  addiu       $a3, $a0, 0x51C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c388) {
            ctx->pc = 0x19C3D8u;
            goto label_19c3d8;
        }
    }
    ctx->pc = 0x19C390u;
    // 0x19c390: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c394: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C394u;
    {
        const bool branch_taken_0x19c394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x19C398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C394u;
            // 0x19c398: 0x8ce50000  lw          $a1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c394) {
            ctx->pc = 0x19C3B4u;
            goto label_19c3b4;
        }
    }
    ctx->pc = 0x19C39Cu;
    // 0x19c39c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x19c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x19c3a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19c3a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19c3a8: 0x8c4301d4  lw          $v1, 0x1D4($v0)
    ctx->pc = 0x19c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
    // 0x19c3ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x19c3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x19c3b0: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x19c3b0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_19c3b4:
    // 0x19c3b4: 0x54a80008  bnel        $a1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C3B4u;
    {
        const bool branch_taken_0x19c3b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x19c3b4) {
            ctx->pc = 0x19C3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3B4u;
            // 0x19c3b8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C3D8u;
            goto label_19c3d8;
        }
    }
    ctx->pc = 0x19C3BCu;
    // 0x19c3bc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x19c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x19c3c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19c3c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19c3c8: 0x8c4301d4  lw          $v1, 0x1D4($v0)
    ctx->pc = 0x19c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
    // 0x19c3cc: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x19c3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x19c3d0: 0x3300a  movz        $a2, $zero, $v1
    ctx->pc = 0x19c3d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x19c3d4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19c3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19c3d8:
    // 0x19c3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C3E0u;
}
