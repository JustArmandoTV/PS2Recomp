#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CCD00
// Address: 0x4ccd00 - 0x4cd000
void sub_004CCD00_0x4ccd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CCD00_0x4ccd00");
#endif

    switch (ctx->pc) {
        case 0x4ccdc0u: goto label_4ccdc0;
        case 0x4ccde0u: goto label_4ccde0;
        case 0x4ccdfcu: goto label_4ccdfc;
        case 0x4cce08u: goto label_4cce08;
        case 0x4cce54u: goto label_4cce54;
        case 0x4cce5cu: goto label_4cce5c;
        case 0x4cce68u: goto label_4cce68;
        case 0x4cce8cu: goto label_4cce8c;
        case 0x4cce9cu: goto label_4cce9c;
        case 0x4ccea8u: goto label_4ccea8;
        case 0x4ccf20u: goto label_4ccf20;
        case 0x4ccf38u: goto label_4ccf38;
        case 0x4ccf48u: goto label_4ccf48;
        case 0x4ccf6cu: goto label_4ccf6c;
        case 0x4ccf8cu: goto label_4ccf8c;
        case 0x4ccfa0u: goto label_4ccfa0;
        case 0x4ccfb8u: goto label_4ccfb8;
        default: break;
    }

    ctx->pc = 0x4ccd00u;

    // 0x4ccd00: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x4ccd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x4ccd04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4ccd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4ccd08: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4ccd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4ccd0c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4ccd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x4ccd10: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4ccd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4ccd14: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4ccd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4ccd18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4ccd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4ccd1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ccd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4ccd20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4ccd20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccd24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ccd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4ccd28: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x4ccd28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x4ccd2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ccd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4ccd30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ccd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ccd34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ccd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ccd38: 0x8c670cd0  lw          $a3, 0xCD0($v1)
    ctx->pc = 0x4ccd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3280)));
    // 0x4ccd3c: 0x8c86d130  lw          $a2, -0x2ED0($a0)
    ctx->pc = 0x4ccd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
    // 0x4ccd40: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4ccd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4ccd44: 0x8cf30134  lw          $s3, 0x134($a3)
    ctx->pc = 0x4ccd44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 308)));
    // 0x4ccd48: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x4ccd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x4ccd4c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4ccd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x4ccd50: 0x8c97e370  lw          $s7, -0x1C90($a0)
    ctx->pc = 0x4ccd50u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959984)));
    // 0x4ccd54: 0x24f20134  addiu       $s2, $a3, 0x134
    ctx->pc = 0x4ccd54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 308));
    // 0x4ccd58: 0x8cc60130  lw          $a2, 0x130($a2)
    ctx->pc = 0x4ccd58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x4ccd5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ccd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ccd60: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x4ccd60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x4ccd64: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x4ccd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4ccd68: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4ccd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4ccd6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4ccd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ccd70: 0x8ce40144  lw          $a0, 0x144($a3)
    ctx->pc = 0x4ccd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 324)));
    // 0x4ccd74: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4ccd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ccd78: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x4ccd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4ccd7c: 0x8ce30180  lw          $v1, 0x180($a3)
    ctx->pc = 0x4ccd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 384)));
    // 0x4ccd80: 0x24be0010  addiu       $fp, $a1, 0x10
    ctx->pc = 0x4ccd80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4ccd84: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x4ccd84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ccd88: 0x8070008a  lb          $s0, 0x8A($v1)
    ctx->pc = 0x4ccd88u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 138)));
    // 0x4ccd8c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x4ccd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ccd90: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4ccd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ccd94: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x4ccd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ccd98: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x4ccd98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x4ccd9c: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x4ccd9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x4ccda0: 0x600008b  bltz        $s0, . + 4 + (0x8B << 2)
    ctx->pc = 0x4CCDA0u;
    {
        const bool branch_taken_0x4ccda0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x4CCDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCDA0u;
            // 0x4ccda4: 0xe7a00138  swc1        $f0, 0x138($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccda0) {
            ctx->pc = 0x4CCFD0u;
            goto label_4ccfd0;
        }
    }
    ctx->pc = 0x4CCDA8u;
    // 0x4ccda8: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x4ccda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x4ccdac: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x4ccdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ccdb0: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x4ccdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4ccdb4: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x4ccdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4ccdb8: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x4CCDB8u;
    SET_GPR_U32(ctx, 31, 0x4CCDC0u);
    ctx->pc = 0x4CCDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCDB8u;
            // 0x4ccdbc: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCDC0u; }
        if (ctx->pc != 0x4CCDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCDC0u; }
        if (ctx->pc != 0x4CCDC0u) { return; }
    }
    ctx->pc = 0x4CCDC0u;
label_4ccdc0:
    // 0x4ccdc0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4ccdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4ccdc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ccdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4ccdc8: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x4ccdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x4ccdcc: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x4ccdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x4ccdd0: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4ccdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x4ccdd4: 0x8c760130  lw          $s6, 0x130($v1)
    ctx->pc = 0x4ccdd4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x4ccdd8: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x4CCDD8u;
    SET_GPR_U32(ctx, 31, 0x4CCDE0u);
    ctx->pc = 0x4CCDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCDD8u;
            // 0x4ccddc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCDE0u; }
        if (ctx->pc != 0x4CCDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCDE0u; }
        if (ctx->pc != 0x4CCDE0u) { return; }
    }
    ctx->pc = 0x4CCDE0u;
label_4ccde0:
    // 0x4ccde0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ccde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ccde4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CCDE4u;
    {
        const bool branch_taken_0x4ccde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ccde4) {
            ctx->pc = 0x4CCDF4u;
            goto label_4ccdf4;
        }
    }
    ctx->pc = 0x4CCDECu;
    // 0x4ccdec: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x4CCDECu;
    {
        const bool branch_taken_0x4ccdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCDECu;
            // 0x4ccdf0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccdec) {
            ctx->pc = 0x4CCEBCu;
            goto label_4ccebc;
        }
    }
    ctx->pc = 0x4CCDF4u;
label_4ccdf4:
    // 0x4ccdf4: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x4CCDF4u;
    SET_GPR_U32(ctx, 31, 0x4CCDFCu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCDFCu; }
        if (ctx->pc != 0x4CCDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCDFCu; }
        if (ctx->pc != 0x4CCDFCu) { return; }
    }
    ctx->pc = 0x4CCDFCu;
label_4ccdfc:
    // 0x4ccdfc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4ccdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cce00: 0xc076984  jal         func_1DA610
    ctx->pc = 0x4CCE00u;
    SET_GPR_U32(ctx, 31, 0x4CCE08u);
    ctx->pc = 0x4CCE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCE00u;
            // 0x4cce04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE08u; }
        if (ctx->pc != 0x4CCE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE08u; }
        if (ctx->pc != 0x4CCE08u) { return; }
    }
    ctx->pc = 0x4CCE08u;
label_4cce08:
    // 0x4cce08: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4cce08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cce0c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4cce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4cce10: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cce10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cce14: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4cce14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4cce18: 0xc442c990  lwc1        $f2, -0x3670($v0)
    ctx->pc = 0x4cce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4cce1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4cce1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cce20: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cce20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cce24: 0xc441c998  lwc1        $f1, -0x3668($v0)
    ctx->pc = 0x4cce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4cce28: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x4cce28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x4cce2c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cce30: 0xc440c99c  lwc1        $f0, -0x3664($v0)
    ctx->pc = 0x4cce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4cce34: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x4cce34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x4cce38: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cce38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4cce3c: 0x8c42c994  lw          $v0, -0x366C($v0)
    ctx->pc = 0x4cce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953364)));
    // 0x4cce40: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x4cce40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x4cce44: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x4cce44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x4cce48: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x4cce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4cce4c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x4CCE4Cu;
    SET_GPR_U32(ctx, 31, 0x4CCE54u);
    ctx->pc = 0x4CCE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCE4Cu;
            // 0x4cce50: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE54u; }
        if (ctx->pc != 0x4CCE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE54u; }
        if (ctx->pc != 0x4CCE54u) { return; }
    }
    ctx->pc = 0x4CCE54u;
label_4cce54:
    // 0x4cce54: 0xc076980  jal         func_1DA600
    ctx->pc = 0x4CCE54u;
    SET_GPR_U32(ctx, 31, 0x4CCE5Cu);
    ctx->pc = 0x4CCE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCE54u;
            // 0x4cce58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE5Cu; }
        if (ctx->pc != 0x4CCE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE5Cu; }
        if (ctx->pc != 0x4CCE5Cu) { return; }
    }
    ctx->pc = 0x4CCE5Cu;
label_4cce5c:
    // 0x4cce5c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4cce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4cce60: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x4CCE60u;
    SET_GPR_U32(ctx, 31, 0x4CCE68u);
    ctx->pc = 0x4CCE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCE60u;
            // 0x4cce64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE68u; }
        if (ctx->pc != 0x4CCE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE68u; }
        if (ctx->pc != 0x4CCE68u) { return; }
    }
    ctx->pc = 0x4CCE68u;
label_4cce68:
    // 0x4cce68: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4cce68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4cce6c: 0xc4617550  lwc1        $f1, 0x7550($v1)
    ctx->pc = 0x4cce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 30032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4cce70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4cce70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4cce74: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x4CCE74u;
    {
        const bool branch_taken_0x4cce74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cce74) {
            ctx->pc = 0x4CCE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCE74u;
            // 0x4cce78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CCE84u;
            goto label_4cce84;
        }
    }
    ctx->pc = 0x4CCE7Cu;
    // 0x4cce7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4CCE7Cu;
    {
        const bool branch_taken_0x4cce7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCE7Cu;
            // 0x4cce80: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cce7c) {
            ctx->pc = 0x4CCEBCu;
            goto label_4ccebc;
        }
    }
    ctx->pc = 0x4CCE84u;
label_4cce84:
    // 0x4cce84: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x4CCE84u;
    SET_GPR_U32(ctx, 31, 0x4CCE8Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE8Cu; }
        if (ctx->pc != 0x4CCE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE8Cu; }
        if (ctx->pc != 0x4CCE8Cu) { return; }
    }
    ctx->pc = 0x4CCE8Cu;
label_4cce8c:
    // 0x4cce8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4cce8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cce90: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4cce90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4cce94: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CCE94u;
    SET_GPR_U32(ctx, 31, 0x4CCE9Cu);
    ctx->pc = 0x4CCE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCE94u;
            // 0x4cce98: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE9Cu; }
        if (ctx->pc != 0x4CCE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCE9Cu; }
        if (ctx->pc != 0x4CCE9Cu) { return; }
    }
    ctx->pc = 0x4CCE9Cu;
label_4cce9c:
    // 0x4cce9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4cce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccea0: 0xc04c650  jal         func_131940
    ctx->pc = 0x4CCEA0u;
    SET_GPR_U32(ctx, 31, 0x4CCEA8u);
    ctx->pc = 0x4CCEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCEA0u;
            // 0x4ccea4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCEA8u; }
        if (ctx->pc != 0x4CCEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCEA8u; }
        if (ctx->pc != 0x4CCEA8u) { return; }
    }
    ctx->pc = 0x4CCEA8u;
label_4ccea8:
    // 0x4ccea8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4ccea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4cceac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4cceacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cceb0: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4cceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x4cceb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4cceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4cceb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ccebc:
    // 0x4ccebc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4ccebcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4ccec0: 0x50200044  beql        $at, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x4CCEC0u;
    {
        const bool branch_taken_0x4ccec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ccec0) {
            ctx->pc = 0x4CCEC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCEC0u;
            // 0x4ccec4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CCFD4u;
            goto label_4ccfd4;
        }
    }
    ctx->pc = 0x4CCEC8u;
    // 0x4ccec8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4ccec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4ccecc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4cceccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x4cced0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4cced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4cced4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4cced4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4cced8: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x4cced8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ccedc: 0x2484c8b0  addiu       $a0, $a0, -0x3750
    ctx->pc = 0x4ccedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953136));
    // 0x4ccee0: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x4ccee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4ccee4: 0x2463c8b4  addiu       $v1, $v1, -0x374C
    ctx->pc = 0x4ccee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953140));
    // 0x4ccee8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4ccee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4cceec: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cceecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4ccef0: 0x2442c8b8  addiu       $v0, $v0, -0x3748
    ctx->pc = 0x4ccef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953144));
    // 0x4ccef4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4ccef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4ccef8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4ccef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4ccefc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ccefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccf00: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x4ccf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x4ccf04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4ccf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ccf08: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x4ccf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x4ccf0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4ccf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ccf10: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x4ccf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x4ccf14: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x4ccf14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x4ccf18: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x4CCF18u;
    SET_GPR_U32(ctx, 31, 0x4CCF20u);
    ctx->pc = 0x4CCF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCF18u;
            // 0x4ccf1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCF20u; }
        if (ctx->pc != 0x4CCF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCF20u; }
        if (ctx->pc != 0x4CCF20u) { return; }
    }
    ctx->pc = 0x4CCF20u;
label_4ccf20:
    // 0x4ccf20: 0xc6ac020c  lwc1        $f12, 0x20C($s5)
    ctx->pc = 0x4ccf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ccf24: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4ccf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4ccf28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ccf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccf2c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4ccf2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4ccf30: 0xc04ce50  jal         func_133940
    ctx->pc = 0x4CCF30u;
    SET_GPR_U32(ctx, 31, 0x4CCF38u);
    ctx->pc = 0x4CCF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCF30u;
            // 0x4ccf34: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCF38u; }
        if (ctx->pc != 0x4CCF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCF38u; }
        if (ctx->pc != 0x4CCF38u) { return; }
    }
    ctx->pc = 0x4CCF38u;
label_4ccf38:
    // 0x4ccf38: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4ccf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4ccf3c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4ccf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccf40: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CCF40u;
    SET_GPR_U32(ctx, 31, 0x4CCF48u);
    ctx->pc = 0x4CCF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCF40u;
            // 0x4ccf44: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCF48u; }
        if (ctx->pc != 0x4CCF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCF48u; }
        if (ctx->pc != 0x4CCF48u) { return; }
    }
    ctx->pc = 0x4CCF48u;
label_4ccf48:
    // 0x4ccf48: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4ccf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x4ccf4c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4ccf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4ccf50: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4ccf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4ccf54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ccf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccf58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ccf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ccf5c: 0x0  nop
    ctx->pc = 0x4ccf5cu;
    // NOP
    // 0x4ccf60: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4ccf60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4ccf64: 0xc04ce50  jal         func_133940
    ctx->pc = 0x4CCF64u;
    SET_GPR_U32(ctx, 31, 0x4CCF6Cu);
    ctx->pc = 0x4CCF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCF64u;
            // 0x4ccf68: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCF6Cu; }
        if (ctx->pc != 0x4CCF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCF6Cu; }
        if (ctx->pc != 0x4CCF6Cu) { return; }
    }
    ctx->pc = 0x4CCF6Cu;
label_4ccf6c:
    // 0x4ccf6c: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4ccf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4ccf70: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4ccf70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x4ccf74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4ccf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccf78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4ccf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccf7c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x4ccf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4ccf80: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4ccf80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x4ccf84: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x4CCF84u;
    SET_GPR_U32(ctx, 31, 0x4CCF8Cu);
    ctx->pc = 0x4CCF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCF84u;
            // 0x4ccf88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCF8Cu; }
        if (ctx->pc != 0x4CCF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCF8Cu; }
        if (ctx->pc != 0x4CCF8Cu) { return; }
    }
    ctx->pc = 0x4CCF8Cu;
label_4ccf8c:
    // 0x4ccf8c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x4ccf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4ccf90: 0xc6ac0214  lwc1        $f12, 0x214($s5)
    ctx->pc = 0x4ccf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ccf94: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x4ccf94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4ccf98: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x4CCF98u;
    SET_GPR_U32(ctx, 31, 0x4CCFA0u);
    ctx->pc = 0x4CCF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCF98u;
            // 0x4ccf9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCFA0u; }
        if (ctx->pc != 0x4CCFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCFA0u; }
        if (ctx->pc != 0x4CCFA0u) { return; }
    }
    ctx->pc = 0x4CCFA0u;
label_4ccfa0:
    // 0x4ccfa0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x4ccfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4ccfa4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4ccfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccfa8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4ccfa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccfac: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4ccfacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4ccfb0: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x4CCFB0u;
    SET_GPR_U32(ctx, 31, 0x4CCFB8u);
    ctx->pc = 0x4CCFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCFB0u;
            // 0x4ccfb4: 0x3c080070  lui         $t0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCFB8u; }
        if (ctx->pc != 0x4CCFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCFB8u; }
        if (ctx->pc != 0x4CCFB8u) { return; }
    }
    ctx->pc = 0x4CCFB8u;
label_4ccfb8:
    // 0x4ccfb8: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x4ccfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ccfbc: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x4ccfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ccfc0: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x4ccfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ccfc4: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x4ccfc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x4ccfc8: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x4ccfc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x4ccfcc: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x4ccfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_4ccfd0:
    // 0x4ccfd0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4ccfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4ccfd4:
    // 0x4ccfd4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4ccfd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4ccfd8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4ccfd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ccfdc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4ccfdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ccfe0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4ccfe0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ccfe4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4ccfe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ccfe8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ccfe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ccfec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ccfecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ccff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ccff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ccff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ccff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ccff8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CCFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CCFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCFF8u;
            // 0x4ccffc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CD000u;
}
