#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003046A0
// Address: 0x3046a0 - 0x304780
void sub_003046A0_0x3046a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003046A0_0x3046a0");
#endif

    ctx->pc = 0x3046a0u;

    // 0x3046a0: 0x84a30020  lh          $v1, 0x20($a1)
    ctx->pc = 0x3046a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3046a4: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3046A4u;
    {
        const bool branch_taken_0x3046a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3046a4) {
            ctx->pc = 0x3046A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3046A4u;
            // 0x3046a8: 0x84a30022  lh          $v1, 0x22($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3046E4u;
            goto label_3046e4;
        }
    }
    ctx->pc = 0x3046ACu;
    // 0x3046ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3046acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3046b0: 0x0  nop
    ctx->pc = 0x3046b0u;
    // NOP
    // 0x3046b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3046b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3046b8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3046b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x3046bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3046bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3046c0: 0x0  nop
    ctx->pc = 0x3046c0u;
    // NOP
    // 0x3046c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3046c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3046c8: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x3046c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x3046cc: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3046ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3046d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3046d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3046d4: 0x0  nop
    ctx->pc = 0x3046d4u;
    // NOP
    // 0x3046d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3046d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x3046dc: 0xe4800de0  swc1        $f0, 0xDE0($a0)
    ctx->pc = 0x3046dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3552), bits); }
    // 0x3046e0: 0x84a30022  lh          $v1, 0x22($a1)
    ctx->pc = 0x3046e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
label_3046e4:
    // 0x3046e4: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3046E4u;
    {
        const bool branch_taken_0x3046e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3046e4) {
            ctx->pc = 0x3046E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3046E4u;
            // 0x3046e8: 0x84a3002a  lh          $v1, 0x2A($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304724u;
            goto label_304724;
        }
    }
    ctx->pc = 0x3046ECu;
    // 0x3046ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3046ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3046f0: 0x0  nop
    ctx->pc = 0x3046f0u;
    // NOP
    // 0x3046f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3046f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3046f8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3046f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x3046fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3046fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304700: 0x0  nop
    ctx->pc = 0x304700u;
    // NOP
    // 0x304704: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x304704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x304708: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x304708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x30470c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x30470cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x304710: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304714: 0x0  nop
    ctx->pc = 0x304714u;
    // NOP
    // 0x304718: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x304718u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x30471c: 0xe4800ddc  swc1        $f0, 0xDDC($a0)
    ctx->pc = 0x30471cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3548), bits); }
    // 0x304720: 0x84a3002a  lh          $v1, 0x2A($a1)
    ctx->pc = 0x304720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
label_304724:
    // 0x304724: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x304724u;
    {
        const bool branch_taken_0x304724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304724) {
            ctx->pc = 0x304728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304724u;
            // 0x304728: 0xac800e14  sw          $zero, 0xE14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304774u;
            goto label_304774;
        }
    }
    ctx->pc = 0x30472Cu;
    // 0x30472c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30472cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304730: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x304730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
    // 0x304734: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304738: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x304738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x30473c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30473cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x304740: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x304740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304744: 0x0  nop
    ctx->pc = 0x304744u;
    // NOP
    // 0x304748: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x304748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30474c: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x30474cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x304750: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x304750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x304754: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x304754u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304758: 0x0  nop
    ctx->pc = 0x304758u;
    // NOP
    // 0x30475c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30475cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x304760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304764: 0x0  nop
    ctx->pc = 0x304764u;
    // NOP
    // 0x304768: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x304768u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x30476c: 0xe4800de8  swc1        $f0, 0xDE8($a0)
    ctx->pc = 0x30476cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3560), bits); }
    // 0x304770: 0xac800e14  sw          $zero, 0xE14($a0)
    ctx->pc = 0x304770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3604), GPR_U32(ctx, 0));
label_304774:
    // 0x304774: 0x3e00008  jr          $ra
    ctx->pc = 0x304774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30477Cu;
    // 0x30477c: 0x0  nop
    ctx->pc = 0x30477cu;
    // NOP
}
