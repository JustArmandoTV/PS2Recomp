#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304960
// Address: 0x304960 - 0x304a60
void sub_00304960_0x304960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304960_0x304960");
#endif

    ctx->pc = 0x304960u;

    // 0x304960: 0xac800de8  sw          $zero, 0xDE8($a0)
    ctx->pc = 0x304960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3560), GPR_U32(ctx, 0));
    // 0x304964: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x304964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304968: 0x84a30020  lh          $v1, 0x20($a1)
    ctx->pc = 0x304968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x30496c: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x30496Cu;
    {
        const bool branch_taken_0x30496c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30496c) {
            ctx->pc = 0x304970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30496Cu;
            // 0x304970: 0xc4800de4  lwc1        $f0, 0xDE4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3049ECu;
            goto label_3049ec;
        }
    }
    ctx->pc = 0x304974u;
    // 0x304974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304978: 0x0  nop
    ctx->pc = 0x304978u;
    // NOP
    // 0x30497c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30497cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304980: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x304980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x304984: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x304984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304988: 0x0  nop
    ctx->pc = 0x304988u;
    // NOP
    // 0x30498c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x30498cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x304990: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x304990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x304994: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x304994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x304998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30499c: 0x0  nop
    ctx->pc = 0x30499cu;
    // NOP
    // 0x3049a0: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x3049a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x3049a4: 0x0  nop
    ctx->pc = 0x3049a4u;
    // NOP
    // 0x3049a8: 0xe4830de0  swc1        $f3, 0xDE0($a0)
    ctx->pc = 0x3049a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3552), bits); }
    // 0x3049ac: 0x84a30026  lh          $v1, 0x26($a1)
    ctx->pc = 0x3049acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x3049b0: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3049B0u;
    {
        const bool branch_taken_0x3049b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3049b0) {
            ctx->pc = 0x3049B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3049B0u;
            // 0x3049b4: 0xe4830de4  swc1        $f3, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x304A04u;
            goto label_304a04;
        }
    }
    ctx->pc = 0x3049B8u;
    // 0x3049b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3049b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3049bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3049bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3049c0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3049c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3049c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3049c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3049c8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3049c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3049cc: 0xc4820de4  lwc1        $f2, 0xDE4($a0)
    ctx->pc = 0x3049ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3049d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3049d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x3049d4: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x3049d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3049d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3049d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x3049dc: 0x0  nop
    ctx->pc = 0x3049dcu;
    // NOP
    // 0x3049e0: 0x0  nop
    ctx->pc = 0x3049e0u;
    // NOP
    // 0x3049e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3049E4u;
    {
        const bool branch_taken_0x3049e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3049E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3049E4u;
            // 0x3049e8: 0xe4800de8  swc1        $f0, 0xDE8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049e4) {
            ctx->pc = 0x304A04u;
            goto label_304a04;
        }
    }
    ctx->pc = 0x3049ECu;
label_3049ec:
    // 0x3049ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3049ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3049f0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3049F0u;
    {
        const bool branch_taken_0x3049f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3049f0) {
            ctx->pc = 0x3049F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3049F0u;
            // 0x3049f4: 0x84a30022  lh          $v1, 0x22($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304A08u;
            goto label_304a08;
        }
    }
    ctx->pc = 0x3049F8u;
    // 0x3049f8: 0x3c033e8e  lui         $v1, 0x3E8E
    ctx->pc = 0x3049f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16014 << 16));
    // 0x3049fc: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x3049fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
    // 0x304a00: 0xac830de4  sw          $v1, 0xDE4($a0)
    ctx->pc = 0x304a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3556), GPR_U32(ctx, 3));
label_304a04:
    // 0x304a04: 0x84a30022  lh          $v1, 0x22($a1)
    ctx->pc = 0x304a04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
label_304a08:
    // 0x304a08: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x304A08u;
    {
        const bool branch_taken_0x304a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304a08) {
            ctx->pc = 0x304A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304A08u;
            // 0x304a0c: 0x8c850d9c  lw          $a1, 0xD9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304A48u;
            goto label_304a48;
        }
    }
    ctx->pc = 0x304A10u;
    // 0x304a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304a14: 0x0  nop
    ctx->pc = 0x304a14u;
    // NOP
    // 0x304a18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304a1c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x304a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x304a20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x304a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304a24: 0x0  nop
    ctx->pc = 0x304a24u;
    // NOP
    // 0x304a28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x304a28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x304a2c: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x304a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x304a30: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x304a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x304a34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304a38: 0x0  nop
    ctx->pc = 0x304a38u;
    // NOP
    // 0x304a3c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x304a3cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x304a40: 0xe4800ddc  swc1        $f0, 0xDDC($a0)
    ctx->pc = 0x304a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3548), bits); }
    // 0x304a44: 0x8c850d9c  lw          $a1, 0xD9C($a0)
    ctx->pc = 0x304a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
label_304a48:
    // 0x304a48: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x304a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x304a4c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x304a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x304a50: 0x3e00008  jr          $ra
    ctx->pc = 0x304A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304A50u;
            // 0x304a54: 0xac830d9c  sw          $v1, 0xD9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304A58u;
    // 0x304a58: 0x0  nop
    ctx->pc = 0x304a58u;
    // NOP
    // 0x304a5c: 0x0  nop
    ctx->pc = 0x304a5cu;
    // NOP
}
