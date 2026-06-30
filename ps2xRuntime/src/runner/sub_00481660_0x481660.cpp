#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481660
// Address: 0x481660 - 0x4816c0
void sub_00481660_0x481660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481660_0x481660");
#endif

    ctx->pc = 0x481660u;

    // 0x481660: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x481660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x481664: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x481664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x481668: 0xc1082b  sltu        $at, $a2, $at
    ctx->pc = 0x481668u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x48166c: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x48166Cu;
    {
        const bool branch_taken_0x48166c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48166c) {
            ctx->pc = 0x481670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48166Cu;
            // 0x481670: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x481680u;
            goto label_481680;
        }
    }
    ctx->pc = 0x481674u;
    // 0x481674: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x481674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x481678: 0x34468d7f  ori         $a2, $v0, 0x8D7F
    ctx->pc = 0x481678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36223);
    // 0x48167c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x48167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_481680:
    // 0x481680: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x481680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x481684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x481684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x481688: 0x24640148  addiu       $a0, $v1, 0x148
    ctx->pc = 0x481688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x48168c: 0x8c630148  lw          $v1, 0x148($v1)
    ctx->pc = 0x48168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x481690: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x481690u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x481694: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x481694u;
    {
        const bool branch_taken_0x481694 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x481698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481694u;
            // 0x481698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481694) {
            ctx->pc = 0x4816A4u;
            goto label_4816a4;
        }
    }
    ctx->pc = 0x48169Cu;
    // 0x48169c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x48169Cu;
    {
        const bool branch_taken_0x48169c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48169c) {
            ctx->pc = 0x4816ACu;
            goto label_4816ac;
        }
    }
    ctx->pc = 0x4816A4u;
label_4816a4:
    // 0x4816a4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4816a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4816a8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x4816a8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4816ac:
    // 0x4816ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4816ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4816B4u;
    // 0x4816b4: 0x0  nop
    ctx->pc = 0x4816b4u;
    // NOP
    // 0x4816b8: 0x0  nop
    ctx->pc = 0x4816b8u;
    // NOP
    // 0x4816bc: 0x0  nop
    ctx->pc = 0x4816bcu;
    // NOP
}
