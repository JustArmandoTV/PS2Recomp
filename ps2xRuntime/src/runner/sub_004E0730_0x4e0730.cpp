#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E0730
// Address: 0x4e0730 - 0x4e0b40
void sub_004E0730_0x4e0730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0730_0x4e0730");
#endif

    switch (ctx->pc) {
        case 0x4e0730u: goto label_4e0730;
        case 0x4e0734u: goto label_4e0734;
        case 0x4e0738u: goto label_4e0738;
        case 0x4e073cu: goto label_4e073c;
        case 0x4e0740u: goto label_4e0740;
        case 0x4e0744u: goto label_4e0744;
        case 0x4e0748u: goto label_4e0748;
        case 0x4e074cu: goto label_4e074c;
        case 0x4e0750u: goto label_4e0750;
        case 0x4e0754u: goto label_4e0754;
        case 0x4e0758u: goto label_4e0758;
        case 0x4e075cu: goto label_4e075c;
        case 0x4e0760u: goto label_4e0760;
        case 0x4e0764u: goto label_4e0764;
        case 0x4e0768u: goto label_4e0768;
        case 0x4e076cu: goto label_4e076c;
        case 0x4e0770u: goto label_4e0770;
        case 0x4e0774u: goto label_4e0774;
        case 0x4e0778u: goto label_4e0778;
        case 0x4e077cu: goto label_4e077c;
        case 0x4e0780u: goto label_4e0780;
        case 0x4e0784u: goto label_4e0784;
        case 0x4e0788u: goto label_4e0788;
        case 0x4e078cu: goto label_4e078c;
        case 0x4e0790u: goto label_4e0790;
        case 0x4e0794u: goto label_4e0794;
        case 0x4e0798u: goto label_4e0798;
        case 0x4e079cu: goto label_4e079c;
        case 0x4e07a0u: goto label_4e07a0;
        case 0x4e07a4u: goto label_4e07a4;
        case 0x4e07a8u: goto label_4e07a8;
        case 0x4e07acu: goto label_4e07ac;
        case 0x4e07b0u: goto label_4e07b0;
        case 0x4e07b4u: goto label_4e07b4;
        case 0x4e07b8u: goto label_4e07b8;
        case 0x4e07bcu: goto label_4e07bc;
        case 0x4e07c0u: goto label_4e07c0;
        case 0x4e07c4u: goto label_4e07c4;
        case 0x4e07c8u: goto label_4e07c8;
        case 0x4e07ccu: goto label_4e07cc;
        case 0x4e07d0u: goto label_4e07d0;
        case 0x4e07d4u: goto label_4e07d4;
        case 0x4e07d8u: goto label_4e07d8;
        case 0x4e07dcu: goto label_4e07dc;
        case 0x4e07e0u: goto label_4e07e0;
        case 0x4e07e4u: goto label_4e07e4;
        case 0x4e07e8u: goto label_4e07e8;
        case 0x4e07ecu: goto label_4e07ec;
        case 0x4e07f0u: goto label_4e07f0;
        case 0x4e07f4u: goto label_4e07f4;
        case 0x4e07f8u: goto label_4e07f8;
        case 0x4e07fcu: goto label_4e07fc;
        case 0x4e0800u: goto label_4e0800;
        case 0x4e0804u: goto label_4e0804;
        case 0x4e0808u: goto label_4e0808;
        case 0x4e080cu: goto label_4e080c;
        case 0x4e0810u: goto label_4e0810;
        case 0x4e0814u: goto label_4e0814;
        case 0x4e0818u: goto label_4e0818;
        case 0x4e081cu: goto label_4e081c;
        case 0x4e0820u: goto label_4e0820;
        case 0x4e0824u: goto label_4e0824;
        case 0x4e0828u: goto label_4e0828;
        case 0x4e082cu: goto label_4e082c;
        case 0x4e0830u: goto label_4e0830;
        case 0x4e0834u: goto label_4e0834;
        case 0x4e0838u: goto label_4e0838;
        case 0x4e083cu: goto label_4e083c;
        case 0x4e0840u: goto label_4e0840;
        case 0x4e0844u: goto label_4e0844;
        case 0x4e0848u: goto label_4e0848;
        case 0x4e084cu: goto label_4e084c;
        case 0x4e0850u: goto label_4e0850;
        case 0x4e0854u: goto label_4e0854;
        case 0x4e0858u: goto label_4e0858;
        case 0x4e085cu: goto label_4e085c;
        case 0x4e0860u: goto label_4e0860;
        case 0x4e0864u: goto label_4e0864;
        case 0x4e0868u: goto label_4e0868;
        case 0x4e086cu: goto label_4e086c;
        case 0x4e0870u: goto label_4e0870;
        case 0x4e0874u: goto label_4e0874;
        case 0x4e0878u: goto label_4e0878;
        case 0x4e087cu: goto label_4e087c;
        case 0x4e0880u: goto label_4e0880;
        case 0x4e0884u: goto label_4e0884;
        case 0x4e0888u: goto label_4e0888;
        case 0x4e088cu: goto label_4e088c;
        case 0x4e0890u: goto label_4e0890;
        case 0x4e0894u: goto label_4e0894;
        case 0x4e0898u: goto label_4e0898;
        case 0x4e089cu: goto label_4e089c;
        case 0x4e08a0u: goto label_4e08a0;
        case 0x4e08a4u: goto label_4e08a4;
        case 0x4e08a8u: goto label_4e08a8;
        case 0x4e08acu: goto label_4e08ac;
        case 0x4e08b0u: goto label_4e08b0;
        case 0x4e08b4u: goto label_4e08b4;
        case 0x4e08b8u: goto label_4e08b8;
        case 0x4e08bcu: goto label_4e08bc;
        case 0x4e08c0u: goto label_4e08c0;
        case 0x4e08c4u: goto label_4e08c4;
        case 0x4e08c8u: goto label_4e08c8;
        case 0x4e08ccu: goto label_4e08cc;
        case 0x4e08d0u: goto label_4e08d0;
        case 0x4e08d4u: goto label_4e08d4;
        case 0x4e08d8u: goto label_4e08d8;
        case 0x4e08dcu: goto label_4e08dc;
        case 0x4e08e0u: goto label_4e08e0;
        case 0x4e08e4u: goto label_4e08e4;
        case 0x4e08e8u: goto label_4e08e8;
        case 0x4e08ecu: goto label_4e08ec;
        case 0x4e08f0u: goto label_4e08f0;
        case 0x4e08f4u: goto label_4e08f4;
        case 0x4e08f8u: goto label_4e08f8;
        case 0x4e08fcu: goto label_4e08fc;
        case 0x4e0900u: goto label_4e0900;
        case 0x4e0904u: goto label_4e0904;
        case 0x4e0908u: goto label_4e0908;
        case 0x4e090cu: goto label_4e090c;
        case 0x4e0910u: goto label_4e0910;
        case 0x4e0914u: goto label_4e0914;
        case 0x4e0918u: goto label_4e0918;
        case 0x4e091cu: goto label_4e091c;
        case 0x4e0920u: goto label_4e0920;
        case 0x4e0924u: goto label_4e0924;
        case 0x4e0928u: goto label_4e0928;
        case 0x4e092cu: goto label_4e092c;
        case 0x4e0930u: goto label_4e0930;
        case 0x4e0934u: goto label_4e0934;
        case 0x4e0938u: goto label_4e0938;
        case 0x4e093cu: goto label_4e093c;
        case 0x4e0940u: goto label_4e0940;
        case 0x4e0944u: goto label_4e0944;
        case 0x4e0948u: goto label_4e0948;
        case 0x4e094cu: goto label_4e094c;
        case 0x4e0950u: goto label_4e0950;
        case 0x4e0954u: goto label_4e0954;
        case 0x4e0958u: goto label_4e0958;
        case 0x4e095cu: goto label_4e095c;
        case 0x4e0960u: goto label_4e0960;
        case 0x4e0964u: goto label_4e0964;
        case 0x4e0968u: goto label_4e0968;
        case 0x4e096cu: goto label_4e096c;
        case 0x4e0970u: goto label_4e0970;
        case 0x4e0974u: goto label_4e0974;
        case 0x4e0978u: goto label_4e0978;
        case 0x4e097cu: goto label_4e097c;
        case 0x4e0980u: goto label_4e0980;
        case 0x4e0984u: goto label_4e0984;
        case 0x4e0988u: goto label_4e0988;
        case 0x4e098cu: goto label_4e098c;
        case 0x4e0990u: goto label_4e0990;
        case 0x4e0994u: goto label_4e0994;
        case 0x4e0998u: goto label_4e0998;
        case 0x4e099cu: goto label_4e099c;
        case 0x4e09a0u: goto label_4e09a0;
        case 0x4e09a4u: goto label_4e09a4;
        case 0x4e09a8u: goto label_4e09a8;
        case 0x4e09acu: goto label_4e09ac;
        case 0x4e09b0u: goto label_4e09b0;
        case 0x4e09b4u: goto label_4e09b4;
        case 0x4e09b8u: goto label_4e09b8;
        case 0x4e09bcu: goto label_4e09bc;
        case 0x4e09c0u: goto label_4e09c0;
        case 0x4e09c4u: goto label_4e09c4;
        case 0x4e09c8u: goto label_4e09c8;
        case 0x4e09ccu: goto label_4e09cc;
        case 0x4e09d0u: goto label_4e09d0;
        case 0x4e09d4u: goto label_4e09d4;
        case 0x4e09d8u: goto label_4e09d8;
        case 0x4e09dcu: goto label_4e09dc;
        case 0x4e09e0u: goto label_4e09e0;
        case 0x4e09e4u: goto label_4e09e4;
        case 0x4e09e8u: goto label_4e09e8;
        case 0x4e09ecu: goto label_4e09ec;
        case 0x4e09f0u: goto label_4e09f0;
        case 0x4e09f4u: goto label_4e09f4;
        case 0x4e09f8u: goto label_4e09f8;
        case 0x4e09fcu: goto label_4e09fc;
        case 0x4e0a00u: goto label_4e0a00;
        case 0x4e0a04u: goto label_4e0a04;
        case 0x4e0a08u: goto label_4e0a08;
        case 0x4e0a0cu: goto label_4e0a0c;
        case 0x4e0a10u: goto label_4e0a10;
        case 0x4e0a14u: goto label_4e0a14;
        case 0x4e0a18u: goto label_4e0a18;
        case 0x4e0a1cu: goto label_4e0a1c;
        case 0x4e0a20u: goto label_4e0a20;
        case 0x4e0a24u: goto label_4e0a24;
        case 0x4e0a28u: goto label_4e0a28;
        case 0x4e0a2cu: goto label_4e0a2c;
        case 0x4e0a30u: goto label_4e0a30;
        case 0x4e0a34u: goto label_4e0a34;
        case 0x4e0a38u: goto label_4e0a38;
        case 0x4e0a3cu: goto label_4e0a3c;
        case 0x4e0a40u: goto label_4e0a40;
        case 0x4e0a44u: goto label_4e0a44;
        case 0x4e0a48u: goto label_4e0a48;
        case 0x4e0a4cu: goto label_4e0a4c;
        case 0x4e0a50u: goto label_4e0a50;
        case 0x4e0a54u: goto label_4e0a54;
        case 0x4e0a58u: goto label_4e0a58;
        case 0x4e0a5cu: goto label_4e0a5c;
        case 0x4e0a60u: goto label_4e0a60;
        case 0x4e0a64u: goto label_4e0a64;
        case 0x4e0a68u: goto label_4e0a68;
        case 0x4e0a6cu: goto label_4e0a6c;
        case 0x4e0a70u: goto label_4e0a70;
        case 0x4e0a74u: goto label_4e0a74;
        case 0x4e0a78u: goto label_4e0a78;
        case 0x4e0a7cu: goto label_4e0a7c;
        case 0x4e0a80u: goto label_4e0a80;
        case 0x4e0a84u: goto label_4e0a84;
        case 0x4e0a88u: goto label_4e0a88;
        case 0x4e0a8cu: goto label_4e0a8c;
        case 0x4e0a90u: goto label_4e0a90;
        case 0x4e0a94u: goto label_4e0a94;
        case 0x4e0a98u: goto label_4e0a98;
        case 0x4e0a9cu: goto label_4e0a9c;
        case 0x4e0aa0u: goto label_4e0aa0;
        case 0x4e0aa4u: goto label_4e0aa4;
        case 0x4e0aa8u: goto label_4e0aa8;
        case 0x4e0aacu: goto label_4e0aac;
        case 0x4e0ab0u: goto label_4e0ab0;
        case 0x4e0ab4u: goto label_4e0ab4;
        case 0x4e0ab8u: goto label_4e0ab8;
        case 0x4e0abcu: goto label_4e0abc;
        case 0x4e0ac0u: goto label_4e0ac0;
        case 0x4e0ac4u: goto label_4e0ac4;
        case 0x4e0ac8u: goto label_4e0ac8;
        case 0x4e0accu: goto label_4e0acc;
        case 0x4e0ad0u: goto label_4e0ad0;
        case 0x4e0ad4u: goto label_4e0ad4;
        case 0x4e0ad8u: goto label_4e0ad8;
        case 0x4e0adcu: goto label_4e0adc;
        case 0x4e0ae0u: goto label_4e0ae0;
        case 0x4e0ae4u: goto label_4e0ae4;
        case 0x4e0ae8u: goto label_4e0ae8;
        case 0x4e0aecu: goto label_4e0aec;
        case 0x4e0af0u: goto label_4e0af0;
        case 0x4e0af4u: goto label_4e0af4;
        case 0x4e0af8u: goto label_4e0af8;
        case 0x4e0afcu: goto label_4e0afc;
        case 0x4e0b00u: goto label_4e0b00;
        case 0x4e0b04u: goto label_4e0b04;
        case 0x4e0b08u: goto label_4e0b08;
        case 0x4e0b0cu: goto label_4e0b0c;
        case 0x4e0b10u: goto label_4e0b10;
        case 0x4e0b14u: goto label_4e0b14;
        case 0x4e0b18u: goto label_4e0b18;
        case 0x4e0b1cu: goto label_4e0b1c;
        case 0x4e0b20u: goto label_4e0b20;
        case 0x4e0b24u: goto label_4e0b24;
        case 0x4e0b28u: goto label_4e0b28;
        case 0x4e0b2cu: goto label_4e0b2c;
        case 0x4e0b30u: goto label_4e0b30;
        case 0x4e0b34u: goto label_4e0b34;
        case 0x4e0b38u: goto label_4e0b38;
        case 0x4e0b3cu: goto label_4e0b3c;
        default: break;
    }

    ctx->pc = 0x4e0730u;

label_4e0730:
    // 0x4e0730: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4e0730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4e0734:
    // 0x4e0734: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4e0734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4e0738:
    // 0x4e0738: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e0738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e073c:
    // 0x4e073c: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x4e073cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
label_4e0740:
    // 0x4e0740: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e0740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e0744:
    // 0x4e0744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e0744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e0748:
    // 0x4e0748: 0xc138308  jal         func_4E0C20
label_4e074c:
    if (ctx->pc == 0x4E074Cu) {
        ctx->pc = 0x4E074Cu;
            // 0x4e074c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4E0750u;
        goto label_4e0750;
    }
    ctx->pc = 0x4E0748u;
    SET_GPR_U32(ctx, 31, 0x4E0750u);
    ctx->pc = 0x4E074Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0748u;
            // 0x4e074c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E0C20u;
    if (runtime->hasFunction(0x4E0C20u)) {
        auto targetFn = runtime->lookupFunction(0x4E0C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0750u; }
        if (ctx->pc != 0x4E0750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E0C20_0x4e0c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0750u; }
        if (ctx->pc != 0x4E0750u) { return; }
    }
    ctx->pc = 0x4E0750u;
label_4e0750:
    // 0x4e0750: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e0750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e0754:
    // 0x4e0754: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e0754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e0758:
    // 0x4e0758: 0x24633400  addiu       $v1, $v1, 0x3400
    ctx->pc = 0x4e0758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13312));
label_4e075c:
    // 0x4e075c: 0x24423438  addiu       $v0, $v0, 0x3438
    ctx->pc = 0x4e075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13368));
label_4e0760:
    // 0x4e0760: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e0760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e0764:
    // 0x4e0764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e0764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e0768:
    // 0x4e0768: 0xc138304  jal         func_4E0C10
label_4e076c:
    if (ctx->pc == 0x4E076Cu) {
        ctx->pc = 0x4E076Cu;
            // 0x4e076c: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4E0770u;
        goto label_4e0770;
    }
    ctx->pc = 0x4E0768u;
    SET_GPR_U32(ctx, 31, 0x4E0770u);
    ctx->pc = 0x4E076Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0768u;
            // 0x4e076c: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E0C10u;
    if (runtime->hasFunction(0x4E0C10u)) {
        auto targetFn = runtime->lookupFunction(0x4E0C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0770u; }
        if (ctx->pc != 0x4E0770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E0C10_0x4e0c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0770u; }
        if (ctx->pc != 0x4E0770u) { return; }
    }
    ctx->pc = 0x4E0770u;
label_4e0770:
    // 0x4e0770: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e0770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e0774:
    // 0x4e0774: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x4e0774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_4e0778:
    // 0x4e0778: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e0778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e077c:
    // 0x4e077c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4e077cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4e0780:
    // 0x4e0780: 0x24423350  addiu       $v0, $v0, 0x3350
    ctx->pc = 0x4e0780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13136));
label_4e0784:
    // 0x4e0784: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4e0784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4e0788:
    // 0x4e0788: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e0788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4e078c:
    // 0x4e078c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e078cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e0790:
    // 0x4e0790: 0x24423388  addiu       $v0, $v0, 0x3388
    ctx->pc = 0x4e0790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13192));
label_4e0794:
    // 0x4e0794: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4e0794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4e0798:
    // 0x4e0798: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4e0798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4e079c:
    // 0x4e079c: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x4e079cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
label_4e07a0:
    // 0x4e07a0: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x4e07a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_4e07a4:
    // 0x4e07a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4e07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4e07a8:
    // 0x4e07a8: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x4e07a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_4e07ac:
    // 0x4e07ac: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x4e07acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_4e07b0:
    // 0x4e07b0: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x4e07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_4e07b4:
    // 0x4e07b4: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x4e07b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_4e07b8:
    // 0x4e07b8: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x4e07b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_4e07bc:
    // 0x4e07bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e07c0:
    // 0x4e07c0: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x4e07c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_4e07c4:
    // 0x4e07c4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e07c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e07c8:
    // 0x4e07c8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4e07c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4e07cc:
    // 0x4e07cc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x4e07ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_4e07d0:
    // 0x4e07d0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x4e07d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_4e07d4:
    // 0x4e07d4: 0xc0a7a88  jal         func_29EA20
label_4e07d8:
    if (ctx->pc == 0x4E07D8u) {
        ctx->pc = 0x4E07D8u;
            // 0x4e07d8: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x4E07DCu;
        goto label_4e07dc;
    }
    ctx->pc = 0x4E07D4u;
    SET_GPR_U32(ctx, 31, 0x4E07DCu);
    ctx->pc = 0x4E07D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E07D4u;
            // 0x4e07d8: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E07DCu; }
        if (ctx->pc != 0x4E07DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E07DCu; }
        if (ctx->pc != 0x4E07DCu) { return; }
    }
    ctx->pc = 0x4E07DCu;
label_4e07dc:
    // 0x4e07dc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4e07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4e07e0:
    // 0x4e07e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e07e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e07e4:
    // 0x4e07e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4e07e8:
    if (ctx->pc == 0x4E07E8u) {
        ctx->pc = 0x4E07E8u;
            // 0x4e07e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E07ECu;
        goto label_4e07ec;
    }
    ctx->pc = 0x4E07E4u;
    {
        const bool branch_taken_0x4e07e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E07E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E07E4u;
            // 0x4e07e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e07e4) {
            ctx->pc = 0x4E0800u;
            goto label_4e0800;
        }
    }
    ctx->pc = 0x4E07ECu;
label_4e07ec:
    // 0x4e07ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e07ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e07f0:
    // 0x4e07f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4e07f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e07f4:
    // 0x4e07f4: 0xc0804bc  jal         func_2012F0
label_4e07f8:
    if (ctx->pc == 0x4E07F8u) {
        ctx->pc = 0x4E07F8u;
            // 0x4e07f8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4E07FCu;
        goto label_4e07fc;
    }
    ctx->pc = 0x4E07F4u;
    SET_GPR_U32(ctx, 31, 0x4E07FCu);
    ctx->pc = 0x4E07F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E07F4u;
            // 0x4e07f8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E07FCu; }
        if (ctx->pc != 0x4E07FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E07FCu; }
        if (ctx->pc != 0x4E07FCu) { return; }
    }
    ctx->pc = 0x4E07FCu;
label_4e07fc:
    // 0x4e07fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e07fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e0800:
    // 0x4e0800: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4e0800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_4e0804:
    // 0x4e0804: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4e0804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4e0808:
    // 0x4e0808: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x4e0808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_4e080c:
    // 0x4e080c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4e080cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4e0810:
    // 0x4e0810: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4e0810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4e0814:
    // 0x4e0814: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x4e0814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_4e0818:
    // 0x4e0818: 0xc0a3830  jal         func_28E0C0
label_4e081c:
    if (ctx->pc == 0x4E081Cu) {
        ctx->pc = 0x4E081Cu;
            // 0x4e081c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4E0820u;
        goto label_4e0820;
    }
    ctx->pc = 0x4E0818u;
    SET_GPR_U32(ctx, 31, 0x4E0820u);
    ctx->pc = 0x4E081Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0818u;
            // 0x4e081c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0820u; }
        if (ctx->pc != 0x4E0820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0820u; }
        if (ctx->pc != 0x4E0820u) { return; }
    }
    ctx->pc = 0x4E0820u;
label_4e0820:
    // 0x4e0820: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e0820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e0824:
    // 0x4e0824: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4e0824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4e0828:
    // 0x4e0828: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e0828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e082c:
    // 0x4e082c: 0xc0a7a88  jal         func_29EA20
label_4e0830:
    if (ctx->pc == 0x4E0830u) {
        ctx->pc = 0x4E0830u;
            // 0x4e0830: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4E0834u;
        goto label_4e0834;
    }
    ctx->pc = 0x4E082Cu;
    SET_GPR_U32(ctx, 31, 0x4E0834u);
    ctx->pc = 0x4E0830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E082Cu;
            // 0x4e0830: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0834u; }
        if (ctx->pc != 0x4E0834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0834u; }
        if (ctx->pc != 0x4E0834u) { return; }
    }
    ctx->pc = 0x4E0834u;
label_4e0834:
    // 0x4e0834: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4e0834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4e0838:
    // 0x4e0838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e0838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e083c:
    // 0x4e083c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4e0840:
    if (ctx->pc == 0x4E0840u) {
        ctx->pc = 0x4E0840u;
            // 0x4e0840: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E0844u;
        goto label_4e0844;
    }
    ctx->pc = 0x4E083Cu;
    {
        const bool branch_taken_0x4e083c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E083Cu;
            // 0x4e0840: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e083c) {
            ctx->pc = 0x4E0854u;
            goto label_4e0854;
        }
    }
    ctx->pc = 0x4E0844u;
label_4e0844:
    // 0x4e0844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e0844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e0848:
    // 0x4e0848: 0xc082940  jal         func_20A500
label_4e084c:
    if (ctx->pc == 0x4E084Cu) {
        ctx->pc = 0x4E084Cu;
            // 0x4e084c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E0850u;
        goto label_4e0850;
    }
    ctx->pc = 0x4E0848u;
    SET_GPR_U32(ctx, 31, 0x4E0850u);
    ctx->pc = 0x4E084Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0848u;
            // 0x4e084c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0850u; }
        if (ctx->pc != 0x4E0850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0850u; }
        if (ctx->pc != 0x4E0850u) { return; }
    }
    ctx->pc = 0x4E0850u;
label_4e0850:
    // 0x4e0850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e0850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e0854:
    // 0x4e0854: 0xae240090  sw          $a0, 0x90($s1)
    ctx->pc = 0x4e0854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 4));
label_4e0858:
    // 0x4e0858: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x4e0858u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_4e085c:
    // 0x4e085c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4e0860:
    if (ctx->pc == 0x4E0860u) {
        ctx->pc = 0x4E0860u;
            // 0x4e0860: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->pc = 0x4E0864u;
        goto label_4e0864;
    }
    ctx->pc = 0x4E085Cu;
    {
        const bool branch_taken_0x4e085c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e085c) {
            ctx->pc = 0x4E0860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E085Cu;
            // 0x4e0860: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E08A0u;
            goto label_4e08a0;
        }
    }
    ctx->pc = 0x4E0864u;
label_4e0864:
    // 0x4e0864: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x4e0864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_4e0868:
    // 0x4e0868: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e0868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4e086c:
    // 0x4e086c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x4e086cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_4e0870:
    // 0x4e0870: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4e0870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4e0874:
    // 0x4e0874: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e0874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e0878:
    // 0x4e0878: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4e087c:
    if (ctx->pc == 0x4E087Cu) {
        ctx->pc = 0x4E0880u;
        goto label_4e0880;
    }
    ctx->pc = 0x4E0878u;
    {
        const bool branch_taken_0x4e0878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0878) {
            ctx->pc = 0x4E089Cu;
            goto label_4e089c;
        }
    }
    ctx->pc = 0x4E0880u;
label_4e0880:
    // 0x4e0880: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4e0884:
    if (ctx->pc == 0x4E0884u) {
        ctx->pc = 0x4E0888u;
        goto label_4e0888;
    }
    ctx->pc = 0x4E0880u;
    {
        const bool branch_taken_0x4e0880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0880) {
            ctx->pc = 0x4E089Cu;
            goto label_4e089c;
        }
    }
    ctx->pc = 0x4E0888u;
label_4e0888:
    // 0x4e0888: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e0888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e088c:
    // 0x4e088c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e088cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e0890:
    // 0x4e0890: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e0890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e0894:
    // 0x4e0894: 0x320f809  jalr        $t9
label_4e0898:
    if (ctx->pc == 0x4E0898u) {
        ctx->pc = 0x4E0898u;
            // 0x4e0898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E089Cu;
        goto label_4e089c;
    }
    ctx->pc = 0x4E0894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E089Cu);
        ctx->pc = 0x4E0898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0894u;
            // 0x4e0898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E089Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E089Cu; }
            if (ctx->pc != 0x4E089Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E089Cu;
label_4e089c:
    // 0x4e089c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4e089cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_4e08a0:
    // 0x4e08a0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x4e08a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_4e08a4:
    // 0x4e08a4: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x4e08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_4e08a8:
    // 0x4e08a8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4e08a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4e08ac:
    // 0x4e08ac: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x4e08acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_4e08b0:
    // 0x4e08b0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4e08b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4e08b4:
    // 0x4e08b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e08b8:
    // 0x4e08b8: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x4e08b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_4e08bc:
    // 0x4e08bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e08bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e08c0:
    // 0x4e08c0: 0xc0a7a88  jal         func_29EA20
label_4e08c4:
    if (ctx->pc == 0x4E08C4u) {
        ctx->pc = 0x4E08C4u;
            // 0x4e08c4: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x4E08C8u;
        goto label_4e08c8;
    }
    ctx->pc = 0x4E08C0u;
    SET_GPR_U32(ctx, 31, 0x4E08C8u);
    ctx->pc = 0x4E08C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E08C0u;
            // 0x4e08c4: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E08C8u; }
        if (ctx->pc != 0x4E08C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E08C8u; }
        if (ctx->pc != 0x4E08C8u) { return; }
    }
    ctx->pc = 0x4E08C8u;
label_4e08c8:
    // 0x4e08c8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4e08c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4e08cc:
    // 0x4e08cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e08ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e08d0:
    // 0x4e08d0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4e08d4:
    if (ctx->pc == 0x4E08D4u) {
        ctx->pc = 0x4E08D4u;
            // 0x4e08d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E08D8u;
        goto label_4e08d8;
    }
    ctx->pc = 0x4E08D0u;
    {
        const bool branch_taken_0x4e08d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E08D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E08D0u;
            // 0x4e08d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e08d0) {
            ctx->pc = 0x4E08ECu;
            goto label_4e08ec;
        }
    }
    ctx->pc = 0x4E08D8u;
label_4e08d8:
    // 0x4e08d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e08d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e08dc:
    // 0x4e08dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4e08dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e08e0:
    // 0x4e08e0: 0xc0804bc  jal         func_2012F0
label_4e08e4:
    if (ctx->pc == 0x4E08E4u) {
        ctx->pc = 0x4E08E4u;
            // 0x4e08e4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4E08E8u;
        goto label_4e08e8;
    }
    ctx->pc = 0x4E08E0u;
    SET_GPR_U32(ctx, 31, 0x4E08E8u);
    ctx->pc = 0x4E08E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E08E0u;
            // 0x4e08e4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E08E8u; }
        if (ctx->pc != 0x4E08E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E08E8u; }
        if (ctx->pc != 0x4E08E8u) { return; }
    }
    ctx->pc = 0x4E08E8u;
label_4e08e8:
    // 0x4e08e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e08e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e08ec:
    // 0x4e08ec: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x4e08ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_4e08f0:
    // 0x4e08f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4e08f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4e08f4:
    // 0x4e08f4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4e08f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4e08f8:
    // 0x4e08f8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4e08f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4e08fc:
    // 0x4e08fc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4e08fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4e0900:
    // 0x4e0900: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4e0900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4e0904:
    // 0x4e0904: 0xc0a3830  jal         func_28E0C0
label_4e0908:
    if (ctx->pc == 0x4E0908u) {
        ctx->pc = 0x4E0908u;
            // 0x4e0908: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4E090Cu;
        goto label_4e090c;
    }
    ctx->pc = 0x4E0904u;
    SET_GPR_U32(ctx, 31, 0x4E090Cu);
    ctx->pc = 0x4E0908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0904u;
            // 0x4e0908: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E090Cu; }
        if (ctx->pc != 0x4E090Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E090Cu; }
        if (ctx->pc != 0x4E090Cu) { return; }
    }
    ctx->pc = 0x4E090Cu;
label_4e090c:
    // 0x4e090c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e0910:
    // 0x4e0910: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4e0910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4e0914:
    // 0x4e0914: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e0914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e0918:
    // 0x4e0918: 0xc0a7a88  jal         func_29EA20
label_4e091c:
    if (ctx->pc == 0x4E091Cu) {
        ctx->pc = 0x4E091Cu;
            // 0x4e091c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4E0920u;
        goto label_4e0920;
    }
    ctx->pc = 0x4E0918u;
    SET_GPR_U32(ctx, 31, 0x4E0920u);
    ctx->pc = 0x4E091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0918u;
            // 0x4e091c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0920u; }
        if (ctx->pc != 0x4E0920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0920u; }
        if (ctx->pc != 0x4E0920u) { return; }
    }
    ctx->pc = 0x4E0920u;
label_4e0920:
    // 0x4e0920: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4e0920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4e0924:
    // 0x4e0924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e0924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e0928:
    // 0x4e0928: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4e092c:
    if (ctx->pc == 0x4E092Cu) {
        ctx->pc = 0x4E092Cu;
            // 0x4e092c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E0930u;
        goto label_4e0930;
    }
    ctx->pc = 0x4E0928u;
    {
        const bool branch_taken_0x4e0928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0928u;
            // 0x4e092c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0928) {
            ctx->pc = 0x4E0940u;
            goto label_4e0940;
        }
    }
    ctx->pc = 0x4E0930u;
label_4e0930:
    // 0x4e0930: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e0930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e0934:
    // 0x4e0934: 0xc082940  jal         func_20A500
label_4e0938:
    if (ctx->pc == 0x4E0938u) {
        ctx->pc = 0x4E0938u;
            // 0x4e0938: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E093Cu;
        goto label_4e093c;
    }
    ctx->pc = 0x4E0934u;
    SET_GPR_U32(ctx, 31, 0x4E093Cu);
    ctx->pc = 0x4E0938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0934u;
            // 0x4e0938: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E093Cu; }
        if (ctx->pc != 0x4E093Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E093Cu; }
        if (ctx->pc != 0x4E093Cu) { return; }
    }
    ctx->pc = 0x4E093Cu;
label_4e093c:
    // 0x4e093c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e093cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e0940:
    // 0x4e0940: 0xae240094  sw          $a0, 0x94($s1)
    ctx->pc = 0x4e0940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 4));
label_4e0944:
    // 0x4e0944: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x4e0944u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_4e0948:
    // 0x4e0948: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4e094c:
    if (ctx->pc == 0x4E094Cu) {
        ctx->pc = 0x4E094Cu;
            // 0x4e094c: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->pc = 0x4E0950u;
        goto label_4e0950;
    }
    ctx->pc = 0x4E0948u;
    {
        const bool branch_taken_0x4e0948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0948) {
            ctx->pc = 0x4E094Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0948u;
            // 0x4e094c: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E098Cu;
            goto label_4e098c;
        }
    }
    ctx->pc = 0x4E0950u;
label_4e0950:
    // 0x4e0950: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x4e0950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_4e0954:
    // 0x4e0954: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e0954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4e0958:
    // 0x4e0958: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x4e0958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_4e095c:
    // 0x4e095c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4e095cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4e0960:
    // 0x4e0960: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e0960u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e0964:
    // 0x4e0964: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4e0968:
    if (ctx->pc == 0x4E0968u) {
        ctx->pc = 0x4E096Cu;
        goto label_4e096c;
    }
    ctx->pc = 0x4E0964u;
    {
        const bool branch_taken_0x4e0964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0964) {
            ctx->pc = 0x4E0988u;
            goto label_4e0988;
        }
    }
    ctx->pc = 0x4E096Cu;
label_4e096c:
    // 0x4e096c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4e0970:
    if (ctx->pc == 0x4E0970u) {
        ctx->pc = 0x4E0974u;
        goto label_4e0974;
    }
    ctx->pc = 0x4E096Cu;
    {
        const bool branch_taken_0x4e096c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e096c) {
            ctx->pc = 0x4E0988u;
            goto label_4e0988;
        }
    }
    ctx->pc = 0x4E0974u;
label_4e0974:
    // 0x4e0974: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e0974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e0978:
    // 0x4e0978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e0978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e097c:
    // 0x4e097c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e097cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e0980:
    // 0x4e0980: 0x320f809  jalr        $t9
label_4e0984:
    if (ctx->pc == 0x4E0984u) {
        ctx->pc = 0x4E0984u;
            // 0x4e0984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E0988u;
        goto label_4e0988;
    }
    ctx->pc = 0x4E0980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E0988u);
        ctx->pc = 0x4E0984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0980u;
            // 0x4e0984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E0988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E0988u; }
            if (ctx->pc != 0x4E0988u) { return; }
        }
        }
    }
    ctx->pc = 0x4E0988u;
label_4e0988:
    // 0x4e0988: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x4e0988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_4e098c:
    // 0x4e098c: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x4e098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4e0990:
    // 0x4e0990: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x4e0990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_4e0994:
    // 0x4e0994: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x4e0994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_4e0998:
    // 0x4e0998: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4e099c:
    if (ctx->pc == 0x4E099Cu) {
        ctx->pc = 0x4E099Cu;
            // 0x4e099c: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->pc = 0x4E09A0u;
        goto label_4e09a0;
    }
    ctx->pc = 0x4E0998u;
    {
        const bool branch_taken_0x4e0998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e0998) {
            ctx->pc = 0x4E099Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0998u;
            // 0x4e099c: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E09B0u;
            goto label_4e09b0;
        }
    }
    ctx->pc = 0x4E09A0u;
label_4e09a0:
    // 0x4e09a0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4e09a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4e09a4:
    // 0x4e09a4: 0xc0a728c  jal         func_29CA30
label_4e09a8:
    if (ctx->pc == 0x4E09A8u) {
        ctx->pc = 0x4E09A8u;
            // 0x4e09a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E09ACu;
        goto label_4e09ac;
    }
    ctx->pc = 0x4E09A4u;
    SET_GPR_U32(ctx, 31, 0x4E09ACu);
    ctx->pc = 0x4E09A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E09A4u;
            // 0x4e09a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E09ACu; }
        if (ctx->pc != 0x4E09ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E09ACu; }
        if (ctx->pc != 0x4E09ACu) { return; }
    }
    ctx->pc = 0x4E09ACu;
label_4e09ac:
    // 0x4e09ac: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x4e09acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4e09b0:
    // 0x4e09b0: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x4e09b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_4e09b4:
    // 0x4e09b4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4e09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4e09b8:
    // 0x4e09b8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4e09b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e09bc:
    // 0x4e09bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e09c0:
    // 0x4e09c0: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x4e09c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_4e09c4:
    // 0x4e09c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e09c8:
    // 0x4e09c8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4e09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_4e09cc:
    // 0x4e09cc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x4e09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_4e09d0:
    // 0x4e09d0: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x4e09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4e09d4:
    // 0x4e09d4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x4e09d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_4e09d8:
    // 0x4e09d8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x4e09d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_4e09dc:
    // 0x4e09dc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4e09e0:
    if (ctx->pc == 0x4E09E0u) {
        ctx->pc = 0x4E09E0u;
            // 0x4e09e0: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->pc = 0x4E09E4u;
        goto label_4e09e4;
    }
    ctx->pc = 0x4E09DCu;
    {
        const bool branch_taken_0x4e09dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e09dc) {
            ctx->pc = 0x4E09E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E09DCu;
            // 0x4e09e0: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E09F4u;
            goto label_4e09f4;
        }
    }
    ctx->pc = 0x4E09E4u;
label_4e09e4:
    // 0x4e09e4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4e09e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4e09e8:
    // 0x4e09e8: 0xc0a728c  jal         func_29CA30
label_4e09ec:
    if (ctx->pc == 0x4E09ECu) {
        ctx->pc = 0x4E09ECu;
            // 0x4e09ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E09F0u;
        goto label_4e09f0;
    }
    ctx->pc = 0x4E09E8u;
    SET_GPR_U32(ctx, 31, 0x4E09F0u);
    ctx->pc = 0x4E09ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E09E8u;
            // 0x4e09ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E09F0u; }
        if (ctx->pc != 0x4E09F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E09F0u; }
        if (ctx->pc != 0x4E09F0u) { return; }
    }
    ctx->pc = 0x4E09F0u;
label_4e09f0:
    // 0x4e09f0: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x4e09f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4e09f4:
    // 0x4e09f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e09f8:
    // 0x4e09f8: 0x8e280094  lw          $t0, 0x94($s1)
    ctx->pc = 0x4e09f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_4e09fc:
    // 0x4e09fc: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4e09fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4e0a00:
    // 0x4e0a00: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x4e0a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4e0a04:
    // 0x4e0a04: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x4e0a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4e0a08:
    // 0x4e0a08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4e0a08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4e0a0c:
    // 0x4e0a0c: 0xafa70094  sw          $a3, 0x94($sp)
    ctx->pc = 0x4e0a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 7));
label_4e0a10:
    // 0x4e0a10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4e0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4e0a14:
    // 0x4e0a14: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x4e0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_4e0a18:
    // 0x4e0a18: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e0a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e0a1c:
    // 0x4e0a1c: 0xc0a7a88  jal         func_29EA20
label_4e0a20:
    if (ctx->pc == 0x4E0A20u) {
        ctx->pc = 0x4E0A20u;
            // 0x4e0a20: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4E0A24u;
        goto label_4e0a24;
    }
    ctx->pc = 0x4E0A1Cu;
    SET_GPR_U32(ctx, 31, 0x4E0A24u);
    ctx->pc = 0x4E0A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0A1Cu;
            // 0x4e0a20: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0A24u; }
        if (ctx->pc != 0x4E0A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0A24u; }
        if (ctx->pc != 0x4E0A24u) { return; }
    }
    ctx->pc = 0x4E0A24u;
label_4e0a24:
    // 0x4e0a24: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4e0a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4e0a28:
    // 0x4e0a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e0a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e0a2c:
    // 0x4e0a2c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4e0a30:
    if (ctx->pc == 0x4E0A30u) {
        ctx->pc = 0x4E0A30u;
            // 0x4e0a30: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E0A34u;
        goto label_4e0a34;
    }
    ctx->pc = 0x4E0A2Cu;
    {
        const bool branch_taken_0x4e0a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0A2Cu;
            // 0x4e0a30: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0a2c) {
            ctx->pc = 0x4E0A44u;
            goto label_4e0a44;
        }
    }
    ctx->pc = 0x4E0A34u;
label_4e0a34:
    // 0x4e0a34: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x4e0a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4e0a38:
    // 0x4e0a38: 0xc081c54  jal         func_207150
label_4e0a3c:
    if (ctx->pc == 0x4E0A3Cu) {
        ctx->pc = 0x4E0A3Cu;
            // 0x4e0a3c: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4E0A40u;
        goto label_4e0a40;
    }
    ctx->pc = 0x4E0A38u;
    SET_GPR_U32(ctx, 31, 0x4E0A40u);
    ctx->pc = 0x4E0A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0A38u;
            // 0x4e0a3c: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207150u;
    if (runtime->hasFunction(0x207150u)) {
        auto targetFn = runtime->lookupFunction(0x207150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0A40u; }
        if (ctx->pc != 0x4E0A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207150_0x207150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0A40u; }
        if (ctx->pc != 0x4E0A40u) { return; }
    }
    ctx->pc = 0x4E0A40u;
label_4e0a40:
    // 0x4e0a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e0a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e0a44:
    // 0x4e0a44: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x4e0a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_4e0a48:
    // 0x4e0a48: 0xc0b61c4  jal         func_2D8710
label_4e0a4c:
    if (ctx->pc == 0x4E0A4Cu) {
        ctx->pc = 0x4E0A4Cu;
            // 0x4e0a4c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4E0A50u;
        goto label_4e0a50;
    }
    ctx->pc = 0x4E0A48u;
    SET_GPR_U32(ctx, 31, 0x4E0A50u);
    ctx->pc = 0x4E0A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0A48u;
            // 0x4e0a4c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8710u;
    if (runtime->hasFunction(0x2D8710u)) {
        auto targetFn = runtime->lookupFunction(0x2D8710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0A50u; }
        if (ctx->pc != 0x4E0A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8710_0x2d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0A50u; }
        if (ctx->pc != 0x4E0A50u) { return; }
    }
    ctx->pc = 0x4E0A50u;
label_4e0a50:
    // 0x4e0a50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e0a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e0a54:
    // 0x4e0a54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e0a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e0a58:
    // 0x4e0a58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e0a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0a5c:
    // 0x4e0a5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e0a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0a60:
    // 0x4e0a60: 0x3e00008  jr          $ra
label_4e0a64:
    if (ctx->pc == 0x4E0A64u) {
        ctx->pc = 0x4E0A64u;
            // 0x4e0a64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4E0A68u;
        goto label_4e0a68;
    }
    ctx->pc = 0x4E0A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0A60u;
            // 0x4e0a64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0A68u;
label_4e0a68:
    // 0x4e0a68: 0x0  nop
    ctx->pc = 0x4e0a68u;
    // NOP
label_4e0a6c:
    // 0x4e0a6c: 0x0  nop
    ctx->pc = 0x4e0a6cu;
    // NOP
label_4e0a70:
    // 0x4e0a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e0a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e0a74:
    // 0x4e0a74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e0a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e0a78:
    // 0x4e0a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e0a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e0a7c:
    // 0x4e0a7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e0a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e0a80:
    // 0x4e0a80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e0a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e0a84:
    // 0x4e0a84: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_4e0a88:
    if (ctx->pc == 0x4E0A88u) {
        ctx->pc = 0x4E0A88u;
            // 0x4e0a88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0A8Cu;
        goto label_4e0a8c;
    }
    ctx->pc = 0x4E0A84u;
    {
        const bool branch_taken_0x4e0a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0A84u;
            // 0x4e0a88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0a84) {
            ctx->pc = 0x4E0B24u;
            goto label_4e0b24;
        }
    }
    ctx->pc = 0x4E0A8Cu;
label_4e0a8c:
    // 0x4e0a8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e0a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e0a90:
    // 0x4e0a90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e0a94:
    // 0x4e0a94: 0x24633400  addiu       $v1, $v1, 0x3400
    ctx->pc = 0x4e0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13312));
label_4e0a98:
    // 0x4e0a98: 0x24423438  addiu       $v0, $v0, 0x3438
    ctx->pc = 0x4e0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13368));
label_4e0a9c:
    // 0x4e0a9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e0aa0:
    // 0x4e0aa0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_4e0aa4:
    if (ctx->pc == 0x4E0AA4u) {
        ctx->pc = 0x4E0AA4u;
            // 0x4e0aa4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4E0AA8u;
        goto label_4e0aa8;
    }
    ctx->pc = 0x4E0AA0u;
    {
        const bool branch_taken_0x4e0aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0AA0u;
            // 0x4e0aa4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0aa0) {
            ctx->pc = 0x4E0B0Cu;
            goto label_4e0b0c;
        }
    }
    ctx->pc = 0x4E0AA8u;
label_4e0aa8:
    // 0x4e0aa8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e0aac:
    // 0x4e0aac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e0ab0:
    // 0x4e0ab0: 0x246333b0  addiu       $v1, $v1, 0x33B0
    ctx->pc = 0x4e0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13232));
label_4e0ab4:
    // 0x4e0ab4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e0ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4e0ab8:
    // 0x4e0ab8: 0x244233e8  addiu       $v0, $v0, 0x33E8
    ctx->pc = 0x4e0ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13288));
label_4e0abc:
    // 0x4e0abc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e0ac0:
    // 0x4e0ac0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4e0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_4e0ac4:
    // 0x4e0ac4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4e0ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4e0ac8:
    // 0x4e0ac8: 0xc0407c0  jal         func_101F00
label_4e0acc:
    if (ctx->pc == 0x4E0ACCu) {
        ctx->pc = 0x4E0ACCu;
            // 0x4e0acc: 0x24a502f0  addiu       $a1, $a1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
        ctx->pc = 0x4E0AD0u;
        goto label_4e0ad0;
    }
    ctx->pc = 0x4E0AC8u;
    SET_GPR_U32(ctx, 31, 0x4E0AD0u);
    ctx->pc = 0x4E0ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0AC8u;
            // 0x4e0acc: 0x24a502f0  addiu       $a1, $a1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0AD0u; }
        if (ctx->pc != 0x4E0AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0AD0u; }
        if (ctx->pc != 0x4E0AD0u) { return; }
    }
    ctx->pc = 0x4E0AD0u;
label_4e0ad0:
    // 0x4e0ad0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4e0ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4e0ad4:
    // 0x4e0ad4: 0xc0a8cf8  jal         func_2A33E0
label_4e0ad8:
    if (ctx->pc == 0x4E0AD8u) {
        ctx->pc = 0x4E0AD8u;
            // 0x4e0ad8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4E0ADCu;
        goto label_4e0adc;
    }
    ctx->pc = 0x4E0AD4u;
    SET_GPR_U32(ctx, 31, 0x4E0ADCu);
    ctx->pc = 0x4E0AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0AD4u;
            // 0x4e0ad8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0ADCu; }
        if (ctx->pc != 0x4E0ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0ADCu; }
        if (ctx->pc != 0x4E0ADCu) { return; }
    }
    ctx->pc = 0x4E0ADCu;
label_4e0adc:
    // 0x4e0adc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4e0adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_4e0ae0:
    // 0x4e0ae0: 0xc1382e8  jal         func_4E0BA0
label_4e0ae4:
    if (ctx->pc == 0x4E0AE4u) {
        ctx->pc = 0x4E0AE4u;
            // 0x4e0ae4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4E0AE8u;
        goto label_4e0ae8;
    }
    ctx->pc = 0x4E0AE0u;
    SET_GPR_U32(ctx, 31, 0x4E0AE8u);
    ctx->pc = 0x4E0AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0AE0u;
            // 0x4e0ae4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E0BA0u;
    if (runtime->hasFunction(0x4E0BA0u)) {
        auto targetFn = runtime->lookupFunction(0x4E0BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0AE8u; }
        if (ctx->pc != 0x4E0AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E0BA0_0x4e0ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0AE8u; }
        if (ctx->pc != 0x4E0AE8u) { return; }
    }
    ctx->pc = 0x4E0AE8u;
label_4e0ae8:
    // 0x4e0ae8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4e0ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4e0aec:
    // 0x4e0aec: 0xc1382e8  jal         func_4E0BA0
label_4e0af0:
    if (ctx->pc == 0x4E0AF0u) {
        ctx->pc = 0x4E0AF0u;
            // 0x4e0af0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4E0AF4u;
        goto label_4e0af4;
    }
    ctx->pc = 0x4E0AECu;
    SET_GPR_U32(ctx, 31, 0x4E0AF4u);
    ctx->pc = 0x4E0AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0AECu;
            // 0x4e0af0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E0BA0u;
    if (runtime->hasFunction(0x4E0BA0u)) {
        auto targetFn = runtime->lookupFunction(0x4E0BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0AF4u; }
        if (ctx->pc != 0x4E0AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E0BA0_0x4e0ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0AF4u; }
        if (ctx->pc != 0x4E0AF4u) { return; }
    }
    ctx->pc = 0x4E0AF4u;
label_4e0af4:
    // 0x4e0af4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4e0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_4e0af8:
    // 0x4e0af8: 0xc1382d0  jal         func_4E0B40
label_4e0afc:
    if (ctx->pc == 0x4E0AFCu) {
        ctx->pc = 0x4E0AFCu;
            // 0x4e0afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0B00u;
        goto label_4e0b00;
    }
    ctx->pc = 0x4E0AF8u;
    SET_GPR_U32(ctx, 31, 0x4E0B00u);
    ctx->pc = 0x4E0AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0AF8u;
            // 0x4e0afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E0B40u;
    if (runtime->hasFunction(0x4E0B40u)) {
        auto targetFn = runtime->lookupFunction(0x4E0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0B00u; }
        if (ctx->pc != 0x4E0B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E0B40_0x4e0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0B00u; }
        if (ctx->pc != 0x4E0B00u) { return; }
    }
    ctx->pc = 0x4E0B00u;
label_4e0b00:
    // 0x4e0b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e0b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e0b04:
    // 0x4e0b04: 0xc0ae1c0  jal         func_2B8700
label_4e0b08:
    if (ctx->pc == 0x4E0B08u) {
        ctx->pc = 0x4E0B08u;
            // 0x4e0b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0B0Cu;
        goto label_4e0b0c;
    }
    ctx->pc = 0x4E0B04u;
    SET_GPR_U32(ctx, 31, 0x4E0B0Cu);
    ctx->pc = 0x4E0B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0B04u;
            // 0x4e0b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0B0Cu; }
        if (ctx->pc != 0x4E0B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0B0Cu; }
        if (ctx->pc != 0x4E0B0Cu) { return; }
    }
    ctx->pc = 0x4E0B0Cu;
label_4e0b0c:
    // 0x4e0b0c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4e0b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4e0b10:
    // 0x4e0b10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e0b10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e0b14:
    // 0x4e0b14: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e0b18:
    if (ctx->pc == 0x4E0B18u) {
        ctx->pc = 0x4E0B18u;
            // 0x4e0b18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0B1Cu;
        goto label_4e0b1c;
    }
    ctx->pc = 0x4E0B14u;
    {
        const bool branch_taken_0x4e0b14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e0b14) {
            ctx->pc = 0x4E0B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0B14u;
            // 0x4e0b18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E0B28u;
            goto label_4e0b28;
        }
    }
    ctx->pc = 0x4E0B1Cu;
label_4e0b1c:
    // 0x4e0b1c: 0xc0400a8  jal         func_1002A0
label_4e0b20:
    if (ctx->pc == 0x4E0B20u) {
        ctx->pc = 0x4E0B20u;
            // 0x4e0b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0B24u;
        goto label_4e0b24;
    }
    ctx->pc = 0x4E0B1Cu;
    SET_GPR_U32(ctx, 31, 0x4E0B24u);
    ctx->pc = 0x4E0B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0B1Cu;
            // 0x4e0b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0B24u; }
        if (ctx->pc != 0x4E0B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0B24u; }
        if (ctx->pc != 0x4E0B24u) { return; }
    }
    ctx->pc = 0x4E0B24u;
label_4e0b24:
    // 0x4e0b24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e0b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e0b28:
    // 0x4e0b28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e0b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e0b2c:
    // 0x4e0b2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e0b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0b30:
    // 0x4e0b30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e0b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0b34:
    // 0x4e0b34: 0x3e00008  jr          $ra
label_4e0b38:
    if (ctx->pc == 0x4E0B38u) {
        ctx->pc = 0x4E0B38u;
            // 0x4e0b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E0B3Cu;
        goto label_4e0b3c;
    }
    ctx->pc = 0x4E0B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0B34u;
            // 0x4e0b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0B3Cu;
label_4e0b3c:
    // 0x4e0b3c: 0x0  nop
    ctx->pc = 0x4e0b3cu;
    // NOP
}
