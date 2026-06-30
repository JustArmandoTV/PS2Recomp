#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304780
// Address: 0x304780 - 0x304860
void sub_00304780_0x304780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304780_0x304780");
#endif

    ctx->pc = 0x304780u;

    // 0x304780: 0x84a30020  lh          $v1, 0x20($a1)
    ctx->pc = 0x304780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x304784: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x304784u;
    {
        const bool branch_taken_0x304784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304784) {
            ctx->pc = 0x304788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304784u;
            // 0x304788: 0x84a30022  lh          $v1, 0x22($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3047C4u;
            goto label_3047c4;
        }
    }
    ctx->pc = 0x30478Cu;
    // 0x30478c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30478cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304790: 0x0  nop
    ctx->pc = 0x304790u;
    // NOP
    // 0x304794: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304798: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x304798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x30479c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30479cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3047a0: 0x0  nop
    ctx->pc = 0x3047a0u;
    // NOP
    // 0x3047a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3047a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3047a8: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x3047a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x3047ac: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3047acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3047b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3047b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3047b4: 0x0  nop
    ctx->pc = 0x3047b4u;
    // NOP
    // 0x3047b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3047b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x3047bc: 0xe4800de0  swc1        $f0, 0xDE0($a0)
    ctx->pc = 0x3047bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3552), bits); }
    // 0x3047c0: 0x84a30022  lh          $v1, 0x22($a1)
    ctx->pc = 0x3047c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
label_3047c4:
    // 0x3047c4: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3047C4u;
    {
        const bool branch_taken_0x3047c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3047c4) {
            ctx->pc = 0x3047C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3047C4u;
            // 0x3047c8: 0x84a3002a  lh          $v1, 0x2A($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304804u;
            goto label_304804;
        }
    }
    ctx->pc = 0x3047CCu;
    // 0x3047cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3047ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3047d0: 0x0  nop
    ctx->pc = 0x3047d0u;
    // NOP
    // 0x3047d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3047d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3047d8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3047d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x3047dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3047dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3047e0: 0x0  nop
    ctx->pc = 0x3047e0u;
    // NOP
    // 0x3047e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3047e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3047e8: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x3047e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x3047ec: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3047ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3047f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3047f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3047f4: 0x0  nop
    ctx->pc = 0x3047f4u;
    // NOP
    // 0x3047f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3047f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x3047fc: 0xe4800ddc  swc1        $f0, 0xDDC($a0)
    ctx->pc = 0x3047fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3548), bits); }
    // 0x304800: 0x84a3002a  lh          $v1, 0x2A($a1)
    ctx->pc = 0x304800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
label_304804:
    // 0x304804: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x304804u;
    {
        const bool branch_taken_0x304804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304804) {
            ctx->pc = 0x304808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304804u;
            // 0x304808: 0xac800e14  sw          $zero, 0xE14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304854u;
            goto label_304854;
        }
    }
    ctx->pc = 0x30480Cu;
    // 0x30480c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30480cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304810: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x304810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
    // 0x304814: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304818: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x304818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x30481c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x304820: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x304820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304824: 0x0  nop
    ctx->pc = 0x304824u;
    // NOP
    // 0x304828: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x304828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30482c: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x30482cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x304830: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x304830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x304834: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x304834u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304838: 0x0  nop
    ctx->pc = 0x304838u;
    // NOP
    // 0x30483c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30483cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x304840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304844: 0x0  nop
    ctx->pc = 0x304844u;
    // NOP
    // 0x304848: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x304848u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x30484c: 0xe4800de8  swc1        $f0, 0xDE8($a0)
    ctx->pc = 0x30484cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3560), bits); }
    // 0x304850: 0xac800e14  sw          $zero, 0xE14($a0)
    ctx->pc = 0x304850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3604), GPR_U32(ctx, 0));
label_304854:
    // 0x304854: 0x3e00008  jr          $ra
    ctx->pc = 0x304854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30485Cu;
    // 0x30485c: 0x0  nop
    ctx->pc = 0x30485cu;
    // NOP
}
