#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD450
// Address: 0x1bd450 - 0x1bd490
void sub_001BD450_0x1bd450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD450_0x1bd450");
#endif

    ctx->pc = 0x1bd450u;

    // 0x1bd450: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x1bd450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1bd454: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1bd454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bd458: 0x2409001f  addiu       $t1, $zero, 0x1F
    ctx->pc = 0x1bd458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bd45c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1bd45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bd460: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bd460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd464: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1bd464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bd468: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x1bd468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1bd46c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1bd46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1bd470: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x1bd470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x1bd474: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bd474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bd478: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1bd478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1bd47c: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x1bd47cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x1bd480: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x1bd480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x1bd484: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD484u;
            // 0x1bd488: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD48Cu;
    // 0x1bd48c: 0x0  nop
    ctx->pc = 0x1bd48cu;
    // NOP
}
