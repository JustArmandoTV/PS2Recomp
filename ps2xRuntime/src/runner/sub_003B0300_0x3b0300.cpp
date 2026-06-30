#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B0300
// Address: 0x3b0300 - 0x3b0360
void sub_003B0300_0x3b0300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0300_0x3b0300");
#endif

    ctx->pc = 0x3b0300u;

    // 0x3b0300: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x3b0300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3b0304: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3b0304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3b0308: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3b0308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3b030c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3b030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3b0310: 0x2466002c  addiu       $a2, $v1, 0x2C
    ctx->pc = 0x3b0310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x3b0314: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x3b0314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x3b0318: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3B0318u;
    {
        const bool branch_taken_0x3b0318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0318) {
            ctx->pc = 0x3B0350u;
            goto label_3b0350;
        }
    }
    ctx->pc = 0x3B0320u;
    // 0x3b0320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b0320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0324: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x3b0324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
    // 0x3b0328: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x3b0328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x3b032c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3b032cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x3b0330: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3b0330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b0334: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x3b0334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0338: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x3b0338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3b033c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3b033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b0340: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x3b0340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0344: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x3b0344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x3b0348: 0xacc70010  sw          $a3, 0x10($a2)
    ctx->pc = 0x3b0348u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 7));
    // 0x3b034c: 0xacc80014  sw          $t0, 0x14($a2)
    ctx->pc = 0x3b034cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 8));
label_3b0350:
    // 0x3b0350: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B0358u;
    // 0x3b0358: 0x0  nop
    ctx->pc = 0x3b0358u;
    // NOP
    // 0x3b035c: 0x0  nop
    ctx->pc = 0x3b035cu;
    // NOP
}
