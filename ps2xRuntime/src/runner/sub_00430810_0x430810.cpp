#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00430810
// Address: 0x430810 - 0x430d50
void sub_00430810_0x430810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430810_0x430810");
#endif

    switch (ctx->pc) {
        case 0x430810u: goto label_430810;
        case 0x430814u: goto label_430814;
        case 0x430818u: goto label_430818;
        case 0x43081cu: goto label_43081c;
        case 0x430820u: goto label_430820;
        case 0x430824u: goto label_430824;
        case 0x430828u: goto label_430828;
        case 0x43082cu: goto label_43082c;
        case 0x430830u: goto label_430830;
        case 0x430834u: goto label_430834;
        case 0x430838u: goto label_430838;
        case 0x43083cu: goto label_43083c;
        case 0x430840u: goto label_430840;
        case 0x430844u: goto label_430844;
        case 0x430848u: goto label_430848;
        case 0x43084cu: goto label_43084c;
        case 0x430850u: goto label_430850;
        case 0x430854u: goto label_430854;
        case 0x430858u: goto label_430858;
        case 0x43085cu: goto label_43085c;
        case 0x430860u: goto label_430860;
        case 0x430864u: goto label_430864;
        case 0x430868u: goto label_430868;
        case 0x43086cu: goto label_43086c;
        case 0x430870u: goto label_430870;
        case 0x430874u: goto label_430874;
        case 0x430878u: goto label_430878;
        case 0x43087cu: goto label_43087c;
        case 0x430880u: goto label_430880;
        case 0x430884u: goto label_430884;
        case 0x430888u: goto label_430888;
        case 0x43088cu: goto label_43088c;
        case 0x430890u: goto label_430890;
        case 0x430894u: goto label_430894;
        case 0x430898u: goto label_430898;
        case 0x43089cu: goto label_43089c;
        case 0x4308a0u: goto label_4308a0;
        case 0x4308a4u: goto label_4308a4;
        case 0x4308a8u: goto label_4308a8;
        case 0x4308acu: goto label_4308ac;
        case 0x4308b0u: goto label_4308b0;
        case 0x4308b4u: goto label_4308b4;
        case 0x4308b8u: goto label_4308b8;
        case 0x4308bcu: goto label_4308bc;
        case 0x4308c0u: goto label_4308c0;
        case 0x4308c4u: goto label_4308c4;
        case 0x4308c8u: goto label_4308c8;
        case 0x4308ccu: goto label_4308cc;
        case 0x4308d0u: goto label_4308d0;
        case 0x4308d4u: goto label_4308d4;
        case 0x4308d8u: goto label_4308d8;
        case 0x4308dcu: goto label_4308dc;
        case 0x4308e0u: goto label_4308e0;
        case 0x4308e4u: goto label_4308e4;
        case 0x4308e8u: goto label_4308e8;
        case 0x4308ecu: goto label_4308ec;
        case 0x4308f0u: goto label_4308f0;
        case 0x4308f4u: goto label_4308f4;
        case 0x4308f8u: goto label_4308f8;
        case 0x4308fcu: goto label_4308fc;
        case 0x430900u: goto label_430900;
        case 0x430904u: goto label_430904;
        case 0x430908u: goto label_430908;
        case 0x43090cu: goto label_43090c;
        case 0x430910u: goto label_430910;
        case 0x430914u: goto label_430914;
        case 0x430918u: goto label_430918;
        case 0x43091cu: goto label_43091c;
        case 0x430920u: goto label_430920;
        case 0x430924u: goto label_430924;
        case 0x430928u: goto label_430928;
        case 0x43092cu: goto label_43092c;
        case 0x430930u: goto label_430930;
        case 0x430934u: goto label_430934;
        case 0x430938u: goto label_430938;
        case 0x43093cu: goto label_43093c;
        case 0x430940u: goto label_430940;
        case 0x430944u: goto label_430944;
        case 0x430948u: goto label_430948;
        case 0x43094cu: goto label_43094c;
        case 0x430950u: goto label_430950;
        case 0x430954u: goto label_430954;
        case 0x430958u: goto label_430958;
        case 0x43095cu: goto label_43095c;
        case 0x430960u: goto label_430960;
        case 0x430964u: goto label_430964;
        case 0x430968u: goto label_430968;
        case 0x43096cu: goto label_43096c;
        case 0x430970u: goto label_430970;
        case 0x430974u: goto label_430974;
        case 0x430978u: goto label_430978;
        case 0x43097cu: goto label_43097c;
        case 0x430980u: goto label_430980;
        case 0x430984u: goto label_430984;
        case 0x430988u: goto label_430988;
        case 0x43098cu: goto label_43098c;
        case 0x430990u: goto label_430990;
        case 0x430994u: goto label_430994;
        case 0x430998u: goto label_430998;
        case 0x43099cu: goto label_43099c;
        case 0x4309a0u: goto label_4309a0;
        case 0x4309a4u: goto label_4309a4;
        case 0x4309a8u: goto label_4309a8;
        case 0x4309acu: goto label_4309ac;
        case 0x4309b0u: goto label_4309b0;
        case 0x4309b4u: goto label_4309b4;
        case 0x4309b8u: goto label_4309b8;
        case 0x4309bcu: goto label_4309bc;
        case 0x4309c0u: goto label_4309c0;
        case 0x4309c4u: goto label_4309c4;
        case 0x4309c8u: goto label_4309c8;
        case 0x4309ccu: goto label_4309cc;
        case 0x4309d0u: goto label_4309d0;
        case 0x4309d4u: goto label_4309d4;
        case 0x4309d8u: goto label_4309d8;
        case 0x4309dcu: goto label_4309dc;
        case 0x4309e0u: goto label_4309e0;
        case 0x4309e4u: goto label_4309e4;
        case 0x4309e8u: goto label_4309e8;
        case 0x4309ecu: goto label_4309ec;
        case 0x4309f0u: goto label_4309f0;
        case 0x4309f4u: goto label_4309f4;
        case 0x4309f8u: goto label_4309f8;
        case 0x4309fcu: goto label_4309fc;
        case 0x430a00u: goto label_430a00;
        case 0x430a04u: goto label_430a04;
        case 0x430a08u: goto label_430a08;
        case 0x430a0cu: goto label_430a0c;
        case 0x430a10u: goto label_430a10;
        case 0x430a14u: goto label_430a14;
        case 0x430a18u: goto label_430a18;
        case 0x430a1cu: goto label_430a1c;
        case 0x430a20u: goto label_430a20;
        case 0x430a24u: goto label_430a24;
        case 0x430a28u: goto label_430a28;
        case 0x430a2cu: goto label_430a2c;
        case 0x430a30u: goto label_430a30;
        case 0x430a34u: goto label_430a34;
        case 0x430a38u: goto label_430a38;
        case 0x430a3cu: goto label_430a3c;
        case 0x430a40u: goto label_430a40;
        case 0x430a44u: goto label_430a44;
        case 0x430a48u: goto label_430a48;
        case 0x430a4cu: goto label_430a4c;
        case 0x430a50u: goto label_430a50;
        case 0x430a54u: goto label_430a54;
        case 0x430a58u: goto label_430a58;
        case 0x430a5cu: goto label_430a5c;
        case 0x430a60u: goto label_430a60;
        case 0x430a64u: goto label_430a64;
        case 0x430a68u: goto label_430a68;
        case 0x430a6cu: goto label_430a6c;
        case 0x430a70u: goto label_430a70;
        case 0x430a74u: goto label_430a74;
        case 0x430a78u: goto label_430a78;
        case 0x430a7cu: goto label_430a7c;
        case 0x430a80u: goto label_430a80;
        case 0x430a84u: goto label_430a84;
        case 0x430a88u: goto label_430a88;
        case 0x430a8cu: goto label_430a8c;
        case 0x430a90u: goto label_430a90;
        case 0x430a94u: goto label_430a94;
        case 0x430a98u: goto label_430a98;
        case 0x430a9cu: goto label_430a9c;
        case 0x430aa0u: goto label_430aa0;
        case 0x430aa4u: goto label_430aa4;
        case 0x430aa8u: goto label_430aa8;
        case 0x430aacu: goto label_430aac;
        case 0x430ab0u: goto label_430ab0;
        case 0x430ab4u: goto label_430ab4;
        case 0x430ab8u: goto label_430ab8;
        case 0x430abcu: goto label_430abc;
        case 0x430ac0u: goto label_430ac0;
        case 0x430ac4u: goto label_430ac4;
        case 0x430ac8u: goto label_430ac8;
        case 0x430accu: goto label_430acc;
        case 0x430ad0u: goto label_430ad0;
        case 0x430ad4u: goto label_430ad4;
        case 0x430ad8u: goto label_430ad8;
        case 0x430adcu: goto label_430adc;
        case 0x430ae0u: goto label_430ae0;
        case 0x430ae4u: goto label_430ae4;
        case 0x430ae8u: goto label_430ae8;
        case 0x430aecu: goto label_430aec;
        case 0x430af0u: goto label_430af0;
        case 0x430af4u: goto label_430af4;
        case 0x430af8u: goto label_430af8;
        case 0x430afcu: goto label_430afc;
        case 0x430b00u: goto label_430b00;
        case 0x430b04u: goto label_430b04;
        case 0x430b08u: goto label_430b08;
        case 0x430b0cu: goto label_430b0c;
        case 0x430b10u: goto label_430b10;
        case 0x430b14u: goto label_430b14;
        case 0x430b18u: goto label_430b18;
        case 0x430b1cu: goto label_430b1c;
        case 0x430b20u: goto label_430b20;
        case 0x430b24u: goto label_430b24;
        case 0x430b28u: goto label_430b28;
        case 0x430b2cu: goto label_430b2c;
        case 0x430b30u: goto label_430b30;
        case 0x430b34u: goto label_430b34;
        case 0x430b38u: goto label_430b38;
        case 0x430b3cu: goto label_430b3c;
        case 0x430b40u: goto label_430b40;
        case 0x430b44u: goto label_430b44;
        case 0x430b48u: goto label_430b48;
        case 0x430b4cu: goto label_430b4c;
        case 0x430b50u: goto label_430b50;
        case 0x430b54u: goto label_430b54;
        case 0x430b58u: goto label_430b58;
        case 0x430b5cu: goto label_430b5c;
        case 0x430b60u: goto label_430b60;
        case 0x430b64u: goto label_430b64;
        case 0x430b68u: goto label_430b68;
        case 0x430b6cu: goto label_430b6c;
        case 0x430b70u: goto label_430b70;
        case 0x430b74u: goto label_430b74;
        case 0x430b78u: goto label_430b78;
        case 0x430b7cu: goto label_430b7c;
        case 0x430b80u: goto label_430b80;
        case 0x430b84u: goto label_430b84;
        case 0x430b88u: goto label_430b88;
        case 0x430b8cu: goto label_430b8c;
        case 0x430b90u: goto label_430b90;
        case 0x430b94u: goto label_430b94;
        case 0x430b98u: goto label_430b98;
        case 0x430b9cu: goto label_430b9c;
        case 0x430ba0u: goto label_430ba0;
        case 0x430ba4u: goto label_430ba4;
        case 0x430ba8u: goto label_430ba8;
        case 0x430bacu: goto label_430bac;
        case 0x430bb0u: goto label_430bb0;
        case 0x430bb4u: goto label_430bb4;
        case 0x430bb8u: goto label_430bb8;
        case 0x430bbcu: goto label_430bbc;
        case 0x430bc0u: goto label_430bc0;
        case 0x430bc4u: goto label_430bc4;
        case 0x430bc8u: goto label_430bc8;
        case 0x430bccu: goto label_430bcc;
        case 0x430bd0u: goto label_430bd0;
        case 0x430bd4u: goto label_430bd4;
        case 0x430bd8u: goto label_430bd8;
        case 0x430bdcu: goto label_430bdc;
        case 0x430be0u: goto label_430be0;
        case 0x430be4u: goto label_430be4;
        case 0x430be8u: goto label_430be8;
        case 0x430becu: goto label_430bec;
        case 0x430bf0u: goto label_430bf0;
        case 0x430bf4u: goto label_430bf4;
        case 0x430bf8u: goto label_430bf8;
        case 0x430bfcu: goto label_430bfc;
        case 0x430c00u: goto label_430c00;
        case 0x430c04u: goto label_430c04;
        case 0x430c08u: goto label_430c08;
        case 0x430c0cu: goto label_430c0c;
        case 0x430c10u: goto label_430c10;
        case 0x430c14u: goto label_430c14;
        case 0x430c18u: goto label_430c18;
        case 0x430c1cu: goto label_430c1c;
        case 0x430c20u: goto label_430c20;
        case 0x430c24u: goto label_430c24;
        case 0x430c28u: goto label_430c28;
        case 0x430c2cu: goto label_430c2c;
        case 0x430c30u: goto label_430c30;
        case 0x430c34u: goto label_430c34;
        case 0x430c38u: goto label_430c38;
        case 0x430c3cu: goto label_430c3c;
        case 0x430c40u: goto label_430c40;
        case 0x430c44u: goto label_430c44;
        case 0x430c48u: goto label_430c48;
        case 0x430c4cu: goto label_430c4c;
        case 0x430c50u: goto label_430c50;
        case 0x430c54u: goto label_430c54;
        case 0x430c58u: goto label_430c58;
        case 0x430c5cu: goto label_430c5c;
        case 0x430c60u: goto label_430c60;
        case 0x430c64u: goto label_430c64;
        case 0x430c68u: goto label_430c68;
        case 0x430c6cu: goto label_430c6c;
        case 0x430c70u: goto label_430c70;
        case 0x430c74u: goto label_430c74;
        case 0x430c78u: goto label_430c78;
        case 0x430c7cu: goto label_430c7c;
        case 0x430c80u: goto label_430c80;
        case 0x430c84u: goto label_430c84;
        case 0x430c88u: goto label_430c88;
        case 0x430c8cu: goto label_430c8c;
        case 0x430c90u: goto label_430c90;
        case 0x430c94u: goto label_430c94;
        case 0x430c98u: goto label_430c98;
        case 0x430c9cu: goto label_430c9c;
        case 0x430ca0u: goto label_430ca0;
        case 0x430ca4u: goto label_430ca4;
        case 0x430ca8u: goto label_430ca8;
        case 0x430cacu: goto label_430cac;
        case 0x430cb0u: goto label_430cb0;
        case 0x430cb4u: goto label_430cb4;
        case 0x430cb8u: goto label_430cb8;
        case 0x430cbcu: goto label_430cbc;
        case 0x430cc0u: goto label_430cc0;
        case 0x430cc4u: goto label_430cc4;
        case 0x430cc8u: goto label_430cc8;
        case 0x430cccu: goto label_430ccc;
        case 0x430cd0u: goto label_430cd0;
        case 0x430cd4u: goto label_430cd4;
        case 0x430cd8u: goto label_430cd8;
        case 0x430cdcu: goto label_430cdc;
        case 0x430ce0u: goto label_430ce0;
        case 0x430ce4u: goto label_430ce4;
        case 0x430ce8u: goto label_430ce8;
        case 0x430cecu: goto label_430cec;
        case 0x430cf0u: goto label_430cf0;
        case 0x430cf4u: goto label_430cf4;
        case 0x430cf8u: goto label_430cf8;
        case 0x430cfcu: goto label_430cfc;
        case 0x430d00u: goto label_430d00;
        case 0x430d04u: goto label_430d04;
        case 0x430d08u: goto label_430d08;
        case 0x430d0cu: goto label_430d0c;
        case 0x430d10u: goto label_430d10;
        case 0x430d14u: goto label_430d14;
        case 0x430d18u: goto label_430d18;
        case 0x430d1cu: goto label_430d1c;
        case 0x430d20u: goto label_430d20;
        case 0x430d24u: goto label_430d24;
        case 0x430d28u: goto label_430d28;
        case 0x430d2cu: goto label_430d2c;
        case 0x430d30u: goto label_430d30;
        case 0x430d34u: goto label_430d34;
        case 0x430d38u: goto label_430d38;
        case 0x430d3cu: goto label_430d3c;
        case 0x430d40u: goto label_430d40;
        case 0x430d44u: goto label_430d44;
        case 0x430d48u: goto label_430d48;
        case 0x430d4cu: goto label_430d4c;
        default: break;
    }

    ctx->pc = 0x430810u;

label_430810:
    // 0x430810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x430810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_430814:
    // 0x430814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x430814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_430818:
    // 0x430818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x430818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43081c:
    // 0x43081c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_430820:
    // 0x430820: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x430820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_430824:
    // 0x430824: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_430828:
    if (ctx->pc == 0x430828u) {
        ctx->pc = 0x430828u;
            // 0x430828: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43082Cu;
        goto label_43082c;
    }
    ctx->pc = 0x430824u;
    {
        const bool branch_taken_0x430824 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x430828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430824u;
            // 0x430828: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430824) {
            ctx->pc = 0x430958u;
            goto label_430958;
        }
    }
    ctx->pc = 0x43082Cu;
label_43082c:
    // 0x43082c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43082cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_430830:
    // 0x430830: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x430830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_430834:
    // 0x430834: 0x2463c7f0  addiu       $v1, $v1, -0x3810
    ctx->pc = 0x430834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952944));
label_430838:
    // 0x430838: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x430838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_43083c:
    // 0x43083c: 0x2442c828  addiu       $v0, $v0, -0x37D8
    ctx->pc = 0x43083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953000));
label_430840:
    // 0x430840: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x430840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_430844:
    // 0x430844: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x430844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_430848:
    // 0x430848: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x430848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_43084c:
    // 0x43084c: 0xc0407c0  jal         func_101F00
label_430850:
    if (ctx->pc == 0x430850u) {
        ctx->pc = 0x430850u;
            // 0x430850: 0x24a50970  addiu       $a1, $a1, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2416));
        ctx->pc = 0x430854u;
        goto label_430854;
    }
    ctx->pc = 0x43084Cu;
    SET_GPR_U32(ctx, 31, 0x430854u);
    ctx->pc = 0x430850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43084Cu;
            // 0x430850: 0x24a50970  addiu       $a1, $a1, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430854u; }
        if (ctx->pc != 0x430854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430854u; }
        if (ctx->pc != 0x430854u) { return; }
    }
    ctx->pc = 0x430854u;
label_430854:
    // 0x430854: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x430854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_430858:
    // 0x430858: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_43085c:
    if (ctx->pc == 0x43085Cu) {
        ctx->pc = 0x43085Cu;
            // 0x43085c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x430860u;
        goto label_430860;
    }
    ctx->pc = 0x430858u;
    {
        const bool branch_taken_0x430858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x430858) {
            ctx->pc = 0x43085Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x430858u;
            // 0x43085c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43086Cu;
            goto label_43086c;
        }
    }
    ctx->pc = 0x430860u;
label_430860:
    // 0x430860: 0xc07507c  jal         func_1D41F0
label_430864:
    if (ctx->pc == 0x430864u) {
        ctx->pc = 0x430864u;
            // 0x430864: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x430868u;
        goto label_430868;
    }
    ctx->pc = 0x430860u;
    SET_GPR_U32(ctx, 31, 0x430868u);
    ctx->pc = 0x430864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430860u;
            // 0x430864: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430868u; }
        if (ctx->pc != 0x430868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430868u; }
        if (ctx->pc != 0x430868u) { return; }
    }
    ctx->pc = 0x430868u;
label_430868:
    // 0x430868: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x430868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_43086c:
    // 0x43086c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_430870:
    if (ctx->pc == 0x430870u) {
        ctx->pc = 0x430870u;
            // 0x430870: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x430874u;
        goto label_430874;
    }
    ctx->pc = 0x43086Cu;
    {
        const bool branch_taken_0x43086c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43086c) {
            ctx->pc = 0x430870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43086Cu;
            // 0x430870: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43089Cu;
            goto label_43089c;
        }
    }
    ctx->pc = 0x430874u;
label_430874:
    // 0x430874: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_430878:
    if (ctx->pc == 0x430878u) {
        ctx->pc = 0x43087Cu;
        goto label_43087c;
    }
    ctx->pc = 0x430874u;
    {
        const bool branch_taken_0x430874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x430874) {
            ctx->pc = 0x430898u;
            goto label_430898;
        }
    }
    ctx->pc = 0x43087Cu;
label_43087c:
    // 0x43087c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_430880:
    if (ctx->pc == 0x430880u) {
        ctx->pc = 0x430884u;
        goto label_430884;
    }
    ctx->pc = 0x43087Cu;
    {
        const bool branch_taken_0x43087c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43087c) {
            ctx->pc = 0x430898u;
            goto label_430898;
        }
    }
    ctx->pc = 0x430884u;
label_430884:
    // 0x430884: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x430884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_430888:
    // 0x430888: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_43088c:
    if (ctx->pc == 0x43088Cu) {
        ctx->pc = 0x430890u;
        goto label_430890;
    }
    ctx->pc = 0x430888u;
    {
        const bool branch_taken_0x430888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x430888) {
            ctx->pc = 0x430898u;
            goto label_430898;
        }
    }
    ctx->pc = 0x430890u;
label_430890:
    // 0x430890: 0xc0400a8  jal         func_1002A0
label_430894:
    if (ctx->pc == 0x430894u) {
        ctx->pc = 0x430898u;
        goto label_430898;
    }
    ctx->pc = 0x430890u;
    SET_GPR_U32(ctx, 31, 0x430898u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430898u; }
        if (ctx->pc != 0x430898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430898u; }
        if (ctx->pc != 0x430898u) { return; }
    }
    ctx->pc = 0x430898u;
label_430898:
    // 0x430898: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x430898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_43089c:
    // 0x43089c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4308a0:
    if (ctx->pc == 0x4308A0u) {
        ctx->pc = 0x4308A0u;
            // 0x4308a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4308A4u;
        goto label_4308a4;
    }
    ctx->pc = 0x43089Cu;
    {
        const bool branch_taken_0x43089c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43089c) {
            ctx->pc = 0x4308A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43089Cu;
            // 0x4308a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4308CCu;
            goto label_4308cc;
        }
    }
    ctx->pc = 0x4308A4u;
label_4308a4:
    // 0x4308a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4308a8:
    if (ctx->pc == 0x4308A8u) {
        ctx->pc = 0x4308ACu;
        goto label_4308ac;
    }
    ctx->pc = 0x4308A4u;
    {
        const bool branch_taken_0x4308a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4308a4) {
            ctx->pc = 0x4308C8u;
            goto label_4308c8;
        }
    }
    ctx->pc = 0x4308ACu;
label_4308ac:
    // 0x4308ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4308b0:
    if (ctx->pc == 0x4308B0u) {
        ctx->pc = 0x4308B4u;
        goto label_4308b4;
    }
    ctx->pc = 0x4308ACu;
    {
        const bool branch_taken_0x4308ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4308ac) {
            ctx->pc = 0x4308C8u;
            goto label_4308c8;
        }
    }
    ctx->pc = 0x4308B4u;
label_4308b4:
    // 0x4308b4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4308b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4308b8:
    // 0x4308b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4308bc:
    if (ctx->pc == 0x4308BCu) {
        ctx->pc = 0x4308C0u;
        goto label_4308c0;
    }
    ctx->pc = 0x4308B8u;
    {
        const bool branch_taken_0x4308b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4308b8) {
            ctx->pc = 0x4308C8u;
            goto label_4308c8;
        }
    }
    ctx->pc = 0x4308C0u;
label_4308c0:
    // 0x4308c0: 0xc0400a8  jal         func_1002A0
label_4308c4:
    if (ctx->pc == 0x4308C4u) {
        ctx->pc = 0x4308C8u;
        goto label_4308c8;
    }
    ctx->pc = 0x4308C0u;
    SET_GPR_U32(ctx, 31, 0x4308C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4308C8u; }
        if (ctx->pc != 0x4308C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4308C8u; }
        if (ctx->pc != 0x4308C8u) { return; }
    }
    ctx->pc = 0x4308C8u;
label_4308c8:
    // 0x4308c8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4308c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4308cc:
    // 0x4308cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4308d0:
    if (ctx->pc == 0x4308D0u) {
        ctx->pc = 0x4308D4u;
        goto label_4308d4;
    }
    ctx->pc = 0x4308CCu;
    {
        const bool branch_taken_0x4308cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4308cc) {
            ctx->pc = 0x4308E8u;
            goto label_4308e8;
        }
    }
    ctx->pc = 0x4308D4u;
label_4308d4:
    // 0x4308d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4308d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4308d8:
    // 0x4308d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4308d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4308dc:
    // 0x4308dc: 0x2463c7d8  addiu       $v1, $v1, -0x3828
    ctx->pc = 0x4308dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952920));
label_4308e0:
    // 0x4308e0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4308e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4308e4:
    // 0x4308e4: 0xac4074e8  sw          $zero, 0x74E8($v0)
    ctx->pc = 0x4308e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29928), GPR_U32(ctx, 0));
label_4308e8:
    // 0x4308e8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4308ec:
    if (ctx->pc == 0x4308ECu) {
        ctx->pc = 0x4308ECu;
            // 0x4308ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4308F0u;
        goto label_4308f0;
    }
    ctx->pc = 0x4308E8u;
    {
        const bool branch_taken_0x4308e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4308e8) {
            ctx->pc = 0x4308ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4308E8u;
            // 0x4308ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x430944u;
            goto label_430944;
        }
    }
    ctx->pc = 0x4308F0u;
label_4308f0:
    // 0x4308f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4308f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4308f4:
    // 0x4308f4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4308f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4308f8:
    // 0x4308f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4308f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4308fc:
    // 0x4308fc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4308fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_430900:
    // 0x430900: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_430904:
    if (ctx->pc == 0x430904u) {
        ctx->pc = 0x430904u;
            // 0x430904: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x430908u;
        goto label_430908;
    }
    ctx->pc = 0x430900u;
    {
        const bool branch_taken_0x430900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x430900) {
            ctx->pc = 0x430904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x430900u;
            // 0x430904: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43091Cu;
            goto label_43091c;
        }
    }
    ctx->pc = 0x430908u;
label_430908:
    // 0x430908: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x430908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43090c:
    // 0x43090c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43090cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_430910:
    // 0x430910: 0x320f809  jalr        $t9
label_430914:
    if (ctx->pc == 0x430914u) {
        ctx->pc = 0x430914u;
            // 0x430914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x430918u;
        goto label_430918;
    }
    ctx->pc = 0x430910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x430918u);
        ctx->pc = 0x430914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430910u;
            // 0x430914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x430918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x430918u; }
            if (ctx->pc != 0x430918u) { return; }
        }
        }
    }
    ctx->pc = 0x430918u;
label_430918:
    // 0x430918: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x430918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_43091c:
    // 0x43091c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_430920:
    if (ctx->pc == 0x430920u) {
        ctx->pc = 0x430920u;
            // 0x430920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430924u;
        goto label_430924;
    }
    ctx->pc = 0x43091Cu;
    {
        const bool branch_taken_0x43091c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43091c) {
            ctx->pc = 0x430920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43091Cu;
            // 0x430920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x430938u;
            goto label_430938;
        }
    }
    ctx->pc = 0x430924u;
label_430924:
    // 0x430924: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x430924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_430928:
    // 0x430928: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x430928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43092c:
    // 0x43092c: 0x320f809  jalr        $t9
label_430930:
    if (ctx->pc == 0x430930u) {
        ctx->pc = 0x430930u;
            // 0x430930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x430934u;
        goto label_430934;
    }
    ctx->pc = 0x43092Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x430934u);
        ctx->pc = 0x430930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43092Cu;
            // 0x430930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x430934u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x430934u; }
            if (ctx->pc != 0x430934u) { return; }
        }
        }
    }
    ctx->pc = 0x430934u;
label_430934:
    // 0x430934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x430934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_430938:
    // 0x430938: 0xc075bf8  jal         func_1D6FE0
label_43093c:
    if (ctx->pc == 0x43093Cu) {
        ctx->pc = 0x43093Cu;
            // 0x43093c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430940u;
        goto label_430940;
    }
    ctx->pc = 0x430938u;
    SET_GPR_U32(ctx, 31, 0x430940u);
    ctx->pc = 0x43093Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430938u;
            // 0x43093c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430940u; }
        if (ctx->pc != 0x430940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430940u; }
        if (ctx->pc != 0x430940u) { return; }
    }
    ctx->pc = 0x430940u;
label_430940:
    // 0x430940: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x430940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_430944:
    // 0x430944: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x430944u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_430948:
    // 0x430948: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_43094c:
    if (ctx->pc == 0x43094Cu) {
        ctx->pc = 0x43094Cu;
            // 0x43094c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430950u;
        goto label_430950;
    }
    ctx->pc = 0x430948u;
    {
        const bool branch_taken_0x430948 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x430948) {
            ctx->pc = 0x43094Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x430948u;
            // 0x43094c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43095Cu;
            goto label_43095c;
        }
    }
    ctx->pc = 0x430950u;
label_430950:
    // 0x430950: 0xc0400a8  jal         func_1002A0
label_430954:
    if (ctx->pc == 0x430954u) {
        ctx->pc = 0x430954u;
            // 0x430954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430958u;
        goto label_430958;
    }
    ctx->pc = 0x430950u;
    SET_GPR_U32(ctx, 31, 0x430958u);
    ctx->pc = 0x430954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430950u;
            // 0x430954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430958u; }
        if (ctx->pc != 0x430958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430958u; }
        if (ctx->pc != 0x430958u) { return; }
    }
    ctx->pc = 0x430958u;
label_430958:
    // 0x430958: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x430958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43095c:
    // 0x43095c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43095cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_430960:
    // 0x430960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x430960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_430964:
    // 0x430964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x430964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_430968:
    // 0x430968: 0x3e00008  jr          $ra
label_43096c:
    if (ctx->pc == 0x43096Cu) {
        ctx->pc = 0x43096Cu;
            // 0x43096c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x430970u;
        goto label_430970;
    }
    ctx->pc = 0x430968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43096Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430968u;
            // 0x43096c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x430970u;
label_430970:
    // 0x430970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x430970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_430974:
    // 0x430974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x430974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_430978:
    // 0x430978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x430978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43097c:
    // 0x43097c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_430980:
    // 0x430980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x430980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_430984:
    // 0x430984: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_430988:
    if (ctx->pc == 0x430988u) {
        ctx->pc = 0x430988u;
            // 0x430988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43098Cu;
        goto label_43098c;
    }
    ctx->pc = 0x430984u;
    {
        const bool branch_taken_0x430984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x430988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430984u;
            // 0x430988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430984) {
            ctx->pc = 0x430AACu;
            goto label_430aac;
        }
    }
    ctx->pc = 0x43098Cu;
label_43098c:
    // 0x43098c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43098cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_430990:
    // 0x430990: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x430990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_430994:
    // 0x430994: 0x2463c890  addiu       $v1, $v1, -0x3770
    ctx->pc = 0x430994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953104));
label_430998:
    // 0x430998: 0x2442c8d0  addiu       $v0, $v0, -0x3730
    ctx->pc = 0x430998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953168));
label_43099c:
    // 0x43099c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x43099cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4309a0:
    // 0x4309a0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4309a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4309a4:
    // 0x4309a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4309a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4309a8:
    // 0x4309a8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4309a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4309ac:
    // 0x4309ac: 0x320f809  jalr        $t9
label_4309b0:
    if (ctx->pc == 0x4309B0u) {
        ctx->pc = 0x4309B4u;
        goto label_4309b4;
    }
    ctx->pc = 0x4309ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4309B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4309B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4309B4u; }
            if (ctx->pc != 0x4309B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4309B4u;
label_4309b4:
    // 0x4309b4: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x4309b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_4309b8:
    // 0x4309b8: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_4309bc:
    if (ctx->pc == 0x4309BCu) {
        ctx->pc = 0x4309C0u;
        goto label_4309c0;
    }
    ctx->pc = 0x4309B8u;
    {
        const bool branch_taken_0x4309b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4309b8) {
            ctx->pc = 0x430A14u;
            goto label_430a14;
        }
    }
    ctx->pc = 0x4309C0u;
label_4309c0:
    // 0x4309c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4309c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4309c4:
    // 0x4309c4: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x4309c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
label_4309c8:
    // 0x4309c8: 0xc0d37dc  jal         func_34DF70
label_4309cc:
    if (ctx->pc == 0x4309CCu) {
        ctx->pc = 0x4309CCu;
            // 0x4309cc: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x4309D0u;
        goto label_4309d0;
    }
    ctx->pc = 0x4309C8u;
    SET_GPR_U32(ctx, 31, 0x4309D0u);
    ctx->pc = 0x4309CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4309C8u;
            // 0x4309cc: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4309D0u; }
        if (ctx->pc != 0x4309D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4309D0u; }
        if (ctx->pc != 0x4309D0u) { return; }
    }
    ctx->pc = 0x4309D0u;
label_4309d0:
    // 0x4309d0: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x4309d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_4309d4:
    // 0x4309d4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_4309d8:
    if (ctx->pc == 0x4309D8u) {
        ctx->pc = 0x4309DCu;
        goto label_4309dc;
    }
    ctx->pc = 0x4309D4u;
    {
        const bool branch_taken_0x4309d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4309d4) {
            ctx->pc = 0x430A14u;
            goto label_430a14;
        }
    }
    ctx->pc = 0x4309DCu;
label_4309dc:
    // 0x4309dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4309dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4309e0:
    // 0x4309e0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4309e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_4309e4:
    // 0x4309e4: 0xc0d37dc  jal         func_34DF70
label_4309e8:
    if (ctx->pc == 0x4309E8u) {
        ctx->pc = 0x4309E8u;
            // 0x4309e8: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x4309ECu;
        goto label_4309ec;
    }
    ctx->pc = 0x4309E4u;
    SET_GPR_U32(ctx, 31, 0x4309ECu);
    ctx->pc = 0x4309E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4309E4u;
            // 0x4309e8: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4309ECu; }
        if (ctx->pc != 0x4309ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4309ECu; }
        if (ctx->pc != 0x4309ECu) { return; }
    }
    ctx->pc = 0x4309ECu;
label_4309ec:
    // 0x4309ec: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x4309ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_4309f0:
    // 0x4309f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4309f4:
    if (ctx->pc == 0x4309F4u) {
        ctx->pc = 0x4309F8u;
        goto label_4309f8;
    }
    ctx->pc = 0x4309F0u;
    {
        const bool branch_taken_0x4309f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4309f0) {
            ctx->pc = 0x430A14u;
            goto label_430a14;
        }
    }
    ctx->pc = 0x4309F8u;
label_4309f8:
    // 0x4309f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4309f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4309fc:
    // 0x4309fc: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4309fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_430a00:
    // 0x430a00: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_430a04:
    if (ctx->pc == 0x430A04u) {
        ctx->pc = 0x430A04u;
            // 0x430a04: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x430A08u;
        goto label_430a08;
    }
    ctx->pc = 0x430A00u;
    {
        const bool branch_taken_0x430a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x430A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430A00u;
            // 0x430a04: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430a00) {
            ctx->pc = 0x430A14u;
            goto label_430a14;
        }
    }
    ctx->pc = 0x430A08u;
label_430a08:
    // 0x430a08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x430a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_430a0c:
    // 0x430a0c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x430a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_430a10:
    // 0x430a10: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x430a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_430a14:
    // 0x430a14: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_430a18:
    if (ctx->pc == 0x430A18u) {
        ctx->pc = 0x430A18u;
            // 0x430a18: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x430A1Cu;
        goto label_430a1c;
    }
    ctx->pc = 0x430A14u;
    {
        const bool branch_taken_0x430a14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x430a14) {
            ctx->pc = 0x430A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x430A14u;
            // 0x430a18: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x430A98u;
            goto label_430a98;
        }
    }
    ctx->pc = 0x430A1Cu;
label_430a1c:
    // 0x430a1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x430a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_430a20:
    // 0x430a20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x430a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_430a24:
    // 0x430a24: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x430a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_430a28:
    // 0x430a28: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x430a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_430a2c:
    // 0x430a2c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x430a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_430a30:
    // 0x430a30: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x430a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_430a34:
    // 0x430a34: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x430a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_430a38:
    // 0x430a38: 0xc0aecc4  jal         func_2BB310
label_430a3c:
    if (ctx->pc == 0x430A3Cu) {
        ctx->pc = 0x430A3Cu;
            // 0x430a3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x430A40u;
        goto label_430a40;
    }
    ctx->pc = 0x430A38u;
    SET_GPR_U32(ctx, 31, 0x430A40u);
    ctx->pc = 0x430A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430A38u;
            // 0x430a3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430A40u; }
        if (ctx->pc != 0x430A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430A40u; }
        if (ctx->pc != 0x430A40u) { return; }
    }
    ctx->pc = 0x430A40u;
label_430a40:
    // 0x430a40: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x430a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_430a44:
    // 0x430a44: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x430a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_430a48:
    // 0x430a48: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_430a4c:
    if (ctx->pc == 0x430A4Cu) {
        ctx->pc = 0x430A4Cu;
            // 0x430a4c: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x430A50u;
        goto label_430a50;
    }
    ctx->pc = 0x430A48u;
    {
        const bool branch_taken_0x430a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x430a48) {
            ctx->pc = 0x430A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x430A48u;
            // 0x430a4c: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x430A64u;
            goto label_430a64;
        }
    }
    ctx->pc = 0x430A50u;
label_430a50:
    // 0x430a50: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x430a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_430a54:
    // 0x430a54: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x430a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_430a58:
    // 0x430a58: 0x320f809  jalr        $t9
label_430a5c:
    if (ctx->pc == 0x430A5Cu) {
        ctx->pc = 0x430A5Cu;
            // 0x430a5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x430A60u;
        goto label_430a60;
    }
    ctx->pc = 0x430A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x430A60u);
        ctx->pc = 0x430A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430A58u;
            // 0x430a5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x430A60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x430A60u; }
            if (ctx->pc != 0x430A60u) { return; }
        }
        }
    }
    ctx->pc = 0x430A60u;
label_430a60:
    // 0x430a60: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x430a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_430a64:
    // 0x430a64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x430a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_430a68:
    // 0x430a68: 0xc0aec9c  jal         func_2BB270
label_430a6c:
    if (ctx->pc == 0x430A6Cu) {
        ctx->pc = 0x430A6Cu;
            // 0x430a6c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x430A70u;
        goto label_430a70;
    }
    ctx->pc = 0x430A68u;
    SET_GPR_U32(ctx, 31, 0x430A70u);
    ctx->pc = 0x430A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430A68u;
            // 0x430a6c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430A70u; }
        if (ctx->pc != 0x430A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430A70u; }
        if (ctx->pc != 0x430A70u) { return; }
    }
    ctx->pc = 0x430A70u;
label_430a70:
    // 0x430a70: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x430a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_430a74:
    // 0x430a74: 0xc0aec88  jal         func_2BB220
label_430a78:
    if (ctx->pc == 0x430A78u) {
        ctx->pc = 0x430A78u;
            // 0x430a78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x430A7Cu;
        goto label_430a7c;
    }
    ctx->pc = 0x430A74u;
    SET_GPR_U32(ctx, 31, 0x430A7Cu);
    ctx->pc = 0x430A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430A74u;
            // 0x430a78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430A7Cu; }
        if (ctx->pc != 0x430A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430A7Cu; }
        if (ctx->pc != 0x430A7Cu) { return; }
    }
    ctx->pc = 0x430A7Cu;
label_430a7c:
    // 0x430a7c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x430a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_430a80:
    // 0x430a80: 0xc0aec0c  jal         func_2BB030
label_430a84:
    if (ctx->pc == 0x430A84u) {
        ctx->pc = 0x430A84u;
            // 0x430a84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430A88u;
        goto label_430a88;
    }
    ctx->pc = 0x430A80u;
    SET_GPR_U32(ctx, 31, 0x430A88u);
    ctx->pc = 0x430A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430A80u;
            // 0x430a84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430A88u; }
        if (ctx->pc != 0x430A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430A88u; }
        if (ctx->pc != 0x430A88u) { return; }
    }
    ctx->pc = 0x430A88u;
label_430a88:
    // 0x430a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x430a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_430a8c:
    // 0x430a8c: 0xc0aeaa8  jal         func_2BAAA0
label_430a90:
    if (ctx->pc == 0x430A90u) {
        ctx->pc = 0x430A90u;
            // 0x430a90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430A94u;
        goto label_430a94;
    }
    ctx->pc = 0x430A8Cu;
    SET_GPR_U32(ctx, 31, 0x430A94u);
    ctx->pc = 0x430A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430A8Cu;
            // 0x430a90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430A94u; }
        if (ctx->pc != 0x430A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430A94u; }
        if (ctx->pc != 0x430A94u) { return; }
    }
    ctx->pc = 0x430A94u;
label_430a94:
    // 0x430a94: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x430a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_430a98:
    // 0x430a98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x430a98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_430a9c:
    // 0x430a9c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_430aa0:
    if (ctx->pc == 0x430AA0u) {
        ctx->pc = 0x430AA0u;
            // 0x430aa0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430AA4u;
        goto label_430aa4;
    }
    ctx->pc = 0x430A9Cu;
    {
        const bool branch_taken_0x430a9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x430a9c) {
            ctx->pc = 0x430AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x430A9Cu;
            // 0x430aa0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x430AB0u;
            goto label_430ab0;
        }
    }
    ctx->pc = 0x430AA4u;
label_430aa4:
    // 0x430aa4: 0xc0400a8  jal         func_1002A0
label_430aa8:
    if (ctx->pc == 0x430AA8u) {
        ctx->pc = 0x430AA8u;
            // 0x430aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430AACu;
        goto label_430aac;
    }
    ctx->pc = 0x430AA4u;
    SET_GPR_U32(ctx, 31, 0x430AACu);
    ctx->pc = 0x430AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430AA4u;
            // 0x430aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430AACu; }
        if (ctx->pc != 0x430AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430AACu; }
        if (ctx->pc != 0x430AACu) { return; }
    }
    ctx->pc = 0x430AACu;
label_430aac:
    // 0x430aac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x430aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_430ab0:
    // 0x430ab0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x430ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_430ab4:
    // 0x430ab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x430ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_430ab8:
    // 0x430ab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x430ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_430abc:
    // 0x430abc: 0x3e00008  jr          $ra
label_430ac0:
    if (ctx->pc == 0x430AC0u) {
        ctx->pc = 0x430AC0u;
            // 0x430ac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x430AC4u;
        goto label_430ac4;
    }
    ctx->pc = 0x430ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430ABCu;
            // 0x430ac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x430AC4u;
label_430ac4:
    // 0x430ac4: 0x0  nop
    ctx->pc = 0x430ac4u;
    // NOP
label_430ac8:
    // 0x430ac8: 0x0  nop
    ctx->pc = 0x430ac8u;
    // NOP
label_430acc:
    // 0x430acc: 0x0  nop
    ctx->pc = 0x430accu;
    // NOP
label_430ad0:
    // 0x430ad0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x430ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_430ad4:
    // 0x430ad4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x430ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_430ad8:
    // 0x430ad8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x430ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_430adc:
    // 0x430adc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x430adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_430ae0:
    // 0x430ae0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x430ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_430ae4:
    // 0x430ae4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x430ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_430ae8:
    // 0x430ae8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x430ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_430aec:
    // 0x430aec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x430aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_430af0:
    // 0x430af0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x430af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_430af4:
    // 0x430af4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x430af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_430af8:
    // 0x430af8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x430af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_430afc:
    // 0x430afc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x430afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_430b00:
    // 0x430b00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x430b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_430b04:
    // 0x430b04: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x430b04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_430b08:
    // 0x430b08: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_430b0c:
    if (ctx->pc == 0x430B0Cu) {
        ctx->pc = 0x430B0Cu;
            // 0x430b0c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430B10u;
        goto label_430b10;
    }
    ctx->pc = 0x430B08u;
    {
        const bool branch_taken_0x430b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x430B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430B08u;
            // 0x430b0c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430b08) {
            ctx->pc = 0x430B58u;
            goto label_430b58;
        }
    }
    ctx->pc = 0x430B10u;
label_430b10:
    // 0x430b10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x430b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_430b14:
    // 0x430b14: 0x50a30082  beql        $a1, $v1, . + 4 + (0x82 << 2)
label_430b18:
    if (ctx->pc == 0x430B18u) {
        ctx->pc = 0x430B18u;
            // 0x430b18: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x430B1Cu;
        goto label_430b1c;
    }
    ctx->pc = 0x430B14u;
    {
        const bool branch_taken_0x430b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x430b14) {
            ctx->pc = 0x430B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x430B14u;
            // 0x430b18: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x430D20u;
            goto label_430d20;
        }
    }
    ctx->pc = 0x430B1Cu;
label_430b1c:
    // 0x430b1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x430b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_430b20:
    // 0x430b20: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_430b24:
    if (ctx->pc == 0x430B24u) {
        ctx->pc = 0x430B28u;
        goto label_430b28;
    }
    ctx->pc = 0x430B20u;
    {
        const bool branch_taken_0x430b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x430b20) {
            ctx->pc = 0x430B30u;
            goto label_430b30;
        }
    }
    ctx->pc = 0x430B28u;
label_430b28:
    // 0x430b28: 0x1000007c  b           . + 4 + (0x7C << 2)
label_430b2c:
    if (ctx->pc == 0x430B2Cu) {
        ctx->pc = 0x430B30u;
        goto label_430b30;
    }
    ctx->pc = 0x430B28u;
    {
        const bool branch_taken_0x430b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x430b28) {
            ctx->pc = 0x430D1Cu;
            goto label_430d1c;
        }
    }
    ctx->pc = 0x430B30u;
label_430b30:
    // 0x430b30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x430b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_430b34:
    // 0x430b34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x430b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_430b38:
    // 0x430b38: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x430b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_430b3c:
    // 0x430b3c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x430b3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_430b40:
    // 0x430b40: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x430b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_430b44:
    // 0x430b44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x430b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_430b48:
    // 0x430b48: 0x320f809  jalr        $t9
label_430b4c:
    if (ctx->pc == 0x430B4Cu) {
        ctx->pc = 0x430B4Cu;
            // 0x430b4c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x430B50u;
        goto label_430b50;
    }
    ctx->pc = 0x430B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x430B50u);
        ctx->pc = 0x430B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430B48u;
            // 0x430b4c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x430B50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x430B50u; }
            if (ctx->pc != 0x430B50u) { return; }
        }
        }
    }
    ctx->pc = 0x430B50u;
label_430b50:
    // 0x430b50: 0x10000072  b           . + 4 + (0x72 << 2)
label_430b54:
    if (ctx->pc == 0x430B54u) {
        ctx->pc = 0x430B58u;
        goto label_430b58;
    }
    ctx->pc = 0x430B50u;
    {
        const bool branch_taken_0x430b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x430b50) {
            ctx->pc = 0x430D1Cu;
            goto label_430d1c;
        }
    }
    ctx->pc = 0x430B58u;
label_430b58:
    // 0x430b58: 0x8e370070  lw          $s7, 0x70($s1)
    ctx->pc = 0x430b58u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_430b5c:
    // 0x430b5c: 0x12e0006f  beqz        $s7, . + 4 + (0x6F << 2)
label_430b60:
    if (ctx->pc == 0x430B60u) {
        ctx->pc = 0x430B64u;
        goto label_430b64;
    }
    ctx->pc = 0x430B5Cu;
    {
        const bool branch_taken_0x430b5c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x430b5c) {
            ctx->pc = 0x430D1Cu;
            goto label_430d1c;
        }
    }
    ctx->pc = 0x430B64u;
label_430b64:
    // 0x430b64: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x430b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_430b68:
    // 0x430b68: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x430b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_430b6c:
    // 0x430b6c: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x430b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_430b70:
    // 0x430b70: 0x26330084  addiu       $s3, $s1, 0x84
    ctx->pc = 0x430b70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_430b74:
    // 0x430b74: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x430b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_430b78:
    // 0x430b78: 0x8c960130  lw          $s6, 0x130($a0)
    ctx->pc = 0x430b78u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_430b7c:
    // 0x430b7c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x430b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_430b80:
    // 0x430b80: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x430b80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_430b84:
    // 0x430b84: 0x92220098  lbu         $v0, 0x98($s1)
    ctx->pc = 0x430b84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
label_430b88:
    // 0x430b88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x430b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_430b8c:
    // 0x430b8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x430b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_430b90:
    // 0x430b90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_430b94:
    if (ctx->pc == 0x430B94u) {
        ctx->pc = 0x430B94u;
            // 0x430b94: 0x247e0010  addiu       $fp, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x430B98u;
        goto label_430b98;
    }
    ctx->pc = 0x430B90u;
    {
        const bool branch_taken_0x430b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430B90u;
            // 0x430b94: 0x247e0010  addiu       $fp, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430b90) {
            ctx->pc = 0x430BB0u;
            goto label_430bb0;
        }
    }
    ctx->pc = 0x430B98u;
label_430b98:
    // 0x430b98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x430b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_430b9c:
    // 0x430b9c: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x430b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_430ba0:
    // 0x430ba0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x430ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_430ba4:
    // 0x430ba4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x430ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_430ba8:
    // 0x430ba8: 0x320f809  jalr        $t9
label_430bac:
    if (ctx->pc == 0x430BACu) {
        ctx->pc = 0x430BB0u;
        goto label_430bb0;
    }
    ctx->pc = 0x430BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x430BB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x430BB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x430BB0u; }
            if (ctx->pc != 0x430BB0u) { return; }
        }
        }
    }
    ctx->pc = 0x430BB0u;
label_430bb0:
    // 0x430bb0: 0xc04e738  jal         func_139CE0
label_430bb4:
    if (ctx->pc == 0x430BB4u) {
        ctx->pc = 0x430BB4u;
            // 0x430bb4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x430BB8u;
        goto label_430bb8;
    }
    ctx->pc = 0x430BB0u;
    SET_GPR_U32(ctx, 31, 0x430BB8u);
    ctx->pc = 0x430BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430BB0u;
            // 0x430bb4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430BB8u; }
        if (ctx->pc != 0x430BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430BB8u; }
        if (ctx->pc != 0x430BB8u) { return; }
    }
    ctx->pc = 0x430BB8u;
label_430bb8:
    // 0x430bb8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x430bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_430bbc:
    // 0x430bbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x430bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430bc0:
    // 0x430bc0: 0xc454cc80  lwc1        $f20, -0x3380($v0)
    ctx->pc = 0x430bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_430bc4:
    // 0x430bc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x430bc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430bc8:
    // 0x430bc8: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x430bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_430bcc:
    // 0x430bcc: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x430bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_430bd0:
    // 0x430bd0: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x430bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_430bd4:
    // 0x430bd4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x430bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_430bd8:
    // 0x430bd8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x430bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_430bdc:
    // 0x430bdc: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x430bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_430be0:
    // 0x430be0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x430be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_430be4:
    // 0x430be4: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x430be4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_430be8:
    // 0x430be8: 0xc04f2d4  jal         func_13CB50
label_430bec:
    if (ctx->pc == 0x430BECu) {
        ctx->pc = 0x430BECu;
            // 0x430bec: 0x2405071c  addiu       $a1, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->pc = 0x430BF0u;
        goto label_430bf0;
    }
    ctx->pc = 0x430BE8u;
    SET_GPR_U32(ctx, 31, 0x430BF0u);
    ctx->pc = 0x430BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430BE8u;
            // 0x430bec: 0x2405071c  addiu       $a1, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CB50u;
    if (runtime->hasFunction(0x13CB50u)) {
        auto targetFn = runtime->lookupFunction(0x13CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430BF0u; }
        if (ctx->pc != 0x430BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB50_0x13cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430BF0u; }
        if (ctx->pc != 0x430BF0u) { return; }
    }
    ctx->pc = 0x430BF0u;
label_430bf0:
    // 0x430bf0: 0xc0d1c14  jal         func_347050
label_430bf4:
    if (ctx->pc == 0x430BF4u) {
        ctx->pc = 0x430BF4u;
            // 0x430bf4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430BF8u;
        goto label_430bf8;
    }
    ctx->pc = 0x430BF0u;
    SET_GPR_U32(ctx, 31, 0x430BF8u);
    ctx->pc = 0x430BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430BF0u;
            // 0x430bf4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430BF8u; }
        if (ctx->pc != 0x430BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430BF8u; }
        if (ctx->pc != 0x430BF8u) { return; }
    }
    ctx->pc = 0x430BF8u;
label_430bf8:
    // 0x430bf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x430bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_430bfc:
    // 0x430bfc: 0xc04f278  jal         func_13C9E0
label_430c00:
    if (ctx->pc == 0x430C00u) {
        ctx->pc = 0x430C00u;
            // 0x430c00: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x430C04u;
        goto label_430c04;
    }
    ctx->pc = 0x430BFCu;
    SET_GPR_U32(ctx, 31, 0x430C04u);
    ctx->pc = 0x430C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430BFCu;
            // 0x430c00: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C04u; }
        if (ctx->pc != 0x430C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C04u; }
        if (ctx->pc != 0x430C04u) { return; }
    }
    ctx->pc = 0x430C04u;
label_430c04:
    // 0x430c04: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x430c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_430c08:
    // 0x430c08: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x430c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_430c0c:
    // 0x430c0c: 0xc04cd60  jal         func_133580
label_430c10:
    if (ctx->pc == 0x430C10u) {
        ctx->pc = 0x430C10u;
            // 0x430c10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430C14u;
        goto label_430c14;
    }
    ctx->pc = 0x430C0Cu;
    SET_GPR_U32(ctx, 31, 0x430C14u);
    ctx->pc = 0x430C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430C0Cu;
            // 0x430c10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C14u; }
        if (ctx->pc != 0x430C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C14u; }
        if (ctx->pc != 0x430C14u) { return; }
    }
    ctx->pc = 0x430C14u;
label_430c14:
    // 0x430c14: 0xc0d1c10  jal         func_347040
label_430c18:
    if (ctx->pc == 0x430C18u) {
        ctx->pc = 0x430C18u;
            // 0x430c18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430C1Cu;
        goto label_430c1c;
    }
    ctx->pc = 0x430C14u;
    SET_GPR_U32(ctx, 31, 0x430C1Cu);
    ctx->pc = 0x430C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430C14u;
            // 0x430c18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C1Cu; }
        if (ctx->pc != 0x430C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C1Cu; }
        if (ctx->pc != 0x430C1Cu) { return; }
    }
    ctx->pc = 0x430C1Cu;
label_430c1c:
    // 0x430c1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x430c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_430c20:
    // 0x430c20: 0xc04ce80  jal         func_133A00
label_430c24:
    if (ctx->pc == 0x430C24u) {
        ctx->pc = 0x430C24u;
            // 0x430c24: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x430C28u;
        goto label_430c28;
    }
    ctx->pc = 0x430C20u;
    SET_GPR_U32(ctx, 31, 0x430C28u);
    ctx->pc = 0x430C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430C20u;
            // 0x430c24: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C28u; }
        if (ctx->pc != 0x430C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C28u; }
        if (ctx->pc != 0x430C28u) { return; }
    }
    ctx->pc = 0x430C28u;
label_430c28:
    // 0x430c28: 0xc0d4108  jal         func_350420
label_430c2c:
    if (ctx->pc == 0x430C2Cu) {
        ctx->pc = 0x430C30u;
        goto label_430c30;
    }
    ctx->pc = 0x430C28u;
    SET_GPR_U32(ctx, 31, 0x430C30u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C30u; }
        if (ctx->pc != 0x430C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C30u; }
        if (ctx->pc != 0x430C30u) { return; }
    }
    ctx->pc = 0x430C30u;
label_430c30:
    // 0x430c30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x430c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_430c34:
    // 0x430c34: 0xc0d4104  jal         func_350410
label_430c38:
    if (ctx->pc == 0x430C38u) {
        ctx->pc = 0x430C38u;
            // 0x430c38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430C3Cu;
        goto label_430c3c;
    }
    ctx->pc = 0x430C34u;
    SET_GPR_U32(ctx, 31, 0x430C3Cu);
    ctx->pc = 0x430C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430C34u;
            // 0x430c38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C3Cu; }
        if (ctx->pc != 0x430C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C3Cu; }
        if (ctx->pc != 0x430C3Cu) { return; }
    }
    ctx->pc = 0x430C3Cu;
label_430c3c:
    // 0x430c3c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x430c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_430c40:
    // 0x430c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x430c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_430c44:
    // 0x430c44: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x430c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_430c48:
    // 0x430c48: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x430c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_430c4c:
    // 0x430c4c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x430c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_430c50:
    // 0x430c50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x430c50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430c54:
    // 0x430c54: 0xc0d40ac  jal         func_3502B0
label_430c58:
    if (ctx->pc == 0x430C58u) {
        ctx->pc = 0x430C58u;
            // 0x430c58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x430C5Cu;
        goto label_430c5c;
    }
    ctx->pc = 0x430C54u;
    SET_GPR_U32(ctx, 31, 0x430C5Cu);
    ctx->pc = 0x430C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430C54u;
            // 0x430c58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C5Cu; }
        if (ctx->pc != 0x430C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C5Cu; }
        if (ctx->pc != 0x430C5Cu) { return; }
    }
    ctx->pc = 0x430C5Cu;
label_430c5c:
    // 0x430c5c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x430c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_430c60:
    // 0x430c60: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_430c64:
    if (ctx->pc == 0x430C64u) {
        ctx->pc = 0x430C64u;
            // 0x430c64: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x430C68u;
        goto label_430c68;
    }
    ctx->pc = 0x430C60u;
    {
        const bool branch_taken_0x430c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x430C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430C60u;
            // 0x430c64: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c60) {
            ctx->pc = 0x430CE8u;
            goto label_430ce8;
        }
    }
    ctx->pc = 0x430C68u;
label_430c68:
    // 0x430c68: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x430c68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_430c6c:
    // 0x430c6c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x430c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_430c70:
    // 0x430c70: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x430c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_430c74:
    // 0x430c74: 0xc04cd60  jal         func_133580
label_430c78:
    if (ctx->pc == 0x430C78u) {
        ctx->pc = 0x430C78u;
            // 0x430c78: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x430C7Cu;
        goto label_430c7c;
    }
    ctx->pc = 0x430C74u;
    SET_GPR_U32(ctx, 31, 0x430C7Cu);
    ctx->pc = 0x430C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430C74u;
            // 0x430c78: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C7Cu; }
        if (ctx->pc != 0x430C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C7Cu; }
        if (ctx->pc != 0x430C7Cu) { return; }
    }
    ctx->pc = 0x430C7Cu;
label_430c7c:
    // 0x430c7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x430c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_430c80:
    // 0x430c80: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x430c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_430c84:
    // 0x430c84: 0xc10c364  jal         func_430D90
label_430c88:
    if (ctx->pc == 0x430C88u) {
        ctx->pc = 0x430C88u;
            // 0x430c88: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x430C8Cu;
        goto label_430c8c;
    }
    ctx->pc = 0x430C84u;
    SET_GPR_U32(ctx, 31, 0x430C8Cu);
    ctx->pc = 0x430C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430C84u;
            // 0x430c88: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x430D90u;
    if (runtime->hasFunction(0x430D90u)) {
        auto targetFn = runtime->lookupFunction(0x430D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C8Cu; }
        if (ctx->pc != 0x430C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00430D90_0x430d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C8Cu; }
        if (ctx->pc != 0x430C8Cu) { return; }
    }
    ctx->pc = 0x430C8Cu;
label_430c8c:
    // 0x430c8c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x430c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_430c90:
    // 0x430c90: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x430c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_430c94:
    // 0x430c94: 0xc04e4a4  jal         func_139290
label_430c98:
    if (ctx->pc == 0x430C98u) {
        ctx->pc = 0x430C98u;
            // 0x430c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430C9Cu;
        goto label_430c9c;
    }
    ctx->pc = 0x430C94u;
    SET_GPR_U32(ctx, 31, 0x430C9Cu);
    ctx->pc = 0x430C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430C94u;
            // 0x430c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C9Cu; }
        if (ctx->pc != 0x430C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430C9Cu; }
        if (ctx->pc != 0x430C9Cu) { return; }
    }
    ctx->pc = 0x430C9Cu;
label_430c9c:
    // 0x430c9c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x430c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_430ca0:
    // 0x430ca0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x430ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_430ca4:
    // 0x430ca4: 0x320f809  jalr        $t9
label_430ca8:
    if (ctx->pc == 0x430CA8u) {
        ctx->pc = 0x430CA8u;
            // 0x430ca8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430CACu;
        goto label_430cac;
    }
    ctx->pc = 0x430CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x430CACu);
        ctx->pc = 0x430CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430CA4u;
            // 0x430ca8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x430CACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x430CACu; }
            if (ctx->pc != 0x430CACu) { return; }
        }
        }
    }
    ctx->pc = 0x430CACu;
label_430cac:
    // 0x430cac: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x430cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_430cb0:
    // 0x430cb0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x430cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_430cb4:
    // 0x430cb4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x430cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_430cb8:
    // 0x430cb8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x430cb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_430cbc:
    // 0x430cbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x430cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_430cc0:
    // 0x430cc0: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x430cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_430cc4:
    // 0x430cc4: 0xc04cfcc  jal         func_133F30
label_430cc8:
    if (ctx->pc == 0x430CC8u) {
        ctx->pc = 0x430CC8u;
            // 0x430cc8: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x430CCCu;
        goto label_430ccc;
    }
    ctx->pc = 0x430CC4u;
    SET_GPR_U32(ctx, 31, 0x430CCCu);
    ctx->pc = 0x430CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430CC4u;
            // 0x430cc8: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430CCCu; }
        if (ctx->pc != 0x430CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430CCCu; }
        if (ctx->pc != 0x430CCCu) { return; }
    }
    ctx->pc = 0x430CCCu;
label_430ccc:
    // 0x430ccc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x430cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_430cd0:
    // 0x430cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x430cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_430cd4:
    // 0x430cd4: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x430cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_430cd8:
    // 0x430cd8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x430cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_430cdc:
    // 0x430cdc: 0xc10c354  jal         func_430D50
label_430ce0:
    if (ctx->pc == 0x430CE0u) {
        ctx->pc = 0x430CE0u;
            // 0x430ce0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x430CE4u;
        goto label_430ce4;
    }
    ctx->pc = 0x430CDCu;
    SET_GPR_U32(ctx, 31, 0x430CE4u);
    ctx->pc = 0x430CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430CDCu;
            // 0x430ce0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x430D50u;
    if (runtime->hasFunction(0x430D50u)) {
        auto targetFn = runtime->lookupFunction(0x430D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430CE4u; }
        if (ctx->pc != 0x430CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00430D50_0x430d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430CE4u; }
        if (ctx->pc != 0x430CE4u) { return; }
    }
    ctx->pc = 0x430CE4u;
label_430ce4:
    // 0x430ce4: 0x0  nop
    ctx->pc = 0x430ce4u;
    // NOP
label_430ce8:
    // 0x430ce8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x430ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_430cec:
    // 0x430cec: 0x217182b  sltu        $v1, $s0, $s7
    ctx->pc = 0x430cecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_430cf0:
    // 0x430cf0: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_430cf4:
    if (ctx->pc == 0x430CF4u) {
        ctx->pc = 0x430CF4u;
            // 0x430cf4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x430CF8u;
        goto label_430cf8;
    }
    ctx->pc = 0x430CF0u;
    {
        const bool branch_taken_0x430cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x430CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430CF0u;
            // 0x430cf4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430cf0) {
            ctx->pc = 0x430BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_430bc8;
        }
    }
    ctx->pc = 0x430CF8u;
label_430cf8:
    // 0x430cf8: 0x92230098  lbu         $v1, 0x98($s1)
    ctx->pc = 0x430cf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
label_430cfc:
    // 0x430cfc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_430d00:
    if (ctx->pc == 0x430D00u) {
        ctx->pc = 0x430D04u;
        goto label_430d04;
    }
    ctx->pc = 0x430CFCu;
    {
        const bool branch_taken_0x430cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x430cfc) {
            ctx->pc = 0x430D1Cu;
            goto label_430d1c;
        }
    }
    ctx->pc = 0x430D04u;
label_430d04:
    // 0x430d04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x430d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_430d08:
    // 0x430d08: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x430d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_430d0c:
    // 0x430d0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x430d0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_430d10:
    // 0x430d10: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x430d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_430d14:
    // 0x430d14: 0x320f809  jalr        $t9
label_430d18:
    if (ctx->pc == 0x430D18u) {
        ctx->pc = 0x430D1Cu;
        goto label_430d1c;
    }
    ctx->pc = 0x430D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x430D1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x430D1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x430D1Cu; }
            if (ctx->pc != 0x430D1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x430D1Cu;
label_430d1c:
    // 0x430d1c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x430d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_430d20:
    // 0x430d20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x430d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_430d24:
    // 0x430d24: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x430d24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_430d28:
    // 0x430d28: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x430d28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_430d2c:
    // 0x430d2c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x430d2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_430d30:
    // 0x430d30: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x430d30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_430d34:
    // 0x430d34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x430d34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_430d38:
    // 0x430d38: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x430d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_430d3c:
    // 0x430d3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x430d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_430d40:
    // 0x430d40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x430d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_430d44:
    // 0x430d44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x430d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_430d48:
    // 0x430d48: 0x3e00008  jr          $ra
label_430d4c:
    if (ctx->pc == 0x430D4Cu) {
        ctx->pc = 0x430D4Cu;
            // 0x430d4c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x430D50u;
        goto label_fallthrough_0x430d48;
    }
    ctx->pc = 0x430D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430D48u;
            // 0x430d4c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x430d48:
    ctx->pc = 0x430D50u;
}
