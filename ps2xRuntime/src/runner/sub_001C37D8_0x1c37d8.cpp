#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C37D8
// Address: 0x1c37d8 - 0x1c3b40
void sub_001C37D8_0x1c37d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C37D8_0x1c37d8");
#endif

    switch (ctx->pc) {
        case 0x1c37d8u: goto label_1c37d8;
        case 0x1c37dcu: goto label_1c37dc;
        case 0x1c37e0u: goto label_1c37e0;
        case 0x1c37e4u: goto label_1c37e4;
        case 0x1c37e8u: goto label_1c37e8;
        case 0x1c37ecu: goto label_1c37ec;
        case 0x1c37f0u: goto label_1c37f0;
        case 0x1c37f4u: goto label_1c37f4;
        case 0x1c37f8u: goto label_1c37f8;
        case 0x1c37fcu: goto label_1c37fc;
        case 0x1c3800u: goto label_1c3800;
        case 0x1c3804u: goto label_1c3804;
        case 0x1c3808u: goto label_1c3808;
        case 0x1c380cu: goto label_1c380c;
        case 0x1c3810u: goto label_1c3810;
        case 0x1c3814u: goto label_1c3814;
        case 0x1c3818u: goto label_1c3818;
        case 0x1c381cu: goto label_1c381c;
        case 0x1c3820u: goto label_1c3820;
        case 0x1c3824u: goto label_1c3824;
        case 0x1c3828u: goto label_1c3828;
        case 0x1c382cu: goto label_1c382c;
        case 0x1c3830u: goto label_1c3830;
        case 0x1c3834u: goto label_1c3834;
        case 0x1c3838u: goto label_1c3838;
        case 0x1c383cu: goto label_1c383c;
        case 0x1c3840u: goto label_1c3840;
        case 0x1c3844u: goto label_1c3844;
        case 0x1c3848u: goto label_1c3848;
        case 0x1c384cu: goto label_1c384c;
        case 0x1c3850u: goto label_1c3850;
        case 0x1c3854u: goto label_1c3854;
        case 0x1c3858u: goto label_1c3858;
        case 0x1c385cu: goto label_1c385c;
        case 0x1c3860u: goto label_1c3860;
        case 0x1c3864u: goto label_1c3864;
        case 0x1c3868u: goto label_1c3868;
        case 0x1c386cu: goto label_1c386c;
        case 0x1c3870u: goto label_1c3870;
        case 0x1c3874u: goto label_1c3874;
        case 0x1c3878u: goto label_1c3878;
        case 0x1c387cu: goto label_1c387c;
        case 0x1c3880u: goto label_1c3880;
        case 0x1c3884u: goto label_1c3884;
        case 0x1c3888u: goto label_1c3888;
        case 0x1c388cu: goto label_1c388c;
        case 0x1c3890u: goto label_1c3890;
        case 0x1c3894u: goto label_1c3894;
        case 0x1c3898u: goto label_1c3898;
        case 0x1c389cu: goto label_1c389c;
        case 0x1c38a0u: goto label_1c38a0;
        case 0x1c38a4u: goto label_1c38a4;
        case 0x1c38a8u: goto label_1c38a8;
        case 0x1c38acu: goto label_1c38ac;
        case 0x1c38b0u: goto label_1c38b0;
        case 0x1c38b4u: goto label_1c38b4;
        case 0x1c38b8u: goto label_1c38b8;
        case 0x1c38bcu: goto label_1c38bc;
        case 0x1c38c0u: goto label_1c38c0;
        case 0x1c38c4u: goto label_1c38c4;
        case 0x1c38c8u: goto label_1c38c8;
        case 0x1c38ccu: goto label_1c38cc;
        case 0x1c38d0u: goto label_1c38d0;
        case 0x1c38d4u: goto label_1c38d4;
        case 0x1c38d8u: goto label_1c38d8;
        case 0x1c38dcu: goto label_1c38dc;
        case 0x1c38e0u: goto label_1c38e0;
        case 0x1c38e4u: goto label_1c38e4;
        case 0x1c38e8u: goto label_1c38e8;
        case 0x1c38ecu: goto label_1c38ec;
        case 0x1c38f0u: goto label_1c38f0;
        case 0x1c38f4u: goto label_1c38f4;
        case 0x1c38f8u: goto label_1c38f8;
        case 0x1c38fcu: goto label_1c38fc;
        case 0x1c3900u: goto label_1c3900;
        case 0x1c3904u: goto label_1c3904;
        case 0x1c3908u: goto label_1c3908;
        case 0x1c390cu: goto label_1c390c;
        case 0x1c3910u: goto label_1c3910;
        case 0x1c3914u: goto label_1c3914;
        case 0x1c3918u: goto label_1c3918;
        case 0x1c391cu: goto label_1c391c;
        case 0x1c3920u: goto label_1c3920;
        case 0x1c3924u: goto label_1c3924;
        case 0x1c3928u: goto label_1c3928;
        case 0x1c392cu: goto label_1c392c;
        case 0x1c3930u: goto label_1c3930;
        case 0x1c3934u: goto label_1c3934;
        case 0x1c3938u: goto label_1c3938;
        case 0x1c393cu: goto label_1c393c;
        case 0x1c3940u: goto label_1c3940;
        case 0x1c3944u: goto label_1c3944;
        case 0x1c3948u: goto label_1c3948;
        case 0x1c394cu: goto label_1c394c;
        case 0x1c3950u: goto label_1c3950;
        case 0x1c3954u: goto label_1c3954;
        case 0x1c3958u: goto label_1c3958;
        case 0x1c395cu: goto label_1c395c;
        case 0x1c3960u: goto label_1c3960;
        case 0x1c3964u: goto label_1c3964;
        case 0x1c3968u: goto label_1c3968;
        case 0x1c396cu: goto label_1c396c;
        case 0x1c3970u: goto label_1c3970;
        case 0x1c3974u: goto label_1c3974;
        case 0x1c3978u: goto label_1c3978;
        case 0x1c397cu: goto label_1c397c;
        case 0x1c3980u: goto label_1c3980;
        case 0x1c3984u: goto label_1c3984;
        case 0x1c3988u: goto label_1c3988;
        case 0x1c398cu: goto label_1c398c;
        case 0x1c3990u: goto label_1c3990;
        case 0x1c3994u: goto label_1c3994;
        case 0x1c3998u: goto label_1c3998;
        case 0x1c399cu: goto label_1c399c;
        case 0x1c39a0u: goto label_1c39a0;
        case 0x1c39a4u: goto label_1c39a4;
        case 0x1c39a8u: goto label_1c39a8;
        case 0x1c39acu: goto label_1c39ac;
        case 0x1c39b0u: goto label_1c39b0;
        case 0x1c39b4u: goto label_1c39b4;
        case 0x1c39b8u: goto label_1c39b8;
        case 0x1c39bcu: goto label_1c39bc;
        case 0x1c39c0u: goto label_1c39c0;
        case 0x1c39c4u: goto label_1c39c4;
        case 0x1c39c8u: goto label_1c39c8;
        case 0x1c39ccu: goto label_1c39cc;
        case 0x1c39d0u: goto label_1c39d0;
        case 0x1c39d4u: goto label_1c39d4;
        case 0x1c39d8u: goto label_1c39d8;
        case 0x1c39dcu: goto label_1c39dc;
        case 0x1c39e0u: goto label_1c39e0;
        case 0x1c39e4u: goto label_1c39e4;
        case 0x1c39e8u: goto label_1c39e8;
        case 0x1c39ecu: goto label_1c39ec;
        case 0x1c39f0u: goto label_1c39f0;
        case 0x1c39f4u: goto label_1c39f4;
        case 0x1c39f8u: goto label_1c39f8;
        case 0x1c39fcu: goto label_1c39fc;
        case 0x1c3a00u: goto label_1c3a00;
        case 0x1c3a04u: goto label_1c3a04;
        case 0x1c3a08u: goto label_1c3a08;
        case 0x1c3a0cu: goto label_1c3a0c;
        case 0x1c3a10u: goto label_1c3a10;
        case 0x1c3a14u: goto label_1c3a14;
        case 0x1c3a18u: goto label_1c3a18;
        case 0x1c3a1cu: goto label_1c3a1c;
        case 0x1c3a20u: goto label_1c3a20;
        case 0x1c3a24u: goto label_1c3a24;
        case 0x1c3a28u: goto label_1c3a28;
        case 0x1c3a2cu: goto label_1c3a2c;
        case 0x1c3a30u: goto label_1c3a30;
        case 0x1c3a34u: goto label_1c3a34;
        case 0x1c3a38u: goto label_1c3a38;
        case 0x1c3a3cu: goto label_1c3a3c;
        case 0x1c3a40u: goto label_1c3a40;
        case 0x1c3a44u: goto label_1c3a44;
        case 0x1c3a48u: goto label_1c3a48;
        case 0x1c3a4cu: goto label_1c3a4c;
        case 0x1c3a50u: goto label_1c3a50;
        case 0x1c3a54u: goto label_1c3a54;
        case 0x1c3a58u: goto label_1c3a58;
        case 0x1c3a5cu: goto label_1c3a5c;
        case 0x1c3a60u: goto label_1c3a60;
        case 0x1c3a64u: goto label_1c3a64;
        case 0x1c3a68u: goto label_1c3a68;
        case 0x1c3a6cu: goto label_1c3a6c;
        case 0x1c3a70u: goto label_1c3a70;
        case 0x1c3a74u: goto label_1c3a74;
        case 0x1c3a78u: goto label_1c3a78;
        case 0x1c3a7cu: goto label_1c3a7c;
        case 0x1c3a80u: goto label_1c3a80;
        case 0x1c3a84u: goto label_1c3a84;
        case 0x1c3a88u: goto label_1c3a88;
        case 0x1c3a8cu: goto label_1c3a8c;
        case 0x1c3a90u: goto label_1c3a90;
        case 0x1c3a94u: goto label_1c3a94;
        case 0x1c3a98u: goto label_1c3a98;
        case 0x1c3a9cu: goto label_1c3a9c;
        case 0x1c3aa0u: goto label_1c3aa0;
        case 0x1c3aa4u: goto label_1c3aa4;
        case 0x1c3aa8u: goto label_1c3aa8;
        case 0x1c3aacu: goto label_1c3aac;
        case 0x1c3ab0u: goto label_1c3ab0;
        case 0x1c3ab4u: goto label_1c3ab4;
        case 0x1c3ab8u: goto label_1c3ab8;
        case 0x1c3abcu: goto label_1c3abc;
        case 0x1c3ac0u: goto label_1c3ac0;
        case 0x1c3ac4u: goto label_1c3ac4;
        case 0x1c3ac8u: goto label_1c3ac8;
        case 0x1c3accu: goto label_1c3acc;
        case 0x1c3ad0u: goto label_1c3ad0;
        case 0x1c3ad4u: goto label_1c3ad4;
        case 0x1c3ad8u: goto label_1c3ad8;
        case 0x1c3adcu: goto label_1c3adc;
        case 0x1c3ae0u: goto label_1c3ae0;
        case 0x1c3ae4u: goto label_1c3ae4;
        case 0x1c3ae8u: goto label_1c3ae8;
        case 0x1c3aecu: goto label_1c3aec;
        case 0x1c3af0u: goto label_1c3af0;
        case 0x1c3af4u: goto label_1c3af4;
        case 0x1c3af8u: goto label_1c3af8;
        case 0x1c3afcu: goto label_1c3afc;
        case 0x1c3b00u: goto label_1c3b00;
        case 0x1c3b04u: goto label_1c3b04;
        case 0x1c3b08u: goto label_1c3b08;
        case 0x1c3b0cu: goto label_1c3b0c;
        case 0x1c3b10u: goto label_1c3b10;
        case 0x1c3b14u: goto label_1c3b14;
        case 0x1c3b18u: goto label_1c3b18;
        case 0x1c3b1cu: goto label_1c3b1c;
        case 0x1c3b20u: goto label_1c3b20;
        case 0x1c3b24u: goto label_1c3b24;
        case 0x1c3b28u: goto label_1c3b28;
        case 0x1c3b2cu: goto label_1c3b2c;
        case 0x1c3b30u: goto label_1c3b30;
        case 0x1c3b34u: goto label_1c3b34;
        case 0x1c3b38u: goto label_1c3b38;
        case 0x1c3b3cu: goto label_1c3b3c;
        default: break;
    }

    ctx->pc = 0x1c37d8u;

label_1c37d8:
    // 0x1c37d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c37d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c37dc:
    // 0x1c37dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c37dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c37e0:
    // 0x1c37e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c37e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c37e4:
    // 0x1c37e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c37e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c37e8:
    // 0x1c37e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c37e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1c37ec:
    // 0x1c37ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c37ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1c37f0:
    // 0x1c37f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c37f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1c37f4:
    // 0x1c37f4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c37f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1c37f8:
    // 0x1c37f8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c37f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1c37fc:
    // 0x1c37fc: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
label_1c3800:
    if (ctx->pc == 0x1C3800u) {
        ctx->pc = 0x1C3800u;
            // 0x1c3800: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->pc = 0x1C3804u;
        goto label_1c3804;
    }
    ctx->pc = 0x1C37FCu;
    {
        const bool branch_taken_0x1c37fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C37FCu;
            // 0x1c3800: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37fc) {
            ctx->pc = 0x1C39DCu;
            goto label_1c39dc;
        }
    }
    ctx->pc = 0x1C3804u;
label_1c3804:
    // 0x1c3804: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c3804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c3808:
    // 0x1c3808: 0x10800074  beqz        $a0, . + 4 + (0x74 << 2)
label_1c380c:
    if (ctx->pc == 0x1C380Cu) {
        ctx->pc = 0x1C380Cu;
            // 0x1c380c: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1C3810u;
        goto label_1c3810;
    }
    ctx->pc = 0x1C3808u;
    {
        const bool branch_taken_0x1c3808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C380Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3808u;
            // 0x1c380c: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3808) {
            ctx->pc = 0x1C39DCu;
            goto label_1c39dc;
        }
    }
    ctx->pc = 0x1C3810u;
label_1c3810:
    // 0x1c3810: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1c3810u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c3814:
    // 0x1c3814: 0x26b3a4d8  addiu       $s3, $s5, -0x5B28
    ctx->pc = 0x1c3814u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943960));
label_1c3818:
    // 0x1c3818: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c3818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c381c:
    // 0x1c381c: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c381cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1c3820:
    // 0x1c3820: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1c3820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1c3824:
    // 0x1c3824: 0x40f809  jalr        $v0
label_1c3828:
    if (ctx->pc == 0x1C3828u) {
        ctx->pc = 0x1C3828u;
            // 0x1c3828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C382Cu;
        goto label_1c382c;
    }
    ctx->pc = 0x1C3824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C382Cu);
        ctx->pc = 0x1C3828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3824u;
            // 0x1c3828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C382Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C382Cu; }
            if (ctx->pc != 0x1C382Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C382Cu;
label_1c382c:
    // 0x1c382c: 0x12200062  beqz        $s1, . + 4 + (0x62 << 2)
label_1c3830:
    if (ctx->pc == 0x1C3830u) {
        ctx->pc = 0x1C3830u;
            // 0x1c3830: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3834u;
        goto label_1c3834;
    }
    ctx->pc = 0x1C382Cu;
    {
        const bool branch_taken_0x1c382c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C382Cu;
            // 0x1c3830: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c382c) {
            ctx->pc = 0x1C39B8u;
            goto label_1c39b8;
        }
    }
    ctx->pc = 0x1C3834u;
label_1c3834:
    // 0x1c3834: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1c3834u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3838:
    // 0x1c3838: 0x12540011  beq         $s2, $s4, . + 4 + (0x11 << 2)
label_1c383c:
    if (ctx->pc == 0x1C383Cu) {
        ctx->pc = 0x1C383Cu;
            // 0x1c383c: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x1C3840u;
        goto label_1c3840;
    }
    ctx->pc = 0x1C3838u;
    {
        const bool branch_taken_0x1c3838 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C383Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3838u;
            // 0x1c383c: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3838) {
            ctx->pc = 0x1C3880u;
            goto label_1c3880;
        }
    }
    ctx->pc = 0x1C3840u;
label_1c3840:
    // 0x1c3840: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c3844:
    if (ctx->pc == 0x1C3844u) {
        ctx->pc = 0x1C3844u;
            // 0x1c3844: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C3848u;
        goto label_1c3848;
    }
    ctx->pc = 0x1C3840u;
    {
        const bool branch_taken_0x1c3840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3840u;
            // 0x1c3844: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3840) {
            ctx->pc = 0x1C3858u;
            goto label_1c3858;
        }
    }
    ctx->pc = 0x1C3848u;
label_1c3848:
    // 0x1c3848: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_1c384c:
    if (ctx->pc == 0x1C384Cu) {
        ctx->pc = 0x1C384Cu;
            // 0x1c384c: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1C3850u;
        goto label_1c3850;
    }
    ctx->pc = 0x1C3848u;
    {
        const bool branch_taken_0x1c3848 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3848u;
            // 0x1c384c: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3848) {
            ctx->pc = 0x1C3870u;
            goto label_1c3870;
        }
    }
    ctx->pc = 0x1C3850u;
label_1c3850:
    // 0x1c3850: 0x10000049  b           . + 4 + (0x49 << 2)
label_1c3854:
    if (ctx->pc == 0x1C3854u) {
        ctx->pc = 0x1C3854u;
            // 0x1c3854: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C3858u;
        goto label_1c3858;
    }
    ctx->pc = 0x1C3850u;
    {
        const bool branch_taken_0x1c3850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3850u;
            // 0x1c3854: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3850) {
            ctx->pc = 0x1C3978u;
            goto label_1c3978;
        }
    }
    ctx->pc = 0x1C3858u;
label_1c3858:
    // 0x1c3858: 0x1243001d  beq         $s2, $v1, . + 4 + (0x1D << 2)
label_1c385c:
    if (ctx->pc == 0x1C385Cu) {
        ctx->pc = 0x1C385Cu;
            // 0x1c385c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1C3860u;
        goto label_1c3860;
    }
    ctx->pc = 0x1C3858u;
    {
        const bool branch_taken_0x1c3858 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3858u;
            // 0x1c385c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3858) {
            ctx->pc = 0x1C38D0u;
            goto label_1c38d0;
        }
    }
    ctx->pc = 0x1C3860u;
label_1c3860:
    // 0x1c3860: 0x12420033  beq         $s2, $v0, . + 4 + (0x33 << 2)
label_1c3864:
    if (ctx->pc == 0x1C3864u) {
        ctx->pc = 0x1C3864u;
            // 0x1c3864: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1C3868u;
        goto label_1c3868;
    }
    ctx->pc = 0x1C3860u;
    {
        const bool branch_taken_0x1c3860 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3860u;
            // 0x1c3864: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3860) {
            ctx->pc = 0x1C3930u;
            goto label_1c3930;
        }
    }
    ctx->pc = 0x1C3868u;
label_1c3868:
    // 0x1c3868: 0x10000043  b           . + 4 + (0x43 << 2)
label_1c386c:
    if (ctx->pc == 0x1C386Cu) {
        ctx->pc = 0x1C386Cu;
            // 0x1c386c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C3870u;
        goto label_1c3870;
    }
    ctx->pc = 0x1C3868u;
    {
        const bool branch_taken_0x1c3868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3868u;
            // 0x1c386c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3868) {
            ctx->pc = 0x1C3978u;
            goto label_1c3978;
        }
    }
    ctx->pc = 0x1C3870u;
label_1c3870:
    // 0x1c3870: 0xa6000036  sh          $zero, 0x36($s0)
    ctx->pc = 0x1c3870u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
label_1c3874:
    // 0x1c3874: 0x10000058  b           . + 4 + (0x58 << 2)
label_1c3878:
    if (ctx->pc == 0x1C3878u) {
        ctx->pc = 0x1C3878u;
            // 0x1c3878: 0xa6000038  sh          $zero, 0x38($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1C387Cu;
        goto label_1c387c;
    }
    ctx->pc = 0x1C3874u;
    {
        const bool branch_taken_0x1c3874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3874u;
            // 0x1c3878: 0xa6000038  sh          $zero, 0x38($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3874) {
            ctx->pc = 0x1C39D8u;
            goto label_1c39d8;
        }
    }
    ctx->pc = 0x1C387Cu;
label_1c387c:
    // 0x1c387c: 0x0  nop
    ctx->pc = 0x1c387cu;
    // NOP
label_1c3880:
    // 0x1c3880: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c3880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c3884:
    // 0x1c3884: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c3884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1c3888:
    // 0x1c3888: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1c3888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1c388c:
    // 0x1c388c: 0x40f809  jalr        $v0
label_1c3890:
    if (ctx->pc == 0x1C3890u) {
        ctx->pc = 0x1C3890u;
            // 0x1c3890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3894u;
        goto label_1c3894;
    }
    ctx->pc = 0x1C388Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C3894u);
        ctx->pc = 0x1C3890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C388Cu;
            // 0x1c3890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C3894u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C3894u; }
            if (ctx->pc != 0x1C3894u) { return; }
        }
        }
    }
    ctx->pc = 0x1C3894u;
label_1c3894:
    // 0x1c3894: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1c3894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1c3898:
    // 0x1c3898: 0x41ac0  sll         $v1, $a0, 11
    ctx->pc = 0x1c3898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
label_1c389c:
    // 0x1c389c: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_1c38a0:
    if (ctx->pc == 0x1C38A0u) {
        ctx->pc = 0x1C38A0u;
            // 0x1c38a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1C38A4u;
        goto label_1c38a4;
    }
    ctx->pc = 0x1C389Cu;
    {
        const bool branch_taken_0x1c389c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C38A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C389Cu;
            // 0x1c38a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c389c) {
            ctx->pc = 0x1C38F0u;
            goto label_1c38f0;
        }
    }
    ctx->pc = 0x1C38A4u;
label_1c38a4:
    // 0x1c38a4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c38a8:
    // 0x1c38a8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1c38a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1c38ac:
    // 0x1c38ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c38acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1c38b0:
    // 0x1c38b0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c38b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1c38b4:
    // 0x1c38b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c38b8:
    // 0x1c38b8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1c38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1c38bc:
    // 0x1c38bc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1c38bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1c38c0:
    // 0x1c38c0: 0xa6120038  sh          $s2, 0x38($s0)
    ctx->pc = 0x1c38c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 18));
label_1c38c4:
    // 0x1c38c4: 0x10000044  b           . + 4 + (0x44 << 2)
label_1c38c8:
    if (ctx->pc == 0x1C38C8u) {
        ctx->pc = 0x1C38C8u;
            // 0x1c38c8: 0xa6000036  sh          $zero, 0x36($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1C38CCu;
        goto label_1c38cc;
    }
    ctx->pc = 0x1C38C4u;
    {
        const bool branch_taken_0x1c38c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C38C4u;
            // 0x1c38c8: 0xa6000036  sh          $zero, 0x36($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38c4) {
            ctx->pc = 0x1C39D8u;
            goto label_1c39d8;
        }
    }
    ctx->pc = 0x1C38CCu;
label_1c38cc:
    // 0x1c38cc: 0x0  nop
    ctx->pc = 0x1c38ccu;
    // NOP
label_1c38d0:
    // 0x1c38d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c38d4:
    // 0x1c38d4: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1c38d8:
    // 0x1c38d8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1c38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1c38dc:
    // 0x1c38dc: 0x40f809  jalr        $v0
label_1c38e0:
    if (ctx->pc == 0x1C38E0u) {
        ctx->pc = 0x1C38E0u;
            // 0x1c38e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C38E4u;
        goto label_1c38e4;
    }
    ctx->pc = 0x1C38DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C38E4u);
        ctx->pc = 0x1C38E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C38DCu;
            // 0x1c38e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C38E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C38E4u; }
            if (ctx->pc != 0x1C38E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1C38E4u;
label_1c38e4:
    // 0x1c38e4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1c38e8:
    if (ctx->pc == 0x1C38E8u) {
        ctx->pc = 0x1C38ECu;
        goto label_1c38ec;
    }
    ctx->pc = 0x1C38E4u;
    {
        const bool branch_taken_0x1c38e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c38e4) {
            ctx->pc = 0x1C3900u;
            goto label_1c3900;
        }
    }
    ctx->pc = 0x1C38ECu;
label_1c38ec:
    // 0x1c38ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c38f0:
    // 0x1c38f0: 0x2403ff36  addiu       $v1, $zero, -0xCA
    ctx->pc = 0x1c38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967094));
label_1c38f4:
    // 0x1c38f4: 0xa6020038  sh          $v0, 0x38($s0)
    ctx->pc = 0x1c38f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
label_1c38f8:
    // 0x1c38f8: 0x10000021  b           . + 4 + (0x21 << 2)
label_1c38fc:
    if (ctx->pc == 0x1C38FCu) {
        ctx->pc = 0x1C38FCu;
            // 0x1c38fc: 0xa603003a  sh          $v1, 0x3A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1C3900u;
        goto label_1c3900;
    }
    ctx->pc = 0x1C38F8u;
    {
        const bool branch_taken_0x1c38f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C38F8u;
            // 0x1c38fc: 0xa603003a  sh          $v1, 0x3A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38f8) {
            ctx->pc = 0x1C3980u;
            goto label_1c3980;
        }
    }
    ctx->pc = 0x1C3900u;
label_1c3900:
    // 0x1c3900: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c3900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1c3904:
    // 0x1c3904: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c3904u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1c3908:
    // 0x1c3908: 0x246507ff  addiu       $a1, $v1, 0x7FF
    ctx->pc = 0x1c3908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
label_1c390c:
    // 0x1c390c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1c390cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_1c3910:
    // 0x1c3910: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c3910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c3914:
    // 0x1c3914: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1c3914u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1c3918:
    // 0x1c3918: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1c3918u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1c391c:
    // 0x1c391c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1c391cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c3920:
    // 0x1c3920: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c3920u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c3924:
    // 0x1c3924: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1c3928:
    if (ctx->pc == 0x1C3928u) {
        ctx->pc = 0x1C3928u;
            // 0x1c3928: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->pc = 0x1C392Cu;
        goto label_1c392c;
    }
    ctx->pc = 0x1C3924u;
    {
        const bool branch_taken_0x1c3924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3924u;
            // 0x1c3928: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3924) {
            ctx->pc = 0x1C39D8u;
            goto label_1c39d8;
        }
    }
    ctx->pc = 0x1C392Cu;
label_1c392c:
    // 0x1c392c: 0x0  nop
    ctx->pc = 0x1c392cu;
    // NOP
label_1c3930:
    // 0x1c3930: 0x2402ff36  addiu       $v0, $zero, -0xCA
    ctx->pc = 0x1c3930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967094));
label_1c3934:
    // 0x1c3934: 0xa6030036  sh          $v1, 0x36($s0)
    ctx->pc = 0x1c3934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 3));
label_1c3938:
    // 0x1c3938: 0xa602003a  sh          $v0, 0x3A($s0)
    ctx->pc = 0x1c3938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 2));
label_1c393c:
    // 0x1c393c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c393cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3940:
    // 0x1c3940: 0xa6120038  sh          $s2, 0x38($s0)
    ctx->pc = 0x1c3940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 18));
label_1c3944:
    // 0x1c3944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c3944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3948:
    // 0x1c3948: 0xc071442  jal         func_1C5108
label_1c394c:
    if (ctx->pc == 0x1C394Cu) {
        ctx->pc = 0x1C394Cu;
            // 0x1c394c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3950u;
        goto label_1c3950;
    }
    ctx->pc = 0x1C3948u;
    SET_GPR_U32(ctx, 31, 0x1C3950u);
    ctx->pc = 0x1C394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3948u;
            // 0x1c394c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5108u;
    if (runtime->hasFunction(0x1C5108u)) {
        auto targetFn = runtime->lookupFunction(0x1C5108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3950u; }
        if (ctx->pc != 0x1C3950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5108_0x1c5108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3950u; }
        if (ctx->pc != 0x1C3950u) { return; }
    }
    ctx->pc = 0x1C3950u;
label_1c3950:
    // 0x1c3950: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c3950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3954:
    // 0x1c3954: 0x14740021  bne         $v1, $s4, . + 4 + (0x21 << 2)
label_1c3958:
    if (ctx->pc == 0x1C3958u) {
        ctx->pc = 0x1C3958u;
            // 0x1c3958: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C395Cu;
        goto label_1c395c;
    }
    ctx->pc = 0x1C3954u;
    {
        const bool branch_taken_0x1c3954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x1C3958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3954u;
            // 0x1c3958: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3954) {
            ctx->pc = 0x1C39DCu;
            goto label_1c39dc;
        }
    }
    ctx->pc = 0x1C395Cu;
label_1c395c:
    // 0x1c395c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c395cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c3960:
    // 0x1c3960: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c3964:
    // 0x1c3964: 0x8608003a  lh          $t0, 0x3A($s0)
    ctx->pc = 0x1c3964u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
label_1c3968:
    // 0x1c3968: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
label_1c396c:
    // 0x1c396c: 0x24c6bcf8  addiu       $a2, $a2, -0x4308
    ctx->pc = 0x1c396cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950136));
label_1c3970:
    // 0x1c3970: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c3974:
    if (ctx->pc == 0x1C3974u) {
        ctx->pc = 0x1C3974u;
            // 0x1c3974: 0x240505d4  addiu       $a1, $zero, 0x5D4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1492));
        ctx->pc = 0x1C3978u;
        goto label_1c3978;
    }
    ctx->pc = 0x1C3970u;
    {
        const bool branch_taken_0x1c3970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3970u;
            // 0x1c3974: 0x240505d4  addiu       $a1, $zero, 0x5D4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3970) {
            ctx->pc = 0x1C39A4u;
            goto label_1c39a4;
        }
    }
    ctx->pc = 0x1C3978u;
label_1c3978:
    // 0x1c3978: 0xa6020038  sh          $v0, 0x38($s0)
    ctx->pc = 0x1c3978u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
label_1c397c:
    // 0x1c397c: 0xa6030036  sh          $v1, 0x36($s0)
    ctx->pc = 0x1c397cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 3));
label_1c3980:
    // 0x1c3980: 0x8ea2a4d8  lw          $v0, -0x5B28($s5)
    ctx->pc = 0x1c3980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943960)));
label_1c3984:
    // 0x1c3984: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1c3984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1c3988:
    // 0x1c3988: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1c398c:
    if (ctx->pc == 0x1C398Cu) {
        ctx->pc = 0x1C398Cu;
            // 0x1c398c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1C3990u;
        goto label_1c3990;
    }
    ctx->pc = 0x1C3988u;
    {
        const bool branch_taken_0x1c3988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C398Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3988u;
            // 0x1c398c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3988) {
            ctx->pc = 0x1C39D8u;
            goto label_1c39d8;
        }
    }
    ctx->pc = 0x1C3990u;
label_1c3990:
    // 0x1c3990: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c3994:
    // 0x1c3994: 0x8608003a  lh          $t0, 0x3A($s0)
    ctx->pc = 0x1c3994u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
label_1c3998:
    // 0x1c3998: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
label_1c399c:
    // 0x1c399c: 0x24c6bd08  addiu       $a2, $a2, -0x42F8
    ctx->pc = 0x1c399cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950152));
label_1c39a0:
    // 0x1c39a0: 0x240505e0  addiu       $a1, $zero, 0x5E0
    ctx->pc = 0x1c39a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1504));
label_1c39a4:
    // 0x1c39a4: 0xc0711fe  jal         func_1C47F8
label_1c39a8:
    if (ctx->pc == 0x1C39A8u) {
        ctx->pc = 0x1C39A8u;
            // 0x1c39a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C39ACu;
        goto label_1c39ac;
    }
    ctx->pc = 0x1C39A4u;
    SET_GPR_U32(ctx, 31, 0x1C39ACu);
    ctx->pc = 0x1C39A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C39A4u;
            // 0x1c39a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39ACu; }
        if (ctx->pc != 0x1C39ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39ACu; }
        if (ctx->pc != 0x1C39ACu) { return; }
    }
    ctx->pc = 0x1C39ACu;
label_1c39ac:
    // 0x1c39ac: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c39b0:
    if (ctx->pc == 0x1C39B0u) {
        ctx->pc = 0x1C39B0u;
            // 0x1c39b0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C39B4u;
        goto label_1c39b4;
    }
    ctx->pc = 0x1C39ACu;
    {
        const bool branch_taken_0x1c39ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C39ACu;
            // 0x1c39b0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39ac) {
            ctx->pc = 0x1C39DCu;
            goto label_1c39dc;
        }
    }
    ctx->pc = 0x1C39B4u;
label_1c39b4:
    // 0x1c39b4: 0x0  nop
    ctx->pc = 0x1c39b4u;
    // NOP
label_1c39b8:
    // 0x1c39b8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c39b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c39bc:
    // 0x1c39bc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c39bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c39c0:
    // 0x1c39c0: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c39c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
label_1c39c4:
    // 0x1c39c4: 0x24c6bd08  addiu       $a2, $a2, -0x42F8
    ctx->pc = 0x1c39c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950152));
label_1c39c8:
    // 0x1c39c8: 0x240505e6  addiu       $a1, $zero, 0x5E6
    ctx->pc = 0x1c39c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1510));
label_1c39cc:
    // 0x1c39cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c39ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c39d0:
    // 0x1c39d0: 0xc0711fe  jal         func_1C47F8
label_1c39d4:
    if (ctx->pc == 0x1C39D4u) {
        ctx->pc = 0x1C39D4u;
            // 0x1c39d4: 0x2408fc18  addiu       $t0, $zero, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
        ctx->pc = 0x1C39D8u;
        goto label_1c39d8;
    }
    ctx->pc = 0x1C39D0u;
    SET_GPR_U32(ctx, 31, 0x1C39D8u);
    ctx->pc = 0x1C39D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C39D0u;
            // 0x1c39d4: 0x2408fc18  addiu       $t0, $zero, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39D8u; }
        if (ctx->pc != 0x1C39D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39D8u; }
        if (ctx->pc != 0x1C39D8u) { return; }
    }
    ctx->pc = 0x1C39D8u;
label_1c39d8:
    // 0x1c39d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c39d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c39dc:
    // 0x1c39dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c39dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c39e0:
    // 0x1c39e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c39e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c39e4:
    // 0x1c39e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c39e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c39e8:
    // 0x1c39e8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c39e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c39ec:
    // 0x1c39ec: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c39ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c39f0:
    // 0x1c39f0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c39f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1c39f4:
    // 0x1c39f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c39f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c39f8:
    // 0x1c39f8: 0x3e00008  jr          $ra
label_1c39fc:
    if (ctx->pc == 0x1C39FCu) {
        ctx->pc = 0x1C39FCu;
            // 0x1c39fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1C3A00u;
        goto label_1c3a00;
    }
    ctx->pc = 0x1C39F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C39FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C39F8u;
            // 0x1c39fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3A00u;
label_1c3a00:
    // 0x1c3a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c3a04:
    // 0x1c3a04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c3a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c3a08:
    // 0x1c3a08: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1c3a08u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_1c3a0c:
    // 0x1c3a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c3a10:
    // 0x1c3a10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c3a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c3a14:
    // 0x1c3a14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c3a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1c3a18:
    // 0x1c3a18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c3a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1c3a1c:
    // 0x1c3a1c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c3a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1c3a20:
    // 0x1c3a20: 0xc071730  jal         func_1C5CC0
label_1c3a24:
    if (ctx->pc == 0x1C3A24u) {
        ctx->pc = 0x1C3A24u;
            // 0x1c3a24: 0x2650a4d8  addiu       $s0, $s2, -0x5B28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943960));
        ctx->pc = 0x1C3A28u;
        goto label_1c3a28;
    }
    ctx->pc = 0x1C3A20u;
    SET_GPR_U32(ctx, 31, 0x1C3A28u);
    ctx->pc = 0x1C3A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A20u;
            // 0x1c3a24: 0x2650a4d8  addiu       $s0, $s2, -0x5B28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CC0u;
    if (runtime->hasFunction(0x1C5CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1C5CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A28u; }
        if (ctx->pc != 0x1C3A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5CC0_0x1c5cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A28u; }
        if (ctx->pc != 0x1C3A28u) { return; }
    }
    ctx->pc = 0x1C3A28u;
label_1c3a28:
    // 0x1c3a28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c3a2c:
    // 0x1c3a2c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1c3a30:
    if (ctx->pc == 0x1C3A30u) {
        ctx->pc = 0x1C3A30u;
            // 0x1c3a30: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1C3A34u;
        goto label_1c3a34;
    }
    ctx->pc = 0x1C3A2Cu;
    {
        const bool branch_taken_0x1c3a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a2c) {
            ctx->pc = 0x1C3A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A2Cu;
            // 0x1c3a30: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3A58u;
            goto label_1c3a58;
        }
    }
    ctx->pc = 0x1C3A34u;
label_1c3a34:
    // 0x1c3a34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3a38:
    // 0x1c3a38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c3a3c:
    // 0x1c3a3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3a3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3a40:
    // 0x1c3a40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c3a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c3a44:
    // 0x1c3a44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c3a44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3a48:
    // 0x1c3a48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c3a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c3a4c:
    // 0x1c3a4c: 0x8071736  j           func_1C5CD8
label_1c3a50:
    if (ctx->pc == 0x1C3A50u) {
        ctx->pc = 0x1C3A50u;
            // 0x1c3a50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C3A54u;
        goto label_1c3a54;
    }
    ctx->pc = 0x1C3A4Cu;
    ctx->pc = 0x1C3A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A4Cu;
            // 0x1c3a50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CD8u;
    if (runtime->hasFunction(0x1C5CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1C5CD8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C5CD8_0x1c5cd8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C3A54u;
label_1c3a54:
    // 0x1c3a54: 0x0  nop
    ctx->pc = 0x1c3a54u;
    // NOP
label_1c3a58:
    // 0x1c3a58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1c3a5c:
    if (ctx->pc == 0x1C3A5Cu) {
        ctx->pc = 0x1C3A5Cu;
            // 0x1c3a5c: 0x3c140060  lui         $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1C3A60u;
        goto label_1c3a60;
    }
    ctx->pc = 0x1C3A58u;
    {
        const bool branch_taken_0x1c3a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A58u;
            // 0x1c3a5c: 0x3c140060  lui         $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a58) {
            ctx->pc = 0x1C3A80u;
            goto label_1c3a80;
        }
    }
    ctx->pc = 0x1C3A60u;
label_1c3a60:
    // 0x1c3a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3a64:
    // 0x1c3a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c3a68:
    // 0x1c3a68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3a6c:
    // 0x1c3a6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c3a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c3a70:
    // 0x1c3a70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c3a70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3a74:
    // 0x1c3a74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c3a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c3a78:
    // 0x1c3a78: 0x8071736  j           func_1C5CD8
label_1c3a7c:
    if (ctx->pc == 0x1C3A7Cu) {
        ctx->pc = 0x1C3A7Cu;
            // 0x1c3a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C3A80u;
        goto label_1c3a80;
    }
    ctx->pc = 0x1C3A78u;
    ctx->pc = 0x1C3A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A78u;
            // 0x1c3a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CD8u;
    if (runtime->hasFunction(0x1C5CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1C5CD8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C5CD8_0x1c5cd8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C3A80u;
label_1c3a80:
    // 0x1c3a80: 0x2683a4e0  addiu       $v1, $s4, -0x5B20
    ctx->pc = 0x1c3a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943968));
label_1c3a84:
    // 0x1c3a84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c3a88:
    // 0x1c3a88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c3a8c:
    if (ctx->pc == 0x1C3A8Cu) {
        ctx->pc = 0x1C3A8Cu;
            // 0x1c3a8c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x1C3A90u;
        goto label_1c3a90;
    }
    ctx->pc = 0x1C3A88u;
    {
        const bool branch_taken_0x1c3a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A88u;
            // 0x1c3a8c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a88) {
            ctx->pc = 0x1C3AB0u;
            goto label_1c3ab0;
        }
    }
    ctx->pc = 0x1C3A90u;
label_1c3a90:
    // 0x1c3a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3a94:
    // 0x1c3a94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3a98:
    // 0x1c3a98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c3a98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c3a9c:
    // 0x1c3a9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c3a9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3aa0:
    // 0x1c3aa0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c3aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c3aa4:
    // 0x1c3aa4: 0x8071736  j           func_1C5CD8
label_1c3aa8:
    if (ctx->pc == 0x1C3AA8u) {
        ctx->pc = 0x1C3AA8u;
            // 0x1c3aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C3AACu;
        goto label_1c3aac;
    }
    ctx->pc = 0x1C3AA4u;
    ctx->pc = 0x1C3AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AA4u;
            // 0x1c3aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CD8u;
    if (runtime->hasFunction(0x1C5CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1C5CD8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C5CD8_0x1c5cd8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C3AACu;
label_1c3aac:
    // 0x1c3aac: 0x0  nop
    ctx->pc = 0x1c3aacu;
    // NOP
label_1c3ab0:
    // 0x1c3ab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3ab4:
    // 0x1c3ab4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c3ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ab8:
    // 0x1c3ab8: 0xc071736  jal         func_1C5CD8
label_1c3abc:
    if (ctx->pc == 0x1C3ABCu) {
        ctx->pc = 0x1C3ABCu;
            // 0x1c3abc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C3AC0u;
        goto label_1c3ac0;
    }
    ctx->pc = 0x1C3AB8u;
    SET_GPR_U32(ctx, 31, 0x1C3AC0u);
    ctx->pc = 0x1C3ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AB8u;
            // 0x1c3abc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CD8u;
    if (runtime->hasFunction(0x1C5CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1C5CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3AC0u; }
        if (ctx->pc != 0x1C3AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5CD8_0x1c5cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3AC0u; }
        if (ctx->pc != 0x1C3AC0u) { return; }
    }
    ctx->pc = 0x1C3AC0u;
label_1c3ac0:
    // 0x1c3ac0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c3ac4:
    // 0x1c3ac4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c3ac8:
    // 0x1c3ac8: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_1c3acc:
    if (ctx->pc == 0x1C3ACCu) {
        ctx->pc = 0x1C3ACCu;
            // 0x1c3acc: 0x2450108c  addiu       $s0, $v0, 0x108C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
        ctx->pc = 0x1C3AD0u;
        goto label_1c3ad0;
    }
    ctx->pc = 0x1C3AC8u;
    {
        const bool branch_taken_0x1c3ac8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C3ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AC8u;
            // 0x1c3acc: 0x2450108c  addiu       $s0, $v0, 0x108C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ac8) {
            ctx->pc = 0x1C3B04u;
            goto label_1c3b04;
        }
    }
    ctx->pc = 0x1C3AD0u;
label_1c3ad0:
    // 0x1c3ad0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1c3ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3ad4:
    // 0x1c3ad4: 0x0  nop
    ctx->pc = 0x1c3ad4u;
    // NOP
label_1c3ad8:
    // 0x1c3ad8: 0x86020036  lh          $v0, 0x36($s0)
    ctx->pc = 0x1c3ad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1c3adc:
    // 0x1c3adc: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
label_1c3ae0:
    if (ctx->pc == 0x1C3AE0u) {
        ctx->pc = 0x1C3AE0u;
            // 0x1c3ae0: 0x8e43a4d8  lw          $v1, -0x5B28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
        ctx->pc = 0x1C3AE4u;
        goto label_1c3ae4;
    }
    ctx->pc = 0x1C3ADCu;
    {
        const bool branch_taken_0x1c3adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1C3AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3ADCu;
            // 0x1c3ae0: 0x8e43a4d8  lw          $v1, -0x5B28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3adc) {
            ctx->pc = 0x1C3AF0u;
            goto label_1c3af0;
        }
    }
    ctx->pc = 0x1C3AE4u;
label_1c3ae4:
    // 0x1c3ae4: 0xc070df6  jal         func_1C37D8
label_1c3ae8:
    if (ctx->pc == 0x1C3AE8u) {
        ctx->pc = 0x1C3AE8u;
            // 0x1c3ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AECu;
        goto label_1c3aec;
    }
    ctx->pc = 0x1C3AE4u;
    SET_GPR_U32(ctx, 31, 0x1C3AECu);
    ctx->pc = 0x1C3AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AE4u;
            // 0x1c3ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C37D8u;
    goto label_1c37d8;
    ctx->pc = 0x1C3AECu;
label_1c3aec:
    // 0x1c3aec: 0x8e43a4d8  lw          $v1, -0x5B28($s2)
    ctx->pc = 0x1c3aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
label_1c3af0:
    // 0x1c3af0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c3af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c3af4:
    // 0x1c3af4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c3af8:
    // 0x1c3af8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1c3af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c3afc:
    // 0x1c3afc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1c3b00:
    if (ctx->pc == 0x1C3B00u) {
        ctx->pc = 0x1C3B00u;
            // 0x1c3b00: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->pc = 0x1C3B04u;
        goto label_1c3b04;
    }
    ctx->pc = 0x1C3AFCu;
    {
        const bool branch_taken_0x1c3afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AFCu;
            // 0x1c3b00: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3afc) {
            ctx->pc = 0x1C3AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3ad8;
        }
    }
    ctx->pc = 0x1C3B04u;
label_1c3b04:
    // 0x1c3b04: 0x8e42a4d8  lw          $v0, -0x5B28($s2)
    ctx->pc = 0x1c3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
label_1c3b08:
    // 0x1c3b08: 0x2684a4e0  addiu       $a0, $s4, -0x5B20
    ctx->pc = 0x1c3b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943968));
label_1c3b0c:
    // 0x1c3b0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3b0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3b10:
    // 0x1c3b10: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1c3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1c3b14:
    // 0x1c3b14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c3b18:
    // 0x1c3b18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3b1c:
    // 0x1c3b1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c3b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c3b20:
    // 0x1c3b20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c3b20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c3b24:
    // 0x1c3b24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c3b24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3b28:
    // 0x1c3b28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c3b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c3b2c:
    // 0x1c3b2c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1c3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_1c3b30:
    // 0x1c3b30: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1c3b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1c3b34:
    // 0x1c3b34: 0x3e00008  jr          $ra
label_1c3b38:
    if (ctx->pc == 0x1C3B38u) {
        ctx->pc = 0x1C3B38u;
            // 0x1c3b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C3B3Cu;
        goto label_1c3b3c;
    }
    ctx->pc = 0x1C3B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B34u;
            // 0x1c3b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3B3Cu;
label_1c3b3c:
    // 0x1c3b3c: 0x0  nop
    ctx->pc = 0x1c3b3cu;
    // NOP
}
