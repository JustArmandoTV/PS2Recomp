#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049BF00
// Address: 0x49bf00 - 0x49c0a0
void sub_0049BF00_0x49bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049BF00_0x49bf00");
#endif

    switch (ctx->pc) {
        case 0x49bf20u: goto label_49bf20;
        case 0x49bf54u: goto label_49bf54;
        case 0x49c010u: goto label_49c010;
        case 0x49c068u: goto label_49c068;
        case 0x49c080u: goto label_49c080;
        default: break;
    }

    ctx->pc = 0x49bf00u;

    // 0x49bf00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49bf04: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x49bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x49bf08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49bf0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49bf0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bf10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49bf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49bf14: 0x3445aeec  ori         $a1, $v0, 0xAEEC
    ctx->pc = 0x49bf14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44780);
    // 0x49bf18: 0xc0ee760  jal         func_3B9D80
    ctx->pc = 0x49BF18u;
    SET_GPR_U32(ctx, 31, 0x49BF20u);
    ctx->pc = 0x49BF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49BF18u;
            // 0x49bf1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49BF20u; }
        if (ctx->pc != 0x49BF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49BF20u; }
        if (ctx->pc != 0x49BF20u) { return; }
    }
    ctx->pc = 0x49BF20u;
label_49bf20:
    // 0x49bf20: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49bf24: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x49bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x49bf28: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x49bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x49bf2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x49bf30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49bf34: 0x2484a390  addiu       $a0, $a0, -0x5C70
    ctx->pc = 0x49bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943632));
    // 0x49bf38: 0xa600005c  sh          $zero, 0x5C($s0)
    ctx->pc = 0x49bf38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x49bf3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49bf3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bf40: 0x8c470eac  lw          $a3, 0xEAC($v0)
    ctx->pc = 0x49bf40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
    // 0x49bf44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49bf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bf48: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x49bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x49bf4c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x49bf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x49bf50: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x49bf50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_49bf54:
    // 0x49bf54: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x49bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x49bf58: 0xa0400060  sb          $zero, 0x60($v0)
    ctx->pc = 0x49bf58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x49bf5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x49bf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x49bf60: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x49bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x49bf64: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x49bf64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x49bf68: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49BF68u;
    {
        const bool branch_taken_0x49bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49BF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BF68u;
            // 0x49bf6c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bf68) {
            ctx->pc = 0x49BF54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49bf54;
        }
    }
    ctx->pc = 0x49BF70u;
    // 0x49bf70: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x49bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x49bf74: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x49bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x49bf78: 0xc441a3a8  lwc1        $f1, -0x5C58($v0)
    ctx->pc = 0x49bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x49bf7c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x49bf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x49bf80: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x49bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x49bf84: 0xc440a3b8  lwc1        $f0, -0x5C48($v0)
    ctx->pc = 0x49bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x49bf88: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x49bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x49bf8c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x49bf8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x49bf90: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x49bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x49bf94: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x49bf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x49bf98: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x49bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x49bf9c: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x49bf9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x49bfa0: 0x8ce50088  lw          $a1, 0x88($a3)
    ctx->pc = 0x49bfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x49bfa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49bfa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bfa8: 0xa6050058  sh          $a1, 0x58($s0)
    ctx->pc = 0x49bfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 5));
    // 0x49bfac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49bfacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x49bfb0: 0x8ce5008c  lw          $a1, 0x8C($a3)
    ctx->pc = 0x49bfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x49bfb4: 0xa605005a  sh          $a1, 0x5A($s0)
    ctx->pc = 0x49bfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 5));
    // 0x49bfb8: 0x8ce60088  lw          $a2, 0x88($a3)
    ctx->pc = 0x49bfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x49bfbc: 0x8ce50058  lw          $a1, 0x58($a3)
    ctx->pc = 0x49bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x49bfc0: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x49bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x49bfc4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x49bfc4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x49bfc8: 0x0  nop
    ctx->pc = 0x49bfc8u;
    // NOP
    // 0x49bfcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x49bfccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x49bfd0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x49bfd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x49bfd4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x49bfd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x49bfd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49bfd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x49bfdc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x49bfdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x49bfe0: 0x0  nop
    ctx->pc = 0x49bfe0u;
    // NOP
    // 0x49bfe4: 0xa605005e  sh          $a1, 0x5E($s0)
    ctx->pc = 0x49bfe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 5));
    // 0x49bfe8: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x49bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x49bfec: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x49bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x49bff0: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x49bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x49bff4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49bff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49bff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49bff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49bffc: 0x3e00008  jr          $ra
    ctx->pc = 0x49BFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BFFCu;
            // 0x49c000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49C004u;
    // 0x49c004: 0x0  nop
    ctx->pc = 0x49c004u;
    // NOP
    // 0x49c008: 0x0  nop
    ctx->pc = 0x49c008u;
    // NOP
    // 0x49c00c: 0x0  nop
    ctx->pc = 0x49c00cu;
    // NOP
label_49c010:
    // 0x49c010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49c010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49c014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49c014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49c018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49c018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49c01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49c01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49c020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49c020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c024: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x49C024u;
    {
        const bool branch_taken_0x49c024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C024u;
            // 0x49c028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c024) {
            ctx->pc = 0x49C080u;
            goto label_49c080;
        }
    }
    ctx->pc = 0x49C02Cu;
    // 0x49c02c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49c030: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49c030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49c034: 0x2463fce0  addiu       $v1, $v1, -0x320
    ctx->pc = 0x49c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966496));
    // 0x49c038: 0x2442fd18  addiu       $v0, $v0, -0x2E8
    ctx->pc = 0x49c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966552));
    // 0x49c03c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49c040: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49C040u;
    {
        const bool branch_taken_0x49c040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C040u;
            // 0x49c044: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c040) {
            ctx->pc = 0x49C068u;
            goto label_49c068;
        }
    }
    ctx->pc = 0x49C048u;
    // 0x49c048: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49c048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49c04c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49c050: 0x2463fe30  addiu       $v1, $v1, -0x1D0
    ctx->pc = 0x49c050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966832));
    // 0x49c054: 0x2442fe68  addiu       $v0, $v0, -0x198
    ctx->pc = 0x49c054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966888));
    // 0x49c058: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49c058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49c05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49c05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c060: 0xc127028  jal         func_49C0A0
    ctx->pc = 0x49C060u;
    SET_GPR_U32(ctx, 31, 0x49C068u);
    ctx->pc = 0x49C064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C060u;
            // 0x49c064: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49C0A0u;
    if (runtime->hasFunction(0x49C0A0u)) {
        auto targetFn = runtime->lookupFunction(0x49C0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C068u; }
        if (ctx->pc != 0x49C068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049C0A0_0x49c0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C068u; }
        if (ctx->pc != 0x49C068u) { return; }
    }
    ctx->pc = 0x49C068u;
label_49c068:
    // 0x49c068: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x49c068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x49c06c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49c06cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x49c070: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49C070u;
    {
        const bool branch_taken_0x49c070 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49c070) {
            ctx->pc = 0x49C074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C070u;
            // 0x49c074: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C084u;
            goto label_49c084;
        }
    }
    ctx->pc = 0x49C078u;
    // 0x49c078: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49C078u;
    SET_GPR_U32(ctx, 31, 0x49C080u);
    ctx->pc = 0x49C07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C078u;
            // 0x49c07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C080u; }
        if (ctx->pc != 0x49C080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C080u; }
        if (ctx->pc != 0x49C080u) { return; }
    }
    ctx->pc = 0x49C080u;
label_49c080:
    // 0x49c080: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49c080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49c084:
    // 0x49c084: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49c088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49c088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49c08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49c08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49c090: 0x3e00008  jr          $ra
    ctx->pc = 0x49C090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C090u;
            // 0x49c094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49C098u;
    // 0x49c098: 0x0  nop
    ctx->pc = 0x49c098u;
    // NOP
    // 0x49c09c: 0x0  nop
    ctx->pc = 0x49c09cu;
    // NOP
}
