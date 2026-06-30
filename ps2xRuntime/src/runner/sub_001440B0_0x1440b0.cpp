#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001440B0
// Address: 0x1440b0 - 0x144b90
void sub_001440B0_0x1440b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001440B0_0x1440b0");
#endif

    switch (ctx->pc) {
        case 0x144100u: goto label_144100;
        case 0x144328u: goto label_144328;
        case 0x14492cu: goto label_14492c;
        case 0x144a50u: goto label_144a50;
        default: break;
    }

    ctx->pc = 0x1440b0u;

    // 0x1440b0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1440b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1440b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1440b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1440b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1440b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1440bc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1440bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1440c0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1440c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1440c4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1440c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1440c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1440c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1440cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1440ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1440d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1440d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1440d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1440d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1440d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1440d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1440dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1440dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1440e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1440e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1440e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1440e8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1440e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1440ec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1440ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1440f0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1440F0u;
    {
        const bool branch_taken_0x1440f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1440F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1440F0u;
            // 0x1440f4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440f0) {
            ctx->pc = 0x144178u;
            goto label_144178;
        }
    }
    ctx->pc = 0x1440F8u;
    // 0x1440f8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1440F8u;
    SET_GPR_U32(ctx, 31, 0x144100u);
    ctx->pc = 0x1440FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1440F8u;
            // 0x1440fc: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF60u;
    if (runtime->hasFunction(0x15CF60u)) {
        auto targetFn = runtime->lookupFunction(0x15CF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144100u; }
        if (ctx->pc != 0x144100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF60_0x15cf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144100u; }
        if (ctx->pc != 0x144100u) { return; }
    }
    ctx->pc = 0x144100u;
label_144100:
    // 0x144100: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x144100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x144104: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x144104u;
    {
        const bool branch_taken_0x144104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144104) {
            ctx->pc = 0x144108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144104u;
            // 0x144108: 0xc7a201d8  lwc1        $f2, 0x1D8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x144120u;
            goto label_144120;
        }
    }
    ctx->pc = 0x14410Cu;
    // 0x14410c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14410cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x144110: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144114: 0x0  nop
    ctx->pc = 0x144114u;
    // NOP
    // 0x144118: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x144118u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[20];
    // 0x14411c: 0xc7a201d8  lwc1        $f2, 0x1D8($sp)
    ctx->pc = 0x14411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_144120:
    // 0x144120: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x144120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x144124: 0xc7a301c8  lwc1        $f3, 0x1C8($sp)
    ctx->pc = 0x144124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144128: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x144128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14412c: 0x4600a107  neg.s       $f4, $f20
    ctx->pc = 0x14412cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x144130: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x144130u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144138: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x144138u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x14413c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14413cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144140: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x144140u;
    {
        const bool branch_taken_0x144140 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144140) {
            ctx->pc = 0x144144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144140u;
            // 0x144144: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144158u;
            goto label_144158;
        }
    }
    ctx->pc = 0x144148u;
    // 0x144148: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14414c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14414cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x144150: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144150u;
    {
        const bool branch_taken_0x144150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144150u;
            // 0x144154: 0x4a100  sll         $s4, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144150) {
            ctx->pc = 0x144170u;
            goto label_144170;
        }
    }
    ctx->pc = 0x144158u;
label_144158:
    // 0x144158: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x144158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x14415c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14415cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144160: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x144160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x144164: 0x0  nop
    ctx->pc = 0x144164u;
    // NOP
    // 0x144168: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x144168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x14416c: 0x4a100  sll         $s4, $a0, 4
    ctx->pc = 0x14416cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_144170:
    // 0x144170: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x144170u;
    {
        const bool branch_taken_0x144170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144170u;
            // 0x144174: 0x8f8382c0  lw          $v1, -0x7D40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144170) {
            ctx->pc = 0x1441D8u;
            goto label_1441d8;
        }
    }
    ctx->pc = 0x144178u;
label_144178:
    // 0x144178: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x144178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x14417c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x14417cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x144180: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x144180u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144184: 0x0  nop
    ctx->pc = 0x144184u;
    // NOP
    // 0x144188: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x144188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14418c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14418cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144190: 0x0  nop
    ctx->pc = 0x144190u;
    // NOP
    // 0x144194: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x144194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144198: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x144198u;
    {
        const bool branch_taken_0x144198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144198) {
            ctx->pc = 0x14419Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144198u;
            // 0x14419c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1441B0u;
            goto label_1441b0;
        }
    }
    ctx->pc = 0x1441A0u;
    // 0x1441a0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1441a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1441a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1441a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1441a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1441A8u;
    {
        const bool branch_taken_0x1441a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1441ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1441A8u;
            // 0x1441ac: 0x3c0300ff  lui         $v1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441a8) {
            ctx->pc = 0x1441C8u;
            goto label_1441c8;
        }
    }
    ctx->pc = 0x1441B0u;
label_1441b0:
    // 0x1441b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1441b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1441b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1441b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1441b8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1441b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1441bc: 0x0  nop
    ctx->pc = 0x1441bcu;
    // NOP
    // 0x1441c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1441c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1441c4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1441c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_1441c8:
    // 0x1441c8: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1441c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1441cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1441ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1441d0: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x1441d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1441d4: 0x8f8382c0  lw          $v1, -0x7D40($gp)
    ctx->pc = 0x1441d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935232)));
label_1441d8:
    // 0x1441d8: 0x54600206  bnel        $v1, $zero, . + 4 + (0x206 << 2)
    ctx->pc = 0x1441D8u;
    {
        const bool branch_taken_0x1441d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1441d8) {
            ctx->pc = 0x1441DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1441D8u;
            // 0x1441dc: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1449F4u;
            goto label_1449f4;
        }
    }
    ctx->pc = 0x1441E0u;
    // 0x1441e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1441e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1441e4: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x1441e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1441e8: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1441e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1441ec: 0x8f8682c4  lw          $a2, -0x7D3C($gp)
    ctx->pc = 0x1441ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1441f0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1441f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1441f4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1441f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1441f8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1441f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1441fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1441fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x144200: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x144200u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x144204: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x144204u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144208: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x144208u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x14420c: 0x8f8382c4  lw          $v1, -0x7D3C($gp)
    ctx->pc = 0x14420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144210: 0xaf8682c8  sw          $a2, -0x7D38($gp)
    ctx->pc = 0x144210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935240), GPR_U32(ctx, 6));
    // 0x144214: 0x24780010  addiu       $t8, $v1, 0x10
    ctx->pc = 0x144214u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x144218: 0x1a00024f  blez        $s0, . + 4 + (0x24F << 2)
    ctx->pc = 0x144218u;
    {
        const bool branch_taken_0x144218 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x14421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144218u;
            // 0x14421c: 0xaf9882c4  sw          $t8, -0x7D3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144218) {
            ctx->pc = 0x144B58u;
            goto label_144b58;
        }
    }
    ctx->pc = 0x144220u;
    // 0x144220: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x144220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x144224: 0x142001b6  bnez        $at, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x144224u;
    {
        const bool branch_taken_0x144224 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144224u;
            // 0x144228: 0x2613fff8  addiu       $s3, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144224) {
            ctx->pc = 0x144900u;
            goto label_144900;
        }
    }
    ctx->pc = 0x14422Cu;
    // 0x14422c: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14422Cu;
    {
        const bool branch_taken_0x14422c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x144230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14422Cu;
            // 0x144230: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14422c) {
            ctx->pc = 0x14424Cu;
            goto label_14424c;
        }
    }
    ctx->pc = 0x144234u;
    // 0x144234: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x144234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x144238: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x144238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x14423c: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x14423cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x144240: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x144240u;
    {
        const bool branch_taken_0x144240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144240) {
            ctx->pc = 0x14424Cu;
            goto label_14424c;
        }
    }
    ctx->pc = 0x144248u;
    // 0x144248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x144248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14424c:
    // 0x14424c: 0x106001ac  beqz        $v1, . + 4 + (0x1AC << 2)
    ctx->pc = 0x14424Cu;
    {
        const bool branch_taken_0x14424c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14424c) {
            ctx->pc = 0x144900u;
            goto label_144900;
        }
    }
    ctx->pc = 0x144254u;
    // 0x144254: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x144254u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x144258: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x144258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x14425c: 0x7fad01b0  sq          $t5, 0x1B0($sp)
    ctx->pc = 0x14425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 13));
    // 0x144260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144264: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x144264u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x144268: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x144268u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x14426c: 0x7fad01a0  sq          $t5, 0x1A0($sp)
    ctx->pc = 0x14426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 13));
    // 0x144270: 0x3c0c006c  lui         $t4, 0x6C
    ctx->pc = 0x144270u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)108 << 16));
    // 0x144274: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x144274u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x144278: 0x3c0b006c  lui         $t3, 0x6C
    ctx->pc = 0x144278u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)108 << 16));
    // 0x14427c: 0x7fad0190  sq          $t5, 0x190($sp)
    ctx->pc = 0x14427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 13));
    // 0x144280: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x144280u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x144284: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x144284u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x144288: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x144288u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x14428c: 0x7fad0180  sq          $t5, 0x180($sp)
    ctx->pc = 0x14428cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 13));
    // 0x144290: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x144290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144294: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x144294u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x144298: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x14429c: 0x7fad0170  sq          $t5, 0x170($sp)
    ctx->pc = 0x14429cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 13));
    // 0x1442a0: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x1442a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x1442a4: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x1442a4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x1442a8: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x1442a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x1442ac: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x1442acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
    // 0x1442b0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1442b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1442b4: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x1442b4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x1442b8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1442b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1442bc: 0x7fad0150  sq          $t5, 0x150($sp)
    ctx->pc = 0x1442bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 13));
    // 0x1442c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1442c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1442c4: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x1442c4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x1442c8: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x1442c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x1442cc: 0x7fad0140  sq          $t5, 0x140($sp)
    ctx->pc = 0x1442ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 13));
    // 0x1442d0: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x1442d0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x1442d4: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x1442d4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x1442d8: 0x3c1e006c  lui         $fp, 0x6C
    ctx->pc = 0x1442d8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
    // 0x1442dc: 0x7fad0130  sq          $t5, 0x130($sp)
    ctx->pc = 0x1442dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 13));
    // 0x1442e0: 0x3c0e006c  lui         $t6, 0x6C
    ctx->pc = 0x1442e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)108 << 16));
    // 0x1442e4: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x1442e4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x1442e8: 0x7fad0120  sq          $t5, 0x120($sp)
    ctx->pc = 0x1442e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 13));
    // 0x1442ec: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x1442ecu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x1442f0: 0x7fad0110  sq          $t5, 0x110($sp)
    ctx->pc = 0x1442f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 13));
    // 0x1442f4: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x1442f4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x1442f8: 0x7fad0100  sq          $t5, 0x100($sp)
    ctx->pc = 0x1442f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 13));
    // 0x1442fc: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x1442fcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x144300: 0x7fad00f0  sq          $t5, 0xF0($sp)
    ctx->pc = 0x144300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 13));
    // 0x144304: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x144304u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x144308: 0x7fad00e0  sq          $t5, 0xE0($sp)
    ctx->pc = 0x144308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 13));
    // 0x14430c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x14430cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x144310: 0x7fad00d0  sq          $t5, 0xD0($sp)
    ctx->pc = 0x144310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 13));
    // 0x144314: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x144314u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x144318: 0x7fad00c0  sq          $t5, 0xC0($sp)
    ctx->pc = 0x144318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 13));
    // 0x14431c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x14431cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x144320: 0x7fad00b0  sq          $t5, 0xB0($sp)
    ctx->pc = 0x144320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 13));
    // 0x144324: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x144324u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
label_144328:
    // 0x144328: 0xc5a255f0  lwc1        $f2, 0x55F0($t5)
    ctx->pc = 0x144328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14432c: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x14432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x144330: 0xc5c355f4  lwc1        $f3, 0x55F4($t6)
    ctx->pc = 0x144330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144334: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x144334u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144338: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x144338u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x14433c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14433cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144340: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x144340u;
    {
        const bool branch_taken_0x144340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144340) {
            ctx->pc = 0x144344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144340u;
            // 0x144344: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144358u;
            goto label_144358;
        }
    }
    ctx->pc = 0x144348u;
    // 0x144348: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14434c: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x14434cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x144350: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144350u;
    {
        const bool branch_taken_0x144350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144350u;
            // 0x144354: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144350) {
            ctx->pc = 0x14436Cu;
            goto label_14436c;
        }
    }
    ctx->pc = 0x144358u;
label_144358:
    // 0x144358: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14435c: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x14435cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x144360: 0x0  nop
    ctx->pc = 0x144360u;
    // NOP
    // 0x144364: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x144364u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x144368: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x144368u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_14436c:
    // 0x14436c: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x14436cu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x144370: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x144370u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x144374: 0xc56255f8  lwc1        $f2, 0x55F8($t3)
    ctx->pc = 0x144374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144378: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x144378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14437c: 0xc58355fc  lwc1        $f3, 0x55FC($t4)
    ctx->pc = 0x14437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144380: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x144380u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144384: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x144384u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x144388: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x144388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14438c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14438Cu;
    {
        const bool branch_taken_0x14438c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14438c) {
            ctx->pc = 0x144390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14438Cu;
            // 0x144390: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1443A4u;
            goto label_1443a4;
        }
    }
    ctx->pc = 0x144394u;
    // 0x144394: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x144398: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x144398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x14439c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14439Cu;
    {
        const bool branch_taken_0x14439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1443A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14439Cu;
            // 0x1443a0: 0x8f8f82c4  lw          $t7, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14439c) {
            ctx->pc = 0x1443B8u;
            goto label_1443b8;
        }
    }
    ctx->pc = 0x1443A4u;
label_1443a4:
    // 0x1443a4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1443a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1443a8: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x1443a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x1443ac: 0x0  nop
    ctx->pc = 0x1443acu;
    // NOP
    // 0x1443b0: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x1443b0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x1443b4: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x1443b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_1443b8:
    // 0x1443b8: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x1443b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x1443bc: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x1443bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1443c0: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x1443c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x1443c4: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x1443c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1443c8: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x1443c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x1443cc: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x1443ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1443d0: 0xc52255f0  lwc1        $f2, 0x55F0($t1)
    ctx->pc = 0x1443d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1443d4: 0xc54355f4  lwc1        $f3, 0x55F4($t2)
    ctx->pc = 0x1443d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1443d8: 0x25f80010  addiu       $t8, $t7, 0x10
    ctx->pc = 0x1443d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x1443dc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1443dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1443e0: 0xaf9882c4  sw          $t8, -0x7D3C($gp)
    ctx->pc = 0x1443e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
    // 0x1443e4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1443e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1443e8: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x1443e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1443ec: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1443ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1443f0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1443F0u;
    {
        const bool branch_taken_0x1443f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1443f0) {
            ctx->pc = 0x1443F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1443F0u;
            // 0x1443f4: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144408u;
            goto label_144408;
        }
    }
    ctx->pc = 0x1443F8u;
    // 0x1443f8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1443f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1443fc: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x1443fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x144400: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144400u;
    {
        const bool branch_taken_0x144400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144400u;
            // 0x144404: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144400) {
            ctx->pc = 0x14441Cu;
            goto label_14441c;
        }
    }
    ctx->pc = 0x144408u;
label_144408:
    // 0x144408: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14440c: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x14440cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x144410: 0x0  nop
    ctx->pc = 0x144410u;
    // NOP
    // 0x144414: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x144414u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x144418: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x144418u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_14441c:
    // 0x14441c: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x14441cu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x144420: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x144420u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x144424: 0xc4e255f8  lwc1        $f2, 0x55F8($a3)
    ctx->pc = 0x144424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144428: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x144428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14442c: 0xc50355fc  lwc1        $f3, 0x55FC($t0)
    ctx->pc = 0x14442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144430: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x144430u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144434: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x144434u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x144438: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x144438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14443c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14443Cu;
    {
        const bool branch_taken_0x14443c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14443c) {
            ctx->pc = 0x144440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14443Cu;
            // 0x144440: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144454u;
            goto label_144454;
        }
    }
    ctx->pc = 0x144444u;
    // 0x144444: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144444u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x144448: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x144448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x14444c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14444Cu;
    {
        const bool branch_taken_0x14444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14444Cu;
            // 0x144450: 0x8f8f82c4  lw          $t7, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14444c) {
            ctx->pc = 0x144468u;
            goto label_144468;
        }
    }
    ctx->pc = 0x144454u;
label_144454:
    // 0x144454: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144454u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x144458: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x144458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x14445c: 0x0  nop
    ctx->pc = 0x14445cu;
    // NOP
    // 0x144460: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x144460u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x144464: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144464u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_144468:
    // 0x144468: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x144468u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x14446c: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x14446cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144470: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x144470u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x144474: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144474u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144478: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x144478u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x14447c: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x14447cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144480: 0xc4a255f0  lwc1        $f2, 0x55F0($a1)
    ctx->pc = 0x144480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144484: 0xc4c355f4  lwc1        $f3, 0x55F4($a2)
    ctx->pc = 0x144484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144488: 0x25f80010  addiu       $t8, $t7, 0x10
    ctx->pc = 0x144488u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x14448c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x14448cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144490: 0xaf9882c4  sw          $t8, -0x7D3C($gp)
    ctx->pc = 0x144490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
    // 0x144494: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x144494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144498: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x144498u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14449c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14449cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1444a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1444A0u;
    {
        const bool branch_taken_0x1444a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1444a0) {
            ctx->pc = 0x1444A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1444A0u;
            // 0x1444a4: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1444B8u;
            goto label_1444b8;
        }
    }
    ctx->pc = 0x1444A8u;
    // 0x1444a8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1444a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1444ac: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x1444acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1444b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1444B0u;
    {
        const bool branch_taken_0x1444b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1444B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1444B0u;
            // 0x1444b4: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444b0) {
            ctx->pc = 0x1444CCu;
            goto label_1444cc;
        }
    }
    ctx->pc = 0x1444B8u;
label_1444b8:
    // 0x1444b8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1444b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1444bc: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x1444bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1444c0: 0x0  nop
    ctx->pc = 0x1444c0u;
    // NOP
    // 0x1444c4: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x1444c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x1444c8: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x1444c8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_1444cc:
    // 0x1444cc: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x1444ccu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x1444d0: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x1444d0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x1444d4: 0xc46255f8  lwc1        $f2, 0x55F8($v1)
    ctx->pc = 0x1444d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1444d8: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x1444d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1444dc: 0xc48355fc  lwc1        $f3, 0x55FC($a0)
    ctx->pc = 0x1444dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1444e0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1444e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1444e4: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x1444e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x1444e8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1444e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1444ec: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1444ECu;
    {
        const bool branch_taken_0x1444ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1444ec) {
            ctx->pc = 0x1444F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1444ECu;
            // 0x1444f0: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144504u;
            goto label_144504;
        }
    }
    ctx->pc = 0x1444F4u;
    // 0x1444f4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1444f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1444f8: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x1444f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x1444fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1444FCu;
    {
        const bool branch_taken_0x1444fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1444FCu;
            // 0x144500: 0x8f8f82c4  lw          $t7, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444fc) {
            ctx->pc = 0x144518u;
            goto label_144518;
        }
    }
    ctx->pc = 0x144504u;
label_144504:
    // 0x144504: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144504u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x144508: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x144508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x14450c: 0x0  nop
    ctx->pc = 0x14450cu;
    // NOP
    // 0x144510: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x144510u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x144514: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144514u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_144518:
    // 0x144518: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x144518u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x14451c: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x14451cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144520: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x144520u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x144524: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144524u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144528: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x144528u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x14452c: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x14452cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144530: 0xc6e255f0  lwc1        $f2, 0x55F0($s7)
    ctx->pc = 0x144530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144534: 0xc6c355f4  lwc1        $f3, 0x55F4($s6)
    ctx->pc = 0x144534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144538: 0x25f80010  addiu       $t8, $t7, 0x10
    ctx->pc = 0x144538u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x14453c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x14453cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144540: 0xaf9882c4  sw          $t8, -0x7D3C($gp)
    ctx->pc = 0x144540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
    // 0x144544: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x144544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144548: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x144548u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14454c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14454cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144550: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x144550u;
    {
        const bool branch_taken_0x144550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144550) {
            ctx->pc = 0x144554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144550u;
            // 0x144554: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144568u;
            goto label_144568;
        }
    }
    ctx->pc = 0x144558u;
    // 0x144558: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144558u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14455c: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x14455cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x144560: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144560u;
    {
        const bool branch_taken_0x144560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144560u;
            // 0x144564: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144560) {
            ctx->pc = 0x14457Cu;
            goto label_14457c;
        }
    }
    ctx->pc = 0x144568u;
label_144568:
    // 0x144568: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144568u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14456c: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x14456cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x144570: 0x0  nop
    ctx->pc = 0x144570u;
    // NOP
    // 0x144574: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x144574u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x144578: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x144578u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_14457c:
    // 0x14457c: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x14457cu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x144580: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x144580u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x144584: 0x7baf01b0  lq          $t7, 0x1B0($sp)
    ctx->pc = 0x144584u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x144588: 0xc624001c  lwc1        $f4, 0x1C($s1)
    ctx->pc = 0x144588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14458c: 0xc7c355fc  lwc1        $f3, 0x55FC($fp)
    ctx->pc = 0x14458cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144590: 0xc5e255f8  lwc1        $f2, 0x55F8($t7)
    ctx->pc = 0x144590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144594: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x144594u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144598: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x144598u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x14459c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14459cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1445a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1445A0u;
    {
        const bool branch_taken_0x1445a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1445a0) {
            ctx->pc = 0x1445A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1445A0u;
            // 0x1445a4: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1445B8u;
            goto label_1445b8;
        }
    }
    ctx->pc = 0x1445A8u;
    // 0x1445a8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1445a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1445ac: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x1445acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x1445b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1445B0u;
    {
        const bool branch_taken_0x1445b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1445B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1445B0u;
            // 0x1445b4: 0x8f8f82c4  lw          $t7, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1445b0) {
            ctx->pc = 0x1445CCu;
            goto label_1445cc;
        }
    }
    ctx->pc = 0x1445B8u;
label_1445b8:
    // 0x1445b8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1445b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1445bc: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x1445bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x1445c0: 0x0  nop
    ctx->pc = 0x1445c0u;
    // NOP
    // 0x1445c4: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x1445c4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x1445c8: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x1445c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_1445cc:
    // 0x1445cc: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x1445ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x1445d0: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x1445d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1445d4: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x1445d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x1445d8: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x1445d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1445dc: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x1445dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x1445e0: 0x7baf01a0  lq          $t7, 0x1A0($sp)
    ctx->pc = 0x1445e0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1445e4: 0x8f9882c4  lw          $t8, -0x7D3C($gp)
    ctx->pc = 0x1445e4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1445e8: 0xc5e355f4  lwc1        $f3, 0x55F4($t7)
    ctx->pc = 0x1445e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1445ec: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x1445ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x1445f0: 0xaf9882c4  sw          $t8, -0x7D3C($gp)
    ctx->pc = 0x1445f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
    // 0x1445f4: 0x7baf0190  lq          $t7, 0x190($sp)
    ctx->pc = 0x1445f4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1445f8: 0xc5e255f0  lwc1        $f2, 0x55F0($t7)
    ctx->pc = 0x1445f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1445fc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1445fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144600: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x144600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144604: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x144604u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x144608: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x144608u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14460c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14460Cu;
    {
        const bool branch_taken_0x14460c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14460c) {
            ctx->pc = 0x144610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14460Cu;
            // 0x144610: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144624u;
            goto label_144624;
        }
    }
    ctx->pc = 0x144614u;
    // 0x144614: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144614u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x144618: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x144618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x14461c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14461Cu;
    {
        const bool branch_taken_0x14461c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14461Cu;
            // 0x144620: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14461c) {
            ctx->pc = 0x144638u;
            goto label_144638;
        }
    }
    ctx->pc = 0x144624u;
label_144624:
    // 0x144624: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x144628: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x144628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x14462c: 0x0  nop
    ctx->pc = 0x14462cu;
    // NOP
    // 0x144630: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x144630u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x144634: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x144634u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_144638:
    // 0x144638: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x144638u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x14463c: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x14463cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x144640: 0x7baf0180  lq          $t7, 0x180($sp)
    ctx->pc = 0x144640u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x144644: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x144644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x144648: 0xc5e355fc  lwc1        $f3, 0x55FC($t7)
    ctx->pc = 0x144648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14464c: 0x7baf0170  lq          $t7, 0x170($sp)
    ctx->pc = 0x14464cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x144650: 0xc5e255f8  lwc1        $f2, 0x55F8($t7)
    ctx->pc = 0x144650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144654: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x144654u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144658: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x144658u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x14465c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14465cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144660: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x144660u;
    {
        const bool branch_taken_0x144660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144660) {
            ctx->pc = 0x144664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144660u;
            // 0x144664: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144678u;
            goto label_144678;
        }
    }
    ctx->pc = 0x144668u;
    // 0x144668: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144668u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14466c: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x14466cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x144670: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144670u;
    {
        const bool branch_taken_0x144670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144670u;
            // 0x144674: 0x8f8f82c4  lw          $t7, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144670) {
            ctx->pc = 0x14468Cu;
            goto label_14468c;
        }
    }
    ctx->pc = 0x144678u;
label_144678:
    // 0x144678: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144678u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14467c: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x14467cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x144680: 0x0  nop
    ctx->pc = 0x144680u;
    // NOP
    // 0x144684: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x144684u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x144688: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144688u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_14468c:
    // 0x14468c: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x14468cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x144690: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144690u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144694: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x144694u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x144698: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144698u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x14469c: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x14469cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x1446a0: 0x7baf0160  lq          $t7, 0x160($sp)
    ctx->pc = 0x1446a0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1446a4: 0x8f9882c4  lw          $t8, -0x7D3C($gp)
    ctx->pc = 0x1446a4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1446a8: 0xc5e355f4  lwc1        $f3, 0x55F4($t7)
    ctx->pc = 0x1446a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1446ac: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x1446acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x1446b0: 0xaf9882c4  sw          $t8, -0x7D3C($gp)
    ctx->pc = 0x1446b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
    // 0x1446b4: 0x7baf0150  lq          $t7, 0x150($sp)
    ctx->pc = 0x1446b4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1446b8: 0xc5e255f0  lwc1        $f2, 0x55F0($t7)
    ctx->pc = 0x1446b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1446bc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1446bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1446c0: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x1446c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1446c4: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x1446c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1446c8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1446c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1446cc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1446CCu;
    {
        const bool branch_taken_0x1446cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1446cc) {
            ctx->pc = 0x1446D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1446CCu;
            // 0x1446d0: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1446E4u;
            goto label_1446e4;
        }
    }
    ctx->pc = 0x1446D4u;
    // 0x1446d4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1446d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1446d8: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x1446d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1446dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1446DCu;
    {
        const bool branch_taken_0x1446dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446DCu;
            // 0x1446e0: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446dc) {
            ctx->pc = 0x1446F8u;
            goto label_1446f8;
        }
    }
    ctx->pc = 0x1446E4u;
label_1446e4:
    // 0x1446e4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1446e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1446e8: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x1446e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1446ec: 0x0  nop
    ctx->pc = 0x1446ecu;
    // NOP
    // 0x1446f0: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x1446f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x1446f4: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x1446f4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_1446f8:
    // 0x1446f8: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x1446f8u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x1446fc: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x1446fcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x144700: 0x7baf0140  lq          $t7, 0x140($sp)
    ctx->pc = 0x144700u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x144704: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x144704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x144708: 0xc5e355fc  lwc1        $f3, 0x55FC($t7)
    ctx->pc = 0x144708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14470c: 0x7baf0130  lq          $t7, 0x130($sp)
    ctx->pc = 0x14470cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x144710: 0xc5e255f8  lwc1        $f2, 0x55F8($t7)
    ctx->pc = 0x144710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144714: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x144714u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144718: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x144718u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x14471c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14471cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144720: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x144720u;
    {
        const bool branch_taken_0x144720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144720) {
            ctx->pc = 0x144724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144720u;
            // 0x144724: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144738u;
            goto label_144738;
        }
    }
    ctx->pc = 0x144728u;
    // 0x144728: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144728u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14472c: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x14472cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x144730: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144730u;
    {
        const bool branch_taken_0x144730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144730u;
            // 0x144734: 0x8f8f82c4  lw          $t7, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144730) {
            ctx->pc = 0x14474Cu;
            goto label_14474c;
        }
    }
    ctx->pc = 0x144738u;
label_144738:
    // 0x144738: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144738u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14473c: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x14473cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x144740: 0x0  nop
    ctx->pc = 0x144740u;
    // NOP
    // 0x144744: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x144744u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x144748: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144748u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_14474c:
    // 0x14474c: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x14474cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x144750: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144750u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144754: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x144754u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x144758: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144758u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x14475c: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x14475cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x144760: 0x7baf0120  lq          $t7, 0x120($sp)
    ctx->pc = 0x144760u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x144764: 0x8f9882c4  lw          $t8, -0x7D3C($gp)
    ctx->pc = 0x144764u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144768: 0xc5e355f4  lwc1        $f3, 0x55F4($t7)
    ctx->pc = 0x144768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14476c: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x14476cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x144770: 0xaf9882c4  sw          $t8, -0x7D3C($gp)
    ctx->pc = 0x144770u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
    // 0x144774: 0x7baf0110  lq          $t7, 0x110($sp)
    ctx->pc = 0x144774u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x144778: 0xc5e255f0  lwc1        $f2, 0x55F0($t7)
    ctx->pc = 0x144778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14477c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x14477cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144780: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x144780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144784: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x144784u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x144788: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x144788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14478c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14478Cu;
    {
        const bool branch_taken_0x14478c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14478c) {
            ctx->pc = 0x144790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14478Cu;
            // 0x144790: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1447A4u;
            goto label_1447a4;
        }
    }
    ctx->pc = 0x144794u;
    // 0x144794: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x144798: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x144798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x14479c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14479Cu;
    {
        const bool branch_taken_0x14479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1447A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14479Cu;
            // 0x1447a0: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14479c) {
            ctx->pc = 0x1447B8u;
            goto label_1447b8;
        }
    }
    ctx->pc = 0x1447A4u;
label_1447a4:
    // 0x1447a4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1447a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1447a8: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x1447a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1447ac: 0x0  nop
    ctx->pc = 0x1447acu;
    // NOP
    // 0x1447b0: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x1447b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x1447b4: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x1447b4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_1447b8:
    // 0x1447b8: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x1447b8u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x1447bc: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x1447bcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x1447c0: 0x7baf0100  lq          $t7, 0x100($sp)
    ctx->pc = 0x1447c0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1447c4: 0xc6240034  lwc1        $f4, 0x34($s1)
    ctx->pc = 0x1447c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1447c8: 0xc5e355fc  lwc1        $f3, 0x55FC($t7)
    ctx->pc = 0x1447c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1447cc: 0x7baf00f0  lq          $t7, 0xF0($sp)
    ctx->pc = 0x1447ccu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1447d0: 0xc5e255f8  lwc1        $f2, 0x55F8($t7)
    ctx->pc = 0x1447d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1447d4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1447d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1447d8: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x1447d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x1447dc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1447dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1447e0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1447E0u;
    {
        const bool branch_taken_0x1447e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1447e0) {
            ctx->pc = 0x1447E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1447E0u;
            // 0x1447e4: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1447F8u;
            goto label_1447f8;
        }
    }
    ctx->pc = 0x1447E8u;
    // 0x1447e8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1447e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1447ec: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x1447ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x1447f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1447F0u;
    {
        const bool branch_taken_0x1447f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1447F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1447F0u;
            // 0x1447f4: 0x8f8f82c4  lw          $t7, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1447f0) {
            ctx->pc = 0x14480Cu;
            goto label_14480c;
        }
    }
    ctx->pc = 0x1447F8u;
label_1447f8:
    // 0x1447f8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1447f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1447fc: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x1447fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x144800: 0x0  nop
    ctx->pc = 0x144800u;
    // NOP
    // 0x144804: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x144804u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x144808: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144808u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_14480c:
    // 0x14480c: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x14480cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x144810: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144810u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144814: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x144814u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x144818: 0x8f8f82c4  lw          $t7, -0x7D3C($gp)
    ctx->pc = 0x144818u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x14481c: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x14481cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x144820: 0x7baf00e0  lq          $t7, 0xE0($sp)
    ctx->pc = 0x144820u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x144824: 0x8f9882c4  lw          $t8, -0x7D3C($gp)
    ctx->pc = 0x144824u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144828: 0xc5e355f4  lwc1        $f3, 0x55F4($t7)
    ctx->pc = 0x144828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14482c: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x14482cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x144830: 0xaf9882c4  sw          $t8, -0x7D3C($gp)
    ctx->pc = 0x144830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
    // 0x144834: 0x7baf00d0  lq          $t7, 0xD0($sp)
    ctx->pc = 0x144834u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x144838: 0xc5e255f0  lwc1        $f2, 0x55F0($t7)
    ctx->pc = 0x144838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14483c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x14483cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144840: 0xc6220038  lwc1        $f2, 0x38($s1)
    ctx->pc = 0x144840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144844: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x144844u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x144848: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x144848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14484c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14484Cu;
    {
        const bool branch_taken_0x14484c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14484c) {
            ctx->pc = 0x144850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14484Cu;
            // 0x144850: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144864u;
            goto label_144864;
        }
    }
    ctx->pc = 0x144854u;
    // 0x144854: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x144858: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x144858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x14485c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14485Cu;
    {
        const bool branch_taken_0x14485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14485Cu;
            // 0x144860: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14485c) {
            ctx->pc = 0x144878u;
            goto label_144878;
        }
    }
    ctx->pc = 0x144864u;
label_144864:
    // 0x144864: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x144868: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x144868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x14486c: 0x0  nop
    ctx->pc = 0x14486cu;
    // NOP
    // 0x144870: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x144870u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x144874: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x144874u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_144878:
    // 0x144878: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x144878u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x14487c: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x14487cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x144880: 0x7baf00c0  lq          $t7, 0xC0($sp)
    ctx->pc = 0x144880u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x144884: 0xc624003c  lwc1        $f4, 0x3C($s1)
    ctx->pc = 0x144884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x144888: 0xc5e355fc  lwc1        $f3, 0x55FC($t7)
    ctx->pc = 0x144888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14488c: 0x7baf00b0  lq          $t7, 0xB0($sp)
    ctx->pc = 0x14488cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x144890: 0xc5e255f8  lwc1        $f2, 0x55F8($t7)
    ctx->pc = 0x144890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144894: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x144894u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144898: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x144898u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x14489c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14489cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1448a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1448A0u;
    {
        const bool branch_taken_0x1448a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1448a0) {
            ctx->pc = 0x1448A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1448A0u;
            // 0x1448a4: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1448B8u;
            goto label_1448b8;
        }
    }
    ctx->pc = 0x1448A8u;
    // 0x1448a8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1448a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1448ac: 0x44191000  mfc1        $t9, $f2
    ctx->pc = 0x1448acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 25, bits); }
    // 0x1448b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1448B0u;
    {
        const bool branch_taken_0x1448b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1448B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1448B0u;
            // 0x1448b4: 0x8f9882c4  lw          $t8, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1448b0) {
            ctx->pc = 0x1448CCu;
            goto label_1448cc;
        }
    }
    ctx->pc = 0x1448B8u;
label_1448b8:
    // 0x1448b8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1448b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1448bc: 0x44191000  mfc1        $t9, $f2
    ctx->pc = 0x1448bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 25, bits); }
    // 0x1448c0: 0x0  nop
    ctx->pc = 0x1448c0u;
    // NOP
    // 0x1448c4: 0x332c825  or          $t9, $t9, $s2
    ctx->pc = 0x1448c4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 18));
    // 0x1448c8: 0x8f9882c4  lw          $t8, -0x7D3C($gp)
    ctx->pc = 0x1448c8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_1448cc:
    // 0x1448cc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1448ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1448d0: 0x2b3782a  slt         $t7, $s5, $s3
    ctx->pc = 0x1448d0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1448d4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1448d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1448d8: 0xaf190004  sw          $t9, 0x4($t8)
    ctx->pc = 0x1448d8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 25));
    // 0x1448dc: 0x8f9882c4  lw          $t8, -0x7D3C($gp)
    ctx->pc = 0x1448dcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1448e0: 0xaf140008  sw          $s4, 0x8($t8)
    ctx->pc = 0x1448e0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 20));
    // 0x1448e4: 0x8f9882c4  lw          $t8, -0x7D3C($gp)
    ctx->pc = 0x1448e4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1448e8: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x1448e8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x1448ec: 0x8f9882c4  lw          $t8, -0x7D3C($gp)
    ctx->pc = 0x1448ecu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1448f0: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x1448f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x1448f4: 0x15e0fe8c  bnez        $t7, . + 4 + (-0x174 << 2)
    ctx->pc = 0x1448F4u;
    {
        const bool branch_taken_0x1448f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1448F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1448F4u;
            // 0x1448f8: 0xaf9882c4  sw          $t8, -0x7D3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1448f4) {
            ctx->pc = 0x144328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_144328;
        }
    }
    ctx->pc = 0x1448FCu;
    // 0x1448fc: 0x0  nop
    ctx->pc = 0x1448fcu;
    // NOP
label_144900:
    // 0x144900: 0x2b0082a  slt         $at, $s5, $s0
    ctx->pc = 0x144900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x144904: 0x10200094  beqz        $at, . + 4 + (0x94 << 2)
    ctx->pc = 0x144904u;
    {
        const bool branch_taken_0x144904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144904) {
            ctx->pc = 0x144B58u;
            goto label_144b58;
        }
    }
    ctx->pc = 0x14490Cu;
    // 0x14490c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x14490cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x144910: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x144910u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x144914: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x144914u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x144918: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x144918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14491c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14491cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x144920: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x144920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x144924: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x144924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x144928: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x144928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_14492c:
    // 0x14492c: 0xc4a055f0  lwc1        $f0, 0x55F0($a1)
    ctx->pc = 0x14492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144930: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x144930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144934: 0xc4c155f4  lwc1        $f1, 0x55F4($a2)
    ctx->pc = 0x144934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144938: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x144938u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x14493c: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x14493cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x144940: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x144940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144944: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x144944u;
    {
        const bool branch_taken_0x144944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144944) {
            ctx->pc = 0x144948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144944u;
            // 0x144948: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14495Cu;
            goto label_14495c;
        }
    }
    ctx->pc = 0x14494Cu;
    // 0x14494c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14494cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144950: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x144950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x144954: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144954u;
    {
        const bool branch_taken_0x144954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144954u;
            // 0x144958: 0x18383c  dsll32      $a3, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144954) {
            ctx->pc = 0x144970u;
            goto label_144970;
        }
    }
    ctx->pc = 0x14495Cu;
label_14495c:
    // 0x14495c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14495cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144960: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x144960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x144964: 0x0  nop
    ctx->pc = 0x144964u;
    // NOP
    // 0x144968: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x144968u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x14496c: 0x18383c  dsll32      $a3, $t8, 0
    ctx->pc = 0x14496cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) << (32 + 0));
label_144970:
    // 0x144970: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x144970u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x144974: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x144974u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x144978: 0xc46055f8  lwc1        $f0, 0x55F8($v1)
    ctx->pc = 0x144978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14497c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x14497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144980: 0xc48155fc  lwc1        $f1, 0x55FC($a0)
    ctx->pc = 0x144980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144984: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x144984u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x144988: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x144988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x14498c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x14498cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144990: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x144990u;
    {
        const bool branch_taken_0x144990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144990) {
            ctx->pc = 0x144994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144990u;
            // 0x144994: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1449A8u;
            goto label_1449a8;
        }
    }
    ctx->pc = 0x144998u;
    // 0x144998: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14499c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x14499cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1449a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1449A0u;
    {
        const bool branch_taken_0x1449a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1449A0u;
            // 0x1449a4: 0x8f8882c4  lw          $t0, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449a0) {
            ctx->pc = 0x1449BCu;
            goto label_1449bc;
        }
    }
    ctx->pc = 0x1449A8u;
label_1449a8:
    // 0x1449a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1449a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1449ac: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1449acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1449b0: 0x0  nop
    ctx->pc = 0x1449b0u;
    // NOP
    // 0x1449b4: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1449b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1449b8: 0x8f8882c4  lw          $t0, -0x7D3C($gp)
    ctx->pc = 0x1449b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_1449bc:
    // 0x1449bc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1449bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1449c0: 0x2b0382a  slt         $a3, $s5, $s0
    ctx->pc = 0x1449c0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1449c4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1449c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1449c8: 0xad090004  sw          $t1, 0x4($t0)
    ctx->pc = 0x1449c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 9));
    // 0x1449cc: 0x8f8882c4  lw          $t0, -0x7D3C($gp)
    ctx->pc = 0x1449ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1449d0: 0xad140008  sw          $s4, 0x8($t0)
    ctx->pc = 0x1449d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 20));
    // 0x1449d4: 0x8f8882c4  lw          $t0, -0x7D3C($gp)
    ctx->pc = 0x1449d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1449d8: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x1449d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x1449dc: 0x8f8882c4  lw          $t0, -0x7D3C($gp)
    ctx->pc = 0x1449dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x1449e0: 0x25180010  addiu       $t8, $t0, 0x10
    ctx->pc = 0x1449e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1449e4: 0x14e0ffd1  bnez        $a3, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1449E4u;
    {
        const bool branch_taken_0x1449e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1449E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1449E4u;
            // 0x1449e8: 0xaf9882c4  sw          $t8, -0x7D3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449e4) {
            ctx->pc = 0x14492Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14492c;
        }
    }
    ctx->pc = 0x1449ECu;
    // 0x1449ec: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1449ECu;
    {
        const bool branch_taken_0x1449ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1449ec) {
            ctx->pc = 0x144B58u;
            goto label_144b58;
        }
    }
    ctx->pc = 0x1449F4u;
label_1449f4:
    // 0x1449f4: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x1449f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1449f8: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x1449f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1449fc: 0x8f8782c4  lw          $a3, -0x7D3C($gp)
    ctx->pc = 0x1449fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144a00: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x144a00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x144a04: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x144a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x144a08: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x144a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x144a0c: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x144a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x144a10: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x144a10u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x144a14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x144a14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a18: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x144a18u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x144a1c: 0x8f8482c4  lw          $a0, -0x7D3C($gp)
    ctx->pc = 0x144a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144a20: 0xaf8782c8  sw          $a3, -0x7D38($gp)
    ctx->pc = 0x144a20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935240), GPR_U32(ctx, 7));
    // 0x144a24: 0x24980010  addiu       $t8, $a0, 0x10
    ctx->pc = 0x144a24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x144a28: 0x1a00004b  blez        $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x144A28u;
    {
        const bool branch_taken_0x144a28 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x144A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144A28u;
            // 0x144a2c: 0xaf9882c4  sw          $t8, -0x7D3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a28) {
            ctx->pc = 0x144B58u;
            goto label_144b58;
        }
    }
    ctx->pc = 0x144A30u;
    // 0x144a30: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x144a30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x144a34: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x144a34u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x144a38: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x144a38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x144a3c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x144a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x144a40: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x144a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x144a44: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x144a44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x144a48: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x144a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x144a4c: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x144a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_144a50:
    // 0x144a50: 0x8e2d0008  lw          $t5, 0x8($s1)
    ctx->pc = 0x144a50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x144a54: 0x18483c  dsll32      $t1, $t8, 0
    ctx->pc = 0x144a54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << (32 + 0));
    // 0x144a58: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x144a58u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x144a5c: 0xd5602  srl         $t2, $t5, 24
    ctx->pc = 0x144a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 13), 24));
    // 0x144a60: 0xd4402  srl         $t0, $t5, 16
    ctx->pc = 0x144a60u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x144a64: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x144a64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x144a68: 0x310c00ff  andi        $t4, $t0, 0xFF
    ctx->pc = 0x144a68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x144a6c: 0x8f8982c4  lw          $t1, -0x7D3C($gp)
    ctx->pc = 0x144a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144a70: 0xd4202  srl         $t0, $t5, 8
    ctx->pc = 0x144a70u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x144a74: 0x310a00ff  andi        $t2, $t0, 0xFF
    ctx->pc = 0x144a74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x144a78: 0x31a800ff  andi        $t0, $t5, 0xFF
    ctx->pc = 0x144a78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x144a7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x144a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x144a80: 0xad2c0004  sw          $t4, 0x4($t1)
    ctx->pc = 0x144a80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 12));
    // 0x144a84: 0x84842  srl         $t1, $t0, 1
    ctx->pc = 0x144a84u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x144a88: 0x8f8882c4  lw          $t0, -0x7D3C($gp)
    ctx->pc = 0x144a88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144a8c: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x144a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x144a90: 0x8f8882c4  lw          $t0, -0x7D3C($gp)
    ctx->pc = 0x144a90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144a94: 0xad09000c  sw          $t1, 0xC($t0)
    ctx->pc = 0x144a94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 9));
    // 0x144a98: 0xc4c055f0  lwc1        $f0, 0x55F0($a2)
    ctx->pc = 0x144a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144a9c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x144a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144aa0: 0xc4e155f4  lwc1        $f1, 0x55F4($a3)
    ctx->pc = 0x144aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144aa4: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x144aa4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x144aa8: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x144aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x144aac: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x144aacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144ab0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x144AB0u;
    {
        const bool branch_taken_0x144ab0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144ab0) {
            ctx->pc = 0x144AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144AB0u;
            // 0x144ab4: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144AC8u;
            goto label_144ac8;
        }
    }
    ctx->pc = 0x144AB8u;
    // 0x144ab8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144ab8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144abc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x144abcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x144ac0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144AC0u;
    {
        const bool branch_taken_0x144ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144AC0u;
            // 0x144ac4: 0x8f8882c4  lw          $t0, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ac0) {
            ctx->pc = 0x144ADCu;
            goto label_144adc;
        }
    }
    ctx->pc = 0x144AC8u;
label_144ac8:
    // 0x144ac8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144ac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144acc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x144accu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x144ad0: 0x0  nop
    ctx->pc = 0x144ad0u;
    // NOP
    // 0x144ad4: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x144ad4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x144ad8: 0x8f8882c4  lw          $t0, -0x7D3C($gp)
    ctx->pc = 0x144ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_144adc:
    // 0x144adc: 0xad090010  sw          $t1, 0x10($t0)
    ctx->pc = 0x144adcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 9));
    // 0x144ae0: 0xc48055f8  lwc1        $f0, 0x55F8($a0)
    ctx->pc = 0x144ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144ae4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x144ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144ae8: 0xc4a155fc  lwc1        $f1, 0x55FC($a1)
    ctx->pc = 0x144ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144aec: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x144aecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x144af0: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x144af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x144af4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x144af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144af8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x144AF8u;
    {
        const bool branch_taken_0x144af8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144af8) {
            ctx->pc = 0x144AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144AF8u;
            // 0x144afc: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x144B10u;
            goto label_144b10;
        }
    }
    ctx->pc = 0x144B00u;
    // 0x144b00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144b00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144b04: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x144b04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x144b08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144B08u;
    {
        const bool branch_taken_0x144b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144B08u;
            // 0x144b0c: 0x8f8982c4  lw          $t1, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b08) {
            ctx->pc = 0x144B24u;
            goto label_144b24;
        }
    }
    ctx->pc = 0x144B10u;
label_144b10:
    // 0x144b10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144b14: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x144b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x144b18: 0x0  nop
    ctx->pc = 0x144b18u;
    // NOP
    // 0x144b1c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x144b1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x144b20: 0x8f8982c4  lw          $t1, -0x7D3C($gp)
    ctx->pc = 0x144b20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_144b24:
    // 0x144b24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x144b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x144b28: 0x70402a  slt         $t0, $v1, $s0
    ctx->pc = 0x144b28u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x144b2c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x144b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x144b30: 0xad2a0014  sw          $t2, 0x14($t1)
    ctx->pc = 0x144b30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 10));
    // 0x144b34: 0x8f8982c4  lw          $t1, -0x7D3C($gp)
    ctx->pc = 0x144b34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144b38: 0xad340018  sw          $s4, 0x18($t1)
    ctx->pc = 0x144b38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 20));
    // 0x144b3c: 0x8f8982c4  lw          $t1, -0x7D3C($gp)
    ctx->pc = 0x144b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144b40: 0xad20001c  sw          $zero, 0x1C($t1)
    ctx->pc = 0x144b40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
    // 0x144b44: 0x8f8982c4  lw          $t1, -0x7D3C($gp)
    ctx->pc = 0x144b44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x144b48: 0x25380020  addiu       $t8, $t1, 0x20
    ctx->pc = 0x144b48u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x144b4c: 0x1500ffc0  bnez        $t0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x144B4Cu;
    {
        const bool branch_taken_0x144b4c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x144B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144B4Cu;
            // 0x144b50: 0xaf9882c4  sw          $t8, -0x7D3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b4c) {
            ctx->pc = 0x144A50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_144a50;
        }
    }
    ctx->pc = 0x144B54u;
    // 0x144b54: 0x0  nop
    ctx->pc = 0x144b54u;
    // NOP
label_144b58:
    // 0x144b58: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x144b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x144b5c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x144b5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x144b60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x144b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x144b64: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x144b64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x144b68: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x144b68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x144b6c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x144b6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144b70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x144b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144b74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x144b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144b78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x144b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144b7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x144b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144b80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x144b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144b84: 0x3e00008  jr          $ra
    ctx->pc = 0x144B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144B84u;
            // 0x144b88: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144B8Cu;
    // 0x144b8c: 0x0  nop
    ctx->pc = 0x144b8cu;
    // NOP
}
