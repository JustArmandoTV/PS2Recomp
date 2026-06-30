#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD9C0
// Address: 0x1ad9c0 - 0x1ada10
void sub_001AD9C0_0x1ad9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD9C0_0x1ad9c0");
#endif

    ctx->pc = 0x1ad9c0u;

    // 0x1ad9c0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1ad9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ad9c4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1ad9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1ad9c8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1ad9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ad9cc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1ad9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1ad9d0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1ad9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ad9d4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1ad9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1ad9d8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1ad9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1ad9dc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1ad9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1ad9e0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1ad9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1ad9e4: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1ad9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1ad9e8: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1ad9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1ad9ec: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1ad9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x1ad9f0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x1ad9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ad9f4: 0xaca60018  sw          $a2, 0x18($a1)
    ctx->pc = 0x1ad9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 6));
    // 0x1ad9f8: 0x90820054  lbu         $v0, 0x54($a0)
    ctx->pc = 0x1ad9f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1ad9fc: 0xa4a0001e  sh          $zero, 0x1E($a1)
    ctx->pc = 0x1ad9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ada00: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ada00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ada04: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1ada04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1ada08: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA08u;
            // 0x1ada0c: 0xa4a2001c  sh          $v0, 0x1C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADA10u;
}
