#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00538050
// Address: 0x538050 - 0x538310
void sub_00538050_0x538050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00538050_0x538050");
#endif

    switch (ctx->pc) {
        case 0x538050u: goto label_538050;
        case 0x538054u: goto label_538054;
        case 0x538058u: goto label_538058;
        case 0x53805cu: goto label_53805c;
        case 0x538060u: goto label_538060;
        case 0x538064u: goto label_538064;
        case 0x538068u: goto label_538068;
        case 0x53806cu: goto label_53806c;
        case 0x538070u: goto label_538070;
        case 0x538074u: goto label_538074;
        case 0x538078u: goto label_538078;
        case 0x53807cu: goto label_53807c;
        case 0x538080u: goto label_538080;
        case 0x538084u: goto label_538084;
        case 0x538088u: goto label_538088;
        case 0x53808cu: goto label_53808c;
        case 0x538090u: goto label_538090;
        case 0x538094u: goto label_538094;
        case 0x538098u: goto label_538098;
        case 0x53809cu: goto label_53809c;
        case 0x5380a0u: goto label_5380a0;
        case 0x5380a4u: goto label_5380a4;
        case 0x5380a8u: goto label_5380a8;
        case 0x5380acu: goto label_5380ac;
        case 0x5380b0u: goto label_5380b0;
        case 0x5380b4u: goto label_5380b4;
        case 0x5380b8u: goto label_5380b8;
        case 0x5380bcu: goto label_5380bc;
        case 0x5380c0u: goto label_5380c0;
        case 0x5380c4u: goto label_5380c4;
        case 0x5380c8u: goto label_5380c8;
        case 0x5380ccu: goto label_5380cc;
        case 0x5380d0u: goto label_5380d0;
        case 0x5380d4u: goto label_5380d4;
        case 0x5380d8u: goto label_5380d8;
        case 0x5380dcu: goto label_5380dc;
        case 0x5380e0u: goto label_5380e0;
        case 0x5380e4u: goto label_5380e4;
        case 0x5380e8u: goto label_5380e8;
        case 0x5380ecu: goto label_5380ec;
        case 0x5380f0u: goto label_5380f0;
        case 0x5380f4u: goto label_5380f4;
        case 0x5380f8u: goto label_5380f8;
        case 0x5380fcu: goto label_5380fc;
        case 0x538100u: goto label_538100;
        case 0x538104u: goto label_538104;
        case 0x538108u: goto label_538108;
        case 0x53810cu: goto label_53810c;
        case 0x538110u: goto label_538110;
        case 0x538114u: goto label_538114;
        case 0x538118u: goto label_538118;
        case 0x53811cu: goto label_53811c;
        case 0x538120u: goto label_538120;
        case 0x538124u: goto label_538124;
        case 0x538128u: goto label_538128;
        case 0x53812cu: goto label_53812c;
        case 0x538130u: goto label_538130;
        case 0x538134u: goto label_538134;
        case 0x538138u: goto label_538138;
        case 0x53813cu: goto label_53813c;
        case 0x538140u: goto label_538140;
        case 0x538144u: goto label_538144;
        case 0x538148u: goto label_538148;
        case 0x53814cu: goto label_53814c;
        case 0x538150u: goto label_538150;
        case 0x538154u: goto label_538154;
        case 0x538158u: goto label_538158;
        case 0x53815cu: goto label_53815c;
        case 0x538160u: goto label_538160;
        case 0x538164u: goto label_538164;
        case 0x538168u: goto label_538168;
        case 0x53816cu: goto label_53816c;
        case 0x538170u: goto label_538170;
        case 0x538174u: goto label_538174;
        case 0x538178u: goto label_538178;
        case 0x53817cu: goto label_53817c;
        case 0x538180u: goto label_538180;
        case 0x538184u: goto label_538184;
        case 0x538188u: goto label_538188;
        case 0x53818cu: goto label_53818c;
        case 0x538190u: goto label_538190;
        case 0x538194u: goto label_538194;
        case 0x538198u: goto label_538198;
        case 0x53819cu: goto label_53819c;
        case 0x5381a0u: goto label_5381a0;
        case 0x5381a4u: goto label_5381a4;
        case 0x5381a8u: goto label_5381a8;
        case 0x5381acu: goto label_5381ac;
        case 0x5381b0u: goto label_5381b0;
        case 0x5381b4u: goto label_5381b4;
        case 0x5381b8u: goto label_5381b8;
        case 0x5381bcu: goto label_5381bc;
        case 0x5381c0u: goto label_5381c0;
        case 0x5381c4u: goto label_5381c4;
        case 0x5381c8u: goto label_5381c8;
        case 0x5381ccu: goto label_5381cc;
        case 0x5381d0u: goto label_5381d0;
        case 0x5381d4u: goto label_5381d4;
        case 0x5381d8u: goto label_5381d8;
        case 0x5381dcu: goto label_5381dc;
        case 0x5381e0u: goto label_5381e0;
        case 0x5381e4u: goto label_5381e4;
        case 0x5381e8u: goto label_5381e8;
        case 0x5381ecu: goto label_5381ec;
        case 0x5381f0u: goto label_5381f0;
        case 0x5381f4u: goto label_5381f4;
        case 0x5381f8u: goto label_5381f8;
        case 0x5381fcu: goto label_5381fc;
        case 0x538200u: goto label_538200;
        case 0x538204u: goto label_538204;
        case 0x538208u: goto label_538208;
        case 0x53820cu: goto label_53820c;
        case 0x538210u: goto label_538210;
        case 0x538214u: goto label_538214;
        case 0x538218u: goto label_538218;
        case 0x53821cu: goto label_53821c;
        case 0x538220u: goto label_538220;
        case 0x538224u: goto label_538224;
        case 0x538228u: goto label_538228;
        case 0x53822cu: goto label_53822c;
        case 0x538230u: goto label_538230;
        case 0x538234u: goto label_538234;
        case 0x538238u: goto label_538238;
        case 0x53823cu: goto label_53823c;
        case 0x538240u: goto label_538240;
        case 0x538244u: goto label_538244;
        case 0x538248u: goto label_538248;
        case 0x53824cu: goto label_53824c;
        case 0x538250u: goto label_538250;
        case 0x538254u: goto label_538254;
        case 0x538258u: goto label_538258;
        case 0x53825cu: goto label_53825c;
        case 0x538260u: goto label_538260;
        case 0x538264u: goto label_538264;
        case 0x538268u: goto label_538268;
        case 0x53826cu: goto label_53826c;
        case 0x538270u: goto label_538270;
        case 0x538274u: goto label_538274;
        case 0x538278u: goto label_538278;
        case 0x53827cu: goto label_53827c;
        case 0x538280u: goto label_538280;
        case 0x538284u: goto label_538284;
        case 0x538288u: goto label_538288;
        case 0x53828cu: goto label_53828c;
        case 0x538290u: goto label_538290;
        case 0x538294u: goto label_538294;
        case 0x538298u: goto label_538298;
        case 0x53829cu: goto label_53829c;
        case 0x5382a0u: goto label_5382a0;
        case 0x5382a4u: goto label_5382a4;
        case 0x5382a8u: goto label_5382a8;
        case 0x5382acu: goto label_5382ac;
        case 0x5382b0u: goto label_5382b0;
        case 0x5382b4u: goto label_5382b4;
        case 0x5382b8u: goto label_5382b8;
        case 0x5382bcu: goto label_5382bc;
        case 0x5382c0u: goto label_5382c0;
        case 0x5382c4u: goto label_5382c4;
        case 0x5382c8u: goto label_5382c8;
        case 0x5382ccu: goto label_5382cc;
        case 0x5382d0u: goto label_5382d0;
        case 0x5382d4u: goto label_5382d4;
        case 0x5382d8u: goto label_5382d8;
        case 0x5382dcu: goto label_5382dc;
        case 0x5382e0u: goto label_5382e0;
        case 0x5382e4u: goto label_5382e4;
        case 0x5382e8u: goto label_5382e8;
        case 0x5382ecu: goto label_5382ec;
        case 0x5382f0u: goto label_5382f0;
        case 0x5382f4u: goto label_5382f4;
        case 0x5382f8u: goto label_5382f8;
        case 0x5382fcu: goto label_5382fc;
        case 0x538300u: goto label_538300;
        case 0x538304u: goto label_538304;
        case 0x538308u: goto label_538308;
        case 0x53830cu: goto label_53830c;
        default: break;
    }

    ctx->pc = 0x538050u;

label_538050:
    // 0x538050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x538050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_538054:
    // 0x538054: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x538054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_538058:
    // 0x538058: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x538058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_53805c:
    // 0x53805c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x53805cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_538060:
    // 0x538060: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x538060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_538064:
    // 0x538064: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x538064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_538068:
    // 0x538068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x538068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53806c:
    // 0x53806c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53806cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_538070:
    // 0x538070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x538070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_538074:
    // 0x538074: 0xc0aeaf4  jal         func_2BABD0
label_538078:
    if (ctx->pc == 0x538078u) {
        ctx->pc = 0x538078u;
            // 0x538078: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x53807Cu;
        goto label_53807c;
    }
    ctx->pc = 0x538074u;
    SET_GPR_U32(ctx, 31, 0x53807Cu);
    ctx->pc = 0x538078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538074u;
            // 0x538078: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53807Cu; }
        if (ctx->pc != 0x53807Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53807Cu; }
        if (ctx->pc != 0x53807Cu) { return; }
    }
    ctx->pc = 0x53807Cu;
label_53807c:
    // 0x53807c: 0xc14e134  jal         func_5384D0
label_538080:
    if (ctx->pc == 0x538080u) {
        ctx->pc = 0x538080u;
            // 0x538080: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x538084u;
        goto label_538084;
    }
    ctx->pc = 0x53807Cu;
    SET_GPR_U32(ctx, 31, 0x538084u);
    ctx->pc = 0x538080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53807Cu;
            // 0x538080: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5384D0u;
    if (runtime->hasFunction(0x5384D0u)) {
        auto targetFn = runtime->lookupFunction(0x5384D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538084u; }
        if (ctx->pc != 0x538084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005384D0_0x5384d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538084u; }
        if (ctx->pc != 0x538084u) { return; }
    }
    ctx->pc = 0x538084u;
label_538084:
    // 0x538084: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x538084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_538088:
    // 0x538088: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x538088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53808c:
    // 0x53808c: 0x24637020  addiu       $v1, $v1, 0x7020
    ctx->pc = 0x53808cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28704));
label_538090:
    // 0x538090: 0x24427058  addiu       $v0, $v0, 0x7058
    ctx->pc = 0x538090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28760));
label_538094:
    // 0x538094: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x538094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_538098:
    // 0x538098: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x538098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_53809c:
    // 0x53809c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x53809cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_5380a0:
    // 0x5380a0: 0xc14e12c  jal         func_5384B0
label_5380a4:
    if (ctx->pc == 0x5380A4u) {
        ctx->pc = 0x5380A4u;
            // 0x5380a4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x5380A8u;
        goto label_5380a8;
    }
    ctx->pc = 0x5380A0u;
    SET_GPR_U32(ctx, 31, 0x5380A8u);
    ctx->pc = 0x5380A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5380A0u;
            // 0x5380a4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5384B0u;
    if (runtime->hasFunction(0x5384B0u)) {
        auto targetFn = runtime->lookupFunction(0x5384B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5380A8u; }
        if (ctx->pc != 0x5380A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005384B0_0x5384b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5380A8u; }
        if (ctx->pc != 0x5380A8u) { return; }
    }
    ctx->pc = 0x5380A8u;
label_5380a8:
    // 0x5380a8: 0xc14e12c  jal         func_5384B0
label_5380ac:
    if (ctx->pc == 0x5380ACu) {
        ctx->pc = 0x5380ACu;
            // 0x5380ac: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x5380B0u;
        goto label_5380b0;
    }
    ctx->pc = 0x5380A8u;
    SET_GPR_U32(ctx, 31, 0x5380B0u);
    ctx->pc = 0x5380ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5380A8u;
            // 0x5380ac: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5384B0u;
    if (runtime->hasFunction(0x5384B0u)) {
        auto targetFn = runtime->lookupFunction(0x5384B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5380B0u; }
        if (ctx->pc != 0x5380B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005384B0_0x5384b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5380B0u; }
        if (ctx->pc != 0x5380B0u) { return; }
    }
    ctx->pc = 0x5380B0u;
label_5380b0:
    // 0x5380b0: 0xc14e124  jal         func_538490
label_5380b4:
    if (ctx->pc == 0x5380B4u) {
        ctx->pc = 0x5380B4u;
            // 0x5380b4: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x5380B8u;
        goto label_5380b8;
    }
    ctx->pc = 0x5380B0u;
    SET_GPR_U32(ctx, 31, 0x5380B8u);
    ctx->pc = 0x5380B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5380B0u;
            // 0x5380b4: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x538490u;
    if (runtime->hasFunction(0x538490u)) {
        auto targetFn = runtime->lookupFunction(0x538490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5380B8u; }
        if (ctx->pc != 0x5380B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00538490_0x538490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5380B8u; }
        if (ctx->pc != 0x5380B8u) { return; }
    }
    ctx->pc = 0x5380B8u;
label_5380b8:
    // 0x5380b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5380b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5380bc:
    // 0x5380bc: 0xc0aeac0  jal         func_2BAB00
label_5380c0:
    if (ctx->pc == 0x5380C0u) {
        ctx->pc = 0x5380C0u;
            // 0x5380c0: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x5380C4u;
        goto label_5380c4;
    }
    ctx->pc = 0x5380BCu;
    SET_GPR_U32(ctx, 31, 0x5380C4u);
    ctx->pc = 0x5380C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5380BCu;
            // 0x5380c0: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5380C4u; }
        if (ctx->pc != 0x5380C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5380C4u; }
        if (ctx->pc != 0x5380C4u) { return; }
    }
    ctx->pc = 0x5380C4u;
label_5380c4:
    // 0x5380c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x5380c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5380c8:
    // 0x5380c8: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_5380cc:
    if (ctx->pc == 0x5380CCu) {
        ctx->pc = 0x5380D0u;
        goto label_5380d0;
    }
    ctx->pc = 0x5380C8u;
    {
        const bool branch_taken_0x5380c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5380c8) {
            ctx->pc = 0x538150u;
            goto label_538150;
        }
    }
    ctx->pc = 0x5380D0u;
label_5380d0:
    // 0x5380d0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x5380d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_5380d4:
    // 0x5380d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x5380d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_5380d8:
    // 0x5380d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5380d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5380dc:
    // 0x5380dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x5380dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_5380e0:
    // 0x5380e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x5380e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_5380e4:
    // 0x5380e4: 0xc040138  jal         func_1004E0
label_5380e8:
    if (ctx->pc == 0x5380E8u) {
        ctx->pc = 0x5380E8u;
            // 0x5380e8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x5380ECu;
        goto label_5380ec;
    }
    ctx->pc = 0x5380E4u;
    SET_GPR_U32(ctx, 31, 0x5380ECu);
    ctx->pc = 0x5380E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5380E4u;
            // 0x5380e8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5380ECu; }
        if (ctx->pc != 0x5380ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5380ECu; }
        if (ctx->pc != 0x5380ECu) { return; }
    }
    ctx->pc = 0x5380ECu;
label_5380ec:
    // 0x5380ec: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x5380ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_5380f0:
    // 0x5380f0: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x5380f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_5380f4:
    // 0x5380f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5380f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5380f8:
    // 0x5380f8: 0x24a58340  addiu       $a1, $a1, -0x7CC0
    ctx->pc = 0x5380f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935360));
label_5380fc:
    // 0x5380fc: 0x24c67680  addiu       $a2, $a2, 0x7680
    ctx->pc = 0x5380fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30336));
label_538100:
    // 0x538100: 0x240704a0  addiu       $a3, $zero, 0x4A0
    ctx->pc = 0x538100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1184));
label_538104:
    // 0x538104: 0xc040840  jal         func_102100
label_538108:
    if (ctx->pc == 0x538108u) {
        ctx->pc = 0x538108u;
            // 0x538108: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53810Cu;
        goto label_53810c;
    }
    ctx->pc = 0x538104u;
    SET_GPR_U32(ctx, 31, 0x53810Cu);
    ctx->pc = 0x538108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538104u;
            // 0x538108: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53810Cu; }
        if (ctx->pc != 0x53810Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53810Cu; }
        if (ctx->pc != 0x53810Cu) { return; }
    }
    ctx->pc = 0x53810Cu;
label_53810c:
    // 0x53810c: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x53810cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_538110:
    // 0x538110: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x538110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_538114:
    // 0x538114: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x538114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_538118:
    // 0x538118: 0xc14e0cc  jal         func_538330
label_53811c:
    if (ctx->pc == 0x53811Cu) {
        ctx->pc = 0x53811Cu;
            // 0x53811c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538120u;
        goto label_538120;
    }
    ctx->pc = 0x538118u;
    SET_GPR_U32(ctx, 31, 0x538120u);
    ctx->pc = 0x53811Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538118u;
            // 0x53811c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x538330u;
    if (runtime->hasFunction(0x538330u)) {
        auto targetFn = runtime->lookupFunction(0x538330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538120u; }
        if (ctx->pc != 0x538120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00538330_0x538330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538120u; }
        if (ctx->pc != 0x538120u) { return; }
    }
    ctx->pc = 0x538120u;
label_538120:
    // 0x538120: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x538120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_538124:
    // 0x538124: 0xc14e0cc  jal         func_538330
label_538128:
    if (ctx->pc == 0x538128u) {
        ctx->pc = 0x538128u;
            // 0x538128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53812Cu;
        goto label_53812c;
    }
    ctx->pc = 0x538124u;
    SET_GPR_U32(ctx, 31, 0x53812Cu);
    ctx->pc = 0x538128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538124u;
            // 0x538128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x538330u;
    if (runtime->hasFunction(0x538330u)) {
        auto targetFn = runtime->lookupFunction(0x538330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53812Cu; }
        if (ctx->pc != 0x53812Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00538330_0x538330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53812Cu; }
        if (ctx->pc != 0x53812Cu) { return; }
    }
    ctx->pc = 0x53812Cu;
label_53812c:
    // 0x53812c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x53812cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_538130:
    // 0x538130: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x538130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_538134:
    // 0x538134: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x538134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_538138:
    // 0x538138: 0xc14e0c4  jal         func_538310
label_53813c:
    if (ctx->pc == 0x53813Cu) {
        ctx->pc = 0x53813Cu;
            // 0x53813c: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x538140u;
        goto label_538140;
    }
    ctx->pc = 0x538138u;
    SET_GPR_U32(ctx, 31, 0x538140u);
    ctx->pc = 0x53813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538138u;
            // 0x53813c: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x538310u;
    if (runtime->hasFunction(0x538310u)) {
        auto targetFn = runtime->lookupFunction(0x538310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538140u; }
        if (ctx->pc != 0x538140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00538310_0x538310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538140u; }
        if (ctx->pc != 0x538140u) { return; }
    }
    ctx->pc = 0x538140u;
label_538140:
    // 0x538140: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x538140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_538144:
    // 0x538144: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x538144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_538148:
    // 0x538148: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_53814c:
    if (ctx->pc == 0x53814Cu) {
        ctx->pc = 0x53814Cu;
            // 0x53814c: 0x267304a0  addiu       $s3, $s3, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1184));
        ctx->pc = 0x538150u;
        goto label_538150;
    }
    ctx->pc = 0x538148u;
    {
        const bool branch_taken_0x538148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x53814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538148u;
            // 0x53814c: 0x267304a0  addiu       $s3, $s3, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x538148) {
            ctx->pc = 0x538130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_538130;
        }
    }
    ctx->pc = 0x538150u;
label_538150:
    // 0x538150: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x538150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_538154:
    // 0x538154: 0x24426fc0  addiu       $v0, $v0, 0x6FC0
    ctx->pc = 0x538154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28608));
label_538158:
    // 0x538158: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x538158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_53815c:
    // 0x53815c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_538160:
    // 0x538160: 0x24426ff8  addiu       $v0, $v0, 0x6FF8
    ctx->pc = 0x538160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28664));
label_538164:
    // 0x538164: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x538164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_538168:
    // 0x538168: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x538168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_53816c:
    // 0x53816c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x53816cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_538170:
    // 0x538170: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x538170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_538174:
    // 0x538174: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x538174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_538178:
    // 0x538178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x538178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53817c:
    // 0x53817c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53817cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_538180:
    // 0x538180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x538180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_538184:
    // 0x538184: 0x3e00008  jr          $ra
label_538188:
    if (ctx->pc == 0x538188u) {
        ctx->pc = 0x538188u;
            // 0x538188: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x53818Cu;
        goto label_53818c;
    }
    ctx->pc = 0x538184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x538188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538184u;
            // 0x538188: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53818Cu;
label_53818c:
    // 0x53818c: 0x0  nop
    ctx->pc = 0x53818cu;
    // NOP
label_538190:
    // 0x538190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x538190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_538194:
    // 0x538194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x538194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_538198:
    // 0x538198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x538198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53819c:
    // 0x53819c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53819cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5381a0:
    // 0x5381a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5381a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5381a4:
    // 0x5381a4: 0x12200054  beqz        $s1, . + 4 + (0x54 << 2)
label_5381a8:
    if (ctx->pc == 0x5381A8u) {
        ctx->pc = 0x5381A8u;
            // 0x5381a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5381ACu;
        goto label_5381ac;
    }
    ctx->pc = 0x5381A4u;
    {
        const bool branch_taken_0x5381a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5381A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5381A4u;
            // 0x5381a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5381a4) {
            ctx->pc = 0x5382F8u;
            goto label_5382f8;
        }
    }
    ctx->pc = 0x5381ACu;
label_5381ac:
    // 0x5381ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5381acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5381b0:
    // 0x5381b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5381b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5381b4:
    // 0x5381b4: 0x24637020  addiu       $v1, $v1, 0x7020
    ctx->pc = 0x5381b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28704));
label_5381b8:
    // 0x5381b8: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x5381b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_5381bc:
    // 0x5381bc: 0x24427058  addiu       $v0, $v0, 0x7058
    ctx->pc = 0x5381bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28760));
label_5381c0:
    // 0x5381c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5381c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_5381c4:
    // 0x5381c4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x5381c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_5381c8:
    // 0x5381c8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x5381c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_5381cc:
    // 0x5381cc: 0xc0407c0  jal         func_101F00
label_5381d0:
    if (ctx->pc == 0x5381D0u) {
        ctx->pc = 0x5381D0u;
            // 0x5381d0: 0x24a57680  addiu       $a1, $a1, 0x7680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30336));
        ctx->pc = 0x5381D4u;
        goto label_5381d4;
    }
    ctx->pc = 0x5381CCu;
    SET_GPR_U32(ctx, 31, 0x5381D4u);
    ctx->pc = 0x5381D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5381CCu;
            // 0x5381d0: 0x24a57680  addiu       $a1, $a1, 0x7680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5381D4u; }
        if (ctx->pc != 0x5381D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5381D4u; }
        if (ctx->pc != 0x5381D4u) { return; }
    }
    ctx->pc = 0x5381D4u;
label_5381d4:
    // 0x5381d4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x5381d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_5381d8:
    // 0x5381d8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_5381dc:
    if (ctx->pc == 0x5381DCu) {
        ctx->pc = 0x5381DCu;
            // 0x5381dc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x5381E0u;
        goto label_5381e0;
    }
    ctx->pc = 0x5381D8u;
    {
        const bool branch_taken_0x5381d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5381d8) {
            ctx->pc = 0x5381DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5381D8u;
            // 0x5381dc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53820Cu;
            goto label_53820c;
        }
    }
    ctx->pc = 0x5381E0u;
label_5381e0:
    // 0x5381e0: 0x2622008c  addiu       $v0, $s1, 0x8C
    ctx->pc = 0x5381e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
label_5381e4:
    // 0x5381e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_5381e8:
    if (ctx->pc == 0x5381E8u) {
        ctx->pc = 0x5381E8u;
            // 0x5381e8: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x5381ECu;
        goto label_5381ec;
    }
    ctx->pc = 0x5381E4u;
    {
        const bool branch_taken_0x5381e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5381e4) {
            ctx->pc = 0x5381E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5381E4u;
            // 0x5381e8: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5381F8u;
            goto label_5381f8;
        }
    }
    ctx->pc = 0x5381ECu;
label_5381ec:
    // 0x5381ec: 0xc07507c  jal         func_1D41F0
label_5381f0:
    if (ctx->pc == 0x5381F0u) {
        ctx->pc = 0x5381F0u;
            // 0x5381f0: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->pc = 0x5381F4u;
        goto label_5381f4;
    }
    ctx->pc = 0x5381ECu;
    SET_GPR_U32(ctx, 31, 0x5381F4u);
    ctx->pc = 0x5381F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5381ECu;
            // 0x5381f0: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5381F4u; }
        if (ctx->pc != 0x5381F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5381F4u; }
        if (ctx->pc != 0x5381F4u) { return; }
    }
    ctx->pc = 0x5381F4u;
label_5381f4:
    // 0x5381f4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x5381f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_5381f8:
    // 0x5381f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_5381fc:
    if (ctx->pc == 0x5381FCu) {
        ctx->pc = 0x538200u;
        goto label_538200;
    }
    ctx->pc = 0x5381F8u;
    {
        const bool branch_taken_0x5381f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5381f8) {
            ctx->pc = 0x538208u;
            goto label_538208;
        }
    }
    ctx->pc = 0x538200u;
label_538200:
    // 0x538200: 0xc07507c  jal         func_1D41F0
label_538204:
    if (ctx->pc == 0x538204u) {
        ctx->pc = 0x538204u;
            // 0x538204: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x538208u;
        goto label_538208;
    }
    ctx->pc = 0x538200u;
    SET_GPR_U32(ctx, 31, 0x538208u);
    ctx->pc = 0x538204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538200u;
            // 0x538204: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538208u; }
        if (ctx->pc != 0x538208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538208u; }
        if (ctx->pc != 0x538208u) { return; }
    }
    ctx->pc = 0x538208u;
label_538208:
    // 0x538208: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x538208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_53820c:
    // 0x53820c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_538210:
    if (ctx->pc == 0x538210u) {
        ctx->pc = 0x538210u;
            // 0x538210: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x538214u;
        goto label_538214;
    }
    ctx->pc = 0x53820Cu;
    {
        const bool branch_taken_0x53820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53820c) {
            ctx->pc = 0x538210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53820Cu;
            // 0x538210: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53823Cu;
            goto label_53823c;
        }
    }
    ctx->pc = 0x538214u;
label_538214:
    // 0x538214: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_538218:
    if (ctx->pc == 0x538218u) {
        ctx->pc = 0x53821Cu;
        goto label_53821c;
    }
    ctx->pc = 0x538214u;
    {
        const bool branch_taken_0x538214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x538214) {
            ctx->pc = 0x538238u;
            goto label_538238;
        }
    }
    ctx->pc = 0x53821Cu;
label_53821c:
    // 0x53821c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_538220:
    if (ctx->pc == 0x538220u) {
        ctx->pc = 0x538224u;
        goto label_538224;
    }
    ctx->pc = 0x53821Cu;
    {
        const bool branch_taken_0x53821c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53821c) {
            ctx->pc = 0x538238u;
            goto label_538238;
        }
    }
    ctx->pc = 0x538224u;
label_538224:
    // 0x538224: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x538224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_538228:
    // 0x538228: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_53822c:
    if (ctx->pc == 0x53822Cu) {
        ctx->pc = 0x538230u;
        goto label_538230;
    }
    ctx->pc = 0x538228u;
    {
        const bool branch_taken_0x538228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x538228) {
            ctx->pc = 0x538238u;
            goto label_538238;
        }
    }
    ctx->pc = 0x538230u;
label_538230:
    // 0x538230: 0xc0400a8  jal         func_1002A0
label_538234:
    if (ctx->pc == 0x538234u) {
        ctx->pc = 0x538238u;
        goto label_538238;
    }
    ctx->pc = 0x538230u;
    SET_GPR_U32(ctx, 31, 0x538238u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538238u; }
        if (ctx->pc != 0x538238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538238u; }
        if (ctx->pc != 0x538238u) { return; }
    }
    ctx->pc = 0x538238u;
label_538238:
    // 0x538238: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x538238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_53823c:
    // 0x53823c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_538240:
    if (ctx->pc == 0x538240u) {
        ctx->pc = 0x538240u;
            // 0x538240: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x538244u;
        goto label_538244;
    }
    ctx->pc = 0x53823Cu;
    {
        const bool branch_taken_0x53823c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53823c) {
            ctx->pc = 0x538240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53823Cu;
            // 0x538240: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53826Cu;
            goto label_53826c;
        }
    }
    ctx->pc = 0x538244u;
label_538244:
    // 0x538244: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_538248:
    if (ctx->pc == 0x538248u) {
        ctx->pc = 0x53824Cu;
        goto label_53824c;
    }
    ctx->pc = 0x538244u;
    {
        const bool branch_taken_0x538244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x538244) {
            ctx->pc = 0x538268u;
            goto label_538268;
        }
    }
    ctx->pc = 0x53824Cu;
label_53824c:
    // 0x53824c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_538250:
    if (ctx->pc == 0x538250u) {
        ctx->pc = 0x538254u;
        goto label_538254;
    }
    ctx->pc = 0x53824Cu;
    {
        const bool branch_taken_0x53824c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53824c) {
            ctx->pc = 0x538268u;
            goto label_538268;
        }
    }
    ctx->pc = 0x538254u;
label_538254:
    // 0x538254: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x538254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_538258:
    // 0x538258: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_53825c:
    if (ctx->pc == 0x53825Cu) {
        ctx->pc = 0x538260u;
        goto label_538260;
    }
    ctx->pc = 0x538258u;
    {
        const bool branch_taken_0x538258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x538258) {
            ctx->pc = 0x538268u;
            goto label_538268;
        }
    }
    ctx->pc = 0x538260u;
label_538260:
    // 0x538260: 0xc0400a8  jal         func_1002A0
label_538264:
    if (ctx->pc == 0x538264u) {
        ctx->pc = 0x538268u;
        goto label_538268;
    }
    ctx->pc = 0x538260u;
    SET_GPR_U32(ctx, 31, 0x538268u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538268u; }
        if (ctx->pc != 0x538268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538268u; }
        if (ctx->pc != 0x538268u) { return; }
    }
    ctx->pc = 0x538268u;
label_538268:
    // 0x538268: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x538268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_53826c:
    // 0x53826c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_538270:
    if (ctx->pc == 0x538270u) {
        ctx->pc = 0x538274u;
        goto label_538274;
    }
    ctx->pc = 0x53826Cu;
    {
        const bool branch_taken_0x53826c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53826c) {
            ctx->pc = 0x538288u;
            goto label_538288;
        }
    }
    ctx->pc = 0x538274u;
label_538274:
    // 0x538274: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x538274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_538278:
    // 0x538278: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x538278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53827c:
    // 0x53827c: 0x24637008  addiu       $v1, $v1, 0x7008
    ctx->pc = 0x53827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28680));
label_538280:
    // 0x538280: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x538280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_538284:
    // 0x538284: 0xac40b6a8  sw          $zero, -0x4958($v0)
    ctx->pc = 0x538284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948520), GPR_U32(ctx, 0));
label_538288:
    // 0x538288: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_53828c:
    if (ctx->pc == 0x53828Cu) {
        ctx->pc = 0x53828Cu;
            // 0x53828c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x538290u;
        goto label_538290;
    }
    ctx->pc = 0x538288u;
    {
        const bool branch_taken_0x538288 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x538288) {
            ctx->pc = 0x53828Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538288u;
            // 0x53828c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5382E4u;
            goto label_5382e4;
        }
    }
    ctx->pc = 0x538290u;
label_538290:
    // 0x538290: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x538290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_538294:
    // 0x538294: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x538294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_538298:
    // 0x538298: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x538298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_53829c:
    // 0x53829c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x53829cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_5382a0:
    // 0x5382a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5382a4:
    if (ctx->pc == 0x5382A4u) {
        ctx->pc = 0x5382A4u;
            // 0x5382a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x5382A8u;
        goto label_5382a8;
    }
    ctx->pc = 0x5382A0u;
    {
        const bool branch_taken_0x5382a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5382a0) {
            ctx->pc = 0x5382A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5382A0u;
            // 0x5382a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5382BCu;
            goto label_5382bc;
        }
    }
    ctx->pc = 0x5382A8u;
label_5382a8:
    // 0x5382a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5382a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5382ac:
    // 0x5382ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5382acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5382b0:
    // 0x5382b0: 0x320f809  jalr        $t9
label_5382b4:
    if (ctx->pc == 0x5382B4u) {
        ctx->pc = 0x5382B4u;
            // 0x5382b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5382B8u;
        goto label_5382b8;
    }
    ctx->pc = 0x5382B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5382B8u);
        ctx->pc = 0x5382B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5382B0u;
            // 0x5382b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5382B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5382B8u; }
            if (ctx->pc != 0x5382B8u) { return; }
        }
        }
    }
    ctx->pc = 0x5382B8u;
label_5382b8:
    // 0x5382b8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x5382b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_5382bc:
    // 0x5382bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5382c0:
    if (ctx->pc == 0x5382C0u) {
        ctx->pc = 0x5382C0u;
            // 0x5382c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5382C4u;
        goto label_5382c4;
    }
    ctx->pc = 0x5382BCu;
    {
        const bool branch_taken_0x5382bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5382bc) {
            ctx->pc = 0x5382C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5382BCu;
            // 0x5382c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5382D8u;
            goto label_5382d8;
        }
    }
    ctx->pc = 0x5382C4u;
label_5382c4:
    // 0x5382c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5382c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5382c8:
    // 0x5382c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5382c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5382cc:
    // 0x5382cc: 0x320f809  jalr        $t9
label_5382d0:
    if (ctx->pc == 0x5382D0u) {
        ctx->pc = 0x5382D0u;
            // 0x5382d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5382D4u;
        goto label_5382d4;
    }
    ctx->pc = 0x5382CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5382D4u);
        ctx->pc = 0x5382D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5382CCu;
            // 0x5382d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5382D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5382D4u; }
            if (ctx->pc != 0x5382D4u) { return; }
        }
        }
    }
    ctx->pc = 0x5382D4u;
label_5382d4:
    // 0x5382d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5382d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5382d8:
    // 0x5382d8: 0xc075bf8  jal         func_1D6FE0
label_5382dc:
    if (ctx->pc == 0x5382DCu) {
        ctx->pc = 0x5382DCu;
            // 0x5382dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5382E0u;
        goto label_5382e0;
    }
    ctx->pc = 0x5382D8u;
    SET_GPR_U32(ctx, 31, 0x5382E0u);
    ctx->pc = 0x5382DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5382D8u;
            // 0x5382dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5382E0u; }
        if (ctx->pc != 0x5382E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5382E0u; }
        if (ctx->pc != 0x5382E0u) { return; }
    }
    ctx->pc = 0x5382E0u;
label_5382e0:
    // 0x5382e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5382e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5382e4:
    // 0x5382e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5382e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5382e8:
    // 0x5382e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5382ec:
    if (ctx->pc == 0x5382ECu) {
        ctx->pc = 0x5382ECu;
            // 0x5382ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5382F0u;
        goto label_5382f0;
    }
    ctx->pc = 0x5382E8u;
    {
        const bool branch_taken_0x5382e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5382e8) {
            ctx->pc = 0x5382ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5382E8u;
            // 0x5382ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5382FCu;
            goto label_5382fc;
        }
    }
    ctx->pc = 0x5382F0u;
label_5382f0:
    // 0x5382f0: 0xc0400a8  jal         func_1002A0
label_5382f4:
    if (ctx->pc == 0x5382F4u) {
        ctx->pc = 0x5382F4u;
            // 0x5382f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5382F8u;
        goto label_5382f8;
    }
    ctx->pc = 0x5382F0u;
    SET_GPR_U32(ctx, 31, 0x5382F8u);
    ctx->pc = 0x5382F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5382F0u;
            // 0x5382f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5382F8u; }
        if (ctx->pc != 0x5382F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5382F8u; }
        if (ctx->pc != 0x5382F8u) { return; }
    }
    ctx->pc = 0x5382F8u;
label_5382f8:
    // 0x5382f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5382f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5382fc:
    // 0x5382fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5382fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_538300:
    // 0x538300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x538300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_538304:
    // 0x538304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x538304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_538308:
    // 0x538308: 0x3e00008  jr          $ra
label_53830c:
    if (ctx->pc == 0x53830Cu) {
        ctx->pc = 0x53830Cu;
            // 0x53830c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x538310u;
        goto label_fallthrough_0x538308;
    }
    ctx->pc = 0x538308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538308u;
            // 0x53830c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x538308:
    ctx->pc = 0x538310u;
}
