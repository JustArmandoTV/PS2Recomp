#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198EC8
// Address: 0x198ec8 - 0x1992f8
void sub_00198EC8_0x198ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198EC8_0x198ec8");
#endif

    switch (ctx->pc) {
        case 0x198ec8u: goto label_198ec8;
        case 0x198eccu: goto label_198ecc;
        case 0x198ed0u: goto label_198ed0;
        case 0x198ed4u: goto label_198ed4;
        case 0x198ed8u: goto label_198ed8;
        case 0x198edcu: goto label_198edc;
        case 0x198ee0u: goto label_198ee0;
        case 0x198ee4u: goto label_198ee4;
        case 0x198ee8u: goto label_198ee8;
        case 0x198eecu: goto label_198eec;
        case 0x198ef0u: goto label_198ef0;
        case 0x198ef4u: goto label_198ef4;
        case 0x198ef8u: goto label_198ef8;
        case 0x198efcu: goto label_198efc;
        case 0x198f00u: goto label_198f00;
        case 0x198f04u: goto label_198f04;
        case 0x198f08u: goto label_198f08;
        case 0x198f0cu: goto label_198f0c;
        case 0x198f10u: goto label_198f10;
        case 0x198f14u: goto label_198f14;
        case 0x198f18u: goto label_198f18;
        case 0x198f1cu: goto label_198f1c;
        case 0x198f20u: goto label_198f20;
        case 0x198f24u: goto label_198f24;
        case 0x198f28u: goto label_198f28;
        case 0x198f2cu: goto label_198f2c;
        case 0x198f30u: goto label_198f30;
        case 0x198f34u: goto label_198f34;
        case 0x198f38u: goto label_198f38;
        case 0x198f3cu: goto label_198f3c;
        case 0x198f40u: goto label_198f40;
        case 0x198f44u: goto label_198f44;
        case 0x198f48u: goto label_198f48;
        case 0x198f4cu: goto label_198f4c;
        case 0x198f50u: goto label_198f50;
        case 0x198f54u: goto label_198f54;
        case 0x198f58u: goto label_198f58;
        case 0x198f5cu: goto label_198f5c;
        case 0x198f60u: goto label_198f60;
        case 0x198f64u: goto label_198f64;
        case 0x198f68u: goto label_198f68;
        case 0x198f6cu: goto label_198f6c;
        case 0x198f70u: goto label_198f70;
        case 0x198f74u: goto label_198f74;
        case 0x198f78u: goto label_198f78;
        case 0x198f7cu: goto label_198f7c;
        case 0x198f80u: goto label_198f80;
        case 0x198f84u: goto label_198f84;
        case 0x198f88u: goto label_198f88;
        case 0x198f8cu: goto label_198f8c;
        case 0x198f90u: goto label_198f90;
        case 0x198f94u: goto label_198f94;
        case 0x198f98u: goto label_198f98;
        case 0x198f9cu: goto label_198f9c;
        case 0x198fa0u: goto label_198fa0;
        case 0x198fa4u: goto label_198fa4;
        case 0x198fa8u: goto label_198fa8;
        case 0x198facu: goto label_198fac;
        case 0x198fb0u: goto label_198fb0;
        case 0x198fb4u: goto label_198fb4;
        case 0x198fb8u: goto label_198fb8;
        case 0x198fbcu: goto label_198fbc;
        case 0x198fc0u: goto label_198fc0;
        case 0x198fc4u: goto label_198fc4;
        case 0x198fc8u: goto label_198fc8;
        case 0x198fccu: goto label_198fcc;
        case 0x198fd0u: goto label_198fd0;
        case 0x198fd4u: goto label_198fd4;
        case 0x198fd8u: goto label_198fd8;
        case 0x198fdcu: goto label_198fdc;
        case 0x198fe0u: goto label_198fe0;
        case 0x198fe4u: goto label_198fe4;
        case 0x198fe8u: goto label_198fe8;
        case 0x198fecu: goto label_198fec;
        case 0x198ff0u: goto label_198ff0;
        case 0x198ff4u: goto label_198ff4;
        case 0x198ff8u: goto label_198ff8;
        case 0x198ffcu: goto label_198ffc;
        case 0x199000u: goto label_199000;
        case 0x199004u: goto label_199004;
        case 0x199008u: goto label_199008;
        case 0x19900cu: goto label_19900c;
        case 0x199010u: goto label_199010;
        case 0x199014u: goto label_199014;
        case 0x199018u: goto label_199018;
        case 0x19901cu: goto label_19901c;
        case 0x199020u: goto label_199020;
        case 0x199024u: goto label_199024;
        case 0x199028u: goto label_199028;
        case 0x19902cu: goto label_19902c;
        case 0x199030u: goto label_199030;
        case 0x199034u: goto label_199034;
        case 0x199038u: goto label_199038;
        case 0x19903cu: goto label_19903c;
        case 0x199040u: goto label_199040;
        case 0x199044u: goto label_199044;
        case 0x199048u: goto label_199048;
        case 0x19904cu: goto label_19904c;
        case 0x199050u: goto label_199050;
        case 0x199054u: goto label_199054;
        case 0x199058u: goto label_199058;
        case 0x19905cu: goto label_19905c;
        case 0x199060u: goto label_199060;
        case 0x199064u: goto label_199064;
        case 0x199068u: goto label_199068;
        case 0x19906cu: goto label_19906c;
        case 0x199070u: goto label_199070;
        case 0x199074u: goto label_199074;
        case 0x199078u: goto label_199078;
        case 0x19907cu: goto label_19907c;
        case 0x199080u: goto label_199080;
        case 0x199084u: goto label_199084;
        case 0x199088u: goto label_199088;
        case 0x19908cu: goto label_19908c;
        case 0x199090u: goto label_199090;
        case 0x199094u: goto label_199094;
        case 0x199098u: goto label_199098;
        case 0x19909cu: goto label_19909c;
        case 0x1990a0u: goto label_1990a0;
        case 0x1990a4u: goto label_1990a4;
        case 0x1990a8u: goto label_1990a8;
        case 0x1990acu: goto label_1990ac;
        case 0x1990b0u: goto label_1990b0;
        case 0x1990b4u: goto label_1990b4;
        case 0x1990b8u: goto label_1990b8;
        case 0x1990bcu: goto label_1990bc;
        case 0x1990c0u: goto label_1990c0;
        case 0x1990c4u: goto label_1990c4;
        case 0x1990c8u: goto label_1990c8;
        case 0x1990ccu: goto label_1990cc;
        case 0x1990d0u: goto label_1990d0;
        case 0x1990d4u: goto label_1990d4;
        case 0x1990d8u: goto label_1990d8;
        case 0x1990dcu: goto label_1990dc;
        case 0x1990e0u: goto label_1990e0;
        case 0x1990e4u: goto label_1990e4;
        case 0x1990e8u: goto label_1990e8;
        case 0x1990ecu: goto label_1990ec;
        case 0x1990f0u: goto label_1990f0;
        case 0x1990f4u: goto label_1990f4;
        case 0x1990f8u: goto label_1990f8;
        case 0x1990fcu: goto label_1990fc;
        case 0x199100u: goto label_199100;
        case 0x199104u: goto label_199104;
        case 0x199108u: goto label_199108;
        case 0x19910cu: goto label_19910c;
        case 0x199110u: goto label_199110;
        case 0x199114u: goto label_199114;
        case 0x199118u: goto label_199118;
        case 0x19911cu: goto label_19911c;
        case 0x199120u: goto label_199120;
        case 0x199124u: goto label_199124;
        case 0x199128u: goto label_199128;
        case 0x19912cu: goto label_19912c;
        case 0x199130u: goto label_199130;
        case 0x199134u: goto label_199134;
        case 0x199138u: goto label_199138;
        case 0x19913cu: goto label_19913c;
        case 0x199140u: goto label_199140;
        case 0x199144u: goto label_199144;
        case 0x199148u: goto label_199148;
        case 0x19914cu: goto label_19914c;
        case 0x199150u: goto label_199150;
        case 0x199154u: goto label_199154;
        case 0x199158u: goto label_199158;
        case 0x19915cu: goto label_19915c;
        case 0x199160u: goto label_199160;
        case 0x199164u: goto label_199164;
        case 0x199168u: goto label_199168;
        case 0x19916cu: goto label_19916c;
        case 0x199170u: goto label_199170;
        case 0x199174u: goto label_199174;
        case 0x199178u: goto label_199178;
        case 0x19917cu: goto label_19917c;
        case 0x199180u: goto label_199180;
        case 0x199184u: goto label_199184;
        case 0x199188u: goto label_199188;
        case 0x19918cu: goto label_19918c;
        case 0x199190u: goto label_199190;
        case 0x199194u: goto label_199194;
        case 0x199198u: goto label_199198;
        case 0x19919cu: goto label_19919c;
        case 0x1991a0u: goto label_1991a0;
        case 0x1991a4u: goto label_1991a4;
        case 0x1991a8u: goto label_1991a8;
        case 0x1991acu: goto label_1991ac;
        case 0x1991b0u: goto label_1991b0;
        case 0x1991b4u: goto label_1991b4;
        case 0x1991b8u: goto label_1991b8;
        case 0x1991bcu: goto label_1991bc;
        case 0x1991c0u: goto label_1991c0;
        case 0x1991c4u: goto label_1991c4;
        case 0x1991c8u: goto label_1991c8;
        case 0x1991ccu: goto label_1991cc;
        case 0x1991d0u: goto label_1991d0;
        case 0x1991d4u: goto label_1991d4;
        case 0x1991d8u: goto label_1991d8;
        case 0x1991dcu: goto label_1991dc;
        case 0x1991e0u: goto label_1991e0;
        case 0x1991e4u: goto label_1991e4;
        case 0x1991e8u: goto label_1991e8;
        case 0x1991ecu: goto label_1991ec;
        case 0x1991f0u: goto label_1991f0;
        case 0x1991f4u: goto label_1991f4;
        case 0x1991f8u: goto label_1991f8;
        case 0x1991fcu: goto label_1991fc;
        case 0x199200u: goto label_199200;
        case 0x199204u: goto label_199204;
        case 0x199208u: goto label_199208;
        case 0x19920cu: goto label_19920c;
        case 0x199210u: goto label_199210;
        case 0x199214u: goto label_199214;
        case 0x199218u: goto label_199218;
        case 0x19921cu: goto label_19921c;
        case 0x199220u: goto label_199220;
        case 0x199224u: goto label_199224;
        case 0x199228u: goto label_199228;
        case 0x19922cu: goto label_19922c;
        case 0x199230u: goto label_199230;
        case 0x199234u: goto label_199234;
        case 0x199238u: goto label_199238;
        case 0x19923cu: goto label_19923c;
        case 0x199240u: goto label_199240;
        case 0x199244u: goto label_199244;
        case 0x199248u: goto label_199248;
        case 0x19924cu: goto label_19924c;
        case 0x199250u: goto label_199250;
        case 0x199254u: goto label_199254;
        case 0x199258u: goto label_199258;
        case 0x19925cu: goto label_19925c;
        case 0x199260u: goto label_199260;
        case 0x199264u: goto label_199264;
        case 0x199268u: goto label_199268;
        case 0x19926cu: goto label_19926c;
        case 0x199270u: goto label_199270;
        case 0x199274u: goto label_199274;
        case 0x199278u: goto label_199278;
        case 0x19927cu: goto label_19927c;
        case 0x199280u: goto label_199280;
        case 0x199284u: goto label_199284;
        case 0x199288u: goto label_199288;
        case 0x19928cu: goto label_19928c;
        case 0x199290u: goto label_199290;
        case 0x199294u: goto label_199294;
        case 0x199298u: goto label_199298;
        case 0x19929cu: goto label_19929c;
        case 0x1992a0u: goto label_1992a0;
        case 0x1992a4u: goto label_1992a4;
        case 0x1992a8u: goto label_1992a8;
        case 0x1992acu: goto label_1992ac;
        case 0x1992b0u: goto label_1992b0;
        case 0x1992b4u: goto label_1992b4;
        case 0x1992b8u: goto label_1992b8;
        case 0x1992bcu: goto label_1992bc;
        case 0x1992c0u: goto label_1992c0;
        case 0x1992c4u: goto label_1992c4;
        case 0x1992c8u: goto label_1992c8;
        case 0x1992ccu: goto label_1992cc;
        case 0x1992d0u: goto label_1992d0;
        case 0x1992d4u: goto label_1992d4;
        case 0x1992d8u: goto label_1992d8;
        case 0x1992dcu: goto label_1992dc;
        case 0x1992e0u: goto label_1992e0;
        case 0x1992e4u: goto label_1992e4;
        case 0x1992e8u: goto label_1992e8;
        case 0x1992ecu: goto label_1992ec;
        case 0x1992f0u: goto label_1992f0;
        case 0x1992f4u: goto label_1992f4;
        default: break;
    }

    ctx->pc = 0x198ec8u;

label_198ec8:
    // 0x198ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_198ecc:
    // 0x198ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_198ed0:
    // 0x198ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198ed4:
    // 0x198ed4: 0x80663b8  j           func_198EE0
label_198ed8:
    if (ctx->pc == 0x198ED8u) {
        ctx->pc = 0x198ED8u;
            // 0x198ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x198EDCu;
        goto label_198edc;
    }
    ctx->pc = 0x198ED4u;
    ctx->pc = 0x198ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198ED4u;
            // 0x198ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198EE0u;
    goto label_198ee0;
    ctx->pc = 0x198EDCu;
label_198edc:
    // 0x198edc: 0x0  nop
    ctx->pc = 0x198edcu;
    // NOP
label_198ee0:
    // 0x198ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_198ee4:
    // 0x198ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_198ee8:
    // 0x198ee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198eec:
    // 0x198eec: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
label_198ef0:
    if (ctx->pc == 0x198EF0u) {
        ctx->pc = 0x198EF0u;
            // 0x198ef0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x198EF4u;
        goto label_198ef4;
    }
    ctx->pc = 0x198EECu;
    {
        const bool branch_taken_0x198eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x198EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198EECu;
            // 0x198ef0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198eec) {
            ctx->pc = 0x198FF8u;
            goto label_198ff8;
        }
    }
    ctx->pc = 0x198EF4u;
label_198ef4:
    // 0x198ef4: 0xc068a76  jal         func_1A29D8
label_198ef8:
    if (ctx->pc == 0x198EF8u) {
        ctx->pc = 0x198EF8u;
            // 0x198ef8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x198EFCu;
        goto label_198efc;
    }
    ctx->pc = 0x198EF4u;
    SET_GPR_U32(ctx, 31, 0x198EFCu);
    ctx->pc = 0x198EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198EF4u;
            // 0x198ef8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A29D8u;
    if (runtime->hasFunction(0x1A29D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A29D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198EFCu; }
        if (ctx->pc != 0x198EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A29D8_0x1a29d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198EFCu; }
        if (ctx->pc != 0x198EFCu) { return; }
    }
    ctx->pc = 0x198EFCu;
label_198efc:
    // 0x198efc: 0xc067080  jal         func_19C200
label_198f00:
    if (ctx->pc == 0x198F00u) {
        ctx->pc = 0x198F00u;
            // 0x198f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x198F04u;
        goto label_198f04;
    }
    ctx->pc = 0x198EFCu;
    SET_GPR_U32(ctx, 31, 0x198F04u);
    ctx->pc = 0x198F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198EFCu;
            // 0x198f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C200u;
    if (runtime->hasFunction(0x19C200u)) {
        auto targetFn = runtime->lookupFunction(0x19C200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F04u; }
        if (ctx->pc != 0x198F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C200_0x19c200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F04u; }
        if (ctx->pc != 0x198F04u) { return; }
    }
    ctx->pc = 0x198F04u;
label_198f04:
    // 0x198f04: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x198f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_198f08:
    // 0x198f08: 0xc068a76  jal         func_1A29D8
label_198f0c:
    if (ctx->pc == 0x198F0Cu) {
        ctx->pc = 0x198F0Cu;
            // 0x198f0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x198F10u;
        goto label_198f10;
    }
    ctx->pc = 0x198F08u;
    SET_GPR_U32(ctx, 31, 0x198F10u);
    ctx->pc = 0x198F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198F08u;
            // 0x198f0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A29D8u;
    if (runtime->hasFunction(0x1A29D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A29D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F10u; }
        if (ctx->pc != 0x198F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A29D8_0x1a29d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F10u; }
        if (ctx->pc != 0x198F10u) { return; }
    }
    ctx->pc = 0x198F10u;
label_198f10:
    // 0x198f10: 0xc067d1a  jal         func_19F468
label_198f14:
    if (ctx->pc == 0x198F14u) {
        ctx->pc = 0x198F14u;
            // 0x198f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x198F18u;
        goto label_198f18;
    }
    ctx->pc = 0x198F10u;
    SET_GPR_U32(ctx, 31, 0x198F18u);
    ctx->pc = 0x198F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198F10u;
            // 0x198f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F468u;
    if (runtime->hasFunction(0x19F468u)) {
        auto targetFn = runtime->lookupFunction(0x19F468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F18u; }
        if (ctx->pc != 0x198F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F468_0x19f468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F18u; }
        if (ctx->pc != 0x198F18u) { return; }
    }
    ctx->pc = 0x198F18u;
label_198f18:
    // 0x198f18: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x198f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_198f1c:
    // 0x198f1c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_198f20:
    if (ctx->pc == 0x198F20u) {
        ctx->pc = 0x198F20u;
            // 0x198f20: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x198F24u;
        goto label_198f24;
    }
    ctx->pc = 0x198F1Cu;
    {
        const bool branch_taken_0x198f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f1c) {
            ctx->pc = 0x198F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198F1Cu;
            // 0x198f20: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198F30u;
            goto label_198f30;
        }
    }
    ctx->pc = 0x198F24u;
label_198f24:
    // 0x198f24: 0xc067a06  jal         func_19E818
label_198f28:
    if (ctx->pc == 0x198F28u) {
        ctx->pc = 0x198F2Cu;
        goto label_198f2c;
    }
    ctx->pc = 0x198F24u;
    SET_GPR_U32(ctx, 31, 0x198F2Cu);
    ctx->pc = 0x19E818u;
    if (runtime->hasFunction(0x19E818u)) {
        auto targetFn = runtime->lookupFunction(0x19E818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F2Cu; }
        if (ctx->pc != 0x198F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E818_0x19e818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F2Cu; }
        if (ctx->pc != 0x198F2Cu) { return; }
    }
    ctx->pc = 0x198F2Cu;
label_198f2c:
    // 0x198f2c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x198f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_198f30:
    // 0x198f30: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_198f34:
    if (ctx->pc == 0x198F34u) {
        ctx->pc = 0x198F34u;
            // 0x198f34: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->pc = 0x198F38u;
        goto label_198f38;
    }
    ctx->pc = 0x198F30u;
    {
        const bool branch_taken_0x198f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f30) {
            ctx->pc = 0x198F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198F30u;
            // 0x198f34: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198F44u;
            goto label_198f44;
        }
    }
    ctx->pc = 0x198F38u;
label_198f38:
    // 0x198f38: 0xc060006  jal         func_180018
label_198f3c:
    if (ctx->pc == 0x198F3Cu) {
        ctx->pc = 0x198F40u;
        goto label_198f40;
    }
    ctx->pc = 0x198F38u;
    SET_GPR_U32(ctx, 31, 0x198F40u);
    ctx->pc = 0x180018u;
    if (runtime->hasFunction(0x180018u)) {
        auto targetFn = runtime->lookupFunction(0x180018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F40u; }
        if (ctx->pc != 0x198F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180018_0x180018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F40u; }
        if (ctx->pc != 0x198F40u) { return; }
    }
    ctx->pc = 0x198F40u;
label_198f40:
    // 0x198f40: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x198f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_198f44:
    // 0x198f44: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_198f48:
    if (ctx->pc == 0x198F48u) {
        ctx->pc = 0x198F48u;
            // 0x198f48: 0x8e040434  lw          $a0, 0x434($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
        ctx->pc = 0x198F4Cu;
        goto label_198f4c;
    }
    ctx->pc = 0x198F44u;
    {
        const bool branch_taken_0x198f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f44) {
            ctx->pc = 0x198F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198F44u;
            // 0x198f48: 0x8e040434  lw          $a0, 0x434($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198F58u;
            goto label_198f58;
        }
    }
    ctx->pc = 0x198F4Cu;
label_198f4c:
    // 0x198f4c: 0xc068b42  jal         func_1A2D08
label_198f50:
    if (ctx->pc == 0x198F50u) {
        ctx->pc = 0x198F54u;
        goto label_198f54;
    }
    ctx->pc = 0x198F4Cu;
    SET_GPR_U32(ctx, 31, 0x198F54u);
    ctx->pc = 0x1A2D08u;
    if (runtime->hasFunction(0x1A2D08u)) {
        auto targetFn = runtime->lookupFunction(0x1A2D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F54u; }
        if (ctx->pc != 0x198F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2D08_0x1a2d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F54u; }
        if (ctx->pc != 0x198F54u) { return; }
    }
    ctx->pc = 0x198F54u;
label_198f54:
    // 0x198f54: 0x8e040434  lw          $a0, 0x434($s0)
    ctx->pc = 0x198f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
label_198f58:
    // 0x198f58: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_198f5c:
    if (ctx->pc == 0x198F5Cu) {
        ctx->pc = 0x198F5Cu;
            // 0x198f5c: 0x8e040454  lw          $a0, 0x454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
        ctx->pc = 0x198F60u;
        goto label_198f60;
    }
    ctx->pc = 0x198F58u;
    {
        const bool branch_taken_0x198f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f58) {
            ctx->pc = 0x198F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198F58u;
            // 0x198f5c: 0x8e040454  lw          $a0, 0x454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198F74u;
            goto label_198f74;
        }
    }
    ctx->pc = 0x198F60u;
label_198f60:
    // 0x198f60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x198f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_198f64:
    // 0x198f64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x198f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_198f68:
    // 0x198f68: 0x40f809  jalr        $v0
label_198f6c:
    if (ctx->pc == 0x198F6Cu) {
        ctx->pc = 0x198F70u;
        goto label_198f70;
    }
    ctx->pc = 0x198F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198F70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x198F70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198F70u; }
            if (ctx->pc != 0x198F70u) { return; }
        }
        }
    }
    ctx->pc = 0x198F70u;
label_198f70:
    // 0x198f70: 0x8e040454  lw          $a0, 0x454($s0)
    ctx->pc = 0x198f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
label_198f74:
    // 0x198f74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_198f78:
    if (ctx->pc == 0x198F78u) {
        ctx->pc = 0x198F78u;
            // 0x198f78: 0x8e04054c  lw          $a0, 0x54C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1356)));
        ctx->pc = 0x198F7Cu;
        goto label_198f7c;
    }
    ctx->pc = 0x198F74u;
    {
        const bool branch_taken_0x198f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f74) {
            ctx->pc = 0x198F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198F74u;
            // 0x198f78: 0x8e04054c  lw          $a0, 0x54C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1356)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198F90u;
            goto label_198f90;
        }
    }
    ctx->pc = 0x198F7Cu;
label_198f7c:
    // 0x198f7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x198f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_198f80:
    // 0x198f80: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x198f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_198f84:
    // 0x198f84: 0x40f809  jalr        $v0
label_198f88:
    if (ctx->pc == 0x198F88u) {
        ctx->pc = 0x198F8Cu;
        goto label_198f8c;
    }
    ctx->pc = 0x198F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198F8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x198F8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198F8Cu; }
            if (ctx->pc != 0x198F8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x198F8Cu;
label_198f8c:
    // 0x198f8c: 0x8e04054c  lw          $a0, 0x54C($s0)
    ctx->pc = 0x198f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1356)));
label_198f90:
    // 0x198f90: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_198f94:
    if (ctx->pc == 0x198F94u) {
        ctx->pc = 0x198F94u;
            // 0x198f94: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->pc = 0x198F98u;
        goto label_198f98;
    }
    ctx->pc = 0x198F90u;
    {
        const bool branch_taken_0x198f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f90) {
            ctx->pc = 0x198F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198F90u;
            // 0x198f94: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198FA4u;
            goto label_198fa4;
        }
    }
    ctx->pc = 0x198F98u;
label_198f98:
    // 0x198f98: 0xc065c90  jal         func_197240
label_198f9c:
    if (ctx->pc == 0x198F9Cu) {
        ctx->pc = 0x198FA0u;
        goto label_198fa0;
    }
    ctx->pc = 0x198F98u;
    SET_GPR_U32(ctx, 31, 0x198FA0u);
    ctx->pc = 0x197240u;
    if (runtime->hasFunction(0x197240u)) {
        auto targetFn = runtime->lookupFunction(0x197240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FA0u; }
        if (ctx->pc != 0x198FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197240_0x197240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FA0u; }
        if (ctx->pc != 0x198FA0u) { return; }
    }
    ctx->pc = 0x198FA0u;
label_198fa0:
    // 0x198fa0: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x198fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_198fa4:
    // 0x198fa4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_198fa8:
    if (ctx->pc == 0x198FA8u) {
        ctx->pc = 0x198FACu;
        goto label_198fac;
    }
    ctx->pc = 0x198FA4u;
    {
        const bool branch_taken_0x198fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198fa4) {
            ctx->pc = 0x198FB4u;
            goto label_198fb4;
        }
    }
    ctx->pc = 0x198FACu;
label_198fac:
    // 0x198fac: 0xc0661a4  jal         func_198690
label_198fb0:
    if (ctx->pc == 0x198FB0u) {
        ctx->pc = 0x198FB4u;
        goto label_198fb4;
    }
    ctx->pc = 0x198FACu;
    SET_GPR_U32(ctx, 31, 0x198FB4u);
    ctx->pc = 0x198690u;
    if (runtime->hasFunction(0x198690u)) {
        auto targetFn = runtime->lookupFunction(0x198690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FB4u; }
        if (ctx->pc != 0x198FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198690_0x198690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FB4u; }
        if (ctx->pc != 0x198FB4u) { return; }
    }
    ctx->pc = 0x198FB4u;
label_198fb4:
    // 0x198fb4: 0xc068596  jal         func_1A1658
label_198fb8:
    if (ctx->pc == 0x198FB8u) {
        ctx->pc = 0x198FB8u;
            // 0x198fb8: 0x260404f8  addiu       $a0, $s0, 0x4F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
        ctx->pc = 0x198FBCu;
        goto label_198fbc;
    }
    ctx->pc = 0x198FB4u;
    SET_GPR_U32(ctx, 31, 0x198FBCu);
    ctx->pc = 0x198FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198FB4u;
            // 0x198fb8: 0x260404f8  addiu       $a0, $s0, 0x4F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1658u;
    if (runtime->hasFunction(0x1A1658u)) {
        auto targetFn = runtime->lookupFunction(0x1A1658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FBCu; }
        if (ctx->pc != 0x198FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1658_0x1a1658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FBCu; }
        if (ctx->pc != 0x198FBCu) { return; }
    }
    ctx->pc = 0x198FBCu;
label_198fbc:
    // 0x198fbc: 0xc068596  jal         func_1A1658
label_198fc0:
    if (ctx->pc == 0x198FC0u) {
        ctx->pc = 0x198FC0u;
            // 0x198fc0: 0x2604051c  addiu       $a0, $s0, 0x51C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
        ctx->pc = 0x198FC4u;
        goto label_198fc4;
    }
    ctx->pc = 0x198FBCu;
    SET_GPR_U32(ctx, 31, 0x198FC4u);
    ctx->pc = 0x198FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198FBCu;
            // 0x198fc0: 0x2604051c  addiu       $a0, $s0, 0x51C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1658u;
    if (runtime->hasFunction(0x1A1658u)) {
        auto targetFn = runtime->lookupFunction(0x1A1658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FC4u; }
        if (ctx->pc != 0x198FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1658_0x1a1658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FC4u; }
        if (ctx->pc != 0x198FC4u) { return; }
    }
    ctx->pc = 0x198FC4u;
label_198fc4:
    // 0x198fc4: 0xc06656c  jal         func_1995B0
label_198fc8:
    if (ctx->pc == 0x198FC8u) {
        ctx->pc = 0x198FC8u;
            // 0x198fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x198FCCu;
        goto label_198fcc;
    }
    ctx->pc = 0x198FC4u;
    SET_GPR_U32(ctx, 31, 0x198FCCu);
    ctx->pc = 0x198FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198FC4u;
            // 0x198fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1995B0u;
    if (runtime->hasFunction(0x1995B0u)) {
        auto targetFn = runtime->lookupFunction(0x1995B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FCCu; }
        if (ctx->pc != 0x198FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001995B0_0x1995b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FCCu; }
        if (ctx->pc != 0x198FCCu) { return; }
    }
    ctx->pc = 0x198FCCu;
label_198fcc:
    // 0x198fcc: 0xc06658c  jal         func_199630
label_198fd0:
    if (ctx->pc == 0x198FD0u) {
        ctx->pc = 0x198FD0u;
            // 0x198fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x198FD4u;
        goto label_198fd4;
    }
    ctx->pc = 0x198FCCu;
    SET_GPR_U32(ctx, 31, 0x198FD4u);
    ctx->pc = 0x198FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198FCCu;
            // 0x198fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199630u;
    if (runtime->hasFunction(0x199630u)) {
        auto targetFn = runtime->lookupFunction(0x199630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FD4u; }
        if (ctx->pc != 0x198FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199630_0x199630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FD4u; }
        if (ctx->pc != 0x198FD4u) { return; }
    }
    ctx->pc = 0x198FD4u;
label_198fd4:
    // 0x198fd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_198fd8:
    if (ctx->pc == 0x198FD8u) {
        ctx->pc = 0x198FD8u;
            // 0x198fd8: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x198FDCu;
        goto label_198fdc;
    }
    ctx->pc = 0x198FD4u;
    {
        const bool branch_taken_0x198fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198FD4u;
            // 0x198fd8: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198fd4) {
            ctx->pc = 0x198FE4u;
            goto label_198fe4;
        }
    }
    ctx->pc = 0x198FDCu;
label_198fdc:
    // 0x198fdc: 0xc0686c6  jal         func_1A1B18
label_198fe0:
    if (ctx->pc == 0x198FE0u) {
        ctx->pc = 0x198FE0u;
            // 0x198fe0: 0x24848a90  addiu       $a0, $a0, -0x7570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937232));
        ctx->pc = 0x198FE4u;
        goto label_198fe4;
    }
    ctx->pc = 0x198FDCu;
    SET_GPR_U32(ctx, 31, 0x198FE4u);
    ctx->pc = 0x198FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198FDCu;
            // 0x198fe0: 0x24848a90  addiu       $a0, $a0, -0x7570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FE4u; }
        if (ctx->pc != 0x198FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FE4u; }
        if (ctx->pc != 0x198FE4u) { return; }
    }
    ctx->pc = 0x198FE4u;
label_198fe4:
    // 0x198fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198fe8:
    // 0x198fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198fec:
    // 0x198fec: 0xc04a576  jal         func_1295D8
label_198ff0:
    if (ctx->pc == 0x198FF0u) {
        ctx->pc = 0x198FF0u;
            // 0x198ff0: 0x24060594  addiu       $a2, $zero, 0x594 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
        ctx->pc = 0x198FF4u;
        goto label_198ff4;
    }
    ctx->pc = 0x198FECu;
    SET_GPR_U32(ctx, 31, 0x198FF4u);
    ctx->pc = 0x198FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198FECu;
            // 0x198ff0: 0x24060594  addiu       $a2, $zero, 0x594 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FF4u; }
        if (ctx->pc != 0x198FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198FF4u; }
        if (ctx->pc != 0x198FF4u) { return; }
    }
    ctx->pc = 0x198FF4u;
label_198ff4:
    // 0x198ff4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x198ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_198ff8:
    // 0x198ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198ffc:
    // 0x198ffc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x198ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_199000:
    // 0x199000: 0x3e00008  jr          $ra
label_199004:
    if (ctx->pc == 0x199004u) {
        ctx->pc = 0x199004u;
            // 0x199004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x199008u;
        goto label_199008;
    }
    ctx->pc = 0x199000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199000u;
            // 0x199004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199008u;
label_199008:
    // 0x199008: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x199008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_19900c:
    // 0x19900c: 0x3e00008  jr          $ra
label_199010:
    if (ctx->pc == 0x199010u) {
        ctx->pc = 0x199010u;
            // 0x199010: 0xac446c0c  sw          $a0, 0x6C0C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27660), GPR_U32(ctx, 4));
        ctx->pc = 0x199014u;
        goto label_199014;
    }
    ctx->pc = 0x19900Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19900Cu;
            // 0x199010: 0xac446c0c  sw          $a0, 0x6C0C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27660), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199014u;
label_199014:
    // 0x199014: 0x0  nop
    ctx->pc = 0x199014u;
    // NOP
label_199018:
    // 0x199018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x199018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19901c:
    // 0x19901c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x19901cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_199020:
    // 0x199020: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x199020u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_199024:
    // 0x199024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_199028:
    // 0x199028: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x199028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19902c:
    // 0x19902c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_199030:
    // 0x199030: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x199030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199034:
    // 0x199034: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x199034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_199038:
    // 0x199038: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x199038u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19903c:
    // 0x19903c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19903cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199040:
    // 0x199040: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x199040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_199044:
    // 0x199044: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_199048:
    // 0x199048: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_19904c:
    // 0x19904c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19904cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_199050:
    // 0x199050: 0xc04a576  jal         func_1295D8
label_199054:
    if (ctx->pc == 0x199054u) {
        ctx->pc = 0x199054u;
            // 0x199054: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x199058u;
        goto label_199058;
    }
    ctx->pc = 0x199050u;
    SET_GPR_U32(ctx, 31, 0x199058u);
    ctx->pc = 0x199054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199050u;
            // 0x199054: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199058u; }
        if (ctx->pc != 0x199058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199058u; }
        if (ctx->pc != 0x199058u) { return; }
    }
    ctx->pc = 0x199058u;
label_199058:
    // 0x199058: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_19905c:
    if (ctx->pc == 0x19905Cu) {
        ctx->pc = 0x19905Cu;
            // 0x19905c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x199060u;
        goto label_199060;
    }
    ctx->pc = 0x199058u;
    {
        const bool branch_taken_0x199058 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19905Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199058u;
            // 0x19905c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199058) {
            ctx->pc = 0x199074u;
            goto label_199074;
        }
    }
    ctx->pc = 0x199060u;
label_199060:
    // 0x199060: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
label_199064:
    if (ctx->pc == 0x199064u) {
        ctx->pc = 0x199068u;
        goto label_199068;
    }
    ctx->pc = 0x199060u;
    {
        const bool branch_taken_0x199060 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x199060) {
            ctx->pc = 0x199074u;
            goto label_199074;
        }
    }
    ctx->pc = 0x199068u;
label_199068:
    // 0x199068: 0x326207ff  andi        $v0, $s3, 0x7FF
    ctx->pc = 0x199068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2047);
label_19906c:
    // 0x19906c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_199070:
    if (ctx->pc == 0x199070u) {
        ctx->pc = 0x199074u;
        goto label_199074;
    }
    ctx->pc = 0x19906Cu;
    {
        const bool branch_taken_0x19906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19906c) {
            ctx->pc = 0x1990A0u;
            goto label_1990a0;
        }
    }
    ctx->pc = 0x199074u;
label_199074:
    // 0x199074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199078:
    // 0x199078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19907c:
    // 0x19907c: 0x24848aa8  addiu       $a0, $a0, -0x7558
    ctx->pc = 0x19907cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937256));
label_199080:
    // 0x199080: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_199084:
    // 0x199084: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x199084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_199088:
    // 0x199088: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x199088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19908c:
    // 0x19908c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x19908cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_199090:
    // 0x199090: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x199090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_199094:
    // 0x199094: 0x80686c6  j           func_1A1B18
label_199098:
    if (ctx->pc == 0x199098u) {
        ctx->pc = 0x199098u;
            // 0x199098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x19909Cu;
        goto label_19909c;
    }
    ctx->pc = 0x199094u;
    ctx->pc = 0x199098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199094u;
            // 0x199098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19909Cu;
label_19909c:
    // 0x19909c: 0x0  nop
    ctx->pc = 0x19909cu;
    // NOP
label_1990a0:
    // 0x1990a0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1990a4:
    if (ctx->pc == 0x1990A4u) {
        ctx->pc = 0x1990A4u;
            // 0x1990a4: 0x3c04006d  lui         $a0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
        ctx->pc = 0x1990A8u;
        goto label_1990a8;
    }
    ctx->pc = 0x1990A0u;
    {
        const bool branch_taken_0x1990a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1990A0u;
            // 0x1990a4: 0x3c04006d  lui         $a0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990a0) {
            ctx->pc = 0x1990F8u;
            goto label_1990f8;
        }
    }
    ctx->pc = 0x1990A8u;
label_1990a8:
    // 0x1990a8: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1990a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1990ac:
    // 0x1990ac: 0xc065c88  jal         func_197220
label_1990b0:
    if (ctx->pc == 0x1990B0u) {
        ctx->pc = 0x1990B0u;
            // 0x1990b0: 0x24843ba0  addiu       $a0, $a0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15264));
        ctx->pc = 0x1990B4u;
        goto label_1990b4;
    }
    ctx->pc = 0x1990ACu;
    SET_GPR_U32(ctx, 31, 0x1990B4u);
    ctx->pc = 0x1990B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1990ACu;
            // 0x1990b0: 0x24843ba0  addiu       $a0, $a0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197220u;
    if (runtime->hasFunction(0x197220u)) {
        auto targetFn = runtime->lookupFunction(0x197220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990B4u; }
        if (ctx->pc != 0x1990B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197220_0x197220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990B4u; }
        if (ctx->pc != 0x1990B4u) { return; }
    }
    ctx->pc = 0x1990B4u;
label_1990b4:
    // 0x1990b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1990b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1990b8:
    // 0x1990b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1990b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1990bc:
    // 0x1990bc: 0xc065c92  jal         func_197248
label_1990c0:
    if (ctx->pc == 0x1990C0u) {
        ctx->pc = 0x1990C0u;
            // 0x1990c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1990C4u;
        goto label_1990c4;
    }
    ctx->pc = 0x1990BCu;
    SET_GPR_U32(ctx, 31, 0x1990C4u);
    ctx->pc = 0x1990C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1990BCu;
            // 0x1990c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197248u;
    if (runtime->hasFunction(0x197248u)) {
        auto targetFn = runtime->lookupFunction(0x197248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990C4u; }
        if (ctx->pc != 0x1990C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197248_0x197248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990C4u; }
        if (ctx->pc != 0x1990C4u) { return; }
    }
    ctx->pc = 0x1990C4u;
label_1990c4:
    // 0x1990c4: 0x1312c3  sra         $v0, $s3, 11
    ctx->pc = 0x1990c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 11));
label_1990c8:
    // 0x1990c8: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1990cc:
    if (ctx->pc == 0x1990CCu) {
        ctx->pc = 0x1990CCu;
            // 0x1990cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1990D0u;
        goto label_1990d0;
    }
    ctx->pc = 0x1990C8u;
    {
        const bool branch_taken_0x1990c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1990CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1990C8u;
            // 0x1990cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990c8) {
            ctx->pc = 0x1990F0u;
            goto label_1990f0;
        }
    }
    ctx->pc = 0x1990D0u;
label_1990d0:
    // 0x1990d0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1990d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1990d4:
    // 0x1990d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1990d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1990d8:
    // 0x1990d8: 0x26100800  addiu       $s0, $s0, 0x800
    ctx->pc = 0x1990d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
label_1990dc:
    // 0x1990dc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1990e0:
    // 0x1990e0: 0xc065d26  jal         func_197498
label_1990e4:
    if (ctx->pc == 0x1990E4u) {
        ctx->pc = 0x1990E4u;
            // 0x1990e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1990E8u;
        goto label_1990e8;
    }
    ctx->pc = 0x1990E0u;
    SET_GPR_U32(ctx, 31, 0x1990E8u);
    ctx->pc = 0x1990E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1990E0u;
            // 0x1990e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197498u;
    if (runtime->hasFunction(0x197498u)) {
        auto targetFn = runtime->lookupFunction(0x197498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990E8u; }
        if (ctx->pc != 0x1990E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197498_0x197498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990E8u; }
        if (ctx->pc != 0x1990E8u) { return; }
    }
    ctx->pc = 0x1990E8u;
label_1990e8:
    // 0x1990e8: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
label_1990ec:
    if (ctx->pc == 0x1990ECu) {
        ctx->pc = 0x1990ECu;
            // 0x1990ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1990F0u;
        goto label_1990f0;
    }
    ctx->pc = 0x1990E8u;
    {
        const bool branch_taken_0x1990e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1990ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1990E8u;
            // 0x1990ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990e8) {
            ctx->pc = 0x1990D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1990d8;
        }
    }
    ctx->pc = 0x1990F0u;
label_1990f0:
    // 0x1990f0: 0xc065c90  jal         func_197240
label_1990f4:
    if (ctx->pc == 0x1990F4u) {
        ctx->pc = 0x1990F4u;
            // 0x1990f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1990F8u;
        goto label_1990f8;
    }
    ctx->pc = 0x1990F0u;
    SET_GPR_U32(ctx, 31, 0x1990F8u);
    ctx->pc = 0x1990F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1990F0u;
            // 0x1990f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197240u;
    if (runtime->hasFunction(0x197240u)) {
        auto targetFn = runtime->lookupFunction(0x197240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990F8u; }
        if (ctx->pc != 0x1990F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197240_0x197240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990F8u; }
        if (ctx->pc != 0x1990F8u) { return; }
    }
    ctx->pc = 0x1990F8u;
label_1990f8:
    // 0x1990f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1990f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1990fc:
    // 0x1990fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1990fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_199100:
    // 0x199100: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x199100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_199104:
    // 0x199104: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x199104u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_199108:
    // 0x199108: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x199108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19910c:
    // 0x19910c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x19910cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_199110:
    // 0x199110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199114:
    // 0x199114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_199118:
    // 0x199118: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19911c:
    // 0x19911c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19911cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_199120:
    // 0x199120: 0x806644a  j           func_199128
label_199124:
    if (ctx->pc == 0x199124u) {
        ctx->pc = 0x199124u;
            // 0x199124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x199128u;
        goto label_199128;
    }
    ctx->pc = 0x199120u;
    ctx->pc = 0x199124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199120u;
            // 0x199124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199128u;
    goto label_199128;
    ctx->pc = 0x199128u;
label_199128:
    // 0x199128: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x199128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_19912c:
    // 0x19912c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x19912cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_199130:
    // 0x199130: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x199130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199134:
    // 0x199134: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x199134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_199138:
    // 0x199138: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x199138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19913c:
    // 0x19913c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x19913cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_199140:
    // 0x199140: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x199140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199144:
    // 0x199144: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x199144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_199148:
    // 0x199148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19914c:
    // 0x19914c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x19914cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_199150:
    // 0x199150: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x199150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_199154:
    // 0x199154: 0xc04a576  jal         func_1295D8
label_199158:
    if (ctx->pc == 0x199158u) {
        ctx->pc = 0x199158u;
            // 0x199158: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x19915Cu;
        goto label_19915c;
    }
    ctx->pc = 0x199154u;
    SET_GPR_U32(ctx, 31, 0x19915Cu);
    ctx->pc = 0x199158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199154u;
            // 0x199158: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19915Cu; }
        if (ctx->pc != 0x19915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19915Cu; }
        if (ctx->pc != 0x19915Cu) { return; }
    }
    ctx->pc = 0x19915Cu;
label_19915c:
    // 0x19915c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19915cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_199160:
    // 0x199160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199164:
    // 0x199164: 0xc04a576  jal         func_1295D8
label_199168:
    if (ctx->pc == 0x199168u) {
        ctx->pc = 0x199168u;
            // 0x199168: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x19916Cu;
        goto label_19916c;
    }
    ctx->pc = 0x199164u;
    SET_GPR_U32(ctx, 31, 0x19916Cu);
    ctx->pc = 0x199168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199164u;
            // 0x199168: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19916Cu; }
        if (ctx->pc != 0x19916Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19916Cu; }
        if (ctx->pc != 0x19916Cu) { return; }
    }
    ctx->pc = 0x19916Cu;
label_19916c:
    // 0x19916c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19916cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_199170:
    // 0x199170: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_199174:
    if (ctx->pc == 0x199174u) {
        ctx->pc = 0x199174u;
            // 0x199174: 0x24848ae0  addiu       $a0, $a0, -0x7520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937312));
        ctx->pc = 0x199178u;
        goto label_199178;
    }
    ctx->pc = 0x199170u;
    {
        const bool branch_taken_0x199170 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x199174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199170u;
            // 0x199174: 0x24848ae0  addiu       $a0, $a0, -0x7520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199170) {
            ctx->pc = 0x199190u;
            goto label_199190;
        }
    }
    ctx->pc = 0x199178u;
label_199178:
    // 0x199178: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_19917c:
    if (ctx->pc == 0x19917Cu) {
        ctx->pc = 0x199180u;
        goto label_199180;
    }
    ctx->pc = 0x199178u;
    {
        const bool branch_taken_0x199178 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x199178) {
            ctx->pc = 0x199190u;
            goto label_199190;
        }
    }
    ctx->pc = 0x199180u;
label_199180:
    // 0x199180: 0x1e200007  bgtz        $s1, . + 4 + (0x7 << 2)
label_199184:
    if (ctx->pc == 0x199184u) {
        ctx->pc = 0x199184u;
            // 0x199184: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x199188u;
        goto label_199188;
    }
    ctx->pc = 0x199180u;
    {
        const bool branch_taken_0x199180 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x199184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199180u;
            // 0x199184: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199180) {
            ctx->pc = 0x1991A0u;
            goto label_1991a0;
        }
    }
    ctx->pc = 0x199188u;
label_199188:
    // 0x199188: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x199188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_19918c:
    // 0x19918c: 0x24848b08  addiu       $a0, $a0, -0x74F8
    ctx->pc = 0x19918cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937352));
label_199190:
    // 0x199190: 0xc0686c6  jal         func_1A1B18
label_199194:
    if (ctx->pc == 0x199194u) {
        ctx->pc = 0x199198u;
        goto label_199198;
    }
    ctx->pc = 0x199190u;
    SET_GPR_U32(ctx, 31, 0x199198u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199198u; }
        if (ctx->pc != 0x199198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199198u; }
        if (ctx->pc != 0x199198u) { return; }
    }
    ctx->pc = 0x199198u;
label_199198:
    // 0x199198: 0x10000050  b           . + 4 + (0x50 << 2)
label_19919c:
    if (ctx->pc == 0x19919Cu) {
        ctx->pc = 0x19919Cu;
            // 0x19919c: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x1991A0u;
        goto label_1991a0;
    }
    ctx->pc = 0x199198u;
    {
        const bool branch_taken_0x199198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199198u;
            // 0x19919c: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199198) {
            ctx->pc = 0x1992DCu;
            goto label_1992dc;
        }
    }
    ctx->pc = 0x1991A0u;
label_1991a0:
    // 0x1991a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1991a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1991a4:
    // 0x1991a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1991a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1991a8:
    // 0x1991a8: 0xc069b1e  jal         func_1A6C78
label_1991ac:
    if (ctx->pc == 0x1991ACu) {
        ctx->pc = 0x1991ACu;
            // 0x1991ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1991B0u;
        goto label_1991b0;
    }
    ctx->pc = 0x1991A8u;
    SET_GPR_U32(ctx, 31, 0x1991B0u);
    ctx->pc = 0x1991ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1991A8u;
            // 0x1991ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C78u;
    if (runtime->hasFunction(0x1A6C78u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991B0u; }
        if (ctx->pc != 0x1991B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6C78_0x1a6c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991B0u; }
        if (ctx->pc != 0x1991B0u) { return; }
    }
    ctx->pc = 0x1991B0u;
label_1991b0:
    // 0x1991b0: 0x97a30030  lhu         $v1, 0x30($sp)
    ctx->pc = 0x1991b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_1991b4:
    // 0x1991b4: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x1991b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1991b8:
    // 0x1991b8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_1991bc:
    if (ctx->pc == 0x1991BCu) {
        ctx->pc = 0x1991BCu;
            // 0x1991bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1991C0u;
        goto label_1991c0;
    }
    ctx->pc = 0x1991B8u;
    {
        const bool branch_taken_0x1991b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1991BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1991B8u;
            // 0x1991bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991b8) {
            ctx->pc = 0x199228u;
            goto label_199228;
        }
    }
    ctx->pc = 0x1991C0u;
label_1991c0:
    // 0x1991c0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1991c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1991c4:
    // 0x1991c4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1991c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1991c8:
    // 0x1991c8: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1991c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1991cc:
    // 0x1991cc: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1991ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1991d0:
    // 0x1991d0: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x1991d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1991d4:
    // 0x1991d4: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x1991d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1991d8:
    // 0x1991d8: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x1991d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1991dc:
    // 0x1991dc: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x1991dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1991e0:
    // 0x1991e0: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x1991e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1991e4:
    // 0x1991e4: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x1991e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1991e8:
    // 0x1991e8: 0xb263000f  sdl         $v1, 0xF($s3)
    ctx->pc = 0x1991e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1991ec:
    // 0x1991ec: 0xb6630008  sdr         $v1, 0x8($s3)
    ctx->pc = 0x1991ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1991f0:
    // 0x1991f0: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x1991f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1991f4:
    // 0x1991f4: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x1991f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1991f8:
    // 0x1991f8: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x1991f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1991fc:
    // 0x1991fc: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x1991fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199200:
    // 0x199200: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x199200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_199204:
    // 0x199204: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x199204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_199208:
    // 0x199208: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x199208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19920c:
    // 0x19920c: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x19920cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_199210:
    // 0x199210: 0xb2620027  sdl         $v0, 0x27($s3)
    ctx->pc = 0x199210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199214:
    // 0x199214: 0xb6620020  sdr         $v0, 0x20($s3)
    ctx->pc = 0x199214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199218:
    // 0x199218: 0xb263002f  sdl         $v1, 0x2F($s3)
    ctx->pc = 0x199218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19921c:
    // 0x19921c: 0xb6630028  sdr         $v1, 0x28($s3)
    ctx->pc = 0x19921cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199220:
    // 0x199220: 0x1000002d  b           . + 4 + (0x2D << 2)
label_199224:
    if (ctx->pc == 0x199224u) {
        ctx->pc = 0x199224u;
            // 0x199224: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x199228u;
        goto label_199228;
    }
    ctx->pc = 0x199220u;
    {
        const bool branch_taken_0x199220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199220u;
            // 0x199224: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199220) {
            ctx->pc = 0x1992D8u;
            goto label_1992d8;
        }
    }
    ctx->pc = 0x199228u;
label_199228:
    // 0x199228: 0xc0664be  jal         func_1992F8
label_19922c:
    if (ctx->pc == 0x19922Cu) {
        ctx->pc = 0x199230u;
        goto label_199230;
    }
    ctx->pc = 0x199228u;
    SET_GPR_U32(ctx, 31, 0x199230u);
    ctx->pc = 0x1992F8u;
    if (runtime->hasFunction(0x1992F8u)) {
        auto targetFn = runtime->lookupFunction(0x1992F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199230u; }
        if (ctx->pc != 0x199230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001992F8_0x1992f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199230u; }
        if (ctx->pc != 0x199230u) { return; }
    }
    ctx->pc = 0x199230u;
label_199230:
    // 0x199230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199234:
    // 0x199234: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x199234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_199238:
    // 0x199238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19923c:
    // 0x19923c: 0x8faa0044  lw          $t2, 0x44($sp)
    ctx->pc = 0x19923cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_199240:
    // 0x199240: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x199240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_199244:
    // 0x199244: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x199244u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_199248:
    // 0x199248: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x199248u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_19924c:
    // 0x19924c: 0x83a90058  lb          $t1, 0x58($sp)
    ctx->pc = 0x19924cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
label_199250:
    // 0x199250: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x199250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_199254:
    // 0x199254: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x199254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_199258:
    // 0x199258: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x199258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_19925c:
    // 0x19925c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x19925cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_199260:
    // 0x199260: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x199260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
label_199264:
    // 0x199264: 0xc066948  jal         func_19A520
label_199268:
    if (ctx->pc == 0x199268u) {
        ctx->pc = 0x199268u;
            // 0x199268: 0xafa9002c  sw          $t1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
        ctx->pc = 0x19926Cu;
        goto label_19926c;
    }
    ctx->pc = 0x199264u;
    SET_GPR_U32(ctx, 31, 0x19926Cu);
    ctx->pc = 0x199268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199264u;
            // 0x199268: 0xafa9002c  sw          $t1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A520u;
    if (runtime->hasFunction(0x19A520u)) {
        auto targetFn = runtime->lookupFunction(0x19A520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19926Cu; }
        if (ctx->pc != 0x19926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A520_0x19a520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19926Cu; }
        if (ctx->pc != 0x19926Cu) { return; }
    }
    ctx->pc = 0x19926Cu;
label_19926c:
    // 0x19926c: 0xc0664d2  jal         func_199348
label_199270:
    if (ctx->pc == 0x199270u) {
        ctx->pc = 0x199270u;
            // 0x199270: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x199274u;
        goto label_199274;
    }
    ctx->pc = 0x19926Cu;
    SET_GPR_U32(ctx, 31, 0x199274u);
    ctx->pc = 0x199270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19926Cu;
            // 0x199270: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199348u;
    if (runtime->hasFunction(0x199348u)) {
        auto targetFn = runtime->lookupFunction(0x199348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199274u; }
        if (ctx->pc != 0x199274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199348_0x199348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199274u; }
        if (ctx->pc != 0x199274u) { return; }
    }
    ctx->pc = 0x199274u;
label_199274:
    // 0x199274: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x199274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_199278:
    // 0x199278: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x199278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19927c:
    // 0x19927c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x19927cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_199280:
    // 0x199280: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x199280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_199284:
    // 0x199284: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x199284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_199288:
    // 0x199288: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x199288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_19928c:
    // 0x19928c: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x19928cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_199290:
    // 0x199290: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x199290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_199294:
    // 0x199294: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x199294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_199298:
    // 0x199298: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x199298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19929c:
    // 0x19929c: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x19929cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992a0:
    // 0x1992a0: 0xb263000f  sdl         $v1, 0xF($s3)
    ctx->pc = 0x1992a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992a4:
    // 0x1992a4: 0xb6630008  sdr         $v1, 0x8($s3)
    ctx->pc = 0x1992a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992a8:
    // 0x1992a8: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x1992a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992ac:
    // 0x1992ac: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x1992acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992b0:
    // 0x1992b0: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x1992b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992b4:
    // 0x1992b4: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x1992b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992b8:
    // 0x1992b8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1992b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1992bc:
    // 0x1992bc: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1992bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1992c0:
    // 0x1992c0: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x1992c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1992c4:
    // 0x1992c4: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x1992c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1992c8:
    // 0x1992c8: 0xb2620027  sdl         $v0, 0x27($s3)
    ctx->pc = 0x1992c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992cc:
    // 0x1992cc: 0xb6620020  sdr         $v0, 0x20($s3)
    ctx->pc = 0x1992ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992d0:
    // 0x1992d0: 0xb263002f  sdl         $v1, 0x2F($s3)
    ctx->pc = 0x1992d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992d4:
    // 0x1992d4: 0xb6630028  sdr         $v1, 0x28($s3)
    ctx->pc = 0x1992d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992d8:
    // 0x1992d8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1992d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1992dc:
    // 0x1992dc: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1992dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1992e0:
    // 0x1992e0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1992e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1992e4:
    // 0x1992e4: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1992e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1992e8:
    // 0x1992e8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1992e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1992ec:
    // 0x1992ec: 0x3e00008  jr          $ra
label_1992f0:
    if (ctx->pc == 0x1992F0u) {
        ctx->pc = 0x1992F0u;
            // 0x1992f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1992F4u;
        goto label_1992f4;
    }
    ctx->pc = 0x1992ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1992F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1992ECu;
            // 0x1992f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1992F4u;
label_1992f4:
    // 0x1992f4: 0x0  nop
    ctx->pc = 0x1992f4u;
    // NOP
}
