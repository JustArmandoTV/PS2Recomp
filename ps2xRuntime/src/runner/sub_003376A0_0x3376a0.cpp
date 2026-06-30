#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003376A0
// Address: 0x3376a0 - 0x337bd0
void sub_003376A0_0x3376a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003376A0_0x3376a0");
#endif

    switch (ctx->pc) {
        case 0x3376a0u: goto label_3376a0;
        case 0x3376a4u: goto label_3376a4;
        case 0x3376a8u: goto label_3376a8;
        case 0x3376acu: goto label_3376ac;
        case 0x3376b0u: goto label_3376b0;
        case 0x3376b4u: goto label_3376b4;
        case 0x3376b8u: goto label_3376b8;
        case 0x3376bcu: goto label_3376bc;
        case 0x3376c0u: goto label_3376c0;
        case 0x3376c4u: goto label_3376c4;
        case 0x3376c8u: goto label_3376c8;
        case 0x3376ccu: goto label_3376cc;
        case 0x3376d0u: goto label_3376d0;
        case 0x3376d4u: goto label_3376d4;
        case 0x3376d8u: goto label_3376d8;
        case 0x3376dcu: goto label_3376dc;
        case 0x3376e0u: goto label_3376e0;
        case 0x3376e4u: goto label_3376e4;
        case 0x3376e8u: goto label_3376e8;
        case 0x3376ecu: goto label_3376ec;
        case 0x3376f0u: goto label_3376f0;
        case 0x3376f4u: goto label_3376f4;
        case 0x3376f8u: goto label_3376f8;
        case 0x3376fcu: goto label_3376fc;
        case 0x337700u: goto label_337700;
        case 0x337704u: goto label_337704;
        case 0x337708u: goto label_337708;
        case 0x33770cu: goto label_33770c;
        case 0x337710u: goto label_337710;
        case 0x337714u: goto label_337714;
        case 0x337718u: goto label_337718;
        case 0x33771cu: goto label_33771c;
        case 0x337720u: goto label_337720;
        case 0x337724u: goto label_337724;
        case 0x337728u: goto label_337728;
        case 0x33772cu: goto label_33772c;
        case 0x337730u: goto label_337730;
        case 0x337734u: goto label_337734;
        case 0x337738u: goto label_337738;
        case 0x33773cu: goto label_33773c;
        case 0x337740u: goto label_337740;
        case 0x337744u: goto label_337744;
        case 0x337748u: goto label_337748;
        case 0x33774cu: goto label_33774c;
        case 0x337750u: goto label_337750;
        case 0x337754u: goto label_337754;
        case 0x337758u: goto label_337758;
        case 0x33775cu: goto label_33775c;
        case 0x337760u: goto label_337760;
        case 0x337764u: goto label_337764;
        case 0x337768u: goto label_337768;
        case 0x33776cu: goto label_33776c;
        case 0x337770u: goto label_337770;
        case 0x337774u: goto label_337774;
        case 0x337778u: goto label_337778;
        case 0x33777cu: goto label_33777c;
        case 0x337780u: goto label_337780;
        case 0x337784u: goto label_337784;
        case 0x337788u: goto label_337788;
        case 0x33778cu: goto label_33778c;
        case 0x337790u: goto label_337790;
        case 0x337794u: goto label_337794;
        case 0x337798u: goto label_337798;
        case 0x33779cu: goto label_33779c;
        case 0x3377a0u: goto label_3377a0;
        case 0x3377a4u: goto label_3377a4;
        case 0x3377a8u: goto label_3377a8;
        case 0x3377acu: goto label_3377ac;
        case 0x3377b0u: goto label_3377b0;
        case 0x3377b4u: goto label_3377b4;
        case 0x3377b8u: goto label_3377b8;
        case 0x3377bcu: goto label_3377bc;
        case 0x3377c0u: goto label_3377c0;
        case 0x3377c4u: goto label_3377c4;
        case 0x3377c8u: goto label_3377c8;
        case 0x3377ccu: goto label_3377cc;
        case 0x3377d0u: goto label_3377d0;
        case 0x3377d4u: goto label_3377d4;
        case 0x3377d8u: goto label_3377d8;
        case 0x3377dcu: goto label_3377dc;
        case 0x3377e0u: goto label_3377e0;
        case 0x3377e4u: goto label_3377e4;
        case 0x3377e8u: goto label_3377e8;
        case 0x3377ecu: goto label_3377ec;
        case 0x3377f0u: goto label_3377f0;
        case 0x3377f4u: goto label_3377f4;
        case 0x3377f8u: goto label_3377f8;
        case 0x3377fcu: goto label_3377fc;
        case 0x337800u: goto label_337800;
        case 0x337804u: goto label_337804;
        case 0x337808u: goto label_337808;
        case 0x33780cu: goto label_33780c;
        case 0x337810u: goto label_337810;
        case 0x337814u: goto label_337814;
        case 0x337818u: goto label_337818;
        case 0x33781cu: goto label_33781c;
        case 0x337820u: goto label_337820;
        case 0x337824u: goto label_337824;
        case 0x337828u: goto label_337828;
        case 0x33782cu: goto label_33782c;
        case 0x337830u: goto label_337830;
        case 0x337834u: goto label_337834;
        case 0x337838u: goto label_337838;
        case 0x33783cu: goto label_33783c;
        case 0x337840u: goto label_337840;
        case 0x337844u: goto label_337844;
        case 0x337848u: goto label_337848;
        case 0x33784cu: goto label_33784c;
        case 0x337850u: goto label_337850;
        case 0x337854u: goto label_337854;
        case 0x337858u: goto label_337858;
        case 0x33785cu: goto label_33785c;
        case 0x337860u: goto label_337860;
        case 0x337864u: goto label_337864;
        case 0x337868u: goto label_337868;
        case 0x33786cu: goto label_33786c;
        case 0x337870u: goto label_337870;
        case 0x337874u: goto label_337874;
        case 0x337878u: goto label_337878;
        case 0x33787cu: goto label_33787c;
        case 0x337880u: goto label_337880;
        case 0x337884u: goto label_337884;
        case 0x337888u: goto label_337888;
        case 0x33788cu: goto label_33788c;
        case 0x337890u: goto label_337890;
        case 0x337894u: goto label_337894;
        case 0x337898u: goto label_337898;
        case 0x33789cu: goto label_33789c;
        case 0x3378a0u: goto label_3378a0;
        case 0x3378a4u: goto label_3378a4;
        case 0x3378a8u: goto label_3378a8;
        case 0x3378acu: goto label_3378ac;
        case 0x3378b0u: goto label_3378b0;
        case 0x3378b4u: goto label_3378b4;
        case 0x3378b8u: goto label_3378b8;
        case 0x3378bcu: goto label_3378bc;
        case 0x3378c0u: goto label_3378c0;
        case 0x3378c4u: goto label_3378c4;
        case 0x3378c8u: goto label_3378c8;
        case 0x3378ccu: goto label_3378cc;
        case 0x3378d0u: goto label_3378d0;
        case 0x3378d4u: goto label_3378d4;
        case 0x3378d8u: goto label_3378d8;
        case 0x3378dcu: goto label_3378dc;
        case 0x3378e0u: goto label_3378e0;
        case 0x3378e4u: goto label_3378e4;
        case 0x3378e8u: goto label_3378e8;
        case 0x3378ecu: goto label_3378ec;
        case 0x3378f0u: goto label_3378f0;
        case 0x3378f4u: goto label_3378f4;
        case 0x3378f8u: goto label_3378f8;
        case 0x3378fcu: goto label_3378fc;
        case 0x337900u: goto label_337900;
        case 0x337904u: goto label_337904;
        case 0x337908u: goto label_337908;
        case 0x33790cu: goto label_33790c;
        case 0x337910u: goto label_337910;
        case 0x337914u: goto label_337914;
        case 0x337918u: goto label_337918;
        case 0x33791cu: goto label_33791c;
        case 0x337920u: goto label_337920;
        case 0x337924u: goto label_337924;
        case 0x337928u: goto label_337928;
        case 0x33792cu: goto label_33792c;
        case 0x337930u: goto label_337930;
        case 0x337934u: goto label_337934;
        case 0x337938u: goto label_337938;
        case 0x33793cu: goto label_33793c;
        case 0x337940u: goto label_337940;
        case 0x337944u: goto label_337944;
        case 0x337948u: goto label_337948;
        case 0x33794cu: goto label_33794c;
        case 0x337950u: goto label_337950;
        case 0x337954u: goto label_337954;
        case 0x337958u: goto label_337958;
        case 0x33795cu: goto label_33795c;
        case 0x337960u: goto label_337960;
        case 0x337964u: goto label_337964;
        case 0x337968u: goto label_337968;
        case 0x33796cu: goto label_33796c;
        case 0x337970u: goto label_337970;
        case 0x337974u: goto label_337974;
        case 0x337978u: goto label_337978;
        case 0x33797cu: goto label_33797c;
        case 0x337980u: goto label_337980;
        case 0x337984u: goto label_337984;
        case 0x337988u: goto label_337988;
        case 0x33798cu: goto label_33798c;
        case 0x337990u: goto label_337990;
        case 0x337994u: goto label_337994;
        case 0x337998u: goto label_337998;
        case 0x33799cu: goto label_33799c;
        case 0x3379a0u: goto label_3379a0;
        case 0x3379a4u: goto label_3379a4;
        case 0x3379a8u: goto label_3379a8;
        case 0x3379acu: goto label_3379ac;
        case 0x3379b0u: goto label_3379b0;
        case 0x3379b4u: goto label_3379b4;
        case 0x3379b8u: goto label_3379b8;
        case 0x3379bcu: goto label_3379bc;
        case 0x3379c0u: goto label_3379c0;
        case 0x3379c4u: goto label_3379c4;
        case 0x3379c8u: goto label_3379c8;
        case 0x3379ccu: goto label_3379cc;
        case 0x3379d0u: goto label_3379d0;
        case 0x3379d4u: goto label_3379d4;
        case 0x3379d8u: goto label_3379d8;
        case 0x3379dcu: goto label_3379dc;
        case 0x3379e0u: goto label_3379e0;
        case 0x3379e4u: goto label_3379e4;
        case 0x3379e8u: goto label_3379e8;
        case 0x3379ecu: goto label_3379ec;
        case 0x3379f0u: goto label_3379f0;
        case 0x3379f4u: goto label_3379f4;
        case 0x3379f8u: goto label_3379f8;
        case 0x3379fcu: goto label_3379fc;
        case 0x337a00u: goto label_337a00;
        case 0x337a04u: goto label_337a04;
        case 0x337a08u: goto label_337a08;
        case 0x337a0cu: goto label_337a0c;
        case 0x337a10u: goto label_337a10;
        case 0x337a14u: goto label_337a14;
        case 0x337a18u: goto label_337a18;
        case 0x337a1cu: goto label_337a1c;
        case 0x337a20u: goto label_337a20;
        case 0x337a24u: goto label_337a24;
        case 0x337a28u: goto label_337a28;
        case 0x337a2cu: goto label_337a2c;
        case 0x337a30u: goto label_337a30;
        case 0x337a34u: goto label_337a34;
        case 0x337a38u: goto label_337a38;
        case 0x337a3cu: goto label_337a3c;
        case 0x337a40u: goto label_337a40;
        case 0x337a44u: goto label_337a44;
        case 0x337a48u: goto label_337a48;
        case 0x337a4cu: goto label_337a4c;
        case 0x337a50u: goto label_337a50;
        case 0x337a54u: goto label_337a54;
        case 0x337a58u: goto label_337a58;
        case 0x337a5cu: goto label_337a5c;
        case 0x337a60u: goto label_337a60;
        case 0x337a64u: goto label_337a64;
        case 0x337a68u: goto label_337a68;
        case 0x337a6cu: goto label_337a6c;
        case 0x337a70u: goto label_337a70;
        case 0x337a74u: goto label_337a74;
        case 0x337a78u: goto label_337a78;
        case 0x337a7cu: goto label_337a7c;
        case 0x337a80u: goto label_337a80;
        case 0x337a84u: goto label_337a84;
        case 0x337a88u: goto label_337a88;
        case 0x337a8cu: goto label_337a8c;
        case 0x337a90u: goto label_337a90;
        case 0x337a94u: goto label_337a94;
        case 0x337a98u: goto label_337a98;
        case 0x337a9cu: goto label_337a9c;
        case 0x337aa0u: goto label_337aa0;
        case 0x337aa4u: goto label_337aa4;
        case 0x337aa8u: goto label_337aa8;
        case 0x337aacu: goto label_337aac;
        case 0x337ab0u: goto label_337ab0;
        case 0x337ab4u: goto label_337ab4;
        case 0x337ab8u: goto label_337ab8;
        case 0x337abcu: goto label_337abc;
        case 0x337ac0u: goto label_337ac0;
        case 0x337ac4u: goto label_337ac4;
        case 0x337ac8u: goto label_337ac8;
        case 0x337accu: goto label_337acc;
        case 0x337ad0u: goto label_337ad0;
        case 0x337ad4u: goto label_337ad4;
        case 0x337ad8u: goto label_337ad8;
        case 0x337adcu: goto label_337adc;
        case 0x337ae0u: goto label_337ae0;
        case 0x337ae4u: goto label_337ae4;
        case 0x337ae8u: goto label_337ae8;
        case 0x337aecu: goto label_337aec;
        case 0x337af0u: goto label_337af0;
        case 0x337af4u: goto label_337af4;
        case 0x337af8u: goto label_337af8;
        case 0x337afcu: goto label_337afc;
        case 0x337b00u: goto label_337b00;
        case 0x337b04u: goto label_337b04;
        case 0x337b08u: goto label_337b08;
        case 0x337b0cu: goto label_337b0c;
        case 0x337b10u: goto label_337b10;
        case 0x337b14u: goto label_337b14;
        case 0x337b18u: goto label_337b18;
        case 0x337b1cu: goto label_337b1c;
        case 0x337b20u: goto label_337b20;
        case 0x337b24u: goto label_337b24;
        case 0x337b28u: goto label_337b28;
        case 0x337b2cu: goto label_337b2c;
        case 0x337b30u: goto label_337b30;
        case 0x337b34u: goto label_337b34;
        case 0x337b38u: goto label_337b38;
        case 0x337b3cu: goto label_337b3c;
        case 0x337b40u: goto label_337b40;
        case 0x337b44u: goto label_337b44;
        case 0x337b48u: goto label_337b48;
        case 0x337b4cu: goto label_337b4c;
        case 0x337b50u: goto label_337b50;
        case 0x337b54u: goto label_337b54;
        case 0x337b58u: goto label_337b58;
        case 0x337b5cu: goto label_337b5c;
        case 0x337b60u: goto label_337b60;
        case 0x337b64u: goto label_337b64;
        case 0x337b68u: goto label_337b68;
        case 0x337b6cu: goto label_337b6c;
        case 0x337b70u: goto label_337b70;
        case 0x337b74u: goto label_337b74;
        case 0x337b78u: goto label_337b78;
        case 0x337b7cu: goto label_337b7c;
        case 0x337b80u: goto label_337b80;
        case 0x337b84u: goto label_337b84;
        case 0x337b88u: goto label_337b88;
        case 0x337b8cu: goto label_337b8c;
        case 0x337b90u: goto label_337b90;
        case 0x337b94u: goto label_337b94;
        case 0x337b98u: goto label_337b98;
        case 0x337b9cu: goto label_337b9c;
        case 0x337ba0u: goto label_337ba0;
        case 0x337ba4u: goto label_337ba4;
        case 0x337ba8u: goto label_337ba8;
        case 0x337bacu: goto label_337bac;
        case 0x337bb0u: goto label_337bb0;
        case 0x337bb4u: goto label_337bb4;
        case 0x337bb8u: goto label_337bb8;
        case 0x337bbcu: goto label_337bbc;
        case 0x337bc0u: goto label_337bc0;
        case 0x337bc4u: goto label_337bc4;
        case 0x337bc8u: goto label_337bc8;
        case 0x337bccu: goto label_337bcc;
        default: break;
    }

    ctx->pc = 0x3376a0u;

label_3376a0:
    // 0x3376a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3376a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3376a4:
    // 0x3376a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3376a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3376a8:
    // 0x3376a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3376a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3376ac:
    // 0x3376ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3376acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3376b0:
    // 0x3376b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3376b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3376b4:
    // 0x3376b4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3376b8:
    if (ctx->pc == 0x3376B8u) {
        ctx->pc = 0x3376B8u;
            // 0x3376b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3376BCu;
        goto label_3376bc;
    }
    ctx->pc = 0x3376B4u;
    {
        const bool branch_taken_0x3376b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3376B4u;
            // 0x3376b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376b4) {
            ctx->pc = 0x3377E8u;
            goto label_3377e8;
        }
    }
    ctx->pc = 0x3376BCu;
label_3376bc:
    // 0x3376bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3376bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3376c0:
    // 0x3376c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3376c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3376c4:
    // 0x3376c4: 0x24634e20  addiu       $v1, $v1, 0x4E20
    ctx->pc = 0x3376c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20000));
label_3376c8:
    // 0x3376c8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x3376c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_3376cc:
    // 0x3376cc: 0x24424e58  addiu       $v0, $v0, 0x4E58
    ctx->pc = 0x3376ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20056));
label_3376d0:
    // 0x3376d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3376d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3376d4:
    // 0x3376d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3376d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3376d8:
    // 0x3376d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3376d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3376dc:
    // 0x3376dc: 0xc0407c0  jal         func_101F00
label_3376e0:
    if (ctx->pc == 0x3376E0u) {
        ctx->pc = 0x3376E0u;
            // 0x3376e0: 0x24a57800  addiu       $a1, $a1, 0x7800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30720));
        ctx->pc = 0x3376E4u;
        goto label_3376e4;
    }
    ctx->pc = 0x3376DCu;
    SET_GPR_U32(ctx, 31, 0x3376E4u);
    ctx->pc = 0x3376E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3376DCu;
            // 0x3376e0: 0x24a57800  addiu       $a1, $a1, 0x7800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3376E4u; }
        if (ctx->pc != 0x3376E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3376E4u; }
        if (ctx->pc != 0x3376E4u) { return; }
    }
    ctx->pc = 0x3376E4u;
label_3376e4:
    // 0x3376e4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3376e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3376e8:
    // 0x3376e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3376ec:
    if (ctx->pc == 0x3376ECu) {
        ctx->pc = 0x3376ECu;
            // 0x3376ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3376F0u;
        goto label_3376f0;
    }
    ctx->pc = 0x3376E8u;
    {
        const bool branch_taken_0x3376e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3376e8) {
            ctx->pc = 0x3376ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3376E8u;
            // 0x3376ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3376FCu;
            goto label_3376fc;
        }
    }
    ctx->pc = 0x3376F0u;
label_3376f0:
    // 0x3376f0: 0xc07507c  jal         func_1D41F0
label_3376f4:
    if (ctx->pc == 0x3376F4u) {
        ctx->pc = 0x3376F4u;
            // 0x3376f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3376F8u;
        goto label_3376f8;
    }
    ctx->pc = 0x3376F0u;
    SET_GPR_U32(ctx, 31, 0x3376F8u);
    ctx->pc = 0x3376F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3376F0u;
            // 0x3376f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3376F8u; }
        if (ctx->pc != 0x3376F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3376F8u; }
        if (ctx->pc != 0x3376F8u) { return; }
    }
    ctx->pc = 0x3376F8u;
label_3376f8:
    // 0x3376f8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3376f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3376fc:
    // 0x3376fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_337700:
    if (ctx->pc == 0x337700u) {
        ctx->pc = 0x337700u;
            // 0x337700: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x337704u;
        goto label_337704;
    }
    ctx->pc = 0x3376FCu;
    {
        const bool branch_taken_0x3376fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3376fc) {
            ctx->pc = 0x337700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3376FCu;
            // 0x337700: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33772Cu;
            goto label_33772c;
        }
    }
    ctx->pc = 0x337704u;
label_337704:
    // 0x337704: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_337708:
    if (ctx->pc == 0x337708u) {
        ctx->pc = 0x33770Cu;
        goto label_33770c;
    }
    ctx->pc = 0x337704u;
    {
        const bool branch_taken_0x337704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337704) {
            ctx->pc = 0x337728u;
            goto label_337728;
        }
    }
    ctx->pc = 0x33770Cu;
label_33770c:
    // 0x33770c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_337710:
    if (ctx->pc == 0x337710u) {
        ctx->pc = 0x337714u;
        goto label_337714;
    }
    ctx->pc = 0x33770Cu;
    {
        const bool branch_taken_0x33770c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33770c) {
            ctx->pc = 0x337728u;
            goto label_337728;
        }
    }
    ctx->pc = 0x337714u;
label_337714:
    // 0x337714: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x337714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_337718:
    // 0x337718: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_33771c:
    if (ctx->pc == 0x33771Cu) {
        ctx->pc = 0x337720u;
        goto label_337720;
    }
    ctx->pc = 0x337718u;
    {
        const bool branch_taken_0x337718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x337718) {
            ctx->pc = 0x337728u;
            goto label_337728;
        }
    }
    ctx->pc = 0x337720u;
label_337720:
    // 0x337720: 0xc0400a8  jal         func_1002A0
label_337724:
    if (ctx->pc == 0x337724u) {
        ctx->pc = 0x337728u;
        goto label_337728;
    }
    ctx->pc = 0x337720u;
    SET_GPR_U32(ctx, 31, 0x337728u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337728u; }
        if (ctx->pc != 0x337728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337728u; }
        if (ctx->pc != 0x337728u) { return; }
    }
    ctx->pc = 0x337728u;
label_337728:
    // 0x337728: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x337728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_33772c:
    // 0x33772c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_337730:
    if (ctx->pc == 0x337730u) {
        ctx->pc = 0x337730u;
            // 0x337730: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x337734u;
        goto label_337734;
    }
    ctx->pc = 0x33772Cu;
    {
        const bool branch_taken_0x33772c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33772c) {
            ctx->pc = 0x337730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33772Cu;
            // 0x337730: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33775Cu;
            goto label_33775c;
        }
    }
    ctx->pc = 0x337734u;
label_337734:
    // 0x337734: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_337738:
    if (ctx->pc == 0x337738u) {
        ctx->pc = 0x33773Cu;
        goto label_33773c;
    }
    ctx->pc = 0x337734u;
    {
        const bool branch_taken_0x337734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337734) {
            ctx->pc = 0x337758u;
            goto label_337758;
        }
    }
    ctx->pc = 0x33773Cu;
label_33773c:
    // 0x33773c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_337740:
    if (ctx->pc == 0x337740u) {
        ctx->pc = 0x337744u;
        goto label_337744;
    }
    ctx->pc = 0x33773Cu;
    {
        const bool branch_taken_0x33773c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33773c) {
            ctx->pc = 0x337758u;
            goto label_337758;
        }
    }
    ctx->pc = 0x337744u;
label_337744:
    // 0x337744: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x337744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_337748:
    // 0x337748: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_33774c:
    if (ctx->pc == 0x33774Cu) {
        ctx->pc = 0x337750u;
        goto label_337750;
    }
    ctx->pc = 0x337748u;
    {
        const bool branch_taken_0x337748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x337748) {
            ctx->pc = 0x337758u;
            goto label_337758;
        }
    }
    ctx->pc = 0x337750u;
label_337750:
    // 0x337750: 0xc0400a8  jal         func_1002A0
label_337754:
    if (ctx->pc == 0x337754u) {
        ctx->pc = 0x337758u;
        goto label_337758;
    }
    ctx->pc = 0x337750u;
    SET_GPR_U32(ctx, 31, 0x337758u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337758u; }
        if (ctx->pc != 0x337758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337758u; }
        if (ctx->pc != 0x337758u) { return; }
    }
    ctx->pc = 0x337758u;
label_337758:
    // 0x337758: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x337758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_33775c:
    // 0x33775c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_337760:
    if (ctx->pc == 0x337760u) {
        ctx->pc = 0x337764u;
        goto label_337764;
    }
    ctx->pc = 0x33775Cu;
    {
        const bool branch_taken_0x33775c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33775c) {
            ctx->pc = 0x337778u;
            goto label_337778;
        }
    }
    ctx->pc = 0x337764u;
label_337764:
    // 0x337764: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x337764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_337768:
    // 0x337768: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x337768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33776c:
    // 0x33776c: 0x24634e08  addiu       $v1, $v1, 0x4E08
    ctx->pc = 0x33776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19976));
label_337770:
    // 0x337770: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x337770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_337774:
    // 0x337774: 0xac403e70  sw          $zero, 0x3E70($v0)
    ctx->pc = 0x337774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15984), GPR_U32(ctx, 0));
label_337778:
    // 0x337778: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_33777c:
    if (ctx->pc == 0x33777Cu) {
        ctx->pc = 0x33777Cu;
            // 0x33777c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x337780u;
        goto label_337780;
    }
    ctx->pc = 0x337778u;
    {
        const bool branch_taken_0x337778 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x337778) {
            ctx->pc = 0x33777Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337778u;
            // 0x33777c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3377D4u;
            goto label_3377d4;
        }
    }
    ctx->pc = 0x337780u;
label_337780:
    // 0x337780: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_337784:
    // 0x337784: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x337784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_337788:
    // 0x337788: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x337788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_33778c:
    // 0x33778c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x33778cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_337790:
    // 0x337790: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_337794:
    if (ctx->pc == 0x337794u) {
        ctx->pc = 0x337794u;
            // 0x337794: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x337798u;
        goto label_337798;
    }
    ctx->pc = 0x337790u;
    {
        const bool branch_taken_0x337790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x337790) {
            ctx->pc = 0x337794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337790u;
            // 0x337794: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3377ACu;
            goto label_3377ac;
        }
    }
    ctx->pc = 0x337798u;
label_337798:
    // 0x337798: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x337798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33779c:
    // 0x33779c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x33779cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3377a0:
    // 0x3377a0: 0x320f809  jalr        $t9
label_3377a4:
    if (ctx->pc == 0x3377A4u) {
        ctx->pc = 0x3377A4u;
            // 0x3377a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3377A8u;
        goto label_3377a8;
    }
    ctx->pc = 0x3377A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3377A8u);
        ctx->pc = 0x3377A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3377A0u;
            // 0x3377a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3377A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3377A8u; }
            if (ctx->pc != 0x3377A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3377A8u;
label_3377a8:
    // 0x3377a8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3377a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3377ac:
    // 0x3377ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3377b0:
    if (ctx->pc == 0x3377B0u) {
        ctx->pc = 0x3377B0u;
            // 0x3377b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3377B4u;
        goto label_3377b4;
    }
    ctx->pc = 0x3377ACu;
    {
        const bool branch_taken_0x3377ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3377ac) {
            ctx->pc = 0x3377B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3377ACu;
            // 0x3377b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3377C8u;
            goto label_3377c8;
        }
    }
    ctx->pc = 0x3377B4u;
label_3377b4:
    // 0x3377b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3377b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3377b8:
    // 0x3377b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3377b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3377bc:
    // 0x3377bc: 0x320f809  jalr        $t9
label_3377c0:
    if (ctx->pc == 0x3377C0u) {
        ctx->pc = 0x3377C0u;
            // 0x3377c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3377C4u;
        goto label_3377c4;
    }
    ctx->pc = 0x3377BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3377C4u);
        ctx->pc = 0x3377C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3377BCu;
            // 0x3377c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3377C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3377C4u; }
            if (ctx->pc != 0x3377C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3377C4u;
label_3377c4:
    // 0x3377c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3377c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3377c8:
    // 0x3377c8: 0xc075bf8  jal         func_1D6FE0
label_3377cc:
    if (ctx->pc == 0x3377CCu) {
        ctx->pc = 0x3377CCu;
            // 0x3377cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3377D0u;
        goto label_3377d0;
    }
    ctx->pc = 0x3377C8u;
    SET_GPR_U32(ctx, 31, 0x3377D0u);
    ctx->pc = 0x3377CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3377C8u;
            // 0x3377cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3377D0u; }
        if (ctx->pc != 0x3377D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3377D0u; }
        if (ctx->pc != 0x3377D0u) { return; }
    }
    ctx->pc = 0x3377D0u;
label_3377d0:
    // 0x3377d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3377d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3377d4:
    // 0x3377d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3377d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3377d8:
    // 0x3377d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3377dc:
    if (ctx->pc == 0x3377DCu) {
        ctx->pc = 0x3377DCu;
            // 0x3377dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3377E0u;
        goto label_3377e0;
    }
    ctx->pc = 0x3377D8u;
    {
        const bool branch_taken_0x3377d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3377d8) {
            ctx->pc = 0x3377DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3377D8u;
            // 0x3377dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3377ECu;
            goto label_3377ec;
        }
    }
    ctx->pc = 0x3377E0u;
label_3377e0:
    // 0x3377e0: 0xc0400a8  jal         func_1002A0
label_3377e4:
    if (ctx->pc == 0x3377E4u) {
        ctx->pc = 0x3377E4u;
            // 0x3377e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3377E8u;
        goto label_3377e8;
    }
    ctx->pc = 0x3377E0u;
    SET_GPR_U32(ctx, 31, 0x3377E8u);
    ctx->pc = 0x3377E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3377E0u;
            // 0x3377e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3377E8u; }
        if (ctx->pc != 0x3377E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3377E8u; }
        if (ctx->pc != 0x3377E8u) { return; }
    }
    ctx->pc = 0x3377E8u;
label_3377e8:
    // 0x3377e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3377e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3377ec:
    // 0x3377ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3377ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3377f0:
    // 0x3377f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3377f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3377f4:
    // 0x3377f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3377f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3377f8:
    // 0x3377f8: 0x3e00008  jr          $ra
label_3377fc:
    if (ctx->pc == 0x3377FCu) {
        ctx->pc = 0x3377FCu;
            // 0x3377fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x337800u;
        goto label_337800;
    }
    ctx->pc = 0x3377F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3377FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3377F8u;
            // 0x3377fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337800u;
label_337800:
    // 0x337800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_337804:
    // 0x337804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x337804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_337808:
    // 0x337808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33780c:
    // 0x33780c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_337810:
    // 0x337810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_337814:
    // 0x337814: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_337818:
    if (ctx->pc == 0x337818u) {
        ctx->pc = 0x337818u;
            // 0x337818: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33781Cu;
        goto label_33781c;
    }
    ctx->pc = 0x337814u;
    {
        const bool branch_taken_0x337814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x337818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337814u;
            // 0x337818: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337814) {
            ctx->pc = 0x3378DCu;
            goto label_3378dc;
        }
    }
    ctx->pc = 0x33781Cu;
label_33781c:
    // 0x33781c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33781cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_337820:
    // 0x337820: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_337824:
    // 0x337824: 0x24634ec0  addiu       $v1, $v1, 0x4EC0
    ctx->pc = 0x337824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20160));
label_337828:
    // 0x337828: 0x24424f00  addiu       $v0, $v0, 0x4F00
    ctx->pc = 0x337828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20224));
label_33782c:
    // 0x33782c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33782cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_337830:
    // 0x337830: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x337830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_337834:
    // 0x337834: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x337834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_337838:
    // 0x337838: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x337838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_33783c:
    // 0x33783c: 0x320f809  jalr        $t9
label_337840:
    if (ctx->pc == 0x337840u) {
        ctx->pc = 0x337844u;
        goto label_337844;
    }
    ctx->pc = 0x33783Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x337844u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x337844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x337844u; }
            if (ctx->pc != 0x337844u) { return; }
        }
        }
    }
    ctx->pc = 0x337844u;
label_337844:
    // 0x337844: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_337848:
    if (ctx->pc == 0x337848u) {
        ctx->pc = 0x337848u;
            // 0x337848: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x33784Cu;
        goto label_33784c;
    }
    ctx->pc = 0x337844u;
    {
        const bool branch_taken_0x337844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x337844) {
            ctx->pc = 0x337848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337844u;
            // 0x337848: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3378C8u;
            goto label_3378c8;
        }
    }
    ctx->pc = 0x33784Cu;
label_33784c:
    // 0x33784c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33784cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_337850:
    // 0x337850: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_337854:
    // 0x337854: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x337854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_337858:
    // 0x337858: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x337858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_33785c:
    // 0x33785c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33785cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_337860:
    // 0x337860: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x337860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_337864:
    // 0x337864: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x337864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_337868:
    // 0x337868: 0xc0aecc4  jal         func_2BB310
label_33786c:
    if (ctx->pc == 0x33786Cu) {
        ctx->pc = 0x33786Cu;
            // 0x33786c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x337870u;
        goto label_337870;
    }
    ctx->pc = 0x337868u;
    SET_GPR_U32(ctx, 31, 0x337870u);
    ctx->pc = 0x33786Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337868u;
            // 0x33786c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337870u; }
        if (ctx->pc != 0x337870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337870u; }
        if (ctx->pc != 0x337870u) { return; }
    }
    ctx->pc = 0x337870u;
label_337870:
    // 0x337870: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x337870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_337874:
    // 0x337874: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x337874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_337878:
    // 0x337878: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_33787c:
    if (ctx->pc == 0x33787Cu) {
        ctx->pc = 0x33787Cu;
            // 0x33787c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x337880u;
        goto label_337880;
    }
    ctx->pc = 0x337878u;
    {
        const bool branch_taken_0x337878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x337878) {
            ctx->pc = 0x33787Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337878u;
            // 0x33787c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x337894u;
            goto label_337894;
        }
    }
    ctx->pc = 0x337880u;
label_337880:
    // 0x337880: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x337880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_337884:
    // 0x337884: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x337884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_337888:
    // 0x337888: 0x320f809  jalr        $t9
label_33788c:
    if (ctx->pc == 0x33788Cu) {
        ctx->pc = 0x33788Cu;
            // 0x33788c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x337890u;
        goto label_337890;
    }
    ctx->pc = 0x337888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x337890u);
        ctx->pc = 0x33788Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337888u;
            // 0x33788c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x337890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x337890u; }
            if (ctx->pc != 0x337890u) { return; }
        }
        }
    }
    ctx->pc = 0x337890u;
label_337890:
    // 0x337890: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x337890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_337894:
    // 0x337894: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x337894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_337898:
    // 0x337898: 0xc0aec9c  jal         func_2BB270
label_33789c:
    if (ctx->pc == 0x33789Cu) {
        ctx->pc = 0x33789Cu;
            // 0x33789c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3378A0u;
        goto label_3378a0;
    }
    ctx->pc = 0x337898u;
    SET_GPR_U32(ctx, 31, 0x3378A0u);
    ctx->pc = 0x33789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337898u;
            // 0x33789c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3378A0u; }
        if (ctx->pc != 0x3378A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3378A0u; }
        if (ctx->pc != 0x3378A0u) { return; }
    }
    ctx->pc = 0x3378A0u;
label_3378a0:
    // 0x3378a0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3378a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_3378a4:
    // 0x3378a4: 0xc0aec88  jal         func_2BB220
label_3378a8:
    if (ctx->pc == 0x3378A8u) {
        ctx->pc = 0x3378A8u;
            // 0x3378a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3378ACu;
        goto label_3378ac;
    }
    ctx->pc = 0x3378A4u;
    SET_GPR_U32(ctx, 31, 0x3378ACu);
    ctx->pc = 0x3378A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3378A4u;
            // 0x3378a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3378ACu; }
        if (ctx->pc != 0x3378ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3378ACu; }
        if (ctx->pc != 0x3378ACu) { return; }
    }
    ctx->pc = 0x3378ACu;
label_3378ac:
    // 0x3378ac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3378acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3378b0:
    // 0x3378b0: 0xc0aec0c  jal         func_2BB030
label_3378b4:
    if (ctx->pc == 0x3378B4u) {
        ctx->pc = 0x3378B4u;
            // 0x3378b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3378B8u;
        goto label_3378b8;
    }
    ctx->pc = 0x3378B0u;
    SET_GPR_U32(ctx, 31, 0x3378B8u);
    ctx->pc = 0x3378B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3378B0u;
            // 0x3378b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3378B8u; }
        if (ctx->pc != 0x3378B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3378B8u; }
        if (ctx->pc != 0x3378B8u) { return; }
    }
    ctx->pc = 0x3378B8u;
label_3378b8:
    // 0x3378b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3378b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3378bc:
    // 0x3378bc: 0xc0aeaa8  jal         func_2BAAA0
label_3378c0:
    if (ctx->pc == 0x3378C0u) {
        ctx->pc = 0x3378C0u;
            // 0x3378c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3378C4u;
        goto label_3378c4;
    }
    ctx->pc = 0x3378BCu;
    SET_GPR_U32(ctx, 31, 0x3378C4u);
    ctx->pc = 0x3378C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3378BCu;
            // 0x3378c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3378C4u; }
        if (ctx->pc != 0x3378C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3378C4u; }
        if (ctx->pc != 0x3378C4u) { return; }
    }
    ctx->pc = 0x3378C4u;
label_3378c4:
    // 0x3378c4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3378c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3378c8:
    // 0x3378c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3378c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3378cc:
    // 0x3378cc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3378d0:
    if (ctx->pc == 0x3378D0u) {
        ctx->pc = 0x3378D0u;
            // 0x3378d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3378D4u;
        goto label_3378d4;
    }
    ctx->pc = 0x3378CCu;
    {
        const bool branch_taken_0x3378cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3378cc) {
            ctx->pc = 0x3378D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3378CCu;
            // 0x3378d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3378E0u;
            goto label_3378e0;
        }
    }
    ctx->pc = 0x3378D4u;
label_3378d4:
    // 0x3378d4: 0xc0400a8  jal         func_1002A0
label_3378d8:
    if (ctx->pc == 0x3378D8u) {
        ctx->pc = 0x3378D8u;
            // 0x3378d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3378DCu;
        goto label_3378dc;
    }
    ctx->pc = 0x3378D4u;
    SET_GPR_U32(ctx, 31, 0x3378DCu);
    ctx->pc = 0x3378D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3378D4u;
            // 0x3378d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3378DCu; }
        if (ctx->pc != 0x3378DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3378DCu; }
        if (ctx->pc != 0x3378DCu) { return; }
    }
    ctx->pc = 0x3378DCu;
label_3378dc:
    // 0x3378dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3378dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3378e0:
    // 0x3378e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3378e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3378e4:
    // 0x3378e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3378e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3378e8:
    // 0x3378e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3378e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3378ec:
    // 0x3378ec: 0x3e00008  jr          $ra
label_3378f0:
    if (ctx->pc == 0x3378F0u) {
        ctx->pc = 0x3378F0u;
            // 0x3378f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3378F4u;
        goto label_3378f4;
    }
    ctx->pc = 0x3378ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3378F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3378ECu;
            // 0x3378f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3378F4u;
label_3378f4:
    // 0x3378f4: 0x0  nop
    ctx->pc = 0x3378f4u;
    // NOP
label_3378f8:
    // 0x3378f8: 0x0  nop
    ctx->pc = 0x3378f8u;
    // NOP
label_3378fc:
    // 0x3378fc: 0x0  nop
    ctx->pc = 0x3378fcu;
    // NOP
label_337900:
    // 0x337900: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x337900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_337904:
    // 0x337904: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x337904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_337908:
    // 0x337908: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x337908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_33790c:
    // 0x33790c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_337910:
    // 0x337910: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x337910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_337914:
    // 0x337914: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x337914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_337918:
    // 0x337918: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x337918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_33791c:
    // 0x33791c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_337920:
    // 0x337920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_337924:
    // 0x337924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_337928:
    // 0x337928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33792c:
    // 0x33792c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x33792cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_337930:
    // 0x337930: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x337930u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_337934:
    // 0x337934: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x337934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_337938:
    // 0x337938: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_33793c:
    if (ctx->pc == 0x33793Cu) {
        ctx->pc = 0x33793Cu;
            // 0x33793c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x337940u;
        goto label_337940;
    }
    ctx->pc = 0x337938u;
    {
        const bool branch_taken_0x337938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x33793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337938u;
            // 0x33793c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337938) {
            ctx->pc = 0x33797Cu;
            goto label_33797c;
        }
    }
    ctx->pc = 0x337940u;
label_337940:
    // 0x337940: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x337940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_337944:
    // 0x337944: 0x50a3004c  beql        $a1, $v1, . + 4 + (0x4C << 2)
label_337948:
    if (ctx->pc == 0x337948u) {
        ctx->pc = 0x337948u;
            // 0x337948: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x33794Cu;
        goto label_33794c;
    }
    ctx->pc = 0x337944u;
    {
        const bool branch_taken_0x337944 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x337944) {
            ctx->pc = 0x337948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337944u;
            // 0x337948: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x337A78u;
            goto label_337a78;
        }
    }
    ctx->pc = 0x33794Cu;
label_33794c:
    // 0x33794c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_337950:
    // 0x337950: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_337954:
    if (ctx->pc == 0x337954u) {
        ctx->pc = 0x337954u;
            // 0x337954: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x337958u;
        goto label_337958;
    }
    ctx->pc = 0x337950u;
    {
        const bool branch_taken_0x337950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x337950) {
            ctx->pc = 0x337954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337950u;
            // 0x337954: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x337960u;
            goto label_337960;
        }
    }
    ctx->pc = 0x337958u;
label_337958:
    // 0x337958: 0x10000046  b           . + 4 + (0x46 << 2)
label_33795c:
    if (ctx->pc == 0x33795Cu) {
        ctx->pc = 0x337960u;
        goto label_337960;
    }
    ctx->pc = 0x337958u;
    {
        const bool branch_taken_0x337958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337958) {
            ctx->pc = 0x337A74u;
            goto label_337a74;
        }
    }
    ctx->pc = 0x337960u;
label_337960:
    // 0x337960: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x337960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_337964:
    // 0x337964: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x337964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_337968:
    // 0x337968: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x337968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_33796c:
    // 0x33796c: 0x320f809  jalr        $t9
label_337970:
    if (ctx->pc == 0x337970u) {
        ctx->pc = 0x337970u;
            // 0x337970: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x337974u;
        goto label_337974;
    }
    ctx->pc = 0x33796Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x337974u);
        ctx->pc = 0x337970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33796Cu;
            // 0x337970: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x337974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x337974u; }
            if (ctx->pc != 0x337974u) { return; }
        }
        }
    }
    ctx->pc = 0x337974u;
label_337974:
    // 0x337974: 0x1000003f  b           . + 4 + (0x3F << 2)
label_337978:
    if (ctx->pc == 0x337978u) {
        ctx->pc = 0x33797Cu;
        goto label_33797c;
    }
    ctx->pc = 0x337974u;
    {
        const bool branch_taken_0x337974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337974) {
            ctx->pc = 0x337A74u;
            goto label_337a74;
        }
    }
    ctx->pc = 0x33797Cu;
label_33797c:
    // 0x33797c: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x33797cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_337980:
    // 0x337980: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_337984:
    if (ctx->pc == 0x337984u) {
        ctx->pc = 0x337988u;
        goto label_337988;
    }
    ctx->pc = 0x337980u;
    {
        const bool branch_taken_0x337980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x337980) {
            ctx->pc = 0x337A74u;
            goto label_337a74;
        }
    }
    ctx->pc = 0x337988u;
label_337988:
    // 0x337988: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x337988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_33798c:
    // 0x33798c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33798cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_337990:
    // 0x337990: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x337990u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_337994:
    // 0x337994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337998:
    // 0x337998: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x337998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_33799c:
    // 0x33799c: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x33799cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_3379a0:
    // 0x3379a0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3379a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3379a4:
    // 0x3379a4: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x3379a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3379a8:
    // 0x3379a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3379a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3379ac:
    // 0x3379ac: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x3379acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3379b0:
    // 0x3379b0: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x3379b0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3379b4:
    // 0x3379b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3379b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3379b8:
    // 0x3379b8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x3379b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3379bc:
    // 0x3379bc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x3379bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3379c0:
    // 0x3379c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3379c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3379c4:
    // 0x3379c4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3379c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3379c8:
    // 0x3379c8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3379c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3379cc:
    // 0x3379cc: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x3379ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_3379d0:
    // 0x3379d0: 0x24b60010  addiu       $s6, $a1, 0x10
    ctx->pc = 0x3379d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3379d4:
    // 0x3379d4: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x3379d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_3379d8:
    // 0x3379d8: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x3379d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_3379dc:
    // 0x3379dc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3379dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3379e0:
    // 0x3379e0: 0xc04e4a4  jal         func_139290
label_3379e4:
    if (ctx->pc == 0x3379E4u) {
        ctx->pc = 0x3379E4u;
            // 0x3379e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3379E8u;
        goto label_3379e8;
    }
    ctx->pc = 0x3379E0u;
    SET_GPR_U32(ctx, 31, 0x3379E8u);
    ctx->pc = 0x3379E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3379E0u;
            // 0x3379e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3379E8u; }
        if (ctx->pc != 0x3379E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3379E8u; }
        if (ctx->pc != 0x3379E8u) { return; }
    }
    ctx->pc = 0x3379E8u;
label_3379e8:
    // 0x3379e8: 0xc054c40  jal         func_153100
label_3379ec:
    if (ctx->pc == 0x3379ECu) {
        ctx->pc = 0x3379ECu;
            // 0x3379ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3379F0u;
        goto label_3379f0;
    }
    ctx->pc = 0x3379E8u;
    SET_GPR_U32(ctx, 31, 0x3379F0u);
    ctx->pc = 0x3379ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3379E8u;
            // 0x3379ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3379F0u; }
        if (ctx->pc != 0x3379F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3379F0u; }
        if (ctx->pc != 0x3379F0u) { return; }
    }
    ctx->pc = 0x3379F0u;
label_3379f0:
    // 0x3379f0: 0xc04e738  jal         func_139CE0
label_3379f4:
    if (ctx->pc == 0x3379F4u) {
        ctx->pc = 0x3379F4u;
            // 0x3379f4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x3379F8u;
        goto label_3379f8;
    }
    ctx->pc = 0x3379F0u;
    SET_GPR_U32(ctx, 31, 0x3379F8u);
    ctx->pc = 0x3379F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3379F0u;
            // 0x3379f4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3379F8u; }
        if (ctx->pc != 0x3379F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3379F8u; }
        if (ctx->pc != 0x3379F8u) { return; }
    }
    ctx->pc = 0x3379F8u;
label_3379f8:
    // 0x3379f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3379f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3379fc:
    // 0x3379fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3379fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337a00:
    // 0x337a00: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x337a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_337a04:
    // 0x337a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x337a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_337a08:
    // 0x337a08: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x337a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_337a0c:
    // 0x337a0c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x337a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_337a10:
    // 0x337a10: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x337a10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_337a14:
    // 0x337a14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x337a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_337a18:
    // 0x337a18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x337a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_337a1c:
    // 0x337a1c: 0xc0ce02c  jal         func_3380B0
label_337a20:
    if (ctx->pc == 0x337A20u) {
        ctx->pc = 0x337A20u;
            // 0x337a20: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x337A24u;
        goto label_337a24;
    }
    ctx->pc = 0x337A1Cu;
    SET_GPR_U32(ctx, 31, 0x337A24u);
    ctx->pc = 0x337A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337A1Cu;
            // 0x337a20: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3380B0u;
    if (runtime->hasFunction(0x3380B0u)) {
        auto targetFn = runtime->lookupFunction(0x3380B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337A24u; }
        if (ctx->pc != 0x337A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003380B0_0x3380b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337A24u; }
        if (ctx->pc != 0x337A24u) { return; }
    }
    ctx->pc = 0x337A24u;
label_337a24:
    // 0x337a24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x337a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_337a28:
    // 0x337a28: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x337a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_337a2c:
    // 0x337a2c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_337a30:
    if (ctx->pc == 0x337A30u) {
        ctx->pc = 0x337A30u;
            // 0x337a30: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x337A34u;
        goto label_337a34;
    }
    ctx->pc = 0x337A2Cu;
    {
        const bool branch_taken_0x337a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337A2Cu;
            // 0x337a30: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a2c) {
            ctx->pc = 0x337A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_337a00;
        }
    }
    ctx->pc = 0x337A34u;
label_337a34:
    // 0x337a34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x337a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_337a38:
    // 0x337a38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x337a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_337a3c:
    // 0x337a3c: 0xc054c3c  jal         func_1530F0
label_337a40:
    if (ctx->pc == 0x337A40u) {
        ctx->pc = 0x337A40u;
            // 0x337a40: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x337A44u;
        goto label_337a44;
    }
    ctx->pc = 0x337A3Cu;
    SET_GPR_U32(ctx, 31, 0x337A44u);
    ctx->pc = 0x337A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337A3Cu;
            // 0x337a40: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337A44u; }
        if (ctx->pc != 0x337A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337A44u; }
        if (ctx->pc != 0x337A44u) { return; }
    }
    ctx->pc = 0x337A44u;
label_337a44:
    // 0x337a44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x337a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_337a48:
    // 0x337a48: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x337a48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_337a4c:
    // 0x337a4c: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_337a50:
    if (ctx->pc == 0x337A50u) {
        ctx->pc = 0x337A50u;
            // 0x337a50: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x337A54u;
        goto label_337a54;
    }
    ctx->pc = 0x337A4Cu;
    {
        const bool branch_taken_0x337a4c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x337A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337A4Cu;
            // 0x337a50: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a4c) {
            ctx->pc = 0x337A74u;
            goto label_337a74;
        }
    }
    ctx->pc = 0x337A54u;
label_337a54:
    // 0x337a54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x337a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_337a58:
    // 0x337a58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x337a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_337a5c:
    // 0x337a5c: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x337a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_337a60:
    // 0x337a60: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x337a60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_337a64:
    // 0x337a64: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x337a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_337a68:
    // 0x337a68: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x337a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_337a6c:
    // 0x337a6c: 0xc055ea8  jal         func_157AA0
label_337a70:
    if (ctx->pc == 0x337A70u) {
        ctx->pc = 0x337A70u;
            // 0x337a70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x337A74u;
        goto label_337a74;
    }
    ctx->pc = 0x337A6Cu;
    SET_GPR_U32(ctx, 31, 0x337A74u);
    ctx->pc = 0x337A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337A6Cu;
            // 0x337a70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337A74u; }
        if (ctx->pc != 0x337A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337A74u; }
        if (ctx->pc != 0x337A74u) { return; }
    }
    ctx->pc = 0x337A74u;
label_337a74:
    // 0x337a74: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x337a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_337a78:
    // 0x337a78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x337a78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_337a7c:
    // 0x337a7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x337a7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_337a80:
    // 0x337a80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x337a80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_337a84:
    // 0x337a84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x337a84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_337a88:
    // 0x337a88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x337a88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_337a8c:
    // 0x337a8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_337a90:
    // 0x337a90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_337a94:
    // 0x337a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_337a98:
    // 0x337a98: 0x3e00008  jr          $ra
label_337a9c:
    if (ctx->pc == 0x337A9Cu) {
        ctx->pc = 0x337A9Cu;
            // 0x337a9c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x337AA0u;
        goto label_337aa0;
    }
    ctx->pc = 0x337A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337A98u;
            // 0x337a9c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337AA0u;
label_337aa0:
    // 0x337aa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x337aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_337aa4:
    // 0x337aa4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x337aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_337aa8:
    // 0x337aa8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x337aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_337aac:
    // 0x337aac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x337aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_337ab0:
    // 0x337ab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_337ab4:
    // 0x337ab4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_337ab8:
    // 0x337ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_337abc:
    // 0x337abc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x337abcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_337ac0:
    // 0x337ac0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_337ac4:
    if (ctx->pc == 0x337AC4u) {
        ctx->pc = 0x337AC4u;
            // 0x337ac4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x337AC8u;
        goto label_337ac8;
    }
    ctx->pc = 0x337AC0u;
    {
        const bool branch_taken_0x337ac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x337AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337AC0u;
            // 0x337ac4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ac0) {
            ctx->pc = 0x337AF4u;
            goto label_337af4;
        }
    }
    ctx->pc = 0x337AC8u;
label_337ac8:
    // 0x337ac8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x337ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_337acc:
    // 0x337acc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_337ad0:
    if (ctx->pc == 0x337AD0u) {
        ctx->pc = 0x337AD0u;
            // 0x337ad0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x337AD4u;
        goto label_337ad4;
    }
    ctx->pc = 0x337ACCu;
    {
        const bool branch_taken_0x337acc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x337acc) {
            ctx->pc = 0x337AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337ACCu;
            // 0x337ad0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x337AE8u;
            goto label_337ae8;
        }
    }
    ctx->pc = 0x337AD4u;
label_337ad4:
    // 0x337ad4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x337ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_337ad8:
    // 0x337ad8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_337adc:
    if (ctx->pc == 0x337ADCu) {
        ctx->pc = 0x337AE0u;
        goto label_337ae0;
    }
    ctx->pc = 0x337AD8u;
    {
        const bool branch_taken_0x337ad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x337ad8) {
            ctx->pc = 0x337B28u;
            goto label_337b28;
        }
    }
    ctx->pc = 0x337AE0u;
label_337ae0:
    // 0x337ae0: 0x10000011  b           . + 4 + (0x11 << 2)
label_337ae4:
    if (ctx->pc == 0x337AE4u) {
        ctx->pc = 0x337AE8u;
        goto label_337ae8;
    }
    ctx->pc = 0x337AE0u;
    {
        const bool branch_taken_0x337ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337ae0) {
            ctx->pc = 0x337B28u;
            goto label_337b28;
        }
    }
    ctx->pc = 0x337AE8u;
label_337ae8:
    // 0x337ae8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x337ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_337aec:
    // 0x337aec: 0x320f809  jalr        $t9
label_337af0:
    if (ctx->pc == 0x337AF0u) {
        ctx->pc = 0x337AF4u;
        goto label_337af4;
    }
    ctx->pc = 0x337AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x337AF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x337AF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x337AF4u; }
            if (ctx->pc != 0x337AF4u) { return; }
        }
        }
    }
    ctx->pc = 0x337AF4u;
label_337af4:
    // 0x337af4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x337af4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_337af8:
    // 0x337af8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_337afc:
    if (ctx->pc == 0x337AFCu) {
        ctx->pc = 0x337B00u;
        goto label_337b00;
    }
    ctx->pc = 0x337AF8u;
    {
        const bool branch_taken_0x337af8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x337af8) {
            ctx->pc = 0x337B28u;
            goto label_337b28;
        }
    }
    ctx->pc = 0x337B00u;
label_337b00:
    // 0x337b00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x337b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337b04:
    // 0x337b04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x337b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337b08:
    // 0x337b08: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x337b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_337b0c:
    // 0x337b0c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x337b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_337b10:
    // 0x337b10: 0xc0e3658  jal         func_38D960
label_337b14:
    if (ctx->pc == 0x337B14u) {
        ctx->pc = 0x337B14u;
            // 0x337b14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x337B18u;
        goto label_337b18;
    }
    ctx->pc = 0x337B10u;
    SET_GPR_U32(ctx, 31, 0x337B18u);
    ctx->pc = 0x337B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337B10u;
            // 0x337b14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337B18u; }
        if (ctx->pc != 0x337B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337B18u; }
        if (ctx->pc != 0x337B18u) { return; }
    }
    ctx->pc = 0x337B18u;
label_337b18:
    // 0x337b18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x337b18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_337b1c:
    // 0x337b1c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x337b1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_337b20:
    // 0x337b20: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_337b24:
    if (ctx->pc == 0x337B24u) {
        ctx->pc = 0x337B24u;
            // 0x337b24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x337B28u;
        goto label_337b28;
    }
    ctx->pc = 0x337B20u;
    {
        const bool branch_taken_0x337b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x337B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337B20u;
            // 0x337b24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b20) {
            ctx->pc = 0x337B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_337b08;
        }
    }
    ctx->pc = 0x337B28u;
label_337b28:
    // 0x337b28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x337b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_337b2c:
    // 0x337b2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x337b2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_337b30:
    // 0x337b30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_337b34:
    // 0x337b34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_337b38:
    // 0x337b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_337b3c:
    // 0x337b3c: 0x3e00008  jr          $ra
label_337b40:
    if (ctx->pc == 0x337B40u) {
        ctx->pc = 0x337B40u;
            // 0x337b40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x337B44u;
        goto label_337b44;
    }
    ctx->pc = 0x337B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337B3Cu;
            // 0x337b40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337B44u;
label_337b44:
    // 0x337b44: 0x0  nop
    ctx->pc = 0x337b44u;
    // NOP
label_337b48:
    // 0x337b48: 0x0  nop
    ctx->pc = 0x337b48u;
    // NOP
label_337b4c:
    // 0x337b4c: 0x0  nop
    ctx->pc = 0x337b4cu;
    // NOP
label_337b50:
    // 0x337b50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x337b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_337b54:
    // 0x337b54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x337b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_337b58:
    // 0x337b58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x337b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_337b5c:
    // 0x337b5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_337b60:
    // 0x337b60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_337b64:
    // 0x337b64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_337b68:
    // 0x337b68: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x337b68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_337b6c:
    // 0x337b6c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_337b70:
    if (ctx->pc == 0x337B70u) {
        ctx->pc = 0x337B70u;
            // 0x337b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x337B74u;
        goto label_337b74;
    }
    ctx->pc = 0x337B6Cu;
    {
        const bool branch_taken_0x337b6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x337B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337B6Cu;
            // 0x337b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b6c) {
            ctx->pc = 0x337BA8u;
            goto label_337ba8;
        }
    }
    ctx->pc = 0x337B74u;
label_337b74:
    // 0x337b74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x337b74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337b78:
    // 0x337b78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x337b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337b7c:
    // 0x337b7c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x337b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_337b80:
    // 0x337b80: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x337b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_337b84:
    // 0x337b84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x337b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_337b88:
    // 0x337b88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x337b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_337b8c:
    // 0x337b8c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x337b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_337b90:
    // 0x337b90: 0x320f809  jalr        $t9
label_337b94:
    if (ctx->pc == 0x337B94u) {
        ctx->pc = 0x337B98u;
        goto label_337b98;
    }
    ctx->pc = 0x337B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x337B98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x337B98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x337B98u; }
            if (ctx->pc != 0x337B98u) { return; }
        }
        }
    }
    ctx->pc = 0x337B98u;
label_337b98:
    // 0x337b98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x337b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_337b9c:
    // 0x337b9c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x337b9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_337ba0:
    // 0x337ba0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_337ba4:
    if (ctx->pc == 0x337BA4u) {
        ctx->pc = 0x337BA4u;
            // 0x337ba4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x337BA8u;
        goto label_337ba8;
    }
    ctx->pc = 0x337BA0u;
    {
        const bool branch_taken_0x337ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x337BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337BA0u;
            // 0x337ba4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ba0) {
            ctx->pc = 0x337B7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_337b7c;
        }
    }
    ctx->pc = 0x337BA8u;
label_337ba8:
    // 0x337ba8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x337ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_337bac:
    // 0x337bac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x337bacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_337bb0:
    // 0x337bb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_337bb4:
    // 0x337bb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_337bb8:
    // 0x337bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_337bbc:
    // 0x337bbc: 0x3e00008  jr          $ra
label_337bc0:
    if (ctx->pc == 0x337BC0u) {
        ctx->pc = 0x337BC0u;
            // 0x337bc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x337BC4u;
        goto label_337bc4;
    }
    ctx->pc = 0x337BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337BBCu;
            // 0x337bc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337BC4u;
label_337bc4:
    // 0x337bc4: 0x0  nop
    ctx->pc = 0x337bc4u;
    // NOP
label_337bc8:
    // 0x337bc8: 0x0  nop
    ctx->pc = 0x337bc8u;
    // NOP
label_337bcc:
    // 0x337bcc: 0x0  nop
    ctx->pc = 0x337bccu;
    // NOP
}
