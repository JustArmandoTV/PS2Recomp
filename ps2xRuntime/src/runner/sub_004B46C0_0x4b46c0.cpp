#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B46C0
// Address: 0x4b46c0 - 0x4b4b60
void sub_004B46C0_0x4b46c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B46C0_0x4b46c0");
#endif

    switch (ctx->pc) {
        case 0x4b46c0u: goto label_4b46c0;
        case 0x4b46c4u: goto label_4b46c4;
        case 0x4b46c8u: goto label_4b46c8;
        case 0x4b46ccu: goto label_4b46cc;
        case 0x4b46d0u: goto label_4b46d0;
        case 0x4b46d4u: goto label_4b46d4;
        case 0x4b46d8u: goto label_4b46d8;
        case 0x4b46dcu: goto label_4b46dc;
        case 0x4b46e0u: goto label_4b46e0;
        case 0x4b46e4u: goto label_4b46e4;
        case 0x4b46e8u: goto label_4b46e8;
        case 0x4b46ecu: goto label_4b46ec;
        case 0x4b46f0u: goto label_4b46f0;
        case 0x4b46f4u: goto label_4b46f4;
        case 0x4b46f8u: goto label_4b46f8;
        case 0x4b46fcu: goto label_4b46fc;
        case 0x4b4700u: goto label_4b4700;
        case 0x4b4704u: goto label_4b4704;
        case 0x4b4708u: goto label_4b4708;
        case 0x4b470cu: goto label_4b470c;
        case 0x4b4710u: goto label_4b4710;
        case 0x4b4714u: goto label_4b4714;
        case 0x4b4718u: goto label_4b4718;
        case 0x4b471cu: goto label_4b471c;
        case 0x4b4720u: goto label_4b4720;
        case 0x4b4724u: goto label_4b4724;
        case 0x4b4728u: goto label_4b4728;
        case 0x4b472cu: goto label_4b472c;
        case 0x4b4730u: goto label_4b4730;
        case 0x4b4734u: goto label_4b4734;
        case 0x4b4738u: goto label_4b4738;
        case 0x4b473cu: goto label_4b473c;
        case 0x4b4740u: goto label_4b4740;
        case 0x4b4744u: goto label_4b4744;
        case 0x4b4748u: goto label_4b4748;
        case 0x4b474cu: goto label_4b474c;
        case 0x4b4750u: goto label_4b4750;
        case 0x4b4754u: goto label_4b4754;
        case 0x4b4758u: goto label_4b4758;
        case 0x4b475cu: goto label_4b475c;
        case 0x4b4760u: goto label_4b4760;
        case 0x4b4764u: goto label_4b4764;
        case 0x4b4768u: goto label_4b4768;
        case 0x4b476cu: goto label_4b476c;
        case 0x4b4770u: goto label_4b4770;
        case 0x4b4774u: goto label_4b4774;
        case 0x4b4778u: goto label_4b4778;
        case 0x4b477cu: goto label_4b477c;
        case 0x4b4780u: goto label_4b4780;
        case 0x4b4784u: goto label_4b4784;
        case 0x4b4788u: goto label_4b4788;
        case 0x4b478cu: goto label_4b478c;
        case 0x4b4790u: goto label_4b4790;
        case 0x4b4794u: goto label_4b4794;
        case 0x4b4798u: goto label_4b4798;
        case 0x4b479cu: goto label_4b479c;
        case 0x4b47a0u: goto label_4b47a0;
        case 0x4b47a4u: goto label_4b47a4;
        case 0x4b47a8u: goto label_4b47a8;
        case 0x4b47acu: goto label_4b47ac;
        case 0x4b47b0u: goto label_4b47b0;
        case 0x4b47b4u: goto label_4b47b4;
        case 0x4b47b8u: goto label_4b47b8;
        case 0x4b47bcu: goto label_4b47bc;
        case 0x4b47c0u: goto label_4b47c0;
        case 0x4b47c4u: goto label_4b47c4;
        case 0x4b47c8u: goto label_4b47c8;
        case 0x4b47ccu: goto label_4b47cc;
        case 0x4b47d0u: goto label_4b47d0;
        case 0x4b47d4u: goto label_4b47d4;
        case 0x4b47d8u: goto label_4b47d8;
        case 0x4b47dcu: goto label_4b47dc;
        case 0x4b47e0u: goto label_4b47e0;
        case 0x4b47e4u: goto label_4b47e4;
        case 0x4b47e8u: goto label_4b47e8;
        case 0x4b47ecu: goto label_4b47ec;
        case 0x4b47f0u: goto label_4b47f0;
        case 0x4b47f4u: goto label_4b47f4;
        case 0x4b47f8u: goto label_4b47f8;
        case 0x4b47fcu: goto label_4b47fc;
        case 0x4b4800u: goto label_4b4800;
        case 0x4b4804u: goto label_4b4804;
        case 0x4b4808u: goto label_4b4808;
        case 0x4b480cu: goto label_4b480c;
        case 0x4b4810u: goto label_4b4810;
        case 0x4b4814u: goto label_4b4814;
        case 0x4b4818u: goto label_4b4818;
        case 0x4b481cu: goto label_4b481c;
        case 0x4b4820u: goto label_4b4820;
        case 0x4b4824u: goto label_4b4824;
        case 0x4b4828u: goto label_4b4828;
        case 0x4b482cu: goto label_4b482c;
        case 0x4b4830u: goto label_4b4830;
        case 0x4b4834u: goto label_4b4834;
        case 0x4b4838u: goto label_4b4838;
        case 0x4b483cu: goto label_4b483c;
        case 0x4b4840u: goto label_4b4840;
        case 0x4b4844u: goto label_4b4844;
        case 0x4b4848u: goto label_4b4848;
        case 0x4b484cu: goto label_4b484c;
        case 0x4b4850u: goto label_4b4850;
        case 0x4b4854u: goto label_4b4854;
        case 0x4b4858u: goto label_4b4858;
        case 0x4b485cu: goto label_4b485c;
        case 0x4b4860u: goto label_4b4860;
        case 0x4b4864u: goto label_4b4864;
        case 0x4b4868u: goto label_4b4868;
        case 0x4b486cu: goto label_4b486c;
        case 0x4b4870u: goto label_4b4870;
        case 0x4b4874u: goto label_4b4874;
        case 0x4b4878u: goto label_4b4878;
        case 0x4b487cu: goto label_4b487c;
        case 0x4b4880u: goto label_4b4880;
        case 0x4b4884u: goto label_4b4884;
        case 0x4b4888u: goto label_4b4888;
        case 0x4b488cu: goto label_4b488c;
        case 0x4b4890u: goto label_4b4890;
        case 0x4b4894u: goto label_4b4894;
        case 0x4b4898u: goto label_4b4898;
        case 0x4b489cu: goto label_4b489c;
        case 0x4b48a0u: goto label_4b48a0;
        case 0x4b48a4u: goto label_4b48a4;
        case 0x4b48a8u: goto label_4b48a8;
        case 0x4b48acu: goto label_4b48ac;
        case 0x4b48b0u: goto label_4b48b0;
        case 0x4b48b4u: goto label_4b48b4;
        case 0x4b48b8u: goto label_4b48b8;
        case 0x4b48bcu: goto label_4b48bc;
        case 0x4b48c0u: goto label_4b48c0;
        case 0x4b48c4u: goto label_4b48c4;
        case 0x4b48c8u: goto label_4b48c8;
        case 0x4b48ccu: goto label_4b48cc;
        case 0x4b48d0u: goto label_4b48d0;
        case 0x4b48d4u: goto label_4b48d4;
        case 0x4b48d8u: goto label_4b48d8;
        case 0x4b48dcu: goto label_4b48dc;
        case 0x4b48e0u: goto label_4b48e0;
        case 0x4b48e4u: goto label_4b48e4;
        case 0x4b48e8u: goto label_4b48e8;
        case 0x4b48ecu: goto label_4b48ec;
        case 0x4b48f0u: goto label_4b48f0;
        case 0x4b48f4u: goto label_4b48f4;
        case 0x4b48f8u: goto label_4b48f8;
        case 0x4b48fcu: goto label_4b48fc;
        case 0x4b4900u: goto label_4b4900;
        case 0x4b4904u: goto label_4b4904;
        case 0x4b4908u: goto label_4b4908;
        case 0x4b490cu: goto label_4b490c;
        case 0x4b4910u: goto label_4b4910;
        case 0x4b4914u: goto label_4b4914;
        case 0x4b4918u: goto label_4b4918;
        case 0x4b491cu: goto label_4b491c;
        case 0x4b4920u: goto label_4b4920;
        case 0x4b4924u: goto label_4b4924;
        case 0x4b4928u: goto label_4b4928;
        case 0x4b492cu: goto label_4b492c;
        case 0x4b4930u: goto label_4b4930;
        case 0x4b4934u: goto label_4b4934;
        case 0x4b4938u: goto label_4b4938;
        case 0x4b493cu: goto label_4b493c;
        case 0x4b4940u: goto label_4b4940;
        case 0x4b4944u: goto label_4b4944;
        case 0x4b4948u: goto label_4b4948;
        case 0x4b494cu: goto label_4b494c;
        case 0x4b4950u: goto label_4b4950;
        case 0x4b4954u: goto label_4b4954;
        case 0x4b4958u: goto label_4b4958;
        case 0x4b495cu: goto label_4b495c;
        case 0x4b4960u: goto label_4b4960;
        case 0x4b4964u: goto label_4b4964;
        case 0x4b4968u: goto label_4b4968;
        case 0x4b496cu: goto label_4b496c;
        case 0x4b4970u: goto label_4b4970;
        case 0x4b4974u: goto label_4b4974;
        case 0x4b4978u: goto label_4b4978;
        case 0x4b497cu: goto label_4b497c;
        case 0x4b4980u: goto label_4b4980;
        case 0x4b4984u: goto label_4b4984;
        case 0x4b4988u: goto label_4b4988;
        case 0x4b498cu: goto label_4b498c;
        case 0x4b4990u: goto label_4b4990;
        case 0x4b4994u: goto label_4b4994;
        case 0x4b4998u: goto label_4b4998;
        case 0x4b499cu: goto label_4b499c;
        case 0x4b49a0u: goto label_4b49a0;
        case 0x4b49a4u: goto label_4b49a4;
        case 0x4b49a8u: goto label_4b49a8;
        case 0x4b49acu: goto label_4b49ac;
        case 0x4b49b0u: goto label_4b49b0;
        case 0x4b49b4u: goto label_4b49b4;
        case 0x4b49b8u: goto label_4b49b8;
        case 0x4b49bcu: goto label_4b49bc;
        case 0x4b49c0u: goto label_4b49c0;
        case 0x4b49c4u: goto label_4b49c4;
        case 0x4b49c8u: goto label_4b49c8;
        case 0x4b49ccu: goto label_4b49cc;
        case 0x4b49d0u: goto label_4b49d0;
        case 0x4b49d4u: goto label_4b49d4;
        case 0x4b49d8u: goto label_4b49d8;
        case 0x4b49dcu: goto label_4b49dc;
        case 0x4b49e0u: goto label_4b49e0;
        case 0x4b49e4u: goto label_4b49e4;
        case 0x4b49e8u: goto label_4b49e8;
        case 0x4b49ecu: goto label_4b49ec;
        case 0x4b49f0u: goto label_4b49f0;
        case 0x4b49f4u: goto label_4b49f4;
        case 0x4b49f8u: goto label_4b49f8;
        case 0x4b49fcu: goto label_4b49fc;
        case 0x4b4a00u: goto label_4b4a00;
        case 0x4b4a04u: goto label_4b4a04;
        case 0x4b4a08u: goto label_4b4a08;
        case 0x4b4a0cu: goto label_4b4a0c;
        case 0x4b4a10u: goto label_4b4a10;
        case 0x4b4a14u: goto label_4b4a14;
        case 0x4b4a18u: goto label_4b4a18;
        case 0x4b4a1cu: goto label_4b4a1c;
        case 0x4b4a20u: goto label_4b4a20;
        case 0x4b4a24u: goto label_4b4a24;
        case 0x4b4a28u: goto label_4b4a28;
        case 0x4b4a2cu: goto label_4b4a2c;
        case 0x4b4a30u: goto label_4b4a30;
        case 0x4b4a34u: goto label_4b4a34;
        case 0x4b4a38u: goto label_4b4a38;
        case 0x4b4a3cu: goto label_4b4a3c;
        case 0x4b4a40u: goto label_4b4a40;
        case 0x4b4a44u: goto label_4b4a44;
        case 0x4b4a48u: goto label_4b4a48;
        case 0x4b4a4cu: goto label_4b4a4c;
        case 0x4b4a50u: goto label_4b4a50;
        case 0x4b4a54u: goto label_4b4a54;
        case 0x4b4a58u: goto label_4b4a58;
        case 0x4b4a5cu: goto label_4b4a5c;
        case 0x4b4a60u: goto label_4b4a60;
        case 0x4b4a64u: goto label_4b4a64;
        case 0x4b4a68u: goto label_4b4a68;
        case 0x4b4a6cu: goto label_4b4a6c;
        case 0x4b4a70u: goto label_4b4a70;
        case 0x4b4a74u: goto label_4b4a74;
        case 0x4b4a78u: goto label_4b4a78;
        case 0x4b4a7cu: goto label_4b4a7c;
        case 0x4b4a80u: goto label_4b4a80;
        case 0x4b4a84u: goto label_4b4a84;
        case 0x4b4a88u: goto label_4b4a88;
        case 0x4b4a8cu: goto label_4b4a8c;
        case 0x4b4a90u: goto label_4b4a90;
        case 0x4b4a94u: goto label_4b4a94;
        case 0x4b4a98u: goto label_4b4a98;
        case 0x4b4a9cu: goto label_4b4a9c;
        case 0x4b4aa0u: goto label_4b4aa0;
        case 0x4b4aa4u: goto label_4b4aa4;
        case 0x4b4aa8u: goto label_4b4aa8;
        case 0x4b4aacu: goto label_4b4aac;
        case 0x4b4ab0u: goto label_4b4ab0;
        case 0x4b4ab4u: goto label_4b4ab4;
        case 0x4b4ab8u: goto label_4b4ab8;
        case 0x4b4abcu: goto label_4b4abc;
        case 0x4b4ac0u: goto label_4b4ac0;
        case 0x4b4ac4u: goto label_4b4ac4;
        case 0x4b4ac8u: goto label_4b4ac8;
        case 0x4b4accu: goto label_4b4acc;
        case 0x4b4ad0u: goto label_4b4ad0;
        case 0x4b4ad4u: goto label_4b4ad4;
        case 0x4b4ad8u: goto label_4b4ad8;
        case 0x4b4adcu: goto label_4b4adc;
        case 0x4b4ae0u: goto label_4b4ae0;
        case 0x4b4ae4u: goto label_4b4ae4;
        case 0x4b4ae8u: goto label_4b4ae8;
        case 0x4b4aecu: goto label_4b4aec;
        case 0x4b4af0u: goto label_4b4af0;
        case 0x4b4af4u: goto label_4b4af4;
        case 0x4b4af8u: goto label_4b4af8;
        case 0x4b4afcu: goto label_4b4afc;
        case 0x4b4b00u: goto label_4b4b00;
        case 0x4b4b04u: goto label_4b4b04;
        case 0x4b4b08u: goto label_4b4b08;
        case 0x4b4b0cu: goto label_4b4b0c;
        case 0x4b4b10u: goto label_4b4b10;
        case 0x4b4b14u: goto label_4b4b14;
        case 0x4b4b18u: goto label_4b4b18;
        case 0x4b4b1cu: goto label_4b4b1c;
        case 0x4b4b20u: goto label_4b4b20;
        case 0x4b4b24u: goto label_4b4b24;
        case 0x4b4b28u: goto label_4b4b28;
        case 0x4b4b2cu: goto label_4b4b2c;
        case 0x4b4b30u: goto label_4b4b30;
        case 0x4b4b34u: goto label_4b4b34;
        case 0x4b4b38u: goto label_4b4b38;
        case 0x4b4b3cu: goto label_4b4b3c;
        case 0x4b4b40u: goto label_4b4b40;
        case 0x4b4b44u: goto label_4b4b44;
        case 0x4b4b48u: goto label_4b4b48;
        case 0x4b4b4cu: goto label_4b4b4c;
        case 0x4b4b50u: goto label_4b4b50;
        case 0x4b4b54u: goto label_4b4b54;
        case 0x4b4b58u: goto label_4b4b58;
        case 0x4b4b5cu: goto label_4b4b5c;
        default: break;
    }

    ctx->pc = 0x4b46c0u;

label_4b46c0:
    // 0x4b46c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b46c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4b46c4:
    // 0x4b46c4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4b46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4b46c8:
    // 0x4b46c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b46c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4b46cc:
    // 0x4b46cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4b46ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4b46d0:
    // 0x4b46d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b46d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4b46d4:
    // 0x4b46d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4b46d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b46d8:
    // 0x4b46d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b46d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4b46dc:
    // 0x4b46dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4b46dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b46e0:
    // 0x4b46e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4b46e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4b46e4:
    // 0x4b46e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b46e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b46e8:
    // 0x4b46e8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4b46e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_4b46ec:
    // 0x4b46ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b46ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b46f0:
    // 0x4b46f0: 0x3445abe2  ori         $a1, $v0, 0xABE2
    ctx->pc = 0x4b46f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44002);
label_4b46f4:
    // 0x4b46f4: 0xc10ca68  jal         func_4329A0
label_4b46f8:
    if (ctx->pc == 0x4B46F8u) {
        ctx->pc = 0x4B46F8u;
            // 0x4b46f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B46FCu;
        goto label_4b46fc;
    }
    ctx->pc = 0x4B46F4u;
    SET_GPR_U32(ctx, 31, 0x4B46FCu);
    ctx->pc = 0x4B46F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B46F4u;
            // 0x4b46f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B46FCu; }
        if (ctx->pc != 0x4B46FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B46FCu; }
        if (ctx->pc != 0x4B46FCu) { return; }
    }
    ctx->pc = 0x4B46FCu;
label_4b46fc:
    // 0x4b46fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b4700:
    // 0x4b4700: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x4b4700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_4b4704:
    // 0x4b4704: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4b4704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4b4708:
    // 0x4b4708: 0x3463cccc  ori         $v1, $v1, 0xCCCC
    ctx->pc = 0x4b4708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52428);
label_4b470c:
    // 0x4b470c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b470cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4b4710:
    // 0x4b4710: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b4710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b4714:
    // 0x4b4714: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b4714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b4718:
    // 0x4b4718: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x4b4718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_4b471c:
    // 0x4b471c: 0x244208b0  addiu       $v0, $v0, 0x8B0
    ctx->pc = 0x4b471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2224));
label_4b4720:
    // 0x4b4720: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b4720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4b4724:
    // 0x4b4724: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x4b4724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_4b4728:
    // 0x4b4728: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x4b4728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_4b472c:
    // 0x4b472c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4b472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_4b4730:
    // 0x4b4730: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x4b4730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_4b4734:
    // 0x4b4734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b4734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b4738:
    // 0x4b4738: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x4b4738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_4b473c:
    // 0x4b473c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4b473cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4b4740:
    // 0x4b4740: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x4b4740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_4b4744:
    // 0x4b4744: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x4b4744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
label_4b4748:
    // 0x4b4748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b4748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b474c:
    // 0x4b474c: 0x0  nop
    ctx->pc = 0x4b474cu;
    // NOP
label_4b4750:
    // 0x4b4750: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x4b4750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4b4754:
    // 0x4b4754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b4754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b4758:
    // 0x4b4758: 0x0  nop
    ctx->pc = 0x4b4758u;
    // NOP
label_4b475c:
    // 0x4b475c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4b475cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4b4760:
    // 0x4b4760: 0x0  nop
    ctx->pc = 0x4b4760u;
    // NOP
label_4b4764:
    // 0x4b4764: 0x0  nop
    ctx->pc = 0x4b4764u;
    // NOP
label_4b4768:
    // 0x4b4768: 0xc04f278  jal         func_13C9E0
label_4b476c:
    if (ctx->pc == 0x4B476Cu) {
        ctx->pc = 0x4B476Cu;
            // 0x4b476c: 0xe62000a8  swc1        $f0, 0xA8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
        ctx->pc = 0x4B4770u;
        goto label_4b4770;
    }
    ctx->pc = 0x4B4768u;
    SET_GPR_U32(ctx, 31, 0x4B4770u);
    ctx->pc = 0x4B476Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4768u;
            // 0x4b476c: 0xe62000a8  swc1        $f0, 0xA8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4770u; }
        if (ctx->pc != 0x4B4770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4770u; }
        if (ctx->pc != 0x4B4770u) { return; }
    }
    ctx->pc = 0x4B4770u;
label_4b4770:
    // 0x4b4770: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b4770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b4774:
    // 0x4b4774: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b4774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4b4778:
    // 0x4b4778: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4b4778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b477c:
    // 0x4b477c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4b477cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b4780:
    // 0x4b4780: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b4780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b4784:
    // 0x4b4784: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b4784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4788:
    // 0x4b4788: 0x3e00008  jr          $ra
label_4b478c:
    if (ctx->pc == 0x4B478Cu) {
        ctx->pc = 0x4B478Cu;
            // 0x4b478c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4B4790u;
        goto label_4b4790;
    }
    ctx->pc = 0x4B4788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B478Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4788u;
            // 0x4b478c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4790u;
label_4b4790:
    // 0x4b4790: 0x3e00008  jr          $ra
label_4b4794:
    if (ctx->pc == 0x4B4794u) {
        ctx->pc = 0x4B4794u;
            // 0x4b4794: 0x24020834  addiu       $v0, $zero, 0x834 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2100));
        ctx->pc = 0x4B4798u;
        goto label_4b4798;
    }
    ctx->pc = 0x4B4790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4790u;
            // 0x4b4794: 0x24020834  addiu       $v0, $zero, 0x834 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2100));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4798u;
label_4b4798:
    // 0x4b4798: 0x0  nop
    ctx->pc = 0x4b4798u;
    // NOP
label_4b479c:
    // 0x4b479c: 0x0  nop
    ctx->pc = 0x4b479cu;
    // NOP
label_4b47a0:
    // 0x4b47a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b47a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b47a4:
    // 0x4b47a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b47a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b47a8:
    // 0x4b47a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b47a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b47ac:
    // 0x4b47ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b47acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b47b0:
    // 0x4b47b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b47b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b47b4:
    // 0x4b47b4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4b47b8:
    if (ctx->pc == 0x4B47B8u) {
        ctx->pc = 0x4B47B8u;
            // 0x4b47b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B47BCu;
        goto label_4b47bc;
    }
    ctx->pc = 0x4B47B4u;
    {
        const bool branch_taken_0x4b47b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B47B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B47B4u;
            // 0x4b47b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b47b4) {
            ctx->pc = 0x4B487Cu;
            goto label_4b487c;
        }
    }
    ctx->pc = 0x4B47BCu;
label_4b47bc:
    // 0x4b47bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b47bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b47c0:
    // 0x4b47c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b47c4:
    // 0x4b47c4: 0x246308e0  addiu       $v1, $v1, 0x8E0
    ctx->pc = 0x4b47c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2272));
label_4b47c8:
    // 0x4b47c8: 0x24420920  addiu       $v0, $v0, 0x920
    ctx->pc = 0x4b47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
label_4b47cc:
    // 0x4b47cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b47ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b47d0:
    // 0x4b47d0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4b47d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4b47d4:
    // 0x4b47d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b47d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b47d8:
    // 0x4b47d8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4b47d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4b47dc:
    // 0x4b47dc: 0x320f809  jalr        $t9
label_4b47e0:
    if (ctx->pc == 0x4B47E0u) {
        ctx->pc = 0x4B47E4u;
        goto label_4b47e4;
    }
    ctx->pc = 0x4B47DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B47E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B47E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B47E4u; }
            if (ctx->pc != 0x4B47E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4B47E4u;
label_4b47e4:
    // 0x4b47e4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4b47e8:
    if (ctx->pc == 0x4B47E8u) {
        ctx->pc = 0x4B47E8u;
            // 0x4b47e8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4B47ECu;
        goto label_4b47ec;
    }
    ctx->pc = 0x4B47E4u;
    {
        const bool branch_taken_0x4b47e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b47e4) {
            ctx->pc = 0x4B47E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B47E4u;
            // 0x4b47e8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4868u;
            goto label_4b4868;
        }
    }
    ctx->pc = 0x4B47ECu;
label_4b47ec:
    // 0x4b47ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b47f0:
    // 0x4b47f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b47f4:
    // 0x4b47f4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4b47f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4b47f8:
    // 0x4b47f8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4b47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4b47fc:
    // 0x4b47fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b47fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b4800:
    // 0x4b4800: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4b4800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4b4804:
    // 0x4b4804: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4b4804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4b4808:
    // 0x4b4808: 0xc0aecc4  jal         func_2BB310
label_4b480c:
    if (ctx->pc == 0x4B480Cu) {
        ctx->pc = 0x4B480Cu;
            // 0x4b480c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B4810u;
        goto label_4b4810;
    }
    ctx->pc = 0x4B4808u;
    SET_GPR_U32(ctx, 31, 0x4B4810u);
    ctx->pc = 0x4B480Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4808u;
            // 0x4b480c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4810u; }
        if (ctx->pc != 0x4B4810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4810u; }
        if (ctx->pc != 0x4B4810u) { return; }
    }
    ctx->pc = 0x4B4810u;
label_4b4810:
    // 0x4b4810: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4b4810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4b4814:
    // 0x4b4814: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4b4814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4b4818:
    // 0x4b4818: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b481c:
    if (ctx->pc == 0x4B481Cu) {
        ctx->pc = 0x4B481Cu;
            // 0x4b481c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4B4820u;
        goto label_4b4820;
    }
    ctx->pc = 0x4B4818u;
    {
        const bool branch_taken_0x4b4818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4818) {
            ctx->pc = 0x4B481Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4818u;
            // 0x4b481c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4834u;
            goto label_4b4834;
        }
    }
    ctx->pc = 0x4B4820u;
label_4b4820:
    // 0x4b4820: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4b4820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4b4824:
    // 0x4b4824: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b4824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b4828:
    // 0x4b4828: 0x320f809  jalr        $t9
label_4b482c:
    if (ctx->pc == 0x4B482Cu) {
        ctx->pc = 0x4B482Cu;
            // 0x4b482c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B4830u;
        goto label_4b4830;
    }
    ctx->pc = 0x4B4828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B4830u);
        ctx->pc = 0x4B482Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4828u;
            // 0x4b482c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B4830u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B4830u; }
            if (ctx->pc != 0x4B4830u) { return; }
        }
        }
    }
    ctx->pc = 0x4B4830u;
label_4b4830:
    // 0x4b4830: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4b4830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4b4834:
    // 0x4b4834: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4b4834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b4838:
    // 0x4b4838: 0xc0aec9c  jal         func_2BB270
label_4b483c:
    if (ctx->pc == 0x4B483Cu) {
        ctx->pc = 0x4B483Cu;
            // 0x4b483c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4B4840u;
        goto label_4b4840;
    }
    ctx->pc = 0x4B4838u;
    SET_GPR_U32(ctx, 31, 0x4B4840u);
    ctx->pc = 0x4B483Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4838u;
            // 0x4b483c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4840u; }
        if (ctx->pc != 0x4B4840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4840u; }
        if (ctx->pc != 0x4B4840u) { return; }
    }
    ctx->pc = 0x4B4840u;
label_4b4840:
    // 0x4b4840: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4b4840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4b4844:
    // 0x4b4844: 0xc0aec88  jal         func_2BB220
label_4b4848:
    if (ctx->pc == 0x4B4848u) {
        ctx->pc = 0x4B4848u;
            // 0x4b4848: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4B484Cu;
        goto label_4b484c;
    }
    ctx->pc = 0x4B4844u;
    SET_GPR_U32(ctx, 31, 0x4B484Cu);
    ctx->pc = 0x4B4848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4844u;
            // 0x4b4848: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B484Cu; }
        if (ctx->pc != 0x4B484Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B484Cu; }
        if (ctx->pc != 0x4B484Cu) { return; }
    }
    ctx->pc = 0x4B484Cu;
label_4b484c:
    // 0x4b484c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4b484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4b4850:
    // 0x4b4850: 0xc0aec0c  jal         func_2BB030
label_4b4854:
    if (ctx->pc == 0x4B4854u) {
        ctx->pc = 0x4B4854u;
            // 0x4b4854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4858u;
        goto label_4b4858;
    }
    ctx->pc = 0x4B4850u;
    SET_GPR_U32(ctx, 31, 0x4B4858u);
    ctx->pc = 0x4B4854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4850u;
            // 0x4b4854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4858u; }
        if (ctx->pc != 0x4B4858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4858u; }
        if (ctx->pc != 0x4B4858u) { return; }
    }
    ctx->pc = 0x4B4858u;
label_4b4858:
    // 0x4b4858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b4858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b485c:
    // 0x4b485c: 0xc0aeaa8  jal         func_2BAAA0
label_4b4860:
    if (ctx->pc == 0x4B4860u) {
        ctx->pc = 0x4B4860u;
            // 0x4b4860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4864u;
        goto label_4b4864;
    }
    ctx->pc = 0x4B485Cu;
    SET_GPR_U32(ctx, 31, 0x4B4864u);
    ctx->pc = 0x4B4860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B485Cu;
            // 0x4b4860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4864u; }
        if (ctx->pc != 0x4B4864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4864u; }
        if (ctx->pc != 0x4B4864u) { return; }
    }
    ctx->pc = 0x4B4864u;
label_4b4864:
    // 0x4b4864: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4b4864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4b4868:
    // 0x4b4868: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b4868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b486c:
    // 0x4b486c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b4870:
    if (ctx->pc == 0x4B4870u) {
        ctx->pc = 0x4B4870u;
            // 0x4b4870: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4874u;
        goto label_4b4874;
    }
    ctx->pc = 0x4B486Cu;
    {
        const bool branch_taken_0x4b486c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b486c) {
            ctx->pc = 0x4B4870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B486Cu;
            // 0x4b4870: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4880u;
            goto label_4b4880;
        }
    }
    ctx->pc = 0x4B4874u;
label_4b4874:
    // 0x4b4874: 0xc0400a8  jal         func_1002A0
label_4b4878:
    if (ctx->pc == 0x4B4878u) {
        ctx->pc = 0x4B4878u;
            // 0x4b4878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B487Cu;
        goto label_4b487c;
    }
    ctx->pc = 0x4B4874u;
    SET_GPR_U32(ctx, 31, 0x4B487Cu);
    ctx->pc = 0x4B4878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4874u;
            // 0x4b4878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B487Cu; }
        if (ctx->pc != 0x4B487Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B487Cu; }
        if (ctx->pc != 0x4B487Cu) { return; }
    }
    ctx->pc = 0x4B487Cu;
label_4b487c:
    // 0x4b487c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b487cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b4880:
    // 0x4b4880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b4880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b4884:
    // 0x4b4884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b4884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4888:
    // 0x4b4888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b4888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b488c:
    // 0x4b488c: 0x3e00008  jr          $ra
label_4b4890:
    if (ctx->pc == 0x4B4890u) {
        ctx->pc = 0x4B4890u;
            // 0x4b4890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B4894u;
        goto label_4b4894;
    }
    ctx->pc = 0x4B488Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B488Cu;
            // 0x4b4890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4894u;
label_4b4894:
    // 0x4b4894: 0x0  nop
    ctx->pc = 0x4b4894u;
    // NOP
label_4b4898:
    // 0x4b4898: 0x0  nop
    ctx->pc = 0x4b4898u;
    // NOP
label_4b489c:
    // 0x4b489c: 0x0  nop
    ctx->pc = 0x4b489cu;
    // NOP
label_4b48a0:
    // 0x4b48a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4b48a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4b48a4:
    // 0x4b48a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b48a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b48a8:
    // 0x4b48a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4b48a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4b48ac:
    // 0x4b48ac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4b48acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4b48b0:
    // 0x4b48b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4b48b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4b48b4:
    // 0x4b48b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4b48b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4b48b8:
    // 0x4b48b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b48b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4b48bc:
    // 0x4b48bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b48bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b48c0:
    // 0x4b48c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b48c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b48c4:
    // 0x4b48c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b48c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b48c8:
    // 0x4b48c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b48c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b48cc:
    // 0x4b48cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b48ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b48d0:
    // 0x4b48d0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4b48d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4b48d4:
    // 0x4b48d4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4b48d8:
    if (ctx->pc == 0x4B48D8u) {
        ctx->pc = 0x4B48D8u;
            // 0x4b48d8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B48DCu;
        goto label_4b48dc;
    }
    ctx->pc = 0x4B48D4u;
    {
        const bool branch_taken_0x4b48d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B48D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B48D4u;
            // 0x4b48d8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b48d4) {
            ctx->pc = 0x4B4924u;
            goto label_4b4924;
        }
    }
    ctx->pc = 0x4B48DCu;
label_4b48dc:
    // 0x4b48dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b48dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b48e0:
    // 0x4b48e0: 0x50a30045  beql        $a1, $v1, . + 4 + (0x45 << 2)
label_4b48e4:
    if (ctx->pc == 0x4B48E4u) {
        ctx->pc = 0x4B48E4u;
            // 0x4b48e4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4B48E8u;
        goto label_4b48e8;
    }
    ctx->pc = 0x4B48E0u;
    {
        const bool branch_taken_0x4b48e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b48e0) {
            ctx->pc = 0x4B48E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B48E0u;
            // 0x4b48e4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B49F8u;
            goto label_4b49f8;
        }
    }
    ctx->pc = 0x4B48E8u;
label_4b48e8:
    // 0x4b48e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b48ec:
    // 0x4b48ec: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4b48f0:
    if (ctx->pc == 0x4B48F0u) {
        ctx->pc = 0x4B48F4u;
        goto label_4b48f4;
    }
    ctx->pc = 0x4B48ECu;
    {
        const bool branch_taken_0x4b48ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b48ec) {
            ctx->pc = 0x4B48FCu;
            goto label_4b48fc;
        }
    }
    ctx->pc = 0x4B48F4u;
label_4b48f4:
    // 0x4b48f4: 0x1000003f  b           . + 4 + (0x3F << 2)
label_4b48f8:
    if (ctx->pc == 0x4B48F8u) {
        ctx->pc = 0x4B48FCu;
        goto label_4b48fc;
    }
    ctx->pc = 0x4B48F4u;
    {
        const bool branch_taken_0x4b48f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b48f4) {
            ctx->pc = 0x4B49F4u;
            goto label_4b49f4;
        }
    }
    ctx->pc = 0x4B48FCu;
label_4b48fc:
    // 0x4b48fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b4900:
    // 0x4b4900: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b4900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b4904:
    // 0x4b4904: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4b4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4b4908:
    // 0x4b4908: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4b4908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4b490c:
    // 0x4b490c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4b490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4b4910:
    // 0x4b4910: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b4910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4b4914:
    // 0x4b4914: 0x320f809  jalr        $t9
label_4b4918:
    if (ctx->pc == 0x4B4918u) {
        ctx->pc = 0x4B4918u;
            // 0x4b4918: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4B491Cu;
        goto label_4b491c;
    }
    ctx->pc = 0x4B4914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B491Cu);
        ctx->pc = 0x4B4918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4914u;
            // 0x4b4918: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B491Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B491Cu; }
            if (ctx->pc != 0x4B491Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B491Cu;
label_4b491c:
    // 0x4b491c: 0x10000035  b           . + 4 + (0x35 << 2)
label_4b4920:
    if (ctx->pc == 0x4B4920u) {
        ctx->pc = 0x4B4924u;
        goto label_4b4924;
    }
    ctx->pc = 0x4B491Cu;
    {
        const bool branch_taken_0x4b491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b491c) {
            ctx->pc = 0x4B49F4u;
            goto label_4b49f4;
        }
    }
    ctx->pc = 0x4B4924u;
label_4b4924:
    // 0x4b4924: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x4b4924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4b4928:
    // 0x4b4928: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_4b492c:
    if (ctx->pc == 0x4B492Cu) {
        ctx->pc = 0x4B4930u;
        goto label_4b4930;
    }
    ctx->pc = 0x4B4928u;
    {
        const bool branch_taken_0x4b4928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4928) {
            ctx->pc = 0x4B49F4u;
            goto label_4b49f4;
        }
    }
    ctx->pc = 0x4B4930u;
label_4b4930:
    // 0x4b4930: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b4930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b4934:
    // 0x4b4934: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b4934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b4938:
    // 0x4b4938: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x4b4938u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4b493c:
    // 0x4b493c: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x4b493cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4b4940:
    // 0x4b4940: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4b4940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4b4944:
    // 0x4b4944: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x4b4944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4b4948:
    // 0x4b4948: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b4948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b494c:
    // 0x4b494c: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x4b494cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4b4950:
    // 0x4b4950: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x4b4950u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4b4954:
    // 0x4b4954: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4b4954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4b4958:
    // 0x4b4958: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b4958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b495c:
    // 0x4b495c: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x4b495cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4b4960:
    // 0x4b4960: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b4960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b4964:
    // 0x4b4964: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4b4964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4b4968:
    // 0x4b4968: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4b4968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b496c:
    // 0x4b496c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4b496cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4b4970:
    // 0x4b4970: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x4b4970u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4b4974:
    // 0x4b4974: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4b4974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4b4978:
    // 0x4b4978: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x4b4978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_4b497c:
    // 0x4b497c: 0xc04e738  jal         func_139CE0
label_4b4980:
    if (ctx->pc == 0x4B4980u) {
        ctx->pc = 0x4B4980u;
            // 0x4b4980: 0x26b30084  addiu       $s3, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->pc = 0x4B4984u;
        goto label_4b4984;
    }
    ctx->pc = 0x4B497Cu;
    SET_GPR_U32(ctx, 31, 0x4B4984u);
    ctx->pc = 0x4B4980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B497Cu;
            // 0x4b4980: 0x26b30084  addiu       $s3, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4984u; }
        if (ctx->pc != 0x4B4984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4984u; }
        if (ctx->pc != 0x4B4984u) { return; }
    }
    ctx->pc = 0x4B4984u;
label_4b4984:
    // 0x4b4984: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b4984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4988:
    // 0x4b4988: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b4988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b498c:
    // 0x4b498c: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x4b498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4b4990:
    // 0x4b4990: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4b4990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b4994:
    // 0x4b4994: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4b4994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4b4998:
    // 0x4b4998: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4b4998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4b499c:
    // 0x4b499c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x4b499cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4b49a0:
    // 0x4b49a0: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x4b49a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4b49a4:
    // 0x4b49a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4b49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4b49a8:
    // 0x4b49a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4b49a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b49ac:
    // 0x4b49ac: 0xc12d470  jal         func_4B51C0
label_4b49b0:
    if (ctx->pc == 0x4B49B0u) {
        ctx->pc = 0x4B49B0u;
            // 0x4b49b0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B49B4u;
        goto label_4b49b4;
    }
    ctx->pc = 0x4B49ACu;
    SET_GPR_U32(ctx, 31, 0x4B49B4u);
    ctx->pc = 0x4B49B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B49ACu;
            // 0x4b49b0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B51C0u;
    if (runtime->hasFunction(0x4B51C0u)) {
        auto targetFn = runtime->lookupFunction(0x4B51C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B49B4u; }
        if (ctx->pc != 0x4B49B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B51C0_0x4b51c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B49B4u; }
        if (ctx->pc != 0x4B49B4u) { return; }
    }
    ctx->pc = 0x4B49B4u;
label_4b49b4:
    // 0x4b49b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4b49b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4b49b8:
    // 0x4b49b8: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4b49b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4b49bc:
    // 0x4b49bc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_4b49c0:
    if (ctx->pc == 0x4B49C0u) {
        ctx->pc = 0x4B49C0u;
            // 0x4b49c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4B49C4u;
        goto label_4b49c4;
    }
    ctx->pc = 0x4B49BCu;
    {
        const bool branch_taken_0x4b49bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B49C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B49BCu;
            // 0x4b49c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b49bc) {
            ctx->pc = 0x4B498Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b498c;
        }
    }
    ctx->pc = 0x4B49C4u;
label_4b49c4:
    // 0x4b49c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b49c8:
    // 0x4b49c8: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4b49c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4b49cc:
    // 0x4b49cc: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4b49d0:
    if (ctx->pc == 0x4B49D0u) {
        ctx->pc = 0x4B49D0u;
            // 0x4b49d0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4B49D4u;
        goto label_4b49d4;
    }
    ctx->pc = 0x4B49CCu;
    {
        const bool branch_taken_0x4b49cc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4B49D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B49CCu;
            // 0x4b49d0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b49cc) {
            ctx->pc = 0x4B49F4u;
            goto label_4b49f4;
        }
    }
    ctx->pc = 0x4B49D4u;
label_4b49d4:
    // 0x4b49d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b49d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b49d8:
    // 0x4b49d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b49dc:
    // 0x4b49dc: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4b49dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4b49e0:
    // 0x4b49e0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4b49e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4b49e4:
    // 0x4b49e4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4b49e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4b49e8:
    // 0x4b49e8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x4b49e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4b49ec:
    // 0x4b49ec: 0xc055ea8  jal         func_157AA0
label_4b49f0:
    if (ctx->pc == 0x4B49F0u) {
        ctx->pc = 0x4B49F0u;
            // 0x4b49f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B49F4u;
        goto label_4b49f4;
    }
    ctx->pc = 0x4B49ECu;
    SET_GPR_U32(ctx, 31, 0x4B49F4u);
    ctx->pc = 0x4B49F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B49ECu;
            // 0x4b49f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B49F4u; }
        if (ctx->pc != 0x4B49F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B49F4u; }
        if (ctx->pc != 0x4B49F4u) { return; }
    }
    ctx->pc = 0x4B49F4u;
label_4b49f4:
    // 0x4b49f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4b49f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4b49f8:
    // 0x4b49f8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4b49f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4b49fc:
    // 0x4b49fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4b49fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4b4a00:
    // 0x4b4a00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4b4a00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4b4a04:
    // 0x4b4a04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b4a04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b4a08:
    // 0x4b4a08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b4a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b4a0c:
    // 0x4b4a0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b4a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b4a10:
    // 0x4b4a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b4a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b4a14:
    // 0x4b4a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b4a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4a18:
    // 0x4b4a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b4a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b4a1c:
    // 0x4b4a1c: 0x3e00008  jr          $ra
label_4b4a20:
    if (ctx->pc == 0x4B4A20u) {
        ctx->pc = 0x4B4A20u;
            // 0x4b4a20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4B4A24u;
        goto label_4b4a24;
    }
    ctx->pc = 0x4B4A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4A1Cu;
            // 0x4b4a20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4A24u;
label_4b4a24:
    // 0x4b4a24: 0x0  nop
    ctx->pc = 0x4b4a24u;
    // NOP
label_4b4a28:
    // 0x4b4a28: 0x0  nop
    ctx->pc = 0x4b4a28u;
    // NOP
label_4b4a2c:
    // 0x4b4a2c: 0x0  nop
    ctx->pc = 0x4b4a2cu;
    // NOP
label_4b4a30:
    // 0x4b4a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b4a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4b4a34:
    // 0x4b4a34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b4a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b4a38:
    // 0x4b4a38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b4a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4b4a3c:
    // 0x4b4a3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b4a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b4a40:
    // 0x4b4a40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b4a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b4a44:
    // 0x4b4a44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b4a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b4a48:
    // 0x4b4a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b4a4c:
    // 0x4b4a4c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4b4a4cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4b4a50:
    // 0x4b4a50: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
label_4b4a54:
    if (ctx->pc == 0x4B4A54u) {
        ctx->pc = 0x4B4A54u;
            // 0x4b4a54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4A58u;
        goto label_4b4a58;
    }
    ctx->pc = 0x4B4A50u;
    {
        const bool branch_taken_0x4b4a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B4A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4A50u;
            // 0x4b4a54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a50) {
            ctx->pc = 0x4B4A88u;
            goto label_4b4a88;
        }
    }
    ctx->pc = 0x4B4A58u;
label_4b4a58:
    // 0x4b4a58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b4a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b4a5c:
    // 0x4b4a5c: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
label_4b4a60:
    if (ctx->pc == 0x4B4A60u) {
        ctx->pc = 0x4B4A60u;
            // 0x4b4a60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4B4A64u;
        goto label_4b4a64;
    }
    ctx->pc = 0x4B4A5Cu;
    {
        const bool branch_taken_0x4b4a5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b4a5c) {
            ctx->pc = 0x4B4A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4A5Cu;
            // 0x4b4a60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4A7Cu;
            goto label_4b4a7c;
        }
    }
    ctx->pc = 0x4B4A64u;
label_4b4a64:
    // 0x4b4a64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b4a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b4a68:
    // 0x4b4a68: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
label_4b4a6c:
    if (ctx->pc == 0x4B4A6Cu) {
        ctx->pc = 0x4B4A70u;
        goto label_4b4a70;
    }
    ctx->pc = 0x4B4A68u;
    {
        const bool branch_taken_0x4b4a68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b4a68) {
            ctx->pc = 0x4B4AC0u;
            goto label_4b4ac0;
        }
    }
    ctx->pc = 0x4B4A70u;
label_4b4a70:
    // 0x4b4a70: 0x10000013  b           . + 4 + (0x13 << 2)
label_4b4a74:
    if (ctx->pc == 0x4B4A74u) {
        ctx->pc = 0x4B4A78u;
        goto label_4b4a78;
    }
    ctx->pc = 0x4B4A70u;
    {
        const bool branch_taken_0x4b4a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4a70) {
            ctx->pc = 0x4B4AC0u;
            goto label_4b4ac0;
        }
    }
    ctx->pc = 0x4B4A78u;
label_4b4a78:
    // 0x4b4a78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b4a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b4a7c:
    // 0x4b4a7c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4b4a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4b4a80:
    // 0x4b4a80: 0x320f809  jalr        $t9
label_4b4a84:
    if (ctx->pc == 0x4B4A84u) {
        ctx->pc = 0x4B4A88u;
        goto label_4b4a88;
    }
    ctx->pc = 0x4B4A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B4A88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B4A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B4A88u; }
            if (ctx->pc != 0x4B4A88u) { return; }
        }
        }
    }
    ctx->pc = 0x4B4A88u;
label_4b4a88:
    // 0x4b4a88: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4b4a88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4b4a8c:
    // 0x4b4a8c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4b4a90:
    if (ctx->pc == 0x4B4A90u) {
        ctx->pc = 0x4B4A94u;
        goto label_4b4a94;
    }
    ctx->pc = 0x4B4A8Cu;
    {
        const bool branch_taken_0x4b4a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4a8c) {
            ctx->pc = 0x4B4AC0u;
            goto label_4b4ac0;
        }
    }
    ctx->pc = 0x4B4A94u;
label_4b4a94:
    // 0x4b4a94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b4a94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4a98:
    // 0x4b4a98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b4a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4a9c:
    // 0x4b4a9c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4b4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4b4aa0:
    // 0x4b4aa0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4b4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4b4aa4:
    // 0x4b4aa4: 0xc0e3658  jal         func_38D960
label_4b4aa8:
    if (ctx->pc == 0x4B4AA8u) {
        ctx->pc = 0x4B4AA8u;
            // 0x4b4aa8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4B4AACu;
        goto label_4b4aac;
    }
    ctx->pc = 0x4B4AA4u;
    SET_GPR_U32(ctx, 31, 0x4B4AACu);
    ctx->pc = 0x4B4AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4AA4u;
            // 0x4b4aa8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4AACu; }
        if (ctx->pc != 0x4B4AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4AACu; }
        if (ctx->pc != 0x4B4AACu) { return; }
    }
    ctx->pc = 0x4B4AACu;
label_4b4aac:
    // 0x4b4aac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4b4aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4b4ab0:
    // 0x4b4ab0: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4b4ab0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4b4ab4:
    // 0x4b4ab4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4b4ab8:
    if (ctx->pc == 0x4B4AB8u) {
        ctx->pc = 0x4B4AB8u;
            // 0x4b4ab8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4B4ABCu;
        goto label_4b4abc;
    }
    ctx->pc = 0x4B4AB4u;
    {
        const bool branch_taken_0x4b4ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4AB4u;
            // 0x4b4ab8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4ab4) {
            ctx->pc = 0x4B4A9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b4a9c;
        }
    }
    ctx->pc = 0x4B4ABCu;
label_4b4abc:
    // 0x4b4abc: 0x0  nop
    ctx->pc = 0x4b4abcu;
    // NOP
label_4b4ac0:
    // 0x4b4ac0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b4ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4b4ac4:
    // 0x4b4ac4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b4ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b4ac8:
    // 0x4b4ac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b4ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b4acc:
    // 0x4b4acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b4accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4ad0:
    // 0x4b4ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b4ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b4ad4:
    // 0x4b4ad4: 0x3e00008  jr          $ra
label_4b4ad8:
    if (ctx->pc == 0x4B4AD8u) {
        ctx->pc = 0x4B4AD8u;
            // 0x4b4ad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4B4ADCu;
        goto label_4b4adc;
    }
    ctx->pc = 0x4B4AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4AD4u;
            // 0x4b4ad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4ADCu;
label_4b4adc:
    // 0x4b4adc: 0x0  nop
    ctx->pc = 0x4b4adcu;
    // NOP
label_4b4ae0:
    // 0x4b4ae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b4ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4b4ae4:
    // 0x4b4ae4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b4ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4b4ae8:
    // 0x4b4ae8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b4ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b4aec:
    // 0x4b4aec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b4aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b4af0:
    // 0x4b4af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b4af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b4af4:
    // 0x4b4af4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b4af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b4af8:
    // 0x4b4af8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4b4af8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4b4afc:
    // 0x4b4afc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4b4b00:
    if (ctx->pc == 0x4B4B00u) {
        ctx->pc = 0x4B4B00u;
            // 0x4b4b00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4B04u;
        goto label_4b4b04;
    }
    ctx->pc = 0x4B4AFCu;
    {
        const bool branch_taken_0x4b4afc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4AFCu;
            // 0x4b4b00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4afc) {
            ctx->pc = 0x4B4B38u;
            goto label_4b4b38;
        }
    }
    ctx->pc = 0x4B4B04u;
label_4b4b04:
    // 0x4b4b04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b4b04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4b08:
    // 0x4b4b08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b4b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4b0c:
    // 0x4b4b0c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4b4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4b4b10:
    // 0x4b4b10: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4b4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4b4b14:
    // 0x4b4b14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4b4b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b4b18:
    // 0x4b4b18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b4b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b4b1c:
    // 0x4b4b1c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4b4b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4b4b20:
    // 0x4b4b20: 0x320f809  jalr        $t9
label_4b4b24:
    if (ctx->pc == 0x4B4B24u) {
        ctx->pc = 0x4B4B28u;
        goto label_4b4b28;
    }
    ctx->pc = 0x4B4B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B4B28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B4B28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B4B28u; }
            if (ctx->pc != 0x4B4B28u) { return; }
        }
        }
    }
    ctx->pc = 0x4B4B28u;
label_4b4b28:
    // 0x4b4b28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4b4b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4b4b2c:
    // 0x4b4b2c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4b4b2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4b4b30:
    // 0x4b4b30: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4b4b34:
    if (ctx->pc == 0x4B4B34u) {
        ctx->pc = 0x4B4B34u;
            // 0x4b4b34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4B4B38u;
        goto label_4b4b38;
    }
    ctx->pc = 0x4B4B30u;
    {
        const bool branch_taken_0x4b4b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4B30u;
            // 0x4b4b34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4b30) {
            ctx->pc = 0x4B4B0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b4b0c;
        }
    }
    ctx->pc = 0x4B4B38u;
label_4b4b38:
    // 0x4b4b38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b4b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4b4b3c:
    // 0x4b4b3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b4b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b4b40:
    // 0x4b4b40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b4b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b4b44:
    // 0x4b4b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b4b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4b48:
    // 0x4b4b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b4b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b4b4c:
    // 0x4b4b4c: 0x3e00008  jr          $ra
label_4b4b50:
    if (ctx->pc == 0x4B4B50u) {
        ctx->pc = 0x4B4B50u;
            // 0x4b4b50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4B4B54u;
        goto label_4b4b54;
    }
    ctx->pc = 0x4B4B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4B4Cu;
            // 0x4b4b50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4B54u;
label_4b4b54:
    // 0x4b4b54: 0x0  nop
    ctx->pc = 0x4b4b54u;
    // NOP
label_4b4b58:
    // 0x4b4b58: 0x0  nop
    ctx->pc = 0x4b4b58u;
    // NOP
label_4b4b5c:
    // 0x4b4b5c: 0x0  nop
    ctx->pc = 0x4b4b5cu;
    // NOP
}
