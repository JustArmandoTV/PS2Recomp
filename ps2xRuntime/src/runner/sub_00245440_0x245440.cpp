#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245440
// Address: 0x245440 - 0x2454b0
void sub_00245440_0x245440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245440_0x245440");
#endif

    ctx->pc = 0x245440u;

    // 0x245440: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x245440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x245444: 0x3c080024  lui         $t0, 0x24
    ctx->pc = 0x245444u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)36 << 16));
    // 0x245448: 0x24635510  addiu       $v1, $v1, 0x5510
    ctx->pc = 0x245448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21776));
    // 0x24544c: 0x3c070024  lui         $a3, 0x24
    ctx->pc = 0x24544cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)36 << 16));
    // 0x245450: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x245450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x245454: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x245454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x245458: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x245458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x24545c: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x24545cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x245460: 0x24635580  addiu       $v1, $v1, 0x5580
    ctx->pc = 0x245460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21888));
    // 0x245464: 0x25085930  addiu       $t0, $t0, 0x5930
    ctx->pc = 0x245464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22832));
    // 0x245468: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x245468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x24546c: 0x24e759c0  addiu       $a3, $a3, 0x59C0
    ctx->pc = 0x24546cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22976));
    // 0x245470: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x245470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x245474: 0x24c659e0  addiu       $a2, $a2, 0x59E0
    ctx->pc = 0x245474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23008));
    // 0x245478: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x245478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x24547c: 0x24a55560  addiu       $a1, $a1, 0x5560
    ctx->pc = 0x24547cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21856));
    // 0x245480: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x245480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x245484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245488: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x245488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x24548c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x24548cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x245490: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x245490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x245494: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x245494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x245498: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x245498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x24549c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x24549cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2454a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2454A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2454A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2454A0u;
            // 0x2454a4: 0xa083002c  sb          $v1, 0x2C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2454A8u;
    // 0x2454a8: 0x0  nop
    ctx->pc = 0x2454a8u;
    // NOP
    // 0x2454ac: 0x0  nop
    ctx->pc = 0x2454acu;
    // NOP
}
