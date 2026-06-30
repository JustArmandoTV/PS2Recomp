#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C37F0
// Address: 0x2c37f0 - 0x2c3ac0
void sub_002C37F0_0x2c37f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C37F0_0x2c37f0");
#endif

    switch (ctx->pc) {
        case 0x2c37f0u: goto label_2c37f0;
        case 0x2c37f4u: goto label_2c37f4;
        case 0x2c37f8u: goto label_2c37f8;
        case 0x2c37fcu: goto label_2c37fc;
        case 0x2c3800u: goto label_2c3800;
        case 0x2c3804u: goto label_2c3804;
        case 0x2c3808u: goto label_2c3808;
        case 0x2c380cu: goto label_2c380c;
        case 0x2c3810u: goto label_2c3810;
        case 0x2c3814u: goto label_2c3814;
        case 0x2c3818u: goto label_2c3818;
        case 0x2c381cu: goto label_2c381c;
        case 0x2c3820u: goto label_2c3820;
        case 0x2c3824u: goto label_2c3824;
        case 0x2c3828u: goto label_2c3828;
        case 0x2c382cu: goto label_2c382c;
        case 0x2c3830u: goto label_2c3830;
        case 0x2c3834u: goto label_2c3834;
        case 0x2c3838u: goto label_2c3838;
        case 0x2c383cu: goto label_2c383c;
        case 0x2c3840u: goto label_2c3840;
        case 0x2c3844u: goto label_2c3844;
        case 0x2c3848u: goto label_2c3848;
        case 0x2c384cu: goto label_2c384c;
        case 0x2c3850u: goto label_2c3850;
        case 0x2c3854u: goto label_2c3854;
        case 0x2c3858u: goto label_2c3858;
        case 0x2c385cu: goto label_2c385c;
        case 0x2c3860u: goto label_2c3860;
        case 0x2c3864u: goto label_2c3864;
        case 0x2c3868u: goto label_2c3868;
        case 0x2c386cu: goto label_2c386c;
        case 0x2c3870u: goto label_2c3870;
        case 0x2c3874u: goto label_2c3874;
        case 0x2c3878u: goto label_2c3878;
        case 0x2c387cu: goto label_2c387c;
        case 0x2c3880u: goto label_2c3880;
        case 0x2c3884u: goto label_2c3884;
        case 0x2c3888u: goto label_2c3888;
        case 0x2c388cu: goto label_2c388c;
        case 0x2c3890u: goto label_2c3890;
        case 0x2c3894u: goto label_2c3894;
        case 0x2c3898u: goto label_2c3898;
        case 0x2c389cu: goto label_2c389c;
        case 0x2c38a0u: goto label_2c38a0;
        case 0x2c38a4u: goto label_2c38a4;
        case 0x2c38a8u: goto label_2c38a8;
        case 0x2c38acu: goto label_2c38ac;
        case 0x2c38b0u: goto label_2c38b0;
        case 0x2c38b4u: goto label_2c38b4;
        case 0x2c38b8u: goto label_2c38b8;
        case 0x2c38bcu: goto label_2c38bc;
        case 0x2c38c0u: goto label_2c38c0;
        case 0x2c38c4u: goto label_2c38c4;
        case 0x2c38c8u: goto label_2c38c8;
        case 0x2c38ccu: goto label_2c38cc;
        case 0x2c38d0u: goto label_2c38d0;
        case 0x2c38d4u: goto label_2c38d4;
        case 0x2c38d8u: goto label_2c38d8;
        case 0x2c38dcu: goto label_2c38dc;
        case 0x2c38e0u: goto label_2c38e0;
        case 0x2c38e4u: goto label_2c38e4;
        case 0x2c38e8u: goto label_2c38e8;
        case 0x2c38ecu: goto label_2c38ec;
        case 0x2c38f0u: goto label_2c38f0;
        case 0x2c38f4u: goto label_2c38f4;
        case 0x2c38f8u: goto label_2c38f8;
        case 0x2c38fcu: goto label_2c38fc;
        case 0x2c3900u: goto label_2c3900;
        case 0x2c3904u: goto label_2c3904;
        case 0x2c3908u: goto label_2c3908;
        case 0x2c390cu: goto label_2c390c;
        case 0x2c3910u: goto label_2c3910;
        case 0x2c3914u: goto label_2c3914;
        case 0x2c3918u: goto label_2c3918;
        case 0x2c391cu: goto label_2c391c;
        case 0x2c3920u: goto label_2c3920;
        case 0x2c3924u: goto label_2c3924;
        case 0x2c3928u: goto label_2c3928;
        case 0x2c392cu: goto label_2c392c;
        case 0x2c3930u: goto label_2c3930;
        case 0x2c3934u: goto label_2c3934;
        case 0x2c3938u: goto label_2c3938;
        case 0x2c393cu: goto label_2c393c;
        case 0x2c3940u: goto label_2c3940;
        case 0x2c3944u: goto label_2c3944;
        case 0x2c3948u: goto label_2c3948;
        case 0x2c394cu: goto label_2c394c;
        case 0x2c3950u: goto label_2c3950;
        case 0x2c3954u: goto label_2c3954;
        case 0x2c3958u: goto label_2c3958;
        case 0x2c395cu: goto label_2c395c;
        case 0x2c3960u: goto label_2c3960;
        case 0x2c3964u: goto label_2c3964;
        case 0x2c3968u: goto label_2c3968;
        case 0x2c396cu: goto label_2c396c;
        case 0x2c3970u: goto label_2c3970;
        case 0x2c3974u: goto label_2c3974;
        case 0x2c3978u: goto label_2c3978;
        case 0x2c397cu: goto label_2c397c;
        case 0x2c3980u: goto label_2c3980;
        case 0x2c3984u: goto label_2c3984;
        case 0x2c3988u: goto label_2c3988;
        case 0x2c398cu: goto label_2c398c;
        case 0x2c3990u: goto label_2c3990;
        case 0x2c3994u: goto label_2c3994;
        case 0x2c3998u: goto label_2c3998;
        case 0x2c399cu: goto label_2c399c;
        case 0x2c39a0u: goto label_2c39a0;
        case 0x2c39a4u: goto label_2c39a4;
        case 0x2c39a8u: goto label_2c39a8;
        case 0x2c39acu: goto label_2c39ac;
        case 0x2c39b0u: goto label_2c39b0;
        case 0x2c39b4u: goto label_2c39b4;
        case 0x2c39b8u: goto label_2c39b8;
        case 0x2c39bcu: goto label_2c39bc;
        case 0x2c39c0u: goto label_2c39c0;
        case 0x2c39c4u: goto label_2c39c4;
        case 0x2c39c8u: goto label_2c39c8;
        case 0x2c39ccu: goto label_2c39cc;
        case 0x2c39d0u: goto label_2c39d0;
        case 0x2c39d4u: goto label_2c39d4;
        case 0x2c39d8u: goto label_2c39d8;
        case 0x2c39dcu: goto label_2c39dc;
        case 0x2c39e0u: goto label_2c39e0;
        case 0x2c39e4u: goto label_2c39e4;
        case 0x2c39e8u: goto label_2c39e8;
        case 0x2c39ecu: goto label_2c39ec;
        case 0x2c39f0u: goto label_2c39f0;
        case 0x2c39f4u: goto label_2c39f4;
        case 0x2c39f8u: goto label_2c39f8;
        case 0x2c39fcu: goto label_2c39fc;
        case 0x2c3a00u: goto label_2c3a00;
        case 0x2c3a04u: goto label_2c3a04;
        case 0x2c3a08u: goto label_2c3a08;
        case 0x2c3a0cu: goto label_2c3a0c;
        case 0x2c3a10u: goto label_2c3a10;
        case 0x2c3a14u: goto label_2c3a14;
        case 0x2c3a18u: goto label_2c3a18;
        case 0x2c3a1cu: goto label_2c3a1c;
        case 0x2c3a20u: goto label_2c3a20;
        case 0x2c3a24u: goto label_2c3a24;
        case 0x2c3a28u: goto label_2c3a28;
        case 0x2c3a2cu: goto label_2c3a2c;
        case 0x2c3a30u: goto label_2c3a30;
        case 0x2c3a34u: goto label_2c3a34;
        case 0x2c3a38u: goto label_2c3a38;
        case 0x2c3a3cu: goto label_2c3a3c;
        case 0x2c3a40u: goto label_2c3a40;
        case 0x2c3a44u: goto label_2c3a44;
        case 0x2c3a48u: goto label_2c3a48;
        case 0x2c3a4cu: goto label_2c3a4c;
        case 0x2c3a50u: goto label_2c3a50;
        case 0x2c3a54u: goto label_2c3a54;
        case 0x2c3a58u: goto label_2c3a58;
        case 0x2c3a5cu: goto label_2c3a5c;
        case 0x2c3a60u: goto label_2c3a60;
        case 0x2c3a64u: goto label_2c3a64;
        case 0x2c3a68u: goto label_2c3a68;
        case 0x2c3a6cu: goto label_2c3a6c;
        case 0x2c3a70u: goto label_2c3a70;
        case 0x2c3a74u: goto label_2c3a74;
        case 0x2c3a78u: goto label_2c3a78;
        case 0x2c3a7cu: goto label_2c3a7c;
        case 0x2c3a80u: goto label_2c3a80;
        case 0x2c3a84u: goto label_2c3a84;
        case 0x2c3a88u: goto label_2c3a88;
        case 0x2c3a8cu: goto label_2c3a8c;
        case 0x2c3a90u: goto label_2c3a90;
        case 0x2c3a94u: goto label_2c3a94;
        case 0x2c3a98u: goto label_2c3a98;
        case 0x2c3a9cu: goto label_2c3a9c;
        case 0x2c3aa0u: goto label_2c3aa0;
        case 0x2c3aa4u: goto label_2c3aa4;
        case 0x2c3aa8u: goto label_2c3aa8;
        case 0x2c3aacu: goto label_2c3aac;
        case 0x2c3ab0u: goto label_2c3ab0;
        case 0x2c3ab4u: goto label_2c3ab4;
        case 0x2c3ab8u: goto label_2c3ab8;
        case 0x2c3abcu: goto label_2c3abc;
        default: break;
    }

    ctx->pc = 0x2c37f0u;

label_2c37f0:
    // 0x2c37f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c37f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c37f4:
    // 0x2c37f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2c37f8:
    // 0x2c37f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c37f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c37fc:
    // 0x2c37fc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2c37fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c3800:
    // 0x2c3800: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c3800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c3804:
    // 0x2c3804: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x2c3804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
label_2c3808:
    // 0x2c3808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c380c:
    // 0x2c380c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c3810:
    // 0x2c3810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3814:
    // 0x2c3814: 0xc0aeaf4  jal         func_2BABD0
label_2c3818:
    if (ctx->pc == 0x2C3818u) {
        ctx->pc = 0x2C3818u;
            // 0x2c3818: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2C381Cu;
        goto label_2c381c;
    }
    ctx->pc = 0x2C3814u;
    SET_GPR_U32(ctx, 31, 0x2C381Cu);
    ctx->pc = 0x2C3818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3814u;
            // 0x2c3818: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C381Cu; }
        if (ctx->pc != 0x2C381Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C381Cu; }
        if (ctx->pc != 0x2C381Cu) { return; }
    }
    ctx->pc = 0x2C381Cu;
label_2c381c:
    // 0x2c381c: 0xc0b0fe8  jal         func_2C3FA0
label_2c3820:
    if (ctx->pc == 0x2C3820u) {
        ctx->pc = 0x2C3820u;
            // 0x2c3820: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C3824u;
        goto label_2c3824;
    }
    ctx->pc = 0x2C381Cu;
    SET_GPR_U32(ctx, 31, 0x2C3824u);
    ctx->pc = 0x2C3820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C381Cu;
            // 0x2c3820: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3FA0u;
    if (runtime->hasFunction(0x2C3FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2C3FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3824u; }
        if (ctx->pc != 0x2C3824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3FA0_0x2c3fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3824u; }
        if (ctx->pc != 0x2C3824u) { return; }
    }
    ctx->pc = 0x2C3824u;
label_2c3824:
    // 0x2c3824: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c3824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c3828:
    // 0x2c3828: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c382c:
    // 0x2c382c: 0x24631120  addiu       $v1, $v1, 0x1120
    ctx->pc = 0x2c382cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4384));
label_2c3830:
    // 0x2c3830: 0x24421158  addiu       $v0, $v0, 0x1158
    ctx->pc = 0x2c3830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4440));
label_2c3834:
    // 0x2c3834: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c3834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c3838:
    // 0x2c3838: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2c3838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c383c:
    // 0x2c383c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c383cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c3840:
    // 0x2c3840: 0xc0b0fe0  jal         func_2C3F80
label_2c3844:
    if (ctx->pc == 0x2C3844u) {
        ctx->pc = 0x2C3844u;
            // 0x2c3844: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x2C3848u;
        goto label_2c3848;
    }
    ctx->pc = 0x2C3840u;
    SET_GPR_U32(ctx, 31, 0x2C3848u);
    ctx->pc = 0x2C3844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3840u;
            // 0x2c3844: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3F80u;
    if (runtime->hasFunction(0x2C3F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3848u; }
        if (ctx->pc != 0x2C3848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3F80_0x2c3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3848u; }
        if (ctx->pc != 0x2C3848u) { return; }
    }
    ctx->pc = 0x2C3848u;
label_2c3848:
    // 0x2c3848: 0xc0b0fe0  jal         func_2C3F80
label_2c384c:
    if (ctx->pc == 0x2C384Cu) {
        ctx->pc = 0x2C384Cu;
            // 0x2c384c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C3850u;
        goto label_2c3850;
    }
    ctx->pc = 0x2C3848u;
    SET_GPR_U32(ctx, 31, 0x2C3850u);
    ctx->pc = 0x2C384Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3848u;
            // 0x2c384c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3F80u;
    if (runtime->hasFunction(0x2C3F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3850u; }
        if (ctx->pc != 0x2C3850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3F80_0x2c3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3850u; }
        if (ctx->pc != 0x2C3850u) { return; }
    }
    ctx->pc = 0x2C3850u;
label_2c3850:
    // 0x2c3850: 0xc0b0548  jal         func_2C1520
label_2c3854:
    if (ctx->pc == 0x2C3854u) {
        ctx->pc = 0x2C3854u;
            // 0x2c3854: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2C3858u;
        goto label_2c3858;
    }
    ctx->pc = 0x2C3850u;
    SET_GPR_U32(ctx, 31, 0x2C3858u);
    ctx->pc = 0x2C3854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3850u;
            // 0x2c3854: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3858u; }
        if (ctx->pc != 0x2C3858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3858u; }
        if (ctx->pc != 0x2C3858u) { return; }
    }
    ctx->pc = 0x2C3858u;
label_2c3858:
    // 0x2c3858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c385c:
    // 0x2c385c: 0xc0aeac0  jal         func_2BAB00
label_2c3860:
    if (ctx->pc == 0x2C3860u) {
        ctx->pc = 0x2C3860u;
            // 0x2c3860: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->pc = 0x2C3864u;
        goto label_2c3864;
    }
    ctx->pc = 0x2C385Cu;
    SET_GPR_U32(ctx, 31, 0x2C3864u);
    ctx->pc = 0x2C3860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C385Cu;
            // 0x2c3860: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3864u; }
        if (ctx->pc != 0x2C3864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3864u; }
        if (ctx->pc != 0x2C3864u) { return; }
    }
    ctx->pc = 0x2C3864u;
label_2c3864:
    // 0x2c3864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3868:
    // 0x2c3868: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_2c386c:
    if (ctx->pc == 0x2C386Cu) {
        ctx->pc = 0x2C3870u;
        goto label_2c3870;
    }
    ctx->pc = 0x2C3868u;
    {
        const bool branch_taken_0x2c3868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3868) {
            ctx->pc = 0x2C38E8u;
            goto label_2c38e8;
        }
    }
    ctx->pc = 0x2C3870u;
label_2c3870:
    // 0x2c3870: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c3870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2c3874:
    // 0x2c3874: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c3874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2c3878:
    // 0x2c3878: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2c3878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2c387c:
    // 0x2c387c: 0xc040138  jal         func_1004E0
label_2c3880:
    if (ctx->pc == 0x2C3880u) {
        ctx->pc = 0x2C3880u;
            // 0x2c3880: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2C3884u;
        goto label_2c3884;
    }
    ctx->pc = 0x2C387Cu;
    SET_GPR_U32(ctx, 31, 0x2C3884u);
    ctx->pc = 0x2C3880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C387Cu;
            // 0x2c3880: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3884u; }
        if (ctx->pc != 0x2C3884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3884u; }
        if (ctx->pc != 0x2C3884u) { return; }
    }
    ctx->pc = 0x2C3884u;
label_2c3884:
    // 0x2c3884: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c3884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c3888:
    // 0x2c3888: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c3888u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2c388c:
    // 0x2c388c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3890:
    // 0x2c3890: 0x24a53e70  addiu       $a1, $a1, 0x3E70
    ctx->pc = 0x2c3890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15984));
label_2c3894:
    // 0x2c3894: 0x24c63bc0  addiu       $a2, $a2, 0x3BC0
    ctx->pc = 0x2c3894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15296));
label_2c3898:
    // 0x2c3898: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x2c3898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2c389c:
    // 0x2c389c: 0xc040840  jal         func_102100
label_2c38a0:
    if (ctx->pc == 0x2C38A0u) {
        ctx->pc = 0x2C38A0u;
            // 0x2c38a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C38A4u;
        goto label_2c38a4;
    }
    ctx->pc = 0x2C389Cu;
    SET_GPR_U32(ctx, 31, 0x2C38A4u);
    ctx->pc = 0x2C38A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C389Cu;
            // 0x2c38a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38A4u; }
        if (ctx->pc != 0x2C38A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38A4u; }
        if (ctx->pc != 0x2C38A4u) { return; }
    }
    ctx->pc = 0x2C38A4u;
label_2c38a4:
    // 0x2c38a4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2c38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_2c38a8:
    // 0x2c38a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c38a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c38ac:
    // 0x2c38ac: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2c38acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c38b0:
    // 0x2c38b0: 0xc0b0eec  jal         func_2C3BB0
label_2c38b4:
    if (ctx->pc == 0x2C38B4u) {
        ctx->pc = 0x2C38B4u;
            // 0x2c38b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C38B8u;
        goto label_2c38b8;
    }
    ctx->pc = 0x2C38B0u;
    SET_GPR_U32(ctx, 31, 0x2C38B8u);
    ctx->pc = 0x2C38B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C38B0u;
            // 0x2c38b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BB0u;
    if (runtime->hasFunction(0x2C3BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2C3BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38B8u; }
        if (ctx->pc != 0x2C38B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3BB0_0x2c3bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38B8u; }
        if (ctx->pc != 0x2C38B8u) { return; }
    }
    ctx->pc = 0x2C38B8u;
label_2c38b8:
    // 0x2c38b8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2c38b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c38bc:
    // 0x2c38bc: 0xc0b0eec  jal         func_2C3BB0
label_2c38c0:
    if (ctx->pc == 0x2C38C0u) {
        ctx->pc = 0x2C38C0u;
            // 0x2c38c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C38C4u;
        goto label_2c38c4;
    }
    ctx->pc = 0x2C38BCu;
    SET_GPR_U32(ctx, 31, 0x2C38C4u);
    ctx->pc = 0x2C38C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C38BCu;
            // 0x2c38c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BB0u;
    if (runtime->hasFunction(0x2C3BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2C3BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38C4u; }
        if (ctx->pc != 0x2C38C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3BB0_0x2c3bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38C4u; }
        if (ctx->pc != 0x2C38C4u) { return; }
    }
    ctx->pc = 0x2C38C4u;
label_2c38c4:
    // 0x2c38c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c38c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c38c8:
    // 0x2c38c8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2c38c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c38cc:
    // 0x2c38cc: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2c38ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2c38d0:
    // 0x2c38d0: 0xc0b0ee4  jal         func_2C3B90
label_2c38d4:
    if (ctx->pc == 0x2C38D4u) {
        ctx->pc = 0x2C38D4u;
            // 0x2c38d4: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x2C38D8u;
        goto label_2c38d8;
    }
    ctx->pc = 0x2C38D0u;
    SET_GPR_U32(ctx, 31, 0x2C38D8u);
    ctx->pc = 0x2C38D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C38D0u;
            // 0x2c38d4: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3B90u;
    if (runtime->hasFunction(0x2C3B90u)) {
        auto targetFn = runtime->lookupFunction(0x2C3B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38D8u; }
        if (ctx->pc != 0x2C38D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3B90_0x2c3b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38D8u; }
        if (ctx->pc != 0x2C38D8u) { return; }
    }
    ctx->pc = 0x2C38D8u;
label_2c38d8:
    // 0x2c38d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c38d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c38dc:
    // 0x2c38dc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2c38dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c38e0:
    // 0x2c38e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2c38e4:
    if (ctx->pc == 0x2C38E4u) {
        ctx->pc = 0x2C38E4u;
            // 0x2c38e4: 0x26730140  addiu       $s3, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->pc = 0x2C38E8u;
        goto label_2c38e8;
    }
    ctx->pc = 0x2C38E0u;
    {
        const bool branch_taken_0x2c38e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C38E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C38E0u;
            // 0x2c38e4: 0x26730140  addiu       $s3, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38e0) {
            ctx->pc = 0x2C38C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c38c8;
        }
    }
    ctx->pc = 0x2C38E8u;
label_2c38e8:
    // 0x2c38e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c38ec:
    // 0x2c38ec: 0x2442a4c0  addiu       $v0, $v0, -0x5B40
    ctx->pc = 0x2c38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943936));
label_2c38f0:
    // 0x2c38f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c38f4:
    // 0x2c38f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c38f8:
    // 0x2c38f8: 0x2442a4f8  addiu       $v0, $v0, -0x5B08
    ctx->pc = 0x2c38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943992));
label_2c38fc:
    // 0x2c38fc: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c38fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c3900:
    // 0x2c3900: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x2c3900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_2c3904:
    // 0x2c3904: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c3904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c3908:
    // 0x2c3908: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x2c3908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_2c390c:
    // 0x2c390c: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x2c390cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_2c3910:
    // 0x2c3910: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x2c3910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_2c3914:
    // 0x2c3914: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x2c3914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_2c3918:
    // 0x2c3918: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x2c3918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_2c391c:
    // 0x2c391c: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x2c391cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_2c3920:
    // 0x2c3920: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x2c3920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
label_2c3924:
    // 0x2c3924: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x2c3924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_2c3928:
    // 0x2c3928: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x2c3928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
label_2c392c:
    // 0x2c392c: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x2c392cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_2c3930:
    // 0x2c3930: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x2c3930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_2c3934:
    // 0x2c3934: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x2c3934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_2c3938:
    // 0x2c3938: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x2c3938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
label_2c393c:
    // 0x2c393c: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x2c393cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_2c3940:
    // 0x2c3940: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c3940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c3944:
    // 0x2c3944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c3944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c3948:
    // 0x2c3948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c3948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c394c:
    // 0x2c394c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c394cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3950:
    // 0x2c3950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3954:
    // 0x2c3954: 0x3e00008  jr          $ra
label_2c3958:
    if (ctx->pc == 0x2C3958u) {
        ctx->pc = 0x2C3958u;
            // 0x2c3958: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2C395Cu;
        goto label_2c395c;
    }
    ctx->pc = 0x2C3954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3954u;
            // 0x2c3958: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C395Cu;
label_2c395c:
    // 0x2c395c: 0x0  nop
    ctx->pc = 0x2c395cu;
    // NOP
label_2c3960:
    // 0x2c3960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c3964:
    // 0x2c3964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c3964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c3968:
    // 0x2c3968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c396c:
    // 0x2c396c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c396cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c3970:
    // 0x2c3970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3974:
    // 0x2c3974: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c3978:
    if (ctx->pc == 0x2C3978u) {
        ctx->pc = 0x2C3978u;
            // 0x2c3978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C397Cu;
        goto label_2c397c;
    }
    ctx->pc = 0x2C3974u;
    {
        const bool branch_taken_0x2c3974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3974u;
            // 0x2c3978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3974) {
            ctx->pc = 0x2C3AA8u;
            goto label_2c3aa8;
        }
    }
    ctx->pc = 0x2C397Cu;
label_2c397c:
    // 0x2c397c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c397cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c3980:
    // 0x2c3980: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3984:
    // 0x2c3984: 0x24631120  addiu       $v1, $v1, 0x1120
    ctx->pc = 0x2c3984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4384));
label_2c3988:
    // 0x2c3988: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c3988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c398c:
    // 0x2c398c: 0x24421158  addiu       $v0, $v0, 0x1158
    ctx->pc = 0x2c398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4440));
label_2c3990:
    // 0x2c3990: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c3990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c3994:
    // 0x2c3994: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c3994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c3998:
    // 0x2c3998: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c3998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c399c:
    // 0x2c399c: 0xc0407c0  jal         func_101F00
label_2c39a0:
    if (ctx->pc == 0x2C39A0u) {
        ctx->pc = 0x2C39A0u;
            // 0x2c39a0: 0x24a53bc0  addiu       $a1, $a1, 0x3BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15296));
        ctx->pc = 0x2C39A4u;
        goto label_2c39a4;
    }
    ctx->pc = 0x2C399Cu;
    SET_GPR_U32(ctx, 31, 0x2C39A4u);
    ctx->pc = 0x2C39A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C399Cu;
            // 0x2c39a0: 0x24a53bc0  addiu       $a1, $a1, 0x3BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39A4u; }
        if (ctx->pc != 0x2C39A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39A4u; }
        if (ctx->pc != 0x2C39A4u) { return; }
    }
    ctx->pc = 0x2C39A4u;
label_2c39a4:
    // 0x2c39a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c39a8:
    // 0x2c39a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c39ac:
    if (ctx->pc == 0x2C39ACu) {
        ctx->pc = 0x2C39ACu;
            // 0x2c39ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C39B0u;
        goto label_2c39b0;
    }
    ctx->pc = 0x2C39A8u;
    {
        const bool branch_taken_0x2c39a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c39a8) {
            ctx->pc = 0x2C39ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C39A8u;
            // 0x2c39ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C39BCu;
            goto label_2c39bc;
        }
    }
    ctx->pc = 0x2C39B0u;
label_2c39b0:
    // 0x2c39b0: 0xc07507c  jal         func_1D41F0
label_2c39b4:
    if (ctx->pc == 0x2C39B4u) {
        ctx->pc = 0x2C39B4u;
            // 0x2c39b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C39B8u;
        goto label_2c39b8;
    }
    ctx->pc = 0x2C39B0u;
    SET_GPR_U32(ctx, 31, 0x2C39B8u);
    ctx->pc = 0x2C39B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C39B0u;
            // 0x2c39b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39B8u; }
        if (ctx->pc != 0x2C39B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39B8u; }
        if (ctx->pc != 0x2C39B8u) { return; }
    }
    ctx->pc = 0x2C39B8u;
label_2c39b8:
    // 0x2c39b8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c39bc:
    // 0x2c39bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c39c0:
    if (ctx->pc == 0x2C39C0u) {
        ctx->pc = 0x2C39C0u;
            // 0x2c39c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C39C4u;
        goto label_2c39c4;
    }
    ctx->pc = 0x2C39BCu;
    {
        const bool branch_taken_0x2c39bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c39bc) {
            ctx->pc = 0x2C39C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C39BCu;
            // 0x2c39c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C39ECu;
            goto label_2c39ec;
        }
    }
    ctx->pc = 0x2C39C4u;
label_2c39c4:
    // 0x2c39c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c39c8:
    if (ctx->pc == 0x2C39C8u) {
        ctx->pc = 0x2C39CCu;
        goto label_2c39cc;
    }
    ctx->pc = 0x2C39C4u;
    {
        const bool branch_taken_0x2c39c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c39c4) {
            ctx->pc = 0x2C39E8u;
            goto label_2c39e8;
        }
    }
    ctx->pc = 0x2C39CCu;
label_2c39cc:
    // 0x2c39cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c39d0:
    if (ctx->pc == 0x2C39D0u) {
        ctx->pc = 0x2C39D4u;
        goto label_2c39d4;
    }
    ctx->pc = 0x2C39CCu;
    {
        const bool branch_taken_0x2c39cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c39cc) {
            ctx->pc = 0x2C39E8u;
            goto label_2c39e8;
        }
    }
    ctx->pc = 0x2C39D4u;
label_2c39d4:
    // 0x2c39d4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c39d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c39d8:
    // 0x2c39d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c39dc:
    if (ctx->pc == 0x2C39DCu) {
        ctx->pc = 0x2C39E0u;
        goto label_2c39e0;
    }
    ctx->pc = 0x2C39D8u;
    {
        const bool branch_taken_0x2c39d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c39d8) {
            ctx->pc = 0x2C39E8u;
            goto label_2c39e8;
        }
    }
    ctx->pc = 0x2C39E0u;
label_2c39e0:
    // 0x2c39e0: 0xc0400a8  jal         func_1002A0
label_2c39e4:
    if (ctx->pc == 0x2C39E4u) {
        ctx->pc = 0x2C39E8u;
        goto label_2c39e8;
    }
    ctx->pc = 0x2C39E0u;
    SET_GPR_U32(ctx, 31, 0x2C39E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39E8u; }
        if (ctx->pc != 0x2C39E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39E8u; }
        if (ctx->pc != 0x2C39E8u) { return; }
    }
    ctx->pc = 0x2C39E8u;
label_2c39e8:
    // 0x2c39e8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c39ec:
    // 0x2c39ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c39f0:
    if (ctx->pc == 0x2C39F0u) {
        ctx->pc = 0x2C39F0u;
            // 0x2c39f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C39F4u;
        goto label_2c39f4;
    }
    ctx->pc = 0x2C39ECu;
    {
        const bool branch_taken_0x2c39ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c39ec) {
            ctx->pc = 0x2C39F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C39ECu;
            // 0x2c39f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3A1Cu;
            goto label_2c3a1c;
        }
    }
    ctx->pc = 0x2C39F4u;
label_2c39f4:
    // 0x2c39f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c39f8:
    if (ctx->pc == 0x2C39F8u) {
        ctx->pc = 0x2C39FCu;
        goto label_2c39fc;
    }
    ctx->pc = 0x2C39F4u;
    {
        const bool branch_taken_0x2c39f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c39f4) {
            ctx->pc = 0x2C3A18u;
            goto label_2c3a18;
        }
    }
    ctx->pc = 0x2C39FCu;
label_2c39fc:
    // 0x2c39fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c3a00:
    if (ctx->pc == 0x2C3A00u) {
        ctx->pc = 0x2C3A04u;
        goto label_2c3a04;
    }
    ctx->pc = 0x2C39FCu;
    {
        const bool branch_taken_0x2c39fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c39fc) {
            ctx->pc = 0x2C3A18u;
            goto label_2c3a18;
        }
    }
    ctx->pc = 0x2C3A04u;
label_2c3a04:
    // 0x2c3a04: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c3a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c3a08:
    // 0x2c3a08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c3a0c:
    if (ctx->pc == 0x2C3A0Cu) {
        ctx->pc = 0x2C3A10u;
        goto label_2c3a10;
    }
    ctx->pc = 0x2C3A08u;
    {
        const bool branch_taken_0x2c3a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a08) {
            ctx->pc = 0x2C3A18u;
            goto label_2c3a18;
        }
    }
    ctx->pc = 0x2C3A10u;
label_2c3a10:
    // 0x2c3a10: 0xc0400a8  jal         func_1002A0
label_2c3a14:
    if (ctx->pc == 0x2C3A14u) {
        ctx->pc = 0x2C3A18u;
        goto label_2c3a18;
    }
    ctx->pc = 0x2C3A10u;
    SET_GPR_U32(ctx, 31, 0x2C3A18u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A18u; }
        if (ctx->pc != 0x2C3A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A18u; }
        if (ctx->pc != 0x2C3A18u) { return; }
    }
    ctx->pc = 0x2C3A18u;
label_2c3a18:
    // 0x2c3a18: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c3a1c:
    // 0x2c3a1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c3a20:
    if (ctx->pc == 0x2C3A20u) {
        ctx->pc = 0x2C3A24u;
        goto label_2c3a24;
    }
    ctx->pc = 0x2C3A1Cu;
    {
        const bool branch_taken_0x2c3a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a1c) {
            ctx->pc = 0x2C3A38u;
            goto label_2c3a38;
        }
    }
    ctx->pc = 0x2C3A24u;
label_2c3a24:
    // 0x2c3a24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c3a28:
    // 0x2c3a28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c3a2c:
    // 0x2c3a2c: 0x24631108  addiu       $v1, $v1, 0x1108
    ctx->pc = 0x2c3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4360));
label_2c3a30:
    // 0x2c3a30: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c3a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c3a34:
    // 0x2c3a34: 0xac400dc8  sw          $zero, 0xDC8($v0)
    ctx->pc = 0x2c3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3528), GPR_U32(ctx, 0));
label_2c3a38:
    // 0x2c3a38: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c3a3c:
    if (ctx->pc == 0x2C3A3Cu) {
        ctx->pc = 0x2C3A3Cu;
            // 0x2c3a3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C3A40u;
        goto label_2c3a40;
    }
    ctx->pc = 0x2C3A38u;
    {
        const bool branch_taken_0x2c3a38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a38) {
            ctx->pc = 0x2C3A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A38u;
            // 0x2c3a3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3A94u;
            goto label_2c3a94;
        }
    }
    ctx->pc = 0x2C3A40u;
label_2c3a40:
    // 0x2c3a40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3a44:
    // 0x2c3a44: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c3a48:
    // 0x2c3a48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c3a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c3a4c:
    // 0x2c3a4c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c3a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c3a50:
    // 0x2c3a50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c3a54:
    if (ctx->pc == 0x2C3A54u) {
        ctx->pc = 0x2C3A54u;
            // 0x2c3a54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C3A58u;
        goto label_2c3a58;
    }
    ctx->pc = 0x2C3A50u;
    {
        const bool branch_taken_0x2c3a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a50) {
            ctx->pc = 0x2C3A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A50u;
            // 0x2c3a54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3A6Cu;
            goto label_2c3a6c;
        }
    }
    ctx->pc = 0x2C3A58u;
label_2c3a58:
    // 0x2c3a58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c3a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c3a5c:
    // 0x2c3a5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c3a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c3a60:
    // 0x2c3a60: 0x320f809  jalr        $t9
label_2c3a64:
    if (ctx->pc == 0x2C3A64u) {
        ctx->pc = 0x2C3A64u;
            // 0x2c3a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C3A68u;
        goto label_2c3a68;
    }
    ctx->pc = 0x2C3A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C3A68u);
        ctx->pc = 0x2C3A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A60u;
            // 0x2c3a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C3A68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A68u; }
            if (ctx->pc != 0x2C3A68u) { return; }
        }
        }
    }
    ctx->pc = 0x2C3A68u;
label_2c3a68:
    // 0x2c3a68: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c3a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c3a6c:
    // 0x2c3a6c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c3a70:
    if (ctx->pc == 0x2C3A70u) {
        ctx->pc = 0x2C3A70u;
            // 0x2c3a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A74u;
        goto label_2c3a74;
    }
    ctx->pc = 0x2C3A6Cu;
    {
        const bool branch_taken_0x2c3a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a6c) {
            ctx->pc = 0x2C3A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A6Cu;
            // 0x2c3a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3A88u;
            goto label_2c3a88;
        }
    }
    ctx->pc = 0x2C3A74u;
label_2c3a74:
    // 0x2c3a74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c3a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c3a78:
    // 0x2c3a78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c3a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c3a7c:
    // 0x2c3a7c: 0x320f809  jalr        $t9
label_2c3a80:
    if (ctx->pc == 0x2C3A80u) {
        ctx->pc = 0x2C3A80u;
            // 0x2c3a80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C3A84u;
        goto label_2c3a84;
    }
    ctx->pc = 0x2C3A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C3A84u);
        ctx->pc = 0x2C3A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A7Cu;
            // 0x2c3a80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C3A84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A84u; }
            if (ctx->pc != 0x2C3A84u) { return; }
        }
        }
    }
    ctx->pc = 0x2C3A84u;
label_2c3a84:
    // 0x2c3a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c3a88:
    // 0x2c3a88: 0xc075bf8  jal         func_1D6FE0
label_2c3a8c:
    if (ctx->pc == 0x2C3A8Cu) {
        ctx->pc = 0x2C3A8Cu;
            // 0x2c3a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A90u;
        goto label_2c3a90;
    }
    ctx->pc = 0x2C3A88u;
    SET_GPR_U32(ctx, 31, 0x2C3A90u);
    ctx->pc = 0x2C3A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A88u;
            // 0x2c3a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A90u; }
        if (ctx->pc != 0x2C3A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A90u; }
        if (ctx->pc != 0x2C3A90u) { return; }
    }
    ctx->pc = 0x2C3A90u;
label_2c3a90:
    // 0x2c3a90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c3a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c3a94:
    // 0x2c3a94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c3a94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c3a98:
    // 0x2c3a98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c3a9c:
    if (ctx->pc == 0x2C3A9Cu) {
        ctx->pc = 0x2C3A9Cu;
            // 0x2c3a9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AA0u;
        goto label_2c3aa0;
    }
    ctx->pc = 0x2C3A98u;
    {
        const bool branch_taken_0x2c3a98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c3a98) {
            ctx->pc = 0x2C3A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A98u;
            // 0x2c3a9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3AACu;
            goto label_2c3aac;
        }
    }
    ctx->pc = 0x2C3AA0u;
label_2c3aa0:
    // 0x2c3aa0: 0xc0400a8  jal         func_1002A0
label_2c3aa4:
    if (ctx->pc == 0x2C3AA4u) {
        ctx->pc = 0x2C3AA4u;
            // 0x2c3aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AA8u;
        goto label_2c3aa8;
    }
    ctx->pc = 0x2C3AA0u;
    SET_GPR_U32(ctx, 31, 0x2C3AA8u);
    ctx->pc = 0x2C3AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3AA0u;
            // 0x2c3aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3AA8u; }
        if (ctx->pc != 0x2C3AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3AA8u; }
        if (ctx->pc != 0x2C3AA8u) { return; }
    }
    ctx->pc = 0x2C3AA8u;
label_2c3aa8:
    // 0x2c3aa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c3aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c3aac:
    // 0x2c3aac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c3aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3ab0:
    // 0x2c3ab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3ab4:
    // 0x2c3ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3ab8:
    // 0x2c3ab8: 0x3e00008  jr          $ra
label_2c3abc:
    if (ctx->pc == 0x2C3ABCu) {
        ctx->pc = 0x2C3ABCu;
            // 0x2c3abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C3AC0u;
        goto label_fallthrough_0x2c3ab8;
    }
    ctx->pc = 0x2C3AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3AB8u;
            // 0x2c3abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c3ab8:
    ctx->pc = 0x2C3AC0u;
}
