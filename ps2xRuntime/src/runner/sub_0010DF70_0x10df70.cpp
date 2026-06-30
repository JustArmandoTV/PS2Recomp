#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010DF70
// Address: 0x10df70 - 0x10e148
void sub_0010DF70_0x10df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DF70_0x10df70");
#endif

    switch (ctx->pc) {
        case 0x10df70u: goto label_10df70;
        case 0x10df74u: goto label_10df74;
        case 0x10df78u: goto label_10df78;
        case 0x10df7cu: goto label_10df7c;
        case 0x10df80u: goto label_10df80;
        case 0x10df84u: goto label_10df84;
        case 0x10df88u: goto label_10df88;
        case 0x10df8cu: goto label_10df8c;
        case 0x10df90u: goto label_10df90;
        case 0x10df94u: goto label_10df94;
        case 0x10df98u: goto label_10df98;
        case 0x10df9cu: goto label_10df9c;
        case 0x10dfa0u: goto label_10dfa0;
        case 0x10dfa4u: goto label_10dfa4;
        case 0x10dfa8u: goto label_10dfa8;
        case 0x10dfacu: goto label_10dfac;
        case 0x10dfb0u: goto label_10dfb0;
        case 0x10dfb4u: goto label_10dfb4;
        case 0x10dfb8u: goto label_10dfb8;
        case 0x10dfbcu: goto label_10dfbc;
        case 0x10dfc0u: goto label_10dfc0;
        case 0x10dfc4u: goto label_10dfc4;
        case 0x10dfc8u: goto label_10dfc8;
        case 0x10dfccu: goto label_10dfcc;
        case 0x10dfd0u: goto label_10dfd0;
        case 0x10dfd4u: goto label_10dfd4;
        case 0x10dfd8u: goto label_10dfd8;
        case 0x10dfdcu: goto label_10dfdc;
        case 0x10dfe0u: goto label_10dfe0;
        case 0x10dfe4u: goto label_10dfe4;
        case 0x10dfe8u: goto label_10dfe8;
        case 0x10dfecu: goto label_10dfec;
        case 0x10dff0u: goto label_10dff0;
        case 0x10dff4u: goto label_10dff4;
        case 0x10dff8u: goto label_10dff8;
        case 0x10dffcu: goto label_10dffc;
        case 0x10e000u: goto label_10e000;
        case 0x10e004u: goto label_10e004;
        case 0x10e008u: goto label_10e008;
        case 0x10e00cu: goto label_10e00c;
        case 0x10e010u: goto label_10e010;
        case 0x10e014u: goto label_10e014;
        case 0x10e018u: goto label_10e018;
        case 0x10e01cu: goto label_10e01c;
        case 0x10e020u: goto label_10e020;
        case 0x10e024u: goto label_10e024;
        case 0x10e028u: goto label_10e028;
        case 0x10e02cu: goto label_10e02c;
        case 0x10e030u: goto label_10e030;
        case 0x10e034u: goto label_10e034;
        case 0x10e038u: goto label_10e038;
        case 0x10e03cu: goto label_10e03c;
        case 0x10e040u: goto label_10e040;
        case 0x10e044u: goto label_10e044;
        case 0x10e048u: goto label_10e048;
        case 0x10e04cu: goto label_10e04c;
        case 0x10e050u: goto label_10e050;
        case 0x10e054u: goto label_10e054;
        case 0x10e058u: goto label_10e058;
        case 0x10e05cu: goto label_10e05c;
        case 0x10e060u: goto label_10e060;
        case 0x10e064u: goto label_10e064;
        case 0x10e068u: goto label_10e068;
        case 0x10e06cu: goto label_10e06c;
        case 0x10e070u: goto label_10e070;
        case 0x10e074u: goto label_10e074;
        case 0x10e078u: goto label_10e078;
        case 0x10e07cu: goto label_10e07c;
        case 0x10e080u: goto label_10e080;
        case 0x10e084u: goto label_10e084;
        case 0x10e088u: goto label_10e088;
        case 0x10e08cu: goto label_10e08c;
        case 0x10e090u: goto label_10e090;
        case 0x10e094u: goto label_10e094;
        case 0x10e098u: goto label_10e098;
        case 0x10e09cu: goto label_10e09c;
        case 0x10e0a0u: goto label_10e0a0;
        case 0x10e0a4u: goto label_10e0a4;
        case 0x10e0a8u: goto label_10e0a8;
        case 0x10e0acu: goto label_10e0ac;
        case 0x10e0b0u: goto label_10e0b0;
        case 0x10e0b4u: goto label_10e0b4;
        case 0x10e0b8u: goto label_10e0b8;
        case 0x10e0bcu: goto label_10e0bc;
        case 0x10e0c0u: goto label_10e0c0;
        case 0x10e0c4u: goto label_10e0c4;
        case 0x10e0c8u: goto label_10e0c8;
        case 0x10e0ccu: goto label_10e0cc;
        case 0x10e0d0u: goto label_10e0d0;
        case 0x10e0d4u: goto label_10e0d4;
        case 0x10e0d8u: goto label_10e0d8;
        case 0x10e0dcu: goto label_10e0dc;
        case 0x10e0e0u: goto label_10e0e0;
        case 0x10e0e4u: goto label_10e0e4;
        case 0x10e0e8u: goto label_10e0e8;
        case 0x10e0ecu: goto label_10e0ec;
        case 0x10e0f0u: goto label_10e0f0;
        case 0x10e0f4u: goto label_10e0f4;
        case 0x10e0f8u: goto label_10e0f8;
        case 0x10e0fcu: goto label_10e0fc;
        case 0x10e100u: goto label_10e100;
        case 0x10e104u: goto label_10e104;
        case 0x10e108u: goto label_10e108;
        case 0x10e10cu: goto label_10e10c;
        case 0x10e110u: goto label_10e110;
        case 0x10e114u: goto label_10e114;
        case 0x10e118u: goto label_10e118;
        case 0x10e11cu: goto label_10e11c;
        case 0x10e120u: goto label_10e120;
        case 0x10e124u: goto label_10e124;
        case 0x10e128u: goto label_10e128;
        case 0x10e12cu: goto label_10e12c;
        case 0x10e130u: goto label_10e130;
        case 0x10e134u: goto label_10e134;
        case 0x10e138u: goto label_10e138;
        case 0x10e13cu: goto label_10e13c;
        case 0x10e140u: goto label_10e140;
        case 0x10e144u: goto label_10e144;
        default: break;
    }

    ctx->pc = 0x10df70u;

label_10df70:
    // 0x10df70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10df74:
    // 0x10df74: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_10df78:
    // 0x10df78: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_10df7c:
    // 0x10df7c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x10df7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10df80:
    // 0x10df80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10df80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_10df84:
    // 0x10df84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x10df84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10df88:
    // 0x10df88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_10df8c:
    // 0x10df8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10df8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10df90:
    // 0x10df90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10df90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_10df94:
    // 0x10df94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10df94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10df98:
    // 0x10df98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10df98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10df9c:
    // 0x10df9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10df9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10dfa0:
    // 0x10dfa0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10dfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_10dfa4:
    // 0x10dfa4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10dfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_10dfa8:
    // 0x10dfa8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10dfac:
    // 0x10dfac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10dfb0:
    if (ctx->pc == 0x10DFB0u) {
        ctx->pc = 0x10DFB0u;
            // 0x10dfb0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10DFB4u;
        goto label_10dfb4;
    }
    ctx->pc = 0x10DFACu;
    {
        const bool branch_taken_0x10dfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFACu;
            // 0x10dfb0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfac) {
            ctx->pc = 0x10DFBCu;
            goto label_10dfbc;
        }
    }
    ctx->pc = 0x10DFB4u;
label_10dfb4:
    // 0x10dfb4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_10dfb8:
    if (ctx->pc == 0x10DFB8u) {
        ctx->pc = 0x10DFB8u;
            // 0x10dfb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10DFBCu;
        goto label_10dfbc;
    }
    ctx->pc = 0x10DFB4u;
    {
        const bool branch_taken_0x10dfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFB4u;
            // 0x10dfb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfb4) {
            ctx->pc = 0x10E120u;
            goto label_10e120;
        }
    }
    ctx->pc = 0x10DFBCu;
label_10dfbc:
    // 0x10dfbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10dfbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dfc0:
    // 0x10dfc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10dfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10dfc4:
    // 0x10dfc4: 0xc049760  jal         func_125D80
label_10dfc8:
    if (ctx->pc == 0x10DFC8u) {
        ctx->pc = 0x10DFC8u;
            // 0x10dfc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10DFCCu;
        goto label_10dfcc;
    }
    ctx->pc = 0x10DFC4u;
    SET_GPR_U32(ctx, 31, 0x10DFCCu);
    ctx->pc = 0x10DFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFC4u;
            // 0x10dfc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFCCu; }
        if (ctx->pc != 0x10DFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFCCu; }
        if (ctx->pc != 0x10DFCCu) { return; }
    }
    ctx->pc = 0x10DFCCu;
label_10dfcc:
    // 0x10dfcc: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_10dfd0:
    if (ctx->pc == 0x10DFD0u) {
        ctx->pc = 0x10DFD0u;
            // 0x10dfd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10DFD4u;
        goto label_10dfd4;
    }
    ctx->pc = 0x10DFCCu;
    {
        const bool branch_taken_0x10dfcc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10DFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFCCu;
            // 0x10dfd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfcc) {
            ctx->pc = 0x10E000u;
            goto label_10e000;
        }
    }
    ctx->pc = 0x10DFD4u;
label_10dfd4:
    // 0x10dfd4: 0xc049622  jal         func_125888
label_10dfd8:
    if (ctx->pc == 0x10DFD8u) {
        ctx->pc = 0x10DFD8u;
            // 0x10dfd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10DFDCu;
        goto label_10dfdc;
    }
    ctx->pc = 0x10DFD4u;
    SET_GPR_U32(ctx, 31, 0x10DFDCu);
    ctx->pc = 0x10DFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFD4u;
            // 0x10dfd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFDCu; }
        if (ctx->pc != 0x10DFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFDCu; }
        if (ctx->pc != 0x10DFDCu) { return; }
    }
    ctx->pc = 0x10DFDCu;
label_10dfdc:
    // 0x10dfdc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x10dfdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10dfe0:
    // 0x10dfe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dfe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10dfe4:
    // 0x10dfe4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x10dfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10dfe8:
    // 0x10dfe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10dfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dfec:
    // 0x10dfec: 0x2a0f809  jalr        $s5
label_10dff0:
    if (ctx->pc == 0x10DFF0u) {
        ctx->pc = 0x10DFF0u;
            // 0x10dff0: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x10DFF4u;
        goto label_10dff4;
    }
    ctx->pc = 0x10DFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x10DFF4u);
        ctx->pc = 0x10DFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFECu;
            // 0x10dff0: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10DFF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10DFF4u; }
            if (ctx->pc != 0x10DFF4u) { return; }
        }
        }
    }
    ctx->pc = 0x10DFF4u;
label_10dff4:
    // 0x10dff4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10dff8:
    // 0x10dff8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10dffc:
    // 0x10dffc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x10dffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_10e000:
    // 0x10e000: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x10e000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
label_10e004:
    // 0x10e004: 0xdc25ecb8  ld          $a1, -0x1348($at)
    ctx->pc = 0x10e004u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294962360)));
label_10e008:
    // 0x10e008: 0xc049760  jal         func_125D80
label_10e00c:
    if (ctx->pc == 0x10E00Cu) {
        ctx->pc = 0x10E00Cu;
            // 0x10e00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E010u;
        goto label_10e010;
    }
    ctx->pc = 0x10E008u;
    SET_GPR_U32(ctx, 31, 0x10E010u);
    ctx->pc = 0x10E00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E008u;
            // 0x10e00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E010u; }
        if (ctx->pc != 0x10E010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E010u; }
        if (ctx->pc != 0x10E010u) { return; }
    }
    ctx->pc = 0x10E010u;
label_10e010:
    // 0x10e010: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_10e014:
    if (ctx->pc == 0x10E014u) {
        ctx->pc = 0x10E014u;
            // 0x10e014: 0x3c130063  lui         $s3, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x10E018u;
        goto label_10e018;
    }
    ctx->pc = 0x10E010u;
    {
        const bool branch_taken_0x10e010 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10E014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E010u;
            // 0x10e014: 0x3c130063  lui         $s3, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e010) {
            ctx->pc = 0x10E054u;
            goto label_10e054;
        }
    }
    ctx->pc = 0x10E018u;
label_10e018:
    // 0x10e018: 0x10000006  b           . + 4 + (0x6 << 2)
label_10e01c:
    if (ctx->pc == 0x10E01Cu) {
        ctx->pc = 0x10E020u;
        goto label_10e020;
    }
    ctx->pc = 0x10E018u;
    {
        const bool branch_taken_0x10e018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e018) {
            ctx->pc = 0x10E034u;
            goto label_10e034;
        }
    }
    ctx->pc = 0x10E020u;
label_10e020:
    // 0x10e020: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x10e020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_10e024:
    // 0x10e024: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x10e024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_10e028:
    // 0x10e028: 0xc04963e  jal         func_1258F8
label_10e02c:
    if (ctx->pc == 0x10E02Cu) {
        ctx->pc = 0x10E02Cu;
            // 0x10e02c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x10E030u;
        goto label_10e030;
    }
    ctx->pc = 0x10E028u;
    SET_GPR_U32(ctx, 31, 0x10E030u);
    ctx->pc = 0x10E02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E028u;
            // 0x10e02c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E030u; }
        if (ctx->pc != 0x10E030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E030u; }
        if (ctx->pc != 0x10E030u) { return; }
    }
    ctx->pc = 0x10E030u;
label_10e030:
    // 0x10e030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e034:
    // 0x10e034: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x10e034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
label_10e038:
    // 0x10e038: 0xdc25ecc0  ld          $a1, -0x1340($at)
    ctx->pc = 0x10e038u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294962368)));
label_10e03c:
    // 0x10e03c: 0xc049760  jal         func_125D80
label_10e040:
    if (ctx->pc == 0x10E040u) {
        ctx->pc = 0x10E040u;
            // 0x10e040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E044u;
        goto label_10e044;
    }
    ctx->pc = 0x10E03Cu;
    SET_GPR_U32(ctx, 31, 0x10E044u);
    ctx->pc = 0x10E040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E03Cu;
            // 0x10e040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E044u; }
        if (ctx->pc != 0x10E044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E044u; }
        if (ctx->pc != 0x10E044u) { return; }
    }
    ctx->pc = 0x10E044u;
label_10e044:
    // 0x10e044: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_10e048:
    if (ctx->pc == 0x10E048u) {
        ctx->pc = 0x10E048u;
            // 0x10e048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E04Cu;
        goto label_10e04c;
    }
    ctx->pc = 0x10E044u;
    {
        const bool branch_taken_0x10e044 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10E048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E044u;
            // 0x10e048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e044) {
            ctx->pc = 0x10E020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e020;
        }
    }
    ctx->pc = 0x10E04Cu;
label_10e04c:
    // 0x10e04c: 0x10000015  b           . + 4 + (0x15 << 2)
label_10e050:
    if (ctx->pc == 0x10E050u) {
        ctx->pc = 0x10E054u;
        goto label_10e054;
    }
    ctx->pc = 0x10E04Cu;
    {
        const bool branch_taken_0x10e04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e04c) {
            ctx->pc = 0x10E0A4u;
            goto label_10e0a4;
        }
    }
    ctx->pc = 0x10E054u;
label_10e054:
    // 0x10e054: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x10e054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_10e058:
    // 0x10e058: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x10e058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_10e05c:
    // 0x10e05c: 0xc049760  jal         func_125D80
label_10e060:
    if (ctx->pc == 0x10E060u) {
        ctx->pc = 0x10E060u;
            // 0x10e060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E064u;
        goto label_10e064;
    }
    ctx->pc = 0x10E05Cu;
    SET_GPR_U32(ctx, 31, 0x10E064u);
    ctx->pc = 0x10E060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E05Cu;
            // 0x10e060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E064u; }
        if (ctx->pc != 0x10E064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E064u; }
        if (ctx->pc != 0x10E064u) { return; }
    }
    ctx->pc = 0x10E064u;
label_10e064:
    // 0x10e064: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_10e068:
    if (ctx->pc == 0x10E068u) {
        ctx->pc = 0x10E068u;
            // 0x10e068: 0x3c130063  lui         $s3, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x10E06Cu;
        goto label_10e06c;
    }
    ctx->pc = 0x10E064u;
    {
        const bool branch_taken_0x10e064 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10E068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E064u;
            // 0x10e068: 0x3c130063  lui         $s3, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e064) {
            ctx->pc = 0x10E0A4u;
            goto label_10e0a4;
        }
    }
    ctx->pc = 0x10E06Cu;
label_10e06c:
    // 0x10e06c: 0x10000007  b           . + 4 + (0x7 << 2)
label_10e070:
    if (ctx->pc == 0x10E070u) {
        ctx->pc = 0x10E074u;
        goto label_10e074;
    }
    ctx->pc = 0x10E06Cu;
    {
        const bool branch_taken_0x10e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e06c) {
            ctx->pc = 0x10E08Cu;
            goto label_10e08c;
        }
    }
    ctx->pc = 0x10E074u;
label_10e074:
    // 0x10e074: 0x0  nop
    ctx->pc = 0x10e074u;
    // NOP
label_10e078:
    // 0x10e078: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x10e078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_10e07c:
    // 0x10e07c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x10e07cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_10e080:
    // 0x10e080: 0xc0496ca  jal         func_125B28
label_10e084:
    if (ctx->pc == 0x10E084u) {
        ctx->pc = 0x10E084u;
            // 0x10e084: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x10E088u;
        goto label_10e088;
    }
    ctx->pc = 0x10E080u;
    SET_GPR_U32(ctx, 31, 0x10E088u);
    ctx->pc = 0x10E084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E080u;
            // 0x10e084: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E088u; }
        if (ctx->pc != 0x10E088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E088u; }
        if (ctx->pc != 0x10E088u) { return; }
    }
    ctx->pc = 0x10E088u;
label_10e088:
    // 0x10e088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e08c:
    // 0x10e08c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x10e08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_10e090:
    // 0x10e090: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x10e090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_10e094:
    // 0x10e094: 0xc049760  jal         func_125D80
label_10e098:
    if (ctx->pc == 0x10E098u) {
        ctx->pc = 0x10E098u;
            // 0x10e098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E09Cu;
        goto label_10e09c;
    }
    ctx->pc = 0x10E094u;
    SET_GPR_U32(ctx, 31, 0x10E09Cu);
    ctx->pc = 0x10E098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E094u;
            // 0x10e098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E09Cu; }
        if (ctx->pc != 0x10E09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E09Cu; }
        if (ctx->pc != 0x10E09Cu) { return; }
    }
    ctx->pc = 0x10E09Cu;
label_10e09c:
    // 0x10e09c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_10e0a0:
    if (ctx->pc == 0x10E0A0u) {
        ctx->pc = 0x10E0A0u;
            // 0x10e0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E0A4u;
        goto label_10e0a4;
    }
    ctx->pc = 0x10E09Cu;
    {
        const bool branch_taken_0x10e09c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10E0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E09Cu;
            // 0x10e0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e09c) {
            ctx->pc = 0x10E078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e078;
        }
    }
    ctx->pc = 0x10E0A4u;
label_10e0a4:
    // 0x10e0a4: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x10e0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
label_10e0a8:
    // 0x10e0a8: 0xdc25ecc8  ld          $a1, -0x1338($at)
    ctx->pc = 0x10e0a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294962376)));
label_10e0ac:
    // 0x10e0ac: 0xc04963e  jal         func_1258F8
label_10e0b0:
    if (ctx->pc == 0x10E0B0u) {
        ctx->pc = 0x10E0B0u;
            // 0x10e0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E0B4u;
        goto label_10e0b4;
    }
    ctx->pc = 0x10E0ACu;
    SET_GPR_U32(ctx, 31, 0x10E0B4u);
    ctx->pc = 0x10E0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E0ACu;
            // 0x10e0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0B4u; }
        if (ctx->pc != 0x10E0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0B4u; }
        if (ctx->pc != 0x10E0B4u) { return; }
    }
    ctx->pc = 0x10E0B4u;
label_10e0b4:
    // 0x10e0b4: 0xc048d52  jal         func_123548
label_10e0b8:
    if (ctx->pc == 0x10E0B8u) {
        ctx->pc = 0x10E0B8u;
            // 0x10e0b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E0BCu;
        goto label_10e0bc;
    }
    ctx->pc = 0x10E0B4u;
    SET_GPR_U32(ctx, 31, 0x10E0BCu);
    ctx->pc = 0x10E0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E0B4u;
            // 0x10e0b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123548u;
    if (runtime->hasFunction(0x123548u)) {
        auto targetFn = runtime->lookupFunction(0x123548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0BCu; }
        if (ctx->pc != 0x10E0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123548_0x123548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0BCu; }
        if (ctx->pc != 0x10E0BCu) { return; }
    }
    ctx->pc = 0x10E0BCu;
label_10e0bc:
    // 0x10e0bc: 0xc0437b8  jal         func_10DEE0
label_10e0c0:
    if (ctx->pc == 0x10E0C0u) {
        ctx->pc = 0x10E0C0u;
            // 0x10e0c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E0C4u;
        goto label_10e0c4;
    }
    ctx->pc = 0x10E0BCu;
    SET_GPR_U32(ctx, 31, 0x10E0C4u);
    ctx->pc = 0x10E0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E0BCu;
            // 0x10e0c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DEE0u;
    if (runtime->hasFunction(0x10DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0C4u; }
        if (ctx->pc != 0x10E0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010DEE0_0x10dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0C4u; }
        if (ctx->pc != 0x10E0C4u) { return; }
    }
    ctx->pc = 0x10E0C4u;
label_10e0c4:
    // 0x10e0c4: 0x2667eca0  addiu       $a3, $s3, -0x1360
    ctx->pc = 0x10e0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962336));
label_10e0c8:
    // 0x10e0c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x10e0c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e0cc:
    // 0x10e0cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10e0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10e0d0:
    // 0x10e0d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10e0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10e0d4:
    // 0x10e0d4: 0xc043bc2  jal         func_10EF08
label_10e0d8:
    if (ctx->pc == 0x10E0D8u) {
        ctx->pc = 0x10E0D8u;
            // 0x10e0d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E0DCu;
        goto label_10e0dc;
    }
    ctx->pc = 0x10E0D4u;
    SET_GPR_U32(ctx, 31, 0x10E0DCu);
    ctx->pc = 0x10E0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E0D4u;
            // 0x10e0d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF08u;
    if (runtime->hasFunction(0x10EF08u)) {
        auto targetFn = runtime->lookupFunction(0x10EF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0DCu; }
        if (ctx->pc != 0x10E0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF08_0x10ef08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E0DCu; }
        if (ctx->pc != 0x10E0DCu) { return; }
    }
    ctx->pc = 0x10E0DCu;
label_10e0dc:
    // 0x10e0dc: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_10e0e0:
    if (ctx->pc == 0x10E0E0u) {
        ctx->pc = 0x10E0E0u;
            // 0x10e0e0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x10E0E4u;
        goto label_10e0e4;
    }
    ctx->pc = 0x10E0DCu;
    {
        const bool branch_taken_0x10e0dc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x10E0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E0DCu;
            // 0x10e0e0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0dc) {
            ctx->pc = 0x10E0FCu;
            goto label_10e0fc;
        }
    }
    ctx->pc = 0x10E0E4u;
label_10e0e4:
    // 0x10e0e4: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x10e0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_10e0e8:
    // 0x10e0e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10e0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10e0ec:
    // 0x10e0ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10e0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10e0f0:
    // 0x10e0f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10e0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e0f4:
    // 0x10e0f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_10e0f8:
    if (ctx->pc == 0x10E0F8u) {
        ctx->pc = 0x10E0F8u;
            // 0x10e0f8: 0x24e7eca8  addiu       $a3, $a3, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962344));
        ctx->pc = 0x10E0FCu;
        goto label_10e0fc;
    }
    ctx->pc = 0x10E0F4u;
    {
        const bool branch_taken_0x10e0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E0F4u;
            // 0x10e0f8: 0x24e7eca8  addiu       $a3, $a3, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0f4) {
            ctx->pc = 0x10E110u;
            goto label_10e110;
        }
    }
    ctx->pc = 0x10E0FCu;
label_10e0fc:
    // 0x10e0fc: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x10e0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_10e100:
    // 0x10e100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10e100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10e104:
    // 0x10e104: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10e104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10e108:
    // 0x10e108: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10e108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e10c:
    // 0x10e10c: 0x24e7ecb0  addiu       $a3, $a3, -0x1350
    ctx->pc = 0x10e10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962352));
label_10e110:
    // 0x10e110: 0xc043bc2  jal         func_10EF08
label_10e114:
    if (ctx->pc == 0x10E114u) {
        ctx->pc = 0x10E114u;
            // 0x10e114: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E118u;
        goto label_10e118;
    }
    ctx->pc = 0x10E110u;
    SET_GPR_U32(ctx, 31, 0x10E118u);
    ctx->pc = 0x10E114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E110u;
            // 0x10e114: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF08u;
    if (runtime->hasFunction(0x10EF08u)) {
        auto targetFn = runtime->lookupFunction(0x10EF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E118u; }
        if (ctx->pc != 0x10E118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF08_0x10ef08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E118u; }
        if (ctx->pc != 0x10E118u) { return; }
    }
    ctx->pc = 0x10E118u;
label_10e118:
    // 0x10e118: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x10e118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_10e11c:
    // 0x10e11c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x10e11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10e120:
    // 0x10e120: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10e120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10e124:
    // 0x10e124: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10e124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10e128:
    // 0x10e128: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10e128u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10e12c:
    // 0x10e12c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10e12cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10e130:
    // 0x10e130: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10e130u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10e134:
    // 0x10e134: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10e138:
    // 0x10e138: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10e13c:
    // 0x10e13c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e13cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e140:
    // 0x10e140: 0x3e00008  jr          $ra
label_10e144:
    if (ctx->pc == 0x10E144u) {
        ctx->pc = 0x10E144u;
            // 0x10e144: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x10E148u;
        goto label_fallthrough_0x10e140;
    }
    ctx->pc = 0x10E140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E140u;
            // 0x10e144: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x10e140:
    ctx->pc = 0x10E148u;
}
