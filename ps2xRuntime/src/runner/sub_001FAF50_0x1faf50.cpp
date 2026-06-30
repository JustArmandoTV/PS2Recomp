#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FAF50
// Address: 0x1faf50 - 0x1fb100
void sub_001FAF50_0x1faf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAF50_0x1faf50");
#endif

    switch (ctx->pc) {
        case 0x1faf50u: goto label_1faf50;
        case 0x1faf54u: goto label_1faf54;
        case 0x1faf58u: goto label_1faf58;
        case 0x1faf5cu: goto label_1faf5c;
        case 0x1faf60u: goto label_1faf60;
        case 0x1faf64u: goto label_1faf64;
        case 0x1faf68u: goto label_1faf68;
        case 0x1faf6cu: goto label_1faf6c;
        case 0x1faf70u: goto label_1faf70;
        case 0x1faf74u: goto label_1faf74;
        case 0x1faf78u: goto label_1faf78;
        case 0x1faf7cu: goto label_1faf7c;
        case 0x1faf80u: goto label_1faf80;
        case 0x1faf84u: goto label_1faf84;
        case 0x1faf88u: goto label_1faf88;
        case 0x1faf8cu: goto label_1faf8c;
        case 0x1faf90u: goto label_1faf90;
        case 0x1faf94u: goto label_1faf94;
        case 0x1faf98u: goto label_1faf98;
        case 0x1faf9cu: goto label_1faf9c;
        case 0x1fafa0u: goto label_1fafa0;
        case 0x1fafa4u: goto label_1fafa4;
        case 0x1fafa8u: goto label_1fafa8;
        case 0x1fafacu: goto label_1fafac;
        case 0x1fafb0u: goto label_1fafb0;
        case 0x1fafb4u: goto label_1fafb4;
        case 0x1fafb8u: goto label_1fafb8;
        case 0x1fafbcu: goto label_1fafbc;
        case 0x1fafc0u: goto label_1fafc0;
        case 0x1fafc4u: goto label_1fafc4;
        case 0x1fafc8u: goto label_1fafc8;
        case 0x1fafccu: goto label_1fafcc;
        case 0x1fafd0u: goto label_1fafd0;
        case 0x1fafd4u: goto label_1fafd4;
        case 0x1fafd8u: goto label_1fafd8;
        case 0x1fafdcu: goto label_1fafdc;
        case 0x1fafe0u: goto label_1fafe0;
        case 0x1fafe4u: goto label_1fafe4;
        case 0x1fafe8u: goto label_1fafe8;
        case 0x1fafecu: goto label_1fafec;
        case 0x1faff0u: goto label_1faff0;
        case 0x1faff4u: goto label_1faff4;
        case 0x1faff8u: goto label_1faff8;
        case 0x1faffcu: goto label_1faffc;
        case 0x1fb000u: goto label_1fb000;
        case 0x1fb004u: goto label_1fb004;
        case 0x1fb008u: goto label_1fb008;
        case 0x1fb00cu: goto label_1fb00c;
        case 0x1fb010u: goto label_1fb010;
        case 0x1fb014u: goto label_1fb014;
        case 0x1fb018u: goto label_1fb018;
        case 0x1fb01cu: goto label_1fb01c;
        case 0x1fb020u: goto label_1fb020;
        case 0x1fb024u: goto label_1fb024;
        case 0x1fb028u: goto label_1fb028;
        case 0x1fb02cu: goto label_1fb02c;
        case 0x1fb030u: goto label_1fb030;
        case 0x1fb034u: goto label_1fb034;
        case 0x1fb038u: goto label_1fb038;
        case 0x1fb03cu: goto label_1fb03c;
        case 0x1fb040u: goto label_1fb040;
        case 0x1fb044u: goto label_1fb044;
        case 0x1fb048u: goto label_1fb048;
        case 0x1fb04cu: goto label_1fb04c;
        case 0x1fb050u: goto label_1fb050;
        case 0x1fb054u: goto label_1fb054;
        case 0x1fb058u: goto label_1fb058;
        case 0x1fb05cu: goto label_1fb05c;
        case 0x1fb060u: goto label_1fb060;
        case 0x1fb064u: goto label_1fb064;
        case 0x1fb068u: goto label_1fb068;
        case 0x1fb06cu: goto label_1fb06c;
        case 0x1fb070u: goto label_1fb070;
        case 0x1fb074u: goto label_1fb074;
        case 0x1fb078u: goto label_1fb078;
        case 0x1fb07cu: goto label_1fb07c;
        case 0x1fb080u: goto label_1fb080;
        case 0x1fb084u: goto label_1fb084;
        case 0x1fb088u: goto label_1fb088;
        case 0x1fb08cu: goto label_1fb08c;
        case 0x1fb090u: goto label_1fb090;
        case 0x1fb094u: goto label_1fb094;
        case 0x1fb098u: goto label_1fb098;
        case 0x1fb09cu: goto label_1fb09c;
        case 0x1fb0a0u: goto label_1fb0a0;
        case 0x1fb0a4u: goto label_1fb0a4;
        case 0x1fb0a8u: goto label_1fb0a8;
        case 0x1fb0acu: goto label_1fb0ac;
        case 0x1fb0b0u: goto label_1fb0b0;
        case 0x1fb0b4u: goto label_1fb0b4;
        case 0x1fb0b8u: goto label_1fb0b8;
        case 0x1fb0bcu: goto label_1fb0bc;
        case 0x1fb0c0u: goto label_1fb0c0;
        case 0x1fb0c4u: goto label_1fb0c4;
        case 0x1fb0c8u: goto label_1fb0c8;
        case 0x1fb0ccu: goto label_1fb0cc;
        case 0x1fb0d0u: goto label_1fb0d0;
        case 0x1fb0d4u: goto label_1fb0d4;
        case 0x1fb0d8u: goto label_1fb0d8;
        case 0x1fb0dcu: goto label_1fb0dc;
        case 0x1fb0e0u: goto label_1fb0e0;
        case 0x1fb0e4u: goto label_1fb0e4;
        case 0x1fb0e8u: goto label_1fb0e8;
        case 0x1fb0ecu: goto label_1fb0ec;
        case 0x1fb0f0u: goto label_1fb0f0;
        case 0x1fb0f4u: goto label_1fb0f4;
        case 0x1fb0f8u: goto label_1fb0f8;
        case 0x1fb0fcu: goto label_1fb0fc;
        default: break;
    }

    ctx->pc = 0x1faf50u;

label_1faf50:
    // 0x1faf50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1faf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1faf54:
    // 0x1faf54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1faf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1faf58:
    // 0x1faf58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1faf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1faf5c:
    // 0x1faf5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1faf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1faf60:
    // 0x1faf60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1faf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1faf64:
    // 0x1faf64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1faf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1faf68:
    // 0x1faf68: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1faf68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1faf6c:
    // 0x1faf6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1faf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1faf70:
    // 0x1faf70: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1faf70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1faf74:
    // 0x1faf74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1faf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1faf78:
    // 0x1faf78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1faf78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1faf7c:
    // 0x1faf7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1faf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1faf80:
    // 0x1faf80: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1faf80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1faf84:
    // 0x1faf84: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1faf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1faf88:
    // 0x1faf88: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1faf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1faf8c:
    // 0x1faf8c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1faf8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1faf90:
    // 0x1faf90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1faf94:
    if (ctx->pc == 0x1FAF94u) {
        ctx->pc = 0x1FAF94u;
            // 0x1faf94: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FAF98u;
        goto label_1faf98;
    }
    ctx->pc = 0x1FAF90u;
    {
        const bool branch_taken_0x1faf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAF90u;
            // 0x1faf94: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf90) {
            ctx->pc = 0x1FAFC0u;
            goto label_1fafc0;
        }
    }
    ctx->pc = 0x1FAF98u;
label_1faf98:
    // 0x1faf98: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1faf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1faf9c:
    // 0x1faf9c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1faf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1fafa0:
    // 0x1fafa0: 0x2442b0a8  addiu       $v0, $v0, -0x4F58
    ctx->pc = 0x1fafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946984));
label_1fafa4:
    // 0x1fafa4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fafa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1fafa8:
    // 0x1fafa8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1fafac:
    // 0x1fafac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1fafacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1fafb0:
    // 0x1fafb0: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fafb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fafb4:
    // 0x1fafb4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1fafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1fafb8:
    // 0x1fafb8: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1fafb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_1fafbc:
    // 0x1fafbc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fafbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1fafc0:
    // 0x1fafc0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1fafc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fafc4:
    // 0x1fafc4: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x1fafc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1fafc8:
    // 0x1fafc8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1fafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1fafcc:
    // 0x1fafcc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fafccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fafd0:
    // 0x1fafd0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1fafd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fafd4:
    // 0x1fafd4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1fafd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1fafd8:
    // 0x1fafd8: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x1fafd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fafdc:
    // 0x1fafdc: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x1fafdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1fafe0:
    // 0x1fafe0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1fafe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fafe4:
    // 0x1fafe4: 0xc4640034  lwc1        $f4, 0x34($v1)
    ctx->pc = 0x1fafe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fafe8:
    // 0x1fafe8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1fafe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1fafec:
    // 0x1fafec: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x1fafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1faff0:
    // 0x1faff0: 0x46001141  sub.s       $f5, $f2, $f0
    ctx->pc = 0x1faff0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1faff4:
    // 0x1faff4: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1faff4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1faff8:
    // 0x1faff8: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x1faff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1faffc:
    // 0x1faffc: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1faffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb000:
    // 0x1fb000: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1fb000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb004:
    // 0x1fb004: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1fb004u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fb008:
    // 0x1fb008: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1fb008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb00c:
    // 0x1fb00c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1fb00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb010:
    // 0x1fb010: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fb010u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fb014:
    // 0x1fb014: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fb014u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fb018:
    // 0x1fb018: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fb018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fb01c:
    // 0x1fb01c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1fb01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1fb020:
    // 0x1fb020: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1fb020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb024:
    // 0x1fb024: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1fb024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb028:
    // 0x1fb028: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x1fb028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb02c:
    // 0x1fb02c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fb02cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fb030:
    // 0x1fb030: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fb030u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fb034:
    // 0x1fb034: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fb034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fb038:
    // 0x1fb038: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fb038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1fb03c:
    // 0x1fb03c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1fb03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb040:
    // 0x1fb040: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1fb040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb044:
    // 0x1fb044: 0xc4420028  lwc1        $f2, 0x28($v0)
    ctx->pc = 0x1fb044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb048:
    // 0x1fb048: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fb048u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fb04c:
    // 0x1fb04c: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fb04cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fb050:
    // 0x1fb050: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fb050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fb054:
    // 0x1fb054: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1fb054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_1fb058:
    // 0x1fb058: 0xc09ea24  jal         func_27A890
label_1fb05c:
    if (ctx->pc == 0x1FB05Cu) {
        ctx->pc = 0x1FB05Cu;
            // 0x1fb05c: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1FB060u;
        goto label_1fb060;
    }
    ctx->pc = 0x1FB058u;
    SET_GPR_U32(ctx, 31, 0x1FB060u);
    ctx->pc = 0x1FB05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB058u;
            // 0x1fb05c: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A890u;
    if (runtime->hasFunction(0x27A890u)) {
        auto targetFn = runtime->lookupFunction(0x27A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB060u; }
        if (ctx->pc != 0x1FB060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A890_0x27a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB060u; }
        if (ctx->pc != 0x1FB060u) { return; }
    }
    ctx->pc = 0x1FB060u;
label_1fb060:
    // 0x1fb060: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1fb060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb064:
    // 0x1fb064: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1fb064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb068:
    // 0x1fb068: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1fb068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb06c:
    // 0x1fb06c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1fb06cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1fb070:
    // 0x1fb070: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fb070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb074:
    // 0x1fb074: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1fb078:
    if (ctx->pc == 0x1FB078u) {
        ctx->pc = 0x1FB07Cu;
        goto label_1fb07c;
    }
    ctx->pc = 0x1FB074u;
    {
        const bool branch_taken_0x1fb074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb074) {
            ctx->pc = 0x1FB094u;
            goto label_1fb094;
        }
    }
    ctx->pc = 0x1FB07Cu;
label_1fb07c:
    // 0x1fb07c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1fb07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb080:
    // 0x1fb080: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fb080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fb084:
    // 0x1fb084: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fb084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fb088:
    // 0x1fb088: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fb088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fb08c:
    // 0x1fb08c: 0x320f809  jalr        $t9
label_1fb090:
    if (ctx->pc == 0x1FB090u) {
        ctx->pc = 0x1FB090u;
            // 0x1fb090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FB094u;
        goto label_1fb094;
    }
    ctx->pc = 0x1FB08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FB094u);
        ctx->pc = 0x1FB090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB08Cu;
            // 0x1fb090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FB094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FB094u; }
            if (ctx->pc != 0x1FB094u) { return; }
        }
        }
    }
    ctx->pc = 0x1FB094u;
label_1fb094:
    // 0x1fb094: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fb094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fb098:
    // 0x1fb098: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fb098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fb09c:
    // 0x1fb09c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1fb09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fb0a0:
    // 0x1fb0a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fb0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fb0a4:
    // 0x1fb0a4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fb0a8:
    // 0x1fb0a8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fb0a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fb0ac:
    // 0x1fb0ac: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fb0b0:
    if (ctx->pc == 0x1FB0B0u) {
        ctx->pc = 0x1FB0B0u;
            // 0x1fb0b0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FB0B4u;
        goto label_1fb0b4;
    }
    ctx->pc = 0x1FB0ACu;
    {
        const bool branch_taken_0x1fb0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB0ACu;
            // 0x1fb0b0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0ac) {
            ctx->pc = 0x1FB0DCu;
            goto label_1fb0dc;
        }
    }
    ctx->pc = 0x1FB0B4u;
label_1fb0b4:
    // 0x1fb0b4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fb0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fb0b8:
    // 0x1fb0b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fb0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fb0bc:
    // 0x1fb0bc: 0x2463b0b8  addiu       $v1, $v1, -0x4F48
    ctx->pc = 0x1fb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947000));
label_1fb0c0:
    // 0x1fb0c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fb0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fb0c4:
    // 0x1fb0c4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fb0c8:
    // 0x1fb0c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fb0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fb0cc:
    // 0x1fb0cc: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fb0d0:
    // 0x1fb0d0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fb0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fb0d4:
    // 0x1fb0d4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fb0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fb0d8:
    // 0x1fb0d8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fb0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fb0dc:
    // 0x1fb0dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fb0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb0e0:
    // 0x1fb0e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fb0e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb0e4:
    // 0x1fb0e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fb0e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb0e8:
    // 0x1fb0e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fb0e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb0ec:
    // 0x1fb0ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb0ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb0f0:
    // 0x1fb0f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb0f4:
    // 0x1fb0f4: 0x3e00008  jr          $ra
label_1fb0f8:
    if (ctx->pc == 0x1FB0F8u) {
        ctx->pc = 0x1FB0F8u;
            // 0x1fb0f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1FB0FCu;
        goto label_1fb0fc;
    }
    ctx->pc = 0x1FB0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB0F4u;
            // 0x1fb0f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB0FCu;
label_1fb0fc:
    // 0x1fb0fc: 0x0  nop
    ctx->pc = 0x1fb0fcu;
    // NOP
}
