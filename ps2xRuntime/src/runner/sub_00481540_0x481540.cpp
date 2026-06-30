#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481540
// Address: 0x481540 - 0x4815a0
void sub_00481540_0x481540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481540_0x481540");
#endif

    ctx->pc = 0x481540u;

    // 0x481540: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x481540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x481544: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x481544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x481548: 0xe1082b  sltu        $at, $a3, $at
    ctx->pc = 0x481548u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x48154c: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x48154Cu;
    {
        const bool branch_taken_0x48154c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48154c) {
            ctx->pc = 0x481550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48154Cu;
            // 0x481550: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x481560u;
            goto label_481560;
        }
    }
    ctx->pc = 0x481554u;
    // 0x481554: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x481554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x481558: 0x34478d7f  ori         $a3, $v0, 0x8D7F
    ctx->pc = 0x481558u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36223);
    // 0x48155c: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x48155cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_481560:
    // 0x481560: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x481560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x481564: 0x62180  sll         $a0, $a2, 6
    ctx->pc = 0x481564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x481568: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x481568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x48156c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48156cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x481570: 0x246405dc  addiu       $a0, $v1, 0x5DC
    ctx->pc = 0x481570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1500));
    // 0x481574: 0x8c6305dc  lw          $v1, 0x5DC($v1)
    ctx->pc = 0x481574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1500)));
    // 0x481578: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x481578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x48157c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x48157Cu;
    {
        const bool branch_taken_0x48157c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x481580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48157Cu;
            // 0x481580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48157c) {
            ctx->pc = 0x48158Cu;
            goto label_48158c;
        }
    }
    ctx->pc = 0x481584u;
    // 0x481584: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x481584u;
    {
        const bool branch_taken_0x481584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x481584) {
            ctx->pc = 0x481594u;
            goto label_481594;
        }
    }
    ctx->pc = 0x48158Cu;
label_48158c:
    // 0x48158c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x48158cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x481590: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x481590u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_481594:
    // 0x481594: 0x3e00008  jr          $ra
    ctx->pc = 0x481594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48159Cu;
    // 0x48159c: 0x0  nop
    ctx->pc = 0x48159cu;
    // NOP
}
