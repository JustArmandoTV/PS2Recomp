#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304860
// Address: 0x304860 - 0x304960
void sub_00304860_0x304860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304860_0x304860");
#endif

    ctx->pc = 0x304860u;

    // 0x304860: 0x84a30020  lh          $v1, 0x20($a1)
    ctx->pc = 0x304860u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x304864: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x304864u;
    {
        const bool branch_taken_0x304864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304864) {
            ctx->pc = 0x304868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304864u;
            // 0x304868: 0x84a30022  lh          $v1, 0x22($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3048A4u;
            goto label_3048a4;
        }
    }
    ctx->pc = 0x30486Cu;
    // 0x30486c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30486cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304870: 0x0  nop
    ctx->pc = 0x304870u;
    // NOP
    // 0x304874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304878: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x304878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x30487c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30487cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304880: 0x0  nop
    ctx->pc = 0x304880u;
    // NOP
    // 0x304884: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x304884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x304888: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x304888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x30488c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x30488cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x304890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304894: 0x0  nop
    ctx->pc = 0x304894u;
    // NOP
    // 0x304898: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x304898u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x30489c: 0xe4800de0  swc1        $f0, 0xDE0($a0)
    ctx->pc = 0x30489cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3552), bits); }
    // 0x3048a0: 0x84a30022  lh          $v1, 0x22($a1)
    ctx->pc = 0x3048a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
label_3048a4:
    // 0x3048a4: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3048A4u;
    {
        const bool branch_taken_0x3048a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3048a4) {
            ctx->pc = 0x3048A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3048A4u;
            // 0x3048a8: 0x84a30026  lh          $v1, 0x26($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3048E4u;
            goto label_3048e4;
        }
    }
    ctx->pc = 0x3048ACu;
    // 0x3048ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3048acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3048b0: 0x0  nop
    ctx->pc = 0x3048b0u;
    // NOP
    // 0x3048b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3048b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3048b8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3048b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x3048bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3048bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3048c0: 0x0  nop
    ctx->pc = 0x3048c0u;
    // NOP
    // 0x3048c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3048c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3048c8: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x3048c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x3048cc: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3048ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3048d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3048d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3048d4: 0x0  nop
    ctx->pc = 0x3048d4u;
    // NOP
    // 0x3048d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3048d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x3048dc: 0xe4800ddc  swc1        $f0, 0xDDC($a0)
    ctx->pc = 0x3048dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3548), bits); }
    // 0x3048e0: 0x84a30026  lh          $v1, 0x26($a1)
    ctx->pc = 0x3048e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
label_3048e4:
    // 0x3048e4: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3048E4u;
    {
        const bool branch_taken_0x3048e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3048e4) {
            ctx->pc = 0x3048E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3048E4u;
            // 0x3048e8: 0x84a30028  lh          $v1, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304934u;
            goto label_304934;
        }
    }
    ctx->pc = 0x3048ECu;
    // 0x3048ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3048ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3048f0: 0x3c06447a  lui         $a2, 0x447A
    ctx->pc = 0x3048f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17530 << 16));
    // 0x3048f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3048f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3048f8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3048f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3048fc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3048fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x304900: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x304900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304904: 0x0  nop
    ctx->pc = 0x304904u;
    // NOP
    // 0x304908: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x304908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30490c: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x30490cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x304910: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x304910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x304914: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x304914u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304918: 0x0  nop
    ctx->pc = 0x304918u;
    // NOP
    // 0x30491c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30491cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x304920: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304924: 0x0  nop
    ctx->pc = 0x304924u;
    // NOP
    // 0x304928: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x304928u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x30492c: 0xe4800de8  swc1        $f0, 0xDE8($a0)
    ctx->pc = 0x30492cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3560), bits); }
    // 0x304930: 0x84a30028  lh          $v1, 0x28($a1)
    ctx->pc = 0x304930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_304934:
    // 0x304934: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x304934u;
    {
        const bool branch_taken_0x304934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304934) {
            ctx->pc = 0x304938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304934u;
            // 0x304938: 0x8c830d9c  lw          $v1, 0xD9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304950u;
            goto label_304950;
        }
    }
    ctx->pc = 0x30493Cu;
    // 0x30493c: 0x8c850d9c  lw          $a1, 0xD9C($a0)
    ctx->pc = 0x30493cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
    // 0x304940: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x304940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x304944: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x304944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x304948: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x304948u;
    {
        const bool branch_taken_0x304948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304948u;
            // 0x30494c: 0xac830d9c  sw          $v1, 0xD9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304948) {
            ctx->pc = 0x304958u;
            goto label_304958;
        }
    }
    ctx->pc = 0x304950u;
label_304950:
    // 0x304950: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x304950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x304954: 0xac830d9c  sw          $v1, 0xD9C($a0)
    ctx->pc = 0x304954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3484), GPR_U32(ctx, 3));
label_304958:
    // 0x304958: 0x3e00008  jr          $ra
    ctx->pc = 0x304958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304960u;
}
