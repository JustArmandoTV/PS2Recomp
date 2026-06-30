#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227010
// Address: 0x227010 - 0x2276d0
void sub_00227010_0x227010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227010_0x227010");
#endif

    switch (ctx->pc) {
        case 0x227054u: goto label_227054;
        case 0x2275f0u: goto label_2275f0;
        default: break;
    }

    ctx->pc = 0x227010u;

    // 0x227010: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x227010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x227014: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x227014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x227018: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x227018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22701c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x227020: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x227020u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227024: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x227024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x227028: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x227028u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22702c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22702cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x227030: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x227030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227034: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x227034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x227038: 0x24d3ffff  addiu       $s3, $a2, -0x1
    ctx->pc = 0x227038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22703c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x227040: 0x6600197  bltz        $s3, . + 4 + (0x197 << 2)
    ctx->pc = 0x227040u;
    {
        const bool branch_taken_0x227040 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x227044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227040u;
            // 0x227044: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227040) {
            ctx->pc = 0x2276A0u;
            goto label_2276a0;
        }
    }
    ctx->pc = 0x227048u;
    // 0x227048: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x227048u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
    // 0x22704c: 0x6600194  bltz        $s3, . + 4 + (0x194 << 2)
    ctx->pc = 0x22704Cu;
    {
        const bool branch_taken_0x22704c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x227050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22704Cu;
            // 0x227050: 0x2652d1f0  addiu       $s2, $s2, -0x2E10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22704c) {
            ctx->pc = 0x2276A0u;
            goto label_2276a0;
        }
    }
    ctx->pc = 0x227054u;
label_227054:
    // 0x227054: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x227054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x227058: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x227058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x22705c: 0xc46200e0  lwc1        $f2, 0xE0($v1)
    ctx->pc = 0x22705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227060: 0x46001445  abs.s       $f17, $f2
    ctx->pc = 0x227060u;
    ctx->f[17] = FPU_ABS_S(ctx->f[2]);
    // 0x227064: 0xc46300e4  lwc1        $f3, 0xE4($v1)
    ctx->pc = 0x227064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x227068: 0x46001c05  abs.s       $f16, $f3
    ctx->pc = 0x227068u;
    ctx->f[16] = FPU_ABS_S(ctx->f[3]);
    // 0x22706c: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x22706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227070: 0x46000bc5  abs.s       $f15, $f1
    ctx->pc = 0x227070u;
    ctx->f[15] = FPU_ABS_S(ctx->f[1]);
    // 0x227074: 0xc46000ec  lwc1        $f0, 0xEC($v1)
    ctx->pc = 0x227074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227078: 0x46000385  abs.s       $f14, $f0
    ctx->pc = 0x227078u;
    ctx->f[14] = FPU_ABS_S(ctx->f[0]);
    // 0x22707c: 0xc46600f0  lwc1        $f6, 0xF0($v1)
    ctx->pc = 0x22707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x227080: 0x46003345  abs.s       $f13, $f6
    ctx->pc = 0x227080u;
    ctx->f[13] = FPU_ABS_S(ctx->f[6]);
    // 0x227084: 0xc46700f4  lwc1        $f7, 0xF4($v1)
    ctx->pc = 0x227084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x227088: 0x46003a45  abs.s       $f9, $f7
    ctx->pc = 0x227088u;
    ctx->f[9] = FPU_ABS_S(ctx->f[7]);
    // 0x22708c: 0xc46500f8  lwc1        $f5, 0xF8($v1)
    ctx->pc = 0x22708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x227090: 0x46002a05  abs.s       $f8, $f5
    ctx->pc = 0x227090u;
    ctx->f[8] = FPU_ABS_S(ctx->f[5]);
    // 0x227094: 0xc46400fc  lwc1        $f4, 0xFC($v1)
    ctx->pc = 0x227094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x227098: 0x46002305  abs.s       $f12, $f4
    ctx->pc = 0x227098u;
    ctx->f[12] = FPU_ABS_S(ctx->f[4]);
    // 0x22709c: 0xc64b0004  lwc1        $f11, 0x4($s2)
    ctx->pc = 0x22709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2270a0: 0x460b4834  c.lt.s      $f9, $f11
    ctx->pc = 0x2270a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2270a4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2270A4u;
    {
        const bool branch_taken_0x2270a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2270a4) {
            ctx->pc = 0x2270A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2270A4u;
            // 0x2270a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2270B0u;
            goto label_2270b0;
        }
    }
    ctx->pc = 0x2270ACu;
    // 0x2270ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2270acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2270b0:
    // 0x2270b0: 0xc64a0000  lwc1        $f10, 0x0($s2)
    ctx->pc = 0x2270b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2270b4: 0x460a6834  c.lt.s      $f13, $f10
    ctx->pc = 0x2270b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2270b8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2270B8u;
    {
        const bool branch_taken_0x2270b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2270b8) {
            ctx->pc = 0x2270BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2270B8u;
            // 0x2270bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2270C4u;
            goto label_2270c4;
        }
    }
    ctx->pc = 0x2270C0u;
    // 0x2270c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2270c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2270c4:
    // 0x2270c4: 0xc6490008  lwc1        $f9, 0x8($s2)
    ctx->pc = 0x2270c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2270c8: 0x46094034  c.lt.s      $f8, $f9
    ctx->pc = 0x2270c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2270cc: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2270CCu;
    {
        const bool branch_taken_0x2270cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2270cc) {
            ctx->pc = 0x2270D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2270CCu;
            // 0x2270d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2270D8u;
            goto label_2270d8;
        }
    }
    ctx->pc = 0x2270D4u;
    // 0x2270d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2270d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2270d8:
    // 0x2270d8: 0xc648000c  lwc1        $f8, 0xC($s2)
    ctx->pc = 0x2270d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2270dc: 0x46086034  c.lt.s      $f12, $f8
    ctx->pc = 0x2270dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2270e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2270E0u;
    {
        const bool branch_taken_0x2270e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2270E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2270E0u;
            // 0x2270e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270e0) {
            ctx->pc = 0x2270ECu;
            goto label_2270ec;
        }
    }
    ctx->pc = 0x2270E8u;
    // 0x2270e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2270e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2270ec:
    // 0x2270ec: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2270ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2270f0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2270f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2270f4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2270f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2270f8: 0x460b8034  c.lt.s      $f16, $f11
    ctx->pc = 0x2270f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2270fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2270FCu;
    {
        const bool branch_taken_0x2270fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2270FCu;
            // 0x227100: 0x823825  or          $a3, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270fc) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x227104u;
    // 0x227104: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x227104u;
    {
        const bool branch_taken_0x227104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227104u;
            // 0x227108: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227104) {
            ctx->pc = 0x227110u;
            goto label_227110;
        }
    }
    ctx->pc = 0x22710Cu;
label_22710c:
    // 0x22710c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22710cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227110:
    // 0x227110: 0x460a8834  c.lt.s      $f17, $f10
    ctx->pc = 0x227110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227114: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x227114u;
    {
        const bool branch_taken_0x227114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227114) {
            ctx->pc = 0x227118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227114u;
            // 0x227118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227120u;
            goto label_227120;
        }
    }
    ctx->pc = 0x22711Cu;
    // 0x22711c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_227120:
    // 0x227120: 0x46097834  c.lt.s      $f15, $f9
    ctx->pc = 0x227120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227124: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x227124u;
    {
        const bool branch_taken_0x227124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227124) {
            ctx->pc = 0x227128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227124u;
            // 0x227128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227130u;
            goto label_227130;
        }
    }
    ctx->pc = 0x22712Cu;
    // 0x22712c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22712cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_227130:
    // 0x227130: 0x46087034  c.lt.s      $f14, $f8
    ctx->pc = 0x227130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227134: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x227134u;
    {
        const bool branch_taken_0x227134 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x227138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227134u;
            // 0x227138: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227134) {
            ctx->pc = 0x227140u;
            goto label_227140;
        }
    }
    ctx->pc = 0x22713Cu;
    // 0x22713c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227140:
    // 0x227140: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x227140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x227144: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x227144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x227148: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x227148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x22714c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x22714cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x227150: 0x46073832  c.eq.s      $f7, $f7
    ctx->pc = 0x227150u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227154: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x227154u;
    {
        const bool branch_taken_0x227154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227154u;
            // 0x227158: 0x471024  and         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227154) {
            ctx->pc = 0x227164u;
            goto label_227164;
        }
    }
    ctx->pc = 0x22715Cu;
    // 0x22715c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22715Cu;
    {
        const bool branch_taken_0x22715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22715Cu;
            // 0x227160: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22715c) {
            ctx->pc = 0x227168u;
            goto label_227168;
        }
    }
    ctx->pc = 0x227164u;
label_227164:
    // 0x227164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x227164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227168:
    // 0x227168: 0x46063032  c.eq.s      $f6, $f6
    ctx->pc = 0x227168u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22716c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x22716Cu;
    {
        const bool branch_taken_0x22716c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22716c) {
            ctx->pc = 0x227170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22716Cu;
            // 0x227170: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227178u;
            goto label_227178;
        }
    }
    ctx->pc = 0x227174u;
    // 0x227174: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x227174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_227178:
    // 0x227178: 0x46052832  c.eq.s      $f5, $f5
    ctx->pc = 0x227178u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22717c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x22717Cu;
    {
        const bool branch_taken_0x22717c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22717c) {
            ctx->pc = 0x227180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22717Cu;
            // 0x227180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227188u;
            goto label_227188;
        }
    }
    ctx->pc = 0x227184u;
    // 0x227184: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x227184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_227188:
    // 0x227188: 0x46042032  c.eq.s      $f4, $f4
    ctx->pc = 0x227188u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22718c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22718Cu;
    {
        const bool branch_taken_0x22718c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x227190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22718Cu;
            // 0x227190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22718c) {
            ctx->pc = 0x227198u;
            goto label_227198;
        }
    }
    ctx->pc = 0x227194u;
    // 0x227194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227198:
    // 0x227198: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x227198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x22719c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x22719cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2271a0: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x2271a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2271a4: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x2271a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2271a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2271A8u;
    {
        const bool branch_taken_0x2271a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2271ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2271A8u;
            // 0x2271ac: 0xa44025  or          $t0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271a8) {
            ctx->pc = 0x2271B8u;
            goto label_2271b8;
        }
    }
    ctx->pc = 0x2271B0u;
    // 0x2271b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2271B0u;
    {
        const bool branch_taken_0x2271b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2271B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2271B0u;
            // 0x2271b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271b0) {
            ctx->pc = 0x2271BCu;
            goto label_2271bc;
        }
    }
    ctx->pc = 0x2271B8u;
label_2271b8:
    // 0x2271b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2271b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2271bc:
    // 0x2271bc: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x2271bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2271c0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2271C0u;
    {
        const bool branch_taken_0x2271c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2271c0) {
            ctx->pc = 0x2271C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2271C0u;
            // 0x2271c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2271CCu;
            goto label_2271cc;
        }
    }
    ctx->pc = 0x2271C8u;
    // 0x2271c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2271c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2271cc:
    // 0x2271cc: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2271ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2271d0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2271D0u;
    {
        const bool branch_taken_0x2271d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2271d0) {
            ctx->pc = 0x2271D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2271D0u;
            // 0x2271d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2271DCu;
            goto label_2271dc;
        }
    }
    ctx->pc = 0x2271D8u;
    // 0x2271d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2271d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2271dc:
    // 0x2271dc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2271dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2271e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2271E0u;
    {
        const bool branch_taken_0x2271e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2271E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2271E0u;
            // 0x2271e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271e0) {
            ctx->pc = 0x2271ECu;
            goto label_2271ec;
        }
    }
    ctx->pc = 0x2271E8u;
    // 0x2271e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2271e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2271ec:
    // 0x2271ec: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2271ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2271f0: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2271f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2271f4: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x2271f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x2271f8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x2271f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2271fc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2271fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x227200: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x227200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x227204: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x227204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x227208: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x227208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x22720c: 0x10440014  beq         $v0, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22720Cu;
    {
        const bool branch_taken_0x22720c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x22720c) {
            ctx->pc = 0x227260u;
            goto label_227260;
        }
    }
    ctx->pc = 0x227214u;
    // 0x227214: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x227214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x227218: 0x2442d6e0  addiu       $v0, $v0, -0x2920
    ctx->pc = 0x227218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x22721c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227220: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x227220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x227224: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x227224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227228: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x227228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x22722c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227230: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x227230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x227234: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x227234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227238: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x227238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x22723c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227240: 0xe46000f0  swc1        $f0, 0xF0($v1)
    ctx->pc = 0x227240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
    // 0x227244: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x227244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227248: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x227248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x22724c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227250: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x227250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x227254: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x227254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227258: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x227258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x22725c: 0x0  nop
    ctx->pc = 0x22725cu;
    // NOP
label_227260:
    // 0x227260: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x227260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227264: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x227264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x227268: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x227268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22726c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x22726cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x227270: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x227270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227274: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x227274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x227278: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x227278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22727c: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x22727cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x227280: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x227280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227284: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x227284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x227288: 0xc46200e4  lwc1        $f2, 0xE4($v1)
    ctx->pc = 0x227288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22728c: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x22728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227290: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x227290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227294: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x227294u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x227298: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x227298u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x22729c: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x22729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2272a0: 0x4600009c  madd.s      $f2, $f0, $f0
    ctx->pc = 0x2272a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2272a4: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2272a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2272a8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2272a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2272ac: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2272ACu;
    {
        const bool branch_taken_0x2272ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2272ac) {
            ctx->pc = 0x2272F8u;
            goto label_2272f8;
        }
    }
    ctx->pc = 0x2272B4u;
    // 0x2272b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2272b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2272b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2272b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2272bc: 0x0  nop
    ctx->pc = 0x2272bcu;
    // NOP
    // 0x2272c0: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x2272c0u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x2272c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2272c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2272c8: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x2272c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2272cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2272ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2272d0: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x2272d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x2272d4: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x2272d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2272d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2272d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2272dc: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x2272dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x2272e0: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x2272e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2272e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2272e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2272e8: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x2272e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x2272ec: 0xc46000ec  lwc1        $f0, 0xEC($v1)
    ctx->pc = 0x2272ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2272f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2272f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2272f4: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x2272f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
label_2272f8:
    // 0x2272f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2272f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2272fc: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x2272fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227300: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x227300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x227304: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x227304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x227308: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x227308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22730c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x22730cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x227310: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x227310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x227314: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x227314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x227318: 0x3c023ecf  lui         $v0, 0x3ECF
    ctx->pc = 0x227318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16079 << 16));
    // 0x22731c: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x22731cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x227320: 0x3444817a  ori         $a0, $v0, 0x817A
    ctx->pc = 0x227320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33146);
    // 0x227324: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x227324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227328: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x227328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x22732c: 0xc46100e4  lwc1        $f1, 0xE4($v1)
    ctx->pc = 0x22732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227330: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x227330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x227334: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x227334u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x227338: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x227338u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x22733c: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x22733cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x227340: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x227340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x227344: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x227344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227348: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x227348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22734c: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x22734cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x227350: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x227350u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x227354: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x227354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x227358: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x227358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x22735c: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x22735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227360: 0xc46100ec  lwc1        $f1, 0xEC($v1)
    ctx->pc = 0x227360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227364: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x227364u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x227368: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x227368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x22736c: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x22736cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x227370: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x227370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227374: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x227374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x227378: 0xc4640080  lwc1        $f4, 0x80($v1)
    ctx->pc = 0x227378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22737c: 0xc4650084  lwc1        $f5, 0x84($v1)
    ctx->pc = 0x22737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x227380: 0xc4660088  lwc1        $f6, 0x88($v1)
    ctx->pc = 0x227380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x227384: 0xc467008c  lwc1        $f7, 0x8C($v1)
    ctx->pc = 0x227384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x227388: 0xe4640070  swc1        $f4, 0x70($v1)
    ctx->pc = 0x227388u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x22738c: 0xe4650074  swc1        $f5, 0x74($v1)
    ctx->pc = 0x22738cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x227390: 0xe4660078  swc1        $f6, 0x78($v1)
    ctx->pc = 0x227390u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x227394: 0xe467007c  swc1        $f7, 0x7C($v1)
    ctx->pc = 0x227394u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x227398: 0xc6ab0008  lwc1        $f11, 0x8($s5)
    ctx->pc = 0x227398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x22739c: 0xc46000f4  lwc1        $f0, 0xF4($v1)
    ctx->pc = 0x22739cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2273a0: 0xc46100f0  lwc1        $f1, 0xF0($v1)
    ctx->pc = 0x2273a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2273a4: 0x460b1282  mul.s       $f10, $f2, $f11
    ctx->pc = 0x2273a4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x2273a8: 0x46005082  mul.s       $f2, $f10, $f0
    ctx->pc = 0x2273a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2273ac: 0xc46300f8  lwc1        $f3, 0xF8($v1)
    ctx->pc = 0x2273acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2273b0: 0xc46000b8  lwc1        $f0, 0xB8($v1)
    ctx->pc = 0x2273b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2273b4: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x2273b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2273b8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2273b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2273bc: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2273bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2273c0: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x2273c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x2273c4: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x2273c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2273c8: 0x46031a9c  madd.s      $f10, $f3, $f3
    ctx->pc = 0x2273c8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2273cc: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x2273ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2273d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2273D0u;
    {
        const bool branch_taken_0x2273d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2273D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2273D0u;
            // 0x2273d4: 0x460a4202  mul.s       $f8, $f8, $f10 (Delay Slot)
        ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273d0) {
            ctx->pc = 0x2273E0u;
            goto label_2273e0;
        }
    }
    ctx->pc = 0x2273D8u;
    // 0x2273d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2273D8u;
    {
        const bool branch_taken_0x2273d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2273D8u;
            // 0x2273dc: 0x46094bc2  mul.s       $f15, $f9, $f9 (Delay Slot)
        ctx->f[15] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273d8) {
            ctx->pc = 0x2273E8u;
            goto label_2273e8;
        }
    }
    ctx->pc = 0x2273E0u;
label_2273e0:
    // 0x2273e0: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2273e0u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x2273e4: 0x46094bc2  mul.s       $f15, $f9, $f9
    ctx->pc = 0x2273e4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_2273e8:
    // 0x2273e8: 0x460f4036  c.le.s      $f8, $f15
    ctx->pc = 0x2273e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2273ec: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2273ECu;
    {
        const bool branch_taken_0x2273ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2273ec) {
            ctx->pc = 0x227448u;
            goto label_227448;
        }
    }
    ctx->pc = 0x2273F4u;
    // 0x2273f4: 0x3c043d35  lui         $a0, 0x3D35
    ctx->pc = 0x2273f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15669 << 16));
    // 0x2273f8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2273f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2273fc: 0x3485e52a  ori         $a1, $a0, 0xE52A
    ctx->pc = 0x2273fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)58666);
    // 0x227400: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x227400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
    // 0x227404: 0x44854800  mtc1        $a1, $f9
    ctx->pc = 0x227404u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x227408: 0x3444a965  ori         $a0, $v0, 0xA965
    ctx->pc = 0x227408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43365);
    // 0x22740c: 0x46084b02  mul.s       $f12, $f9, $f8
    ctx->pc = 0x22740cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x227410: 0x3c023f52  lui         $v0, 0x3F52
    ctx->pc = 0x227410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16210 << 16));
    // 0x227414: 0x3442acb8  ori         $v0, $v0, 0xACB8
    ctx->pc = 0x227414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44216);
    // 0x227418: 0x46084342  mul.s       $f13, $f8, $f8
    ctx->pc = 0x227418u;
    ctx->f[13] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x22741c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x22741cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227420: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x227420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x227424: 0x44825000  mtc1        $v0, $f10
    ctx->pc = 0x227424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x227428: 0x46004818  adda.s      $f9, $f0
    ctx->pc = 0x227428u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x22742c: 0x44845800  mtc1        $a0, $f11
    ctx->pc = 0x22742cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x227430: 0x0  nop
    ctx->pc = 0x227430u;
    // NOP
    // 0x227434: 0x4608501f  msuba.s     $f10, $f8
    ctx->pc = 0x227434u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[8]));
    // 0x227438: 0x460d581f  msuba.s     $f11, $f13
    ctx->pc = 0x227438u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[13]));
    // 0x22743c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x22743Cu;
    {
        const bool branch_taken_0x22743c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22743Cu;
            // 0x227440: 0x460c6b1d  msub.s      $f12, $f13, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22743c) {
            ctx->pc = 0x2274E8u;
            goto label_2274e8;
        }
    }
    ctx->pc = 0x227444u;
    // 0x227444: 0x0  nop
    ctx->pc = 0x227444u;
    // NOP
label_227448:
    // 0x227448: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x227448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22744c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22744cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227450: 0x0  nop
    ctx->pc = 0x227450u;
    // NOP
    // 0x227454: 0x46080216  rsqrt.s     $f8, $f0, $f8
    ctx->pc = 0x227454u;
    ctx->f[8] = 1.0f / sqrtf(ctx->f[0]);
    // 0x227458: 0x3c023d35  lui         $v0, 0x3D35
    ctx->pc = 0x227458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15669 << 16));
    // 0x22745c: 0x3445e52a  ori         $a1, $v0, 0xE52A
    ctx->pc = 0x22745cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58666);
    // 0x227460: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x227460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
    // 0x227464: 0x3444a965  ori         $a0, $v0, 0xA965
    ctx->pc = 0x227464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43365);
    // 0x227468: 0x3c023f52  lui         $v0, 0x3F52
    ctx->pc = 0x227468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16210 << 16));
    // 0x22746c: 0x3442acb8  ori         $v0, $v0, 0xACB8
    ctx->pc = 0x22746cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44216);
    // 0x227470: 0x46084b82  mul.s       $f14, $f9, $f8
    ctx->pc = 0x227470u;
    ctx->f[14] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x227474: 0x44854800  mtc1        $a1, $f9
    ctx->pc = 0x227474u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x227478: 0x0  nop
    ctx->pc = 0x227478u;
    // NOP
    // 0x22747c: 0x460f4b02  mul.s       $f12, $f9, $f15
    ctx->pc = 0x22747cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x227480: 0xc46900f0  lwc1        $f9, 0xF0($v1)
    ctx->pc = 0x227480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x227484: 0x460f7b42  mul.s       $f13, $f15, $f15
    ctx->pc = 0x227484u;
    ctx->f[13] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x227488: 0x460e4a42  mul.s       $f9, $f9, $f14
    ctx->pc = 0x227488u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[14]);
    // 0x22748c: 0xe46900f0  swc1        $f9, 0xF0($v1)
    ctx->pc = 0x22748cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
    // 0x227490: 0xc46900f4  lwc1        $f9, 0xF4($v1)
    ctx->pc = 0x227490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x227494: 0x460e0842  mul.s       $f1, $f1, $f14
    ctx->pc = 0x227494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x227498: 0x460e4a42  mul.s       $f9, $f9, $f14
    ctx->pc = 0x227498u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[14]);
    // 0x22749c: 0xe46900f4  swc1        $f9, 0xF4($v1)
    ctx->pc = 0x22749cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2274a0: 0xc46900f8  lwc1        $f9, 0xF8($v1)
    ctx->pc = 0x2274a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2274a4: 0x460e1082  mul.s       $f2, $f2, $f14
    ctx->pc = 0x2274a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x2274a8: 0x460e4a42  mul.s       $f9, $f9, $f14
    ctx->pc = 0x2274a8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[14]);
    // 0x2274ac: 0xe46900f8  swc1        $f9, 0xF8($v1)
    ctx->pc = 0x2274acu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x2274b0: 0xc46900fc  lwc1        $f9, 0xFC($v1)
    ctx->pc = 0x2274b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2274b4: 0x460e18c2  mul.s       $f3, $f3, $f14
    ctx->pc = 0x2274b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x2274b8: 0x460e4a42  mul.s       $f9, $f9, $f14
    ctx->pc = 0x2274b8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[14]);
    // 0x2274bc: 0xe46900fc  swc1        $f9, 0xFC($v1)
    ctx->pc = 0x2274bcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2274c0: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x2274c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2274c4: 0x44825000  mtc1        $v0, $f10
    ctx->pc = 0x2274c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2274c8: 0x46004818  adda.s      $f9, $f0
    ctx->pc = 0x2274c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2274cc: 0x44845800  mtc1        $a0, $f11
    ctx->pc = 0x2274ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2274d0: 0x0  nop
    ctx->pc = 0x2274d0u;
    // NOP
    // 0x2274d4: 0x460f501f  msuba.s     $f10, $f15
    ctx->pc = 0x2274d4u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[15]));
    // 0x2274d8: 0x460d581f  msuba.s     $f11, $f13
    ctx->pc = 0x2274d8u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[13]));
    // 0x2274dc: 0x46007a06  mov.s       $f8, $f15
    ctx->pc = 0x2274dcu;
    ctx->f[8] = FPU_MOV_S(ctx->f[15]);
    // 0x2274e0: 0x460c6b1d  msub.s      $f12, $f13, $f12
    ctx->pc = 0x2274e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
    // 0x2274e4: 0x0  nop
    ctx->pc = 0x2274e4u;
    // NOP
label_2274e8:
    // 0x2274e8: 0x4606101a  mula.s      $f2, $f6
    ctx->pc = 0x2274e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2274ec: 0x46051add  msub.s      $f11, $f3, $f5
    ctx->pc = 0x2274ecu;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x2274f0: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x2274f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2274f4: 0x46060a9d  msub.s      $f10, $f1, $f6
    ctx->pc = 0x2274f4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x2274f8: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x2274f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2274fc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2274fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x227500: 0x4604125d  msub.s      $f9, $f2, $f4
    ctx->pc = 0x227500u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x227504: 0x460b6818  adda.s      $f13, $f11
    ctx->pc = 0x227504u;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
    // 0x227508: 0x460462dc  madd.s      $f11, $f12, $f4
    ctx->pc = 0x227508u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[4]));
    // 0x22750c: 0x460a6818  adda.s      $f13, $f10
    ctx->pc = 0x22750cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x227510: 0x4605629c  madd.s      $f10, $f12, $f5
    ctx->pc = 0x227510u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[5]));
    // 0x227514: 0x46096818  adda.s      $f13, $f9
    ctx->pc = 0x227514u;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[9]);
    // 0x227518: 0x4606625c  madd.s      $f9, $f12, $f6
    ctx->pc = 0x227518u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[6]));
    // 0x22751c: 0x460b6818  adda.s      $f13, $f11
    ctx->pc = 0x22751cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
    // 0x227520: 0x46013adc  madd.s      $f11, $f7, $f1
    ctx->pc = 0x227520u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x227524: 0x460a6818  adda.s      $f13, $f10
    ctx->pc = 0x227524u;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x227528: 0x46023a9c  madd.s      $f10, $f7, $f2
    ctx->pc = 0x227528u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x22752c: 0x46096818  adda.s      $f13, $f9
    ctx->pc = 0x22752cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[9]);
    // 0x227530: 0x46033a5c  madd.s      $f9, $f7, $f3
    ctx->pc = 0x227530u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x227534: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x227534u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x227538: 0x4604081e  madda.s     $f1, $f4
    ctx->pc = 0x227538u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x22753c: 0x46076102  mul.s       $f4, $f12, $f7
    ctx->pc = 0x22753cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x227540: 0x4606195c  madd.s      $f5, $f3, $f6
    ctx->pc = 0x227540u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x227544: 0x460a501a  mula.s      $f10, $f10
    ctx->pc = 0x227544u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x227548: 0x460b581e  madda.s     $f11, $f11
    ctx->pc = 0x227548u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[11]));
    // 0x22754c: 0x46052141  sub.s       $f5, $f4, $f5
    ctx->pc = 0x22754cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x227550: 0x4609481e  madda.s     $f9, $f9
    ctx->pc = 0x227550u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[9]));
    // 0x227554: 0x4605291c  madd.s      $f4, $f5, $f5
    ctx->pc = 0x227554u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x227558: 0x460d2032  c.eq.s      $f4, $f13
    ctx->pc = 0x227558u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22755c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22755Cu;
    {
        const bool branch_taken_0x22755c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22755c) {
            ctx->pc = 0x227580u;
            goto label_227580;
        }
    }
    ctx->pc = 0x227564u;
    // 0x227564: 0x0  nop
    ctx->pc = 0x227564u;
    // NOP
    // 0x227568: 0x0  nop
    ctx->pc = 0x227568u;
    // NOP
    // 0x22756c: 0x46040356  rsqrt.s     $f13, $f0, $f4
    ctx->pc = 0x22756cu;
    ctx->f[13] = 1.0f / sqrtf(ctx->f[0]);
    // 0x227570: 0x0  nop
    ctx->pc = 0x227570u;
    // NOP
    // 0x227574: 0x0  nop
    ctx->pc = 0x227574u;
    // NOP
    // 0x227578: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x227578u;
    {
        const bool branch_taken_0x227578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227578) {
            ctx->pc = 0x227580u;
            goto label_227580;
        }
    }
    ctx->pc = 0x227580u;
label_227580:
    // 0x227580: 0x46010900  add.s       $f4, $f1, $f1
    ctx->pc = 0x227580u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x227584: 0x46031840  add.s       $f1, $f3, $f3
    ctx->pc = 0x227584u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x227588: 0xe46400a0  swc1        $f4, 0xA0($v1)
    ctx->pc = 0x227588u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x22758c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x22758cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x227590: 0xe46200a4  swc1        $f2, 0xA4($v1)
    ctx->pc = 0x227590u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x227594: 0xe46100a8  swc1        $f1, 0xA8($v1)
    ctx->pc = 0x227594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x227598: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x227598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x22759c: 0x460d2842  mul.s       $f1, $f5, $f13
    ctx->pc = 0x22759cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x2275a0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2275a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2275a4: 0x460d5902  mul.s       $f4, $f11, $f13
    ctx->pc = 0x2275a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
    // 0x2275a8: 0x460d50c2  mul.s       $f3, $f10, $f13
    ctx->pc = 0x2275a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
    // 0x2275ac: 0x460d4882  mul.s       $f2, $f9, $f13
    ctx->pc = 0x2275acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x2275b0: 0x46080144  c1          0x80144
    ctx->pc = 0x2275b0u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x2275b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2275b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2275b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2275b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2275bc: 0x24710010  addiu       $s1, $v1, 0x10
    ctx->pc = 0x2275bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2275c0: 0x24700050  addiu       $s0, $v1, 0x50
    ctx->pc = 0x2275c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2275c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2275c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275c8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2275c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2275cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2275ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2275d0: 0x0  nop
    ctx->pc = 0x2275d0u;
    // NOP
    // 0x2275d4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2275d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2275d8: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2275d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2275dc: 0xe4640080  swc1        $f4, 0x80($v1)
    ctx->pc = 0x2275dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x2275e0: 0xe4630084  swc1        $f3, 0x84($v1)
    ctx->pc = 0x2275e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2275e4: 0xe4620088  swc1        $f2, 0x88($v1)
    ctx->pc = 0x2275e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x2275e8: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x2275E8u;
    SET_GPR_U32(ctx, 31, 0x2275F0u);
    ctx->pc = 0x2275ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2275E8u;
            // 0x2275ec: 0xe461008c  swc1        $f1, 0x8C($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2275F0u; }
        if (ctx->pc != 0x2275F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2275F0u; }
        if (ctx->pc != 0x2275F0u) { return; }
    }
    ctx->pc = 0x2275F0u;
label_2275f0:
    // 0x2275f0: 0xc6060044  lwc1        $f6, 0x44($s0)
    ctx->pc = 0x2275f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2275f4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2275f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2275f8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2275f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2275fc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2275fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x227600: 0xc6070040  lwc1        $f7, 0x40($s0)
    ctx->pc = 0x227600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x227604: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x227604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227608: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x227608u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x22760c: 0xc6050048  lwc1        $f5, 0x48($s0)
    ctx->pc = 0x22760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x227610: 0x4601381e  madda.s     $f7, $f1
    ctx->pc = 0x227610u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x227614: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x227614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227618: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x227618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22761c: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x22761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x227620: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x227620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x227624: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x227624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x227628: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x227628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22762c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x22762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227630: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x227630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227634: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x227634u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x227638: 0x4603381e  madda.s     $f7, $f3
    ctx->pc = 0x227638u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x22763c: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x22763cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x227640: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x227640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x227644: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x227644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227648: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x227648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22764c: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x22764cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x227650: 0x4601381e  madda.s     $f7, $f1
    ctx->pc = 0x227650u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x227654: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x227654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x227658: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x227658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x22765c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x22765cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x227660: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x227660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227664: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x227664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227668: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x227668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22766c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x22766cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x227670: 0xe6230030  swc1        $f3, 0x30($s1)
    ctx->pc = 0x227670u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x227674: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x227674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x227678: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x227678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22767c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x22767cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x227680: 0xe6220034  swc1        $f2, 0x34($s1)
    ctx->pc = 0x227680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x227684: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x227684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227688: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x227688u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x22768c: 0xe6210038  swc1        $f1, 0x38($s1)
    ctx->pc = 0x22768cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x227690: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x227690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227694: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x227694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x227698: 0x661fe6e  bgez        $s3, . + 4 + (-0x192 << 2)
    ctx->pc = 0x227698u;
    {
        const bool branch_taken_0x227698 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x22769Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227698u;
            // 0x22769c: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227698) {
            ctx->pc = 0x227054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227054;
        }
    }
    ctx->pc = 0x2276A0u;
label_2276a0:
    // 0x2276a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2276a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2276a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2276a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2276a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2276a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2276ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2276acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2276b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2276b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2276b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2276b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2276b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2276b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2276bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2276bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2276c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2276C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2276C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2276C0u;
            // 0x2276c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2276C8u;
    // 0x2276c8: 0x0  nop
    ctx->pc = 0x2276c8u;
    // NOP
    // 0x2276cc: 0x0  nop
    ctx->pc = 0x2276ccu;
    // NOP
}
