#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003247A0
// Address: 0x3247a0 - 0x3247f0
void sub_003247A0_0x3247a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003247A0_0x3247a0");
#endif

    ctx->pc = 0x3247a0u;

    // 0x3247a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3247a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3247a4: 0x50a2000e  beql        $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3247A4u;
    {
        const bool branch_taken_0x3247a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3247a4) {
            ctx->pc = 0x3247A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3247A4u;
            // 0x3247a8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3247E0u;
            goto label_3247e0;
        }
    }
    ctx->pc = 0x3247ACu;
    // 0x3247ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3247acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3247b0: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3247B0u;
    {
        const bool branch_taken_0x3247b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3247b0) {
            ctx->pc = 0x3247B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3247B0u;
            // 0x3247b4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3247D4u;
            goto label_3247d4;
        }
    }
    ctx->pc = 0x3247B8u;
    // 0x3247b8: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3247B8u;
    {
        const bool branch_taken_0x3247b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3247b8) {
            ctx->pc = 0x3247BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3247B8u;
            // 0x3247bc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3247C8u;
            goto label_3247c8;
        }
    }
    ctx->pc = 0x3247C0u;
    // 0x3247c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3247C0u;
    {
        const bool branch_taken_0x3247c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3247C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3247C0u;
            // 0x3247c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3247c0) {
            ctx->pc = 0x3247E8u;
            goto label_3247e8;
        }
    }
    ctx->pc = 0x3247C8u;
label_3247c8:
    // 0x3247c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3247c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3247cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3247CCu;
    {
        const bool branch_taken_0x3247cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3247D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3247CCu;
            // 0x3247d0: 0x8c420614  lw          $v0, 0x614($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3247cc) {
            ctx->pc = 0x3247E8u;
            goto label_3247e8;
        }
    }
    ctx->pc = 0x3247D4u;
label_3247d4:
    // 0x3247d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3247d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3247d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3247D8u;
    {
        const bool branch_taken_0x3247d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3247DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3247D8u;
            // 0x3247dc: 0x8c420630  lw          $v0, 0x630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3247d8) {
            ctx->pc = 0x3247E8u;
            goto label_3247e8;
        }
    }
    ctx->pc = 0x3247E0u;
label_3247e0:
    // 0x3247e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3247e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3247e4: 0x8c42064c  lw          $v0, 0x64C($v0)
    ctx->pc = 0x3247e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
label_3247e8:
    // 0x3247e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3247E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3247F0u;
}
