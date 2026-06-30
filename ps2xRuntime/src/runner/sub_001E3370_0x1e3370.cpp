#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3370
// Address: 0x1e3370 - 0x1e33c0
void sub_001E3370_0x1e3370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3370_0x1e3370");
#endif

    ctx->pc = 0x1e3370u;

    // 0x1e3370: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1e3370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e3374: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1e3374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1e3378: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E3378u;
    {
        const bool branch_taken_0x1e3378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3378) {
            ctx->pc = 0x1E337Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3378u;
            // 0x1e337c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E33B4u;
            goto label_1e33b4;
        }
    }
    ctx->pc = 0x1E3380u;
    // 0x1e3380: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1e3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1e3384: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3384u;
    {
        const bool branch_taken_0x1e3384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3384) {
            ctx->pc = 0x1E3388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3384u;
            // 0x1e3388: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E33B4u;
            goto label_1e33b4;
        }
    }
    ctx->pc = 0x1E338Cu;
    // 0x1e338c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1e338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1e3390: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3390u;
    {
        const bool branch_taken_0x1e3390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3390) {
            ctx->pc = 0x1E3394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3390u;
            // 0x1e3394: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E33B4u;
            goto label_1e33b4;
        }
    }
    ctx->pc = 0x1E3398u;
    // 0x1e3398: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1e3398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1e339c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E339Cu;
    {
        const bool branch_taken_0x1e339c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e339c) {
            ctx->pc = 0x1E33A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E339Cu;
            // 0x1e33a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E33B4u;
            goto label_1e33b4;
        }
    }
    ctx->pc = 0x1E33A4u;
    // 0x1e33a4: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1e33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1e33a8: 0x50620002  beql        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E33A8u;
    {
        const bool branch_taken_0x1e33a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e33a8) {
            ctx->pc = 0x1E33ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33A8u;
            // 0x1e33ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E33B4u;
            goto label_1e33b4;
        }
    }
    ctx->pc = 0x1E33B0u;
    // 0x1e33b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e33b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e33b4:
    // 0x1e33b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E33B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E33BCu;
    // 0x1e33bc: 0x0  nop
    ctx->pc = 0x1e33bcu;
    // NOP
}
