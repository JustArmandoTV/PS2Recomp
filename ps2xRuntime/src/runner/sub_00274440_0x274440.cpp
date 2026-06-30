#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00274440
// Address: 0x274440 - 0x2744b0
void sub_00274440_0x274440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274440_0x274440");
#endif

    ctx->pc = 0x274440u;

    // 0x274440: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x274440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x274444: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x274444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x274448: 0x34652400  ori         $a1, $v1, 0x2400
    ctx->pc = 0x274448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x27444c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27444cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x274450: 0x3c035015  lui         $v1, 0x5015
    ctx->pc = 0x274450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20501 << 16));
    // 0x274454: 0x346302f9  ori         $v1, $v1, 0x2F9
    ctx->pc = 0x274454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)761);
    // 0x274458: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x274458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27445c: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x27445cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x274460: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x274460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x274464: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x274464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x274468: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x274468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x27446c: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x27446cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x274470: 0xa0400039  sb          $zero, 0x39($v0)
    ctx->pc = 0x274470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x274474: 0xa040003a  sb          $zero, 0x3A($v0)
    ctx->pc = 0x274474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x274478: 0xa040003b  sb          $zero, 0x3B($v0)
    ctx->pc = 0x274478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x27447c: 0xa040003c  sb          $zero, 0x3C($v0)
    ctx->pc = 0x27447cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x274480: 0xa040003d  sb          $zero, 0x3D($v0)
    ctx->pc = 0x274480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 61), (uint8_t)GPR_U32(ctx, 0));
    // 0x274484: 0xac460040  sw          $a2, 0x40($v0)
    ctx->pc = 0x274484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 6));
    // 0x274488: 0xac46005c  sw          $a2, 0x5C($v0)
    ctx->pc = 0x274488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 6));
    // 0x27448c: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x27448cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x274490: 0xac45006c  sw          $a1, 0x6C($v0)
    ctx->pc = 0x274490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 5));
    // 0x274494: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x274494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x274498: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x274498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x27449c: 0x3e00008  jr          $ra
    ctx->pc = 0x27449Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2744A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27449Cu;
            // 0x2744a0: 0xac400074  sw          $zero, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2744A4u;
    // 0x2744a4: 0x0  nop
    ctx->pc = 0x2744a4u;
    // NOP
    // 0x2744a8: 0x0  nop
    ctx->pc = 0x2744a8u;
    // NOP
    // 0x2744ac: 0x0  nop
    ctx->pc = 0x2744acu;
    // NOP
}
