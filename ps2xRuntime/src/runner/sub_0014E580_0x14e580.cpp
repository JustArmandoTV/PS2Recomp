#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014E580
// Address: 0x14e580 - 0x14e5e0
void sub_0014E580_0x14e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E580_0x14e580");
#endif

    ctx->pc = 0x14e580u;

    // 0x14e580: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14e580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14e584: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14e584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x14e588: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14E588u;
    {
        const bool branch_taken_0x14e588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e588) {
            ctx->pc = 0x14E58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E588u;
            // 0x14e58c: 0x41a02  srl         $v1, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E5B8u;
            goto label_14e5b8;
        }
    }
    ctx->pc = 0x14E590u;
    // 0x14e590: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x14e590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x14e594: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14e594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14e598: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x14e598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x14e59c: 0x244242e0  addiu       $v0, $v0, 0x42E0
    ctx->pc = 0x14e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17120));
    // 0x14e5a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14e5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14e5a4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x14e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x14e5a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e5ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e5b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14E5B0u;
    {
        const bool branch_taken_0x14e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E5B0u;
            // 0x14e5b4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5b0) {
            ctx->pc = 0x14E5CCu;
            goto label_14e5cc;
        }
    }
    ctx->pc = 0x14E5B8u;
label_14e5b8:
    // 0x14e5b8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14e5bc: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x14e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x14e5c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e5c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e5c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e5cc:
    // 0x14e5cc: 0x3082007f  andi        $v0, $a0, 0x7F
    ctx->pc = 0x14e5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x14e5d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e5d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x14E5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E5D8u;
            // 0x14e5dc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E5E0u;
}
