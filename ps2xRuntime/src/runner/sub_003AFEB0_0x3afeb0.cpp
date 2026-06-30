#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AFEB0
// Address: 0x3afeb0 - 0x3b0300
void sub_003AFEB0_0x3afeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFEB0_0x3afeb0");
#endif

    switch (ctx->pc) {
        case 0x3aff20u: goto label_3aff20;
        case 0x3aff68u: goto label_3aff68;
        case 0x3b0044u: goto label_3b0044;
        case 0x3b00e0u: goto label_3b00e0;
        case 0x3b015cu: goto label_3b015c;
        case 0x3b0178u: goto label_3b0178;
        case 0x3b02a4u: goto label_3b02a4;
        default: break;
    }

    ctx->pc = 0x3afeb0u;

    // 0x3afeb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3afeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3afeb4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3afeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3afeb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3afeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3afebc: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x3afebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
    // 0x3afec0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3afec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3afec4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3afec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3afec8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3afec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3afecc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3afeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3afed0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3afed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3afed4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3afed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3afed8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3afed8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afedc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3afedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3afee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3afee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3afee4: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x3afee4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
    // 0x3afee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3afee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3afeec: 0x26522100  addiu       $s2, $s2, 0x2100
    ctx->pc = 0x3afeecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8448));
    // 0x3afef0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3afef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3afef4: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3afef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x3afef8: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x3afef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x3afefc: 0x909e0116  lbu         $fp, 0x116($a0)
    ctx->pc = 0x3afefcu;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 278)));
    // 0x3aff00: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x3aff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3aff04: 0x1e2843  sra         $a1, $fp, 1
    ctx->pc = 0x3aff04u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 30), 1));
    // 0x3aff08: 0x3c41825  or          $v1, $fp, $a0
    ctx->pc = 0x3aff08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 4));
    // 0x3aff0c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x3aff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x3aff10: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3aff10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3aff14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3aff14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3aff18: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3aff18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x3aff1c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3aff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3aff20:
    // 0x3aff20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aff20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aff24: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x3aff24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x3aff28: 0x8c70003c  lw          $s0, 0x3C($v1)
    ctx->pc = 0x3aff28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x3aff2c: 0x8c760040  lw          $s6, 0x40($v1)
    ctx->pc = 0x3aff2cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x3aff30: 0x10a4008d  beq         $a1, $a0, . + 4 + (0x8D << 2)
    ctx->pc = 0x3AFF30u;
    {
        const bool branch_taken_0x3aff30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3AFF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFF30u;
            // 0x3aff34: 0x2471002c  addiu       $s1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aff30) {
            ctx->pc = 0x3B0168u;
            goto label_3b0168;
        }
    }
    ctx->pc = 0x3AFF38u;
    // 0x3aff38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3aff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aff3c: 0x10a30046  beq         $a1, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x3AFF3Cu;
    {
        const bool branch_taken_0x3aff3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aff3c) {
            ctx->pc = 0x3B0058u;
            goto label_3b0058;
        }
    }
    ctx->pc = 0x3AFF44u;
    // 0x3aff44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3aff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aff48: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AFF48u;
    {
        const bool branch_taken_0x3aff48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aff48) {
            ctx->pc = 0x3AFF58u;
            goto label_3aff58;
        }
    }
    ctx->pc = 0x3AFF50u;
    // 0x3aff50: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x3AFF50u;
    {
        const bool branch_taken_0x3aff50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aff50) {
            ctx->pc = 0x3B02B0u;
            goto label_3b02b0;
        }
    }
    ctx->pc = 0x3AFF58u;
label_3aff58:
    // 0x3aff58: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3aff58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3aff5c: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x3aff5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3aff60: 0x241303fc  addiu       $s3, $zero, 0x3FC
    ctx->pc = 0x3aff60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x3aff64: 0x24570620  addiu       $s7, $v0, 0x620
    ctx->pc = 0x3aff64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1568));
label_3aff68:
    // 0x3aff68: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x3aff68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x3aff6c: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AFF6Cu;
    {
        const bool branch_taken_0x3aff6c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x3AFF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AFF6Cu;
            // 0x3aff70: 0x131083  sra         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aff6c) {
            ctx->pc = 0x3AFF7Cu;
            goto label_3aff7c;
        }
    }
    ctx->pc = 0x3AFF74u;
    // 0x3aff74: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x3aff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x3aff78: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3aff78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_3aff7c:
    // 0x3aff7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3aff7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3aff80: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3aff80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aff84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3aff84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3aff88: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x3aff88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3aff8c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AFF8Cu;
    {
        const bool branch_taken_0x3aff8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aff8c) {
            ctx->pc = 0x3AFF98u;
            goto label_3aff98;
        }
    }
    ctx->pc = 0x3AFF94u;
    // 0x3aff94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aff94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aff98:
    // 0x3aff98: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x3aff98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x3aff9c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3aff9cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3affa0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3affa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3affa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3affa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3affa8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3affa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3affac: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x3affacu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3affb0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3affb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3affb4: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x3affb4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3affb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3affb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3affbc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3affbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3affc0: 0x0  nop
    ctx->pc = 0x3affc0u;
    // NOP
    // 0x3affc4: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x3affc4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3affc8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3affc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3affcc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3affccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3affd0: 0x0  nop
    ctx->pc = 0x3affd0u;
    // NOP
    // 0x3affd4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3affd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3affd8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3affd8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3affdc: 0x0  nop
    ctx->pc = 0x3affdcu;
    // NOP
    // 0x3affe0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3affe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3affe4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3affe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3affe8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3affe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3affec: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x3affecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3afff0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3afff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3afff4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3afff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afff8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3afff8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3afffc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3afffcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3b0000: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b0000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b0004: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3b0004u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b0008: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x3b0008u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3b000c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3b000cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3b0010: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x3b0010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3b0014: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3b0014u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0018: 0x0  nop
    ctx->pc = 0x3b0018u;
    // NOP
    // 0x3b001c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b001cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b0020: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x3b0020u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3b0024: 0x46020380  add.s       $f14, $f0, $f2
    ctx->pc = 0x3b0024u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3b0028: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3b0028u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b002c: 0x0  nop
    ctx->pc = 0x3b002cu;
    // NOP
    // 0x3b0030: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b0030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b0034: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x3b0034u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3b0038: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b0038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b003c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B003Cu;
    SET_GPR_U32(ctx, 31, 0x3B0044u);
    ctx->pc = 0x3B0040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B003Cu;
            // 0x3b0040: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0044u; }
        if (ctx->pc != 0x3B0044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0044u; }
        if (ctx->pc != 0x3B0044u) { return; }
    }
    ctx->pc = 0x3B0044u;
label_3b0044:
    // 0x3b0044: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x3b0044u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x3b0048: 0x6a1ffc7  bgez        $s5, . + 4 + (-0x39 << 2)
    ctx->pc = 0x3B0048u;
    {
        const bool branch_taken_0x3b0048 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x3B004Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0048u;
            // 0x3b004c: 0x2673ff01  addiu       $s3, $s3, -0xFF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967041));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0048) {
            ctx->pc = 0x3AFF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3aff68;
        }
    }
    ctx->pc = 0x3B0050u;
    // 0x3b0050: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x3B0050u;
    {
        const bool branch_taken_0x3b0050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0050) {
            ctx->pc = 0x3B02B0u;
            goto label_3b02b0;
        }
    }
    ctx->pc = 0x3B0058u;
label_3b0058:
    // 0x3b0058: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b0058u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b005c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x3b005cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b0060: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b0060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0064: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x3b0064u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3b0068: 0x24530630  addiu       $s3, $v0, 0x630
    ctx->pc = 0x3b0068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x3b006c: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x3b006cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3b0070: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b0070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3b0074: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b0074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b0078: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b0078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b007c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3b007cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0080: 0x0  nop
    ctx->pc = 0x3b0080u;
    // NOP
    // 0x3b0084: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b0084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b0088: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b0088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b008c: 0xc4410638  lwc1        $f1, 0x638($v0)
    ctx->pc = 0x3b008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b0090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0094: 0x0  nop
    ctx->pc = 0x3b0094u;
    // NOP
    // 0x3b0098: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b0098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b009c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b009cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b00a0: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x3b00a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3b00a4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3b00a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b00a8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3b00a8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b00ac: 0x0  nop
    ctx->pc = 0x3b00acu;
    // NOP
    // 0x3b00b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b00b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b00b4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b00b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b00b8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3b00b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3b00bc: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x3b00bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3b00c0: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x3b00c0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b00c4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3b00c4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b00c8: 0x0  nop
    ctx->pc = 0x3b00c8u;
    // NOP
    // 0x3b00cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b00ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b00d0: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x3b00d0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3b00d4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b00d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b00d8: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B00D8u;
    SET_GPR_U32(ctx, 31, 0x3B00E0u);
    ctx->pc = 0x3B00DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B00D8u;
            // 0x3b00dc: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B00E0u; }
        if (ctx->pc != 0x3B00E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B00E0u; }
        if (ctx->pc != 0x3B00E0u) { return; }
    }
    ctx->pc = 0x3B00E0u;
label_3b00e0:
    // 0x3b00e0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3b00e0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b00e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3b00e8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b00e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b00ec: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x3b00ecu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b00f0: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x3b00f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3b00f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b00f8: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x3b00f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b00fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b00fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b0100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0104: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3b0104u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0108: 0x0  nop
    ctx->pc = 0x3b0108u;
    // NOP
    // 0x3b010c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b010cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b0110: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b0110u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0114: 0x0  nop
    ctx->pc = 0x3b0114u;
    // NOP
    // 0x3b0118: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b0118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b011c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b011cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0120: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3b0120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3b0124: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x3b0124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b0128: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b0128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b012c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b012cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b0130: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3b0130u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3b0134: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x3b0134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b0138: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3b0138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b013c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b013cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b0140: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x3b0140u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3b0144: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3b0144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3b0148: 0x46031301  sub.s       $f12, $f2, $f3
    ctx->pc = 0x3b0148u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x3b014c: 0x46031380  add.s       $f14, $f2, $f3
    ctx->pc = 0x3b014cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3b0150: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x3b0150u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b0154: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B0154u;
    SET_GPR_U32(ctx, 31, 0x3B015Cu);
    ctx->pc = 0x3B0158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0154u;
            // 0x3b0158: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B015Cu; }
        if (ctx->pc != 0x3B015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B015Cu; }
        if (ctx->pc != 0x3B015Cu) { return; }
    }
    ctx->pc = 0x3B015Cu;
label_3b015c:
    // 0x3b015c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3B015Cu;
    {
        const bool branch_taken_0x3b015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b015c) {
            ctx->pc = 0x3B02B0u;
            goto label_3b02b0;
        }
    }
    ctx->pc = 0x3B0164u;
    // 0x3b0164: 0x0  nop
    ctx->pc = 0x3b0164u;
    // NOP
label_3b0168:
    // 0x3b0168: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b0168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b016c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3b016cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0170: 0x24550620  addiu       $s5, $v0, 0x620
    ctx->pc = 0x3b0170u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1568));
    // 0x3b0174: 0x0  nop
    ctx->pc = 0x3b0174u;
    // NOP
label_3b0178:
    // 0x3b0178: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x3b0178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x3b017c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x3b017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b0180: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b0180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b0184: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x3b0184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x3b0188: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b0188u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b018c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b018cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b0190: 0x0  nop
    ctx->pc = 0x3b0190u;
    // NOP
    // 0x3b0194: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3b0194u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x3b0198: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b0198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b019c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b019cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b01a0: 0x0  nop
    ctx->pc = 0x3b01a0u;
    // NOP
    // 0x3b01a4: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3b01a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3b01a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b01a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b01ac: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3B01ACu;
    {
        const bool branch_taken_0x3b01ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b01ac) {
            ctx->pc = 0x3B01B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B01ACu;
            // 0x3b01b0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B01C4u;
            goto label_3b01c4;
        }
    }
    ctx->pc = 0x3B01B4u;
    // 0x3b01b4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b01b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b01b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b01b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b01bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B01BCu;
    {
        const bool branch_taken_0x3b01bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B01C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B01BCu;
            // 0x3b01c0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b01bc) {
            ctx->pc = 0x3B01DCu;
            goto label_3b01dc;
        }
    }
    ctx->pc = 0x3B01C4u;
label_3b01c4:
    // 0x3b01c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b01c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b01c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b01cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b01ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b01d0: 0x0  nop
    ctx->pc = 0x3b01d0u;
    // NOP
    // 0x3b01d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b01d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b01d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b01d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b01dc:
    // 0x3b01dc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3b01dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3b01e0: 0x2621007  srav        $v0, $v0, $s3
    ctx->pc = 0x3b01e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x3b01e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b01e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b01e8: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x3b01e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b01ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B01ECu;
    {
        const bool branch_taken_0x3b01ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b01ec) {
            ctx->pc = 0x3B01F8u;
            goto label_3b01f8;
        }
    }
    ctx->pc = 0x3B01F4u;
    // 0x3b01f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b01f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b01f8:
    // 0x3b01f8: 0x3c043ecc  lui         $a0, 0x3ECC
    ctx->pc = 0x3b01f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16076 << 16));
    // 0x3b01fc: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x3b01fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x3b0200: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3b0200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b0204: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x3b0204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b0208: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3b0208u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b020c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b020cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3b0210: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x3b0210u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3b0214: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b0214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b0218: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b0218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b021c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b021cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0220: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3b0220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3b0224: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b0224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3b0228: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3b0228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b022c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b0230: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b0230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b0234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b0234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0238: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b0238u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b023c: 0x0  nop
    ctx->pc = 0x3b023cu;
    // NOP
    // 0x3b0240: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b0240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3b0244: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3b0244u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0248: 0x0  nop
    ctx->pc = 0x3b0248u;
    // NOP
    // 0x3b024c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b024cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b0250: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x3b0250u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3b0254: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x3b0254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b0258: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3b0258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b025c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3b025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0260: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3b0260u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b0264: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3b0264u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3b0268: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x3b0268u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3b026c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3b026cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3b0270: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x3b0270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3b0274: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3b0274u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0278: 0x0  nop
    ctx->pc = 0x3b0278u;
    // NOP
    // 0x3b027c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b027cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b0280: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x3b0280u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3b0284: 0x46020380  add.s       $f14, $f0, $f2
    ctx->pc = 0x3b0284u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3b0288: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3b0288u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b028c: 0x0  nop
    ctx->pc = 0x3b028cu;
    // NOP
    // 0x3b0290: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b0290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b0294: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x3b0294u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3b0298: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b0298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3b029c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3B029Cu;
    SET_GPR_U32(ctx, 31, 0x3B02A4u);
    ctx->pc = 0x3B02A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B029Cu;
            // 0x3b02a0: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B02A4u; }
        if (ctx->pc != 0x3B02A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B02A4u; }
        if (ctx->pc != 0x3B02A4u) { return; }
    }
    ctx->pc = 0x3B02A4u;
label_3b02a4:
    // 0x3b02a4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3b02a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3b02a8: 0x661ffb3  bgez        $s3, . + 4 + (-0x4D << 2)
    ctx->pc = 0x3B02A8u;
    {
        const bool branch_taken_0x3b02a8 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x3b02a8) {
            ctx->pc = 0x3B0178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b0178;
        }
    }
    ctx->pc = 0x3B02B0u;
label_3b02b0:
    // 0x3b02b0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3b02b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3b02b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3b02b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3b02b8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3b02b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x3b02bc: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x3b02bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x3b02c0: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x3b02c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b02c4: 0x5460ff16  bnel        $v1, $zero, . + 4 + (-0xEA << 2)
    ctx->pc = 0x3B02C4u;
    {
        const bool branch_taken_0x3b02c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b02c4) {
            ctx->pc = 0x3B02C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B02C4u;
            // 0x3b02c8: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AFF20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3aff20;
        }
    }
    ctx->pc = 0x3B02CCu;
    // 0x3b02cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b02ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b02d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3b02d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b02d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3b02d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b02d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3b02d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b02dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b02dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b02e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b02e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b02e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b02e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b02e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b02e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b02ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b02ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b02f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b02f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b02f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B02F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B02F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B02F4u;
            // 0x3b02f8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B02FCu;
    // 0x3b02fc: 0x0  nop
    ctx->pc = 0x3b02fcu;
    // NOP
}
