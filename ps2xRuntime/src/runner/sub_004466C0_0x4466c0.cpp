#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004466C0
// Address: 0x4466c0 - 0x446910
void sub_004466C0_0x4466c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004466C0_0x4466c0");
#endif

    switch (ctx->pc) {
        case 0x4466c0u: goto label_4466c0;
        case 0x4466c4u: goto label_4466c4;
        case 0x4466c8u: goto label_4466c8;
        case 0x4466ccu: goto label_4466cc;
        case 0x4466d0u: goto label_4466d0;
        case 0x4466d4u: goto label_4466d4;
        case 0x4466d8u: goto label_4466d8;
        case 0x4466dcu: goto label_4466dc;
        case 0x4466e0u: goto label_4466e0;
        case 0x4466e4u: goto label_4466e4;
        case 0x4466e8u: goto label_4466e8;
        case 0x4466ecu: goto label_4466ec;
        case 0x4466f0u: goto label_4466f0;
        case 0x4466f4u: goto label_4466f4;
        case 0x4466f8u: goto label_4466f8;
        case 0x4466fcu: goto label_4466fc;
        case 0x446700u: goto label_446700;
        case 0x446704u: goto label_446704;
        case 0x446708u: goto label_446708;
        case 0x44670cu: goto label_44670c;
        case 0x446710u: goto label_446710;
        case 0x446714u: goto label_446714;
        case 0x446718u: goto label_446718;
        case 0x44671cu: goto label_44671c;
        case 0x446720u: goto label_446720;
        case 0x446724u: goto label_446724;
        case 0x446728u: goto label_446728;
        case 0x44672cu: goto label_44672c;
        case 0x446730u: goto label_446730;
        case 0x446734u: goto label_446734;
        case 0x446738u: goto label_446738;
        case 0x44673cu: goto label_44673c;
        case 0x446740u: goto label_446740;
        case 0x446744u: goto label_446744;
        case 0x446748u: goto label_446748;
        case 0x44674cu: goto label_44674c;
        case 0x446750u: goto label_446750;
        case 0x446754u: goto label_446754;
        case 0x446758u: goto label_446758;
        case 0x44675cu: goto label_44675c;
        case 0x446760u: goto label_446760;
        case 0x446764u: goto label_446764;
        case 0x446768u: goto label_446768;
        case 0x44676cu: goto label_44676c;
        case 0x446770u: goto label_446770;
        case 0x446774u: goto label_446774;
        case 0x446778u: goto label_446778;
        case 0x44677cu: goto label_44677c;
        case 0x446780u: goto label_446780;
        case 0x446784u: goto label_446784;
        case 0x446788u: goto label_446788;
        case 0x44678cu: goto label_44678c;
        case 0x446790u: goto label_446790;
        case 0x446794u: goto label_446794;
        case 0x446798u: goto label_446798;
        case 0x44679cu: goto label_44679c;
        case 0x4467a0u: goto label_4467a0;
        case 0x4467a4u: goto label_4467a4;
        case 0x4467a8u: goto label_4467a8;
        case 0x4467acu: goto label_4467ac;
        case 0x4467b0u: goto label_4467b0;
        case 0x4467b4u: goto label_4467b4;
        case 0x4467b8u: goto label_4467b8;
        case 0x4467bcu: goto label_4467bc;
        case 0x4467c0u: goto label_4467c0;
        case 0x4467c4u: goto label_4467c4;
        case 0x4467c8u: goto label_4467c8;
        case 0x4467ccu: goto label_4467cc;
        case 0x4467d0u: goto label_4467d0;
        case 0x4467d4u: goto label_4467d4;
        case 0x4467d8u: goto label_4467d8;
        case 0x4467dcu: goto label_4467dc;
        case 0x4467e0u: goto label_4467e0;
        case 0x4467e4u: goto label_4467e4;
        case 0x4467e8u: goto label_4467e8;
        case 0x4467ecu: goto label_4467ec;
        case 0x4467f0u: goto label_4467f0;
        case 0x4467f4u: goto label_4467f4;
        case 0x4467f8u: goto label_4467f8;
        case 0x4467fcu: goto label_4467fc;
        case 0x446800u: goto label_446800;
        case 0x446804u: goto label_446804;
        case 0x446808u: goto label_446808;
        case 0x44680cu: goto label_44680c;
        case 0x446810u: goto label_446810;
        case 0x446814u: goto label_446814;
        case 0x446818u: goto label_446818;
        case 0x44681cu: goto label_44681c;
        case 0x446820u: goto label_446820;
        case 0x446824u: goto label_446824;
        case 0x446828u: goto label_446828;
        case 0x44682cu: goto label_44682c;
        case 0x446830u: goto label_446830;
        case 0x446834u: goto label_446834;
        case 0x446838u: goto label_446838;
        case 0x44683cu: goto label_44683c;
        case 0x446840u: goto label_446840;
        case 0x446844u: goto label_446844;
        case 0x446848u: goto label_446848;
        case 0x44684cu: goto label_44684c;
        case 0x446850u: goto label_446850;
        case 0x446854u: goto label_446854;
        case 0x446858u: goto label_446858;
        case 0x44685cu: goto label_44685c;
        case 0x446860u: goto label_446860;
        case 0x446864u: goto label_446864;
        case 0x446868u: goto label_446868;
        case 0x44686cu: goto label_44686c;
        case 0x446870u: goto label_446870;
        case 0x446874u: goto label_446874;
        case 0x446878u: goto label_446878;
        case 0x44687cu: goto label_44687c;
        case 0x446880u: goto label_446880;
        case 0x446884u: goto label_446884;
        case 0x446888u: goto label_446888;
        case 0x44688cu: goto label_44688c;
        case 0x446890u: goto label_446890;
        case 0x446894u: goto label_446894;
        case 0x446898u: goto label_446898;
        case 0x44689cu: goto label_44689c;
        case 0x4468a0u: goto label_4468a0;
        case 0x4468a4u: goto label_4468a4;
        case 0x4468a8u: goto label_4468a8;
        case 0x4468acu: goto label_4468ac;
        case 0x4468b0u: goto label_4468b0;
        case 0x4468b4u: goto label_4468b4;
        case 0x4468b8u: goto label_4468b8;
        case 0x4468bcu: goto label_4468bc;
        case 0x4468c0u: goto label_4468c0;
        case 0x4468c4u: goto label_4468c4;
        case 0x4468c8u: goto label_4468c8;
        case 0x4468ccu: goto label_4468cc;
        case 0x4468d0u: goto label_4468d0;
        case 0x4468d4u: goto label_4468d4;
        case 0x4468d8u: goto label_4468d8;
        case 0x4468dcu: goto label_4468dc;
        case 0x4468e0u: goto label_4468e0;
        case 0x4468e4u: goto label_4468e4;
        case 0x4468e8u: goto label_4468e8;
        case 0x4468ecu: goto label_4468ec;
        case 0x4468f0u: goto label_4468f0;
        case 0x4468f4u: goto label_4468f4;
        case 0x4468f8u: goto label_4468f8;
        case 0x4468fcu: goto label_4468fc;
        case 0x446900u: goto label_446900;
        case 0x446904u: goto label_446904;
        case 0x446908u: goto label_446908;
        case 0x44690cu: goto label_44690c;
        default: break;
    }

    ctx->pc = 0x4466c0u;

label_4466c0:
    // 0x4466c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4466c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4466c4:
    // 0x4466c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4466c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4466c8:
    // 0x4466c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4466c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4466cc:
    // 0x4466cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4466ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4466d0:
    // 0x4466d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4466d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4466d4:
    // 0x4466d4: 0x8c830194  lw          $v1, 0x194($a0)
    ctx->pc = 0x4466d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
label_4466d8:
    // 0x4466d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4466d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4466dc:
    // 0x4466dc: 0x8c820198  lw          $v0, 0x198($a0)
    ctx->pc = 0x4466dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_4466e0:
    // 0x4466e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4466e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4466e4:
    // 0x4466e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4466e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4466e8:
    // 0x4466e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4466e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4466ec:
    // 0x4466ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4466ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4466f0:
    // 0x4466f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4466f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4466f4:
    // 0x4466f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4466f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4466f8:
    // 0x4466f8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4466f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4466fc:
    // 0x4466fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4466fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_446700:
    // 0x446700: 0x8c820194  lw          $v0, 0x194($a0)
    ctx->pc = 0x446700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
label_446704:
    // 0x446704: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x446704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_446708:
    // 0x446708: 0xac820194  sw          $v0, 0x194($a0)
    ctx->pc = 0x446708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 2));
label_44670c:
    // 0x44670c: 0x8c830188  lw          $v1, 0x188($a0)
    ctx->pc = 0x44670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
label_446710:
    // 0x446710: 0x8c82018c  lw          $v0, 0x18C($a0)
    ctx->pc = 0x446710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 396)));
label_446714:
    // 0x446714: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x446714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_446718:
    // 0x446718: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x446718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44671c:
    // 0x44671c: 0xc0a997c  jal         func_2A65F0
label_446720:
    if (ctx->pc == 0x446720u) {
        ctx->pc = 0x446720u;
            // 0x446720: 0x24840184  addiu       $a0, $a0, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 388));
        ctx->pc = 0x446724u;
        goto label_446724;
    }
    ctx->pc = 0x44671Cu;
    SET_GPR_U32(ctx, 31, 0x446724u);
    ctx->pc = 0x446720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44671Cu;
            // 0x446720: 0x24840184  addiu       $a0, $a0, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 388));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446724u; }
        if (ctx->pc != 0x446724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446724u; }
        if (ctx->pc != 0x446724u) { return; }
    }
    ctx->pc = 0x446724u;
label_446724:
    // 0x446724: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x446724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_446728:
    // 0x446728: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x446728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_44672c:
    // 0x44672c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44672cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_446730:
    // 0x446730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x446730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_446734:
    // 0x446734: 0x3e00008  jr          $ra
label_446738:
    if (ctx->pc == 0x446738u) {
        ctx->pc = 0x446738u;
            // 0x446738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44673Cu;
        goto label_44673c;
    }
    ctx->pc = 0x446734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446734u;
            // 0x446738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44673Cu;
label_44673c:
    // 0x44673c: 0x0  nop
    ctx->pc = 0x44673cu;
    // NOP
label_446740:
    // 0x446740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x446740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_446744:
    // 0x446744: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x446744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_446748:
    // 0x446748: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x446748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44674c:
    // 0x44674c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44674cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_446750:
    // 0x446750: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x446750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446754:
    // 0x446754: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x446754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_446758:
    // 0x446758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x446758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44675c:
    // 0x44675c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44675cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_446760:
    // 0x446760: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x446760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_446764:
    // 0x446764: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_446768:
    if (ctx->pc == 0x446768u) {
        ctx->pc = 0x446768u;
            // 0x446768: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44676Cu;
        goto label_44676c;
    }
    ctx->pc = 0x446764u;
    {
        const bool branch_taken_0x446764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x446768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446764u;
            // 0x446768: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446764) {
            ctx->pc = 0x4467A8u;
            goto label_4467a8;
        }
    }
    ctx->pc = 0x44676Cu;
label_44676c:
    // 0x44676c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44676cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446770:
    // 0x446770: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x446770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446774:
    // 0x446774: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x446774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446778:
    // 0x446778: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x446778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_44677c:
    // 0x44677c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x44677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_446780:
    // 0x446780: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x446780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_446784:
    // 0x446784: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x446784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_446788:
    // 0x446788: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x446788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_44678c:
    // 0x44678c: 0x320f809  jalr        $t9
label_446790:
    if (ctx->pc == 0x446790u) {
        ctx->pc = 0x446794u;
        goto label_446794;
    }
    ctx->pc = 0x44678Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x446794u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x446794u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x446794u; }
            if (ctx->pc != 0x446794u) { return; }
        }
        }
    }
    ctx->pc = 0x446794u;
label_446794:
    // 0x446794: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x446794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_446798:
    // 0x446798: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x446798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_44679c:
    // 0x44679c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x44679cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4467a0:
    // 0x4467a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4467a4:
    if (ctx->pc == 0x4467A4u) {
        ctx->pc = 0x4467A4u;
            // 0x4467a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4467A8u;
        goto label_4467a8;
    }
    ctx->pc = 0x4467A0u;
    {
        const bool branch_taken_0x4467a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4467A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4467A0u;
            // 0x4467a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467a0) {
            ctx->pc = 0x446778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_446778;
        }
    }
    ctx->pc = 0x4467A8u;
label_4467a8:
    // 0x4467a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4467a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4467ac:
    // 0x4467ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4467acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4467b0:
    // 0x4467b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4467b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4467b4:
    // 0x4467b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4467b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4467b8:
    // 0x4467b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4467b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4467bc:
    // 0x4467bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4467bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4467c0:
    // 0x4467c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4467c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4467c4:
    // 0x4467c4: 0x3e00008  jr          $ra
label_4467c8:
    if (ctx->pc == 0x4467C8u) {
        ctx->pc = 0x4467C8u;
            // 0x4467c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4467CCu;
        goto label_4467cc;
    }
    ctx->pc = 0x4467C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4467C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4467C4u;
            // 0x4467c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4467CCu;
label_4467cc:
    // 0x4467cc: 0x0  nop
    ctx->pc = 0x4467ccu;
    // NOP
label_4467d0:
    // 0x4467d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4467d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4467d4:
    // 0x4467d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4467d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4467d8:
    // 0x4467d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4467d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4467dc:
    // 0x4467dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4467dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4467e0:
    // 0x4467e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4467e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4467e4:
    // 0x4467e4: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_4467e8:
    if (ctx->pc == 0x4467E8u) {
        ctx->pc = 0x4467E8u;
            // 0x4467e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4467ECu;
        goto label_4467ec;
    }
    ctx->pc = 0x4467E4u;
    {
        const bool branch_taken_0x4467e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4467E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4467E4u;
            // 0x4467e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467e4) {
            ctx->pc = 0x4468ECu;
            goto label_4468ec;
        }
    }
    ctx->pc = 0x4467ECu;
label_4467ec:
    // 0x4467ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4467ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4467f0:
    // 0x4467f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4467f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4467f4:
    // 0x4467f4: 0x2463d570  addiu       $v1, $v1, -0x2A90
    ctx->pc = 0x4467f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956400));
label_4467f8:
    // 0x4467f8: 0x2442d5a8  addiu       $v0, $v0, -0x2A58
    ctx->pc = 0x4467f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956456));
label_4467fc:
    // 0x4467fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4467fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_446800:
    // 0x446800: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x446800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_446804:
    // 0x446804: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_446808:
    if (ctx->pc == 0x446808u) {
        ctx->pc = 0x446808u;
            // 0x446808: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x44680Cu;
        goto label_44680c;
    }
    ctx->pc = 0x446804u;
    {
        const bool branch_taken_0x446804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x446808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446804u;
            // 0x446808: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446804) {
            ctx->pc = 0x446854u;
            goto label_446854;
        }
    }
    ctx->pc = 0x44680Cu;
label_44680c:
    // 0x44680c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44680cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_446810:
    // 0x446810: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x446810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
label_446814:
    // 0x446814: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_446818:
    if (ctx->pc == 0x446818u) {
        ctx->pc = 0x446818u;
            // 0x446818: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x44681Cu;
        goto label_44681c;
    }
    ctx->pc = 0x446814u;
    {
        const bool branch_taken_0x446814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x446818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446814u;
            // 0x446818: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446814) {
            ctx->pc = 0x446854u;
            goto label_446854;
        }
    }
    ctx->pc = 0x44681Cu;
label_44681c:
    // 0x44681c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44681cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_446820:
    // 0x446820: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x446820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_446824:
    // 0x446824: 0xc0d37dc  jal         func_34DF70
label_446828:
    if (ctx->pc == 0x446828u) {
        ctx->pc = 0x446828u;
            // 0x446828: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x44682Cu;
        goto label_44682c;
    }
    ctx->pc = 0x446824u;
    SET_GPR_U32(ctx, 31, 0x44682Cu);
    ctx->pc = 0x446828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446824u;
            // 0x446828: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44682Cu; }
        if (ctx->pc != 0x44682Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44682Cu; }
        if (ctx->pc != 0x44682Cu) { return; }
    }
    ctx->pc = 0x44682Cu;
label_44682c:
    // 0x44682c: 0x262300a0  addiu       $v1, $s1, 0xA0
    ctx->pc = 0x44682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_446830:
    // 0x446830: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_446834:
    if (ctx->pc == 0x446834u) {
        ctx->pc = 0x446834u;
            // 0x446834: 0x26220094  addiu       $v0, $s1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
        ctx->pc = 0x446838u;
        goto label_446838;
    }
    ctx->pc = 0x446830u;
    {
        const bool branch_taken_0x446830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x446830) {
            ctx->pc = 0x446834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446830u;
            // 0x446834: 0x26220094  addiu       $v0, $s1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
        ctx->in_delay_slot = false;
            ctx->pc = 0x446858u;
            goto label_446858;
        }
    }
    ctx->pc = 0x446838u;
label_446838:
    // 0x446838: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x446838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44683c:
    // 0x44683c: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x44683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_446840:
    // 0x446840: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_446844:
    if (ctx->pc == 0x446844u) {
        ctx->pc = 0x446844u;
            // 0x446844: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x446848u;
        goto label_446848;
    }
    ctx->pc = 0x446840u;
    {
        const bool branch_taken_0x446840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x446844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446840u;
            // 0x446844: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446840) {
            ctx->pc = 0x446854u;
            goto label_446854;
        }
    }
    ctx->pc = 0x446848u;
label_446848:
    // 0x446848: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x446848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44684c:
    // 0x44684c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x44684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_446850:
    // 0x446850: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x446850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_446854:
    // 0x446854: 0x26220094  addiu       $v0, $s1, 0x94
    ctx->pc = 0x446854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_446858:
    // 0x446858: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44685c:
    if (ctx->pc == 0x44685Cu) {
        ctx->pc = 0x446860u;
        goto label_446860;
    }
    ctx->pc = 0x446858u;
    {
        const bool branch_taken_0x446858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x446858) {
            ctx->pc = 0x446868u;
            goto label_446868;
        }
    }
    ctx->pc = 0x446860u;
label_446860:
    // 0x446860: 0xc07507c  jal         func_1D41F0
label_446864:
    if (ctx->pc == 0x446864u) {
        ctx->pc = 0x446864u;
            // 0x446864: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->pc = 0x446868u;
        goto label_446868;
    }
    ctx->pc = 0x446860u;
    SET_GPR_U32(ctx, 31, 0x446868u);
    ctx->pc = 0x446864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446860u;
            // 0x446864: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446868u; }
        if (ctx->pc != 0x446868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446868u; }
        if (ctx->pc != 0x446868u) { return; }
    }
    ctx->pc = 0x446868u;
label_446868:
    // 0x446868: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_44686c:
    if (ctx->pc == 0x44686Cu) {
        ctx->pc = 0x44686Cu;
            // 0x44686c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x446870u;
        goto label_446870;
    }
    ctx->pc = 0x446868u;
    {
        const bool branch_taken_0x446868 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x446868) {
            ctx->pc = 0x44686Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446868u;
            // 0x44686c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4468D8u;
            goto label_4468d8;
        }
    }
    ctx->pc = 0x446870u;
label_446870:
    // 0x446870: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x446870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_446874:
    // 0x446874: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x446874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_446878:
    // 0x446878: 0x2463d5e0  addiu       $v1, $v1, -0x2A20
    ctx->pc = 0x446878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956512));
label_44687c:
    // 0x44687c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x44687cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_446880:
    // 0x446880: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x446880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_446884:
    // 0x446884: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x446884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_446888:
    // 0x446888: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x446888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_44688c:
    // 0x44688c: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x44688cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_446890:
    // 0x446890: 0xc0407c0  jal         func_101F00
label_446894:
    if (ctx->pc == 0x446894u) {
        ctx->pc = 0x446894u;
            // 0x446894: 0x24a569e0  addiu       $a1, $a1, 0x69E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27104));
        ctx->pc = 0x446898u;
        goto label_446898;
    }
    ctx->pc = 0x446890u;
    SET_GPR_U32(ctx, 31, 0x446898u);
    ctx->pc = 0x446894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446890u;
            // 0x446894: 0x24a569e0  addiu       $a1, $a1, 0x69E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446898u; }
        if (ctx->pc != 0x446898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446898u; }
        if (ctx->pc != 0x446898u) { return; }
    }
    ctx->pc = 0x446898u;
label_446898:
    // 0x446898: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x446898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_44689c:
    // 0x44689c: 0xc0a8cf8  jal         func_2A33E0
label_4468a0:
    if (ctx->pc == 0x4468A0u) {
        ctx->pc = 0x4468A0u;
            // 0x4468a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4468A4u;
        goto label_4468a4;
    }
    ctx->pc = 0x44689Cu;
    SET_GPR_U32(ctx, 31, 0x4468A4u);
    ctx->pc = 0x4468A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44689Cu;
            // 0x4468a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468A4u; }
        if (ctx->pc != 0x4468A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468A4u; }
        if (ctx->pc != 0x4468A4u) { return; }
    }
    ctx->pc = 0x4468A4u;
label_4468a4:
    // 0x4468a4: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4468a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4468a8:
    // 0x4468a8: 0xc111a5c  jal         func_446970
label_4468ac:
    if (ctx->pc == 0x4468ACu) {
        ctx->pc = 0x4468ACu;
            // 0x4468ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4468B0u;
        goto label_4468b0;
    }
    ctx->pc = 0x4468A8u;
    SET_GPR_U32(ctx, 31, 0x4468B0u);
    ctx->pc = 0x4468ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4468A8u;
            // 0x4468ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x446970u;
    if (runtime->hasFunction(0x446970u)) {
        auto targetFn = runtime->lookupFunction(0x446970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468B0u; }
        if (ctx->pc != 0x4468B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00446970_0x446970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468B0u; }
        if (ctx->pc != 0x4468B0u) { return; }
    }
    ctx->pc = 0x4468B0u;
label_4468b0:
    // 0x4468b0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4468b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4468b4:
    // 0x4468b4: 0xc111a5c  jal         func_446970
label_4468b8:
    if (ctx->pc == 0x4468B8u) {
        ctx->pc = 0x4468B8u;
            // 0x4468b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4468BCu;
        goto label_4468bc;
    }
    ctx->pc = 0x4468B4u;
    SET_GPR_U32(ctx, 31, 0x4468BCu);
    ctx->pc = 0x4468B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4468B4u;
            // 0x4468b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x446970u;
    if (runtime->hasFunction(0x446970u)) {
        auto targetFn = runtime->lookupFunction(0x446970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468BCu; }
        if (ctx->pc != 0x4468BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00446970_0x446970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468BCu; }
        if (ctx->pc != 0x4468BCu) { return; }
    }
    ctx->pc = 0x4468BCu;
label_4468bc:
    // 0x4468bc: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x4468bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4468c0:
    // 0x4468c0: 0xc111a44  jal         func_446910
label_4468c4:
    if (ctx->pc == 0x4468C4u) {
        ctx->pc = 0x4468C4u;
            // 0x4468c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4468C8u;
        goto label_4468c8;
    }
    ctx->pc = 0x4468C0u;
    SET_GPR_U32(ctx, 31, 0x4468C8u);
    ctx->pc = 0x4468C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4468C0u;
            // 0x4468c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x446910u;
    if (runtime->hasFunction(0x446910u)) {
        auto targetFn = runtime->lookupFunction(0x446910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468C8u; }
        if (ctx->pc != 0x4468C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00446910_0x446910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468C8u; }
        if (ctx->pc != 0x4468C8u) { return; }
    }
    ctx->pc = 0x4468C8u;
label_4468c8:
    // 0x4468c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4468c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4468cc:
    // 0x4468cc: 0xc0ae1c0  jal         func_2B8700
label_4468d0:
    if (ctx->pc == 0x4468D0u) {
        ctx->pc = 0x4468D0u;
            // 0x4468d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4468D4u;
        goto label_4468d4;
    }
    ctx->pc = 0x4468CCu;
    SET_GPR_U32(ctx, 31, 0x4468D4u);
    ctx->pc = 0x4468D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4468CCu;
            // 0x4468d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468D4u; }
        if (ctx->pc != 0x4468D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468D4u; }
        if (ctx->pc != 0x4468D4u) { return; }
    }
    ctx->pc = 0x4468D4u;
label_4468d4:
    // 0x4468d4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4468d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4468d8:
    // 0x4468d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4468d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4468dc:
    // 0x4468dc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4468e0:
    if (ctx->pc == 0x4468E0u) {
        ctx->pc = 0x4468E0u;
            // 0x4468e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4468E4u;
        goto label_4468e4;
    }
    ctx->pc = 0x4468DCu;
    {
        const bool branch_taken_0x4468dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4468dc) {
            ctx->pc = 0x4468E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4468DCu;
            // 0x4468e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4468F0u;
            goto label_4468f0;
        }
    }
    ctx->pc = 0x4468E4u;
label_4468e4:
    // 0x4468e4: 0xc0400a8  jal         func_1002A0
label_4468e8:
    if (ctx->pc == 0x4468E8u) {
        ctx->pc = 0x4468E8u;
            // 0x4468e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4468ECu;
        goto label_4468ec;
    }
    ctx->pc = 0x4468E4u;
    SET_GPR_U32(ctx, 31, 0x4468ECu);
    ctx->pc = 0x4468E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4468E4u;
            // 0x4468e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468ECu; }
        if (ctx->pc != 0x4468ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4468ECu; }
        if (ctx->pc != 0x4468ECu) { return; }
    }
    ctx->pc = 0x4468ECu;
label_4468ec:
    // 0x4468ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4468ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4468f0:
    // 0x4468f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4468f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4468f4:
    // 0x4468f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4468f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4468f8:
    // 0x4468f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4468f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4468fc:
    // 0x4468fc: 0x3e00008  jr          $ra
label_446900:
    if (ctx->pc == 0x446900u) {
        ctx->pc = 0x446900u;
            // 0x446900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x446904u;
        goto label_446904;
    }
    ctx->pc = 0x4468FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4468FCu;
            // 0x446900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x446904u;
label_446904:
    // 0x446904: 0x0  nop
    ctx->pc = 0x446904u;
    // NOP
label_446908:
    // 0x446908: 0x0  nop
    ctx->pc = 0x446908u;
    // NOP
label_44690c:
    // 0x44690c: 0x0  nop
    ctx->pc = 0x44690cu;
    // NOP
}
