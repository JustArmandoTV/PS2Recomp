#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00352CE0
// Address: 0x352ce0 - 0x352d10
void sub_00352CE0_0x352ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352CE0_0x352ce0");
#endif

    ctx->pc = 0x352ce0u;

    // 0x352ce0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x352ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x352ce4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x352ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x352ce8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x352ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x352cec: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x352cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x352cf0: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x352cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x352cf4: 0x908300e4  lbu         $v1, 0xE4($a0)
    ctx->pc = 0x352cf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x352cf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x352CF8u;
    {
        const bool branch_taken_0x352cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x352cf8) {
            ctx->pc = 0x352D08u;
            goto label_352d08;
        }
    }
    ctx->pc = 0x352D00u;
    // 0x352d00: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x352d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x352d04: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x352d04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_352d08:
    // 0x352d08: 0x3e00008  jr          $ra
    ctx->pc = 0x352D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352D10u;
}
