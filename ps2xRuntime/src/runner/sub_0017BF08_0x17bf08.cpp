#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017BF08
// Address: 0x17bf08 - 0x17c0e8
void sub_0017BF08_0x17bf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BF08_0x17bf08");
#endif

    switch (ctx->pc) {
        case 0x17bf08u: goto label_17bf08;
        case 0x17bf0cu: goto label_17bf0c;
        case 0x17bf10u: goto label_17bf10;
        case 0x17bf14u: goto label_17bf14;
        case 0x17bf18u: goto label_17bf18;
        case 0x17bf1cu: goto label_17bf1c;
        case 0x17bf20u: goto label_17bf20;
        case 0x17bf24u: goto label_17bf24;
        case 0x17bf28u: goto label_17bf28;
        case 0x17bf2cu: goto label_17bf2c;
        case 0x17bf30u: goto label_17bf30;
        case 0x17bf34u: goto label_17bf34;
        case 0x17bf38u: goto label_17bf38;
        case 0x17bf3cu: goto label_17bf3c;
        case 0x17bf40u: goto label_17bf40;
        case 0x17bf44u: goto label_17bf44;
        case 0x17bf48u: goto label_17bf48;
        case 0x17bf4cu: goto label_17bf4c;
        case 0x17bf50u: goto label_17bf50;
        case 0x17bf54u: goto label_17bf54;
        case 0x17bf58u: goto label_17bf58;
        case 0x17bf5cu: goto label_17bf5c;
        case 0x17bf60u: goto label_17bf60;
        case 0x17bf64u: goto label_17bf64;
        case 0x17bf68u: goto label_17bf68;
        case 0x17bf6cu: goto label_17bf6c;
        case 0x17bf70u: goto label_17bf70;
        case 0x17bf74u: goto label_17bf74;
        case 0x17bf78u: goto label_17bf78;
        case 0x17bf7cu: goto label_17bf7c;
        case 0x17bf80u: goto label_17bf80;
        case 0x17bf84u: goto label_17bf84;
        case 0x17bf88u: goto label_17bf88;
        case 0x17bf8cu: goto label_17bf8c;
        case 0x17bf90u: goto label_17bf90;
        case 0x17bf94u: goto label_17bf94;
        case 0x17bf98u: goto label_17bf98;
        case 0x17bf9cu: goto label_17bf9c;
        case 0x17bfa0u: goto label_17bfa0;
        case 0x17bfa4u: goto label_17bfa4;
        case 0x17bfa8u: goto label_17bfa8;
        case 0x17bfacu: goto label_17bfac;
        case 0x17bfb0u: goto label_17bfb0;
        case 0x17bfb4u: goto label_17bfb4;
        case 0x17bfb8u: goto label_17bfb8;
        case 0x17bfbcu: goto label_17bfbc;
        case 0x17bfc0u: goto label_17bfc0;
        case 0x17bfc4u: goto label_17bfc4;
        case 0x17bfc8u: goto label_17bfc8;
        case 0x17bfccu: goto label_17bfcc;
        case 0x17bfd0u: goto label_17bfd0;
        case 0x17bfd4u: goto label_17bfd4;
        case 0x17bfd8u: goto label_17bfd8;
        case 0x17bfdcu: goto label_17bfdc;
        case 0x17bfe0u: goto label_17bfe0;
        case 0x17bfe4u: goto label_17bfe4;
        case 0x17bfe8u: goto label_17bfe8;
        case 0x17bfecu: goto label_17bfec;
        case 0x17bff0u: goto label_17bff0;
        case 0x17bff4u: goto label_17bff4;
        case 0x17bff8u: goto label_17bff8;
        case 0x17bffcu: goto label_17bffc;
        case 0x17c000u: goto label_17c000;
        case 0x17c004u: goto label_17c004;
        case 0x17c008u: goto label_17c008;
        case 0x17c00cu: goto label_17c00c;
        case 0x17c010u: goto label_17c010;
        case 0x17c014u: goto label_17c014;
        case 0x17c018u: goto label_17c018;
        case 0x17c01cu: goto label_17c01c;
        case 0x17c020u: goto label_17c020;
        case 0x17c024u: goto label_17c024;
        case 0x17c028u: goto label_17c028;
        case 0x17c02cu: goto label_17c02c;
        case 0x17c030u: goto label_17c030;
        case 0x17c034u: goto label_17c034;
        case 0x17c038u: goto label_17c038;
        case 0x17c03cu: goto label_17c03c;
        case 0x17c040u: goto label_17c040;
        case 0x17c044u: goto label_17c044;
        case 0x17c048u: goto label_17c048;
        case 0x17c04cu: goto label_17c04c;
        case 0x17c050u: goto label_17c050;
        case 0x17c054u: goto label_17c054;
        case 0x17c058u: goto label_17c058;
        case 0x17c05cu: goto label_17c05c;
        case 0x17c060u: goto label_17c060;
        case 0x17c064u: goto label_17c064;
        case 0x17c068u: goto label_17c068;
        case 0x17c06cu: goto label_17c06c;
        case 0x17c070u: goto label_17c070;
        case 0x17c074u: goto label_17c074;
        case 0x17c078u: goto label_17c078;
        case 0x17c07cu: goto label_17c07c;
        case 0x17c080u: goto label_17c080;
        case 0x17c084u: goto label_17c084;
        case 0x17c088u: goto label_17c088;
        case 0x17c08cu: goto label_17c08c;
        case 0x17c090u: goto label_17c090;
        case 0x17c094u: goto label_17c094;
        case 0x17c098u: goto label_17c098;
        case 0x17c09cu: goto label_17c09c;
        case 0x17c0a0u: goto label_17c0a0;
        case 0x17c0a4u: goto label_17c0a4;
        case 0x17c0a8u: goto label_17c0a8;
        case 0x17c0acu: goto label_17c0ac;
        case 0x17c0b0u: goto label_17c0b0;
        case 0x17c0b4u: goto label_17c0b4;
        case 0x17c0b8u: goto label_17c0b8;
        case 0x17c0bcu: goto label_17c0bc;
        case 0x17c0c0u: goto label_17c0c0;
        case 0x17c0c4u: goto label_17c0c4;
        case 0x17c0c8u: goto label_17c0c8;
        case 0x17c0ccu: goto label_17c0cc;
        case 0x17c0d0u: goto label_17c0d0;
        case 0x17c0d4u: goto label_17c0d4;
        case 0x17c0d8u: goto label_17c0d8;
        case 0x17c0dcu: goto label_17c0dc;
        case 0x17c0e0u: goto label_17c0e0;
        case 0x17c0e4u: goto label_17c0e4;
        default: break;
    }

    ctx->pc = 0x17bf08u;

label_17bf08:
    // 0x17bf08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17bf0c:
    // 0x17bf0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17bf10:
    // 0x17bf10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17bf14:
    // 0x17bf14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17bf14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17bf18:
    // 0x17bf18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17bf1c:
    // 0x17bf1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17bf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17bf20:
    // 0x17bf20: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17bf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_17bf24:
    // 0x17bf24: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x17bf24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_17bf28:
    // 0x17bf28: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x17bf28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_17bf2c:
    // 0x17bf2c: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_17bf30:
    if (ctx->pc == 0x17BF30u) {
        ctx->pc = 0x17BF30u;
            // 0x17bf30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x17BF34u;
        goto label_17bf34;
    }
    ctx->pc = 0x17BF2Cu;
    {
        const bool branch_taken_0x17bf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17BF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF2Cu;
            // 0x17bf30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf2c) {
            ctx->pc = 0x17BFA4u;
            goto label_17bfa4;
        }
    }
    ctx->pc = 0x17BF34u;
label_17bf34:
    // 0x17bf34: 0x0  nop
    ctx->pc = 0x17bf34u;
    // NOP
label_17bf38:
    // 0x17bf38: 0xc0431c0  jal         func_10C700
label_17bf3c:
    if (ctx->pc == 0x17BF3Cu) {
        ctx->pc = 0x17BF3Cu;
            // 0x17bf3c: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->pc = 0x17BF40u;
        goto label_17bf40;
    }
    ctx->pc = 0x17BF38u;
    SET_GPR_U32(ctx, 31, 0x17BF40u);
    ctx->pc = 0x17BF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF38u;
            // 0x17bf3c: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C700u;
    if (runtime->hasFunction(0x10C700u)) {
        auto targetFn = runtime->lookupFunction(0x10C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BF40u; }
        if (ctx->pc != 0x17BF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C700_0x10c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BF40u; }
        if (ctx->pc != 0x17BF40u) { return; }
    }
    ctx->pc = 0x17BF40u;
label_17bf40:
    // 0x17bf40: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
label_17bf44:
    if (ctx->pc == 0x17BF44u) {
        ctx->pc = 0x17BF44u;
            // 0x17bf44: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x17BF48u;
        goto label_17bf48;
    }
    ctx->pc = 0x17BF40u;
    {
        const bool branch_taken_0x17bf40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17BF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF40u;
            // 0x17bf44: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf40) {
            ctx->pc = 0x17BF38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17bf38;
        }
    }
    ctx->pc = 0x17BF48u;
label_17bf48:
    // 0x17bf48: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17bf4c:
    // 0x17bf4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bf50:
    // 0x17bf50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17bf50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17bf54:
    // 0x17bf54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bf58:
    // 0x17bf58: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_17bf5c:
    // 0x17bf5c: 0x40f809  jalr        $v0
label_17bf60:
    if (ctx->pc == 0x17BF60u) {
        ctx->pc = 0x17BF60u;
            // 0x17bf60: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x17BF64u;
        goto label_17bf64;
    }
    ctx->pc = 0x17BF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BF64u);
        ctx->pc = 0x17BF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF5Cu;
            // 0x17bf60: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BF64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BF64u; }
            if (ctx->pc != 0x17BF64u) { return; }
        }
        }
    }
    ctx->pc = 0x17BF64u;
label_17bf64:
    // 0x17bf64: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_17bf68:
    // 0x17bf68: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x17bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_17bf6c:
    // 0x17bf6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17bf70:
    // 0x17bf70: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x17bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_17bf74:
    // 0x17bf74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bf78:
    // 0x17bf78: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_17bf7c:
    // 0x17bf7c: 0x40f809  jalr        $v0
label_17bf80:
    if (ctx->pc == 0x17BF80u) {
        ctx->pc = 0x17BF80u;
            // 0x17bf80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BF84u;
        goto label_17bf84;
    }
    ctx->pc = 0x17BF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BF84u);
        ctx->pc = 0x17BF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF7Cu;
            // 0x17bf80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BF84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BF84u; }
            if (ctx->pc != 0x17BF84u) { return; }
        }
        }
    }
    ctx->pc = 0x17BF84u;
label_17bf84:
    // 0x17bf84: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x17bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_17bf88:
    // 0x17bf88: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x17bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_17bf8c:
    // 0x17bf8c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x17bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_17bf90:
    // 0x17bf90: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x17bf90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_17bf94:
    // 0x17bf94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17bf98:
    // 0x17bf98: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x17bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_17bf9c:
    // 0x17bf9c: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x17bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_17bfa0:
    // 0x17bfa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17bfa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17bfa4:
    // 0x17bfa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17bfa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17bfa8:
    // 0x17bfa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17bfa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17bfac:
    // 0x17bfac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17bfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17bfb0:
    // 0x17bfb0: 0x3e00008  jr          $ra
label_17bfb4:
    if (ctx->pc == 0x17BFB4u) {
        ctx->pc = 0x17BFB4u;
            // 0x17bfb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17BFB8u;
        goto label_17bfb8;
    }
    ctx->pc = 0x17BFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFB0u;
            // 0x17bfb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BFB8u;
label_17bfb8:
    // 0x17bfb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17bfbc:
    // 0x17bfbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17bfc0:
    // 0x17bfc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17bfc4:
    // 0x17bfc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17bfc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17bfc8:
    // 0x17bfc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17bfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_17bfcc:
    // 0x17bfcc: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_17bfd0:
    if (ctx->pc == 0x17BFD0u) {
        ctx->pc = 0x17BFD0u;
            // 0x17bfd0: 0x2c830002  sltiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x17BFD4u;
        goto label_17bfd4;
    }
    ctx->pc = 0x17BFCCu;
    {
        const bool branch_taken_0x17bfcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17BFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFCCu;
            // 0x17bfd0: 0x2c830002  sltiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfcc) {
            ctx->pc = 0x17BFF0u;
            goto label_17bff0;
        }
    }
    ctx->pc = 0x17BFD4u;
label_17bfd4:
    // 0x17bfd4: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_17bfd8:
    if (ctx->pc == 0x17BFD8u) {
        ctx->pc = 0x17BFD8u;
            // 0x17bfd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BFDCu;
        goto label_17bfdc;
    }
    ctx->pc = 0x17BFD4u;
    {
        const bool branch_taken_0x17bfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFD4u;
            // 0x17bfd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfd4) {
            ctx->pc = 0x17C058u;
            goto label_17c058;
        }
    }
    ctx->pc = 0x17BFDCu;
label_17bfdc:
    // 0x17bfdc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17bfe0:
    // 0x17bfe0: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_17bfe4:
    if (ctx->pc == 0x17BFE4u) {
        ctx->pc = 0x17BFE4u;
            // 0x17bfe4: 0x2482fc00  addiu       $v0, $a0, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966272));
        ctx->pc = 0x17BFE8u;
        goto label_17bfe8;
    }
    ctx->pc = 0x17BFE0u;
    {
        const bool branch_taken_0x17bfe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17BFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFE0u;
            // 0x17bfe4: 0x2482fc00  addiu       $v0, $a0, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfe0) {
            ctx->pc = 0x17C010u;
            goto label_17c010;
        }
    }
    ctx->pc = 0x17BFE8u;
label_17bfe8:
    // 0x17bfe8: 0x1000000d  b           . + 4 + (0xD << 2)
label_17bfec:
    if (ctx->pc == 0x17BFECu) {
        ctx->pc = 0x17BFECu;
            // 0x17bfec: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x17BFF0u;
        goto label_17bff0;
    }
    ctx->pc = 0x17BFE8u;
    {
        const bool branch_taken_0x17bfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFE8u;
            // 0x17bfec: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfe8) {
            ctx->pc = 0x17C020u;
            goto label_17c020;
        }
    }
    ctx->pc = 0x17BFF0u;
label_17bff0:
    // 0x17bff0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17bff4:
    // 0x17bff4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x17bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17bff8:
    // 0x17bff8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x17bff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17bffc:
    // 0x17bffc: 0xc05f09e  jal         func_17C278
label_17c000:
    if (ctx->pc == 0x17C000u) {
        ctx->pc = 0x17C000u;
            // 0x17c000: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x17C004u;
        goto label_17c004;
    }
    ctx->pc = 0x17BFFCu;
    SET_GPR_U32(ctx, 31, 0x17C004u);
    ctx->pc = 0x17C000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFFCu;
            // 0x17c000: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C278u;
    if (runtime->hasFunction(0x17C278u)) {
        auto targetFn = runtime->lookupFunction(0x17C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C004u; }
        if (ctx->pc != 0x17C004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C278_0x17c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C004u; }
        if (ctx->pc != 0x17C004u) { return; }
    }
    ctx->pc = 0x17C004u;
label_17c004:
    // 0x17c004: 0x10000013  b           . + 4 + (0x13 << 2)
label_17c008:
    if (ctx->pc == 0x17C008u) {
        ctx->pc = 0x17C008u;
            // 0x17c008: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x17C00Cu;
        goto label_17c00c;
    }
    ctx->pc = 0x17C004u;
    {
        const bool branch_taken_0x17c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C004u;
            // 0x17c008: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c004) {
            ctx->pc = 0x17C054u;
            goto label_17c054;
        }
    }
    ctx->pc = 0x17C00Cu;
label_17c00c:
    // 0x17c00c: 0x0  nop
    ctx->pc = 0x17c00cu;
    // NOP
label_17c010:
    // 0x17c010: 0xc05f104  jal         func_17C410
label_17c014:
    if (ctx->pc == 0x17C014u) {
        ctx->pc = 0x17C014u;
            // 0x17c014: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x17C018u;
        goto label_17c018;
    }
    ctx->pc = 0x17C010u;
    SET_GPR_U32(ctx, 31, 0x17C018u);
    ctx->pc = 0x17C014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C010u;
            // 0x17c014: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C410u;
    if (runtime->hasFunction(0x17C410u)) {
        auto targetFn = runtime->lookupFunction(0x17C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C018u; }
        if (ctx->pc != 0x17C018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C410_0x17c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C018u; }
        if (ctx->pc != 0x17C018u) { return; }
    }
    ctx->pc = 0x17C018u;
label_17c018:
    // 0x17c018: 0x1000000f  b           . + 4 + (0xF << 2)
label_17c01c:
    if (ctx->pc == 0x17C01Cu) {
        ctx->pc = 0x17C01Cu;
            // 0x17c01c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C020u;
        goto label_17c020;
    }
    ctx->pc = 0x17C018u;
    {
        const bool branch_taken_0x17c018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C018u;
            // 0x17c01c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c018) {
            ctx->pc = 0x17C058u;
            goto label_17c058;
        }
    }
    ctx->pc = 0x17C020u;
label_17c020:
    // 0x17c020: 0x2c420040  sltiu       $v0, $v0, 0x40
    ctx->pc = 0x17c020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_17c024:
    // 0x17c024: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_17c028:
    if (ctx->pc == 0x17C028u) {
        ctx->pc = 0x17C028u;
            // 0x17c028: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C02Cu;
        goto label_17c02c;
    }
    ctx->pc = 0x17C024u;
    {
        const bool branch_taken_0x17c024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C024u;
            // 0x17c028: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c024) {
            ctx->pc = 0x17C058u;
            goto label_17c058;
        }
    }
    ctx->pc = 0x17C02Cu;
label_17c02c:
    // 0x17c02c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17c030:
    // 0x17c030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c034:
    // 0x17c034: 0x8c425650  lw          $v0, 0x5650($v0)
    ctx->pc = 0x17c034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22096)));
label_17c038:
    // 0x17c038: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_17c03c:
    if (ctx->pc == 0x17C03Cu) {
        ctx->pc = 0x17C03Cu;
            // 0x17c03c: 0x63082  srl         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x17C040u;
        goto label_17c040;
    }
    ctx->pc = 0x17C038u;
    {
        const bool branch_taken_0x17c038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C038u;
            // 0x17c03c: 0x63082  srl         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c038) {
            ctx->pc = 0x17C054u;
            goto label_17c054;
        }
    }
    ctx->pc = 0x17C040u;
label_17c040:
    // 0x17c040: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x17c040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_17c044:
    // 0x17c044: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x17c044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17c048:
    // 0x17c048: 0x8c845750  lw          $a0, 0x5750($a0)
    ctx->pc = 0x17c048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22352)));
label_17c04c:
    // 0x17c04c: 0x40f809  jalr        $v0
label_17c050:
    if (ctx->pc == 0x17C050u) {
        ctx->pc = 0x17C050u;
            // 0x17c050: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C054u;
        goto label_17c054;
    }
    ctx->pc = 0x17C04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C054u);
        ctx->pc = 0x17C050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C04Cu;
            // 0x17c050: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17C054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C054u; }
            if (ctx->pc != 0x17C054u) { return; }
        }
        }
    }
    ctx->pc = 0x17C054u;
label_17c054:
    // 0x17c054: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17c054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c058:
    // 0x17c058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c05c:
    // 0x17c05c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17c05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c060:
    // 0x17c060: 0x3e00008  jr          $ra
label_17c064:
    if (ctx->pc == 0x17C064u) {
        ctx->pc = 0x17C064u;
            // 0x17c064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17C068u;
        goto label_17c068;
    }
    ctx->pc = 0x17C060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C060u;
            // 0x17c064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C068u;
label_17c068:
    // 0x17c068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17c06c:
    // 0x17c06c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c070:
    // 0x17c070: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17c070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_17c074:
    // 0x17c074: 0xc043094  jal         func_10C250
label_17c078:
    if (ctx->pc == 0x17C078u) {
        ctx->pc = 0x17C078u;
            // 0x17c078: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x17C07Cu;
        goto label_17c07c;
    }
    ctx->pc = 0x17C074u;
    SET_GPR_U32(ctx, 31, 0x17C07Cu);
    ctx->pc = 0x17C078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C074u;
            // 0x17c078: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C250u;
    if (runtime->hasFunction(0x10C250u)) {
        auto targetFn = runtime->lookupFunction(0x10C250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C07Cu; }
        if (ctx->pc != 0x17C07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C250_0x10c250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C07Cu; }
        if (ctx->pc != 0x17C07Cu) { return; }
    }
    ctx->pc = 0x17C07Cu;
label_17c07c:
    // 0x17c07c: 0x26105530  addiu       $s0, $s0, 0x5530
    ctx->pc = 0x17c07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21808));
label_17c080:
    // 0x17c080: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17c080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c084:
    // 0x17c084: 0xc04419c  jal         func_110670
label_17c088:
    if (ctx->pc == 0x17C088u) {
        ctx->pc = 0x17C088u;
            // 0x17c088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C08Cu;
        goto label_17c08c;
    }
    ctx->pc = 0x17C084u;
    SET_GPR_U32(ctx, 31, 0x17C08Cu);
    ctx->pc = 0x17C088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C084u;
            // 0x17c088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110670u;
    if (runtime->hasFunction(0x110670u)) {
        auto targetFn = runtime->lookupFunction(0x110670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C08Cu; }
        if (ctx->pc != 0x17C08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110670_0x110670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C08Cu; }
        if (ctx->pc != 0x17C08Cu) { return; }
    }
    ctx->pc = 0x17C08Cu;
label_17c08c:
    // 0x17c08c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x17c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_17c090:
    // 0x17c090: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17c094:
    // 0x17c094: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17c094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
label_17c098:
    // 0x17c098: 0x8c454c24  lw          $a1, 0x4C24($v0)
    ctx->pc = 0x17c098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19492)));
label_17c09c:
    // 0x17c09c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x17c09cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_17c0a0:
    // 0x17c0a0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x17c0a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c0a4:
    // 0x17c0a4: 0x24c6bfb8  addiu       $a2, $a2, -0x4048
    ctx->pc = 0x17c0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950840));
label_17c0a8:
    // 0x17c0a8: 0x24e75550  addiu       $a3, $a3, 0x5550
    ctx->pc = 0x17c0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21840));
label_17c0ac:
    // 0x17c0ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17c0acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c0b0:
    // 0x17c0b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17c0b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c0b4:
    // 0x17c0b4: 0xc0441c2  jal         func_110708
label_17c0b8:
    if (ctx->pc == 0x17C0B8u) {
        ctx->pc = 0x17C0B8u;
            // 0x17c0b8: 0x248454e8  addiu       $a0, $a0, 0x54E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21736));
        ctx->pc = 0x17C0BCu;
        goto label_17c0bc;
    }
    ctx->pc = 0x17C0B4u;
    SET_GPR_U32(ctx, 31, 0x17C0BCu);
    ctx->pc = 0x17C0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C0B4u;
            // 0x17c0b8: 0x248454e8  addiu       $a0, $a0, 0x54E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110708u;
    if (runtime->hasFunction(0x110708u)) {
        auto targetFn = runtime->lookupFunction(0x110708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0BCu; }
        if (ctx->pc != 0x17C0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110708_0x110708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0BCu; }
        if (ctx->pc != 0x17C0BCu) { return; }
    }
    ctx->pc = 0x17C0BCu;
label_17c0bc:
    // 0x17c0bc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17c0c0:
    // 0x17c0c0: 0x24424c28  addiu       $v0, $v0, 0x4C28
    ctx->pc = 0x17c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19496));
label_17c0c4:
    // 0x17c0c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c0c8:
    // 0x17c0c8: 0x0  nop
    ctx->pc = 0x17c0c8u;
    // NOP
label_17c0cc:
    // 0x17c0cc: 0xc0442c8  jal         func_110B20
label_17c0d0:
    if (ctx->pc == 0x17C0D0u) {
        ctx->pc = 0x17C0D0u;
            // 0x17c0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C0D4u;
        goto label_17c0d4;
    }
    ctx->pc = 0x17C0CCu;
    SET_GPR_U32(ctx, 31, 0x17C0D4u);
    ctx->pc = 0x17C0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C0CCu;
            // 0x17c0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110B20u;
    if (runtime->hasFunction(0x110B20u)) {
        auto targetFn = runtime->lookupFunction(0x110B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0D4u; }
        if (ctx->pc != 0x17C0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110B20_0x110b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0D4u; }
        if (ctx->pc != 0x17C0D4u) { return; }
    }
    ctx->pc = 0x17C0D4u;
label_17c0d4:
    // 0x17c0d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17c0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c0d8:
    // 0x17c0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c0dc:
    // 0x17c0dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17c0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c0e0:
    // 0x17c0e0: 0x3e00008  jr          $ra
label_17c0e4:
    if (ctx->pc == 0x17C0E4u) {
        ctx->pc = 0x17C0E4u;
            // 0x17c0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17C0E8u;
        goto label_fallthrough_0x17c0e0;
    }
    ctx->pc = 0x17C0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C0E0u;
            // 0x17c0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17c0e0:
    ctx->pc = 0x17C0E8u;
}
