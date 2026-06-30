#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FA5F0
// Address: 0x1fa5f0 - 0x1fa630
void sub_001FA5F0_0x1fa5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA5F0_0x1fa5f0");
#endif

    ctx->pc = 0x1fa5f0u;

    // 0x1fa5f0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fa5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fa5f4: 0x2463a850  addiu       $v1, $v1, -0x57B0
    ctx->pc = 0x1fa5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944848));
    // 0x1fa5f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fa5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1fa5fc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fa5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fa600: 0x2463b100  addiu       $v1, $v1, -0x4F00
    ctx->pc = 0x1fa600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947072));
    // 0x1fa604: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fa604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1fa608: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fa608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fa60c: 0x2463ac50  addiu       $v1, $v1, -0x53B0
    ctx->pc = 0x1fa60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945872));
    // 0x1fa610: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1fa610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1fa614: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1fa614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1fa618: 0x24630d90  addiu       $v1, $v1, 0xD90
    ctx->pc = 0x1fa618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3472));
    // 0x1fa61c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1fa61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1fa620: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x1fa620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fa624: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA624u;
            // 0x1fa628: 0xa0800011  sb          $zero, 0x11($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA62Cu;
    // 0x1fa62c: 0x0  nop
    ctx->pc = 0x1fa62cu;
    // NOP
}
