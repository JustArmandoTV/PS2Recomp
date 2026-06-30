#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136400
// Address: 0x136400 - 0x136550
void sub_00136400_0x136400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136400_0x136400");
#endif

    switch (ctx->pc) {
        case 0x136414u: goto label_136414;
        default: break;
    }

    ctx->pc = 0x136400u;

    // 0x136400: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x136400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136404: 0x2d010002  sltiu       $at, $t0, 0x2
    ctx->pc = 0x136404u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136408: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x136408u;
    {
        const bool branch_taken_0x136408 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13640Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136408u;
            // 0x13640c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136408) {
            ctx->pc = 0x136450u;
            goto label_136450;
        }
    }
    ctx->pc = 0x136410u;
    // 0x136410: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x136410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_136414:
    // 0x136414: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x136414u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x136418: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x136418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x13641c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13641cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136420: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x136420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136424: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x136424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136428: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136428u;
    {
        const bool branch_taken_0x136428 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136428) {
            ctx->pc = 0x136438u;
            goto label_136438;
        }
    }
    ctx->pc = 0x136430u;
    // 0x136430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136430u;
    {
        const bool branch_taken_0x136430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136430u;
            // 0x136434: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136430) {
            ctx->pc = 0x136440u;
            goto label_136440;
        }
    }
    ctx->pc = 0x136438u;
label_136438:
    // 0x136438: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x136438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13643c: 0x0  nop
    ctx->pc = 0x13643cu;
    // NOP
label_136440:
    // 0x136440: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x136440u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x136444: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x136444u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136448: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x136448u;
    {
        const bool branch_taken_0x136448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136448) {
            ctx->pc = 0x13644Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136448u;
            // 0x13644c: 0x1281821  addu        $v1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136414;
        }
    }
    ctx->pc = 0x136450u;
label_136450:
    // 0x136450: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x136450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x136454: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x136454u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x136458: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x136458u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13645c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13645Cu;
    {
        const bool branch_taken_0x13645c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13645Cu;
            // 0x136460: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13645c) {
            ctx->pc = 0x136480u;
            goto label_136480;
        }
    }
    ctx->pc = 0x136464u;
    // 0x136464: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x136464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x136468: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x136468u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x13646c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x13646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x136470: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x136470u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x136474: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x136474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x136478: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x136478u;
    {
        const bool branch_taken_0x136478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13647Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136478u;
            // 0x13647c: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136478) {
            ctx->pc = 0x136548u;
            goto label_136548;
        }
    }
    ctx->pc = 0x136480u;
label_136480:
    // 0x136480: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x136480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x136484: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x136484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x136488: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x136488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13648c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x136490: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x136490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x136494: 0x0  nop
    ctx->pc = 0x136494u;
    // NOP
    // 0x136498: 0x46036041  sub.s       $f1, $f12, $f3
    ctx->pc = 0x136498u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x13649c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13649cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1364a0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1364a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1364a4: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1364a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x1364a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1364a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1364ac: 0x0  nop
    ctx->pc = 0x1364acu;
    // NOP
    // 0x1364b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1364b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1364b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1364b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1364b8: 0x0  nop
    ctx->pc = 0x1364b8u;
    // NOP
    // 0x1364bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1364bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1364c0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1364c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1364c4: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1364c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1364c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1364c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1364cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1364ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1364d0: 0x0  nop
    ctx->pc = 0x1364d0u;
    // NOP
    // 0x1364d4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1364d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1364d8: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1364d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1364dc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1364dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1364e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1364e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1364e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1364e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1364e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1364e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1364ec: 0x0  nop
    ctx->pc = 0x1364ecu;
    // NOP
    // 0x1364f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1364f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1364f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1364f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1364f8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1364f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1364fc: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1364fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x136500: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x136504: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x136504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x136508: 0x0  nop
    ctx->pc = 0x136508u;
    // NOP
    // 0x13650c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x13650cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x136510: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x136510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x136514: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x136514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x136518: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x136518u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13651c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13651cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136520: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x136520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136524: 0x0  nop
    ctx->pc = 0x136524u;
    // NOP
    // 0x136528: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x136528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13652c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13652cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x136530: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x136530u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x136534: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x136534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x136538: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13653c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13653cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x136540: 0x0  nop
    ctx->pc = 0x136540u;
    // NOP
    // 0x136544: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x136544u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_136548:
    // 0x136548: 0x3e00008  jr          $ra
    ctx->pc = 0x136548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136550u;
}
