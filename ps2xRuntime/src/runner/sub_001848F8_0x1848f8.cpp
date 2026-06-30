#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001848F8
// Address: 0x1848f8 - 0x184958
void sub_001848F8_0x1848f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001848F8_0x1848f8");
#endif

    ctx->pc = 0x1848f8u;

    // 0x1848f8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1848f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1848fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1848fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184900: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
    // 0x184904: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x184904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184908: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x184908u;
    {
        const bool branch_taken_0x184908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x18490Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184908u;
            // 0x18490c: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184908) {
            ctx->pc = 0x184920u;
            goto label_184920;
        }
    }
    ctx->pc = 0x184910u;
    // 0x184910: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x184910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x184914: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x184914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
    // 0x184918: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x184918u;
    {
        const bool branch_taken_0x184918 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18491Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184918u;
            // 0x18491c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184918) {
            ctx->pc = 0x18492Cu;
            goto label_18492c;
        }
    }
    ctx->pc = 0x184920u;
label_184920:
    // 0x184920: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x184920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x184924: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x184924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x184928: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x184928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_18492c:
    // 0x18492c: 0x3e00008  jr          $ra
    ctx->pc = 0x18492Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184934u;
    // 0x184934: 0x0  nop
    ctx->pc = 0x184934u;
    // NOP
    // 0x184938: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x18493c: 0x3e00008  jr          $ra
    ctx->pc = 0x18493Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18493Cu;
            // 0x184940: 0xac400248  sw          $zero, 0x248($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184944u;
    // 0x184944: 0x0  nop
    ctx->pc = 0x184944u;
    // NOP
    // 0x184948: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x18494c: 0x3e00008  jr          $ra
    ctx->pc = 0x18494Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18494Cu;
            // 0x184950: 0xac400248  sw          $zero, 0x248($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184954u;
    // 0x184954: 0x0  nop
    ctx->pc = 0x184954u;
    // NOP
}
