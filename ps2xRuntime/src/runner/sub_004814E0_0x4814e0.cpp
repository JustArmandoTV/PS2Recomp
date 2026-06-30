#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004814E0
// Address: 0x4814e0 - 0x481540
void sub_004814E0_0x4814e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004814E0_0x4814e0");
#endif

    ctx->pc = 0x4814e0u;

    // 0x4814e0: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x4814e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x4814e4: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x4814e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x4814e8: 0xc1082b  sltu        $at, $a2, $at
    ctx->pc = 0x4814e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4814ec: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4814ECu;
    {
        const bool branch_taken_0x4814ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4814ec) {
            ctx->pc = 0x4814F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4814ECu;
            // 0x4814f0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x481500u;
            goto label_481500;
        }
    }
    ctx->pc = 0x4814F4u;
    // 0x4814f4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x4814f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x4814f8: 0x34468d7f  ori         $a2, $v0, 0x8D7F
    ctx->pc = 0x4814f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36223);
    // 0x4814fc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4814fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_481500:
    // 0x481500: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x481500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x481504: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x481504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x481508: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x481508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x48150c: 0x24640408  addiu       $a0, $v1, 0x408
    ctx->pc = 0x48150cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1032));
    // 0x481510: 0x8c630408  lw          $v1, 0x408($v1)
    ctx->pc = 0x481510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1032)));
    // 0x481514: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x481514u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x481518: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x481518u;
    {
        const bool branch_taken_0x481518 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x48151Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481518u;
            // 0x48151c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481518) {
            ctx->pc = 0x481528u;
            goto label_481528;
        }
    }
    ctx->pc = 0x481520u;
    // 0x481520: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x481520u;
    {
        const bool branch_taken_0x481520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x481520) {
            ctx->pc = 0x481530u;
            goto label_481530;
        }
    }
    ctx->pc = 0x481528u;
label_481528:
    // 0x481528: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x481528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x48152c: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x48152cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_481530:
    // 0x481530: 0x3e00008  jr          $ra
    ctx->pc = 0x481530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481538u;
    // 0x481538: 0x0  nop
    ctx->pc = 0x481538u;
    // NOP
    // 0x48153c: 0x0  nop
    ctx->pc = 0x48153cu;
    // NOP
}
