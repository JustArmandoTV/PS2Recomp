#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001380E0
// Address: 0x1380e0 - 0x138250
void sub_001380E0_0x1380e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001380E0_0x1380e0");
#endif

    switch (ctx->pc) {
        case 0x138110u: goto label_138110;
        default: break;
    }

    ctx->pc = 0x1380e0u;

    // 0x1380e0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1380e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1380e4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1380e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1380e8: 0x2d210002  sltiu       $at, $t1, 0x2
    ctx->pc = 0x1380e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1380ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1380ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1380f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1380f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1380f4: 0x0  nop
    ctx->pc = 0x1380f4u;
    // NOP
    // 0x1380f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1380f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1380fc: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1380FCu;
    {
        const bool branch_taken_0x1380fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x138100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1380FCu;
            // 0x138100: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380fc) {
            ctx->pc = 0x138158u;
            goto label_138158;
        }
    }
    ctx->pc = 0x138104u;
    // 0x138104: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x138104u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x138108: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x138108u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x13810c: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x13810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_138110:
    // 0x138110: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x138110u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x138114: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x138114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x138118: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x138118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13811c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13811cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138120: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x138120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x138124: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x138124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138128: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x138128u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13812c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13812Cu;
    {
        const bool branch_taken_0x13812c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13812c) {
            ctx->pc = 0x138140u;
            goto label_138140;
        }
    }
    ctx->pc = 0x138134u;
    // 0x138134: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x138134u;
    {
        const bool branch_taken_0x138134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138134u;
            // 0x138138: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138134) {
            ctx->pc = 0x138148u;
            goto label_138148;
        }
    }
    ctx->pc = 0x13813Cu;
    // 0x13813c: 0x0  nop
    ctx->pc = 0x13813cu;
    // NOP
label_138140:
    // 0x138140: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x138140u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138144: 0x0  nop
    ctx->pc = 0x138144u;
    // NOP
label_138148:
    // 0x138148: 0x12a1823  subu        $v1, $t1, $t2
    ctx->pc = 0x138148u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x13814c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x13814cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138150: 0x5020ffef  beql        $at, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x138150u;
    {
        const bool branch_taken_0x138150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138150) {
            ctx->pc = 0x138154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138150u;
            // 0x138154: 0x1491821  addu        $v1, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_138110;
        }
    }
    ctx->pc = 0x138158u;
label_138158:
    // 0x138158: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x138158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13815c: 0xa2840  sll         $a1, $t2, 1
    ctx->pc = 0x13815cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x138160: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x138160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x138164: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x138164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x138168: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x138168u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13816c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13816Cu;
    {
        const bool branch_taken_0x13816c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13816Cu;
            // 0x138170: 0x853821  addu        $a3, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13816c) {
            ctx->pc = 0x138180u;
            goto label_138180;
        }
    }
    ctx->pc = 0x138174u;
    // 0x138174: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x138174u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x138178: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x138178u;
    {
        const bool branch_taken_0x138178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13817Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138178u;
            // 0x13817c: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138178) {
            ctx->pc = 0x138240u;
            goto label_138240;
        }
    }
    ctx->pc = 0x138180u;
label_138180:
    // 0x138180: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x138180u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x138184: 0xc4e60010  lwc1        $f6, 0x10($a3)
    ctx->pc = 0x138184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x138188: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x138188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13818c: 0x84e4000c  lh          $a0, 0xC($a3)
    ctx->pc = 0x13818cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x138190: 0x84e80002  lh          $t0, 0x2($a3)
    ctx->pc = 0x138190u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x138194: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x138194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x138198: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x138198u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13819c: 0x84e3000e  lh          $v1, 0xE($a3)
    ctx->pc = 0x13819cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x1381a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1381a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1381a4: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x1381a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1381a8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1381a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1381ac: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1381acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1381b0: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x1381b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1381b4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1381b4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1381b8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1381b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1381bc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1381bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1381c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1381c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1381c4: 0x46800a20  cvt.s.w     $f8, $f1
    ctx->pc = 0x1381c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x1381c8: 0x72823  negu        $a1, $a3
    ctx->pc = 0x1381c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x1381cc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1381ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1381d0: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1381d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1381d4: 0x460801c3  div.s       $f7, $f0, $f8
    ctx->pc = 0x1381d4u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[7] = ctx->f[0] / ctx->f[8];
    // 0x1381d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1381d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1381dc: 0x0  nop
    ctx->pc = 0x1381dcu;
    // NOP
    // 0x1381e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1381e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1381e4: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1381e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1381e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1381e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1381ec: 0x0  nop
    ctx->pc = 0x1381ecu;
    // NOP
    // 0x1381f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1381f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1381f4: 0x46062900  add.s       $f4, $f5, $f6
    ctx->pc = 0x1381f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x1381f8: 0x4604411c  madd.s      $f4, $f8, $f4
    ctx->pc = 0x1381f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x1381fc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1381fcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138200: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x138200u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x138204: 0x0  nop
    ctx->pc = 0x138204u;
    // NOP
    // 0x138208: 0x46061818  adda.s      $f3, $f6
    ctx->pc = 0x138208u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x13820c: 0x4605109c  madd.s      $f2, $f2, $f5
    ctx->pc = 0x13820cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x138210: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x138210u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x138214: 0x4602401f  msuba.s     $f8, $f2
    ctx->pc = 0x138214u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x138218: 0x4607205c  madd.s      $f1, $f4, $f7
    ctx->pc = 0x138218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
    // 0x13821c: 0x4601381a  mula.s      $f7, $f1
    ctx->pc = 0x13821cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x138220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x138220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x138224: 0x4605405c  madd.s      $f1, $f8, $f5
    ctx->pc = 0x138224u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
    // 0x138228: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x138228u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x13822c: 0x4601381c  madd.s      $f0, $f7, $f1
    ctx->pc = 0x13822cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x138230: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x138230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x138234: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x138234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x138238: 0x0  nop
    ctx->pc = 0x138238u;
    // NOP
    // 0x13823c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x13823cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_138240:
    // 0x138240: 0x3e00008  jr          $ra
    ctx->pc = 0x138240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138248u;
    // 0x138248: 0x0  nop
    ctx->pc = 0x138248u;
    // NOP
    // 0x13824c: 0x0  nop
    ctx->pc = 0x13824cu;
    // NOP
}
