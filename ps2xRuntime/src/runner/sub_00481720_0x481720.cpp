#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481720
// Address: 0x481720 - 0x481780
void sub_00481720_0x481720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481720_0x481720");
#endif

    ctx->pc = 0x481720u;

    // 0x481720: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x481720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x481724: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x481724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x481728: 0xe1082b  sltu        $at, $a3, $at
    ctx->pc = 0x481728u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x48172c: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x48172Cu;
    {
        const bool branch_taken_0x48172c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48172c) {
            ctx->pc = 0x481730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48172Cu;
            // 0x481730: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x481740u;
            goto label_481740;
        }
    }
    ctx->pc = 0x481734u;
    // 0x481734: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x481734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x481738: 0x34478d7f  ori         $a3, $v0, 0x8D7F
    ctx->pc = 0x481738u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36223);
    // 0x48173c: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x48173cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_481740:
    // 0x481740: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x481740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x481744: 0x62180  sll         $a0, $a2, 6
    ctx->pc = 0x481744u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x481748: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x481748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x48174c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x481750: 0x2464051c  addiu       $a0, $v1, 0x51C
    ctx->pc = 0x481750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1308));
    // 0x481754: 0x8c63051c  lw          $v1, 0x51C($v1)
    ctx->pc = 0x481754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1308)));
    // 0x481758: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x481758u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x48175c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x48175Cu;
    {
        const bool branch_taken_0x48175c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x481760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48175Cu;
            // 0x481760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48175c) {
            ctx->pc = 0x48176Cu;
            goto label_48176c;
        }
    }
    ctx->pc = 0x481764u;
    // 0x481764: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x481764u;
    {
        const bool branch_taken_0x481764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x481764) {
            ctx->pc = 0x481774u;
            goto label_481774;
        }
    }
    ctx->pc = 0x48176Cu;
label_48176c:
    // 0x48176c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x48176cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x481770: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x481770u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_481774:
    // 0x481774: 0x3e00008  jr          $ra
    ctx->pc = 0x481774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48177Cu;
    // 0x48177c: 0x0  nop
    ctx->pc = 0x48177cu;
    // NOP
}
