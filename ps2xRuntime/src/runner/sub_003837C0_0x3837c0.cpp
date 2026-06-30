#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003837C0
// Address: 0x3837c0 - 0x383b60
void sub_003837C0_0x3837c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003837C0_0x3837c0");
#endif

    switch (ctx->pc) {
        case 0x3837c0u: goto label_3837c0;
        case 0x3837c4u: goto label_3837c4;
        case 0x3837c8u: goto label_3837c8;
        case 0x3837ccu: goto label_3837cc;
        case 0x3837d0u: goto label_3837d0;
        case 0x3837d4u: goto label_3837d4;
        case 0x3837d8u: goto label_3837d8;
        case 0x3837dcu: goto label_3837dc;
        case 0x3837e0u: goto label_3837e0;
        case 0x3837e4u: goto label_3837e4;
        case 0x3837e8u: goto label_3837e8;
        case 0x3837ecu: goto label_3837ec;
        case 0x3837f0u: goto label_3837f0;
        case 0x3837f4u: goto label_3837f4;
        case 0x3837f8u: goto label_3837f8;
        case 0x3837fcu: goto label_3837fc;
        case 0x383800u: goto label_383800;
        case 0x383804u: goto label_383804;
        case 0x383808u: goto label_383808;
        case 0x38380cu: goto label_38380c;
        case 0x383810u: goto label_383810;
        case 0x383814u: goto label_383814;
        case 0x383818u: goto label_383818;
        case 0x38381cu: goto label_38381c;
        case 0x383820u: goto label_383820;
        case 0x383824u: goto label_383824;
        case 0x383828u: goto label_383828;
        case 0x38382cu: goto label_38382c;
        case 0x383830u: goto label_383830;
        case 0x383834u: goto label_383834;
        case 0x383838u: goto label_383838;
        case 0x38383cu: goto label_38383c;
        case 0x383840u: goto label_383840;
        case 0x383844u: goto label_383844;
        case 0x383848u: goto label_383848;
        case 0x38384cu: goto label_38384c;
        case 0x383850u: goto label_383850;
        case 0x383854u: goto label_383854;
        case 0x383858u: goto label_383858;
        case 0x38385cu: goto label_38385c;
        case 0x383860u: goto label_383860;
        case 0x383864u: goto label_383864;
        case 0x383868u: goto label_383868;
        case 0x38386cu: goto label_38386c;
        case 0x383870u: goto label_383870;
        case 0x383874u: goto label_383874;
        case 0x383878u: goto label_383878;
        case 0x38387cu: goto label_38387c;
        case 0x383880u: goto label_383880;
        case 0x383884u: goto label_383884;
        case 0x383888u: goto label_383888;
        case 0x38388cu: goto label_38388c;
        case 0x383890u: goto label_383890;
        case 0x383894u: goto label_383894;
        case 0x383898u: goto label_383898;
        case 0x38389cu: goto label_38389c;
        case 0x3838a0u: goto label_3838a0;
        case 0x3838a4u: goto label_3838a4;
        case 0x3838a8u: goto label_3838a8;
        case 0x3838acu: goto label_3838ac;
        case 0x3838b0u: goto label_3838b0;
        case 0x3838b4u: goto label_3838b4;
        case 0x3838b8u: goto label_3838b8;
        case 0x3838bcu: goto label_3838bc;
        case 0x3838c0u: goto label_3838c0;
        case 0x3838c4u: goto label_3838c4;
        case 0x3838c8u: goto label_3838c8;
        case 0x3838ccu: goto label_3838cc;
        case 0x3838d0u: goto label_3838d0;
        case 0x3838d4u: goto label_3838d4;
        case 0x3838d8u: goto label_3838d8;
        case 0x3838dcu: goto label_3838dc;
        case 0x3838e0u: goto label_3838e0;
        case 0x3838e4u: goto label_3838e4;
        case 0x3838e8u: goto label_3838e8;
        case 0x3838ecu: goto label_3838ec;
        case 0x3838f0u: goto label_3838f0;
        case 0x3838f4u: goto label_3838f4;
        case 0x3838f8u: goto label_3838f8;
        case 0x3838fcu: goto label_3838fc;
        case 0x383900u: goto label_383900;
        case 0x383904u: goto label_383904;
        case 0x383908u: goto label_383908;
        case 0x38390cu: goto label_38390c;
        case 0x383910u: goto label_383910;
        case 0x383914u: goto label_383914;
        case 0x383918u: goto label_383918;
        case 0x38391cu: goto label_38391c;
        case 0x383920u: goto label_383920;
        case 0x383924u: goto label_383924;
        case 0x383928u: goto label_383928;
        case 0x38392cu: goto label_38392c;
        case 0x383930u: goto label_383930;
        case 0x383934u: goto label_383934;
        case 0x383938u: goto label_383938;
        case 0x38393cu: goto label_38393c;
        case 0x383940u: goto label_383940;
        case 0x383944u: goto label_383944;
        case 0x383948u: goto label_383948;
        case 0x38394cu: goto label_38394c;
        case 0x383950u: goto label_383950;
        case 0x383954u: goto label_383954;
        case 0x383958u: goto label_383958;
        case 0x38395cu: goto label_38395c;
        case 0x383960u: goto label_383960;
        case 0x383964u: goto label_383964;
        case 0x383968u: goto label_383968;
        case 0x38396cu: goto label_38396c;
        case 0x383970u: goto label_383970;
        case 0x383974u: goto label_383974;
        case 0x383978u: goto label_383978;
        case 0x38397cu: goto label_38397c;
        case 0x383980u: goto label_383980;
        case 0x383984u: goto label_383984;
        case 0x383988u: goto label_383988;
        case 0x38398cu: goto label_38398c;
        case 0x383990u: goto label_383990;
        case 0x383994u: goto label_383994;
        case 0x383998u: goto label_383998;
        case 0x38399cu: goto label_38399c;
        case 0x3839a0u: goto label_3839a0;
        case 0x3839a4u: goto label_3839a4;
        case 0x3839a8u: goto label_3839a8;
        case 0x3839acu: goto label_3839ac;
        case 0x3839b0u: goto label_3839b0;
        case 0x3839b4u: goto label_3839b4;
        case 0x3839b8u: goto label_3839b8;
        case 0x3839bcu: goto label_3839bc;
        case 0x3839c0u: goto label_3839c0;
        case 0x3839c4u: goto label_3839c4;
        case 0x3839c8u: goto label_3839c8;
        case 0x3839ccu: goto label_3839cc;
        case 0x3839d0u: goto label_3839d0;
        case 0x3839d4u: goto label_3839d4;
        case 0x3839d8u: goto label_3839d8;
        case 0x3839dcu: goto label_3839dc;
        case 0x3839e0u: goto label_3839e0;
        case 0x3839e4u: goto label_3839e4;
        case 0x3839e8u: goto label_3839e8;
        case 0x3839ecu: goto label_3839ec;
        case 0x3839f0u: goto label_3839f0;
        case 0x3839f4u: goto label_3839f4;
        case 0x3839f8u: goto label_3839f8;
        case 0x3839fcu: goto label_3839fc;
        case 0x383a00u: goto label_383a00;
        case 0x383a04u: goto label_383a04;
        case 0x383a08u: goto label_383a08;
        case 0x383a0cu: goto label_383a0c;
        case 0x383a10u: goto label_383a10;
        case 0x383a14u: goto label_383a14;
        case 0x383a18u: goto label_383a18;
        case 0x383a1cu: goto label_383a1c;
        case 0x383a20u: goto label_383a20;
        case 0x383a24u: goto label_383a24;
        case 0x383a28u: goto label_383a28;
        case 0x383a2cu: goto label_383a2c;
        case 0x383a30u: goto label_383a30;
        case 0x383a34u: goto label_383a34;
        case 0x383a38u: goto label_383a38;
        case 0x383a3cu: goto label_383a3c;
        case 0x383a40u: goto label_383a40;
        case 0x383a44u: goto label_383a44;
        case 0x383a48u: goto label_383a48;
        case 0x383a4cu: goto label_383a4c;
        case 0x383a50u: goto label_383a50;
        case 0x383a54u: goto label_383a54;
        case 0x383a58u: goto label_383a58;
        case 0x383a5cu: goto label_383a5c;
        case 0x383a60u: goto label_383a60;
        case 0x383a64u: goto label_383a64;
        case 0x383a68u: goto label_383a68;
        case 0x383a6cu: goto label_383a6c;
        case 0x383a70u: goto label_383a70;
        case 0x383a74u: goto label_383a74;
        case 0x383a78u: goto label_383a78;
        case 0x383a7cu: goto label_383a7c;
        case 0x383a80u: goto label_383a80;
        case 0x383a84u: goto label_383a84;
        case 0x383a88u: goto label_383a88;
        case 0x383a8cu: goto label_383a8c;
        case 0x383a90u: goto label_383a90;
        case 0x383a94u: goto label_383a94;
        case 0x383a98u: goto label_383a98;
        case 0x383a9cu: goto label_383a9c;
        case 0x383aa0u: goto label_383aa0;
        case 0x383aa4u: goto label_383aa4;
        case 0x383aa8u: goto label_383aa8;
        case 0x383aacu: goto label_383aac;
        case 0x383ab0u: goto label_383ab0;
        case 0x383ab4u: goto label_383ab4;
        case 0x383ab8u: goto label_383ab8;
        case 0x383abcu: goto label_383abc;
        case 0x383ac0u: goto label_383ac0;
        case 0x383ac4u: goto label_383ac4;
        case 0x383ac8u: goto label_383ac8;
        case 0x383accu: goto label_383acc;
        case 0x383ad0u: goto label_383ad0;
        case 0x383ad4u: goto label_383ad4;
        case 0x383ad8u: goto label_383ad8;
        case 0x383adcu: goto label_383adc;
        case 0x383ae0u: goto label_383ae0;
        case 0x383ae4u: goto label_383ae4;
        case 0x383ae8u: goto label_383ae8;
        case 0x383aecu: goto label_383aec;
        case 0x383af0u: goto label_383af0;
        case 0x383af4u: goto label_383af4;
        case 0x383af8u: goto label_383af8;
        case 0x383afcu: goto label_383afc;
        case 0x383b00u: goto label_383b00;
        case 0x383b04u: goto label_383b04;
        case 0x383b08u: goto label_383b08;
        case 0x383b0cu: goto label_383b0c;
        case 0x383b10u: goto label_383b10;
        case 0x383b14u: goto label_383b14;
        case 0x383b18u: goto label_383b18;
        case 0x383b1cu: goto label_383b1c;
        case 0x383b20u: goto label_383b20;
        case 0x383b24u: goto label_383b24;
        case 0x383b28u: goto label_383b28;
        case 0x383b2cu: goto label_383b2c;
        case 0x383b30u: goto label_383b30;
        case 0x383b34u: goto label_383b34;
        case 0x383b38u: goto label_383b38;
        case 0x383b3cu: goto label_383b3c;
        case 0x383b40u: goto label_383b40;
        case 0x383b44u: goto label_383b44;
        case 0x383b48u: goto label_383b48;
        case 0x383b4cu: goto label_383b4c;
        case 0x383b50u: goto label_383b50;
        case 0x383b54u: goto label_383b54;
        case 0x383b58u: goto label_383b58;
        case 0x383b5cu: goto label_383b5c;
        default: break;
    }

    ctx->pc = 0x3837c0u;

label_3837c0:
    // 0x3837c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3837c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3837c4:
    // 0x3837c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3837c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3837c8:
    // 0x3837c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3837c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3837cc:
    // 0x3837cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3837ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3837d0:
    // 0x3837d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3837d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3837d4:
    // 0x3837d4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3837d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3837d8:
    // 0x3837d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3837d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3837dc:
    // 0x3837dc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3837dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3837e0:
    // 0x3837e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3837e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3837e4:
    // 0x3837e4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x3837e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3837e8:
    // 0x3837e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3837e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3837ec:
    // 0x3837ec: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x3837ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3837f0:
    // 0x3837f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3837f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3837f4:
    // 0x3837f4: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3837f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3837f8:
    // 0x3837f8: 0x8c8301d0  lw          $v1, 0x1D0($a0)
    ctx->pc = 0x3837f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
label_3837fc:
    // 0x3837fc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_383800:
    if (ctx->pc == 0x383800u) {
        ctx->pc = 0x383800u;
            // 0x383800: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383804u;
        goto label_383804;
    }
    ctx->pc = 0x3837FCu;
    {
        const bool branch_taken_0x3837fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x383800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3837FCu;
            // 0x383800: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3837fc) {
            ctx->pc = 0x38380Cu;
            goto label_38380c;
        }
    }
    ctx->pc = 0x383804u;
label_383804:
    // 0x383804: 0x10000078  b           . + 4 + (0x78 << 2)
label_383808:
    if (ctx->pc == 0x383808u) {
        ctx->pc = 0x383808u;
            // 0x383808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38380Cu;
        goto label_38380c;
    }
    ctx->pc = 0x383804u;
    {
        const bool branch_taken_0x383804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383804u;
            // 0x383808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383804) {
            ctx->pc = 0x3839E8u;
            goto label_3839e8;
        }
    }
    ctx->pc = 0x38380Cu;
label_38380c:
    // 0x38380c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38380cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_383810:
    // 0x383810: 0xc04f278  jal         func_13C9E0
label_383814:
    if (ctx->pc == 0x383814u) {
        ctx->pc = 0x383814u;
            // 0x383814: 0x26a501f0  addiu       $a1, $s5, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 496));
        ctx->pc = 0x383818u;
        goto label_383818;
    }
    ctx->pc = 0x383810u;
    SET_GPR_U32(ctx, 31, 0x383818u);
    ctx->pc = 0x383814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383810u;
            // 0x383814: 0x26a501f0  addiu       $a1, $s5, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383818u; }
        if (ctx->pc != 0x383818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383818u; }
        if (ctx->pc != 0x383818u) { return; }
    }
    ctx->pc = 0x383818u;
label_383818:
    // 0x383818: 0x26a501e0  addiu       $a1, $s5, 0x1E0
    ctx->pc = 0x383818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 480));
label_38381c:
    // 0x38381c: 0xc04ce80  jal         func_133A00
label_383820:
    if (ctx->pc == 0x383820u) {
        ctx->pc = 0x383820u;
            // 0x383820: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383824u;
        goto label_383824;
    }
    ctx->pc = 0x38381Cu;
    SET_GPR_U32(ctx, 31, 0x383824u);
    ctx->pc = 0x383820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38381Cu;
            // 0x383820: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383824u; }
        if (ctx->pc != 0x383824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383824u; }
        if (ctx->pc != 0x383824u) { return; }
    }
    ctx->pc = 0x383824u;
label_383824:
    // 0x383824: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x383824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_383828:
    // 0x383828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38382c:
    // 0x38382c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x38382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_383830:
    // 0x383830: 0xc07698c  jal         func_1DA630
label_383834:
    if (ctx->pc == 0x383834u) {
        ctx->pc = 0x383834u;
            // 0x383834: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x383838u;
        goto label_383838;
    }
    ctx->pc = 0x383830u;
    SET_GPR_U32(ctx, 31, 0x383838u);
    ctx->pc = 0x383834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383830u;
            // 0x383834: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383838u; }
        if (ctx->pc != 0x383838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383838u; }
        if (ctx->pc != 0x383838u) { return; }
    }
    ctx->pc = 0x383838u;
label_383838:
    // 0x383838: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x383838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38383c:
    // 0x38383c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_383840:
    if (ctx->pc == 0x383840u) {
        ctx->pc = 0x383844u;
        goto label_383844;
    }
    ctx->pc = 0x38383Cu;
    {
        const bool branch_taken_0x38383c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38383c) {
            ctx->pc = 0x38384Cu;
            goto label_38384c;
        }
    }
    ctx->pc = 0x383844u;
label_383844:
    // 0x383844: 0x10000033  b           . + 4 + (0x33 << 2)
label_383848:
    if (ctx->pc == 0x383848u) {
        ctx->pc = 0x383848u;
            // 0x383848: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38384Cu;
        goto label_38384c;
    }
    ctx->pc = 0x383844u;
    {
        const bool branch_taken_0x383844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383844u;
            // 0x383848: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383844) {
            ctx->pc = 0x383914u;
            goto label_383914;
        }
    }
    ctx->pc = 0x38384Cu;
label_38384c:
    // 0x38384c: 0xc0576f4  jal         func_15DBD0
label_383850:
    if (ctx->pc == 0x383850u) {
        ctx->pc = 0x383854u;
        goto label_383854;
    }
    ctx->pc = 0x38384Cu;
    SET_GPR_U32(ctx, 31, 0x383854u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383854u; }
        if (ctx->pc != 0x383854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383854u; }
        if (ctx->pc != 0x383854u) { return; }
    }
    ctx->pc = 0x383854u;
label_383854:
    // 0x383854: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_383858:
    // 0x383858: 0xc076984  jal         func_1DA610
label_38385c:
    if (ctx->pc == 0x38385Cu) {
        ctx->pc = 0x38385Cu;
            // 0x38385c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383860u;
        goto label_383860;
    }
    ctx->pc = 0x383858u;
    SET_GPR_U32(ctx, 31, 0x383860u);
    ctx->pc = 0x38385Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383858u;
            // 0x38385c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383860u; }
        if (ctx->pc != 0x383860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383860u; }
        if (ctx->pc != 0x383860u) { return; }
    }
    ctx->pc = 0x383860u;
label_383860:
    // 0x383860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x383860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383864:
    // 0x383864: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x383864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_383868:
    // 0x383868: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x383868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38386c:
    // 0x38386c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38386cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_383870:
    // 0x383870: 0xc4421b50  lwc1        $f2, 0x1B50($v0)
    ctx->pc = 0x383870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_383874:
    // 0x383874: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x383874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383878:
    // 0x383878: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x383878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38387c:
    // 0x38387c: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x38387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_383880:
    // 0x383880: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x383880u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_383884:
    // 0x383884: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x383884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_383888:
    // 0x383888: 0xc4401b5c  lwc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x383888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38388c:
    // 0x38388c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x38388cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_383890:
    // 0x383890: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x383890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_383894:
    // 0x383894: 0x8c421b54  lw          $v0, 0x1B54($v0)
    ctx->pc = 0x383894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6996)));
label_383898:
    // 0x383898: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x383898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_38389c:
    // 0x38389c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x38389cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_3838a0:
    // 0x3838a0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3838a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3838a4:
    // 0x3838a4: 0xc04cca0  jal         func_133280
label_3838a8:
    if (ctx->pc == 0x3838A8u) {
        ctx->pc = 0x3838A8u;
            // 0x3838a8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x3838ACu;
        goto label_3838ac;
    }
    ctx->pc = 0x3838A4u;
    SET_GPR_U32(ctx, 31, 0x3838ACu);
    ctx->pc = 0x3838A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3838A4u;
            // 0x3838a8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3838ACu; }
        if (ctx->pc != 0x3838ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3838ACu; }
        if (ctx->pc != 0x3838ACu) { return; }
    }
    ctx->pc = 0x3838ACu;
label_3838ac:
    // 0x3838ac: 0xc076980  jal         func_1DA600
label_3838b0:
    if (ctx->pc == 0x3838B0u) {
        ctx->pc = 0x3838B0u;
            // 0x3838b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3838B4u;
        goto label_3838b4;
    }
    ctx->pc = 0x3838ACu;
    SET_GPR_U32(ctx, 31, 0x3838B4u);
    ctx->pc = 0x3838B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3838ACu;
            // 0x3838b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3838B4u; }
        if (ctx->pc != 0x3838B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3838B4u; }
        if (ctx->pc != 0x3838B4u) { return; }
    }
    ctx->pc = 0x3838B4u;
label_3838b4:
    // 0x3838b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3838b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3838b8:
    // 0x3838b8: 0xc04cc34  jal         func_1330D0
label_3838bc:
    if (ctx->pc == 0x3838BCu) {
        ctx->pc = 0x3838BCu;
            // 0x3838bc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3838C0u;
        goto label_3838c0;
    }
    ctx->pc = 0x3838B8u;
    SET_GPR_U32(ctx, 31, 0x3838C0u);
    ctx->pc = 0x3838BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3838B8u;
            // 0x3838bc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3838C0u; }
        if (ctx->pc != 0x3838C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3838C0u; }
        if (ctx->pc != 0x3838C0u) { return; }
    }
    ctx->pc = 0x3838C0u;
label_3838c0:
    // 0x3838c0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3838c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3838c4:
    // 0x3838c4: 0xc4415c10  lwc1        $f1, 0x5C10($v0)
    ctx->pc = 0x3838c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3838c8:
    // 0x3838c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3838c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3838cc:
    // 0x3838cc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3838d0:
    if (ctx->pc == 0x3838D0u) {
        ctx->pc = 0x3838D0u;
            // 0x3838d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3838D4u;
        goto label_3838d4;
    }
    ctx->pc = 0x3838CCu;
    {
        const bool branch_taken_0x3838cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3838cc) {
            ctx->pc = 0x3838D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3838CCu;
            // 0x3838d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3838DCu;
            goto label_3838dc;
        }
    }
    ctx->pc = 0x3838D4u;
label_3838d4:
    // 0x3838d4: 0x1000000f  b           . + 4 + (0xF << 2)
label_3838d8:
    if (ctx->pc == 0x3838D8u) {
        ctx->pc = 0x3838D8u;
            // 0x3838d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3838DCu;
        goto label_3838dc;
    }
    ctx->pc = 0x3838D4u;
    {
        const bool branch_taken_0x3838d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3838D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3838D4u;
            // 0x3838d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838d4) {
            ctx->pc = 0x383914u;
            goto label_383914;
        }
    }
    ctx->pc = 0x3838DCu;
label_3838dc:
    // 0x3838dc: 0xc07697c  jal         func_1DA5F0
label_3838e0:
    if (ctx->pc == 0x3838E0u) {
        ctx->pc = 0x3838E4u;
        goto label_3838e4;
    }
    ctx->pc = 0x3838DCu;
    SET_GPR_U32(ctx, 31, 0x3838E4u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3838E4u; }
        if (ctx->pc != 0x3838E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3838E4u; }
        if (ctx->pc != 0x3838E4u) { return; }
    }
    ctx->pc = 0x3838E4u;
label_3838e4:
    // 0x3838e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3838e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3838e8:
    // 0x3838e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3838e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3838ec:
    // 0x3838ec: 0xc04cd60  jal         func_133580
label_3838f0:
    if (ctx->pc == 0x3838F0u) {
        ctx->pc = 0x3838F0u;
            // 0x3838f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3838F4u;
        goto label_3838f4;
    }
    ctx->pc = 0x3838ECu;
    SET_GPR_U32(ctx, 31, 0x3838F4u);
    ctx->pc = 0x3838F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3838ECu;
            // 0x3838f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3838F4u; }
        if (ctx->pc != 0x3838F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3838F4u; }
        if (ctx->pc != 0x3838F4u) { return; }
    }
    ctx->pc = 0x3838F4u;
label_3838f4:
    // 0x3838f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3838f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3838f8:
    // 0x3838f8: 0xc04c650  jal         func_131940
label_3838fc:
    if (ctx->pc == 0x3838FCu) {
        ctx->pc = 0x3838FCu;
            // 0x3838fc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x383900u;
        goto label_383900;
    }
    ctx->pc = 0x3838F8u;
    SET_GPR_U32(ctx, 31, 0x383900u);
    ctx->pc = 0x3838FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3838F8u;
            // 0x3838fc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383900u; }
        if (ctx->pc != 0x383900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383900u; }
        if (ctx->pc != 0x383900u) { return; }
    }
    ctx->pc = 0x383900u;
label_383900:
    // 0x383900: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x383900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_383904:
    // 0x383904: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x383904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_383908:
    // 0x383908: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x383908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_38390c:
    // 0x38390c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_383910:
    // 0x383910: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x383910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_383914:
    // 0x383914: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x383914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_383918:
    // 0x383918: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_38391c:
    if (ctx->pc == 0x38391Cu) {
        ctx->pc = 0x383920u;
        goto label_383920;
    }
    ctx->pc = 0x383918u;
    {
        const bool branch_taken_0x383918 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x383918) {
            ctx->pc = 0x383928u;
            goto label_383928;
        }
    }
    ctx->pc = 0x383920u;
label_383920:
    // 0x383920: 0x10000031  b           . + 4 + (0x31 << 2)
label_383924:
    if (ctx->pc == 0x383924u) {
        ctx->pc = 0x383924u;
            // 0x383924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383928u;
        goto label_383928;
    }
    ctx->pc = 0x383920u;
    {
        const bool branch_taken_0x383920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383920u;
            // 0x383924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383920) {
            ctx->pc = 0x3839E8u;
            goto label_3839e8;
        }
    }
    ctx->pc = 0x383928u;
label_383928:
    // 0x383928: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x383928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38392c:
    // 0x38392c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38392cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_383930:
    // 0x383930: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x383930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_383934:
    // 0x383934: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x383934u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_383938:
    // 0x383938: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x383938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_38393c:
    // 0x38393c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38393cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_383940:
    // 0x383940: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x383940u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_383944:
    // 0x383944: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x383944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_383948:
    // 0x383948: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x383948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_38394c:
    // 0x38394c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x38394cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_383950:
    // 0x383950: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x383950u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_383954:
    // 0x383954: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x383954u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_383958:
    // 0x383958: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x383958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38395c:
    // 0x38395c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x38395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_383960:
    // 0x383960: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x383960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_383964:
    // 0x383964: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x383964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_383968:
    // 0x383968: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x383968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_38396c:
    // 0x38396c: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x38396cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_383970:
    // 0x383970: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x383970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_383974:
    // 0x383974: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x383974u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_383978:
    // 0x383978: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x383978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38397c:
    // 0x38397c: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x38397cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_383980:
    // 0x383980: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x383980u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_383984:
    // 0x383984: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x383984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_383988:
    // 0x383988: 0x1098821  addu        $s1, $t0, $t1
    ctx->pc = 0x383988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_38398c:
    // 0x38398c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38398cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_383990:
    // 0x383990: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x383990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_383994:
    // 0x383994: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x383994u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
label_383998:
    // 0x383998: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x383998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_38399c:
    // 0x38399c: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x38399cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3839a0:
    // 0x3839a0: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x3839a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_3839a4:
    // 0x3839a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3839a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3839a8:
    // 0x3839a8: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x3839a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_3839ac:
    // 0x3839ac: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x3839acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_3839b0:
    // 0x3839b0: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x3839b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_3839b4:
    // 0x3839b4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x3839b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3839b8:
    // 0x3839b8: 0xc04e4a4  jal         func_139290
label_3839bc:
    if (ctx->pc == 0x3839BCu) {
        ctx->pc = 0x3839BCu;
            // 0x3839bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3839C0u;
        goto label_3839c0;
    }
    ctx->pc = 0x3839B8u;
    SET_GPR_U32(ctx, 31, 0x3839C0u);
    ctx->pc = 0x3839BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3839B8u;
            // 0x3839bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3839C0u; }
        if (ctx->pc != 0x3839C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3839C0u; }
        if (ctx->pc != 0x3839C0u) { return; }
    }
    ctx->pc = 0x3839C0u;
label_3839c0:
    // 0x3839c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3839c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3839c4:
    // 0x3839c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3839c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3839c8:
    // 0x3839c8: 0xc04cd60  jal         func_133580
label_3839cc:
    if (ctx->pc == 0x3839CCu) {
        ctx->pc = 0x3839CCu;
            // 0x3839cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3839D0u;
        goto label_3839d0;
    }
    ctx->pc = 0x3839C8u;
    SET_GPR_U32(ctx, 31, 0x3839D0u);
    ctx->pc = 0x3839CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3839C8u;
            // 0x3839cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3839D0u; }
        if (ctx->pc != 0x3839D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3839D0u; }
        if (ctx->pc != 0x3839D0u) { return; }
    }
    ctx->pc = 0x3839D0u;
label_3839d0:
    // 0x3839d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3839d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3839d4:
    // 0x3839d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3839d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3839d8:
    // 0x3839d8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3839d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3839dc:
    // 0x3839dc: 0xc054fd4  jal         func_153F50
label_3839e0:
    if (ctx->pc == 0x3839E0u) {
        ctx->pc = 0x3839E0u;
            // 0x3839e0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3839E4u;
        goto label_3839e4;
    }
    ctx->pc = 0x3839DCu;
    SET_GPR_U32(ctx, 31, 0x3839E4u);
    ctx->pc = 0x3839E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3839DCu;
            // 0x3839e0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3839E4u; }
        if (ctx->pc != 0x3839E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3839E4u; }
        if (ctx->pc != 0x3839E4u) { return; }
    }
    ctx->pc = 0x3839E4u;
label_3839e4:
    // 0x3839e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3839e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3839e8:
    // 0x3839e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3839e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3839ec:
    // 0x3839ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3839ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3839f0:
    // 0x3839f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3839f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3839f4:
    // 0x3839f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3839f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3839f8:
    // 0x3839f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3839f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3839fc:
    // 0x3839fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3839fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_383a00:
    // 0x383a00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x383a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_383a04:
    // 0x383a04: 0x3e00008  jr          $ra
label_383a08:
    if (ctx->pc == 0x383A08u) {
        ctx->pc = 0x383A08u;
            // 0x383a08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x383A0Cu;
        goto label_383a0c;
    }
    ctx->pc = 0x383A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383A04u;
            // 0x383a08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x383A0Cu;
label_383a0c:
    // 0x383a0c: 0x0  nop
    ctx->pc = 0x383a0cu;
    // NOP
label_383a10:
    // 0x383a10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x383a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_383a14:
    // 0x383a14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x383a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_383a18:
    // 0x383a18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x383a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_383a1c:
    // 0x383a1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x383a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_383a20:
    // 0x383a20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x383a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_383a24:
    // 0x383a24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x383a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_383a28:
    // 0x383a28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x383a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_383a2c:
    // 0x383a2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x383a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_383a30:
    // 0x383a30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x383a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_383a34:
    // 0x383a34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_383a38:
    // 0x383a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x383a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_383a3c:
    // 0x383a3c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x383a3cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_383a40:
    // 0x383a40: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_383a44:
    if (ctx->pc == 0x383A44u) {
        ctx->pc = 0x383A44u;
            // 0x383a44: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383A48u;
        goto label_383a48;
    }
    ctx->pc = 0x383A40u;
    {
        const bool branch_taken_0x383a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x383A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383A40u;
            // 0x383a44: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a40) {
            ctx->pc = 0x383A74u;
            goto label_383a74;
        }
    }
    ctx->pc = 0x383A48u;
label_383a48:
    // 0x383a48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x383a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_383a4c:
    // 0x383a4c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_383a50:
    if (ctx->pc == 0x383A50u) {
        ctx->pc = 0x383A50u;
            // 0x383a50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x383A54u;
        goto label_383a54;
    }
    ctx->pc = 0x383A4Cu;
    {
        const bool branch_taken_0x383a4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x383a4c) {
            ctx->pc = 0x383A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383A4Cu;
            // 0x383a50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383A68u;
            goto label_383a68;
        }
    }
    ctx->pc = 0x383A54u;
label_383a54:
    // 0x383a54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x383a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_383a58:
    // 0x383a58: 0x10a30035  beq         $a1, $v1, . + 4 + (0x35 << 2)
label_383a5c:
    if (ctx->pc == 0x383A5Cu) {
        ctx->pc = 0x383A60u;
        goto label_383a60;
    }
    ctx->pc = 0x383A58u;
    {
        const bool branch_taken_0x383a58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x383a58) {
            ctx->pc = 0x383B30u;
            goto label_383b30;
        }
    }
    ctx->pc = 0x383A60u;
label_383a60:
    // 0x383a60: 0x10000033  b           . + 4 + (0x33 << 2)
label_383a64:
    if (ctx->pc == 0x383A64u) {
        ctx->pc = 0x383A68u;
        goto label_383a68;
    }
    ctx->pc = 0x383A60u;
    {
        const bool branch_taken_0x383a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383a60) {
            ctx->pc = 0x383B30u;
            goto label_383b30;
        }
    }
    ctx->pc = 0x383A68u;
label_383a68:
    // 0x383a68: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x383a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_383a6c:
    // 0x383a6c: 0x320f809  jalr        $t9
label_383a70:
    if (ctx->pc == 0x383A70u) {
        ctx->pc = 0x383A74u;
        goto label_383a74;
    }
    ctx->pc = 0x383A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x383A74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x383A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x383A74u; }
            if (ctx->pc != 0x383A74u) { return; }
        }
        }
    }
    ctx->pc = 0x383A74u;
label_383a74:
    // 0x383a74: 0x8ef60070  lw          $s6, 0x70($s7)
    ctx->pc = 0x383a74u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 112)));
label_383a78:
    // 0x383a78: 0x12c0002d  beqz        $s6, . + 4 + (0x2D << 2)
label_383a7c:
    if (ctx->pc == 0x383A7Cu) {
        ctx->pc = 0x383A80u;
        goto label_383a80;
    }
    ctx->pc = 0x383A78u;
    {
        const bool branch_taken_0x383a78 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x383a78) {
            ctx->pc = 0x383B30u;
            goto label_383b30;
        }
    }
    ctx->pc = 0x383A80u;
label_383a80:
    // 0x383a80: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x383a80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383a84:
    // 0x383a84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x383a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383a88:
    // 0x383a88: 0x8ee20074  lw          $v0, 0x74($s7)
    ctx->pc = 0x383a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 116)));
label_383a8c:
    // 0x383a8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x383a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_383a90:
    // 0x383a90: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x383a90u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_383a94:
    // 0x383a94: 0xc0e122c  jal         func_3848B0
label_383a98:
    if (ctx->pc == 0x383A98u) {
        ctx->pc = 0x383A98u;
            // 0x383a98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383A9Cu;
        goto label_383a9c;
    }
    ctx->pc = 0x383A94u;
    SET_GPR_U32(ctx, 31, 0x383A9Cu);
    ctx->pc = 0x383A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383A94u;
            // 0x383a98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3848B0u;
    if (runtime->hasFunction(0x3848B0u)) {
        auto targetFn = runtime->lookupFunction(0x3848B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383A9Cu; }
        if (ctx->pc != 0x383A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003848B0_0x3848b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383A9Cu; }
        if (ctx->pc != 0x383A9Cu) { return; }
    }
    ctx->pc = 0x383A9Cu;
label_383a9c:
    // 0x383a9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x383a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_383aa0:
    // 0x383aa0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_383aa4:
    if (ctx->pc == 0x383AA4u) {
        ctx->pc = 0x383AA8u;
        goto label_383aa8;
    }
    ctx->pc = 0x383AA0u;
    {
        const bool branch_taken_0x383aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x383aa0) {
            ctx->pc = 0x383AD0u;
            goto label_383ad0;
        }
    }
    ctx->pc = 0x383AA8u;
label_383aa8:
    // 0x383aa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_383aac:
    if (ctx->pc == 0x383AACu) {
        ctx->pc = 0x383AB0u;
        goto label_383ab0;
    }
    ctx->pc = 0x383AA8u;
    {
        const bool branch_taken_0x383aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383aa8) {
            ctx->pc = 0x383AB8u;
            goto label_383ab8;
        }
    }
    ctx->pc = 0x383AB0u;
label_383ab0:
    // 0x383ab0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_383ab4:
    if (ctx->pc == 0x383AB4u) {
        ctx->pc = 0x383AB8u;
        goto label_383ab8;
    }
    ctx->pc = 0x383AB0u;
    {
        const bool branch_taken_0x383ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383ab0) {
            ctx->pc = 0x383B20u;
            goto label_383b20;
        }
    }
    ctx->pc = 0x383AB8u;
label_383ab8:
    // 0x383ab8: 0xc0e16e4  jal         func_385B90
label_383abc:
    if (ctx->pc == 0x383ABCu) {
        ctx->pc = 0x383ABCu;
            // 0x383abc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383AC0u;
        goto label_383ac0;
    }
    ctx->pc = 0x383AB8u;
    SET_GPR_U32(ctx, 31, 0x383AC0u);
    ctx->pc = 0x383ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383AB8u;
            // 0x383abc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385B90u;
    if (runtime->hasFunction(0x385B90u)) {
        auto targetFn = runtime->lookupFunction(0x385B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383AC0u; }
        if (ctx->pc != 0x383AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385B90_0x385b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383AC0u; }
        if (ctx->pc != 0x383AC0u) { return; }
    }
    ctx->pc = 0x383AC0u;
label_383ac0:
    // 0x383ac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x383ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_383ac4:
    // 0x383ac4: 0xc0e1228  jal         func_3848A0
label_383ac8:
    if (ctx->pc == 0x383AC8u) {
        ctx->pc = 0x383AC8u;
            // 0x383ac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x383ACCu;
        goto label_383acc;
    }
    ctx->pc = 0x383AC4u;
    SET_GPR_U32(ctx, 31, 0x383ACCu);
    ctx->pc = 0x383AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383AC4u;
            // 0x383ac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3848A0u;
    if (runtime->hasFunction(0x3848A0u)) {
        auto targetFn = runtime->lookupFunction(0x3848A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383ACCu; }
        if (ctx->pc != 0x383ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003848A0_0x3848a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383ACCu; }
        if (ctx->pc != 0x383ACCu) { return; }
    }
    ctx->pc = 0x383ACCu;
label_383acc:
    // 0x383acc: 0x0  nop
    ctx->pc = 0x383accu;
    // NOP
label_383ad0:
    // 0x383ad0: 0x8e90005c  lw          $s0, 0x5C($s4)
    ctx->pc = 0x383ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_383ad4:
    // 0x383ad4: 0x8e920058  lw          $s2, 0x58($s4)
    ctx->pc = 0x383ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_383ad8:
    // 0x383ad8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_383adc:
    if (ctx->pc == 0x383ADCu) {
        ctx->pc = 0x383ADCu;
            // 0x383adc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383AE0u;
        goto label_383ae0;
    }
    ctx->pc = 0x383AD8u;
    {
        const bool branch_taken_0x383ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x383ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383AD8u;
            // 0x383adc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ad8) {
            ctx->pc = 0x383B20u;
            goto label_383b20;
        }
    }
    ctx->pc = 0x383AE0u;
label_383ae0:
    // 0x383ae0: 0xc0e0f0c  jal         func_383C30
label_383ae4:
    if (ctx->pc == 0x383AE4u) {
        ctx->pc = 0x383AE4u;
            // 0x383ae4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x383AE8u;
        goto label_383ae8;
    }
    ctx->pc = 0x383AE0u;
    SET_GPR_U32(ctx, 31, 0x383AE8u);
    ctx->pc = 0x383AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383AE0u;
            // 0x383ae4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x383C30u;
    if (runtime->hasFunction(0x383C30u)) {
        auto targetFn = runtime->lookupFunction(0x383C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383AE8u; }
        if (ctx->pc != 0x383AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00383C30_0x383c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383AE8u; }
        if (ctx->pc != 0x383AE8u) { return; }
    }
    ctx->pc = 0x383AE8u;
label_383ae8:
    // 0x383ae8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_383aec:
    if (ctx->pc == 0x383AECu) {
        ctx->pc = 0x383AF0u;
        goto label_383af0;
    }
    ctx->pc = 0x383AE8u;
    {
        const bool branch_taken_0x383ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383ae8) {
            ctx->pc = 0x383B08u;
            goto label_383b08;
        }
    }
    ctx->pc = 0x383AF0u;
label_383af0:
    // 0x383af0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x383af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_383af4:
    // 0x383af4: 0xc0e0ed8  jal         func_383B60
label_383af8:
    if (ctx->pc == 0x383AF8u) {
        ctx->pc = 0x383AF8u;
            // 0x383af8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383AFCu;
        goto label_383afc;
    }
    ctx->pc = 0x383AF4u;
    SET_GPR_U32(ctx, 31, 0x383AFCu);
    ctx->pc = 0x383AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383AF4u;
            // 0x383af8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x383B60u;
    if (runtime->hasFunction(0x383B60u)) {
        auto targetFn = runtime->lookupFunction(0x383B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383AFCu; }
        if (ctx->pc != 0x383AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00383B60_0x383b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383AFCu; }
        if (ctx->pc != 0x383AFCu) { return; }
    }
    ctx->pc = 0x383AFCu;
label_383afc:
    // 0x383afc: 0x10000004  b           . + 4 + (0x4 << 2)
label_383b00:
    if (ctx->pc == 0x383B00u) {
        ctx->pc = 0x383B04u;
        goto label_383b04;
    }
    ctx->pc = 0x383AFCu;
    {
        const bool branch_taken_0x383afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383afc) {
            ctx->pc = 0x383B10u;
            goto label_383b10;
        }
    }
    ctx->pc = 0x383B04u;
label_383b04:
    // 0x383b04: 0x0  nop
    ctx->pc = 0x383b04u;
    // NOP
label_383b08:
    // 0x383b08: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x383b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_383b0c:
    // 0x383b0c: 0x0  nop
    ctx->pc = 0x383b0cu;
    // NOP
label_383b10:
    // 0x383b10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x383b10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_383b14:
    // 0x383b14: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x383b14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_383b18:
    // 0x383b18: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_383b1c:
    if (ctx->pc == 0x383B1Cu) {
        ctx->pc = 0x383B20u;
        goto label_383b20;
    }
    ctx->pc = 0x383B18u;
    {
        const bool branch_taken_0x383b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x383b18) {
            ctx->pc = 0x383AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_383ae0;
        }
    }
    ctx->pc = 0x383B20u;
label_383b20:
    // 0x383b20: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x383b20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_383b24:
    // 0x383b24: 0x2b6182b  sltu        $v1, $s5, $s6
    ctx->pc = 0x383b24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_383b28:
    // 0x383b28: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_383b2c:
    if (ctx->pc == 0x383B2Cu) {
        ctx->pc = 0x383B2Cu;
            // 0x383b2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x383B30u;
        goto label_383b30;
    }
    ctx->pc = 0x383B28u;
    {
        const bool branch_taken_0x383b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x383B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383B28u;
            // 0x383b2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b28) {
            ctx->pc = 0x383A88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_383a88;
        }
    }
    ctx->pc = 0x383B30u;
label_383b30:
    // 0x383b30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x383b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_383b34:
    // 0x383b34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x383b34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_383b38:
    // 0x383b38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x383b38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_383b3c:
    // 0x383b3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x383b3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_383b40:
    // 0x383b40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x383b40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_383b44:
    // 0x383b44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x383b44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_383b48:
    // 0x383b48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x383b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_383b4c:
    // 0x383b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x383b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_383b50:
    // 0x383b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x383b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_383b54:
    // 0x383b54: 0x3e00008  jr          $ra
label_383b58:
    if (ctx->pc == 0x383B58u) {
        ctx->pc = 0x383B58u;
            // 0x383b58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x383B5Cu;
        goto label_383b5c;
    }
    ctx->pc = 0x383B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383B54u;
            // 0x383b58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x383B5Cu;
label_383b5c:
    // 0x383b5c: 0x0  nop
    ctx->pc = 0x383b5cu;
    // NOP
}
