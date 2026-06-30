#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BEF00
// Address: 0x2bef00 - 0x2bf190
void sub_002BEF00_0x2bef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEF00_0x2bef00");
#endif

    switch (ctx->pc) {
        case 0x2bef00u: goto label_2bef00;
        case 0x2bef04u: goto label_2bef04;
        case 0x2bef08u: goto label_2bef08;
        case 0x2bef0cu: goto label_2bef0c;
        case 0x2bef10u: goto label_2bef10;
        case 0x2bef14u: goto label_2bef14;
        case 0x2bef18u: goto label_2bef18;
        case 0x2bef1cu: goto label_2bef1c;
        case 0x2bef20u: goto label_2bef20;
        case 0x2bef24u: goto label_2bef24;
        case 0x2bef28u: goto label_2bef28;
        case 0x2bef2cu: goto label_2bef2c;
        case 0x2bef30u: goto label_2bef30;
        case 0x2bef34u: goto label_2bef34;
        case 0x2bef38u: goto label_2bef38;
        case 0x2bef3cu: goto label_2bef3c;
        case 0x2bef40u: goto label_2bef40;
        case 0x2bef44u: goto label_2bef44;
        case 0x2bef48u: goto label_2bef48;
        case 0x2bef4cu: goto label_2bef4c;
        case 0x2bef50u: goto label_2bef50;
        case 0x2bef54u: goto label_2bef54;
        case 0x2bef58u: goto label_2bef58;
        case 0x2bef5cu: goto label_2bef5c;
        case 0x2bef60u: goto label_2bef60;
        case 0x2bef64u: goto label_2bef64;
        case 0x2bef68u: goto label_2bef68;
        case 0x2bef6cu: goto label_2bef6c;
        case 0x2bef70u: goto label_2bef70;
        case 0x2bef74u: goto label_2bef74;
        case 0x2bef78u: goto label_2bef78;
        case 0x2bef7cu: goto label_2bef7c;
        case 0x2bef80u: goto label_2bef80;
        case 0x2bef84u: goto label_2bef84;
        case 0x2bef88u: goto label_2bef88;
        case 0x2bef8cu: goto label_2bef8c;
        case 0x2bef90u: goto label_2bef90;
        case 0x2bef94u: goto label_2bef94;
        case 0x2bef98u: goto label_2bef98;
        case 0x2bef9cu: goto label_2bef9c;
        case 0x2befa0u: goto label_2befa0;
        case 0x2befa4u: goto label_2befa4;
        case 0x2befa8u: goto label_2befa8;
        case 0x2befacu: goto label_2befac;
        case 0x2befb0u: goto label_2befb0;
        case 0x2befb4u: goto label_2befb4;
        case 0x2befb8u: goto label_2befb8;
        case 0x2befbcu: goto label_2befbc;
        case 0x2befc0u: goto label_2befc0;
        case 0x2befc4u: goto label_2befc4;
        case 0x2befc8u: goto label_2befc8;
        case 0x2befccu: goto label_2befcc;
        case 0x2befd0u: goto label_2befd0;
        case 0x2befd4u: goto label_2befd4;
        case 0x2befd8u: goto label_2befd8;
        case 0x2befdcu: goto label_2befdc;
        case 0x2befe0u: goto label_2befe0;
        case 0x2befe4u: goto label_2befe4;
        case 0x2befe8u: goto label_2befe8;
        case 0x2befecu: goto label_2befec;
        case 0x2beff0u: goto label_2beff0;
        case 0x2beff4u: goto label_2beff4;
        case 0x2beff8u: goto label_2beff8;
        case 0x2beffcu: goto label_2beffc;
        case 0x2bf000u: goto label_2bf000;
        case 0x2bf004u: goto label_2bf004;
        case 0x2bf008u: goto label_2bf008;
        case 0x2bf00cu: goto label_2bf00c;
        case 0x2bf010u: goto label_2bf010;
        case 0x2bf014u: goto label_2bf014;
        case 0x2bf018u: goto label_2bf018;
        case 0x2bf01cu: goto label_2bf01c;
        case 0x2bf020u: goto label_2bf020;
        case 0x2bf024u: goto label_2bf024;
        case 0x2bf028u: goto label_2bf028;
        case 0x2bf02cu: goto label_2bf02c;
        case 0x2bf030u: goto label_2bf030;
        case 0x2bf034u: goto label_2bf034;
        case 0x2bf038u: goto label_2bf038;
        case 0x2bf03cu: goto label_2bf03c;
        case 0x2bf040u: goto label_2bf040;
        case 0x2bf044u: goto label_2bf044;
        case 0x2bf048u: goto label_2bf048;
        case 0x2bf04cu: goto label_2bf04c;
        case 0x2bf050u: goto label_2bf050;
        case 0x2bf054u: goto label_2bf054;
        case 0x2bf058u: goto label_2bf058;
        case 0x2bf05cu: goto label_2bf05c;
        case 0x2bf060u: goto label_2bf060;
        case 0x2bf064u: goto label_2bf064;
        case 0x2bf068u: goto label_2bf068;
        case 0x2bf06cu: goto label_2bf06c;
        case 0x2bf070u: goto label_2bf070;
        case 0x2bf074u: goto label_2bf074;
        case 0x2bf078u: goto label_2bf078;
        case 0x2bf07cu: goto label_2bf07c;
        case 0x2bf080u: goto label_2bf080;
        case 0x2bf084u: goto label_2bf084;
        case 0x2bf088u: goto label_2bf088;
        case 0x2bf08cu: goto label_2bf08c;
        case 0x2bf090u: goto label_2bf090;
        case 0x2bf094u: goto label_2bf094;
        case 0x2bf098u: goto label_2bf098;
        case 0x2bf09cu: goto label_2bf09c;
        case 0x2bf0a0u: goto label_2bf0a0;
        case 0x2bf0a4u: goto label_2bf0a4;
        case 0x2bf0a8u: goto label_2bf0a8;
        case 0x2bf0acu: goto label_2bf0ac;
        case 0x2bf0b0u: goto label_2bf0b0;
        case 0x2bf0b4u: goto label_2bf0b4;
        case 0x2bf0b8u: goto label_2bf0b8;
        case 0x2bf0bcu: goto label_2bf0bc;
        case 0x2bf0c0u: goto label_2bf0c0;
        case 0x2bf0c4u: goto label_2bf0c4;
        case 0x2bf0c8u: goto label_2bf0c8;
        case 0x2bf0ccu: goto label_2bf0cc;
        case 0x2bf0d0u: goto label_2bf0d0;
        case 0x2bf0d4u: goto label_2bf0d4;
        case 0x2bf0d8u: goto label_2bf0d8;
        case 0x2bf0dcu: goto label_2bf0dc;
        case 0x2bf0e0u: goto label_2bf0e0;
        case 0x2bf0e4u: goto label_2bf0e4;
        case 0x2bf0e8u: goto label_2bf0e8;
        case 0x2bf0ecu: goto label_2bf0ec;
        case 0x2bf0f0u: goto label_2bf0f0;
        case 0x2bf0f4u: goto label_2bf0f4;
        case 0x2bf0f8u: goto label_2bf0f8;
        case 0x2bf0fcu: goto label_2bf0fc;
        case 0x2bf100u: goto label_2bf100;
        case 0x2bf104u: goto label_2bf104;
        case 0x2bf108u: goto label_2bf108;
        case 0x2bf10cu: goto label_2bf10c;
        case 0x2bf110u: goto label_2bf110;
        case 0x2bf114u: goto label_2bf114;
        case 0x2bf118u: goto label_2bf118;
        case 0x2bf11cu: goto label_2bf11c;
        case 0x2bf120u: goto label_2bf120;
        case 0x2bf124u: goto label_2bf124;
        case 0x2bf128u: goto label_2bf128;
        case 0x2bf12cu: goto label_2bf12c;
        case 0x2bf130u: goto label_2bf130;
        case 0x2bf134u: goto label_2bf134;
        case 0x2bf138u: goto label_2bf138;
        case 0x2bf13cu: goto label_2bf13c;
        case 0x2bf140u: goto label_2bf140;
        case 0x2bf144u: goto label_2bf144;
        case 0x2bf148u: goto label_2bf148;
        case 0x2bf14cu: goto label_2bf14c;
        case 0x2bf150u: goto label_2bf150;
        case 0x2bf154u: goto label_2bf154;
        case 0x2bf158u: goto label_2bf158;
        case 0x2bf15cu: goto label_2bf15c;
        case 0x2bf160u: goto label_2bf160;
        case 0x2bf164u: goto label_2bf164;
        case 0x2bf168u: goto label_2bf168;
        case 0x2bf16cu: goto label_2bf16c;
        case 0x2bf170u: goto label_2bf170;
        case 0x2bf174u: goto label_2bf174;
        case 0x2bf178u: goto label_2bf178;
        case 0x2bf17cu: goto label_2bf17c;
        case 0x2bf180u: goto label_2bf180;
        case 0x2bf184u: goto label_2bf184;
        case 0x2bf188u: goto label_2bf188;
        case 0x2bf18cu: goto label_2bf18c;
        default: break;
    }

    ctx->pc = 0x2bef00u;

label_2bef00:
    // 0x2bef00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2bef04:
    // 0x2bef04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2bef04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2bef08:
    // 0x2bef08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2bef0c:
    // 0x2bef0c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2bef0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2bef10:
    // 0x2bef10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2bef14:
    // 0x2bef14: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2bef14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_2bef18:
    // 0x2bef18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bef1c:
    // 0x2bef1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bef20:
    // 0x2bef20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bef20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bef24:
    // 0x2bef24: 0xc0aeaf4  jal         func_2BABD0
label_2bef28:
    if (ctx->pc == 0x2BEF28u) {
        ctx->pc = 0x2BEF28u;
            // 0x2bef28: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2BEF2Cu;
        goto label_2bef2c;
    }
    ctx->pc = 0x2BEF24u;
    SET_GPR_U32(ctx, 31, 0x2BEF2Cu);
    ctx->pc = 0x2BEF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF24u;
            // 0x2bef28: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF2Cu; }
        if (ctx->pc != 0x2BEF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF2Cu; }
        if (ctx->pc != 0x2BEF2Cu) { return; }
    }
    ctx->pc = 0x2BEF2Cu;
label_2bef2c:
    // 0x2bef2c: 0xc0afd60  jal         func_2BF580
label_2bef30:
    if (ctx->pc == 0x2BEF30u) {
        ctx->pc = 0x2BEF30u;
            // 0x2bef30: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BEF34u;
        goto label_2bef34;
    }
    ctx->pc = 0x2BEF2Cu;
    SET_GPR_U32(ctx, 31, 0x2BEF34u);
    ctx->pc = 0x2BEF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF2Cu;
            // 0x2bef30: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF580u;
    if (runtime->hasFunction(0x2BF580u)) {
        auto targetFn = runtime->lookupFunction(0x2BF580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF34u; }
        if (ctx->pc != 0x2BEF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF580_0x2bf580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF34u; }
        if (ctx->pc != 0x2BEF34u) { return; }
    }
    ctx->pc = 0x2BEF34u;
label_2bef34:
    // 0x2bef34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bef34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bef38:
    // 0x2bef38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bef3c:
    // 0x2bef3c: 0x24631b30  addiu       $v1, $v1, 0x1B30
    ctx->pc = 0x2bef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6960));
label_2bef40:
    // 0x2bef40: 0x24421b68  addiu       $v0, $v0, 0x1B68
    ctx->pc = 0x2bef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7016));
label_2bef44:
    // 0x2bef44: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bef44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bef48:
    // 0x2bef48: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2bef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bef4c:
    // 0x2bef4c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bef50:
    // 0x2bef50: 0xc0afd58  jal         func_2BF560
label_2bef54:
    if (ctx->pc == 0x2BEF54u) {
        ctx->pc = 0x2BEF54u;
            // 0x2bef54: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x2BEF58u;
        goto label_2bef58;
    }
    ctx->pc = 0x2BEF50u;
    SET_GPR_U32(ctx, 31, 0x2BEF58u);
    ctx->pc = 0x2BEF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF50u;
            // 0x2bef54: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF560u;
    if (runtime->hasFunction(0x2BF560u)) {
        auto targetFn = runtime->lookupFunction(0x2BF560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF58u; }
        if (ctx->pc != 0x2BEF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF560_0x2bf560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF58u; }
        if (ctx->pc != 0x2BEF58u) { return; }
    }
    ctx->pc = 0x2BEF58u;
label_2bef58:
    // 0x2bef58: 0xc0afd58  jal         func_2BF560
label_2bef5c:
    if (ctx->pc == 0x2BEF5Cu) {
        ctx->pc = 0x2BEF5Cu;
            // 0x2bef5c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BEF60u;
        goto label_2bef60;
    }
    ctx->pc = 0x2BEF58u;
    SET_GPR_U32(ctx, 31, 0x2BEF60u);
    ctx->pc = 0x2BEF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF58u;
            // 0x2bef5c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF560u;
    if (runtime->hasFunction(0x2BF560u)) {
        auto targetFn = runtime->lookupFunction(0x2BF560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF60u; }
        if (ctx->pc != 0x2BEF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF560_0x2bf560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF60u; }
        if (ctx->pc != 0x2BEF60u) { return; }
    }
    ctx->pc = 0x2BEF60u;
label_2bef60:
    // 0x2bef60: 0xc0a8d10  jal         func_2A3440
label_2bef64:
    if (ctx->pc == 0x2BEF64u) {
        ctx->pc = 0x2BEF64u;
            // 0x2bef64: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2BEF68u;
        goto label_2bef68;
    }
    ctx->pc = 0x2BEF60u;
    SET_GPR_U32(ctx, 31, 0x2BEF68u);
    ctx->pc = 0x2BEF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF60u;
            // 0x2bef64: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3440u;
    if (runtime->hasFunction(0x2A3440u)) {
        auto targetFn = runtime->lookupFunction(0x2A3440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF68u; }
        if (ctx->pc != 0x2BEF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3440_0x2a3440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF68u; }
        if (ctx->pc != 0x2BEF68u) { return; }
    }
    ctx->pc = 0x2BEF68u;
label_2bef68:
    // 0x2bef68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bef68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bef6c:
    // 0x2bef6c: 0xc0aeac0  jal         func_2BAB00
label_2bef70:
    if (ctx->pc == 0x2BEF70u) {
        ctx->pc = 0x2BEF70u;
            // 0x2bef70: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x2BEF74u;
        goto label_2bef74;
    }
    ctx->pc = 0x2BEF6Cu;
    SET_GPR_U32(ctx, 31, 0x2BEF74u);
    ctx->pc = 0x2BEF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF6Cu;
            // 0x2bef70: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF74u; }
        if (ctx->pc != 0x2BEF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF74u; }
        if (ctx->pc != 0x2BEF74u) { return; }
    }
    ctx->pc = 0x2BEF74u;
label_2bef74:
    // 0x2bef74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bef74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bef78:
    // 0x2bef78: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_2bef7c:
    if (ctx->pc == 0x2BEF7Cu) {
        ctx->pc = 0x2BEF80u;
        goto label_2bef80;
    }
    ctx->pc = 0x2BEF78u;
    {
        const bool branch_taken_0x2bef78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bef78) {
            ctx->pc = 0x2BEFF8u;
            goto label_2beff8;
        }
    }
    ctx->pc = 0x2BEF80u;
label_2bef80:
    // 0x2bef80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2bef80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2bef84:
    // 0x2bef84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2bef84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2bef88:
    // 0x2bef88: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bef88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2bef8c:
    // 0x2bef8c: 0xc040138  jal         func_1004E0
label_2bef90:
    if (ctx->pc == 0x2BEF90u) {
        ctx->pc = 0x2BEF90u;
            // 0x2bef90: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2BEF94u;
        goto label_2bef94;
    }
    ctx->pc = 0x2BEF8Cu;
    SET_GPR_U32(ctx, 31, 0x2BEF94u);
    ctx->pc = 0x2BEF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF8Cu;
            // 0x2bef90: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF94u; }
        if (ctx->pc != 0x2BEF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF94u; }
        if (ctx->pc != 0x2BEF94u) { return; }
    }
    ctx->pc = 0x2BEF94u;
label_2bef94:
    // 0x2bef94: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bef94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bef98:
    // 0x2bef98: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bef98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2bef9c:
    // 0x2bef9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bef9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2befa0:
    // 0x2befa0: 0x24a5f410  addiu       $a1, $a1, -0xBF0
    ctx->pc = 0x2befa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964240));
label_2befa4:
    // 0x2befa4: 0x24c6f290  addiu       $a2, $a2, -0xD70
    ctx->pc = 0x2befa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963856));
label_2befa8:
    // 0x2befa8: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x2befa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2befac:
    // 0x2befac: 0xc040840  jal         func_102100
label_2befb0:
    if (ctx->pc == 0x2BEFB0u) {
        ctx->pc = 0x2BEFB0u;
            // 0x2befb0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFB4u;
        goto label_2befb4;
    }
    ctx->pc = 0x2BEFACu;
    SET_GPR_U32(ctx, 31, 0x2BEFB4u);
    ctx->pc = 0x2BEFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFACu;
            // 0x2befb0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFB4u; }
        if (ctx->pc != 0x2BEFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFB4u; }
        if (ctx->pc != 0x2BEFB4u) { return; }
    }
    ctx->pc = 0x2BEFB4u;
label_2befb4:
    // 0x2befb4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2befb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_2befb8:
    // 0x2befb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2befb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2befbc:
    // 0x2befbc: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2befbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2befc0:
    // 0x2befc0: 0xc0afca0  jal         func_2BF280
label_2befc4:
    if (ctx->pc == 0x2BEFC4u) {
        ctx->pc = 0x2BEFC4u;
            // 0x2befc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFC8u;
        goto label_2befc8;
    }
    ctx->pc = 0x2BEFC0u;
    SET_GPR_U32(ctx, 31, 0x2BEFC8u);
    ctx->pc = 0x2BEFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFC0u;
            // 0x2befc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF280u;
    if (runtime->hasFunction(0x2BF280u)) {
        auto targetFn = runtime->lookupFunction(0x2BF280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFC8u; }
        if (ctx->pc != 0x2BEFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF280_0x2bf280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFC8u; }
        if (ctx->pc != 0x2BEFC8u) { return; }
    }
    ctx->pc = 0x2BEFC8u;
label_2befc8:
    // 0x2befc8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2befc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2befcc:
    // 0x2befcc: 0xc0afca0  jal         func_2BF280
label_2befd0:
    if (ctx->pc == 0x2BEFD0u) {
        ctx->pc = 0x2BEFD0u;
            // 0x2befd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFD4u;
        goto label_2befd4;
    }
    ctx->pc = 0x2BEFCCu;
    SET_GPR_U32(ctx, 31, 0x2BEFD4u);
    ctx->pc = 0x2BEFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFCCu;
            // 0x2befd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF280u;
    if (runtime->hasFunction(0x2BF280u)) {
        auto targetFn = runtime->lookupFunction(0x2BF280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFD4u; }
        if (ctx->pc != 0x2BEFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF280_0x2bf280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFD4u; }
        if (ctx->pc != 0x2BEFD4u) { return; }
    }
    ctx->pc = 0x2BEFD4u;
label_2befd4:
    // 0x2befd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2befd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2befd8:
    // 0x2befd8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2befd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2befdc:
    // 0x2befdc: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2befdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2befe0:
    // 0x2befe0: 0xc0afc98  jal         func_2BF260
label_2befe4:
    if (ctx->pc == 0x2BEFE4u) {
        ctx->pc = 0x2BEFE4u;
            // 0x2befe4: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x2BEFE8u;
        goto label_2befe8;
    }
    ctx->pc = 0x2BEFE0u;
    SET_GPR_U32(ctx, 31, 0x2BEFE8u);
    ctx->pc = 0x2BEFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFE0u;
            // 0x2befe4: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF260u;
    if (runtime->hasFunction(0x2BF260u)) {
        auto targetFn = runtime->lookupFunction(0x2BF260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFE8u; }
        if (ctx->pc != 0x2BEFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF260_0x2bf260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFE8u; }
        if (ctx->pc != 0x2BEFE8u) { return; }
    }
    ctx->pc = 0x2BEFE8u;
label_2befe8:
    // 0x2befe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2befe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2befec:
    // 0x2befec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2befecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2beff0:
    // 0x2beff0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2beff4:
    if (ctx->pc == 0x2BEFF4u) {
        ctx->pc = 0x2BEFF4u;
            // 0x2beff4: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->pc = 0x2BEFF8u;
        goto label_2beff8;
    }
    ctx->pc = 0x2BEFF0u;
    {
        const bool branch_taken_0x2beff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFF0u;
            // 0x2beff4: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beff0) {
            ctx->pc = 0x2BEFD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2befd8;
        }
    }
    ctx->pc = 0x2BEFF8u;
label_2beff8:
    // 0x2beff8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2beff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2beffc:
    // 0x2beffc: 0x24421ae0  addiu       $v0, $v0, 0x1AE0
    ctx->pc = 0x2beffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
label_2bf000:
    // 0x2bf000: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bf000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bf004:
    // 0x2bf004: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf008:
    // 0x2bf008: 0x24421b18  addiu       $v0, $v0, 0x1B18
    ctx->pc = 0x2bf008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6936));
label_2bf00c:
    // 0x2bf00c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bf00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bf010:
    // 0x2bf010: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bf010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf014:
    // 0x2bf014: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bf014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bf018:
    // 0x2bf018: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bf018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bf01c:
    // 0x2bf01c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bf01cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bf020:
    // 0x2bf020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf024:
    // 0x2bf024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf028:
    // 0x2bf028: 0x3e00008  jr          $ra
label_2bf02c:
    if (ctx->pc == 0x2BF02Cu) {
        ctx->pc = 0x2BF02Cu;
            // 0x2bf02c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2BF030u;
        goto label_2bf030;
    }
    ctx->pc = 0x2BF028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF028u;
            // 0x2bf02c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF030u;
label_2bf030:
    // 0x2bf030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bf030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bf034:
    // 0x2bf034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bf034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bf038:
    // 0x2bf038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bf038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bf03c:
    // 0x2bf03c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bf040:
    // 0x2bf040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bf040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf044:
    // 0x2bf044: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2bf048:
    if (ctx->pc == 0x2BF048u) {
        ctx->pc = 0x2BF048u;
            // 0x2bf048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF04Cu;
        goto label_2bf04c;
    }
    ctx->pc = 0x2BF044u;
    {
        const bool branch_taken_0x2bf044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF044u;
            // 0x2bf048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf044) {
            ctx->pc = 0x2BF178u;
            goto label_2bf178;
        }
    }
    ctx->pc = 0x2BF04Cu;
label_2bf04c:
    // 0x2bf04c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bf04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bf050:
    // 0x2bf050: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf054:
    // 0x2bf054: 0x24631b30  addiu       $v1, $v1, 0x1B30
    ctx->pc = 0x2bf054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6960));
label_2bf058:
    // 0x2bf058: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bf058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bf05c:
    // 0x2bf05c: 0x24421b68  addiu       $v0, $v0, 0x1B68
    ctx->pc = 0x2bf05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7016));
label_2bf060:
    // 0x2bf060: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bf060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bf064:
    // 0x2bf064: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bf064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bf068:
    // 0x2bf068: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2bf068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2bf06c:
    // 0x2bf06c: 0xc0407c0  jal         func_101F00
label_2bf070:
    if (ctx->pc == 0x2BF070u) {
        ctx->pc = 0x2BF070u;
            // 0x2bf070: 0x24a5f290  addiu       $a1, $a1, -0xD70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963856));
        ctx->pc = 0x2BF074u;
        goto label_2bf074;
    }
    ctx->pc = 0x2BF06Cu;
    SET_GPR_U32(ctx, 31, 0x2BF074u);
    ctx->pc = 0x2BF070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF06Cu;
            // 0x2bf070: 0x24a5f290  addiu       $a1, $a1, -0xD70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF074u; }
        if (ctx->pc != 0x2BF074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF074u; }
        if (ctx->pc != 0x2BF074u) { return; }
    }
    ctx->pc = 0x2BF074u;
label_2bf074:
    // 0x2bf074: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2bf074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2bf078:
    // 0x2bf078: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2bf07c:
    if (ctx->pc == 0x2BF07Cu) {
        ctx->pc = 0x2BF07Cu;
            // 0x2bf07c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BF080u;
        goto label_2bf080;
    }
    ctx->pc = 0x2BF078u;
    {
        const bool branch_taken_0x2bf078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf078) {
            ctx->pc = 0x2BF07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF078u;
            // 0x2bf07c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF08Cu;
            goto label_2bf08c;
        }
    }
    ctx->pc = 0x2BF080u;
label_2bf080:
    // 0x2bf080: 0xc07507c  jal         func_1D41F0
label_2bf084:
    if (ctx->pc == 0x2BF084u) {
        ctx->pc = 0x2BF084u;
            // 0x2bf084: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2BF088u;
        goto label_2bf088;
    }
    ctx->pc = 0x2BF080u;
    SET_GPR_U32(ctx, 31, 0x2BF088u);
    ctx->pc = 0x2BF084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF080u;
            // 0x2bf084: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF088u; }
        if (ctx->pc != 0x2BF088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF088u; }
        if (ctx->pc != 0x2BF088u) { return; }
    }
    ctx->pc = 0x2BF088u;
label_2bf088:
    // 0x2bf088: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2bf088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bf08c:
    // 0x2bf08c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bf090:
    if (ctx->pc == 0x2BF090u) {
        ctx->pc = 0x2BF090u;
            // 0x2bf090: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BF094u;
        goto label_2bf094;
    }
    ctx->pc = 0x2BF08Cu;
    {
        const bool branch_taken_0x2bf08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf08c) {
            ctx->pc = 0x2BF090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF08Cu;
            // 0x2bf090: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF0BCu;
            goto label_2bf0bc;
        }
    }
    ctx->pc = 0x2BF094u;
label_2bf094:
    // 0x2bf094: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bf098:
    if (ctx->pc == 0x2BF098u) {
        ctx->pc = 0x2BF09Cu;
        goto label_2bf09c;
    }
    ctx->pc = 0x2BF094u;
    {
        const bool branch_taken_0x2bf094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf094) {
            ctx->pc = 0x2BF0B8u;
            goto label_2bf0b8;
        }
    }
    ctx->pc = 0x2BF09Cu;
label_2bf09c:
    // 0x2bf09c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bf0a0:
    if (ctx->pc == 0x2BF0A0u) {
        ctx->pc = 0x2BF0A4u;
        goto label_2bf0a4;
    }
    ctx->pc = 0x2BF09Cu;
    {
        const bool branch_taken_0x2bf09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf09c) {
            ctx->pc = 0x2BF0B8u;
            goto label_2bf0b8;
        }
    }
    ctx->pc = 0x2BF0A4u;
label_2bf0a4:
    // 0x2bf0a4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2bf0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2bf0a8:
    // 0x2bf0a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bf0ac:
    if (ctx->pc == 0x2BF0ACu) {
        ctx->pc = 0x2BF0B0u;
        goto label_2bf0b0;
    }
    ctx->pc = 0x2BF0A8u;
    {
        const bool branch_taken_0x2bf0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf0a8) {
            ctx->pc = 0x2BF0B8u;
            goto label_2bf0b8;
        }
    }
    ctx->pc = 0x2BF0B0u;
label_2bf0b0:
    // 0x2bf0b0: 0xc0400a8  jal         func_1002A0
label_2bf0b4:
    if (ctx->pc == 0x2BF0B4u) {
        ctx->pc = 0x2BF0B8u;
        goto label_2bf0b8;
    }
    ctx->pc = 0x2BF0B0u;
    SET_GPR_U32(ctx, 31, 0x2BF0B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0B8u; }
        if (ctx->pc != 0x2BF0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0B8u; }
        if (ctx->pc != 0x2BF0B8u) { return; }
    }
    ctx->pc = 0x2BF0B8u;
label_2bf0b8:
    // 0x2bf0b8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2bf0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bf0bc:
    // 0x2bf0bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bf0c0:
    if (ctx->pc == 0x2BF0C0u) {
        ctx->pc = 0x2BF0C0u;
            // 0x2bf0c0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BF0C4u;
        goto label_2bf0c4;
    }
    ctx->pc = 0x2BF0BCu;
    {
        const bool branch_taken_0x2bf0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf0bc) {
            ctx->pc = 0x2BF0C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF0BCu;
            // 0x2bf0c0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF0ECu;
            goto label_2bf0ec;
        }
    }
    ctx->pc = 0x2BF0C4u;
label_2bf0c4:
    // 0x2bf0c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bf0c8:
    if (ctx->pc == 0x2BF0C8u) {
        ctx->pc = 0x2BF0CCu;
        goto label_2bf0cc;
    }
    ctx->pc = 0x2BF0C4u;
    {
        const bool branch_taken_0x2bf0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf0c4) {
            ctx->pc = 0x2BF0E8u;
            goto label_2bf0e8;
        }
    }
    ctx->pc = 0x2BF0CCu;
label_2bf0cc:
    // 0x2bf0cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bf0d0:
    if (ctx->pc == 0x2BF0D0u) {
        ctx->pc = 0x2BF0D4u;
        goto label_2bf0d4;
    }
    ctx->pc = 0x2BF0CCu;
    {
        const bool branch_taken_0x2bf0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf0cc) {
            ctx->pc = 0x2BF0E8u;
            goto label_2bf0e8;
        }
    }
    ctx->pc = 0x2BF0D4u;
label_2bf0d4:
    // 0x2bf0d4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2bf0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2bf0d8:
    // 0x2bf0d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bf0dc:
    if (ctx->pc == 0x2BF0DCu) {
        ctx->pc = 0x2BF0E0u;
        goto label_2bf0e0;
    }
    ctx->pc = 0x2BF0D8u;
    {
        const bool branch_taken_0x2bf0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf0d8) {
            ctx->pc = 0x2BF0E8u;
            goto label_2bf0e8;
        }
    }
    ctx->pc = 0x2BF0E0u;
label_2bf0e0:
    // 0x2bf0e0: 0xc0400a8  jal         func_1002A0
label_2bf0e4:
    if (ctx->pc == 0x2BF0E4u) {
        ctx->pc = 0x2BF0E8u;
        goto label_2bf0e8;
    }
    ctx->pc = 0x2BF0E0u;
    SET_GPR_U32(ctx, 31, 0x2BF0E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0E8u; }
        if (ctx->pc != 0x2BF0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0E8u; }
        if (ctx->pc != 0x2BF0E8u) { return; }
    }
    ctx->pc = 0x2BF0E8u;
label_2bf0e8:
    // 0x2bf0e8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2bf0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bf0ec:
    // 0x2bf0ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bf0f0:
    if (ctx->pc == 0x2BF0F0u) {
        ctx->pc = 0x2BF0F4u;
        goto label_2bf0f4;
    }
    ctx->pc = 0x2BF0ECu;
    {
        const bool branch_taken_0x2bf0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf0ec) {
            ctx->pc = 0x2BF108u;
            goto label_2bf108;
        }
    }
    ctx->pc = 0x2BF0F4u;
label_2bf0f4:
    // 0x2bf0f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bf0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bf0f8:
    // 0x2bf0f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bf0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2bf0fc:
    // 0x2bf0fc: 0x24631ad0  addiu       $v1, $v1, 0x1AD0
    ctx->pc = 0x2bf0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6864));
label_2bf100:
    // 0x2bf100: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2bf100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2bf104:
    // 0x2bf104: 0xac400d30  sw          $zero, 0xD30($v0)
    ctx->pc = 0x2bf104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3376), GPR_U32(ctx, 0));
label_2bf108:
    // 0x2bf108: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2bf10c:
    if (ctx->pc == 0x2BF10Cu) {
        ctx->pc = 0x2BF10Cu;
            // 0x2bf10c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BF110u;
        goto label_2bf110;
    }
    ctx->pc = 0x2BF108u;
    {
        const bool branch_taken_0x2bf108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf108) {
            ctx->pc = 0x2BF10Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF108u;
            // 0x2bf10c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF164u;
            goto label_2bf164;
        }
    }
    ctx->pc = 0x2BF110u;
label_2bf110:
    // 0x2bf110: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf114:
    // 0x2bf114: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bf114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2bf118:
    // 0x2bf118: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bf118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bf11c:
    // 0x2bf11c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bf11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2bf120:
    // 0x2bf120: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bf124:
    if (ctx->pc == 0x2BF124u) {
        ctx->pc = 0x2BF124u;
            // 0x2bf124: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BF128u;
        goto label_2bf128;
    }
    ctx->pc = 0x2BF120u;
    {
        const bool branch_taken_0x2bf120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf120) {
            ctx->pc = 0x2BF124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF120u;
            // 0x2bf124: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF13Cu;
            goto label_2bf13c;
        }
    }
    ctx->pc = 0x2BF128u;
label_2bf128:
    // 0x2bf128: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf12c:
    // 0x2bf12c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bf12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bf130:
    // 0x2bf130: 0x320f809  jalr        $t9
label_2bf134:
    if (ctx->pc == 0x2BF134u) {
        ctx->pc = 0x2BF134u;
            // 0x2bf134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF138u;
        goto label_2bf138;
    }
    ctx->pc = 0x2BF130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF138u);
        ctx->pc = 0x2BF134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF130u;
            // 0x2bf134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF138u; }
            if (ctx->pc != 0x2BF138u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF138u;
label_2bf138:
    // 0x2bf138: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2bf138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2bf13c:
    // 0x2bf13c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bf140:
    if (ctx->pc == 0x2BF140u) {
        ctx->pc = 0x2BF140u;
            // 0x2bf140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF144u;
        goto label_2bf144;
    }
    ctx->pc = 0x2BF13Cu;
    {
        const bool branch_taken_0x2bf13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf13c) {
            ctx->pc = 0x2BF140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF13Cu;
            // 0x2bf140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF158u;
            goto label_2bf158;
        }
    }
    ctx->pc = 0x2BF144u;
label_2bf144:
    // 0x2bf144: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf148:
    // 0x2bf148: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bf148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bf14c:
    // 0x2bf14c: 0x320f809  jalr        $t9
label_2bf150:
    if (ctx->pc == 0x2BF150u) {
        ctx->pc = 0x2BF150u;
            // 0x2bf150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF154u;
        goto label_2bf154;
    }
    ctx->pc = 0x2BF14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF154u);
        ctx->pc = 0x2BF150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF14Cu;
            // 0x2bf150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF154u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF154u; }
            if (ctx->pc != 0x2BF154u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF154u;
label_2bf154:
    // 0x2bf154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf158:
    // 0x2bf158: 0xc075bf8  jal         func_1D6FE0
label_2bf15c:
    if (ctx->pc == 0x2BF15Cu) {
        ctx->pc = 0x2BF15Cu;
            // 0x2bf15c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF160u;
        goto label_2bf160;
    }
    ctx->pc = 0x2BF158u;
    SET_GPR_U32(ctx, 31, 0x2BF160u);
    ctx->pc = 0x2BF15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF158u;
            // 0x2bf15c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF160u; }
        if (ctx->pc != 0x2BF160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF160u; }
        if (ctx->pc != 0x2BF160u) { return; }
    }
    ctx->pc = 0x2BF160u;
label_2bf160:
    // 0x2bf160: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bf160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bf164:
    // 0x2bf164: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bf164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bf168:
    // 0x2bf168: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bf16c:
    if (ctx->pc == 0x2BF16Cu) {
        ctx->pc = 0x2BF16Cu;
            // 0x2bf16c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF170u;
        goto label_2bf170;
    }
    ctx->pc = 0x2BF168u;
    {
        const bool branch_taken_0x2bf168 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bf168) {
            ctx->pc = 0x2BF16Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF168u;
            // 0x2bf16c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF17Cu;
            goto label_2bf17c;
        }
    }
    ctx->pc = 0x2BF170u;
label_2bf170:
    // 0x2bf170: 0xc0400a8  jal         func_1002A0
label_2bf174:
    if (ctx->pc == 0x2BF174u) {
        ctx->pc = 0x2BF174u;
            // 0x2bf174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF178u;
        goto label_2bf178;
    }
    ctx->pc = 0x2BF170u;
    SET_GPR_U32(ctx, 31, 0x2BF178u);
    ctx->pc = 0x2BF174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF170u;
            // 0x2bf174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF178u; }
        if (ctx->pc != 0x2BF178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF178u; }
        if (ctx->pc != 0x2BF178u) { return; }
    }
    ctx->pc = 0x2BF178u;
label_2bf178:
    // 0x2bf178: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bf178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf17c:
    // 0x2bf17c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bf17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bf180:
    // 0x2bf180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf184:
    // 0x2bf184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf188:
    // 0x2bf188: 0x3e00008  jr          $ra
label_2bf18c:
    if (ctx->pc == 0x2BF18Cu) {
        ctx->pc = 0x2BF18Cu;
            // 0x2bf18c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BF190u;
        goto label_fallthrough_0x2bf188;
    }
    ctx->pc = 0x2BF188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF188u;
            // 0x2bf18c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bf188:
    ctx->pc = 0x2BF190u;
}
