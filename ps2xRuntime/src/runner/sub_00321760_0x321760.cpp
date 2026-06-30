#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00321760
// Address: 0x321760 - 0x3217e0
void sub_00321760_0x321760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321760_0x321760");
#endif

    switch (ctx->pc) {
        case 0x321784u: goto label_321784;
        default: break;
    }

    ctx->pc = 0x321760u;

    // 0x321760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x321764: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x321764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x321768: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x321768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x32176c: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x32176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x321770: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x321770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x321774: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x321774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x321778: 0x8c650e68  lw          $a1, 0xE68($v1)
    ctx->pc = 0x321778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
    // 0x32177c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32177Cu;
    {
        const bool branch_taken_0x32177c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x321780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32177Cu;
            // 0x321780: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32177c) {
            ctx->pc = 0x3217A0u;
            goto label_3217a0;
        }
    }
    ctx->pc = 0x321784u;
label_321784:
    // 0x321784: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x321784u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x321788: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x321788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32178c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32178cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x321790: 0x0  nop
    ctx->pc = 0x321790u;
    // NOP
    // 0x321794: 0x0  nop
    ctx->pc = 0x321794u;
    // NOP
    // 0x321798: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x321798u;
    {
        const bool branch_taken_0x321798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321798) {
            ctx->pc = 0x321784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_321784;
        }
    }
    ctx->pc = 0x3217A0u;
label_3217a0:
    // 0x3217a0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3217a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3217a4: 0x24c40004  addiu       $a0, $a2, 0x4
    ctx->pc = 0x3217a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3217a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3217a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3217ac: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x3217acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3217b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3217b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3217b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3217b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3217b8: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x3217b8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3217bc: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x3217bcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3217c0: 0xe7af000c  swc1        $f15, 0xC($sp)
    ctx->pc = 0x3217c0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3217c4: 0xe46c0014  swc1        $f12, 0x14($v1)
    ctx->pc = 0x3217c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x3217c8: 0xe46d0018  swc1        $f13, 0x18($v1)
    ctx->pc = 0x3217c8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x3217cc: 0xe46e001c  swc1        $f14, 0x1C($v1)
    ctx->pc = 0x3217ccu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x3217d0: 0xe46f0020  swc1        $f15, 0x20($v1)
    ctx->pc = 0x3217d0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x3217d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3217D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3217D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3217D4u;
            // 0x3217d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3217DCu;
    // 0x3217dc: 0x0  nop
    ctx->pc = 0x3217dcu;
    // NOP
}
