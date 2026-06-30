#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B380
// Address: 0x15b380 - 0x15b3c0
void sub_0015B380_0x15b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B380_0x15b380");
#endif

    ctx->pc = 0x15b380u;

    // 0x15b380: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x15b380u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b384: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15b384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b388: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x15b388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x15b38c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x15b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x15b390: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x15b390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b394: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x15b394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x15b398: 0xace30030  sw          $v1, 0x30($a3)
    ctx->pc = 0x15b398u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 3));
    // 0x15b39c: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x15b39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x15b3a0: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x15b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x15b3a4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x15b3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x15b3a8: 0xace60044  sw          $a2, 0x44($a3)
    ctx->pc = 0x15b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 6));
    // 0x15b3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x15B3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3ACu;
            // 0x15b3b0: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B3B4u;
    // 0x15b3b4: 0x0  nop
    ctx->pc = 0x15b3b4u;
    // NOP
    // 0x15b3b8: 0x0  nop
    ctx->pc = 0x15b3b8u;
    // NOP
    // 0x15b3bc: 0x0  nop
    ctx->pc = 0x15b3bcu;
    // NOP
}
