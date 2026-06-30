#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494350
// Address: 0x494350 - 0x494370
void sub_00494350_0x494350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494350_0x494350");
#endif

    ctx->pc = 0x494350u;

    // 0x494350: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x494350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x494354: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x494354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x494358: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x494358u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x49435c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x49435cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x494360: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x494360u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x494364: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x494364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x494368: 0x3e00008  jr          $ra
    ctx->pc = 0x494368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49436Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494368u;
            // 0x49436c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x494370u;
}
