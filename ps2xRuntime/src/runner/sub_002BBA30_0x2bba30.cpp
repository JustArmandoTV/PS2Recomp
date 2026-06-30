#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBA30
// Address: 0x2bba30 - 0x2bba90
void sub_002BBA30_0x2bba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBA30_0x2bba30");
#endif

    ctx->pc = 0x2bba30u;

    // 0x2bba30: 0x3c05c000  lui         $a1, 0xC000
    ctx->pc = 0x2bba30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49152 << 16));
    // 0x2bba34: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2bba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2bba38: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2bba38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2bba3c: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2bba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2bba40: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2bba40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2bba44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bba44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bba48: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2bba48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2bba4c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2bba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2bba50: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2bba50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2bba54: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x2bba54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x2bba58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2bba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bba5c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2bba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2bba60: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x2bba60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2bba64: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2bba64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2bba68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bba68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bba6c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2bba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2bba70: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2bba70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2bba74: 0xa0860024  sb          $a2, 0x24($a0)
    ctx->pc = 0x2bba74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bba78: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x2bba78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x2bba7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBA7Cu;
            // 0x2bba80: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBA84u;
    // 0x2bba84: 0x0  nop
    ctx->pc = 0x2bba84u;
    // NOP
    // 0x2bba88: 0x0  nop
    ctx->pc = 0x2bba88u;
    // NOP
    // 0x2bba8c: 0x0  nop
    ctx->pc = 0x2bba8cu;
    // NOP
}
