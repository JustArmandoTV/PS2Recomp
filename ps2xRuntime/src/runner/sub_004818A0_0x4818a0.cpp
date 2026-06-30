#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004818A0
// Address: 0x4818a0 - 0x481900
void sub_004818A0_0x4818a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004818A0_0x4818a0");
#endif

    ctx->pc = 0x4818a0u;

    // 0x4818a0: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x4818a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x4818a4: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x4818a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x4818a8: 0xc1082b  sltu        $at, $a2, $at
    ctx->pc = 0x4818a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4818ac: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4818ACu;
    {
        const bool branch_taken_0x4818ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4818ac) {
            ctx->pc = 0x4818B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4818ACu;
            // 0x4818b0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4818C0u;
            goto label_4818c0;
        }
    }
    ctx->pc = 0x4818B4u;
    // 0x4818b4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x4818b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x4818b8: 0x34468d7f  ori         $a2, $v0, 0x8D7F
    ctx->pc = 0x4818b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36223);
    // 0x4818bc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4818bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4818c0:
    // 0x4818c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4818c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4818c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4818c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4818c8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x4818c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4818cc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4818ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4818d0: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x4818d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4818d4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4818D4u;
    {
        const bool branch_taken_0x4818d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4818D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4818D4u;
            // 0x4818d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4818d4) {
            ctx->pc = 0x4818E4u;
            goto label_4818e4;
        }
    }
    ctx->pc = 0x4818DCu;
    // 0x4818dc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4818DCu;
    {
        const bool branch_taken_0x4818dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4818dc) {
            ctx->pc = 0x4818ECu;
            goto label_4818ec;
        }
    }
    ctx->pc = 0x4818E4u;
label_4818e4:
    // 0x4818e4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4818e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4818e8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x4818e8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4818ec:
    // 0x4818ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4818ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4818F4u;
    // 0x4818f4: 0x0  nop
    ctx->pc = 0x4818f4u;
    // NOP
    // 0x4818f8: 0x0  nop
    ctx->pc = 0x4818f8u;
    // NOP
    // 0x4818fc: 0x0  nop
    ctx->pc = 0x4818fcu;
    // NOP
}
