#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AB740
// Address: 0x2ab740 - 0x2ab770
void sub_002AB740_0x2ab740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB740_0x2ab740");
#endif

    ctx->pc = 0x2ab740u;

    // 0x2ab740: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ab740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ab744: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ab744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab748: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ab748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ab74c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2ab74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ab750: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2ab750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2ab754: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2ab754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ab758: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2ab758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2ab75c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ab75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ab760: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2ab760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2ab764: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2ab764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2ab768: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB768u;
            // 0x2ab76c: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB770u;
}
