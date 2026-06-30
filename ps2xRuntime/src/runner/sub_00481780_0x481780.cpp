#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481780
// Address: 0x481780 - 0x4817e0
void sub_00481780_0x481780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481780_0x481780");
#endif

    ctx->pc = 0x481780u;

    // 0x481780: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x481780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x481784: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x481784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x481788: 0xc1082b  sltu        $at, $a2, $at
    ctx->pc = 0x481788u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x48178c: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x48178Cu;
    {
        const bool branch_taken_0x48178c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48178c) {
            ctx->pc = 0x481790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48178Cu;
            // 0x481790: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4817A0u;
            goto label_4817a0;
        }
    }
    ctx->pc = 0x481794u;
    // 0x481794: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x481794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x481798: 0x34468d7f  ori         $a2, $v0, 0x8D7F
    ctx->pc = 0x481798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36223);
    // 0x48179c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x48179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4817a0:
    // 0x4817a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4817a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4817a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4817a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4817a8: 0x246400c8  addiu       $a0, $v1, 0xC8
    ctx->pc = 0x4817a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x4817ac: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x4817acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x4817b0: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x4817b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4817b4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4817B4u;
    {
        const bool branch_taken_0x4817b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4817B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4817B4u;
            // 0x4817b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4817b4) {
            ctx->pc = 0x4817C4u;
            goto label_4817c4;
        }
    }
    ctx->pc = 0x4817BCu;
    // 0x4817bc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4817BCu;
    {
        const bool branch_taken_0x4817bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4817bc) {
            ctx->pc = 0x4817CCu;
            goto label_4817cc;
        }
    }
    ctx->pc = 0x4817C4u;
label_4817c4:
    // 0x4817c4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4817c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4817c8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x4817c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4817cc:
    // 0x4817cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4817CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4817D4u;
    // 0x4817d4: 0x0  nop
    ctx->pc = 0x4817d4u;
    // NOP
    // 0x4817d8: 0x0  nop
    ctx->pc = 0x4817d8u;
    // NOP
    // 0x4817dc: 0x0  nop
    ctx->pc = 0x4817dcu;
    // NOP
}
