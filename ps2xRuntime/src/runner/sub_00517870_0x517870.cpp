#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00517870
// Address: 0x517870 - 0x5178c0
void sub_00517870_0x517870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00517870_0x517870");
#endif

    ctx->pc = 0x517870u;

    // 0x517870: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x517870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x517874: 0x84830144  lh          $v1, 0x144($a0)
    ctx->pc = 0x517874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x517878: 0x90a5000a  lbu         $a1, 0xA($a1)
    ctx->pc = 0x517878u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x51787c: 0x14a3000c  bne         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x51787Cu;
    {
        const bool branch_taken_0x51787c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x51787c) {
            ctx->pc = 0x5178B0u;
            goto label_5178b0;
        }
    }
    ctx->pc = 0x517884u;
    // 0x517884: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x517884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x517888: 0x8c6300ac  lw          $v1, 0xAC($v1)
    ctx->pc = 0x517888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x51788c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x51788Cu;
    {
        const bool branch_taken_0x51788c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51788c) {
            ctx->pc = 0x517890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51788Cu;
            // 0x517890: 0xe48c0024  swc1        $f12, 0x24($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5178A0u;
            goto label_5178a0;
        }
    }
    ctx->pc = 0x517894u;
    // 0x517894: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x517894u;
    {
        const bool branch_taken_0x517894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x517894) {
            ctx->pc = 0x5178B0u;
            goto label_5178b0;
        }
    }
    ctx->pc = 0x51789Cu;
    // 0x51789c: 0xe48c0024  swc1        $f12, 0x24($a0)
    ctx->pc = 0x51789cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_5178a0:
    // 0x5178a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5178a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x5178a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x5178a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x5178a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5178a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x5178ac: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x5178acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_5178b0:
    // 0x5178b0: 0x3e00008  jr          $ra
    ctx->pc = 0x5178B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5178B8u;
    // 0x5178b8: 0x0  nop
    ctx->pc = 0x5178b8u;
    // NOP
    // 0x5178bc: 0x0  nop
    ctx->pc = 0x5178bcu;
    // NOP
}
