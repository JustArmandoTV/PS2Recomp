#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ACE50
// Address: 0x2ace50 - 0x2acea0
void sub_002ACE50_0x2ace50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACE50_0x2ace50");
#endif

    ctx->pc = 0x2ace50u;

    // 0x2ace50: 0x10850011  beq         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2ACE50u;
    {
        const bool branch_taken_0x2ace50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ace50) {
            ctx->pc = 0x2ACE98u;
            goto label_2ace98;
        }
    }
    ctx->pc = 0x2ACE58u;
    // 0x2ace58: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2ace58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ace5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ace5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ace60: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ace60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ace64: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2ace64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x2ace68: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2ace68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ace6c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2ace6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ace70: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2ace70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2ace74: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x2ace74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x2ace78: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2ace78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ace7c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2ace7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ace80: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2ace80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2ace84: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x2ace84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x2ace88: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x2ace88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ace8c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ace8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ace90: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2ace90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2ace94: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x2ace94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_2ace98:
    // 0x2ace98: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ACEA0u;
}
