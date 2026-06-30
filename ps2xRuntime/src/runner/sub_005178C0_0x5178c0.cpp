#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005178C0
// Address: 0x5178c0 - 0x517910
void sub_005178C0_0x5178c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005178C0_0x5178c0");
#endif

    ctx->pc = 0x5178c0u;

    // 0x5178c0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x5178c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x5178c4: 0x84830144  lh          $v1, 0x144($a0)
    ctx->pc = 0x5178c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x5178c8: 0x90a5000a  lbu         $a1, 0xA($a1)
    ctx->pc = 0x5178c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x5178cc: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x5178CCu;
    {
        const bool branch_taken_0x5178cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x5178cc) {
            ctx->pc = 0x5178FCu;
            goto label_5178fc;
        }
    }
    ctx->pc = 0x5178D4u;
    // 0x5178d4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x5178d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x5178d8: 0x8c6300ac  lw          $v1, 0xAC($v1)
    ctx->pc = 0x5178d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x5178dc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x5178DCu;
    {
        const bool branch_taken_0x5178dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5178dc) {
            ctx->pc = 0x5178E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5178DCu;
            // 0x5178e0: 0xe48c0024  swc1        $f12, 0x24($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5178F0u;
            goto label_5178f0;
        }
    }
    ctx->pc = 0x5178E4u;
    // 0x5178e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x5178E4u;
    {
        const bool branch_taken_0x5178e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5178e4) {
            ctx->pc = 0x5178FCu;
            goto label_5178fc;
        }
    }
    ctx->pc = 0x5178ECu;
    // 0x5178ec: 0xe48c0024  swc1        $f12, 0x24($a0)
    ctx->pc = 0x5178ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_5178f0:
    // 0x5178f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5178f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5178f4: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x5178f4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x5178f8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x5178f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_5178fc:
    // 0x5178fc: 0x3e00008  jr          $ra
    ctx->pc = 0x5178FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x517904u;
    // 0x517904: 0x0  nop
    ctx->pc = 0x517904u;
    // NOP
    // 0x517908: 0x0  nop
    ctx->pc = 0x517908u;
    // NOP
    // 0x51790c: 0x0  nop
    ctx->pc = 0x51790cu;
    // NOP
}
