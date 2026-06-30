#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004817E0
// Address: 0x4817e0 - 0x481840
void sub_004817E0_0x4817e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004817E0_0x4817e0");
#endif

    ctx->pc = 0x4817e0u;

    // 0x4817e0: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x4817e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x4817e4: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x4817e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x4817e8: 0xc1082b  sltu        $at, $a2, $at
    ctx->pc = 0x4817e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4817ec: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4817ECu;
    {
        const bool branch_taken_0x4817ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4817ec) {
            ctx->pc = 0x4817F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4817ECu;
            // 0x4817f0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x481800u;
            goto label_481800;
        }
    }
    ctx->pc = 0x4817F4u;
    // 0x4817f4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x4817f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x4817f8: 0x34468d7f  ori         $a2, $v0, 0x8D7F
    ctx->pc = 0x4817f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36223);
    // 0x4817fc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4817fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_481800:
    // 0x481800: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x481800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x481804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x481804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x481808: 0x24640088  addiu       $a0, $v1, 0x88
    ctx->pc = 0x481808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
    // 0x48180c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x48180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x481810: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x481810u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x481814: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x481814u;
    {
        const bool branch_taken_0x481814 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x481818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481814u;
            // 0x481818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481814) {
            ctx->pc = 0x481824u;
            goto label_481824;
        }
    }
    ctx->pc = 0x48181Cu;
    // 0x48181c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x48181Cu;
    {
        const bool branch_taken_0x48181c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48181c) {
            ctx->pc = 0x48182Cu;
            goto label_48182c;
        }
    }
    ctx->pc = 0x481824u;
label_481824:
    // 0x481824: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x481824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x481828: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x481828u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_48182c:
    // 0x48182c: 0x3e00008  jr          $ra
    ctx->pc = 0x48182Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481834u;
    // 0x481834: 0x0  nop
    ctx->pc = 0x481834u;
    // NOP
    // 0x481838: 0x0  nop
    ctx->pc = 0x481838u;
    // NOP
    // 0x48183c: 0x0  nop
    ctx->pc = 0x48183cu;
    // NOP
}
