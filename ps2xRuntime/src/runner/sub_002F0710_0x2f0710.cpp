#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0710
// Address: 0x2f0710 - 0x2f0750
void sub_002F0710_0x2f0710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0710_0x2f0710");
#endif

    ctx->pc = 0x2f0710u;

    // 0x2f0710: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f0710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2f0714: 0x24a60003  addiu       $a2, $a1, 0x3
    ctx->pc = 0x2f0714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x2f0718: 0x8c670ea4  lw          $a3, 0xEA4($v1)
    ctx->pc = 0x2f0718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
    // 0x2f071c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2f071cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f0720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f0720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f0724: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2f0724u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2f0728: 0x8ce40140  lw          $a0, 0x140($a3)
    ctx->pc = 0x2f0728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 320)));
    // 0x2f072c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2f072cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2f0730: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2f0730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2f0734: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2f0734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f0738: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x2f0738u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2f073c: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x2f073cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f0740: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0740u;
            // 0x2f0744: 0xac600078  sw          $zero, 0x78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0748u;
    // 0x2f0748: 0x0  nop
    ctx->pc = 0x2f0748u;
    // NOP
    // 0x2f074c: 0x0  nop
    ctx->pc = 0x2f074cu;
    // NOP
}
