#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE4D0
// Address: 0x2ce4d0 - 0x2ce530
void sub_002CE4D0_0x2ce4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE4D0_0x2ce4d0");
#endif

    ctx->pc = 0x2ce4d0u;

    // 0x2ce4d0: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x2ce4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ce4d4: 0x50e00006  beql        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE4D4u;
    {
        const bool branch_taken_0x2ce4d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce4d4) {
            ctx->pc = 0x2CE4D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE4D4u;
            // 0x2ce4d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE4F0u;
            goto label_2ce4f0;
        }
    }
    ctx->pc = 0x2CE4DCu;
    // 0x2ce4dc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2ce4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ce4e0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2ce4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ce4e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ce4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ce4e8: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x2ce4e8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2ce4ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2ce4ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2ce4f0:
    // 0x2ce4f0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2ce4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce4f4: 0x8ca80010  lw          $t0, 0x10($a1)
    ctx->pc = 0x2ce4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ce4f8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2ce4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ce4fc: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x2ce4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ce500: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2ce500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2ce504: 0x1062821  addu        $a1, $t0, $a2
    ctx->pc = 0x2ce504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2ce508: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2ce508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2ce50c: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x2ce50cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ce510: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x2ce510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x2ce514: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x2ce514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2ce518: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2ce518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2ce51c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE51Cu;
            // 0x2ce520: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE524u;
    // 0x2ce524: 0x0  nop
    ctx->pc = 0x2ce524u;
    // NOP
    // 0x2ce528: 0x0  nop
    ctx->pc = 0x2ce528u;
    // NOP
    // 0x2ce52c: 0x0  nop
    ctx->pc = 0x2ce52cu;
    // NOP
}
