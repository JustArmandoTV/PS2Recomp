#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F780
// Address: 0x27f780 - 0x27f880
void sub_0027F780_0x27f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F780_0x27f780");
#endif

    switch (ctx->pc) {
        case 0x27f7b0u: goto label_27f7b0;
        default: break;
    }

    ctx->pc = 0x27f780u;

    // 0x27f780: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x27f780u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27f784: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27f784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27f788: 0x163082a  slt         $at, $t3, $v1
    ctx->pc = 0x27f788u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27f78c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x27F78Cu;
    {
        const bool branch_taken_0x27f78c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F78Cu;
            // 0x27f790: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f78c) {
            ctx->pc = 0x27F878u;
            goto label_27f878;
        }
    }
    ctx->pc = 0x27F794u;
    // 0x27f794: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x27f794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x27f798: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x27f798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x27f79c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x27f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x27f7a0: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x27f7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x27f7a4: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x27f7a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f7a8: 0x27ad0000  addiu       $t5, $sp, 0x0
    ctx->pc = 0x27f7a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x27f7ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x27f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27f7b0:
    // 0x27f7b0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x27f7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27f7b4: 0x8cce0000  lw          $t6, 0x0($a2)
    ctx->pc = 0x27f7b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27f7b8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x27f7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x27f7bc: 0x8cec0000  lw          $t4, 0x0($a3)
    ctx->pc = 0x27f7bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27f7c0: 0x8d8c0028  lw          $t4, 0x28($t4)
    ctx->pc = 0x27f7c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x27f7c4: 0x258f0004  addiu       $t7, $t4, 0x4
    ctx->pc = 0x27f7c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x27f7c8: 0x8d8c0004  lw          $t4, 0x4($t4)
    ctx->pc = 0x27f7c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x27f7cc: 0x958c006c  lhu         $t4, 0x6C($t4)
    ctx->pc = 0x27f7ccu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 108)));
    // 0x27f7d0: 0x1cc6021  addu        $t4, $t6, $t4
    ctx->pc = 0x27f7d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x27f7d4: 0x918c0000  lbu         $t4, 0x0($t4)
    ctx->pc = 0x27f7d4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x27f7d8: 0x15830021  bne         $t4, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x27F7D8u;
    {
        const bool branch_taken_0x27f7d8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x27f7d8) {
            ctx->pc = 0x27F860u;
            goto label_27f860;
        }
    }
    ctx->pc = 0x27F7E0u;
    // 0x27f7e0: 0x8dec0004  lw          $t4, 0x4($t7)
    ctx->pc = 0x27f7e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x27f7e4: 0x958c006c  lhu         $t4, 0x6C($t4)
    ctx->pc = 0x27f7e4u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 108)));
    // 0x27f7e8: 0x1cc6021  addu        $t4, $t6, $t4
    ctx->pc = 0x27f7e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x27f7ec: 0x918c0000  lbu         $t4, 0x0($t4)
    ctx->pc = 0x27f7ecu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x27f7f0: 0x1583001b  bne         $t4, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x27F7F0u;
    {
        const bool branch_taken_0x27f7f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x27f7f0) {
            ctx->pc = 0x27F860u;
            goto label_27f860;
        }
    }
    ctx->pc = 0x27F7F8u;
    // 0x27f7f8: 0x8caf0000  lw          $t7, 0x0($a1)
    ctx->pc = 0x27f7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27f7fc: 0x25ee0001  addiu       $t6, $t7, 0x1
    ctx->pc = 0x27f7fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x27f800: 0xf6040  sll         $t4, $t7, 1
    ctx->pc = 0x27f800u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x27f804: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x27f804u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x27f808: 0xacae0000  sw          $t6, 0x0($a1)
    ctx->pc = 0x27f808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
    // 0x27f80c: 0xc7080  sll         $t6, $t4, 2
    ctx->pc = 0x27f80cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x27f810: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x27f810u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27f814: 0x18e7021  addu        $t6, $t4, $t6
    ctx->pc = 0x27f814u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x27f818: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x27f818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27f81c: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x27f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f820: 0xc5c00008  lwc1        $f0, 0x8($t6)
    ctx->pc = 0x27f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f824: 0xe5a20000  swc1        $f2, 0x0($t5)
    ctx->pc = 0x27f824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x27f828: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x27f828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x27f82c: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x27f82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x27f830: 0x8cec0000  lw          $t4, 0x0($a3)
    ctx->pc = 0x27f830u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27f834: 0xadcc0000  sw          $t4, 0x0($t6)
    ctx->pc = 0x27f834u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 12));
    // 0x27f838: 0x8cec0004  lw          $t4, 0x4($a3)
    ctx->pc = 0x27f838u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x27f83c: 0xadcc0004  sw          $t4, 0x4($t6)
    ctx->pc = 0x27f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 12));
    // 0x27f840: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x27f840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f844: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x27f844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x27f848: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x27f848u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f84c: 0xacec0000  sw          $t4, 0x0($a3)
    ctx->pc = 0x27f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 12));
    // 0x27f850: 0x8d2c0000  lw          $t4, 0x0($t1)
    ctx->pc = 0x27f850u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27f854: 0xacec0004  sw          $t4, 0x4($a3)
    ctx->pc = 0x27f854u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 12));
    // 0x27f858: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x27f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f85c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x27f85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_27f860:
    // 0x27f860: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x27f860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27f864: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x27f864u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x27f868: 0x167382a  slt         $a3, $t3, $a3
    ctx->pc = 0x27f868u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x27f86c: 0x14e0ffd0  bnez        $a3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x27F86Cu;
    {
        const bool branch_taken_0x27f86c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F86Cu;
            // 0x27f870: 0x254a000c  addiu       $t2, $t2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f86c) {
            ctx->pc = 0x27F7B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f7b0;
        }
    }
    ctx->pc = 0x27F874u;
    // 0x27f874: 0x0  nop
    ctx->pc = 0x27f874u;
    // NOP
label_27f878:
    // 0x27f878: 0x3e00008  jr          $ra
    ctx->pc = 0x27F878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F878u;
            // 0x27f87c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F880u;
}
