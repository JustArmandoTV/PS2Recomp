#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053F190
// Address: 0x53f190 - 0x53f1e0
void sub_0053F190_0x53f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053F190_0x53f190");
#endif

    ctx->pc = 0x53f190u;

    // 0x53f190: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53f190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x53f194: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x53f194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x53f198: 0x2442d4f0  addiu       $v0, $v0, -0x2B10
    ctx->pc = 0x53f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956272));
    // 0x53f19c: 0x2463dfa0  addiu       $v1, $v1, -0x2060
    ctx->pc = 0x53f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959008));
    // 0x53f1a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x53f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x53f1a4: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x53f1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x53f1a8: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x53f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x53f1ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x53f1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x53f1b0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x53f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x53f1b4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x53f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x53f1b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x53f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x53f1bc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x53f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x53f1c0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x53f1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x53f1c4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x53f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x53f1c8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x53f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x53f1cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x53f1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53f1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x53F1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F1D0u;
            // 0x53f1d4: 0xa0800004  sb          $zero, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F1D8u;
    // 0x53f1d8: 0x0  nop
    ctx->pc = 0x53f1d8u;
    // NOP
    // 0x53f1dc: 0x0  nop
    ctx->pc = 0x53f1dcu;
    // NOP
}
