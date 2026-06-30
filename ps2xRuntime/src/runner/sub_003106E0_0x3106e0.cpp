#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003106E0
// Address: 0x3106e0 - 0x310c30
void sub_003106E0_0x3106e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003106E0_0x3106e0");
#endif

    switch (ctx->pc) {
        case 0x3106e0u: goto label_3106e0;
        case 0x3106e4u: goto label_3106e4;
        case 0x3106e8u: goto label_3106e8;
        case 0x3106ecu: goto label_3106ec;
        case 0x3106f0u: goto label_3106f0;
        case 0x3106f4u: goto label_3106f4;
        case 0x3106f8u: goto label_3106f8;
        case 0x3106fcu: goto label_3106fc;
        case 0x310700u: goto label_310700;
        case 0x310704u: goto label_310704;
        case 0x310708u: goto label_310708;
        case 0x31070cu: goto label_31070c;
        case 0x310710u: goto label_310710;
        case 0x310714u: goto label_310714;
        case 0x310718u: goto label_310718;
        case 0x31071cu: goto label_31071c;
        case 0x310720u: goto label_310720;
        case 0x310724u: goto label_310724;
        case 0x310728u: goto label_310728;
        case 0x31072cu: goto label_31072c;
        case 0x310730u: goto label_310730;
        case 0x310734u: goto label_310734;
        case 0x310738u: goto label_310738;
        case 0x31073cu: goto label_31073c;
        case 0x310740u: goto label_310740;
        case 0x310744u: goto label_310744;
        case 0x310748u: goto label_310748;
        case 0x31074cu: goto label_31074c;
        case 0x310750u: goto label_310750;
        case 0x310754u: goto label_310754;
        case 0x310758u: goto label_310758;
        case 0x31075cu: goto label_31075c;
        case 0x310760u: goto label_310760;
        case 0x310764u: goto label_310764;
        case 0x310768u: goto label_310768;
        case 0x31076cu: goto label_31076c;
        case 0x310770u: goto label_310770;
        case 0x310774u: goto label_310774;
        case 0x310778u: goto label_310778;
        case 0x31077cu: goto label_31077c;
        case 0x310780u: goto label_310780;
        case 0x310784u: goto label_310784;
        case 0x310788u: goto label_310788;
        case 0x31078cu: goto label_31078c;
        case 0x310790u: goto label_310790;
        case 0x310794u: goto label_310794;
        case 0x310798u: goto label_310798;
        case 0x31079cu: goto label_31079c;
        case 0x3107a0u: goto label_3107a0;
        case 0x3107a4u: goto label_3107a4;
        case 0x3107a8u: goto label_3107a8;
        case 0x3107acu: goto label_3107ac;
        case 0x3107b0u: goto label_3107b0;
        case 0x3107b4u: goto label_3107b4;
        case 0x3107b8u: goto label_3107b8;
        case 0x3107bcu: goto label_3107bc;
        case 0x3107c0u: goto label_3107c0;
        case 0x3107c4u: goto label_3107c4;
        case 0x3107c8u: goto label_3107c8;
        case 0x3107ccu: goto label_3107cc;
        case 0x3107d0u: goto label_3107d0;
        case 0x3107d4u: goto label_3107d4;
        case 0x3107d8u: goto label_3107d8;
        case 0x3107dcu: goto label_3107dc;
        case 0x3107e0u: goto label_3107e0;
        case 0x3107e4u: goto label_3107e4;
        case 0x3107e8u: goto label_3107e8;
        case 0x3107ecu: goto label_3107ec;
        case 0x3107f0u: goto label_3107f0;
        case 0x3107f4u: goto label_3107f4;
        case 0x3107f8u: goto label_3107f8;
        case 0x3107fcu: goto label_3107fc;
        case 0x310800u: goto label_310800;
        case 0x310804u: goto label_310804;
        case 0x310808u: goto label_310808;
        case 0x31080cu: goto label_31080c;
        case 0x310810u: goto label_310810;
        case 0x310814u: goto label_310814;
        case 0x310818u: goto label_310818;
        case 0x31081cu: goto label_31081c;
        case 0x310820u: goto label_310820;
        case 0x310824u: goto label_310824;
        case 0x310828u: goto label_310828;
        case 0x31082cu: goto label_31082c;
        case 0x310830u: goto label_310830;
        case 0x310834u: goto label_310834;
        case 0x310838u: goto label_310838;
        case 0x31083cu: goto label_31083c;
        case 0x310840u: goto label_310840;
        case 0x310844u: goto label_310844;
        case 0x310848u: goto label_310848;
        case 0x31084cu: goto label_31084c;
        case 0x310850u: goto label_310850;
        case 0x310854u: goto label_310854;
        case 0x310858u: goto label_310858;
        case 0x31085cu: goto label_31085c;
        case 0x310860u: goto label_310860;
        case 0x310864u: goto label_310864;
        case 0x310868u: goto label_310868;
        case 0x31086cu: goto label_31086c;
        case 0x310870u: goto label_310870;
        case 0x310874u: goto label_310874;
        case 0x310878u: goto label_310878;
        case 0x31087cu: goto label_31087c;
        case 0x310880u: goto label_310880;
        case 0x310884u: goto label_310884;
        case 0x310888u: goto label_310888;
        case 0x31088cu: goto label_31088c;
        case 0x310890u: goto label_310890;
        case 0x310894u: goto label_310894;
        case 0x310898u: goto label_310898;
        case 0x31089cu: goto label_31089c;
        case 0x3108a0u: goto label_3108a0;
        case 0x3108a4u: goto label_3108a4;
        case 0x3108a8u: goto label_3108a8;
        case 0x3108acu: goto label_3108ac;
        case 0x3108b0u: goto label_3108b0;
        case 0x3108b4u: goto label_3108b4;
        case 0x3108b8u: goto label_3108b8;
        case 0x3108bcu: goto label_3108bc;
        case 0x3108c0u: goto label_3108c0;
        case 0x3108c4u: goto label_3108c4;
        case 0x3108c8u: goto label_3108c8;
        case 0x3108ccu: goto label_3108cc;
        case 0x3108d0u: goto label_3108d0;
        case 0x3108d4u: goto label_3108d4;
        case 0x3108d8u: goto label_3108d8;
        case 0x3108dcu: goto label_3108dc;
        case 0x3108e0u: goto label_3108e0;
        case 0x3108e4u: goto label_3108e4;
        case 0x3108e8u: goto label_3108e8;
        case 0x3108ecu: goto label_3108ec;
        case 0x3108f0u: goto label_3108f0;
        case 0x3108f4u: goto label_3108f4;
        case 0x3108f8u: goto label_3108f8;
        case 0x3108fcu: goto label_3108fc;
        case 0x310900u: goto label_310900;
        case 0x310904u: goto label_310904;
        case 0x310908u: goto label_310908;
        case 0x31090cu: goto label_31090c;
        case 0x310910u: goto label_310910;
        case 0x310914u: goto label_310914;
        case 0x310918u: goto label_310918;
        case 0x31091cu: goto label_31091c;
        case 0x310920u: goto label_310920;
        case 0x310924u: goto label_310924;
        case 0x310928u: goto label_310928;
        case 0x31092cu: goto label_31092c;
        case 0x310930u: goto label_310930;
        case 0x310934u: goto label_310934;
        case 0x310938u: goto label_310938;
        case 0x31093cu: goto label_31093c;
        case 0x310940u: goto label_310940;
        case 0x310944u: goto label_310944;
        case 0x310948u: goto label_310948;
        case 0x31094cu: goto label_31094c;
        case 0x310950u: goto label_310950;
        case 0x310954u: goto label_310954;
        case 0x310958u: goto label_310958;
        case 0x31095cu: goto label_31095c;
        case 0x310960u: goto label_310960;
        case 0x310964u: goto label_310964;
        case 0x310968u: goto label_310968;
        case 0x31096cu: goto label_31096c;
        case 0x310970u: goto label_310970;
        case 0x310974u: goto label_310974;
        case 0x310978u: goto label_310978;
        case 0x31097cu: goto label_31097c;
        case 0x310980u: goto label_310980;
        case 0x310984u: goto label_310984;
        case 0x310988u: goto label_310988;
        case 0x31098cu: goto label_31098c;
        case 0x310990u: goto label_310990;
        case 0x310994u: goto label_310994;
        case 0x310998u: goto label_310998;
        case 0x31099cu: goto label_31099c;
        case 0x3109a0u: goto label_3109a0;
        case 0x3109a4u: goto label_3109a4;
        case 0x3109a8u: goto label_3109a8;
        case 0x3109acu: goto label_3109ac;
        case 0x3109b0u: goto label_3109b0;
        case 0x3109b4u: goto label_3109b4;
        case 0x3109b8u: goto label_3109b8;
        case 0x3109bcu: goto label_3109bc;
        case 0x3109c0u: goto label_3109c0;
        case 0x3109c4u: goto label_3109c4;
        case 0x3109c8u: goto label_3109c8;
        case 0x3109ccu: goto label_3109cc;
        case 0x3109d0u: goto label_3109d0;
        case 0x3109d4u: goto label_3109d4;
        case 0x3109d8u: goto label_3109d8;
        case 0x3109dcu: goto label_3109dc;
        case 0x3109e0u: goto label_3109e0;
        case 0x3109e4u: goto label_3109e4;
        case 0x3109e8u: goto label_3109e8;
        case 0x3109ecu: goto label_3109ec;
        case 0x3109f0u: goto label_3109f0;
        case 0x3109f4u: goto label_3109f4;
        case 0x3109f8u: goto label_3109f8;
        case 0x3109fcu: goto label_3109fc;
        case 0x310a00u: goto label_310a00;
        case 0x310a04u: goto label_310a04;
        case 0x310a08u: goto label_310a08;
        case 0x310a0cu: goto label_310a0c;
        case 0x310a10u: goto label_310a10;
        case 0x310a14u: goto label_310a14;
        case 0x310a18u: goto label_310a18;
        case 0x310a1cu: goto label_310a1c;
        case 0x310a20u: goto label_310a20;
        case 0x310a24u: goto label_310a24;
        case 0x310a28u: goto label_310a28;
        case 0x310a2cu: goto label_310a2c;
        case 0x310a30u: goto label_310a30;
        case 0x310a34u: goto label_310a34;
        case 0x310a38u: goto label_310a38;
        case 0x310a3cu: goto label_310a3c;
        case 0x310a40u: goto label_310a40;
        case 0x310a44u: goto label_310a44;
        case 0x310a48u: goto label_310a48;
        case 0x310a4cu: goto label_310a4c;
        case 0x310a50u: goto label_310a50;
        case 0x310a54u: goto label_310a54;
        case 0x310a58u: goto label_310a58;
        case 0x310a5cu: goto label_310a5c;
        case 0x310a60u: goto label_310a60;
        case 0x310a64u: goto label_310a64;
        case 0x310a68u: goto label_310a68;
        case 0x310a6cu: goto label_310a6c;
        case 0x310a70u: goto label_310a70;
        case 0x310a74u: goto label_310a74;
        case 0x310a78u: goto label_310a78;
        case 0x310a7cu: goto label_310a7c;
        case 0x310a80u: goto label_310a80;
        case 0x310a84u: goto label_310a84;
        case 0x310a88u: goto label_310a88;
        case 0x310a8cu: goto label_310a8c;
        case 0x310a90u: goto label_310a90;
        case 0x310a94u: goto label_310a94;
        case 0x310a98u: goto label_310a98;
        case 0x310a9cu: goto label_310a9c;
        case 0x310aa0u: goto label_310aa0;
        case 0x310aa4u: goto label_310aa4;
        case 0x310aa8u: goto label_310aa8;
        case 0x310aacu: goto label_310aac;
        case 0x310ab0u: goto label_310ab0;
        case 0x310ab4u: goto label_310ab4;
        case 0x310ab8u: goto label_310ab8;
        case 0x310abcu: goto label_310abc;
        case 0x310ac0u: goto label_310ac0;
        case 0x310ac4u: goto label_310ac4;
        case 0x310ac8u: goto label_310ac8;
        case 0x310accu: goto label_310acc;
        case 0x310ad0u: goto label_310ad0;
        case 0x310ad4u: goto label_310ad4;
        case 0x310ad8u: goto label_310ad8;
        case 0x310adcu: goto label_310adc;
        case 0x310ae0u: goto label_310ae0;
        case 0x310ae4u: goto label_310ae4;
        case 0x310ae8u: goto label_310ae8;
        case 0x310aecu: goto label_310aec;
        case 0x310af0u: goto label_310af0;
        case 0x310af4u: goto label_310af4;
        case 0x310af8u: goto label_310af8;
        case 0x310afcu: goto label_310afc;
        case 0x310b00u: goto label_310b00;
        case 0x310b04u: goto label_310b04;
        case 0x310b08u: goto label_310b08;
        case 0x310b0cu: goto label_310b0c;
        case 0x310b10u: goto label_310b10;
        case 0x310b14u: goto label_310b14;
        case 0x310b18u: goto label_310b18;
        case 0x310b1cu: goto label_310b1c;
        case 0x310b20u: goto label_310b20;
        case 0x310b24u: goto label_310b24;
        case 0x310b28u: goto label_310b28;
        case 0x310b2cu: goto label_310b2c;
        case 0x310b30u: goto label_310b30;
        case 0x310b34u: goto label_310b34;
        case 0x310b38u: goto label_310b38;
        case 0x310b3cu: goto label_310b3c;
        case 0x310b40u: goto label_310b40;
        case 0x310b44u: goto label_310b44;
        case 0x310b48u: goto label_310b48;
        case 0x310b4cu: goto label_310b4c;
        case 0x310b50u: goto label_310b50;
        case 0x310b54u: goto label_310b54;
        case 0x310b58u: goto label_310b58;
        case 0x310b5cu: goto label_310b5c;
        case 0x310b60u: goto label_310b60;
        case 0x310b64u: goto label_310b64;
        case 0x310b68u: goto label_310b68;
        case 0x310b6cu: goto label_310b6c;
        case 0x310b70u: goto label_310b70;
        case 0x310b74u: goto label_310b74;
        case 0x310b78u: goto label_310b78;
        case 0x310b7cu: goto label_310b7c;
        case 0x310b80u: goto label_310b80;
        case 0x310b84u: goto label_310b84;
        case 0x310b88u: goto label_310b88;
        case 0x310b8cu: goto label_310b8c;
        case 0x310b90u: goto label_310b90;
        case 0x310b94u: goto label_310b94;
        case 0x310b98u: goto label_310b98;
        case 0x310b9cu: goto label_310b9c;
        case 0x310ba0u: goto label_310ba0;
        case 0x310ba4u: goto label_310ba4;
        case 0x310ba8u: goto label_310ba8;
        case 0x310bacu: goto label_310bac;
        case 0x310bb0u: goto label_310bb0;
        case 0x310bb4u: goto label_310bb4;
        case 0x310bb8u: goto label_310bb8;
        case 0x310bbcu: goto label_310bbc;
        case 0x310bc0u: goto label_310bc0;
        case 0x310bc4u: goto label_310bc4;
        case 0x310bc8u: goto label_310bc8;
        case 0x310bccu: goto label_310bcc;
        case 0x310bd0u: goto label_310bd0;
        case 0x310bd4u: goto label_310bd4;
        case 0x310bd8u: goto label_310bd8;
        case 0x310bdcu: goto label_310bdc;
        case 0x310be0u: goto label_310be0;
        case 0x310be4u: goto label_310be4;
        case 0x310be8u: goto label_310be8;
        case 0x310becu: goto label_310bec;
        case 0x310bf0u: goto label_310bf0;
        case 0x310bf4u: goto label_310bf4;
        case 0x310bf8u: goto label_310bf8;
        case 0x310bfcu: goto label_310bfc;
        case 0x310c00u: goto label_310c00;
        case 0x310c04u: goto label_310c04;
        case 0x310c08u: goto label_310c08;
        case 0x310c0cu: goto label_310c0c;
        case 0x310c10u: goto label_310c10;
        case 0x310c14u: goto label_310c14;
        case 0x310c18u: goto label_310c18;
        case 0x310c1cu: goto label_310c1c;
        case 0x310c20u: goto label_310c20;
        case 0x310c24u: goto label_310c24;
        case 0x310c28u: goto label_310c28;
        case 0x310c2cu: goto label_310c2c;
        default: break;
    }

    ctx->pc = 0x3106e0u;

label_3106e0:
    // 0x3106e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3106e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3106e4:
    // 0x3106e4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3106e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3106e8:
    // 0x3106e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3106e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3106ec:
    // 0x3106ec: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3106ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3106f0:
    // 0x3106f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3106f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3106f4:
    // 0x3106f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3106f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3106f8:
    // 0x3106f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3106f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3106fc:
    // 0x3106fc: 0xc10f6ec  jal         func_43DBB0
label_310700:
    if (ctx->pc == 0x310700u) {
        ctx->pc = 0x310700u;
            // 0x310700: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310704u;
        goto label_310704;
    }
    ctx->pc = 0x3106FCu;
    SET_GPR_U32(ctx, 31, 0x310704u);
    ctx->pc = 0x310700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3106FCu;
            // 0x310700: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310704u; }
        if (ctx->pc != 0x310704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310704u; }
        if (ctx->pc != 0x310704u) { return; }
    }
    ctx->pc = 0x310704u;
label_310704:
    // 0x310704: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x310704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_310708:
    // 0x310708: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x310708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_31070c:
    // 0x31070c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31070cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_310710:
    // 0x310710: 0x24634220  addiu       $v1, $v1, 0x4220
    ctx->pc = 0x310710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16928));
label_310714:
    // 0x310714: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x310714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_310718:
    // 0x310718: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x310718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_31071c:
    // 0x31071c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x31071cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_310720:
    // 0x310720: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x310720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_310724:
    // 0x310724: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x310724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_310728:
    // 0x310728: 0xc04cbd8  jal         func_132F60
label_31072c:
    if (ctx->pc == 0x31072Cu) {
        ctx->pc = 0x31072Cu;
            // 0x31072c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x310730u;
        goto label_310730;
    }
    ctx->pc = 0x310728u;
    SET_GPR_U32(ctx, 31, 0x310730u);
    ctx->pc = 0x31072Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310728u;
            // 0x31072c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310730u; }
        if (ctx->pc != 0x310730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310730u; }
        if (ctx->pc != 0x310730u) { return; }
    }
    ctx->pc = 0x310730u;
label_310730:
    // 0x310730: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x310730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_310734:
    // 0x310734: 0xc04cc04  jal         func_133010
label_310738:
    if (ctx->pc == 0x310738u) {
        ctx->pc = 0x310738u;
            // 0x310738: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x31073Cu;
        goto label_31073c;
    }
    ctx->pc = 0x310734u;
    SET_GPR_U32(ctx, 31, 0x31073Cu);
    ctx->pc = 0x310738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310734u;
            // 0x310738: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31073Cu; }
        if (ctx->pc != 0x31073Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31073Cu; }
        if (ctx->pc != 0x31073Cu) { return; }
    }
    ctx->pc = 0x31073Cu;
label_31073c:
    // 0x31073c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_310740:
    // 0x310740: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x310740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_310744:
    // 0x310744: 0xc040180  jal         func_100600
label_310748:
    if (ctx->pc == 0x310748u) {
        ctx->pc = 0x310748u;
            // 0x310748: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x31074Cu;
        goto label_31074c;
    }
    ctx->pc = 0x310744u;
    SET_GPR_U32(ctx, 31, 0x31074Cu);
    ctx->pc = 0x310748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310744u;
            // 0x310748: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31074Cu; }
        if (ctx->pc != 0x31074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31074Cu; }
        if (ctx->pc != 0x31074Cu) { return; }
    }
    ctx->pc = 0x31074Cu;
label_31074c:
    // 0x31074c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_310750:
    if (ctx->pc == 0x310750u) {
        ctx->pc = 0x310750u;
            // 0x310750: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x310754u;
        goto label_310754;
    }
    ctx->pc = 0x31074Cu;
    {
        const bool branch_taken_0x31074c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31074c) {
            ctx->pc = 0x310750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31074Cu;
            // 0x310750: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x310770u;
            goto label_310770;
        }
    }
    ctx->pc = 0x310754u;
label_310754:
    // 0x310754: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x310754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_310758:
    // 0x310758: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x310758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_31075c:
    // 0x31075c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310760:
    // 0x310760: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x310760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_310764:
    // 0x310764: 0xc0c3f60  jal         func_30FD80
label_310768:
    if (ctx->pc == 0x310768u) {
        ctx->pc = 0x310768u;
            // 0x310768: 0x24c6f5c0  addiu       $a2, $a2, -0xA40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964672));
        ctx->pc = 0x31076Cu;
        goto label_31076c;
    }
    ctx->pc = 0x310764u;
    SET_GPR_U32(ctx, 31, 0x31076Cu);
    ctx->pc = 0x310768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310764u;
            // 0x310768: 0x24c6f5c0  addiu       $a2, $a2, -0xA40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31076Cu; }
        if (ctx->pc != 0x31076Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31076Cu; }
        if (ctx->pc != 0x31076Cu) { return; }
    }
    ctx->pc = 0x31076Cu;
label_31076c:
    // 0x31076c: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x31076cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_310770:
    // 0x310770: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x310770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_310774:
    // 0x310774: 0x94460064  lhu         $a2, 0x64($v0)
    ctx->pc = 0x310774u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
label_310778:
    // 0x310778: 0x26040ec0  addiu       $a0, $s0, 0xEC0
    ctx->pc = 0x310778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_31077c:
    // 0x31077c: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x31077cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_310780:
    // 0x310780: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x310780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
label_310784:
    // 0x310784: 0xa4460064  sh          $a2, 0x64($v0)
    ctx->pc = 0x310784u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 6));
label_310788:
    // 0x310788: 0xac4500c0  sw          $a1, 0xC0($v0)
    ctx->pc = 0x310788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 5));
label_31078c:
    // 0x31078c: 0xac4400c4  sw          $a0, 0xC4($v0)
    ctx->pc = 0x31078cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 4));
label_310790:
    // 0x310790: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x310790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
label_310794:
    // 0x310794: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x310794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_310798:
    // 0x310798: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x310798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31079c:
    // 0x31079c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x31079cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3107a0:
    // 0x3107a0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3107a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_3107a4:
    // 0x3107a4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3107a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_3107a8:
    // 0x3107a8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3107a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3107ac:
    // 0x3107ac: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3107acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3107b0:
    // 0x3107b0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x3107b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_3107b4:
    // 0x3107b4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3107b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_3107b8:
    // 0x3107b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3107b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3107bc:
    // 0x3107bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3107bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3107c0:
    // 0x3107c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3107c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3107c4:
    // 0x3107c4: 0x3e00008  jr          $ra
label_3107c8:
    if (ctx->pc == 0x3107C8u) {
        ctx->pc = 0x3107C8u;
            // 0x3107c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3107CCu;
        goto label_3107cc;
    }
    ctx->pc = 0x3107C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3107C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3107C4u;
            // 0x3107c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3107CCu;
label_3107cc:
    // 0x3107cc: 0x0  nop
    ctx->pc = 0x3107ccu;
    // NOP
label_3107d0:
    // 0x3107d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3107d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3107d4:
    // 0x3107d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3107d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3107d8:
    // 0x3107d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3107d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3107dc:
    // 0x3107dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3107dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3107e0:
    // 0x3107e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3107e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3107e4:
    // 0x3107e4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_3107e8:
    if (ctx->pc == 0x3107E8u) {
        ctx->pc = 0x3107E8u;
            // 0x3107e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3107ECu;
        goto label_3107ec;
    }
    ctx->pc = 0x3107E4u;
    {
        const bool branch_taken_0x3107e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3107E4u;
            // 0x3107e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107e4) {
            ctx->pc = 0x310848u;
            goto label_310848;
        }
    }
    ctx->pc = 0x3107ECu;
label_3107ec:
    // 0x3107ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3107ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3107f0:
    // 0x3107f0: 0x24424220  addiu       $v0, $v0, 0x4220
    ctx->pc = 0x3107f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16928));
label_3107f4:
    // 0x3107f4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3107f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3107f8:
    // 0x3107f8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3107f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3107fc:
    // 0x3107fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3107fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_310800:
    // 0x310800: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x310800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_310804:
    // 0x310804: 0x320f809  jalr        $t9
label_310808:
    if (ctx->pc == 0x310808u) {
        ctx->pc = 0x310808u;
            // 0x310808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31080Cu;
        goto label_31080c;
    }
    ctx->pc = 0x310804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31080Cu);
        ctx->pc = 0x310808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310804u;
            // 0x310808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31080Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31080Cu; }
            if (ctx->pc != 0x31080Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31080Cu;
label_31080c:
    // 0x31080c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_310810:
    if (ctx->pc == 0x310810u) {
        ctx->pc = 0x310810u;
            // 0x310810: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x310814u;
        goto label_310814;
    }
    ctx->pc = 0x31080Cu;
    {
        const bool branch_taken_0x31080c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31080c) {
            ctx->pc = 0x310810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31080Cu;
            // 0x310810: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x310834u;
            goto label_310834;
        }
    }
    ctx->pc = 0x310814u;
label_310814:
    // 0x310814: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x310814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_310818:
    // 0x310818: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x310818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_31081c:
    // 0x31081c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_310820:
    if (ctx->pc == 0x310820u) {
        ctx->pc = 0x310820u;
            // 0x310820: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x310824u;
        goto label_310824;
    }
    ctx->pc = 0x31081Cu;
    {
        const bool branch_taken_0x31081c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x310820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31081Cu;
            // 0x310820: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31081c) {
            ctx->pc = 0x310830u;
            goto label_310830;
        }
    }
    ctx->pc = 0x310824u;
label_310824:
    // 0x310824: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x310824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_310828:
    // 0x310828: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x310828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_31082c:
    // 0x31082c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x31082cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_310830:
    // 0x310830: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x310830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_310834:
    // 0x310834: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x310834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_310838:
    // 0x310838: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_31083c:
    if (ctx->pc == 0x31083Cu) {
        ctx->pc = 0x31083Cu;
            // 0x31083c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310840u;
        goto label_310840;
    }
    ctx->pc = 0x310838u;
    {
        const bool branch_taken_0x310838 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x310838) {
            ctx->pc = 0x31083Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310838u;
            // 0x31083c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31084Cu;
            goto label_31084c;
        }
    }
    ctx->pc = 0x310840u;
label_310840:
    // 0x310840: 0xc0400a8  jal         func_1002A0
label_310844:
    if (ctx->pc == 0x310844u) {
        ctx->pc = 0x310844u;
            // 0x310844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310848u;
        goto label_310848;
    }
    ctx->pc = 0x310840u;
    SET_GPR_U32(ctx, 31, 0x310848u);
    ctx->pc = 0x310844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310840u;
            // 0x310844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310848u; }
        if (ctx->pc != 0x310848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310848u; }
        if (ctx->pc != 0x310848u) { return; }
    }
    ctx->pc = 0x310848u;
label_310848:
    // 0x310848: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x310848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31084c:
    // 0x31084c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31084cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_310850:
    // 0x310850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_310854:
    // 0x310854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_310858:
    // 0x310858: 0x3e00008  jr          $ra
label_31085c:
    if (ctx->pc == 0x31085Cu) {
        ctx->pc = 0x31085Cu;
            // 0x31085c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x310860u;
        goto label_310860;
    }
    ctx->pc = 0x310858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310858u;
            // 0x31085c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310860u;
label_310860:
    // 0x310860: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x310860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_310864:
    // 0x310864: 0x3e00008  jr          $ra
label_310868:
    if (ctx->pc == 0x310868u) {
        ctx->pc = 0x310868u;
            // 0x310868: 0xc440bc00  lwc1        $f0, -0x4400($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x31086Cu;
        goto label_31086c;
    }
    ctx->pc = 0x310864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310864u;
            // 0x310868: 0xc440bc00  lwc1        $f0, -0x4400($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31086Cu;
label_31086c:
    // 0x31086c: 0x0  nop
    ctx->pc = 0x31086cu;
    // NOP
label_310870:
    // 0x310870: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x310870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_310874:
    // 0x310874: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x310874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_310878:
    // 0x310878: 0xc440bc00  lwc1        $f0, -0x4400($v0)
    ctx->pc = 0x310878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31087c:
    // 0x31087c: 0x3e00008  jr          $ra
label_310880:
    if (ctx->pc == 0x310880u) {
        ctx->pc = 0x310880u;
            // 0x310880: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x310884u;
        goto label_310884;
    }
    ctx->pc = 0x31087Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31087Cu;
            // 0x310880: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310884u;
label_310884:
    // 0x310884: 0x0  nop
    ctx->pc = 0x310884u;
    // NOP
label_310888:
    // 0x310888: 0x0  nop
    ctx->pc = 0x310888u;
    // NOP
label_31088c:
    // 0x31088c: 0x0  nop
    ctx->pc = 0x31088cu;
    // NOP
label_310890:
    // 0x310890: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x310890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_310894:
    // 0x310894: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x310894u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_310898:
    // 0x310898: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x310898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_31089c:
    // 0x31089c: 0x24c60e84  addiu       $a2, $a2, 0xE84
    ctx->pc = 0x31089cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3716));
label_3108a0:
    // 0x3108a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3108a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3108a4:
    // 0x3108a4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3108a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3108a8:
    // 0x3108a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3108a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3108ac:
    // 0x3108ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3108acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3108b0:
    // 0x3108b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3108b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3108b4:
    // 0x3108b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3108b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3108b8:
    // 0x3108b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3108b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3108bc:
    // 0x3108bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3108bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3108c0:
    // 0x3108c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3108c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3108c4:
    // 0x3108c4: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x3108c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3108c8:
    // 0x3108c8: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x3108c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3108cc:
    // 0x3108cc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x3108ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3108d0:
    // 0x3108d0: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x3108d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3108d4:
    // 0x3108d4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3108d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3108d8:
    // 0x3108d8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3108d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3108dc:
    // 0x3108dc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3108dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3108e0:
    // 0x3108e0: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x3108e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3108e4:
    // 0x3108e4: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x3108e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3108e8:
    // 0x3108e8: 0x80c611aa  lb          $a2, 0x11AA($a2)
    ctx->pc = 0x3108e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4522)));
label_3108ec:
    // 0x3108ec: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3108ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_3108f0:
    // 0x3108f0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3108f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3108f4:
    // 0x3108f4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3108f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3108f8:
    // 0x3108f8: 0x1483004b  bne         $a0, $v1, . + 4 + (0x4B << 2)
label_3108fc:
    if (ctx->pc == 0x3108FCu) {
        ctx->pc = 0x3108FCu;
            // 0x3108fc: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x310900u;
        goto label_310900;
    }
    ctx->pc = 0x3108F8u;
    {
        const bool branch_taken_0x3108f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3108FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3108F8u;
            // 0x3108fc: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108f8) {
            ctx->pc = 0x310A28u;
            goto label_310a28;
        }
    }
    ctx->pc = 0x310900u;
label_310900:
    // 0x310900: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310904:
    // 0x310904: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x310904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_310908:
    // 0x310908: 0x8c53e370  lw          $s3, -0x1C90($v0)
    ctx->pc = 0x310908u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_31090c:
    // 0x31090c: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x31090cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_310910:
    // 0x310910: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x310910u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_310914:
    // 0x310914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x310914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310918:
    // 0x310918: 0x2652f7d0  addiu       $s2, $s2, -0x830
    ctx->pc = 0x310918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965200));
label_31091c:
    // 0x31091c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_310920:
    // 0x310920: 0x8c56f7f4  lw          $s6, -0x80C($v0)
    ctx->pc = 0x310920u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965236)));
label_310924:
    // 0x310924: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x310924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_310928:
    // 0x310928: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x310928u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_31092c:
    // 0x31092c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x31092cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_310930:
    // 0x310930: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x310930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_310934:
    // 0x310934: 0x320f809  jalr        $t9
label_310938:
    if (ctx->pc == 0x310938u) {
        ctx->pc = 0x310938u;
            // 0x310938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31093Cu;
        goto label_31093c;
    }
    ctx->pc = 0x310934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31093Cu);
        ctx->pc = 0x310938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310934u;
            // 0x310938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31093Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31093Cu; }
            if (ctx->pc != 0x31093Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31093Cu;
label_31093c:
    // 0x31093c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x31093cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_310940:
    // 0x310940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x310940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_310944:
    // 0x310944: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x310944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_310948:
    // 0x310948: 0x320f809  jalr        $t9
label_31094c:
    if (ctx->pc == 0x31094Cu) {
        ctx->pc = 0x31094Cu;
            // 0x31094c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310950u;
        goto label_310950;
    }
    ctx->pc = 0x310948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x310950u);
        ctx->pc = 0x31094Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310948u;
            // 0x31094c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x310950u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x310950u; }
            if (ctx->pc != 0x310950u) { return; }
        }
        }
    }
    ctx->pc = 0x310950u;
label_310950:
    // 0x310950: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x310950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_310954:
    // 0x310954: 0xc04f674  jal         func_13D9D0
label_310958:
    if (ctx->pc == 0x310958u) {
        ctx->pc = 0x310958u;
            // 0x310958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31095Cu;
        goto label_31095c;
    }
    ctx->pc = 0x310954u;
    SET_GPR_U32(ctx, 31, 0x31095Cu);
    ctx->pc = 0x310958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310954u;
            // 0x310958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31095Cu; }
        if (ctx->pc != 0x31095Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31095Cu; }
        if (ctx->pc != 0x31095Cu) { return; }
    }
    ctx->pc = 0x31095Cu;
label_31095c:
    // 0x31095c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_310960:
    // 0x310960: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x310960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_310964:
    // 0x310964: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x310964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_310968:
    // 0x310968: 0xc04e4a4  jal         func_139290
label_31096c:
    if (ctx->pc == 0x31096Cu) {
        ctx->pc = 0x31096Cu;
            // 0x31096c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310970u;
        goto label_310970;
    }
    ctx->pc = 0x310968u;
    SET_GPR_U32(ctx, 31, 0x310970u);
    ctx->pc = 0x31096Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310968u;
            // 0x31096c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310970u; }
        if (ctx->pc != 0x310970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310970u; }
        if (ctx->pc != 0x310970u) { return; }
    }
    ctx->pc = 0x310970u;
label_310970:
    // 0x310970: 0xc04f26c  jal         func_13C9B0
label_310974:
    if (ctx->pc == 0x310974u) {
        ctx->pc = 0x310974u;
            // 0x310974: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x310978u;
        goto label_310978;
    }
    ctx->pc = 0x310970u;
    SET_GPR_U32(ctx, 31, 0x310978u);
    ctx->pc = 0x310974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310970u;
            // 0x310974: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310978u; }
        if (ctx->pc != 0x310978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310978u; }
        if (ctx->pc != 0x310978u) { return; }
    }
    ctx->pc = 0x310978u;
label_310978:
    // 0x310978: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x310978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_31097c:
    // 0x31097c: 0xc44cf600  lwc1        $f12, -0xA00($v0)
    ctx->pc = 0x31097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_310980:
    // 0x310980: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x310980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_310984:
    // 0x310984: 0xc44df604  lwc1        $f13, -0x9FC($v0)
    ctx->pc = 0x310984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_310988:
    // 0x310988: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x310988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_31098c:
    // 0x31098c: 0xc44ef608  lwc1        $f14, -0x9F8($v0)
    ctx->pc = 0x31098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_310990:
    // 0x310990: 0xc04f3fc  jal         func_13CFF0
label_310994:
    if (ctx->pc == 0x310994u) {
        ctx->pc = 0x310994u;
            // 0x310994: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x310998u;
        goto label_310998;
    }
    ctx->pc = 0x310990u;
    SET_GPR_U32(ctx, 31, 0x310998u);
    ctx->pc = 0x310994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310990u;
            // 0x310994: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310998u; }
        if (ctx->pc != 0x310998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310998u; }
        if (ctx->pc != 0x310998u) { return; }
    }
    ctx->pc = 0x310998u;
label_310998:
    // 0x310998: 0xc6ac0060  lwc1        $f12, 0x60($s5)
    ctx->pc = 0x310998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_31099c:
    // 0x31099c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3109a0:
    // 0x3109a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3109a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3109a4:
    // 0x3109a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3109a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3109a8:
    // 0x3109a8: 0xc04ce50  jal         func_133940
label_3109ac:
    if (ctx->pc == 0x3109ACu) {
        ctx->pc = 0x3109ACu;
            // 0x3109ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3109B0u;
        goto label_3109b0;
    }
    ctx->pc = 0x3109A8u;
    SET_GPR_U32(ctx, 31, 0x3109B0u);
    ctx->pc = 0x3109ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3109A8u;
            // 0x3109ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3109B0u; }
        if (ctx->pc != 0x3109B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3109B0u; }
        if (ctx->pc != 0x3109B0u) { return; }
    }
    ctx->pc = 0x3109B0u;
label_3109b0:
    // 0x3109b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3109b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3109b4:
    // 0x3109b4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3109b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3109b8:
    // 0x3109b8: 0x8c44e360  lw          $a0, -0x1CA0($v0)
    ctx->pc = 0x3109b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_3109bc:
    // 0x3109bc: 0xc6ac0068  lwc1        $f12, 0x68($s5)
    ctx->pc = 0x3109bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3109c0:
    // 0x3109c0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3109c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3109c4:
    // 0x3109c4: 0xc0528ec  jal         func_14A3B0
label_3109c8:
    if (ctx->pc == 0x3109C8u) {
        ctx->pc = 0x3109C8u;
            // 0x3109c8: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3109CCu;
        goto label_3109cc;
    }
    ctx->pc = 0x3109C4u;
    SET_GPR_U32(ctx, 31, 0x3109CCu);
    ctx->pc = 0x3109C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3109C4u;
            // 0x3109c8: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3109CCu; }
        if (ctx->pc != 0x3109CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3109CCu; }
        if (ctx->pc != 0x3109CCu) { return; }
    }
    ctx->pc = 0x3109CCu;
label_3109cc:
    // 0x3109cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3109ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3109d0:
    // 0x3109d0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3109d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3109d4:
    // 0x3109d4: 0x8c46e360  lw          $a2, -0x1CA0($v0)
    ctx->pc = 0x3109d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_3109d8:
    // 0x3109d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3109d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3109dc:
    // 0x3109dc: 0xc0529c4  jal         func_14A710
label_3109e0:
    if (ctx->pc == 0x3109E0u) {
        ctx->pc = 0x3109E0u;
            // 0x3109e0: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3109E4u;
        goto label_3109e4;
    }
    ctx->pc = 0x3109DCu;
    SET_GPR_U32(ctx, 31, 0x3109E4u);
    ctx->pc = 0x3109E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3109DCu;
            // 0x3109e0: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A710u;
    if (runtime->hasFunction(0x14A710u)) {
        auto targetFn = runtime->lookupFunction(0x14A710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3109E4u; }
        if (ctx->pc != 0x3109E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A710_0x14a710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3109E4u; }
        if (ctx->pc != 0x3109E4u) { return; }
    }
    ctx->pc = 0x3109E4u;
label_3109e4:
    // 0x3109e4: 0xc04e738  jal         func_139CE0
label_3109e8:
    if (ctx->pc == 0x3109E8u) {
        ctx->pc = 0x3109E8u;
            // 0x3109e8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x3109ECu;
        goto label_3109ec;
    }
    ctx->pc = 0x3109E4u;
    SET_GPR_U32(ctx, 31, 0x3109ECu);
    ctx->pc = 0x3109E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3109E4u;
            // 0x3109e8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3109ECu; }
        if (ctx->pc != 0x3109ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3109ECu; }
        if (ctx->pc != 0x3109ECu) { return; }
    }
    ctx->pc = 0x3109ECu;
label_3109ec:
    // 0x3109ec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3109ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3109f0:
    // 0x3109f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3109f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3109f4:
    // 0x3109f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3109f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3109f8:
    // 0x3109f8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3109f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3109fc:
    // 0x3109fc: 0xc050044  jal         func_140110
label_310a00:
    if (ctx->pc == 0x310A00u) {
        ctx->pc = 0x310A00u;
            // 0x310a00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310A04u;
        goto label_310a04;
    }
    ctx->pc = 0x3109FCu;
    SET_GPR_U32(ctx, 31, 0x310A04u);
    ctx->pc = 0x310A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3109FCu;
            // 0x310a00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310A04u; }
        if (ctx->pc != 0x310A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310A04u; }
        if (ctx->pc != 0x310A04u) { return; }
    }
    ctx->pc = 0x310A04u;
label_310a04:
    // 0x310a04: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x310a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_310a08:
    // 0x310a08: 0xc04f674  jal         func_13D9D0
label_310a0c:
    if (ctx->pc == 0x310A0Cu) {
        ctx->pc = 0x310A0Cu;
            // 0x310a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310A10u;
        goto label_310a10;
    }
    ctx->pc = 0x310A08u;
    SET_GPR_U32(ctx, 31, 0x310A10u);
    ctx->pc = 0x310A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310A08u;
            // 0x310a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310A10u; }
        if (ctx->pc != 0x310A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310A10u; }
        if (ctx->pc != 0x310A10u) { return; }
    }
    ctx->pc = 0x310A10u;
label_310a10:
    // 0x310a10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x310a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_310a14:
    // 0x310a14: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x310a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_310a18:
    // 0x310a18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x310a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_310a1c:
    // 0x310a1c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x310a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_310a20:
    // 0x310a20: 0x320f809  jalr        $t9
label_310a24:
    if (ctx->pc == 0x310A24u) {
        ctx->pc = 0x310A28u;
        goto label_310a28;
    }
    ctx->pc = 0x310A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x310A28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x310A28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x310A28u; }
            if (ctx->pc != 0x310A28u) { return; }
        }
        }
    }
    ctx->pc = 0x310A28u;
label_310a28:
    // 0x310a28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x310a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_310a2c:
    // 0x310a2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x310a2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_310a30:
    // 0x310a30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x310a30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_310a34:
    // 0x310a34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x310a34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_310a38:
    // 0x310a38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x310a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_310a3c:
    // 0x310a3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x310a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_310a40:
    // 0x310a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_310a44:
    // 0x310a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_310a48:
    // 0x310a48: 0x3e00008  jr          $ra
label_310a4c:
    if (ctx->pc == 0x310A4Cu) {
        ctx->pc = 0x310A4Cu;
            // 0x310a4c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x310A50u;
        goto label_310a50;
    }
    ctx->pc = 0x310A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310A48u;
            // 0x310a4c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310A50u;
label_310a50:
    // 0x310a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x310a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_310a54:
    // 0x310a54: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x310a54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_310a58:
    // 0x310a58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x310a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_310a5c:
    // 0x310a5c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x310a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_310a60:
    // 0x310a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_310a64:
    // 0x310a64: 0x24c60e84  addiu       $a2, $a2, 0xE84
    ctx->pc = 0x310a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3716));
label_310a68:
    // 0x310a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x310a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_310a6c:
    // 0x310a6c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x310a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_310a70:
    // 0x310a70: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x310a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_310a74:
    // 0x310a74: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x310a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_310a78:
    // 0x310a78: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x310a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_310a7c:
    // 0x310a7c: 0x8ca5f7f4  lw          $a1, -0x80C($a1)
    ctx->pc = 0x310a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965236)));
label_310a80:
    // 0x310a80: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x310a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_310a84:
    // 0x310a84: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x310a84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_310a88:
    // 0x310a88: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x310a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_310a8c:
    // 0x310a8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x310a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_310a90:
    // 0x310a90: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x310a90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_310a94:
    // 0x310a94: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x310a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
label_310a98:
    // 0x310a98: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x310a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_310a9c:
    // 0x310a9c: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x310a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_310aa0:
    // 0x310aa0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x310aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_310aa4:
    // 0x310aa4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_310aa8:
    if (ctx->pc == 0x310AA8u) {
        ctx->pc = 0x310AA8u;
            // 0x310aa8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310AACu;
        goto label_310aac;
    }
    ctx->pc = 0x310AA4u;
    {
        const bool branch_taken_0x310aa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x310AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310AA4u;
            // 0x310aa8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310aa4) {
            ctx->pc = 0x310AB4u;
            goto label_310ab4;
        }
    }
    ctx->pc = 0x310AACu;
label_310aac:
    // 0x310aac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x310aacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_310ab0:
    // 0x310ab0: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x310ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_310ab4:
    // 0x310ab4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x310ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_310ab8:
    // 0x310ab8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x310ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_310abc:
    // 0x310abc: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x310abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_310ac0:
    // 0x310ac0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310ac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_310ac4:
    // 0x310ac4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x310ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_310ac8:
    // 0x310ac8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x310ac8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_310acc:
    // 0x310acc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x310accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_310ad0:
    // 0x310ad0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_310ad4:
    if (ctx->pc == 0x310AD4u) {
        ctx->pc = 0x310AD4u;
            // 0x310ad4: 0xe621005c  swc1        $f1, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->pc = 0x310AD8u;
        goto label_310ad8;
    }
    ctx->pc = 0x310AD0u;
    {
        const bool branch_taken_0x310ad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310AD0u;
            // 0x310ad4: 0xe621005c  swc1        $f1, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ad0) {
            ctx->pc = 0x310AECu;
            goto label_310aec;
        }
    }
    ctx->pc = 0x310AD8u;
label_310ad8:
    // 0x310ad8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x310ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_310adc:
    // 0x310adc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x310adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_310ae0:
    // 0x310ae0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x310ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_310ae4:
    // 0x310ae4: 0xc057b7c  jal         func_15EDF0
label_310ae8:
    if (ctx->pc == 0x310AE8u) {
        ctx->pc = 0x310AE8u;
            // 0x310ae8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x310AECu;
        goto label_310aec;
    }
    ctx->pc = 0x310AE4u;
    SET_GPR_U32(ctx, 31, 0x310AECu);
    ctx->pc = 0x310AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310AE4u;
            // 0x310ae8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310AECu; }
        if (ctx->pc != 0x310AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310AECu; }
        if (ctx->pc != 0x310AECu) { return; }
    }
    ctx->pc = 0x310AECu;
label_310aec:
    // 0x310aec: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x310aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_310af0:
    // 0x310af0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x310af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_310af4:
    // 0x310af4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_310af8:
    if (ctx->pc == 0x310AF8u) {
        ctx->pc = 0x310AF8u;
            // 0x310af8: 0xc622005c  lwc1        $f2, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x310AFCu;
        goto label_310afc;
    }
    ctx->pc = 0x310AF4u;
    {
        const bool branch_taken_0x310af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310af4) {
            ctx->pc = 0x310AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310AF4u;
            // 0x310af8: 0xc622005c  lwc1        $f2, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x310B14u;
            goto label_310b14;
        }
    }
    ctx->pc = 0x310AFCu;
label_310afc:
    // 0x310afc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x310afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_310b00:
    // 0x310b00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x310b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_310b04:
    // 0x310b04: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x310b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_310b08:
    // 0x310b08: 0xc057b7c  jal         func_15EDF0
label_310b0c:
    if (ctx->pc == 0x310B0Cu) {
        ctx->pc = 0x310B0Cu;
            // 0x310b0c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x310B10u;
        goto label_310b10;
    }
    ctx->pc = 0x310B08u;
    SET_GPR_U32(ctx, 31, 0x310B10u);
    ctx->pc = 0x310B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310B08u;
            // 0x310b0c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310B10u; }
        if (ctx->pc != 0x310B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310B10u; }
        if (ctx->pc != 0x310B10u) { return; }
    }
    ctx->pc = 0x310B10u;
label_310b10:
    // 0x310b10: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x310b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_310b14:
    // 0x310b14: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x310b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_310b18:
    // 0x310b18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x310b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_310b1c:
    // 0x310b1c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x310b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_310b20:
    // 0x310b20: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x310b20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_310b24:
    // 0x310b24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x310b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_310b28:
    // 0x310b28: 0x0  nop
    ctx->pc = 0x310b28u;
    // NOP
label_310b2c:
    // 0x310b2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x310b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_310b30:
    // 0x310b30: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_310b34:
    if (ctx->pc == 0x310B34u) {
        ctx->pc = 0x310B34u;
            // 0x310b34: 0x3c0343fa  lui         $v1, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
        ctx->pc = 0x310B38u;
        goto label_310b38;
    }
    ctx->pc = 0x310B30u;
    {
        const bool branch_taken_0x310b30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310b30) {
            ctx->pc = 0x310B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310B30u;
            // 0x310b34: 0x3c0343fa  lui         $v1, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x310B80u;
            goto label_310b80;
        }
    }
    ctx->pc = 0x310B38u;
label_310b38:
    // 0x310b38: 0x0  nop
    ctx->pc = 0x310b38u;
    // NOP
label_310b3c:
    // 0x310b3c: 0x0  nop
    ctx->pc = 0x310b3cu;
    // NOP
label_310b40:
    // 0x310b40: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x310b40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_310b44:
    // 0x310b44: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x310b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_310b48:
    // 0x310b48: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x310b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_310b4c:
    // 0x310b4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310b50:
    // 0x310b50: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x310b50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_310b54:
    // 0x310b54: 0x0  nop
    ctx->pc = 0x310b54u;
    // NOP
label_310b58:
    // 0x310b58: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x310b58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_310b5c:
    // 0x310b5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x310b5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_310b60:
    // 0x310b60: 0x0  nop
    ctx->pc = 0x310b60u;
    // NOP
label_310b64:
    // 0x310b64: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x310b64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_310b68:
    // 0x310b68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_310b6c:
    // 0x310b6c: 0x0  nop
    ctx->pc = 0x310b6cu;
    // NOP
label_310b70:
    // 0x310b70: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x310b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_310b74:
    // 0x310b74: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x310b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_310b78:
    // 0x310b78: 0x1000000c  b           . + 4 + (0xC << 2)
label_310b7c:
    if (ctx->pc == 0x310B7Cu) {
        ctx->pc = 0x310B7Cu;
            // 0x310b7c: 0xa223006c  sb          $v1, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x310B80u;
        goto label_310b80;
    }
    ctx->pc = 0x310B78u;
    {
        const bool branch_taken_0x310b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310B78u;
            // 0x310b7c: 0xa223006c  sb          $v1, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b78) {
            ctx->pc = 0x310BACu;
            goto label_310bac;
        }
    }
    ctx->pc = 0x310B80u;
label_310b80:
    // 0x310b80: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x310b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_310b84:
    // 0x310b84: 0x9223006c  lbu         $v1, 0x6C($s1)
    ctx->pc = 0x310b84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_310b88:
    // 0x310b88: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_310b8c:
    if (ctx->pc == 0x310B8Cu) {
        ctx->pc = 0x310B8Cu;
            // 0x310b8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x310B90u;
        goto label_310b90;
    }
    ctx->pc = 0x310B88u;
    {
        const bool branch_taken_0x310b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b88) {
            ctx->pc = 0x310B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310B88u;
            // 0x310b8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x310BB0u;
            goto label_310bb0;
        }
    }
    ctx->pc = 0x310B90u;
label_310b90:
    // 0x310b90: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x310b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_310b94:
    // 0x310b94: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x310b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_310b98:
    // 0x310b98: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x310b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_310b9c:
    // 0x310b9c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x310b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_310ba0:
    // 0x310ba0: 0x320f809  jalr        $t9
label_310ba4:
    if (ctx->pc == 0x310BA4u) {
        ctx->pc = 0x310BA4u;
            // 0x310ba4: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x310BA8u;
        goto label_310ba8;
    }
    ctx->pc = 0x310BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x310BA8u);
        ctx->pc = 0x310BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310BA0u;
            // 0x310ba4: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x310BA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x310BA8u; }
            if (ctx->pc != 0x310BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x310BA8u;
label_310ba8:
    // 0x310ba8: 0xa220006c  sb          $zero, 0x6C($s1)
    ctx->pc = 0x310ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 0));
label_310bac:
    // 0x310bac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x310bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_310bb0:
    // 0x310bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_310bb4:
    // 0x310bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_310bb8:
    // 0x310bb8: 0x3e00008  jr          $ra
label_310bbc:
    if (ctx->pc == 0x310BBCu) {
        ctx->pc = 0x310BBCu;
            // 0x310bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x310BC0u;
        goto label_310bc0;
    }
    ctx->pc = 0x310BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310BB8u;
            // 0x310bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310BC0u;
label_310bc0:
    // 0x310bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x310bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_310bc4:
    // 0x310bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x310bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_310bc8:
    // 0x310bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_310bcc:
    // 0x310bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x310bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_310bd0:
    // 0x310bd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x310bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310bd4:
    // 0x310bd4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_310bd8:
    if (ctx->pc == 0x310BD8u) {
        ctx->pc = 0x310BD8u;
            // 0x310bd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310BDCu;
        goto label_310bdc;
    }
    ctx->pc = 0x310BD4u;
    {
        const bool branch_taken_0x310bd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x310BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310BD4u;
            // 0x310bd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bd4) {
            ctx->pc = 0x310C18u;
            goto label_310c18;
        }
    }
    ctx->pc = 0x310BDCu;
label_310bdc:
    // 0x310bdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x310bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_310be0:
    // 0x310be0: 0x24424260  addiu       $v0, $v0, 0x4260
    ctx->pc = 0x310be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16992));
label_310be4:
    // 0x310be4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_310be8:
    if (ctx->pc == 0x310BE8u) {
        ctx->pc = 0x310BE8u;
            // 0x310be8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x310BECu;
        goto label_310bec;
    }
    ctx->pc = 0x310BE4u;
    {
        const bool branch_taken_0x310be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x310BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310BE4u;
            // 0x310be8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310be4) {
            ctx->pc = 0x310C00u;
            goto label_310c00;
        }
    }
    ctx->pc = 0x310BECu;
label_310bec:
    // 0x310bec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x310becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_310bf0:
    // 0x310bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x310bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310bf4:
    // 0x310bf4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x310bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_310bf8:
    // 0x310bf8: 0xc057a68  jal         func_15E9A0
label_310bfc:
    if (ctx->pc == 0x310BFCu) {
        ctx->pc = 0x310BFCu;
            // 0x310bfc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x310C00u;
        goto label_310c00;
    }
    ctx->pc = 0x310BF8u;
    SET_GPR_U32(ctx, 31, 0x310C00u);
    ctx->pc = 0x310BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310BF8u;
            // 0x310bfc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310C00u; }
        if (ctx->pc != 0x310C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310C00u; }
        if (ctx->pc != 0x310C00u) { return; }
    }
    ctx->pc = 0x310C00u;
label_310c00:
    // 0x310c00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x310c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_310c04:
    // 0x310c04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x310c04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_310c08:
    // 0x310c08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_310c0c:
    if (ctx->pc == 0x310C0Cu) {
        ctx->pc = 0x310C0Cu;
            // 0x310c0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310C10u;
        goto label_310c10;
    }
    ctx->pc = 0x310C08u;
    {
        const bool branch_taken_0x310c08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x310c08) {
            ctx->pc = 0x310C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310C08u;
            // 0x310c0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x310C1Cu;
            goto label_310c1c;
        }
    }
    ctx->pc = 0x310C10u;
label_310c10:
    // 0x310c10: 0xc0400a8  jal         func_1002A0
label_310c14:
    if (ctx->pc == 0x310C14u) {
        ctx->pc = 0x310C14u;
            // 0x310c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310C18u;
        goto label_310c18;
    }
    ctx->pc = 0x310C10u;
    SET_GPR_U32(ctx, 31, 0x310C18u);
    ctx->pc = 0x310C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310C10u;
            // 0x310c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310C18u; }
        if (ctx->pc != 0x310C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310C18u; }
        if (ctx->pc != 0x310C18u) { return; }
    }
    ctx->pc = 0x310C18u;
label_310c18:
    // 0x310c18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x310c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_310c1c:
    // 0x310c1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x310c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_310c20:
    // 0x310c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_310c24:
    // 0x310c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_310c28:
    // 0x310c28: 0x3e00008  jr          $ra
label_310c2c:
    if (ctx->pc == 0x310C2Cu) {
        ctx->pc = 0x310C2Cu;
            // 0x310c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x310C30u;
        goto label_fallthrough_0x310c28;
    }
    ctx->pc = 0x310C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310C28u;
            // 0x310c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x310c28:
    ctx->pc = 0x310C30u;
}
