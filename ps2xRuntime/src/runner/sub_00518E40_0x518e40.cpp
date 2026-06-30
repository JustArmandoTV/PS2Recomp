#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00518E40
// Address: 0x518e40 - 0x519300
void sub_00518E40_0x518e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00518E40_0x518e40");
#endif

    switch (ctx->pc) {
        case 0x518e40u: goto label_518e40;
        case 0x518e44u: goto label_518e44;
        case 0x518e48u: goto label_518e48;
        case 0x518e4cu: goto label_518e4c;
        case 0x518e50u: goto label_518e50;
        case 0x518e54u: goto label_518e54;
        case 0x518e58u: goto label_518e58;
        case 0x518e5cu: goto label_518e5c;
        case 0x518e60u: goto label_518e60;
        case 0x518e64u: goto label_518e64;
        case 0x518e68u: goto label_518e68;
        case 0x518e6cu: goto label_518e6c;
        case 0x518e70u: goto label_518e70;
        case 0x518e74u: goto label_518e74;
        case 0x518e78u: goto label_518e78;
        case 0x518e7cu: goto label_518e7c;
        case 0x518e80u: goto label_518e80;
        case 0x518e84u: goto label_518e84;
        case 0x518e88u: goto label_518e88;
        case 0x518e8cu: goto label_518e8c;
        case 0x518e90u: goto label_518e90;
        case 0x518e94u: goto label_518e94;
        case 0x518e98u: goto label_518e98;
        case 0x518e9cu: goto label_518e9c;
        case 0x518ea0u: goto label_518ea0;
        case 0x518ea4u: goto label_518ea4;
        case 0x518ea8u: goto label_518ea8;
        case 0x518eacu: goto label_518eac;
        case 0x518eb0u: goto label_518eb0;
        case 0x518eb4u: goto label_518eb4;
        case 0x518eb8u: goto label_518eb8;
        case 0x518ebcu: goto label_518ebc;
        case 0x518ec0u: goto label_518ec0;
        case 0x518ec4u: goto label_518ec4;
        case 0x518ec8u: goto label_518ec8;
        case 0x518eccu: goto label_518ecc;
        case 0x518ed0u: goto label_518ed0;
        case 0x518ed4u: goto label_518ed4;
        case 0x518ed8u: goto label_518ed8;
        case 0x518edcu: goto label_518edc;
        case 0x518ee0u: goto label_518ee0;
        case 0x518ee4u: goto label_518ee4;
        case 0x518ee8u: goto label_518ee8;
        case 0x518eecu: goto label_518eec;
        case 0x518ef0u: goto label_518ef0;
        case 0x518ef4u: goto label_518ef4;
        case 0x518ef8u: goto label_518ef8;
        case 0x518efcu: goto label_518efc;
        case 0x518f00u: goto label_518f00;
        case 0x518f04u: goto label_518f04;
        case 0x518f08u: goto label_518f08;
        case 0x518f0cu: goto label_518f0c;
        case 0x518f10u: goto label_518f10;
        case 0x518f14u: goto label_518f14;
        case 0x518f18u: goto label_518f18;
        case 0x518f1cu: goto label_518f1c;
        case 0x518f20u: goto label_518f20;
        case 0x518f24u: goto label_518f24;
        case 0x518f28u: goto label_518f28;
        case 0x518f2cu: goto label_518f2c;
        case 0x518f30u: goto label_518f30;
        case 0x518f34u: goto label_518f34;
        case 0x518f38u: goto label_518f38;
        case 0x518f3cu: goto label_518f3c;
        case 0x518f40u: goto label_518f40;
        case 0x518f44u: goto label_518f44;
        case 0x518f48u: goto label_518f48;
        case 0x518f4cu: goto label_518f4c;
        case 0x518f50u: goto label_518f50;
        case 0x518f54u: goto label_518f54;
        case 0x518f58u: goto label_518f58;
        case 0x518f5cu: goto label_518f5c;
        case 0x518f60u: goto label_518f60;
        case 0x518f64u: goto label_518f64;
        case 0x518f68u: goto label_518f68;
        case 0x518f6cu: goto label_518f6c;
        case 0x518f70u: goto label_518f70;
        case 0x518f74u: goto label_518f74;
        case 0x518f78u: goto label_518f78;
        case 0x518f7cu: goto label_518f7c;
        case 0x518f80u: goto label_518f80;
        case 0x518f84u: goto label_518f84;
        case 0x518f88u: goto label_518f88;
        case 0x518f8cu: goto label_518f8c;
        case 0x518f90u: goto label_518f90;
        case 0x518f94u: goto label_518f94;
        case 0x518f98u: goto label_518f98;
        case 0x518f9cu: goto label_518f9c;
        case 0x518fa0u: goto label_518fa0;
        case 0x518fa4u: goto label_518fa4;
        case 0x518fa8u: goto label_518fa8;
        case 0x518facu: goto label_518fac;
        case 0x518fb0u: goto label_518fb0;
        case 0x518fb4u: goto label_518fb4;
        case 0x518fb8u: goto label_518fb8;
        case 0x518fbcu: goto label_518fbc;
        case 0x518fc0u: goto label_518fc0;
        case 0x518fc4u: goto label_518fc4;
        case 0x518fc8u: goto label_518fc8;
        case 0x518fccu: goto label_518fcc;
        case 0x518fd0u: goto label_518fd0;
        case 0x518fd4u: goto label_518fd4;
        case 0x518fd8u: goto label_518fd8;
        case 0x518fdcu: goto label_518fdc;
        case 0x518fe0u: goto label_518fe0;
        case 0x518fe4u: goto label_518fe4;
        case 0x518fe8u: goto label_518fe8;
        case 0x518fecu: goto label_518fec;
        case 0x518ff0u: goto label_518ff0;
        case 0x518ff4u: goto label_518ff4;
        case 0x518ff8u: goto label_518ff8;
        case 0x518ffcu: goto label_518ffc;
        case 0x519000u: goto label_519000;
        case 0x519004u: goto label_519004;
        case 0x519008u: goto label_519008;
        case 0x51900cu: goto label_51900c;
        case 0x519010u: goto label_519010;
        case 0x519014u: goto label_519014;
        case 0x519018u: goto label_519018;
        case 0x51901cu: goto label_51901c;
        case 0x519020u: goto label_519020;
        case 0x519024u: goto label_519024;
        case 0x519028u: goto label_519028;
        case 0x51902cu: goto label_51902c;
        case 0x519030u: goto label_519030;
        case 0x519034u: goto label_519034;
        case 0x519038u: goto label_519038;
        case 0x51903cu: goto label_51903c;
        case 0x519040u: goto label_519040;
        case 0x519044u: goto label_519044;
        case 0x519048u: goto label_519048;
        case 0x51904cu: goto label_51904c;
        case 0x519050u: goto label_519050;
        case 0x519054u: goto label_519054;
        case 0x519058u: goto label_519058;
        case 0x51905cu: goto label_51905c;
        case 0x519060u: goto label_519060;
        case 0x519064u: goto label_519064;
        case 0x519068u: goto label_519068;
        case 0x51906cu: goto label_51906c;
        case 0x519070u: goto label_519070;
        case 0x519074u: goto label_519074;
        case 0x519078u: goto label_519078;
        case 0x51907cu: goto label_51907c;
        case 0x519080u: goto label_519080;
        case 0x519084u: goto label_519084;
        case 0x519088u: goto label_519088;
        case 0x51908cu: goto label_51908c;
        case 0x519090u: goto label_519090;
        case 0x519094u: goto label_519094;
        case 0x519098u: goto label_519098;
        case 0x51909cu: goto label_51909c;
        case 0x5190a0u: goto label_5190a0;
        case 0x5190a4u: goto label_5190a4;
        case 0x5190a8u: goto label_5190a8;
        case 0x5190acu: goto label_5190ac;
        case 0x5190b0u: goto label_5190b0;
        case 0x5190b4u: goto label_5190b4;
        case 0x5190b8u: goto label_5190b8;
        case 0x5190bcu: goto label_5190bc;
        case 0x5190c0u: goto label_5190c0;
        case 0x5190c4u: goto label_5190c4;
        case 0x5190c8u: goto label_5190c8;
        case 0x5190ccu: goto label_5190cc;
        case 0x5190d0u: goto label_5190d0;
        case 0x5190d4u: goto label_5190d4;
        case 0x5190d8u: goto label_5190d8;
        case 0x5190dcu: goto label_5190dc;
        case 0x5190e0u: goto label_5190e0;
        case 0x5190e4u: goto label_5190e4;
        case 0x5190e8u: goto label_5190e8;
        case 0x5190ecu: goto label_5190ec;
        case 0x5190f0u: goto label_5190f0;
        case 0x5190f4u: goto label_5190f4;
        case 0x5190f8u: goto label_5190f8;
        case 0x5190fcu: goto label_5190fc;
        case 0x519100u: goto label_519100;
        case 0x519104u: goto label_519104;
        case 0x519108u: goto label_519108;
        case 0x51910cu: goto label_51910c;
        case 0x519110u: goto label_519110;
        case 0x519114u: goto label_519114;
        case 0x519118u: goto label_519118;
        case 0x51911cu: goto label_51911c;
        case 0x519120u: goto label_519120;
        case 0x519124u: goto label_519124;
        case 0x519128u: goto label_519128;
        case 0x51912cu: goto label_51912c;
        case 0x519130u: goto label_519130;
        case 0x519134u: goto label_519134;
        case 0x519138u: goto label_519138;
        case 0x51913cu: goto label_51913c;
        case 0x519140u: goto label_519140;
        case 0x519144u: goto label_519144;
        case 0x519148u: goto label_519148;
        case 0x51914cu: goto label_51914c;
        case 0x519150u: goto label_519150;
        case 0x519154u: goto label_519154;
        case 0x519158u: goto label_519158;
        case 0x51915cu: goto label_51915c;
        case 0x519160u: goto label_519160;
        case 0x519164u: goto label_519164;
        case 0x519168u: goto label_519168;
        case 0x51916cu: goto label_51916c;
        case 0x519170u: goto label_519170;
        case 0x519174u: goto label_519174;
        case 0x519178u: goto label_519178;
        case 0x51917cu: goto label_51917c;
        case 0x519180u: goto label_519180;
        case 0x519184u: goto label_519184;
        case 0x519188u: goto label_519188;
        case 0x51918cu: goto label_51918c;
        case 0x519190u: goto label_519190;
        case 0x519194u: goto label_519194;
        case 0x519198u: goto label_519198;
        case 0x51919cu: goto label_51919c;
        case 0x5191a0u: goto label_5191a0;
        case 0x5191a4u: goto label_5191a4;
        case 0x5191a8u: goto label_5191a8;
        case 0x5191acu: goto label_5191ac;
        case 0x5191b0u: goto label_5191b0;
        case 0x5191b4u: goto label_5191b4;
        case 0x5191b8u: goto label_5191b8;
        case 0x5191bcu: goto label_5191bc;
        case 0x5191c0u: goto label_5191c0;
        case 0x5191c4u: goto label_5191c4;
        case 0x5191c8u: goto label_5191c8;
        case 0x5191ccu: goto label_5191cc;
        case 0x5191d0u: goto label_5191d0;
        case 0x5191d4u: goto label_5191d4;
        case 0x5191d8u: goto label_5191d8;
        case 0x5191dcu: goto label_5191dc;
        case 0x5191e0u: goto label_5191e0;
        case 0x5191e4u: goto label_5191e4;
        case 0x5191e8u: goto label_5191e8;
        case 0x5191ecu: goto label_5191ec;
        case 0x5191f0u: goto label_5191f0;
        case 0x5191f4u: goto label_5191f4;
        case 0x5191f8u: goto label_5191f8;
        case 0x5191fcu: goto label_5191fc;
        case 0x519200u: goto label_519200;
        case 0x519204u: goto label_519204;
        case 0x519208u: goto label_519208;
        case 0x51920cu: goto label_51920c;
        case 0x519210u: goto label_519210;
        case 0x519214u: goto label_519214;
        case 0x519218u: goto label_519218;
        case 0x51921cu: goto label_51921c;
        case 0x519220u: goto label_519220;
        case 0x519224u: goto label_519224;
        case 0x519228u: goto label_519228;
        case 0x51922cu: goto label_51922c;
        case 0x519230u: goto label_519230;
        case 0x519234u: goto label_519234;
        case 0x519238u: goto label_519238;
        case 0x51923cu: goto label_51923c;
        case 0x519240u: goto label_519240;
        case 0x519244u: goto label_519244;
        case 0x519248u: goto label_519248;
        case 0x51924cu: goto label_51924c;
        case 0x519250u: goto label_519250;
        case 0x519254u: goto label_519254;
        case 0x519258u: goto label_519258;
        case 0x51925cu: goto label_51925c;
        case 0x519260u: goto label_519260;
        case 0x519264u: goto label_519264;
        case 0x519268u: goto label_519268;
        case 0x51926cu: goto label_51926c;
        case 0x519270u: goto label_519270;
        case 0x519274u: goto label_519274;
        case 0x519278u: goto label_519278;
        case 0x51927cu: goto label_51927c;
        case 0x519280u: goto label_519280;
        case 0x519284u: goto label_519284;
        case 0x519288u: goto label_519288;
        case 0x51928cu: goto label_51928c;
        case 0x519290u: goto label_519290;
        case 0x519294u: goto label_519294;
        case 0x519298u: goto label_519298;
        case 0x51929cu: goto label_51929c;
        case 0x5192a0u: goto label_5192a0;
        case 0x5192a4u: goto label_5192a4;
        case 0x5192a8u: goto label_5192a8;
        case 0x5192acu: goto label_5192ac;
        case 0x5192b0u: goto label_5192b0;
        case 0x5192b4u: goto label_5192b4;
        case 0x5192b8u: goto label_5192b8;
        case 0x5192bcu: goto label_5192bc;
        case 0x5192c0u: goto label_5192c0;
        case 0x5192c4u: goto label_5192c4;
        case 0x5192c8u: goto label_5192c8;
        case 0x5192ccu: goto label_5192cc;
        case 0x5192d0u: goto label_5192d0;
        case 0x5192d4u: goto label_5192d4;
        case 0x5192d8u: goto label_5192d8;
        case 0x5192dcu: goto label_5192dc;
        case 0x5192e0u: goto label_5192e0;
        case 0x5192e4u: goto label_5192e4;
        case 0x5192e8u: goto label_5192e8;
        case 0x5192ecu: goto label_5192ec;
        case 0x5192f0u: goto label_5192f0;
        case 0x5192f4u: goto label_5192f4;
        case 0x5192f8u: goto label_5192f8;
        case 0x5192fcu: goto label_5192fc;
        default: break;
    }

    ctx->pc = 0x518e40u;

label_518e40:
    // 0x518e40: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x518e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_518e44:
    // 0x518e44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x518e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_518e48:
    // 0x518e48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x518e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_518e4c:
    // 0x518e4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x518e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_518e50:
    // 0x518e50: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x518e50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_518e54:
    // 0x518e54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x518e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_518e58:
    // 0x518e58: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x518e58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_518e5c:
    // 0x518e5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x518e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_518e60:
    // 0x518e60: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x518e60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_518e64:
    // 0x518e64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x518e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_518e68:
    // 0x518e68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x518e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_518e6c:
    // 0x518e6c: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x518e6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_518e70:
    // 0x518e70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x518e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_518e74:
    // 0x518e74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x518e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_518e78:
    // 0x518e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x518e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_518e7c:
    // 0x518e7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x518e7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_518e80:
    // 0x518e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x518e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_518e84:
    // 0x518e84: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x518e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_518e88:
    // 0x518e88: 0x8cb50000  lw          $s5, 0x0($a1)
    ctx->pc = 0x518e88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_518e8c:
    // 0x518e8c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x518e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_518e90:
    // 0x518e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x518e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_518e94:
    // 0x518e94: 0xc04f278  jal         func_13C9E0
label_518e98:
    if (ctx->pc == 0x518E98u) {
        ctx->pc = 0x518E98u;
            // 0x518e98: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x518E9Cu;
        goto label_518e9c;
    }
    ctx->pc = 0x518E94u;
    SET_GPR_U32(ctx, 31, 0x518E9Cu);
    ctx->pc = 0x518E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518E94u;
            // 0x518e98: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518E9Cu; }
        if (ctx->pc != 0x518E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518E9Cu; }
        if (ctx->pc != 0x518E9Cu) { return; }
    }
    ctx->pc = 0x518E9Cu;
label_518e9c:
    // 0x518e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x518e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_518ea0:
    // 0x518ea0: 0xc04ce80  jal         func_133A00
label_518ea4:
    if (ctx->pc == 0x518EA4u) {
        ctx->pc = 0x518EA4u;
            // 0x518ea4: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x518EA8u;
        goto label_518ea8;
    }
    ctx->pc = 0x518EA0u;
    SET_GPR_U32(ctx, 31, 0x518EA8u);
    ctx->pc = 0x518EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518EA0u;
            // 0x518ea4: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518EA8u; }
        if (ctx->pc != 0x518EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518EA8u; }
        if (ctx->pc != 0x518EA8u) { return; }
    }
    ctx->pc = 0x518EA8u;
label_518ea8:
    // 0x518ea8: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x518ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_518eac:
    // 0x518eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x518eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_518eb0:
    // 0x518eb0: 0xc66d0034  lwc1        $f13, 0x34($s3)
    ctx->pc = 0x518eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_518eb4:
    // 0x518eb4: 0xc66e0038  lwc1        $f14, 0x38($s3)
    ctx->pc = 0x518eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_518eb8:
    // 0x518eb8: 0xc04ce50  jal         func_133940
label_518ebc:
    if (ctx->pc == 0x518EBCu) {
        ctx->pc = 0x518EBCu;
            // 0x518ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518EC0u;
        goto label_518ec0;
    }
    ctx->pc = 0x518EB8u;
    SET_GPR_U32(ctx, 31, 0x518EC0u);
    ctx->pc = 0x518EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518EB8u;
            // 0x518ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518EC0u; }
        if (ctx->pc != 0x518EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518EC0u; }
        if (ctx->pc != 0x518EC0u) { return; }
    }
    ctx->pc = 0x518EC0u;
label_518ec0:
    // 0x518ec0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x518ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_518ec4:
    // 0x518ec4: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x518ec4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_518ec8:
    // 0x518ec8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x518ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_518ecc:
    // 0x518ecc: 0xc07698c  jal         func_1DA630
label_518ed0:
    if (ctx->pc == 0x518ED0u) {
        ctx->pc = 0x518ED0u;
            // 0x518ed0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518ED4u;
        goto label_518ed4;
    }
    ctx->pc = 0x518ECCu;
    SET_GPR_U32(ctx, 31, 0x518ED4u);
    ctx->pc = 0x518ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518ECCu;
            // 0x518ed0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518ED4u; }
        if (ctx->pc != 0x518ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518ED4u; }
        if (ctx->pc != 0x518ED4u) { return; }
    }
    ctx->pc = 0x518ED4u;
label_518ed4:
    // 0x518ed4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x518ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_518ed8:
    // 0x518ed8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_518edc:
    if (ctx->pc == 0x518EDCu) {
        ctx->pc = 0x518EE0u;
        goto label_518ee0;
    }
    ctx->pc = 0x518ED8u;
    {
        const bool branch_taken_0x518ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x518ed8) {
            ctx->pc = 0x518EE8u;
            goto label_518ee8;
        }
    }
    ctx->pc = 0x518EE0u;
label_518ee0:
    // 0x518ee0: 0x10000033  b           . + 4 + (0x33 << 2)
label_518ee4:
    if (ctx->pc == 0x518EE4u) {
        ctx->pc = 0x518EE4u;
            // 0x518ee4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x518EE8u;
        goto label_518ee8;
    }
    ctx->pc = 0x518EE0u;
    {
        const bool branch_taken_0x518ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x518EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518EE0u;
            // 0x518ee4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518ee0) {
            ctx->pc = 0x518FB0u;
            goto label_518fb0;
        }
    }
    ctx->pc = 0x518EE8u;
label_518ee8:
    // 0x518ee8: 0xc0576f4  jal         func_15DBD0
label_518eec:
    if (ctx->pc == 0x518EECu) {
        ctx->pc = 0x518EF0u;
        goto label_518ef0;
    }
    ctx->pc = 0x518EE8u;
    SET_GPR_U32(ctx, 31, 0x518EF0u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518EF0u; }
        if (ctx->pc != 0x518EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518EF0u; }
        if (ctx->pc != 0x518EF0u) { return; }
    }
    ctx->pc = 0x518EF0u;
label_518ef0:
    // 0x518ef0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x518ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_518ef4:
    // 0x518ef4: 0xc076984  jal         func_1DA610
label_518ef8:
    if (ctx->pc == 0x518EF8u) {
        ctx->pc = 0x518EF8u;
            // 0x518ef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518EFCu;
        goto label_518efc;
    }
    ctx->pc = 0x518EF4u;
    SET_GPR_U32(ctx, 31, 0x518EFCu);
    ctx->pc = 0x518EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518EF4u;
            // 0x518ef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518EFCu; }
        if (ctx->pc != 0x518EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518EFCu; }
        if (ctx->pc != 0x518EFCu) { return; }
    }
    ctx->pc = 0x518EFCu;
label_518efc:
    // 0x518efc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x518efcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_518f00:
    // 0x518f00: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x518f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_518f04:
    // 0x518f04: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x518f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_518f08:
    // 0x518f08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x518f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_518f0c:
    // 0x518f0c: 0xc442ce30  lwc1        $f2, -0x31D0($v0)
    ctx->pc = 0x518f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_518f10:
    // 0x518f10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x518f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_518f14:
    // 0x518f14: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x518f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_518f18:
    // 0x518f18: 0xc441ce38  lwc1        $f1, -0x31C8($v0)
    ctx->pc = 0x518f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_518f1c:
    // 0x518f1c: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x518f1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_518f20:
    // 0x518f20: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x518f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_518f24:
    // 0x518f24: 0xc440ce3c  lwc1        $f0, -0x31C4($v0)
    ctx->pc = 0x518f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_518f28:
    // 0x518f28: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x518f28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_518f2c:
    // 0x518f2c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x518f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_518f30:
    // 0x518f30: 0x8c42ce34  lw          $v0, -0x31CC($v0)
    ctx->pc = 0x518f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954548)));
label_518f34:
    // 0x518f34: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x518f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_518f38:
    // 0x518f38: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x518f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_518f3c:
    // 0x518f3c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x518f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_518f40:
    // 0x518f40: 0xc04cca0  jal         func_133280
label_518f44:
    if (ctx->pc == 0x518F44u) {
        ctx->pc = 0x518F44u;
            // 0x518f44: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x518F48u;
        goto label_518f48;
    }
    ctx->pc = 0x518F40u;
    SET_GPR_U32(ctx, 31, 0x518F48u);
    ctx->pc = 0x518F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518F40u;
            // 0x518f44: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F48u; }
        if (ctx->pc != 0x518F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F48u; }
        if (ctx->pc != 0x518F48u) { return; }
    }
    ctx->pc = 0x518F48u;
label_518f48:
    // 0x518f48: 0xc076980  jal         func_1DA600
label_518f4c:
    if (ctx->pc == 0x518F4Cu) {
        ctx->pc = 0x518F4Cu;
            // 0x518f4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518F50u;
        goto label_518f50;
    }
    ctx->pc = 0x518F48u;
    SET_GPR_U32(ctx, 31, 0x518F50u);
    ctx->pc = 0x518F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518F48u;
            // 0x518f4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F50u; }
        if (ctx->pc != 0x518F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F50u; }
        if (ctx->pc != 0x518F50u) { return; }
    }
    ctx->pc = 0x518F50u;
label_518f50:
    // 0x518f50: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x518f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_518f54:
    // 0x518f54: 0xc04cc34  jal         func_1330D0
label_518f58:
    if (ctx->pc == 0x518F58u) {
        ctx->pc = 0x518F58u;
            // 0x518f58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518F5Cu;
        goto label_518f5c;
    }
    ctx->pc = 0x518F54u;
    SET_GPR_U32(ctx, 31, 0x518F5Cu);
    ctx->pc = 0x518F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518F54u;
            // 0x518f58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F5Cu; }
        if (ctx->pc != 0x518F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F5Cu; }
        if (ctx->pc != 0x518F5Cu) { return; }
    }
    ctx->pc = 0x518F5Cu;
label_518f5c:
    // 0x518f5c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x518f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_518f60:
    // 0x518f60: 0xc461c090  lwc1        $f1, -0x3F70($v1)
    ctx->pc = 0x518f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_518f64:
    // 0x518f64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x518f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_518f68:
    // 0x518f68: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_518f6c:
    if (ctx->pc == 0x518F6Cu) {
        ctx->pc = 0x518F6Cu;
            // 0x518f6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518F70u;
        goto label_518f70;
    }
    ctx->pc = 0x518F68u;
    {
        const bool branch_taken_0x518f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x518f68) {
            ctx->pc = 0x518F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518F68u;
            // 0x518f6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518F78u;
            goto label_518f78;
        }
    }
    ctx->pc = 0x518F70u;
label_518f70:
    // 0x518f70: 0x1000000f  b           . + 4 + (0xF << 2)
label_518f74:
    if (ctx->pc == 0x518F74u) {
        ctx->pc = 0x518F74u;
            // 0x518f74: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x518F78u;
        goto label_518f78;
    }
    ctx->pc = 0x518F70u;
    {
        const bool branch_taken_0x518f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x518F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518F70u;
            // 0x518f74: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518f70) {
            ctx->pc = 0x518FB0u;
            goto label_518fb0;
        }
    }
    ctx->pc = 0x518F78u;
label_518f78:
    // 0x518f78: 0xc07697c  jal         func_1DA5F0
label_518f7c:
    if (ctx->pc == 0x518F7Cu) {
        ctx->pc = 0x518F80u;
        goto label_518f80;
    }
    ctx->pc = 0x518F78u;
    SET_GPR_U32(ctx, 31, 0x518F80u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F80u; }
        if (ctx->pc != 0x518F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F80u; }
        if (ctx->pc != 0x518F80u) { return; }
    }
    ctx->pc = 0x518F80u;
label_518f80:
    // 0x518f80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x518f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_518f84:
    // 0x518f84: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x518f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_518f88:
    // 0x518f88: 0xc04cd60  jal         func_133580
label_518f8c:
    if (ctx->pc == 0x518F8Cu) {
        ctx->pc = 0x518F8Cu;
            // 0x518f8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518F90u;
        goto label_518f90;
    }
    ctx->pc = 0x518F88u;
    SET_GPR_U32(ctx, 31, 0x518F90u);
    ctx->pc = 0x518F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518F88u;
            // 0x518f8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F90u; }
        if (ctx->pc != 0x518F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F90u; }
        if (ctx->pc != 0x518F90u) { return; }
    }
    ctx->pc = 0x518F90u;
label_518f90:
    // 0x518f90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x518f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_518f94:
    // 0x518f94: 0xc04c650  jal         func_131940
label_518f98:
    if (ctx->pc == 0x518F98u) {
        ctx->pc = 0x518F98u;
            // 0x518f98: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x518F9Cu;
        goto label_518f9c;
    }
    ctx->pc = 0x518F94u;
    SET_GPR_U32(ctx, 31, 0x518F9Cu);
    ctx->pc = 0x518F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518F94u;
            // 0x518f98: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F9Cu; }
        if (ctx->pc != 0x518F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518F9Cu; }
        if (ctx->pc != 0x518F9Cu) { return; }
    }
    ctx->pc = 0x518F9Cu;
label_518f9c:
    // 0x518f9c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x518f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_518fa0:
    // 0x518fa0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x518fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_518fa4:
    // 0x518fa4: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x518fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_518fa8:
    // 0x518fa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x518fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_518fac:
    // 0x518fac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x518facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_518fb0:
    // 0x518fb0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x518fb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_518fb4:
    // 0x518fb4: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_518fb8:
    if (ctx->pc == 0x518FB8u) {
        ctx->pc = 0x518FB8u;
            // 0x518fb8: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x518FBCu;
        goto label_518fbc;
    }
    ctx->pc = 0x518FB4u;
    {
        const bool branch_taken_0x518fb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x518FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518FB4u;
            // 0x518fb8: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518fb4) {
            ctx->pc = 0x519044u;
            goto label_519044;
        }
    }
    ctx->pc = 0x518FBCu;
label_518fbc:
    // 0x518fbc: 0xc0517c0  jal         func_145F00
label_518fc0:
    if (ctx->pc == 0x518FC0u) {
        ctx->pc = 0x518FC0u;
            // 0x518fc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518FC4u;
        goto label_518fc4;
    }
    ctx->pc = 0x518FBCu;
    SET_GPR_U32(ctx, 31, 0x518FC4u);
    ctx->pc = 0x518FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518FBCu;
            // 0x518fc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F00u;
    if (runtime->hasFunction(0x145F00u)) {
        auto targetFn = runtime->lookupFunction(0x145F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518FC4u; }
        if (ctx->pc != 0x518FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145F00_0x145f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518FC4u; }
        if (ctx->pc != 0x518FC4u) { return; }
    }
    ctx->pc = 0x518FC4u;
label_518fc4:
    // 0x518fc4: 0xc04e738  jal         func_139CE0
label_518fc8:
    if (ctx->pc == 0x518FC8u) {
        ctx->pc = 0x518FC8u;
            // 0x518fc8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x518FCCu;
        goto label_518fcc;
    }
    ctx->pc = 0x518FC4u;
    SET_GPR_U32(ctx, 31, 0x518FCCu);
    ctx->pc = 0x518FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518FC4u;
            // 0x518fc8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518FCCu; }
        if (ctx->pc != 0x518FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518FCCu; }
        if (ctx->pc != 0x518FCCu) { return; }
    }
    ctx->pc = 0x518FCCu;
label_518fcc:
    // 0x518fcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x518fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_518fd0:
    // 0x518fd0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x518fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_518fd4:
    // 0x518fd4: 0xc04cd60  jal         func_133580
label_518fd8:
    if (ctx->pc == 0x518FD8u) {
        ctx->pc = 0x518FD8u;
            // 0x518fd8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x518FDCu;
        goto label_518fdc;
    }
    ctx->pc = 0x518FD4u;
    SET_GPR_U32(ctx, 31, 0x518FDCu);
    ctx->pc = 0x518FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518FD4u;
            // 0x518fd8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518FDCu; }
        if (ctx->pc != 0x518FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518FDCu; }
        if (ctx->pc != 0x518FDCu) { return; }
    }
    ctx->pc = 0x518FDCu;
label_518fdc:
    // 0x518fdc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x518fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_518fe0:
    // 0x518fe0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x518fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_518fe4:
    // 0x518fe4: 0xc04cd60  jal         func_133580
label_518fe8:
    if (ctx->pc == 0x518FE8u) {
        ctx->pc = 0x518FE8u;
            // 0x518fe8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518FECu;
        goto label_518fec;
    }
    ctx->pc = 0x518FE4u;
    SET_GPR_U32(ctx, 31, 0x518FECu);
    ctx->pc = 0x518FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518FE4u;
            // 0x518fe8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518FECu; }
        if (ctx->pc != 0x518FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518FECu; }
        if (ctx->pc != 0x518FECu) { return; }
    }
    ctx->pc = 0x518FECu;
label_518fec:
    // 0x518fec: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x518fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_518ff0:
    // 0x518ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x518ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_518ff4:
    // 0x518ff4: 0xc04e4a4  jal         func_139290
label_518ff8:
    if (ctx->pc == 0x518FF8u) {
        ctx->pc = 0x518FF8u;
            // 0x518ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518FFCu;
        goto label_518ffc;
    }
    ctx->pc = 0x518FF4u;
    SET_GPR_U32(ctx, 31, 0x518FFCu);
    ctx->pc = 0x518FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518FF4u;
            // 0x518ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518FFCu; }
        if (ctx->pc != 0x518FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518FFCu; }
        if (ctx->pc != 0x518FFCu) { return; }
    }
    ctx->pc = 0x518FFCu;
label_518ffc:
    // 0x518ffc: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x518ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_519000:
    // 0x519000: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x519000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_519004:
    // 0x519004: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x519004u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_519008:
    // 0x519008: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x519008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_51900c:
    // 0x51900c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x51900cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_519010:
    // 0x519010: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x519010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_519014:
    // 0x519014: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x519014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_519018:
    // 0x519018: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x519018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_51901c:
    // 0x51901c: 0xc04cff4  jal         func_133FD0
label_519020:
    if (ctx->pc == 0x519020u) {
        ctx->pc = 0x519020u;
            // 0x519020: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519024u;
        goto label_519024;
    }
    ctx->pc = 0x51901Cu;
    SET_GPR_U32(ctx, 31, 0x519024u);
    ctx->pc = 0x519020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51901Cu;
            // 0x519020: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519024u; }
        if (ctx->pc != 0x519024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519024u; }
        if (ctx->pc != 0x519024u) { return; }
    }
    ctx->pc = 0x519024u;
label_519024:
    // 0x519024: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x519024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_519028:
    // 0x519028: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x519028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_51902c:
    // 0x51902c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x51902cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_519030:
    // 0x519030: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x519030u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_519034:
    // 0x519034: 0xc0538d8  jal         func_14E360
label_519038:
    if (ctx->pc == 0x519038u) {
        ctx->pc = 0x519038u;
            // 0x519038: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x51903Cu;
        goto label_51903c;
    }
    ctx->pc = 0x519034u;
    SET_GPR_U32(ctx, 31, 0x51903Cu);
    ctx->pc = 0x519038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519034u;
            // 0x519038: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51903Cu; }
        if (ctx->pc != 0x51903Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51903Cu; }
        if (ctx->pc != 0x51903Cu) { return; }
    }
    ctx->pc = 0x51903Cu;
label_51903c:
    // 0x51903c: 0xc0517c0  jal         func_145F00
label_519040:
    if (ctx->pc == 0x519040u) {
        ctx->pc = 0x519040u;
            // 0x519040: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x519044u;
        goto label_519044;
    }
    ctx->pc = 0x51903Cu;
    SET_GPR_U32(ctx, 31, 0x519044u);
    ctx->pc = 0x519040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51903Cu;
            // 0x519040: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F00u;
    if (runtime->hasFunction(0x145F00u)) {
        auto targetFn = runtime->lookupFunction(0x145F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519044u; }
        if (ctx->pc != 0x519044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145F00_0x145f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519044u; }
        if (ctx->pc != 0x519044u) { return; }
    }
    ctx->pc = 0x519044u;
label_519044:
    // 0x519044: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x519044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_519048:
    // 0x519048: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x519048u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_51904c:
    // 0x51904c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x51904cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_519050:
    // 0x519050: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x519050u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_519054:
    // 0x519054: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x519054u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_519058:
    // 0x519058: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x519058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_51905c:
    // 0x51905c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51905cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_519060:
    // 0x519060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x519060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_519064:
    // 0x519064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x519064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_519068:
    // 0x519068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x519068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51906c:
    // 0x51906c: 0x3e00008  jr          $ra
label_519070:
    if (ctx->pc == 0x519070u) {
        ctx->pc = 0x519070u;
            // 0x519070: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x519074u;
        goto label_519074;
    }
    ctx->pc = 0x51906Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x519070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51906Cu;
            // 0x519070: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x519074u;
label_519074:
    // 0x519074: 0x0  nop
    ctx->pc = 0x519074u;
    // NOP
label_519078:
    // 0x519078: 0x0  nop
    ctx->pc = 0x519078u;
    // NOP
label_51907c:
    // 0x51907c: 0x0  nop
    ctx->pc = 0x51907cu;
    // NOP
label_519080:
    // 0x519080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x519080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_519084:
    // 0x519084: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x519084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_519088:
    // 0x519088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x519088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51908c:
    // 0x51908c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51908cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_519090:
    // 0x519090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x519090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_519094:
    // 0x519094: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x519094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_519098:
    // 0x519098: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x519098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_51909c:
    // 0x51909c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51909cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_5190a0:
    // 0x5190a0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x5190a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_5190a4:
    // 0x5190a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5190a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5190a8:
    // 0x5190a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x5190a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_5190ac:
    // 0x5190ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5190acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5190b0:
    // 0x5190b0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x5190b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_5190b4:
    // 0x5190b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x5190b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_5190b8:
    // 0x5190b8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x5190b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_5190bc:
    // 0x5190bc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x5190bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_5190c0:
    // 0x5190c0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x5190c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_5190c4:
    // 0x5190c4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x5190c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_5190c8:
    // 0x5190c8: 0xc04cbd8  jal         func_132F60
label_5190cc:
    if (ctx->pc == 0x5190CCu) {
        ctx->pc = 0x5190CCu;
            // 0x5190cc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x5190D0u;
        goto label_5190d0;
    }
    ctx->pc = 0x5190C8u;
    SET_GPR_U32(ctx, 31, 0x5190D0u);
    ctx->pc = 0x5190CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5190C8u;
            // 0x5190cc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5190D0u; }
        if (ctx->pc != 0x5190D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5190D0u; }
        if (ctx->pc != 0x5190D0u) { return; }
    }
    ctx->pc = 0x5190D0u;
label_5190d0:
    // 0x5190d0: 0xc04c968  jal         func_1325A0
label_5190d4:
    if (ctx->pc == 0x5190D4u) {
        ctx->pc = 0x5190D4u;
            // 0x5190d4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x5190D8u;
        goto label_5190d8;
    }
    ctx->pc = 0x5190D0u;
    SET_GPR_U32(ctx, 31, 0x5190D8u);
    ctx->pc = 0x5190D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5190D0u;
            // 0x5190d4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5190D8u; }
        if (ctx->pc != 0x5190D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5190D8u; }
        if (ctx->pc != 0x5190D8u) { return; }
    }
    ctx->pc = 0x5190D8u;
label_5190d8:
    // 0x5190d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5190d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5190dc:
    // 0x5190dc: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x5190dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_5190e0:
    // 0x5190e0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x5190e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5190e4:
    // 0x5190e4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x5190e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_5190e8:
    // 0x5190e8: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x5190e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_5190ec:
    // 0x5190ec: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x5190ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_5190f0:
    // 0x5190f0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x5190f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_5190f4:
    // 0x5190f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x5190f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_5190f8:
    // 0x5190f8: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x5190f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_5190fc:
    // 0x5190fc: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x5190fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
label_519100:
    // 0x519100: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x519100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
label_519104:
    // 0x519104: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x519104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
label_519108:
    // 0x519108: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x519108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
label_51910c:
    // 0x51910c: 0x24841010  addiu       $a0, $a0, 0x1010
    ctx->pc = 0x51910cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4112));
label_519110:
    // 0x519110: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x519110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_519114:
    // 0x519114: 0x24631050  addiu       $v1, $v1, 0x1050
    ctx->pc = 0x519114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4176));
label_519118:
    // 0x519118: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x519118u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_51911c:
    // 0x51911c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51911cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_519120:
    // 0x519120: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x519120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
label_519124:
    // 0x519124: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x519124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_519128:
    // 0x519128: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x519128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_51912c:
    // 0x51912c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x51912cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_519130:
    // 0x519130: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x519130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_519134:
    // 0x519134: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x519134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_519138:
    // 0x519138: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x519138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_51913c:
    // 0x51913c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51913cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_519140:
    // 0x519140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x519140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_519144:
    // 0x519144: 0x3e00008  jr          $ra
label_519148:
    if (ctx->pc == 0x519148u) {
        ctx->pc = 0x519148u;
            // 0x519148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51914Cu;
        goto label_51914c;
    }
    ctx->pc = 0x519144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x519148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519144u;
            // 0x519148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51914Cu;
label_51914c:
    // 0x51914c: 0x0  nop
    ctx->pc = 0x51914cu;
    // NOP
label_519150:
    // 0x519150: 0x81462dc  j           func_518B70
label_519154:
    if (ctx->pc == 0x519154u) {
        ctx->pc = 0x519154u;
            // 0x519154: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x519158u;
        goto label_519158;
    }
    ctx->pc = 0x519150u;
    ctx->pc = 0x519154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519150u;
            // 0x519154: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518B70u;
    {
        auto targetFn = runtime->lookupFunction(0x518B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x519158u;
label_519158:
    // 0x519158: 0x0  nop
    ctx->pc = 0x519158u;
    // NOP
label_51915c:
    // 0x51915c: 0x0  nop
    ctx->pc = 0x51915cu;
    // NOP
label_519160:
    // 0x519160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x519160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_519164:
    // 0x519164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x519164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_519168:
    // 0x519168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x519168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51916c:
    // 0x51916c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51916cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_519170:
    // 0x519170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x519170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_519174:
    // 0x519174: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
label_519178:
    if (ctx->pc == 0x519178u) {
        ctx->pc = 0x519178u;
            // 0x519178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51917Cu;
        goto label_51917c;
    }
    ctx->pc = 0x519174u;
    {
        const bool branch_taken_0x519174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x519178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519174u;
            // 0x519178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519174) {
            ctx->pc = 0x5192E8u;
            goto label_5192e8;
        }
    }
    ctx->pc = 0x51917Cu;
label_51917c:
    // 0x51917c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51917cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_519180:
    // 0x519180: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x519180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_519184:
    // 0x519184: 0x24635740  addiu       $v1, $v1, 0x5740
    ctx->pc = 0x519184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22336));
label_519188:
    // 0x519188: 0x24425778  addiu       $v0, $v0, 0x5778
    ctx->pc = 0x519188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22392));
label_51918c:
    // 0x51918c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x51918cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_519190:
    // 0x519190: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x519190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_519194:
    // 0x519194: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x519194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_519198:
    // 0x519198: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x519198u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_51919c:
    // 0x51919c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_5191a0:
    if (ctx->pc == 0x5191A0u) {
        ctx->pc = 0x5191A0u;
            // 0x5191a0: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->pc = 0x5191A4u;
        goto label_5191a4;
    }
    ctx->pc = 0x51919Cu;
    {
        const bool branch_taken_0x51919c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51919c) {
            ctx->pc = 0x5191A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51919Cu;
            // 0x5191a0: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5191DCu;
            goto label_5191dc;
        }
    }
    ctx->pc = 0x5191A4u;
label_5191a4:
    // 0x5191a4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x5191a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_5191a8:
    // 0x5191a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x5191a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_5191ac:
    // 0x5191ac: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x5191acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_5191b0:
    // 0x5191b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x5191b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_5191b4:
    // 0x5191b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5191b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5191b8:
    // 0x5191b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_5191bc:
    if (ctx->pc == 0x5191BCu) {
        ctx->pc = 0x5191C0u;
        goto label_5191c0;
    }
    ctx->pc = 0x5191B8u;
    {
        const bool branch_taken_0x5191b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5191b8) {
            ctx->pc = 0x5191D8u;
            goto label_5191d8;
        }
    }
    ctx->pc = 0x5191C0u;
label_5191c0:
    // 0x5191c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_5191c4:
    if (ctx->pc == 0x5191C4u) {
        ctx->pc = 0x5191C8u;
        goto label_5191c8;
    }
    ctx->pc = 0x5191C0u;
    {
        const bool branch_taken_0x5191c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5191c0) {
            ctx->pc = 0x5191D8u;
            goto label_5191d8;
        }
    }
    ctx->pc = 0x5191C8u;
label_5191c8:
    // 0x5191c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5191c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5191cc:
    // 0x5191cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5191ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5191d0:
    // 0x5191d0: 0x320f809  jalr        $t9
label_5191d4:
    if (ctx->pc == 0x5191D4u) {
        ctx->pc = 0x5191D4u;
            // 0x5191d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5191D8u;
        goto label_5191d8;
    }
    ctx->pc = 0x5191D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5191D8u);
        ctx->pc = 0x5191D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5191D0u;
            // 0x5191d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5191D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5191D8u; }
            if (ctx->pc != 0x5191D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5191D8u;
label_5191d8:
    // 0x5191d8: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x5191d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_5191dc:
    // 0x5191dc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x5191dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_5191e0:
    // 0x5191e0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_5191e4:
    if (ctx->pc == 0x5191E4u) {
        ctx->pc = 0x5191E4u;
            // 0x5191e4: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x5191E8u;
        goto label_5191e8;
    }
    ctx->pc = 0x5191E0u;
    {
        const bool branch_taken_0x5191e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5191e0) {
            ctx->pc = 0x5191E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5191E0u;
            // 0x5191e4: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519220u;
            goto label_519220;
        }
    }
    ctx->pc = 0x5191E8u;
label_5191e8:
    // 0x5191e8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x5191e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_5191ec:
    // 0x5191ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x5191ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_5191f0:
    // 0x5191f0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x5191f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_5191f4:
    // 0x5191f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x5191f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_5191f8:
    // 0x5191f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5191f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5191fc:
    // 0x5191fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_519200:
    if (ctx->pc == 0x519200u) {
        ctx->pc = 0x519204u;
        goto label_519204;
    }
    ctx->pc = 0x5191FCu;
    {
        const bool branch_taken_0x5191fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5191fc) {
            ctx->pc = 0x51921Cu;
            goto label_51921c;
        }
    }
    ctx->pc = 0x519204u;
label_519204:
    // 0x519204: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_519208:
    if (ctx->pc == 0x519208u) {
        ctx->pc = 0x51920Cu;
        goto label_51920c;
    }
    ctx->pc = 0x519204u;
    {
        const bool branch_taken_0x519204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x519204) {
            ctx->pc = 0x51921Cu;
            goto label_51921c;
        }
    }
    ctx->pc = 0x51920Cu;
label_51920c:
    // 0x51920c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51920cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_519210:
    // 0x519210: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x519210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_519214:
    // 0x519214: 0x320f809  jalr        $t9
label_519218:
    if (ctx->pc == 0x519218u) {
        ctx->pc = 0x519218u;
            // 0x519218: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51921Cu;
        goto label_51921c;
    }
    ctx->pc = 0x519214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51921Cu);
        ctx->pc = 0x519218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519214u;
            // 0x519218: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51921Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51921Cu; }
            if (ctx->pc != 0x51921Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51921Cu;
label_51921c:
    // 0x51921c: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x51921cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_519220:
    // 0x519220: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x519220u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_519224:
    // 0x519224: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_519228:
    if (ctx->pc == 0x519228u) {
        ctx->pc = 0x519228u;
            // 0x519228: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->pc = 0x51922Cu;
        goto label_51922c;
    }
    ctx->pc = 0x519224u;
    {
        const bool branch_taken_0x519224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x519224) {
            ctx->pc = 0x519228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519224u;
            // 0x519228: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519264u;
            goto label_519264;
        }
    }
    ctx->pc = 0x51922Cu;
label_51922c:
    // 0x51922c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x51922cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_519230:
    // 0x519230: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x519230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_519234:
    // 0x519234: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x519234u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_519238:
    // 0x519238: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x519238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_51923c:
    // 0x51923c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51923cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_519240:
    // 0x519240: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_519244:
    if (ctx->pc == 0x519244u) {
        ctx->pc = 0x519248u;
        goto label_519248;
    }
    ctx->pc = 0x519240u;
    {
        const bool branch_taken_0x519240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x519240) {
            ctx->pc = 0x519260u;
            goto label_519260;
        }
    }
    ctx->pc = 0x519248u;
label_519248:
    // 0x519248: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_51924c:
    if (ctx->pc == 0x51924Cu) {
        ctx->pc = 0x519250u;
        goto label_519250;
    }
    ctx->pc = 0x519248u;
    {
        const bool branch_taken_0x519248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x519248) {
            ctx->pc = 0x519260u;
            goto label_519260;
        }
    }
    ctx->pc = 0x519250u;
label_519250:
    // 0x519250: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x519250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_519254:
    // 0x519254: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x519254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_519258:
    // 0x519258: 0x320f809  jalr        $t9
label_51925c:
    if (ctx->pc == 0x51925Cu) {
        ctx->pc = 0x51925Cu;
            // 0x51925c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x519260u;
        goto label_519260;
    }
    ctx->pc = 0x519258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x519260u);
        ctx->pc = 0x51925Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519258u;
            // 0x51925c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x519260u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x519260u; }
            if (ctx->pc != 0x519260u) { return; }
        }
        }
    }
    ctx->pc = 0x519260u;
label_519260:
    // 0x519260: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x519260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_519264:
    // 0x519264: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x519264u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_519268:
    // 0x519268: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_51926c:
    if (ctx->pc == 0x51926Cu) {
        ctx->pc = 0x519270u;
        goto label_519270;
    }
    ctx->pc = 0x519268u;
    {
        const bool branch_taken_0x519268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x519268) {
            ctx->pc = 0x5192A4u;
            goto label_5192a4;
        }
    }
    ctx->pc = 0x519270u;
label_519270:
    // 0x519270: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x519270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_519274:
    // 0x519274: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x519274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_519278:
    // 0x519278: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x519278u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_51927c:
    // 0x51927c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x51927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_519280:
    // 0x519280: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x519280u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_519284:
    // 0x519284: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_519288:
    if (ctx->pc == 0x519288u) {
        ctx->pc = 0x51928Cu;
        goto label_51928c;
    }
    ctx->pc = 0x519284u;
    {
        const bool branch_taken_0x519284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x519284) {
            ctx->pc = 0x5192A4u;
            goto label_5192a4;
        }
    }
    ctx->pc = 0x51928Cu;
label_51928c:
    // 0x51928c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_519290:
    if (ctx->pc == 0x519290u) {
        ctx->pc = 0x519294u;
        goto label_519294;
    }
    ctx->pc = 0x51928Cu;
    {
        const bool branch_taken_0x51928c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51928c) {
            ctx->pc = 0x5192A4u;
            goto label_5192a4;
        }
    }
    ctx->pc = 0x519294u;
label_519294:
    // 0x519294: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x519294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_519298:
    // 0x519298: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x519298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_51929c:
    // 0x51929c: 0x320f809  jalr        $t9
label_5192a0:
    if (ctx->pc == 0x5192A0u) {
        ctx->pc = 0x5192A0u;
            // 0x5192a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5192A4u;
        goto label_5192a4;
    }
    ctx->pc = 0x51929Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5192A4u);
        ctx->pc = 0x5192A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51929Cu;
            // 0x5192a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5192A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5192A4u; }
            if (ctx->pc != 0x5192A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5192A4u;
label_5192a4:
    // 0x5192a4: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_5192a8:
    if (ctx->pc == 0x5192A8u) {
        ctx->pc = 0x5192A8u;
            // 0x5192a8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x5192ACu;
        goto label_5192ac;
    }
    ctx->pc = 0x5192A4u;
    {
        const bool branch_taken_0x5192a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5192a4) {
            ctx->pc = 0x5192A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5192A4u;
            // 0x5192a8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5192D4u;
            goto label_5192d4;
        }
    }
    ctx->pc = 0x5192ACu;
label_5192ac:
    // 0x5192ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5192acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5192b0:
    // 0x5192b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5192b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5192b4:
    // 0x5192b4: 0x246357f0  addiu       $v1, $v1, 0x57F0
    ctx->pc = 0x5192b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22512));
label_5192b8:
    // 0x5192b8: 0x24425828  addiu       $v0, $v0, 0x5828
    ctx->pc = 0x5192b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22568));
label_5192bc:
    // 0x5192bc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5192bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_5192c0:
    // 0x5192c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5192c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5192c4:
    // 0x5192c4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x5192c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_5192c8:
    // 0x5192c8: 0xc1464c0  jal         func_519300
label_5192cc:
    if (ctx->pc == 0x5192CCu) {
        ctx->pc = 0x5192CCu;
            // 0x5192cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5192D0u;
        goto label_5192d0;
    }
    ctx->pc = 0x5192C8u;
    SET_GPR_U32(ctx, 31, 0x5192D0u);
    ctx->pc = 0x5192CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5192C8u;
            // 0x5192cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x519300u;
    if (runtime->hasFunction(0x519300u)) {
        auto targetFn = runtime->lookupFunction(0x519300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5192D0u; }
        if (ctx->pc != 0x5192D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00519300_0x519300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5192D0u; }
        if (ctx->pc != 0x5192D0u) { return; }
    }
    ctx->pc = 0x5192D0u;
label_5192d0:
    // 0x5192d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5192d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5192d4:
    // 0x5192d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5192d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5192d8:
    // 0x5192d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5192dc:
    if (ctx->pc == 0x5192DCu) {
        ctx->pc = 0x5192DCu;
            // 0x5192dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5192E0u;
        goto label_5192e0;
    }
    ctx->pc = 0x5192D8u;
    {
        const bool branch_taken_0x5192d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5192d8) {
            ctx->pc = 0x5192DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5192D8u;
            // 0x5192dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5192ECu;
            goto label_5192ec;
        }
    }
    ctx->pc = 0x5192E0u;
label_5192e0:
    // 0x5192e0: 0xc0400a8  jal         func_1002A0
label_5192e4:
    if (ctx->pc == 0x5192E4u) {
        ctx->pc = 0x5192E4u;
            // 0x5192e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5192E8u;
        goto label_5192e8;
    }
    ctx->pc = 0x5192E0u;
    SET_GPR_U32(ctx, 31, 0x5192E8u);
    ctx->pc = 0x5192E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5192E0u;
            // 0x5192e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5192E8u; }
        if (ctx->pc != 0x5192E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5192E8u; }
        if (ctx->pc != 0x5192E8u) { return; }
    }
    ctx->pc = 0x5192E8u;
label_5192e8:
    // 0x5192e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5192e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5192ec:
    // 0x5192ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5192ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5192f0:
    // 0x5192f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5192f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5192f4:
    // 0x5192f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5192f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5192f8:
    // 0x5192f8: 0x3e00008  jr          $ra
label_5192fc:
    if (ctx->pc == 0x5192FCu) {
        ctx->pc = 0x5192FCu;
            // 0x5192fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x519300u;
        goto label_fallthrough_0x5192f8;
    }
    ctx->pc = 0x5192F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5192FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5192F8u;
            // 0x5192fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5192f8:
    ctx->pc = 0x519300u;
}
