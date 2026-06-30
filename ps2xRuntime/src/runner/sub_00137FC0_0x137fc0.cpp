#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137FC0
// Address: 0x137fc0 - 0x1380e0
void sub_00137FC0_0x137fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137FC0_0x137fc0");
#endif

    switch (ctx->pc) {
        case 0x137fd4u: goto label_137fd4;
        default: break;
    }

    ctx->pc = 0x137fc0u;

    // 0x137fc0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x137fc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137fc4: 0x2d010002  sltiu       $at, $t0, 0x2
    ctx->pc = 0x137fc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137fc8: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x137FC8u;
    {
        const bool branch_taken_0x137fc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x137FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137FC8u;
            // 0x137fcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137fc8) {
            ctx->pc = 0x138010u;
            goto label_138010;
        }
    }
    ctx->pc = 0x137FD0u;
    // 0x137fd0: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x137fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_137fd4:
    // 0x137fd4: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x137fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x137fd8: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x137fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x137fdc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x137fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x137fe0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x137fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137fe4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x137fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137fe8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x137FE8u;
    {
        const bool branch_taken_0x137fe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137fe8) {
            ctx->pc = 0x137FF8u;
            goto label_137ff8;
        }
    }
    ctx->pc = 0x137FF0u;
    // 0x137ff0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137FF0u;
    {
        const bool branch_taken_0x137ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137FF0u;
            // 0x137ff4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ff0) {
            ctx->pc = 0x138000u;
            goto label_138000;
        }
    }
    ctx->pc = 0x137FF8u;
label_137ff8:
    // 0x137ff8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x137ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ffc: 0x0  nop
    ctx->pc = 0x137ffcu;
    // NOP
label_138000:
    // 0x138000: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x138000u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x138004: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x138004u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138008: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x138008u;
    {
        const bool branch_taken_0x138008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138008) {
            ctx->pc = 0x13800Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138008u;
            // 0x13800c: 0x1281821  addu        $v1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137FD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137fd4;
        }
    }
    ctx->pc = 0x138010u;
label_138010:
    // 0x138010: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x138010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x138014: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x138014u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x138018: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x138018u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x13801c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13801Cu;
    {
        const bool branch_taken_0x13801c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13801Cu;
            // 0x138020: 0x854821  addu        $t1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13801c) {
            ctx->pc = 0x138030u;
            goto label_138030;
        }
    }
    ctx->pc = 0x138024u;
    // 0x138024: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x138024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x138028: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x138028u;
    {
        const bool branch_taken_0x138028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13802Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138028u;
            // 0x13802c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138028) {
            ctx->pc = 0x1380D8u;
            goto label_1380d8;
        }
    }
    ctx->pc = 0x138030u;
label_138030:
    // 0x138030: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x138030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138034: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x138034u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x138038: 0xc5210010  lwc1        $f1, 0x10($t1)
    ctx->pc = 0x138038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13803c: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x13803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x138040: 0xc5270018  lwc1        $f7, 0x18($t1)
    ctx->pc = 0x138040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x138044: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x138044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x138048: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x138048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x13804c: 0x683823  subu        $a3, $v1, $t0
    ctx->pc = 0x13804cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x138050: 0x72823  negu        $a1, $a3
    ctx->pc = 0x138050u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x138054: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x138054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x138058: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x138058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13805c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x13805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x138060: 0x46020a41  sub.s       $f9, $f1, $f2
    ctx->pc = 0x138060u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x138064: 0x46090203  div.s       $f8, $f0, $f9
    ctx->pc = 0x138064u;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[8] = ctx->f[0] / ctx->f[9];
    // 0x138068: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x138068u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13806c: 0x0  nop
    ctx->pc = 0x13806cu;
    // NOP
    // 0x138070: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x138070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x138074: 0xc526000c  lwc1        $f6, 0xC($t1)
    ctx->pc = 0x138074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x138078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13807c: 0x0  nop
    ctx->pc = 0x13807cu;
    // NOP
    // 0x138080: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x138080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x138084: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x138084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x138088: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x138088u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13808c: 0x46073140  add.s       $f5, $f6, $f7
    ctx->pc = 0x13808cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x138090: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x138090u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x138094: 0x4605491c  madd.s      $f4, $f9, $f5
    ctx->pc = 0x138094u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[5]));
    // 0x138098: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x138098u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13809c: 0x0  nop
    ctx->pc = 0x13809cu;
    // NOP
    // 0x1380a0: 0x46071818  adda.s      $f3, $f7
    ctx->pc = 0x1380a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x1380a4: 0x4606109c  madd.s      $f2, $f2, $f6
    ctx->pc = 0x1380a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x1380a8: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x1380a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1380ac: 0x4602481f  msuba.s     $f9, $f2
    ctx->pc = 0x1380acu;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
    // 0x1380b0: 0x4608205c  madd.s      $f1, $f4, $f8
    ctx->pc = 0x1380b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x1380b4: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x1380b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x1380b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1380b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1380bc: 0x4606485c  madd.s      $f1, $f9, $f6
    ctx->pc = 0x1380bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[6]));
    // 0x1380c0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1380c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1380c4: 0x4601401c  madd.s      $f0, $f8, $f1
    ctx->pc = 0x1380c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
    // 0x1380c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1380c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1380cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1380ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1380d0: 0x0  nop
    ctx->pc = 0x1380d0u;
    // NOP
    // 0x1380d4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1380d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1380d8:
    // 0x1380d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1380D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1380E0u;
}
