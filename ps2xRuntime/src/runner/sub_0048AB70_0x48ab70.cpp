#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048AB70
// Address: 0x48ab70 - 0x48ad60
void sub_0048AB70_0x48ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048AB70_0x48ab70");
#endif

    switch (ctx->pc) {
        case 0x48ab70u: goto label_48ab70;
        case 0x48ab74u: goto label_48ab74;
        case 0x48ab78u: goto label_48ab78;
        case 0x48ab7cu: goto label_48ab7c;
        case 0x48ab80u: goto label_48ab80;
        case 0x48ab84u: goto label_48ab84;
        case 0x48ab88u: goto label_48ab88;
        case 0x48ab8cu: goto label_48ab8c;
        case 0x48ab90u: goto label_48ab90;
        case 0x48ab94u: goto label_48ab94;
        case 0x48ab98u: goto label_48ab98;
        case 0x48ab9cu: goto label_48ab9c;
        case 0x48aba0u: goto label_48aba0;
        case 0x48aba4u: goto label_48aba4;
        case 0x48aba8u: goto label_48aba8;
        case 0x48abacu: goto label_48abac;
        case 0x48abb0u: goto label_48abb0;
        case 0x48abb4u: goto label_48abb4;
        case 0x48abb8u: goto label_48abb8;
        case 0x48abbcu: goto label_48abbc;
        case 0x48abc0u: goto label_48abc0;
        case 0x48abc4u: goto label_48abc4;
        case 0x48abc8u: goto label_48abc8;
        case 0x48abccu: goto label_48abcc;
        case 0x48abd0u: goto label_48abd0;
        case 0x48abd4u: goto label_48abd4;
        case 0x48abd8u: goto label_48abd8;
        case 0x48abdcu: goto label_48abdc;
        case 0x48abe0u: goto label_48abe0;
        case 0x48abe4u: goto label_48abe4;
        case 0x48abe8u: goto label_48abe8;
        case 0x48abecu: goto label_48abec;
        case 0x48abf0u: goto label_48abf0;
        case 0x48abf4u: goto label_48abf4;
        case 0x48abf8u: goto label_48abf8;
        case 0x48abfcu: goto label_48abfc;
        case 0x48ac00u: goto label_48ac00;
        case 0x48ac04u: goto label_48ac04;
        case 0x48ac08u: goto label_48ac08;
        case 0x48ac0cu: goto label_48ac0c;
        case 0x48ac10u: goto label_48ac10;
        case 0x48ac14u: goto label_48ac14;
        case 0x48ac18u: goto label_48ac18;
        case 0x48ac1cu: goto label_48ac1c;
        case 0x48ac20u: goto label_48ac20;
        case 0x48ac24u: goto label_48ac24;
        case 0x48ac28u: goto label_48ac28;
        case 0x48ac2cu: goto label_48ac2c;
        case 0x48ac30u: goto label_48ac30;
        case 0x48ac34u: goto label_48ac34;
        case 0x48ac38u: goto label_48ac38;
        case 0x48ac3cu: goto label_48ac3c;
        case 0x48ac40u: goto label_48ac40;
        case 0x48ac44u: goto label_48ac44;
        case 0x48ac48u: goto label_48ac48;
        case 0x48ac4cu: goto label_48ac4c;
        case 0x48ac50u: goto label_48ac50;
        case 0x48ac54u: goto label_48ac54;
        case 0x48ac58u: goto label_48ac58;
        case 0x48ac5cu: goto label_48ac5c;
        case 0x48ac60u: goto label_48ac60;
        case 0x48ac64u: goto label_48ac64;
        case 0x48ac68u: goto label_48ac68;
        case 0x48ac6cu: goto label_48ac6c;
        case 0x48ac70u: goto label_48ac70;
        case 0x48ac74u: goto label_48ac74;
        case 0x48ac78u: goto label_48ac78;
        case 0x48ac7cu: goto label_48ac7c;
        case 0x48ac80u: goto label_48ac80;
        case 0x48ac84u: goto label_48ac84;
        case 0x48ac88u: goto label_48ac88;
        case 0x48ac8cu: goto label_48ac8c;
        case 0x48ac90u: goto label_48ac90;
        case 0x48ac94u: goto label_48ac94;
        case 0x48ac98u: goto label_48ac98;
        case 0x48ac9cu: goto label_48ac9c;
        case 0x48aca0u: goto label_48aca0;
        case 0x48aca4u: goto label_48aca4;
        case 0x48aca8u: goto label_48aca8;
        case 0x48acacu: goto label_48acac;
        case 0x48acb0u: goto label_48acb0;
        case 0x48acb4u: goto label_48acb4;
        case 0x48acb8u: goto label_48acb8;
        case 0x48acbcu: goto label_48acbc;
        case 0x48acc0u: goto label_48acc0;
        case 0x48acc4u: goto label_48acc4;
        case 0x48acc8u: goto label_48acc8;
        case 0x48acccu: goto label_48accc;
        case 0x48acd0u: goto label_48acd0;
        case 0x48acd4u: goto label_48acd4;
        case 0x48acd8u: goto label_48acd8;
        case 0x48acdcu: goto label_48acdc;
        case 0x48ace0u: goto label_48ace0;
        case 0x48ace4u: goto label_48ace4;
        case 0x48ace8u: goto label_48ace8;
        case 0x48acecu: goto label_48acec;
        case 0x48acf0u: goto label_48acf0;
        case 0x48acf4u: goto label_48acf4;
        case 0x48acf8u: goto label_48acf8;
        case 0x48acfcu: goto label_48acfc;
        case 0x48ad00u: goto label_48ad00;
        case 0x48ad04u: goto label_48ad04;
        case 0x48ad08u: goto label_48ad08;
        case 0x48ad0cu: goto label_48ad0c;
        case 0x48ad10u: goto label_48ad10;
        case 0x48ad14u: goto label_48ad14;
        case 0x48ad18u: goto label_48ad18;
        case 0x48ad1cu: goto label_48ad1c;
        case 0x48ad20u: goto label_48ad20;
        case 0x48ad24u: goto label_48ad24;
        case 0x48ad28u: goto label_48ad28;
        case 0x48ad2cu: goto label_48ad2c;
        case 0x48ad30u: goto label_48ad30;
        case 0x48ad34u: goto label_48ad34;
        case 0x48ad38u: goto label_48ad38;
        case 0x48ad3cu: goto label_48ad3c;
        case 0x48ad40u: goto label_48ad40;
        case 0x48ad44u: goto label_48ad44;
        case 0x48ad48u: goto label_48ad48;
        case 0x48ad4cu: goto label_48ad4c;
        case 0x48ad50u: goto label_48ad50;
        case 0x48ad54u: goto label_48ad54;
        case 0x48ad58u: goto label_48ad58;
        case 0x48ad5cu: goto label_48ad5c;
        default: break;
    }

    ctx->pc = 0x48ab70u;

label_48ab70:
    // 0x48ab70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_48ab74:
    // 0x48ab74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x48ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_48ab78:
    // 0x48ab78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x48ab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_48ab7c:
    // 0x48ab7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_48ab80:
    // 0x48ab80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48ab80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48ab84:
    // 0x48ab84: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_48ab88:
    // 0x48ab88: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x48ab88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_48ab8c:
    // 0x48ab8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48ab8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_48ab90:
    // 0x48ab90: 0xc122900  jal         func_48A400
label_48ab94:
    if (ctx->pc == 0x48AB94u) {
        ctx->pc = 0x48AB94u;
            // 0x48ab94: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x48AB98u;
        goto label_48ab98;
    }
    ctx->pc = 0x48AB90u;
    SET_GPR_U32(ctx, 31, 0x48AB98u);
    ctx->pc = 0x48AB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AB90u;
            // 0x48ab94: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48A400u;
    if (runtime->hasFunction(0x48A400u)) {
        auto targetFn = runtime->lookupFunction(0x48A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AB98u; }
        if (ctx->pc != 0x48AB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048A400_0x48a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AB98u; }
        if (ctx->pc != 0x48AB98u) { return; }
    }
    ctx->pc = 0x48AB98u;
label_48ab98:
    // 0x48ab98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_48ab9c:
    // 0x48ab9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48aba0:
    // 0x48aba0: 0x2463f8f0  addiu       $v1, $v1, -0x710
    ctx->pc = 0x48aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965488));
label_48aba4:
    // 0x48aba4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x48aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_48aba8:
    // 0x48aba8: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x48aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
label_48abac:
    // 0x48abac: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x48abacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_48abb0:
    // 0x48abb0: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x48abb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
label_48abb4:
    // 0x48abb4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_48abb8:
    if (ctx->pc == 0x48ABB8u) {
        ctx->pc = 0x48ABB8u;
            // 0x48abb8: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x48ABBCu;
        goto label_48abbc;
    }
    ctx->pc = 0x48ABB4u;
    {
        const bool branch_taken_0x48abb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48abb4) {
            ctx->pc = 0x48ABB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48ABB4u;
            // 0x48abb8: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48AC18u;
            goto label_48ac18;
        }
    }
    ctx->pc = 0x48ABBCu;
label_48abbc:
    // 0x48abbc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x48abbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48abc0:
    // 0x48abc0: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x48abc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_48abc4:
    // 0x48abc4: 0x320f809  jalr        $t9
label_48abc8:
    if (ctx->pc == 0x48ABC8u) {
        ctx->pc = 0x48ABC8u;
            // 0x48abc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48ABCCu;
        goto label_48abcc;
    }
    ctx->pc = 0x48ABC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48ABCCu);
        ctx->pc = 0x48ABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48ABC4u;
            // 0x48abc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48ABCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48ABCCu; }
            if (ctx->pc != 0x48ABCCu) { return; }
        }
        }
    }
    ctx->pc = 0x48ABCCu;
label_48abcc:
    // 0x48abcc: 0xc64100dc  lwc1        $f1, 0xDC($s2)
    ctx->pc = 0x48abccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48abd0:
    // 0x48abd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48abd4:
    // 0x48abd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48abd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48abd8:
    // 0x48abd8: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
label_48abdc:
    if (ctx->pc == 0x48ABDCu) {
        ctx->pc = 0x48ABDCu;
            // 0x48abdc: 0xe64000dc  swc1        $f0, 0xDC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
        ctx->pc = 0x48ABE0u;
        goto label_48abe0;
    }
    ctx->pc = 0x48ABD8u;
    {
        const bool branch_taken_0x48abd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x48ABDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48ABD8u;
            // 0x48abdc: 0xe64000dc  swc1        $f0, 0xDC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48abd8) {
            ctx->pc = 0x48AC14u;
            goto label_48ac14;
        }
    }
    ctx->pc = 0x48ABE0u;
label_48abe0:
    // 0x48abe0: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x48abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48abe4:
    // 0x48abe4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48abe8:
    // 0x48abe8: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x48abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_48abec:
    // 0x48abec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x48abecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_48abf0:
    // 0x48abf0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x48abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_48abf4:
    // 0x48abf4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x48abf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_48abf8:
    // 0x48abf8: 0x0  nop
    ctx->pc = 0x48abf8u;
    // NOP
label_48abfc:
    // 0x48abfc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x48abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48ac00:
    // 0x48ac00: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x48ac00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_48ac04:
    // 0x48ac04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48ac04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48ac08:
    // 0x48ac08: 0x0  nop
    ctx->pc = 0x48ac08u;
    // NOP
label_48ac0c:
    // 0x48ac0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48ac0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_48ac10:
    // 0x48ac10: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x48ac10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
label_48ac14:
    // 0x48ac14: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x48ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_48ac18:
    // 0x48ac18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x48ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_48ac1c:
    // 0x48ac1c: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x48ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_48ac20:
    // 0x48ac20: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x48ac20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_48ac24:
    // 0x48ac24: 0x93a7005c  lbu         $a3, 0x5C($sp)
    ctx->pc = 0x48ac24u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
label_48ac28:
    // 0x48ac28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x48ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48ac2c:
    // 0x48ac2c: 0x93a6005d  lbu         $a2, 0x5D($sp)
    ctx->pc = 0x48ac2cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 93)));
label_48ac30:
    // 0x48ac30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x48ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48ac34:
    // 0x48ac34: 0x93a5005e  lbu         $a1, 0x5E($sp)
    ctx->pc = 0x48ac34u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 94)));
label_48ac38:
    // 0x48ac38: 0xa207003c  sb          $a3, 0x3C($s0)
    ctx->pc = 0x48ac38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 7));
label_48ac3c:
    // 0x48ac3c: 0xa206003d  sb          $a2, 0x3D($s0)
    ctx->pc = 0x48ac3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 6));
label_48ac40:
    // 0x48ac40: 0xa205003e  sb          $a1, 0x3E($s0)
    ctx->pc = 0x48ac40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 5));
label_48ac44:
    // 0x48ac44: 0x93a5005f  lbu         $a1, 0x5F($sp)
    ctx->pc = 0x48ac44u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 95)));
label_48ac48:
    // 0x48ac48: 0xa205003f  sb          $a1, 0x3F($s0)
    ctx->pc = 0x48ac48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 5));
label_48ac4c:
    // 0x48ac4c: 0x9206003e  lbu         $a2, 0x3E($s0)
    ctx->pc = 0x48ac4cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
label_48ac50:
    // 0x48ac50: 0x9205003d  lbu         $a1, 0x3D($s0)
    ctx->pc = 0x48ac50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_48ac54:
    // 0x48ac54: 0x9207003f  lbu         $a3, 0x3F($s0)
    ctx->pc = 0x48ac54u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 63)));
label_48ac58:
    // 0x48ac58: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x48ac58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
label_48ac5c:
    // 0x48ac5c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x48ac5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_48ac60:
    // 0x48ac60: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x48ac60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_48ac64:
    // 0x48ac64: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x48ac64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_48ac68:
    // 0x48ac68: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x48ac68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_48ac6c:
    // 0x48ac6c: 0xfc64ec90  sd          $a0, -0x1370($v1)
    ctx->pc = 0x48ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294962320), GPR_U64(ctx, 4));
label_48ac70:
    // 0x48ac70: 0xfc44ee00  sd          $a0, -0x1200($v0)
    ctx->pc = 0x48ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294962688), GPR_U64(ctx, 4));
label_48ac74:
    // 0x48ac74: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x48ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_48ac78:
    // 0x48ac78: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48ac7c:
    // 0x48ac7c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x48ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_48ac80:
    // 0x48ac80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_48ac84:
    if (ctx->pc == 0x48AC84u) {
        ctx->pc = 0x48AC84u;
            // 0x48ac84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48AC88u;
        goto label_48ac88;
    }
    ctx->pc = 0x48AC80u;
    {
        const bool branch_taken_0x48ac80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48AC80u;
            // 0x48ac84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ac80) {
            ctx->pc = 0x48ACA8u;
            goto label_48aca8;
        }
    }
    ctx->pc = 0x48AC88u;
label_48ac88:
    // 0x48ac88: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x48ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_48ac8c:
    // 0x48ac8c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x48ac8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_48ac90:
    // 0x48ac90: 0x0  nop
    ctx->pc = 0x48ac90u;
    // NOP
label_48ac94:
    // 0x48ac94: 0x0  nop
    ctx->pc = 0x48ac94u;
    // NOP
label_48ac98:
    // 0x48ac98: 0x0  nop
    ctx->pc = 0x48ac98u;
    // NOP
label_48ac9c:
    // 0x48ac9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_48aca0:
    if (ctx->pc == 0x48ACA0u) {
        ctx->pc = 0x48ACA4u;
        goto label_48aca4;
    }
    ctx->pc = 0x48AC9Cu;
    {
        const bool branch_taken_0x48ac9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ac9c) {
            ctx->pc = 0x48AC88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48ac88;
        }
    }
    ctx->pc = 0x48ACA4u;
label_48aca4:
    // 0x48aca4: 0x0  nop
    ctx->pc = 0x48aca4u;
    // NOP
label_48aca8:
    // 0x48aca8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_48acac:
    // 0x48acac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48acacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48acb0:
    // 0x48acb0: 0x0  nop
    ctx->pc = 0x48acb0u;
    // NOP
label_48acb4:
    // 0x48acb4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x48acb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_48acb8:
    // 0x48acb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48acbc:
    // 0x48acbc: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x48acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_48acc0:
    // 0x48acc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48acc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48acc4:
    // 0x48acc4: 0x0  nop
    ctx->pc = 0x48acc4u;
    // NOP
label_48acc8:
    // 0x48acc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48acc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_48accc:
    // 0x48accc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x48acccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_48acd0:
    // 0x48acd0: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x48acd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
label_48acd4:
    // 0x48acd4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x48acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_48acd8:
    // 0x48acd8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x48acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_48acdc:
    // 0x48acdc: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x48acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_48ace0:
    // 0x48ace0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_48ace4:
    if (ctx->pc == 0x48ACE4u) {
        ctx->pc = 0x48ACE4u;
            // 0x48ace4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48ACE8u;
        goto label_48ace8;
    }
    ctx->pc = 0x48ACE0u;
    {
        const bool branch_taken_0x48ace0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48ACE0u;
            // 0x48ace4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ace0) {
            ctx->pc = 0x48AD08u;
            goto label_48ad08;
        }
    }
    ctx->pc = 0x48ACE8u;
label_48ace8:
    // 0x48ace8: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x48ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_48acec:
    // 0x48acec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48acecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_48acf0:
    // 0x48acf0: 0x0  nop
    ctx->pc = 0x48acf0u;
    // NOP
label_48acf4:
    // 0x48acf4: 0x0  nop
    ctx->pc = 0x48acf4u;
    // NOP
label_48acf8:
    // 0x48acf8: 0x0  nop
    ctx->pc = 0x48acf8u;
    // NOP
label_48acfc:
    // 0x48acfc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_48ad00:
    if (ctx->pc == 0x48AD00u) {
        ctx->pc = 0x48AD04u;
        goto label_48ad04;
    }
    ctx->pc = 0x48ACFCu;
    {
        const bool branch_taken_0x48acfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x48acfc) {
            ctx->pc = 0x48ACE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48ace8;
        }
    }
    ctx->pc = 0x48AD04u;
label_48ad04:
    // 0x48ad04: 0x0  nop
    ctx->pc = 0x48ad04u;
    // NOP
label_48ad08:
    // 0x48ad08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_48ad0c:
    // 0x48ad0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48ad0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48ad10:
    // 0x48ad10: 0x0  nop
    ctx->pc = 0x48ad10u;
    // NOP
label_48ad14:
    // 0x48ad14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x48ad14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_48ad18:
    // 0x48ad18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48ad1c:
    // 0x48ad1c: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x48ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_48ad20:
    // 0x48ad20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x48ad20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_48ad24:
    // 0x48ad24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x48ad24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48ad28:
    // 0x48ad28: 0x0  nop
    ctx->pc = 0x48ad28u;
    // NOP
label_48ad2c:
    // 0x48ad2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48ad2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_48ad30:
    // 0x48ad30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x48ad30u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_48ad34:
    // 0x48ad34: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x48ad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
label_48ad38:
    // 0x48ad38: 0xae4000f4  sw          $zero, 0xF4($s2)
    ctx->pc = 0x48ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
label_48ad3c:
    // 0x48ad3c: 0xae4000f0  sw          $zero, 0xF0($s2)
    ctx->pc = 0x48ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
label_48ad40:
    // 0x48ad40: 0xae4000fc  sw          $zero, 0xFC($s2)
    ctx->pc = 0x48ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
label_48ad44:
    // 0x48ad44: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x48ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
label_48ad48:
    // 0x48ad48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x48ad48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_48ad4c:
    // 0x48ad4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x48ad4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48ad50:
    // 0x48ad50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x48ad50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48ad54:
    // 0x48ad54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48ad54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48ad58:
    // 0x48ad58: 0x3e00008  jr          $ra
label_48ad5c:
    if (ctx->pc == 0x48AD5Cu) {
        ctx->pc = 0x48AD5Cu;
            // 0x48ad5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x48AD60u;
        goto label_fallthrough_0x48ad58;
    }
    ctx->pc = 0x48AD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48AD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48AD58u;
            // 0x48ad5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x48ad58:
    ctx->pc = 0x48AD60u;
}
