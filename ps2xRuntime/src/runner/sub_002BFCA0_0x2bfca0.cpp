#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BFCA0
// Address: 0x2bfca0 - 0x2bff30
void sub_002BFCA0_0x2bfca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFCA0_0x2bfca0");
#endif

    switch (ctx->pc) {
        case 0x2bfca0u: goto label_2bfca0;
        case 0x2bfca4u: goto label_2bfca4;
        case 0x2bfca8u: goto label_2bfca8;
        case 0x2bfcacu: goto label_2bfcac;
        case 0x2bfcb0u: goto label_2bfcb0;
        case 0x2bfcb4u: goto label_2bfcb4;
        case 0x2bfcb8u: goto label_2bfcb8;
        case 0x2bfcbcu: goto label_2bfcbc;
        case 0x2bfcc0u: goto label_2bfcc0;
        case 0x2bfcc4u: goto label_2bfcc4;
        case 0x2bfcc8u: goto label_2bfcc8;
        case 0x2bfcccu: goto label_2bfccc;
        case 0x2bfcd0u: goto label_2bfcd0;
        case 0x2bfcd4u: goto label_2bfcd4;
        case 0x2bfcd8u: goto label_2bfcd8;
        case 0x2bfcdcu: goto label_2bfcdc;
        case 0x2bfce0u: goto label_2bfce0;
        case 0x2bfce4u: goto label_2bfce4;
        case 0x2bfce8u: goto label_2bfce8;
        case 0x2bfcecu: goto label_2bfcec;
        case 0x2bfcf0u: goto label_2bfcf0;
        case 0x2bfcf4u: goto label_2bfcf4;
        case 0x2bfcf8u: goto label_2bfcf8;
        case 0x2bfcfcu: goto label_2bfcfc;
        case 0x2bfd00u: goto label_2bfd00;
        case 0x2bfd04u: goto label_2bfd04;
        case 0x2bfd08u: goto label_2bfd08;
        case 0x2bfd0cu: goto label_2bfd0c;
        case 0x2bfd10u: goto label_2bfd10;
        case 0x2bfd14u: goto label_2bfd14;
        case 0x2bfd18u: goto label_2bfd18;
        case 0x2bfd1cu: goto label_2bfd1c;
        case 0x2bfd20u: goto label_2bfd20;
        case 0x2bfd24u: goto label_2bfd24;
        case 0x2bfd28u: goto label_2bfd28;
        case 0x2bfd2cu: goto label_2bfd2c;
        case 0x2bfd30u: goto label_2bfd30;
        case 0x2bfd34u: goto label_2bfd34;
        case 0x2bfd38u: goto label_2bfd38;
        case 0x2bfd3cu: goto label_2bfd3c;
        case 0x2bfd40u: goto label_2bfd40;
        case 0x2bfd44u: goto label_2bfd44;
        case 0x2bfd48u: goto label_2bfd48;
        case 0x2bfd4cu: goto label_2bfd4c;
        case 0x2bfd50u: goto label_2bfd50;
        case 0x2bfd54u: goto label_2bfd54;
        case 0x2bfd58u: goto label_2bfd58;
        case 0x2bfd5cu: goto label_2bfd5c;
        case 0x2bfd60u: goto label_2bfd60;
        case 0x2bfd64u: goto label_2bfd64;
        case 0x2bfd68u: goto label_2bfd68;
        case 0x2bfd6cu: goto label_2bfd6c;
        case 0x2bfd70u: goto label_2bfd70;
        case 0x2bfd74u: goto label_2bfd74;
        case 0x2bfd78u: goto label_2bfd78;
        case 0x2bfd7cu: goto label_2bfd7c;
        case 0x2bfd80u: goto label_2bfd80;
        case 0x2bfd84u: goto label_2bfd84;
        case 0x2bfd88u: goto label_2bfd88;
        case 0x2bfd8cu: goto label_2bfd8c;
        case 0x2bfd90u: goto label_2bfd90;
        case 0x2bfd94u: goto label_2bfd94;
        case 0x2bfd98u: goto label_2bfd98;
        case 0x2bfd9cu: goto label_2bfd9c;
        case 0x2bfda0u: goto label_2bfda0;
        case 0x2bfda4u: goto label_2bfda4;
        case 0x2bfda8u: goto label_2bfda8;
        case 0x2bfdacu: goto label_2bfdac;
        case 0x2bfdb0u: goto label_2bfdb0;
        case 0x2bfdb4u: goto label_2bfdb4;
        case 0x2bfdb8u: goto label_2bfdb8;
        case 0x2bfdbcu: goto label_2bfdbc;
        case 0x2bfdc0u: goto label_2bfdc0;
        case 0x2bfdc4u: goto label_2bfdc4;
        case 0x2bfdc8u: goto label_2bfdc8;
        case 0x2bfdccu: goto label_2bfdcc;
        case 0x2bfdd0u: goto label_2bfdd0;
        case 0x2bfdd4u: goto label_2bfdd4;
        case 0x2bfdd8u: goto label_2bfdd8;
        case 0x2bfddcu: goto label_2bfddc;
        case 0x2bfde0u: goto label_2bfde0;
        case 0x2bfde4u: goto label_2bfde4;
        case 0x2bfde8u: goto label_2bfde8;
        case 0x2bfdecu: goto label_2bfdec;
        case 0x2bfdf0u: goto label_2bfdf0;
        case 0x2bfdf4u: goto label_2bfdf4;
        case 0x2bfdf8u: goto label_2bfdf8;
        case 0x2bfdfcu: goto label_2bfdfc;
        case 0x2bfe00u: goto label_2bfe00;
        case 0x2bfe04u: goto label_2bfe04;
        case 0x2bfe08u: goto label_2bfe08;
        case 0x2bfe0cu: goto label_2bfe0c;
        case 0x2bfe10u: goto label_2bfe10;
        case 0x2bfe14u: goto label_2bfe14;
        case 0x2bfe18u: goto label_2bfe18;
        case 0x2bfe1cu: goto label_2bfe1c;
        case 0x2bfe20u: goto label_2bfe20;
        case 0x2bfe24u: goto label_2bfe24;
        case 0x2bfe28u: goto label_2bfe28;
        case 0x2bfe2cu: goto label_2bfe2c;
        case 0x2bfe30u: goto label_2bfe30;
        case 0x2bfe34u: goto label_2bfe34;
        case 0x2bfe38u: goto label_2bfe38;
        case 0x2bfe3cu: goto label_2bfe3c;
        case 0x2bfe40u: goto label_2bfe40;
        case 0x2bfe44u: goto label_2bfe44;
        case 0x2bfe48u: goto label_2bfe48;
        case 0x2bfe4cu: goto label_2bfe4c;
        case 0x2bfe50u: goto label_2bfe50;
        case 0x2bfe54u: goto label_2bfe54;
        case 0x2bfe58u: goto label_2bfe58;
        case 0x2bfe5cu: goto label_2bfe5c;
        case 0x2bfe60u: goto label_2bfe60;
        case 0x2bfe64u: goto label_2bfe64;
        case 0x2bfe68u: goto label_2bfe68;
        case 0x2bfe6cu: goto label_2bfe6c;
        case 0x2bfe70u: goto label_2bfe70;
        case 0x2bfe74u: goto label_2bfe74;
        case 0x2bfe78u: goto label_2bfe78;
        case 0x2bfe7cu: goto label_2bfe7c;
        case 0x2bfe80u: goto label_2bfe80;
        case 0x2bfe84u: goto label_2bfe84;
        case 0x2bfe88u: goto label_2bfe88;
        case 0x2bfe8cu: goto label_2bfe8c;
        case 0x2bfe90u: goto label_2bfe90;
        case 0x2bfe94u: goto label_2bfe94;
        case 0x2bfe98u: goto label_2bfe98;
        case 0x2bfe9cu: goto label_2bfe9c;
        case 0x2bfea0u: goto label_2bfea0;
        case 0x2bfea4u: goto label_2bfea4;
        case 0x2bfea8u: goto label_2bfea8;
        case 0x2bfeacu: goto label_2bfeac;
        case 0x2bfeb0u: goto label_2bfeb0;
        case 0x2bfeb4u: goto label_2bfeb4;
        case 0x2bfeb8u: goto label_2bfeb8;
        case 0x2bfebcu: goto label_2bfebc;
        case 0x2bfec0u: goto label_2bfec0;
        case 0x2bfec4u: goto label_2bfec4;
        case 0x2bfec8u: goto label_2bfec8;
        case 0x2bfeccu: goto label_2bfecc;
        case 0x2bfed0u: goto label_2bfed0;
        case 0x2bfed4u: goto label_2bfed4;
        case 0x2bfed8u: goto label_2bfed8;
        case 0x2bfedcu: goto label_2bfedc;
        case 0x2bfee0u: goto label_2bfee0;
        case 0x2bfee4u: goto label_2bfee4;
        case 0x2bfee8u: goto label_2bfee8;
        case 0x2bfeecu: goto label_2bfeec;
        case 0x2bfef0u: goto label_2bfef0;
        case 0x2bfef4u: goto label_2bfef4;
        case 0x2bfef8u: goto label_2bfef8;
        case 0x2bfefcu: goto label_2bfefc;
        case 0x2bff00u: goto label_2bff00;
        case 0x2bff04u: goto label_2bff04;
        case 0x2bff08u: goto label_2bff08;
        case 0x2bff0cu: goto label_2bff0c;
        case 0x2bff10u: goto label_2bff10;
        case 0x2bff14u: goto label_2bff14;
        case 0x2bff18u: goto label_2bff18;
        case 0x2bff1cu: goto label_2bff1c;
        case 0x2bff20u: goto label_2bff20;
        case 0x2bff24u: goto label_2bff24;
        case 0x2bff28u: goto label_2bff28;
        case 0x2bff2cu: goto label_2bff2c;
        default: break;
    }

    ctx->pc = 0x2bfca0u;

label_2bfca0:
    // 0x2bfca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bfca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2bfca4:
    // 0x2bfca4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2bfca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2bfca8:
    // 0x2bfca8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bfca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2bfcac:
    // 0x2bfcac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2bfcacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2bfcb0:
    // 0x2bfcb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bfcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2bfcb4:
    // 0x2bfcb4: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2bfcb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_2bfcb8:
    // 0x2bfcb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bfcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bfcbc:
    // 0x2bfcbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bfcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bfcc0:
    // 0x2bfcc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bfcc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bfcc4:
    // 0x2bfcc4: 0xc0aeaf4  jal         func_2BABD0
label_2bfcc8:
    if (ctx->pc == 0x2BFCC8u) {
        ctx->pc = 0x2BFCC8u;
            // 0x2bfcc8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2BFCCCu;
        goto label_2bfccc;
    }
    ctx->pc = 0x2BFCC4u;
    SET_GPR_U32(ctx, 31, 0x2BFCCCu);
    ctx->pc = 0x2BFCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFCC4u;
            // 0x2bfcc8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCCCu; }
        if (ctx->pc != 0x2BFCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCCCu; }
        if (ctx->pc != 0x2BFCCCu) { return; }
    }
    ctx->pc = 0x2BFCCCu;
label_2bfccc:
    // 0x2bfccc: 0xc0b0090  jal         func_2C0240
label_2bfcd0:
    if (ctx->pc == 0x2BFCD0u) {
        ctx->pc = 0x2BFCD0u;
            // 0x2bfcd0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BFCD4u;
        goto label_2bfcd4;
    }
    ctx->pc = 0x2BFCCCu;
    SET_GPR_U32(ctx, 31, 0x2BFCD4u);
    ctx->pc = 0x2BFCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFCCCu;
            // 0x2bfcd0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0240u;
    if (runtime->hasFunction(0x2C0240u)) {
        auto targetFn = runtime->lookupFunction(0x2C0240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCD4u; }
        if (ctx->pc != 0x2BFCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0240_0x2c0240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCD4u; }
        if (ctx->pc != 0x2BFCD4u) { return; }
    }
    ctx->pc = 0x2BFCD4u;
label_2bfcd4:
    // 0x2bfcd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bfcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bfcd8:
    // 0x2bfcd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bfcdc:
    // 0x2bfcdc: 0x24631930  addiu       $v1, $v1, 0x1930
    ctx->pc = 0x2bfcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6448));
label_2bfce0:
    // 0x2bfce0: 0x24421968  addiu       $v0, $v0, 0x1968
    ctx->pc = 0x2bfce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6504));
label_2bfce4:
    // 0x2bfce4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bfce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bfce8:
    // 0x2bfce8: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2bfce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bfcec:
    // 0x2bfcec: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bfcecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bfcf0:
    // 0x2bfcf0: 0xc0b0088  jal         func_2C0220
label_2bfcf4:
    if (ctx->pc == 0x2BFCF4u) {
        ctx->pc = 0x2BFCF4u;
            // 0x2bfcf4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x2BFCF8u;
        goto label_2bfcf8;
    }
    ctx->pc = 0x2BFCF0u;
    SET_GPR_U32(ctx, 31, 0x2BFCF8u);
    ctx->pc = 0x2BFCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFCF0u;
            // 0x2bfcf4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0220u;
    if (runtime->hasFunction(0x2C0220u)) {
        auto targetFn = runtime->lookupFunction(0x2C0220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCF8u; }
        if (ctx->pc != 0x2BFCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0220_0x2c0220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCF8u; }
        if (ctx->pc != 0x2BFCF8u) { return; }
    }
    ctx->pc = 0x2BFCF8u;
label_2bfcf8:
    // 0x2bfcf8: 0xc0b0088  jal         func_2C0220
label_2bfcfc:
    if (ctx->pc == 0x2BFCFCu) {
        ctx->pc = 0x2BFCFCu;
            // 0x2bfcfc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BFD00u;
        goto label_2bfd00;
    }
    ctx->pc = 0x2BFCF8u;
    SET_GPR_U32(ctx, 31, 0x2BFD00u);
    ctx->pc = 0x2BFCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFCF8u;
            // 0x2bfcfc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0220u;
    if (runtime->hasFunction(0x2C0220u)) {
        auto targetFn = runtime->lookupFunction(0x2C0220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD00u; }
        if (ctx->pc != 0x2BFD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0220_0x2c0220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD00u; }
        if (ctx->pc != 0x2BFD00u) { return; }
    }
    ctx->pc = 0x2BFD00u;
label_2bfd00:
    // 0x2bfd00: 0xc0a8d10  jal         func_2A3440
label_2bfd04:
    if (ctx->pc == 0x2BFD04u) {
        ctx->pc = 0x2BFD04u;
            // 0x2bfd04: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2BFD08u;
        goto label_2bfd08;
    }
    ctx->pc = 0x2BFD00u;
    SET_GPR_U32(ctx, 31, 0x2BFD08u);
    ctx->pc = 0x2BFD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD00u;
            // 0x2bfd04: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3440u;
    if (runtime->hasFunction(0x2A3440u)) {
        auto targetFn = runtime->lookupFunction(0x2A3440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD08u; }
        if (ctx->pc != 0x2BFD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3440_0x2a3440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD08u; }
        if (ctx->pc != 0x2BFD08u) { return; }
    }
    ctx->pc = 0x2BFD08u;
label_2bfd08:
    // 0x2bfd08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bfd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bfd0c:
    // 0x2bfd0c: 0xc0aeac0  jal         func_2BAB00
label_2bfd10:
    if (ctx->pc == 0x2BFD10u) {
        ctx->pc = 0x2BFD10u;
            // 0x2bfd10: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x2BFD14u;
        goto label_2bfd14;
    }
    ctx->pc = 0x2BFD0Cu;
    SET_GPR_U32(ctx, 31, 0x2BFD14u);
    ctx->pc = 0x2BFD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD0Cu;
            // 0x2bfd10: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD14u; }
        if (ctx->pc != 0x2BFD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD14u; }
        if (ctx->pc != 0x2BFD14u) { return; }
    }
    ctx->pc = 0x2BFD14u;
label_2bfd14:
    // 0x2bfd14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfd18:
    // 0x2bfd18: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_2bfd1c:
    if (ctx->pc == 0x2BFD1Cu) {
        ctx->pc = 0x2BFD20u;
        goto label_2bfd20;
    }
    ctx->pc = 0x2BFD18u;
    {
        const bool branch_taken_0x2bfd18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd18) {
            ctx->pc = 0x2BFD98u;
            goto label_2bfd98;
        }
    }
    ctx->pc = 0x2BFD20u;
label_2bfd20:
    // 0x2bfd20: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2bfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2bfd24:
    // 0x2bfd24: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2bfd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2bfd28:
    // 0x2bfd28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2bfd2c:
    // 0x2bfd2c: 0xc040138  jal         func_1004E0
label_2bfd30:
    if (ctx->pc == 0x2BFD30u) {
        ctx->pc = 0x2BFD30u;
            // 0x2bfd30: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2BFD34u;
        goto label_2bfd34;
    }
    ctx->pc = 0x2BFD2Cu;
    SET_GPR_U32(ctx, 31, 0x2BFD34u);
    ctx->pc = 0x2BFD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD2Cu;
            // 0x2bfd30: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD34u; }
        if (ctx->pc != 0x2BFD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD34u; }
        if (ctx->pc != 0x2BFD34u) { return; }
    }
    ctx->pc = 0x2BFD34u;
label_2bfd34:
    // 0x2bfd34: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bfd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bfd38:
    // 0x2bfd38: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bfd38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2bfd3c:
    // 0x2bfd3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bfd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfd40:
    // 0x2bfd40: 0x24a50130  addiu       $a1, $a1, 0x130
    ctx->pc = 0x2bfd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
label_2bfd44:
    // 0x2bfd44: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x2bfd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_2bfd48:
    // 0x2bfd48: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x2bfd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2bfd4c:
    // 0x2bfd4c: 0xc040840  jal         func_102100
label_2bfd50:
    if (ctx->pc == 0x2BFD50u) {
        ctx->pc = 0x2BFD50u;
            // 0x2bfd50: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD54u;
        goto label_2bfd54;
    }
    ctx->pc = 0x2BFD4Cu;
    SET_GPR_U32(ctx, 31, 0x2BFD54u);
    ctx->pc = 0x2BFD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD4Cu;
            // 0x2bfd50: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD54u; }
        if (ctx->pc != 0x2BFD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD54u; }
        if (ctx->pc != 0x2BFD54u) { return; }
    }
    ctx->pc = 0x2BFD54u;
label_2bfd54:
    // 0x2bfd54: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2bfd54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_2bfd58:
    // 0x2bfd58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bfd58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfd5c:
    // 0x2bfd5c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2bfd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bfd60:
    // 0x2bfd60: 0xc0b0008  jal         func_2C0020
label_2bfd64:
    if (ctx->pc == 0x2BFD64u) {
        ctx->pc = 0x2BFD64u;
            // 0x2bfd64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD68u;
        goto label_2bfd68;
    }
    ctx->pc = 0x2BFD60u;
    SET_GPR_U32(ctx, 31, 0x2BFD68u);
    ctx->pc = 0x2BFD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD60u;
            // 0x2bfd64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0020u;
    if (runtime->hasFunction(0x2C0020u)) {
        auto targetFn = runtime->lookupFunction(0x2C0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD68u; }
        if (ctx->pc != 0x2BFD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0020_0x2c0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD68u; }
        if (ctx->pc != 0x2BFD68u) { return; }
    }
    ctx->pc = 0x2BFD68u;
label_2bfd68:
    // 0x2bfd68: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2bfd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bfd6c:
    // 0x2bfd6c: 0xc0b0008  jal         func_2C0020
label_2bfd70:
    if (ctx->pc == 0x2BFD70u) {
        ctx->pc = 0x2BFD70u;
            // 0x2bfd70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD74u;
        goto label_2bfd74;
    }
    ctx->pc = 0x2BFD6Cu;
    SET_GPR_U32(ctx, 31, 0x2BFD74u);
    ctx->pc = 0x2BFD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD6Cu;
            // 0x2bfd70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0020u;
    if (runtime->hasFunction(0x2C0020u)) {
        auto targetFn = runtime->lookupFunction(0x2C0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD74u; }
        if (ctx->pc != 0x2BFD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0020_0x2c0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD74u; }
        if (ctx->pc != 0x2BFD74u) { return; }
    }
    ctx->pc = 0x2BFD74u;
label_2bfd74:
    // 0x2bfd74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2bfd74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfd78:
    // 0x2bfd78: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2bfd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bfd7c:
    // 0x2bfd7c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2bfd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2bfd80:
    // 0x2bfd80: 0xc0b0000  jal         func_2C0000
label_2bfd84:
    if (ctx->pc == 0x2BFD84u) {
        ctx->pc = 0x2BFD84u;
            // 0x2bfd84: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x2BFD88u;
        goto label_2bfd88;
    }
    ctx->pc = 0x2BFD80u;
    SET_GPR_U32(ctx, 31, 0x2BFD88u);
    ctx->pc = 0x2BFD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD80u;
            // 0x2bfd84: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0000u;
    if (runtime->hasFunction(0x2C0000u)) {
        auto targetFn = runtime->lookupFunction(0x2C0000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD88u; }
        if (ctx->pc != 0x2BFD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0000_0x2c0000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD88u; }
        if (ctx->pc != 0x2BFD88u) { return; }
    }
    ctx->pc = 0x2BFD88u;
label_2bfd88:
    // 0x2bfd88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2bfd88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2bfd8c:
    // 0x2bfd8c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2bfd8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2bfd90:
    // 0x2bfd90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2bfd94:
    if (ctx->pc == 0x2BFD94u) {
        ctx->pc = 0x2BFD94u;
            // 0x2bfd94: 0x267300f0  addiu       $s3, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->pc = 0x2BFD98u;
        goto label_2bfd98;
    }
    ctx->pc = 0x2BFD90u;
    {
        const bool branch_taken_0x2bfd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD90u;
            // 0x2bfd94: 0x267300f0  addiu       $s3, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd90) {
            ctx->pc = 0x2BFD78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bfd78;
        }
    }
    ctx->pc = 0x2BFD98u;
label_2bfd98:
    // 0x2bfd98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bfd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2bfd9c:
    // 0x2bfd9c: 0x2442ae50  addiu       $v0, $v0, -0x51B0
    ctx->pc = 0x2bfd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
label_2bfda0:
    // 0x2bfda0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bfda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bfda4:
    // 0x2bfda4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2bfda8:
    // 0x2bfda8: 0x2442ae88  addiu       $v0, $v0, -0x5178
    ctx->pc = 0x2bfda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946440));
label_2bfdac:
    // 0x2bfdac: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bfdacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bfdb0:
    // 0x2bfdb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bfdb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bfdb4:
    // 0x2bfdb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bfdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bfdb8:
    // 0x2bfdb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bfdb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bfdbc:
    // 0x2bfdbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bfdbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bfdc0:
    // 0x2bfdc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bfdc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bfdc4:
    // 0x2bfdc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bfdc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bfdc8:
    // 0x2bfdc8: 0x3e00008  jr          $ra
label_2bfdcc:
    if (ctx->pc == 0x2BFDCCu) {
        ctx->pc = 0x2BFDCCu;
            // 0x2bfdcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2BFDD0u;
        goto label_2bfdd0;
    }
    ctx->pc = 0x2BFDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFDC8u;
            // 0x2bfdcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFDD0u;
label_2bfdd0:
    // 0x2bfdd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bfdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bfdd4:
    // 0x2bfdd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bfdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bfdd8:
    // 0x2bfdd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bfdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bfddc:
    // 0x2bfddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bfddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bfde0:
    // 0x2bfde0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bfde0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bfde4:
    // 0x2bfde4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2bfde8:
    if (ctx->pc == 0x2BFDE8u) {
        ctx->pc = 0x2BFDE8u;
            // 0x2bfde8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFDECu;
        goto label_2bfdec;
    }
    ctx->pc = 0x2BFDE4u;
    {
        const bool branch_taken_0x2bfde4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFDE4u;
            // 0x2bfde8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfde4) {
            ctx->pc = 0x2BFF18u;
            goto label_2bff18;
        }
    }
    ctx->pc = 0x2BFDECu;
label_2bfdec:
    // 0x2bfdec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bfdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bfdf0:
    // 0x2bfdf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bfdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bfdf4:
    // 0x2bfdf4: 0x24631930  addiu       $v1, $v1, 0x1930
    ctx->pc = 0x2bfdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6448));
label_2bfdf8:
    // 0x2bfdf8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bfdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bfdfc:
    // 0x2bfdfc: 0x24421968  addiu       $v0, $v0, 0x1968
    ctx->pc = 0x2bfdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6504));
label_2bfe00:
    // 0x2bfe00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bfe00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bfe04:
    // 0x2bfe04: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bfe04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bfe08:
    // 0x2bfe08: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2bfe08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2bfe0c:
    // 0x2bfe0c: 0xc0407c0  jal         func_101F00
label_2bfe10:
    if (ctx->pc == 0x2BFE10u) {
        ctx->pc = 0x2BFE10u;
            // 0x2bfe10: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->pc = 0x2BFE14u;
        goto label_2bfe14;
    }
    ctx->pc = 0x2BFE0Cu;
    SET_GPR_U32(ctx, 31, 0x2BFE14u);
    ctx->pc = 0x2BFE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE0Cu;
            // 0x2bfe10: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFE14u; }
        if (ctx->pc != 0x2BFE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFE14u; }
        if (ctx->pc != 0x2BFE14u) { return; }
    }
    ctx->pc = 0x2BFE14u;
label_2bfe14:
    // 0x2bfe14: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2bfe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2bfe18:
    // 0x2bfe18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2bfe1c:
    if (ctx->pc == 0x2BFE1Cu) {
        ctx->pc = 0x2BFE1Cu;
            // 0x2bfe1c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BFE20u;
        goto label_2bfe20;
    }
    ctx->pc = 0x2BFE18u;
    {
        const bool branch_taken_0x2bfe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe18) {
            ctx->pc = 0x2BFE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE18u;
            // 0x2bfe1c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFE2Cu;
            goto label_2bfe2c;
        }
    }
    ctx->pc = 0x2BFE20u;
label_2bfe20:
    // 0x2bfe20: 0xc07507c  jal         func_1D41F0
label_2bfe24:
    if (ctx->pc == 0x2BFE24u) {
        ctx->pc = 0x2BFE24u;
            // 0x2bfe24: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2BFE28u;
        goto label_2bfe28;
    }
    ctx->pc = 0x2BFE20u;
    SET_GPR_U32(ctx, 31, 0x2BFE28u);
    ctx->pc = 0x2BFE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE20u;
            // 0x2bfe24: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFE28u; }
        if (ctx->pc != 0x2BFE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFE28u; }
        if (ctx->pc != 0x2BFE28u) { return; }
    }
    ctx->pc = 0x2BFE28u;
label_2bfe28:
    // 0x2bfe28: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2bfe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bfe2c:
    // 0x2bfe2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bfe30:
    if (ctx->pc == 0x2BFE30u) {
        ctx->pc = 0x2BFE30u;
            // 0x2bfe30: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BFE34u;
        goto label_2bfe34;
    }
    ctx->pc = 0x2BFE2Cu;
    {
        const bool branch_taken_0x2bfe2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe2c) {
            ctx->pc = 0x2BFE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE2Cu;
            // 0x2bfe30: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFE5Cu;
            goto label_2bfe5c;
        }
    }
    ctx->pc = 0x2BFE34u;
label_2bfe34:
    // 0x2bfe34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bfe38:
    if (ctx->pc == 0x2BFE38u) {
        ctx->pc = 0x2BFE3Cu;
        goto label_2bfe3c;
    }
    ctx->pc = 0x2BFE34u;
    {
        const bool branch_taken_0x2bfe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe34) {
            ctx->pc = 0x2BFE58u;
            goto label_2bfe58;
        }
    }
    ctx->pc = 0x2BFE3Cu;
label_2bfe3c:
    // 0x2bfe3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bfe40:
    if (ctx->pc == 0x2BFE40u) {
        ctx->pc = 0x2BFE44u;
        goto label_2bfe44;
    }
    ctx->pc = 0x2BFE3Cu;
    {
        const bool branch_taken_0x2bfe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe3c) {
            ctx->pc = 0x2BFE58u;
            goto label_2bfe58;
        }
    }
    ctx->pc = 0x2BFE44u;
label_2bfe44:
    // 0x2bfe44: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2bfe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2bfe48:
    // 0x2bfe48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bfe4c:
    if (ctx->pc == 0x2BFE4Cu) {
        ctx->pc = 0x2BFE50u;
        goto label_2bfe50;
    }
    ctx->pc = 0x2BFE48u;
    {
        const bool branch_taken_0x2bfe48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe48) {
            ctx->pc = 0x2BFE58u;
            goto label_2bfe58;
        }
    }
    ctx->pc = 0x2BFE50u;
label_2bfe50:
    // 0x2bfe50: 0xc0400a8  jal         func_1002A0
label_2bfe54:
    if (ctx->pc == 0x2BFE54u) {
        ctx->pc = 0x2BFE58u;
        goto label_2bfe58;
    }
    ctx->pc = 0x2BFE50u;
    SET_GPR_U32(ctx, 31, 0x2BFE58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFE58u; }
        if (ctx->pc != 0x2BFE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFE58u; }
        if (ctx->pc != 0x2BFE58u) { return; }
    }
    ctx->pc = 0x2BFE58u;
label_2bfe58:
    // 0x2bfe58: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2bfe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bfe5c:
    // 0x2bfe5c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bfe60:
    if (ctx->pc == 0x2BFE60u) {
        ctx->pc = 0x2BFE60u;
            // 0x2bfe60: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BFE64u;
        goto label_2bfe64;
    }
    ctx->pc = 0x2BFE5Cu;
    {
        const bool branch_taken_0x2bfe5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe5c) {
            ctx->pc = 0x2BFE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE5Cu;
            // 0x2bfe60: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFE8Cu;
            goto label_2bfe8c;
        }
    }
    ctx->pc = 0x2BFE64u;
label_2bfe64:
    // 0x2bfe64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bfe68:
    if (ctx->pc == 0x2BFE68u) {
        ctx->pc = 0x2BFE6Cu;
        goto label_2bfe6c;
    }
    ctx->pc = 0x2BFE64u;
    {
        const bool branch_taken_0x2bfe64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe64) {
            ctx->pc = 0x2BFE88u;
            goto label_2bfe88;
        }
    }
    ctx->pc = 0x2BFE6Cu;
label_2bfe6c:
    // 0x2bfe6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bfe70:
    if (ctx->pc == 0x2BFE70u) {
        ctx->pc = 0x2BFE74u;
        goto label_2bfe74;
    }
    ctx->pc = 0x2BFE6Cu;
    {
        const bool branch_taken_0x2bfe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe6c) {
            ctx->pc = 0x2BFE88u;
            goto label_2bfe88;
        }
    }
    ctx->pc = 0x2BFE74u;
label_2bfe74:
    // 0x2bfe74: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2bfe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2bfe78:
    // 0x2bfe78: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bfe7c:
    if (ctx->pc == 0x2BFE7Cu) {
        ctx->pc = 0x2BFE80u;
        goto label_2bfe80;
    }
    ctx->pc = 0x2BFE78u;
    {
        const bool branch_taken_0x2bfe78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe78) {
            ctx->pc = 0x2BFE88u;
            goto label_2bfe88;
        }
    }
    ctx->pc = 0x2BFE80u;
label_2bfe80:
    // 0x2bfe80: 0xc0400a8  jal         func_1002A0
label_2bfe84:
    if (ctx->pc == 0x2BFE84u) {
        ctx->pc = 0x2BFE88u;
        goto label_2bfe88;
    }
    ctx->pc = 0x2BFE80u;
    SET_GPR_U32(ctx, 31, 0x2BFE88u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFE88u; }
        if (ctx->pc != 0x2BFE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFE88u; }
        if (ctx->pc != 0x2BFE88u) { return; }
    }
    ctx->pc = 0x2BFE88u;
label_2bfe88:
    // 0x2bfe88: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2bfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bfe8c:
    // 0x2bfe8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bfe90:
    if (ctx->pc == 0x2BFE90u) {
        ctx->pc = 0x2BFE94u;
        goto label_2bfe94;
    }
    ctx->pc = 0x2BFE8Cu;
    {
        const bool branch_taken_0x2bfe8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe8c) {
            ctx->pc = 0x2BFEA8u;
            goto label_2bfea8;
        }
    }
    ctx->pc = 0x2BFE94u;
label_2bfe94:
    // 0x2bfe94: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bfe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bfe98:
    // 0x2bfe98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bfe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2bfe9c:
    // 0x2bfe9c: 0x24631918  addiu       $v1, $v1, 0x1918
    ctx->pc = 0x2bfe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6424));
label_2bfea0:
    // 0x2bfea0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2bfea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2bfea4:
    // 0x2bfea4: 0xac400d60  sw          $zero, 0xD60($v0)
    ctx->pc = 0x2bfea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3424), GPR_U32(ctx, 0));
label_2bfea8:
    // 0x2bfea8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2bfeac:
    if (ctx->pc == 0x2BFEACu) {
        ctx->pc = 0x2BFEACu;
            // 0x2bfeac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BFEB0u;
        goto label_2bfeb0;
    }
    ctx->pc = 0x2BFEA8u;
    {
        const bool branch_taken_0x2bfea8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfea8) {
            ctx->pc = 0x2BFEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEA8u;
            // 0x2bfeac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFF04u;
            goto label_2bff04;
        }
    }
    ctx->pc = 0x2BFEB0u;
label_2bfeb0:
    // 0x2bfeb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bfeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bfeb4:
    // 0x2bfeb4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bfeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2bfeb8:
    // 0x2bfeb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bfeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bfebc:
    // 0x2bfebc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bfebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2bfec0:
    // 0x2bfec0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bfec4:
    if (ctx->pc == 0x2BFEC4u) {
        ctx->pc = 0x2BFEC4u;
            // 0x2bfec4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BFEC8u;
        goto label_2bfec8;
    }
    ctx->pc = 0x2BFEC0u;
    {
        const bool branch_taken_0x2bfec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfec0) {
            ctx->pc = 0x2BFEC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEC0u;
            // 0x2bfec4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFEDCu;
            goto label_2bfedc;
        }
    }
    ctx->pc = 0x2BFEC8u;
label_2bfec8:
    // 0x2bfec8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bfec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bfecc:
    // 0x2bfecc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bfeccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bfed0:
    // 0x2bfed0: 0x320f809  jalr        $t9
label_2bfed4:
    if (ctx->pc == 0x2BFED4u) {
        ctx->pc = 0x2BFED4u;
            // 0x2bfed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BFED8u;
        goto label_2bfed8;
    }
    ctx->pc = 0x2BFED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BFED8u);
        ctx->pc = 0x2BFED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFED0u;
            // 0x2bfed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BFED8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BFED8u; }
            if (ctx->pc != 0x2BFED8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BFED8u;
label_2bfed8:
    // 0x2bfed8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2bfed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2bfedc:
    // 0x2bfedc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bfee0:
    if (ctx->pc == 0x2BFEE0u) {
        ctx->pc = 0x2BFEE0u;
            // 0x2bfee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEE4u;
        goto label_2bfee4;
    }
    ctx->pc = 0x2BFEDCu;
    {
        const bool branch_taken_0x2bfedc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfedc) {
            ctx->pc = 0x2BFEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEDCu;
            // 0x2bfee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFEF8u;
            goto label_2bfef8;
        }
    }
    ctx->pc = 0x2BFEE4u;
label_2bfee4:
    // 0x2bfee4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bfee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bfee8:
    // 0x2bfee8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bfee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bfeec:
    // 0x2bfeec: 0x320f809  jalr        $t9
label_2bfef0:
    if (ctx->pc == 0x2BFEF0u) {
        ctx->pc = 0x2BFEF0u;
            // 0x2bfef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BFEF4u;
        goto label_2bfef4;
    }
    ctx->pc = 0x2BFEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BFEF4u);
        ctx->pc = 0x2BFEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEECu;
            // 0x2bfef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BFEF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEF4u; }
            if (ctx->pc != 0x2BFEF4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BFEF4u;
label_2bfef4:
    // 0x2bfef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bfef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bfef8:
    // 0x2bfef8: 0xc075bf8  jal         func_1D6FE0
label_2bfefc:
    if (ctx->pc == 0x2BFEFCu) {
        ctx->pc = 0x2BFEFCu;
            // 0x2bfefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF00u;
        goto label_2bff00;
    }
    ctx->pc = 0x2BFEF8u;
    SET_GPR_U32(ctx, 31, 0x2BFF00u);
    ctx->pc = 0x2BFEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEF8u;
            // 0x2bfefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF00u; }
        if (ctx->pc != 0x2BFF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF00u; }
        if (ctx->pc != 0x2BFF00u) { return; }
    }
    ctx->pc = 0x2BFF00u;
label_2bff00:
    // 0x2bff00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bff00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bff04:
    // 0x2bff04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bff04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bff08:
    // 0x2bff08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bff0c:
    if (ctx->pc == 0x2BFF0Cu) {
        ctx->pc = 0x2BFF0Cu;
            // 0x2bff0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF10u;
        goto label_2bff10;
    }
    ctx->pc = 0x2BFF08u;
    {
        const bool branch_taken_0x2bff08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bff08) {
            ctx->pc = 0x2BFF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF08u;
            // 0x2bff0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFF1Cu;
            goto label_2bff1c;
        }
    }
    ctx->pc = 0x2BFF10u;
label_2bff10:
    // 0x2bff10: 0xc0400a8  jal         func_1002A0
label_2bff14:
    if (ctx->pc == 0x2BFF14u) {
        ctx->pc = 0x2BFF14u;
            // 0x2bff14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF18u;
        goto label_2bff18;
    }
    ctx->pc = 0x2BFF10u;
    SET_GPR_U32(ctx, 31, 0x2BFF18u);
    ctx->pc = 0x2BFF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF10u;
            // 0x2bff14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF18u; }
        if (ctx->pc != 0x2BFF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF18u; }
        if (ctx->pc != 0x2BFF18u) { return; }
    }
    ctx->pc = 0x2BFF18u;
label_2bff18:
    // 0x2bff18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bff18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bff1c:
    // 0x2bff1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bff1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bff20:
    // 0x2bff20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bff20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bff24:
    // 0x2bff24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bff24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bff28:
    // 0x2bff28: 0x3e00008  jr          $ra
label_2bff2c:
    if (ctx->pc == 0x2BFF2Cu) {
        ctx->pc = 0x2BFF2Cu;
            // 0x2bff2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BFF30u;
        goto label_fallthrough_0x2bff28;
    }
    ctx->pc = 0x2BFF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF28u;
            // 0x2bff2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bff28:
    ctx->pc = 0x2BFF30u;
}
