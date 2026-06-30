#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00509780
// Address: 0x509780 - 0x509950
void sub_00509780_0x509780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509780_0x509780");
#endif

    switch (ctx->pc) {
        case 0x509918u: goto label_509918;
        default: break;
    }

    ctx->pc = 0x509780u;

    // 0x509780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x509780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x509784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x509784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x509788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x509788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x50978c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x50978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x509790: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x509790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509794: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x509794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
    // 0x509798: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x509798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x50979c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x50979cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x5097a0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x5097a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x5097a4: 0x10800061  beqz        $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x5097A4u;
    {
        const bool branch_taken_0x5097a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x5097A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5097A4u;
            // 0x5097a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5097a4) {
            ctx->pc = 0x50992Cu;
            goto label_50992c;
        }
    }
    ctx->pc = 0x5097ACu;
    // 0x5097ac: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x5097acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5097b0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x5097b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x5097b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5097b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x5097b8: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x5097b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x5097bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5097bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x5097c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x5097c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5097c4: 0x0  nop
    ctx->pc = 0x5097c4u;
    // NOP
    // 0x5097c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x5097c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x5097cc: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x5097ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x5097d0: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x5097d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x5097d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x5097d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x5097d8: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x5097d8u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[12];
    // 0x5097dc: 0x0  nop
    ctx->pc = 0x5097dcu;
    // NOP
    // 0x5097e0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x5097e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5097e4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5097E4u;
    {
        const bool branch_taken_0x5097e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x5097E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5097E4u;
            // 0x5097e8: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5097e4) {
            ctx->pc = 0x5097F8u;
            goto label_5097f8;
        }
    }
    ctx->pc = 0x5097ECu;
    // 0x5097ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5097ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5097f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5097F0u;
    {
        const bool branch_taken_0x5097f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5097F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5097F0u;
            // 0x5097f4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5097f0) {
            ctx->pc = 0x509814u;
            goto label_509814;
        }
    }
    ctx->pc = 0x5097F8u;
label_5097f8:
    // 0x5097f8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x5097f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x5097fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5097fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x509800: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x509800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x509804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x509804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x509808: 0x0  nop
    ctx->pc = 0x509808u;
    // NOP
    // 0x50980c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x50980cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x509810: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x509810u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_509814:
    // 0x509814: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x509814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x509818: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x509818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x50981c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x50981cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x509820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x509820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x509824: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x509824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x509828: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x509828u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x50982c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x50982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x509830: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x509830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x509834: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x509834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x509838: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x509838u;
    {
        const bool branch_taken_0x509838 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509838u;
            // 0x50983c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x509838) {
            ctx->pc = 0x50984Cu;
            goto label_50984c;
        }
    }
    ctx->pc = 0x509840u;
    // 0x509840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x509840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x509844: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x509844u;
    {
        const bool branch_taken_0x509844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509844u;
            // 0x509848: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x509844) {
            ctx->pc = 0x509868u;
            goto label_509868;
        }
    }
    ctx->pc = 0x50984Cu;
label_50984c:
    // 0x50984c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x50984cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x509850: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x509850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x509854: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x509854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x509858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x509858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x50985c: 0x0  nop
    ctx->pc = 0x50985cu;
    // NOP
    // 0x509860: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x509860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x509864: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x509864u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_509868:
    // 0x509868: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x509868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x50986c: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x50986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x509870: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x509870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x509874: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x509874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x509878: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x509878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x50987c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50987cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x509880: 0x0  nop
    ctx->pc = 0x509880u;
    // NOP
    // 0x509884: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x509884u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x509888: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x509888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x50988c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x50988Cu;
    {
        const bool branch_taken_0x50988c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x509890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50988Cu;
            // 0x509890: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x50988c) {
            ctx->pc = 0x5098F8u;
            goto label_5098f8;
        }
    }
    ctx->pc = 0x509894u;
    // 0x509894: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x509894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x509898: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x509898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
    // 0x50989c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x50989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x5098a0: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x5098a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x5098a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x5098a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x5098a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x5098a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x5098ac: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5098ACu;
    {
        const bool branch_taken_0x5098ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x5098ac) {
            ctx->pc = 0x5098B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5098ACu;
            // 0x5098b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5098C0u;
            goto label_5098c0;
        }
    }
    ctx->pc = 0x5098B4u;
    // 0x5098b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5098b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5098b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x5098B8u;
    {
        const bool branch_taken_0x5098b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5098BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5098B8u;
            // 0x5098bc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5098b8) {
            ctx->pc = 0x5098D8u;
            goto label_5098d8;
        }
    }
    ctx->pc = 0x5098C0u;
label_5098c0:
    // 0x5098c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5098c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x5098c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5098c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5098c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5098c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5098cc: 0x0  nop
    ctx->pc = 0x5098ccu;
    // NOP
    // 0x5098d0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x5098d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x5098d4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x5098d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_5098d8:
    // 0x5098d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5098d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x5098dc: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x5098dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x5098e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5098e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5098e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5098e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5098e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x5098e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x5098ec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x5098ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x5098f0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x5098f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x5098f4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x5098f4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_5098f8:
    // 0x5098f8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x5098f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x5098fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5098fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x509900: 0x0  nop
    ctx->pc = 0x509900u;
    // NOP
    // 0x509904: 0x460d6303  div.s       $f12, $f12, $f13
    ctx->pc = 0x509904u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[13];
    // 0x509908: 0x0  nop
    ctx->pc = 0x509908u;
    // NOP
    // 0x50990c: 0x0  nop
    ctx->pc = 0x50990cu;
    // NOP
    // 0x509910: 0xc04781c  jal         func_11E070
    ctx->pc = 0x509910u;
    SET_GPR_U32(ctx, 31, 0x509918u);
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509918u; }
        if (ctx->pc != 0x509918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509918u; }
        if (ctx->pc != 0x509918u) { return; }
    }
    ctx->pc = 0x509918u;
label_509918:
    // 0x509918: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x509918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x50991c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x50991cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x509920: 0x0  nop
    ctx->pc = 0x509920u;
    // NOP
    // 0x509924: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x509924u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x509928: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x509928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_50992c:
    // 0x50992c: 0xe6340058  swc1        $f20, 0x58($s1)
    ctx->pc = 0x50992cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x509930: 0xa2300075  sb          $s0, 0x75($s1)
    ctx->pc = 0x509930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 117), (uint8_t)GPR_U32(ctx, 16));
    // 0x509934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x509934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x509938: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x509938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x50993c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x50993cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x509940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x509940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x509944: 0x3e00008  jr          $ra
    ctx->pc = 0x509944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509944u;
            // 0x509948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50994Cu;
    // 0x50994c: 0x0  nop
    ctx->pc = 0x50994cu;
    // NOP
}
