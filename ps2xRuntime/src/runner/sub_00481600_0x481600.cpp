#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481600
// Address: 0x481600 - 0x481660
void sub_00481600_0x481600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481600_0x481600");
#endif

    ctx->pc = 0x481600u;

    // 0x481600: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x481600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x481604: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x481604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x481608: 0xc1082b  sltu        $at, $a2, $at
    ctx->pc = 0x481608u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x48160c: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x48160Cu;
    {
        const bool branch_taken_0x48160c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48160c) {
            ctx->pc = 0x481610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48160Cu;
            // 0x481610: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x481620u;
            goto label_481620;
        }
    }
    ctx->pc = 0x481614u;
    // 0x481614: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x481614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x481618: 0x34468d7f  ori         $a2, $v0, 0x8D7F
    ctx->pc = 0x481618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36223);
    // 0x48161c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x48161cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_481620:
    // 0x481620: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x481620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x481624: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x481624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x481628: 0x24640188  addiu       $a0, $v1, 0x188
    ctx->pc = 0x481628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 392));
    // 0x48162c: 0x8c630188  lw          $v1, 0x188($v1)
    ctx->pc = 0x48162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x481630: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x481630u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x481634: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x481634u;
    {
        const bool branch_taken_0x481634 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x481638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481634u;
            // 0x481638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481634) {
            ctx->pc = 0x481644u;
            goto label_481644;
        }
    }
    ctx->pc = 0x48163Cu;
    // 0x48163c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x48163Cu;
    {
        const bool branch_taken_0x48163c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48163c) {
            ctx->pc = 0x48164Cu;
            goto label_48164c;
        }
    }
    ctx->pc = 0x481644u;
label_481644:
    // 0x481644: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x481644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x481648: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x481648u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_48164c:
    // 0x48164c: 0x3e00008  jr          $ra
    ctx->pc = 0x48164Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481654u;
    // 0x481654: 0x0  nop
    ctx->pc = 0x481654u;
    // NOP
    // 0x481658: 0x0  nop
    ctx->pc = 0x481658u;
    // NOP
    // 0x48165c: 0x0  nop
    ctx->pc = 0x48165cu;
    // NOP
}
