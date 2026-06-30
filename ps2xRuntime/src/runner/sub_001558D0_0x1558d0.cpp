#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001558D0
// Address: 0x1558d0 - 0x155d50
void sub_001558D0_0x1558d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001558D0_0x1558d0");
#endif

    switch (ctx->pc) {
        case 0x1558d0u: goto label_1558d0;
        case 0x1558d4u: goto label_1558d4;
        case 0x1558d8u: goto label_1558d8;
        case 0x1558dcu: goto label_1558dc;
        case 0x1558e0u: goto label_1558e0;
        case 0x1558e4u: goto label_1558e4;
        case 0x1558e8u: goto label_1558e8;
        case 0x1558ecu: goto label_1558ec;
        case 0x1558f0u: goto label_1558f0;
        case 0x1558f4u: goto label_1558f4;
        case 0x1558f8u: goto label_1558f8;
        case 0x1558fcu: goto label_1558fc;
        case 0x155900u: goto label_155900;
        case 0x155904u: goto label_155904;
        case 0x155908u: goto label_155908;
        case 0x15590cu: goto label_15590c;
        case 0x155910u: goto label_155910;
        case 0x155914u: goto label_155914;
        case 0x155918u: goto label_155918;
        case 0x15591cu: goto label_15591c;
        case 0x155920u: goto label_155920;
        case 0x155924u: goto label_155924;
        case 0x155928u: goto label_155928;
        case 0x15592cu: goto label_15592c;
        case 0x155930u: goto label_155930;
        case 0x155934u: goto label_155934;
        case 0x155938u: goto label_155938;
        case 0x15593cu: goto label_15593c;
        case 0x155940u: goto label_155940;
        case 0x155944u: goto label_155944;
        case 0x155948u: goto label_155948;
        case 0x15594cu: goto label_15594c;
        case 0x155950u: goto label_155950;
        case 0x155954u: goto label_155954;
        case 0x155958u: goto label_155958;
        case 0x15595cu: goto label_15595c;
        case 0x155960u: goto label_155960;
        case 0x155964u: goto label_155964;
        case 0x155968u: goto label_155968;
        case 0x15596cu: goto label_15596c;
        case 0x155970u: goto label_155970;
        case 0x155974u: goto label_155974;
        case 0x155978u: goto label_155978;
        case 0x15597cu: goto label_15597c;
        case 0x155980u: goto label_155980;
        case 0x155984u: goto label_155984;
        case 0x155988u: goto label_155988;
        case 0x15598cu: goto label_15598c;
        case 0x155990u: goto label_155990;
        case 0x155994u: goto label_155994;
        case 0x155998u: goto label_155998;
        case 0x15599cu: goto label_15599c;
        case 0x1559a0u: goto label_1559a0;
        case 0x1559a4u: goto label_1559a4;
        case 0x1559a8u: goto label_1559a8;
        case 0x1559acu: goto label_1559ac;
        case 0x1559b0u: goto label_1559b0;
        case 0x1559b4u: goto label_1559b4;
        case 0x1559b8u: goto label_1559b8;
        case 0x1559bcu: goto label_1559bc;
        case 0x1559c0u: goto label_1559c0;
        case 0x1559c4u: goto label_1559c4;
        case 0x1559c8u: goto label_1559c8;
        case 0x1559ccu: goto label_1559cc;
        case 0x1559d0u: goto label_1559d0;
        case 0x1559d4u: goto label_1559d4;
        case 0x1559d8u: goto label_1559d8;
        case 0x1559dcu: goto label_1559dc;
        case 0x1559e0u: goto label_1559e0;
        case 0x1559e4u: goto label_1559e4;
        case 0x1559e8u: goto label_1559e8;
        case 0x1559ecu: goto label_1559ec;
        case 0x1559f0u: goto label_1559f0;
        case 0x1559f4u: goto label_1559f4;
        case 0x1559f8u: goto label_1559f8;
        case 0x1559fcu: goto label_1559fc;
        case 0x155a00u: goto label_155a00;
        case 0x155a04u: goto label_155a04;
        case 0x155a08u: goto label_155a08;
        case 0x155a0cu: goto label_155a0c;
        case 0x155a10u: goto label_155a10;
        case 0x155a14u: goto label_155a14;
        case 0x155a18u: goto label_155a18;
        case 0x155a1cu: goto label_155a1c;
        case 0x155a20u: goto label_155a20;
        case 0x155a24u: goto label_155a24;
        case 0x155a28u: goto label_155a28;
        case 0x155a2cu: goto label_155a2c;
        case 0x155a30u: goto label_155a30;
        case 0x155a34u: goto label_155a34;
        case 0x155a38u: goto label_155a38;
        case 0x155a3cu: goto label_155a3c;
        case 0x155a40u: goto label_155a40;
        case 0x155a44u: goto label_155a44;
        case 0x155a48u: goto label_155a48;
        case 0x155a4cu: goto label_155a4c;
        case 0x155a50u: goto label_155a50;
        case 0x155a54u: goto label_155a54;
        case 0x155a58u: goto label_155a58;
        case 0x155a5cu: goto label_155a5c;
        case 0x155a60u: goto label_155a60;
        case 0x155a64u: goto label_155a64;
        case 0x155a68u: goto label_155a68;
        case 0x155a6cu: goto label_155a6c;
        case 0x155a70u: goto label_155a70;
        case 0x155a74u: goto label_155a74;
        case 0x155a78u: goto label_155a78;
        case 0x155a7cu: goto label_155a7c;
        case 0x155a80u: goto label_155a80;
        case 0x155a84u: goto label_155a84;
        case 0x155a88u: goto label_155a88;
        case 0x155a8cu: goto label_155a8c;
        case 0x155a90u: goto label_155a90;
        case 0x155a94u: goto label_155a94;
        case 0x155a98u: goto label_155a98;
        case 0x155a9cu: goto label_155a9c;
        case 0x155aa0u: goto label_155aa0;
        case 0x155aa4u: goto label_155aa4;
        case 0x155aa8u: goto label_155aa8;
        case 0x155aacu: goto label_155aac;
        case 0x155ab0u: goto label_155ab0;
        case 0x155ab4u: goto label_155ab4;
        case 0x155ab8u: goto label_155ab8;
        case 0x155abcu: goto label_155abc;
        case 0x155ac0u: goto label_155ac0;
        case 0x155ac4u: goto label_155ac4;
        case 0x155ac8u: goto label_155ac8;
        case 0x155accu: goto label_155acc;
        case 0x155ad0u: goto label_155ad0;
        case 0x155ad4u: goto label_155ad4;
        case 0x155ad8u: goto label_155ad8;
        case 0x155adcu: goto label_155adc;
        case 0x155ae0u: goto label_155ae0;
        case 0x155ae4u: goto label_155ae4;
        case 0x155ae8u: goto label_155ae8;
        case 0x155aecu: goto label_155aec;
        case 0x155af0u: goto label_155af0;
        case 0x155af4u: goto label_155af4;
        case 0x155af8u: goto label_155af8;
        case 0x155afcu: goto label_155afc;
        case 0x155b00u: goto label_155b00;
        case 0x155b04u: goto label_155b04;
        case 0x155b08u: goto label_155b08;
        case 0x155b0cu: goto label_155b0c;
        case 0x155b10u: goto label_155b10;
        case 0x155b14u: goto label_155b14;
        case 0x155b18u: goto label_155b18;
        case 0x155b1cu: goto label_155b1c;
        case 0x155b20u: goto label_155b20;
        case 0x155b24u: goto label_155b24;
        case 0x155b28u: goto label_155b28;
        case 0x155b2cu: goto label_155b2c;
        case 0x155b30u: goto label_155b30;
        case 0x155b34u: goto label_155b34;
        case 0x155b38u: goto label_155b38;
        case 0x155b3cu: goto label_155b3c;
        case 0x155b40u: goto label_155b40;
        case 0x155b44u: goto label_155b44;
        case 0x155b48u: goto label_155b48;
        case 0x155b4cu: goto label_155b4c;
        case 0x155b50u: goto label_155b50;
        case 0x155b54u: goto label_155b54;
        case 0x155b58u: goto label_155b58;
        case 0x155b5cu: goto label_155b5c;
        case 0x155b60u: goto label_155b60;
        case 0x155b64u: goto label_155b64;
        case 0x155b68u: goto label_155b68;
        case 0x155b6cu: goto label_155b6c;
        case 0x155b70u: goto label_155b70;
        case 0x155b74u: goto label_155b74;
        case 0x155b78u: goto label_155b78;
        case 0x155b7cu: goto label_155b7c;
        case 0x155b80u: goto label_155b80;
        case 0x155b84u: goto label_155b84;
        case 0x155b88u: goto label_155b88;
        case 0x155b8cu: goto label_155b8c;
        case 0x155b90u: goto label_155b90;
        case 0x155b94u: goto label_155b94;
        case 0x155b98u: goto label_155b98;
        case 0x155b9cu: goto label_155b9c;
        case 0x155ba0u: goto label_155ba0;
        case 0x155ba4u: goto label_155ba4;
        case 0x155ba8u: goto label_155ba8;
        case 0x155bacu: goto label_155bac;
        case 0x155bb0u: goto label_155bb0;
        case 0x155bb4u: goto label_155bb4;
        case 0x155bb8u: goto label_155bb8;
        case 0x155bbcu: goto label_155bbc;
        case 0x155bc0u: goto label_155bc0;
        case 0x155bc4u: goto label_155bc4;
        case 0x155bc8u: goto label_155bc8;
        case 0x155bccu: goto label_155bcc;
        case 0x155bd0u: goto label_155bd0;
        case 0x155bd4u: goto label_155bd4;
        case 0x155bd8u: goto label_155bd8;
        case 0x155bdcu: goto label_155bdc;
        case 0x155be0u: goto label_155be0;
        case 0x155be4u: goto label_155be4;
        case 0x155be8u: goto label_155be8;
        case 0x155becu: goto label_155bec;
        case 0x155bf0u: goto label_155bf0;
        case 0x155bf4u: goto label_155bf4;
        case 0x155bf8u: goto label_155bf8;
        case 0x155bfcu: goto label_155bfc;
        case 0x155c00u: goto label_155c00;
        case 0x155c04u: goto label_155c04;
        case 0x155c08u: goto label_155c08;
        case 0x155c0cu: goto label_155c0c;
        case 0x155c10u: goto label_155c10;
        case 0x155c14u: goto label_155c14;
        case 0x155c18u: goto label_155c18;
        case 0x155c1cu: goto label_155c1c;
        case 0x155c20u: goto label_155c20;
        case 0x155c24u: goto label_155c24;
        case 0x155c28u: goto label_155c28;
        case 0x155c2cu: goto label_155c2c;
        case 0x155c30u: goto label_155c30;
        case 0x155c34u: goto label_155c34;
        case 0x155c38u: goto label_155c38;
        case 0x155c3cu: goto label_155c3c;
        case 0x155c40u: goto label_155c40;
        case 0x155c44u: goto label_155c44;
        case 0x155c48u: goto label_155c48;
        case 0x155c4cu: goto label_155c4c;
        case 0x155c50u: goto label_155c50;
        case 0x155c54u: goto label_155c54;
        case 0x155c58u: goto label_155c58;
        case 0x155c5cu: goto label_155c5c;
        case 0x155c60u: goto label_155c60;
        case 0x155c64u: goto label_155c64;
        case 0x155c68u: goto label_155c68;
        case 0x155c6cu: goto label_155c6c;
        case 0x155c70u: goto label_155c70;
        case 0x155c74u: goto label_155c74;
        case 0x155c78u: goto label_155c78;
        case 0x155c7cu: goto label_155c7c;
        case 0x155c80u: goto label_155c80;
        case 0x155c84u: goto label_155c84;
        case 0x155c88u: goto label_155c88;
        case 0x155c8cu: goto label_155c8c;
        case 0x155c90u: goto label_155c90;
        case 0x155c94u: goto label_155c94;
        case 0x155c98u: goto label_155c98;
        case 0x155c9cu: goto label_155c9c;
        case 0x155ca0u: goto label_155ca0;
        case 0x155ca4u: goto label_155ca4;
        case 0x155ca8u: goto label_155ca8;
        case 0x155cacu: goto label_155cac;
        case 0x155cb0u: goto label_155cb0;
        case 0x155cb4u: goto label_155cb4;
        case 0x155cb8u: goto label_155cb8;
        case 0x155cbcu: goto label_155cbc;
        case 0x155cc0u: goto label_155cc0;
        case 0x155cc4u: goto label_155cc4;
        case 0x155cc8u: goto label_155cc8;
        case 0x155cccu: goto label_155ccc;
        case 0x155cd0u: goto label_155cd0;
        case 0x155cd4u: goto label_155cd4;
        case 0x155cd8u: goto label_155cd8;
        case 0x155cdcu: goto label_155cdc;
        case 0x155ce0u: goto label_155ce0;
        case 0x155ce4u: goto label_155ce4;
        case 0x155ce8u: goto label_155ce8;
        case 0x155cecu: goto label_155cec;
        case 0x155cf0u: goto label_155cf0;
        case 0x155cf4u: goto label_155cf4;
        case 0x155cf8u: goto label_155cf8;
        case 0x155cfcu: goto label_155cfc;
        case 0x155d00u: goto label_155d00;
        case 0x155d04u: goto label_155d04;
        case 0x155d08u: goto label_155d08;
        case 0x155d0cu: goto label_155d0c;
        case 0x155d10u: goto label_155d10;
        case 0x155d14u: goto label_155d14;
        case 0x155d18u: goto label_155d18;
        case 0x155d1cu: goto label_155d1c;
        case 0x155d20u: goto label_155d20;
        case 0x155d24u: goto label_155d24;
        case 0x155d28u: goto label_155d28;
        case 0x155d2cu: goto label_155d2c;
        case 0x155d30u: goto label_155d30;
        case 0x155d34u: goto label_155d34;
        case 0x155d38u: goto label_155d38;
        case 0x155d3cu: goto label_155d3c;
        case 0x155d40u: goto label_155d40;
        case 0x155d44u: goto label_155d44;
        case 0x155d48u: goto label_155d48;
        case 0x155d4cu: goto label_155d4c;
        default: break;
    }

    ctx->pc = 0x1558d0u;

label_1558d0:
    // 0x1558d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1558d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1558d4:
    // 0x1558d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1558d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1558d8:
    // 0x1558d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1558d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1558dc:
    // 0x1558dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1558dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1558e0:
    // 0x1558e0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1558e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1558e4:
    // 0x1558e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1558e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1558e8:
    // 0x1558e8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1558e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1558ec:
    // 0x1558ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1558ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1558f0:
    // 0x1558f0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1558f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1558f4:
    // 0x1558f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1558f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1558f8:
    // 0x1558f8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1558f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1558fc:
    // 0x1558fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1558fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_155900:
    // 0x155900: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x155900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155904:
    // 0x155904: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_155908:
    // 0x155908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15590c:
    // 0x15590c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_155910:
    // 0x155910: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x155910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_155914:
    // 0x155914: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x155914u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_155918:
    // 0x155918: 0x186000ff  blez        $v1, . + 4 + (0xFF << 2)
label_15591c:
    if (ctx->pc == 0x15591Cu) {
        ctx->pc = 0x15591Cu;
            // 0x15591c: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        ctx->pc = 0x155920u;
        goto label_155920;
    }
    ctx->pc = 0x155918u;
    {
        const bool branch_taken_0x155918 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x15591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155918u;
            // 0x15591c: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155918) {
            ctx->pc = 0x155D18u;
            goto label_155d18;
        }
    }
    ctx->pc = 0x155920u;
label_155920:
    // 0x155920: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_155924:
    // 0x155924: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_155928:
    // 0x155928: 0xac775774  sw          $s7, 0x5774($v1)
    ctx->pc = 0x155928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 23));
label_15592c:
    // 0x15592c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x15592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_155930:
    // 0x155930: 0xac435770  sw          $v1, 0x5770($v0)
    ctx->pc = 0x155930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
label_155934:
    // 0x155934: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x155934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_155938:
    // 0x155938: 0xc0535e0  jal         func_14D780
label_15593c:
    if (ctx->pc == 0x15593Cu) {
        ctx->pc = 0x15593Cu;
            // 0x15593c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x155940u;
        goto label_155940;
    }
    ctx->pc = 0x155938u;
    SET_GPR_U32(ctx, 31, 0x155940u);
    ctx->pc = 0x15593Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155938u;
            // 0x15593c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D780u;
    if (runtime->hasFunction(0x14D780u)) {
        auto targetFn = runtime->lookupFunction(0x14D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155940u; }
        if (ctx->pc != 0x155940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D780_0x14d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155940u; }
        if (ctx->pc != 0x155940u) { return; }
    }
    ctx->pc = 0x155940u;
label_155940:
    // 0x155940: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_155944:
    // 0x155944: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_155948:
    // 0x155948: 0x8c445760  lw          $a0, 0x5760($v0)
    ctx->pc = 0x155948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
label_15594c:
    // 0x15594c: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x15594cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
label_155950:
    // 0x155950: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x155950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_155954:
    // 0x155954: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x155954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_155958:
    // 0x155958: 0xac645764  sw          $a0, 0x5764($v1)
    ctx->pc = 0x155958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22372), GPR_U32(ctx, 4));
label_15595c:
    // 0x15595c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15595cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_155960:
    // 0x155960: 0x8e690018  lw          $t1, 0x18($s3)
    ctx->pc = 0x155960u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_155964:
    // 0x155964: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_155968:
    // 0x155968: 0x8c485768  lw          $t0, 0x5768($v0)
    ctx->pc = 0x155968u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22376)));
label_15596c:
    // 0x15596c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15596cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_155970:
    // 0x155970: 0xace95760  sw          $t1, 0x5760($a3)
    ctx->pc = 0x155970u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22368), GPR_U32(ctx, 9));
label_155974:
    // 0x155974: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x155974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_155978:
    // 0x155978: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15597c:
    // 0x15597c: 0x8c425814  lw          $v0, 0x5814($v0)
    ctx->pc = 0x15597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
label_155980:
    // 0x155980: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x155980u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_155984:
    // 0x155984: 0xaca8576c  sw          $t0, 0x576C($a1)
    ctx->pc = 0x155984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22380), GPR_U32(ctx, 8));
label_155988:
    // 0x155988: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x155988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_15598c:
    // 0x15598c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15598cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_155990:
    // 0x155990: 0xacc5577c  sw          $a1, 0x577C($a2)
    ctx->pc = 0x155990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22396), GPR_U32(ctx, 5));
label_155994:
    // 0x155994: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x155994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_155998:
    // 0x155998: 0xac855768  sw          $a1, 0x5768($a0)
    ctx->pc = 0x155998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22376), GPR_U32(ctx, 5));
label_15599c:
    // 0x15599c: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x15599cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1559a0:
    // 0x1559a0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1559a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1559a4:
    // 0x1559a4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1559a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1559a8:
    // 0x1559a8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_1559ac:
    if (ctx->pc == 0x1559ACu) {
        ctx->pc = 0x1559ACu;
            // 0x1559ac: 0xac645780  sw          $a0, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 4));
        ctx->pc = 0x1559B0u;
        goto label_1559b0;
    }
    ctx->pc = 0x1559A8u;
    {
        const bool branch_taken_0x1559a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559A8u;
            // 0x1559ac: 0xac645780  sw          $a0, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559a8) {
            ctx->pc = 0x155AB8u;
            goto label_155ab8;
        }
    }
    ctx->pc = 0x1559B0u;
label_1559b0:
    // 0x1559b0: 0xc053658  jal         func_14D960
label_1559b4:
    if (ctx->pc == 0x1559B4u) {
        ctx->pc = 0x1559B8u;
        goto label_1559b8;
    }
    ctx->pc = 0x1559B0u;
    SET_GPR_U32(ctx, 31, 0x1559B8u);
    ctx->pc = 0x14D960u;
    if (runtime->hasFunction(0x14D960u)) {
        auto targetFn = runtime->lookupFunction(0x14D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1559B8u; }
        if (ctx->pc != 0x1559B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D960_0x14d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1559B8u; }
        if (ctx->pc != 0x1559B8u) { return; }
    }
    ctx->pc = 0x1559B8u;
label_1559b8:
    // 0x1559b8: 0x1ac000d1  blez        $s6, . + 4 + (0xD1 << 2)
label_1559bc:
    if (ctx->pc == 0x1559BCu) {
        ctx->pc = 0x1559BCu;
            // 0x1559bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1559C0u;
        goto label_1559c0;
    }
    ctx->pc = 0x1559B8u;
    {
        const bool branch_taken_0x1559b8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1559BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559B8u;
            // 0x1559bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559b8) {
            ctx->pc = 0x155D00u;
            goto label_155d00;
        }
    }
    ctx->pc = 0x1559C0u;
label_1559c0:
    // 0x1559c0: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x1559c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1559c4:
    // 0x1559c4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1559c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1559c8:
    // 0x1559c8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1559c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1559cc:
    // 0x1559cc: 0x10c000c6  beqz        $a2, . + 4 + (0xC6 << 2)
label_1559d0:
    if (ctx->pc == 0x1559D0u) {
        ctx->pc = 0x1559D4u;
        goto label_1559d4;
    }
    ctx->pc = 0x1559CCu;
    {
        const bool branch_taken_0x1559cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1559cc) {
            ctx->pc = 0x155CE8u;
            goto label_155ce8;
        }
    }
    ctx->pc = 0x1559D4u;
label_1559d4:
    // 0x1559d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1559d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1559d8:
    // 0x1559d8: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_1559dc:
    if (ctx->pc == 0x1559DCu) {
        ctx->pc = 0x1559DCu;
            // 0x1559dc: 0xac665788  sw          $a2, 0x5788($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22408), GPR_U32(ctx, 6));
        ctx->pc = 0x1559E0u;
        goto label_1559e0;
    }
    ctx->pc = 0x1559D8u;
    {
        const bool branch_taken_0x1559d8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1559DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559D8u;
            // 0x1559dc: 0xac665788  sw          $a2, 0x5788($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22408), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559d8) {
            ctx->pc = 0x1559E8u;
            goto label_1559e8;
        }
    }
    ctx->pc = 0x1559E0u;
label_1559e0:
    // 0x1559e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1559e4:
    if (ctx->pc == 0x1559E4u) {
        ctx->pc = 0x1559E4u;
            // 0x1559e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1559E8u;
        goto label_1559e8;
    }
    ctx->pc = 0x1559E0u;
    {
        const bool branch_taken_0x1559e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559E0u;
            // 0x1559e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559e0) {
            ctx->pc = 0x1559ECu;
            goto label_1559ec;
        }
    }
    ctx->pc = 0x1559E8u;
label_1559e8:
    // 0x1559e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1559e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1559ec:
    // 0x1559ec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1559ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1559f0:
    // 0x1559f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1559f4:
    if (ctx->pc == 0x1559F4u) {
        ctx->pc = 0x1559F4u;
            // 0x1559f4: 0xac64578c  sw          $a0, 0x578C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22412), GPR_U32(ctx, 4));
        ctx->pc = 0x1559F8u;
        goto label_1559f8;
    }
    ctx->pc = 0x1559F0u;
    {
        const bool branch_taken_0x1559f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559F0u;
            // 0x1559f4: 0xac64578c  sw          $a0, 0x578C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559f0) {
            ctx->pc = 0x155A10u;
            goto label_155a10;
        }
    }
    ctx->pc = 0x1559F8u;
label_1559f8:
    // 0x1559f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1559f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1559fc:
    // 0x1559fc: 0x8c635770  lw          $v1, 0x5770($v1)
    ctx->pc = 0x1559fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22384)));
label_155a00:
    // 0x155a00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_155a04:
    // 0x155a04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x155a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_155a08:
    // 0x155a08: 0x10000002  b           . + 4 + (0x2 << 2)
label_155a0c:
    if (ctx->pc == 0x155A0Cu) {
        ctx->pc = 0x155A0Cu;
            // 0x155a0c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x155A10u;
        goto label_155a10;
    }
    ctx->pc = 0x155A08u;
    {
        const bool branch_taken_0x155a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A08u;
            // 0x155a0c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a08) {
            ctx->pc = 0x155A14u;
            goto label_155a14;
        }
    }
    ctx->pc = 0x155A10u;
label_155a10:
    // 0x155a10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155a14:
    // 0x155a14: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x155a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_155a18:
    // 0x155a18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_155a1c:
    if (ctx->pc == 0x155A1Cu) {
        ctx->pc = 0x155A20u;
        goto label_155a20;
    }
    ctx->pc = 0x155A18u;
    {
        const bool branch_taken_0x155a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155a18) {
            ctx->pc = 0x155A28u;
            goto label_155a28;
        }
    }
    ctx->pc = 0x155A20u;
label_155a20:
    // 0x155a20: 0x10000013  b           . + 4 + (0x13 << 2)
label_155a24:
    if (ctx->pc == 0x155A24u) {
        ctx->pc = 0x155A24u;
            // 0x155a24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x155A28u;
        goto label_155a28;
    }
    ctx->pc = 0x155A20u;
    {
        const bool branch_taken_0x155a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A20u;
            // 0x155a24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a20) {
            ctx->pc = 0x155A70u;
            goto label_155a70;
        }
    }
    ctx->pc = 0x155A28u;
label_155a28:
    // 0x155a28: 0x30850022  andi        $a1, $a0, 0x22
    ctx->pc = 0x155a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34);
label_155a2c:
    // 0x155a2c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_155a30:
    // 0x155a30: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_155a34:
    // 0x155a34: 0x8c8457b0  lw          $a0, 0x57B0($a0)
    ctx->pc = 0x155a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22448)));
label_155a38:
    // 0x155a38: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_155a3c:
    if (ctx->pc == 0x155A3Cu) {
        ctx->pc = 0x155A3Cu;
            // 0x155a3c: 0xac6457f0  sw          $a0, 0x57F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22512), GPR_U32(ctx, 4));
        ctx->pc = 0x155A40u;
        goto label_155a40;
    }
    ctx->pc = 0x155A38u;
    {
        const bool branch_taken_0x155a38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A38u;
            // 0x155a3c: 0xac6457f0  sw          $a0, 0x57F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a38) {
            ctx->pc = 0x155A50u;
            goto label_155a50;
        }
    }
    ctx->pc = 0x155A40u;
label_155a40:
    // 0x155a40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155a44:
    // 0x155a44: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_155a48:
    // 0x155a48: 0xac6457f0  sw          $a0, 0x57F0($v1)
    ctx->pc = 0x155a48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22512), GPR_U32(ctx, 4));
label_155a4c:
    // 0x155a4c: 0x0  nop
    ctx->pc = 0x155a4cu;
    // NOP
label_155a50:
    // 0x155a50: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_155a54:
    // 0x155a54: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x155a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
label_155a58:
    // 0x155a58: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x155a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_155a5c:
    // 0x155a5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155a60:
    // 0x155a60: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_155a64:
    // 0x155a64: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x155a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_155a68:
    // 0x155a68: 0xac645824  sw          $a0, 0x5824($v1)
    ctx->pc = 0x155a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
label_155a6c:
    // 0x155a6c: 0x0  nop
    ctx->pc = 0x155a6cu;
    // NOP
label_155a70:
    // 0x155a70: 0x14e0009d  bnez        $a3, . + 4 + (0x9D << 2)
label_155a74:
    if (ctx->pc == 0x155A74u) {
        ctx->pc = 0x155A78u;
        goto label_155a78;
    }
    ctx->pc = 0x155A70u;
    {
        const bool branch_taken_0x155a70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x155a70) {
            ctx->pc = 0x155CE8u;
            goto label_155ce8;
        }
    }
    ctx->pc = 0x155A78u;
label_155a78:
    // 0x155a78: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_155a7c:
    // 0x155a7c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x155a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_155a80:
    // 0x155a80: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x155a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_155a84:
    // 0x155a84: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x155a84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_155a88:
    // 0x155a88: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x155a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_155a8c:
    // 0x155a8c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x155a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_155a90:
    // 0x155a90: 0xc053684  jal         func_14DA10
label_155a94:
    if (ctx->pc == 0x155A94u) {
        ctx->pc = 0x155A94u;
            // 0x155a94: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x155A98u;
        goto label_155a98;
    }
    ctx->pc = 0x155A90u;
    SET_GPR_U32(ctx, 31, 0x155A98u);
    ctx->pc = 0x155A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155A90u;
            // 0x155a94: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DA10u;
    if (runtime->hasFunction(0x14DA10u)) {
        auto targetFn = runtime->lookupFunction(0x14DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155A98u; }
        if (ctx->pc != 0x155A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014DA10_0x14da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155A98u; }
        if (ctx->pc != 0x155A98u) { return; }
    }
    ctx->pc = 0x155A98u;
label_155a98:
    // 0x155a98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x155a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_155a9c:
    // 0x155a9c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x155a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_155aa0:
    // 0x155aa0: 0x256182a  slt         $v1, $s2, $s6
    ctx->pc = 0x155aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_155aa4:
    // 0x155aa4: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_155aa8:
    if (ctx->pc == 0x155AA8u) {
        ctx->pc = 0x155AA8u;
            // 0x155aa8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x155AACu;
        goto label_155aac;
    }
    ctx->pc = 0x155AA4u;
    {
        const bool branch_taken_0x155aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x155AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AA4u;
            // 0x155aa8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155aa4) {
            ctx->pc = 0x1559C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1559c8;
        }
    }
    ctx->pc = 0x155AACu;
label_155aac:
    // 0x155aac: 0x10000094  b           . + 4 + (0x94 << 2)
label_155ab0:
    if (ctx->pc == 0x155AB0u) {
        ctx->pc = 0x155AB4u;
        goto label_155ab4;
    }
    ctx->pc = 0x155AACu;
    {
        const bool branch_taken_0x155aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155aac) {
            ctx->pc = 0x155D00u;
            goto label_155d00;
        }
    }
    ctx->pc = 0x155AB4u;
label_155ab4:
    // 0x155ab4: 0x0  nop
    ctx->pc = 0x155ab4u;
    // NOP
label_155ab8:
    // 0x155ab8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_155abc:
    // 0x155abc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_155ac0:
    // 0x155ac0: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x155ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
label_155ac4:
    // 0x155ac4: 0xc05056c  jal         func_1415B0
label_155ac8:
    if (ctx->pc == 0x155AC8u) {
        ctx->pc = 0x155AC8u;
            // 0x155ac8: 0x24845760  addiu       $a0, $a0, 0x5760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
        ctx->pc = 0x155ACCu;
        goto label_155acc;
    }
    ctx->pc = 0x155AC4u;
    SET_GPR_U32(ctx, 31, 0x155ACCu);
    ctx->pc = 0x155AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155AC4u;
            // 0x155ac8: 0x24845760  addiu       $a0, $a0, 0x5760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1415B0u;
    if (runtime->hasFunction(0x1415B0u)) {
        auto targetFn = runtime->lookupFunction(0x1415B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155ACCu; }
        if (ctx->pc != 0x155ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001415B0_0x1415b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155ACCu; }
        if (ctx->pc != 0x155ACCu) { return; }
    }
    ctx->pc = 0x155ACCu;
label_155acc:
    // 0x155acc: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_155ad0:
    if (ctx->pc == 0x155AD0u) {
        ctx->pc = 0x155AD4u;
        goto label_155ad4;
    }
    ctx->pc = 0x155ACCu;
    {
        const bool branch_taken_0x155acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155acc) {
            ctx->pc = 0x155D00u;
            goto label_155d00;
        }
    }
    ctx->pc = 0x155AD4u;
label_155ad4:
    // 0x155ad4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_155ad8:
    // 0x155ad8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_155adc:
    // 0x155adc: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x155adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
label_155ae0:
    // 0x155ae0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x155ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155ae4:
    // 0x155ae4: 0x8c845828  lw          $a0, 0x5828($a0)
    ctx->pc = 0x155ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22568)));
label_155ae8:
    // 0x155ae8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_155aec:
    // 0x155aec: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x155aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_155af0:
    // 0x155af0: 0x1000007f  b           . + 4 + (0x7F << 2)
label_155af4:
    if (ctx->pc == 0x155AF4u) {
        ctx->pc = 0x155AF4u;
            // 0x155af4: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->pc = 0x155AF8u;
        goto label_155af8;
    }
    ctx->pc = 0x155AF0u;
    {
        const bool branch_taken_0x155af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AF0u;
            // 0x155af4: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155af0) {
            ctx->pc = 0x155CF0u;
            goto label_155cf0;
        }
    }
    ctx->pc = 0x155AF8u;
label_155af8:
    // 0x155af8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x155af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_155afc:
    // 0x155afc: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x155afcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_155b00:
    // 0x155b00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x155b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_155b04:
    // 0x155b04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x155b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_155b08:
    // 0x155b08: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
label_155b0c:
    if (ctx->pc == 0x155B0Cu) {
        ctx->pc = 0x155B10u;
        goto label_155b10;
    }
    ctx->pc = 0x155B08u;
    {
        const bool branch_taken_0x155b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b08) {
            ctx->pc = 0x155CE8u;
            goto label_155ce8;
        }
    }
    ctx->pc = 0x155B10u;
label_155b10:
    // 0x155b10: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_155b14:
    // 0x155b14: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_155b18:
    if (ctx->pc == 0x155B18u) {
        ctx->pc = 0x155B18u;
            // 0x155b18: 0xac835788  sw          $v1, 0x5788($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22408), GPR_U32(ctx, 3));
        ctx->pc = 0x155B1Cu;
        goto label_155b1c;
    }
    ctx->pc = 0x155B14u;
    {
        const bool branch_taken_0x155b14 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x155B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B14u;
            // 0x155b18: 0xac835788  sw          $v1, 0x5788($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b14) {
            ctx->pc = 0x155B24u;
            goto label_155b24;
        }
    }
    ctx->pc = 0x155B1Cu;
label_155b1c:
    // 0x155b1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_155b20:
    if (ctx->pc == 0x155B20u) {
        ctx->pc = 0x155B20u;
            // 0x155b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x155B24u;
        goto label_155b24;
    }
    ctx->pc = 0x155B1Cu;
    {
        const bool branch_taken_0x155b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B1Cu;
            // 0x155b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b1c) {
            ctx->pc = 0x155B2Cu;
            goto label_155b2c;
        }
    }
    ctx->pc = 0x155B24u;
label_155b24:
    // 0x155b24: 0x2a52021  addu        $a0, $s5, $a1
    ctx->pc = 0x155b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_155b28:
    // 0x155b28: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x155b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_155b2c:
    // 0x155b2c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_155b30:
    // 0x155b30: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_155b34:
    if (ctx->pc == 0x155B34u) {
        ctx->pc = 0x155B34u;
            // 0x155b34: 0xac85578c  sw          $a1, 0x578C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22412), GPR_U32(ctx, 5));
        ctx->pc = 0x155B38u;
        goto label_155b38;
    }
    ctx->pc = 0x155B30u;
    {
        const bool branch_taken_0x155b30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B30u;
            // 0x155b34: 0xac85578c  sw          $a1, 0x578C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22412), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b30) {
            ctx->pc = 0x155B50u;
            goto label_155b50;
        }
    }
    ctx->pc = 0x155B38u;
label_155b38:
    // 0x155b38: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_155b3c:
    // 0x155b3c: 0x8c845770  lw          $a0, 0x5770($a0)
    ctx->pc = 0x155b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22384)));
label_155b40:
    // 0x155b40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x155b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_155b44:
    // 0x155b44: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x155b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_155b48:
    // 0x155b48: 0x10000002  b           . + 4 + (0x2 << 2)
label_155b4c:
    if (ctx->pc == 0x155B4Cu) {
        ctx->pc = 0x155B4Cu;
            // 0x155b4c: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x155B50u;
        goto label_155b50;
    }
    ctx->pc = 0x155B48u;
    {
        const bool branch_taken_0x155b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B48u;
            // 0x155b4c: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b48) {
            ctx->pc = 0x155B54u;
            goto label_155b54;
        }
    }
    ctx->pc = 0x155B50u;
label_155b50:
    // 0x155b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155b54:
    // 0x155b54: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x155b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_155b58:
    // 0x155b58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_155b5c:
    if (ctx->pc == 0x155B5Cu) {
        ctx->pc = 0x155B60u;
        goto label_155b60;
    }
    ctx->pc = 0x155B58u;
    {
        const bool branch_taken_0x155b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b58) {
            ctx->pc = 0x155B68u;
            goto label_155b68;
        }
    }
    ctx->pc = 0x155B60u;
label_155b60:
    // 0x155b60: 0x10000013  b           . + 4 + (0x13 << 2)
label_155b64:
    if (ctx->pc == 0x155B64u) {
        ctx->pc = 0x155B64u;
            // 0x155b64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x155B68u;
        goto label_155b68;
    }
    ctx->pc = 0x155B60u;
    {
        const bool branch_taken_0x155b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B60u;
            // 0x155b64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b60) {
            ctx->pc = 0x155BB0u;
            goto label_155bb0;
        }
    }
    ctx->pc = 0x155B68u;
label_155b68:
    // 0x155b68: 0x30a60022  andi        $a2, $a1, 0x22
    ctx->pc = 0x155b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)34);
label_155b6c:
    // 0x155b6c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x155b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_155b70:
    // 0x155b70: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_155b74:
    // 0x155b74: 0x8ca557b0  lw          $a1, 0x57B0($a1)
    ctx->pc = 0x155b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22448)));
label_155b78:
    // 0x155b78: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_155b7c:
    if (ctx->pc == 0x155B7Cu) {
        ctx->pc = 0x155B7Cu;
            // 0x155b7c: 0xac8557f0  sw          $a1, 0x57F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22512), GPR_U32(ctx, 5));
        ctx->pc = 0x155B80u;
        goto label_155b80;
    }
    ctx->pc = 0x155B78u;
    {
        const bool branch_taken_0x155b78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B78u;
            // 0x155b7c: 0xac8557f0  sw          $a1, 0x57F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22512), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b78) {
            ctx->pc = 0x155B90u;
            goto label_155b90;
        }
    }
    ctx->pc = 0x155B80u;
label_155b80:
    // 0x155b80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155b84:
    // 0x155b84: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_155b88:
    // 0x155b88: 0xac8557f0  sw          $a1, 0x57F0($a0)
    ctx->pc = 0x155b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22512), GPR_U32(ctx, 5));
label_155b8c:
    // 0x155b8c: 0x0  nop
    ctx->pc = 0x155b8cu;
    // NOP
label_155b90:
    // 0x155b90: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_155b94:
    // 0x155b94: 0x8c865824  lw          $a2, 0x5824($a0)
    ctx->pc = 0x155b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22564)));
label_155b98:
    // 0x155b98: 0x2405dfff  addiu       $a1, $zero, -0x2001
    ctx->pc = 0x155b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_155b9c:
    // 0x155b9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155ba0:
    // 0x155ba0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_155ba4:
    // 0x155ba4: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x155ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_155ba8:
    // 0x155ba8: 0xac855824  sw          $a1, 0x5824($a0)
    ctx->pc = 0x155ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22564), GPR_U32(ctx, 5));
label_155bac:
    // 0x155bac: 0x0  nop
    ctx->pc = 0x155bacu;
    // NOP
label_155bb0:
    // 0x155bb0: 0x14e0004d  bnez        $a3, . + 4 + (0x4D << 2)
label_155bb4:
    if (ctx->pc == 0x155BB4u) {
        ctx->pc = 0x155BB8u;
        goto label_155bb8;
    }
    ctx->pc = 0x155BB0u;
    {
        const bool branch_taken_0x155bb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x155bb0) {
            ctx->pc = 0x155CE8u;
            goto label_155ce8;
        }
    }
    ctx->pc = 0x155BB8u;
label_155bb8:
    // 0x155bb8: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x155bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_155bbc:
    // 0x155bbc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_155bc0:
    // 0x155bc0: 0x8c425804  lw          $v0, 0x5804($v0)
    ctx->pc = 0x155bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22532)));
label_155bc4:
    // 0x155bc4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x155bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_155bc8:
    // 0x155bc8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_155bcc:
    if (ctx->pc == 0x155BCCu) {
        ctx->pc = 0x155BCCu;
            // 0x155bcc: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x155BD0u;
        goto label_155bd0;
    }
    ctx->pc = 0x155BC8u;
    {
        const bool branch_taken_0x155bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155BC8u;
            // 0x155bcc: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155bc8) {
            ctx->pc = 0x155BF0u;
            goto label_155bf0;
        }
    }
    ctx->pc = 0x155BD0u;
label_155bd0:
    // 0x155bd0: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x155bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
label_155bd4:
    // 0x155bd4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x155bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_155bd8:
    // 0x155bd8: 0x24a51fa0  addiu       $a1, $a1, 0x1FA0
    ctx->pc = 0x155bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8096));
label_155bdc:
    // 0x155bdc: 0xc04cd60  jal         func_133580
label_155be0:
    if (ctx->pc == 0x155BE0u) {
        ctx->pc = 0x155BE0u;
            // 0x155be0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x155BE4u;
        goto label_155be4;
    }
    ctx->pc = 0x155BDCu;
    SET_GPR_U32(ctx, 31, 0x155BE4u);
    ctx->pc = 0x155BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155BDCu;
            // 0x155be0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155BE4u; }
        if (ctx->pc != 0x155BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155BE4u; }
        if (ctx->pc != 0x155BE4u) { return; }
    }
    ctx->pc = 0x155BE4u;
label_155be4:
    // 0x155be4: 0xc0534dc  jal         func_14D370
label_155be8:
    if (ctx->pc == 0x155BE8u) {
        ctx->pc = 0x155BE8u;
            // 0x155be8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x155BECu;
        goto label_155bec;
    }
    ctx->pc = 0x155BE4u;
    SET_GPR_U32(ctx, 31, 0x155BECu);
    ctx->pc = 0x155BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155BE4u;
            // 0x155be8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (runtime->hasFunction(0x14D370u)) {
        auto targetFn = runtime->lookupFunction(0x14D370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155BECu; }
        if (ctx->pc != 0x155BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D370_0x14d370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155BECu; }
        if (ctx->pc != 0x155BECu) { return; }
    }
    ctx->pc = 0x155BECu;
label_155bec:
    // 0x155bec: 0x0  nop
    ctx->pc = 0x155becu;
    // NOP
label_155bf0:
    // 0x155bf0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x155bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_155bf4:
    // 0x155bf4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x155bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_155bf8:
    // 0x155bf8: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x155bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
label_155bfc:
    // 0x155bfc: 0xc04cd60  jal         func_133580
label_155c00:
    if (ctx->pc == 0x155C00u) {
        ctx->pc = 0x155C00u;
            // 0x155c00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x155C04u;
        goto label_155c04;
    }
    ctx->pc = 0x155BFCu;
    SET_GPR_U32(ctx, 31, 0x155C04u);
    ctx->pc = 0x155C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155BFCu;
            // 0x155c00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C04u; }
        if (ctx->pc != 0x155C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C04u; }
        if (ctx->pc != 0x155C04u) { return; }
    }
    ctx->pc = 0x155C04u;
label_155c04:
    // 0x155c04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155c08:
    // 0x155c08: 0xc0573e0  jal         func_15CF80
label_155c0c:
    if (ctx->pc == 0x155C0Cu) {
        ctx->pc = 0x155C0Cu;
            // 0x155c0c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x155C10u;
        goto label_155c10;
    }
    ctx->pc = 0x155C08u;
    SET_GPR_U32(ctx, 31, 0x155C10u);
    ctx->pc = 0x155C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155C08u;
            // 0x155c0c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C10u; }
        if (ctx->pc != 0x155C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C10u; }
        if (ctx->pc != 0x155C10u) { return; }
    }
    ctx->pc = 0x155C10u;
label_155c10:
    // 0x155c10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_155c14:
    // 0x155c14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x155c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_155c18:
    // 0x155c18: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x155c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_155c1c:
    // 0x155c1c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x155c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_155c20:
    // 0x155c20: 0x1065001d  beq         $v1, $a1, . + 4 + (0x1D << 2)
label_155c24:
    if (ctx->pc == 0x155C24u) {
        ctx->pc = 0x155C28u;
        goto label_155c28;
    }
    ctx->pc = 0x155C20u;
    {
        const bool branch_taken_0x155c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x155c20) {
            ctx->pc = 0x155C98u;
            goto label_155c98;
        }
    }
    ctx->pc = 0x155C28u;
label_155c28:
    // 0x155c28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x155c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_155c2c:
    // 0x155c2c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_155c30:
    if (ctx->pc == 0x155C30u) {
        ctx->pc = 0x155C34u;
        goto label_155c34;
    }
    ctx->pc = 0x155C2Cu;
    {
        const bool branch_taken_0x155c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155c2c) {
            ctx->pc = 0x155C80u;
            goto label_155c80;
        }
    }
    ctx->pc = 0x155C34u;
label_155c34:
    // 0x155c34: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x155c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_155c38:
    // 0x155c38: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_155c3c:
    if (ctx->pc == 0x155C3Cu) {
        ctx->pc = 0x155C40u;
        goto label_155c40;
    }
    ctx->pc = 0x155C38u;
    {
        const bool branch_taken_0x155c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155c38) {
            ctx->pc = 0x155C70u;
            goto label_155c70;
        }
    }
    ctx->pc = 0x155C40u;
label_155c40:
    // 0x155c40: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x155c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_155c44:
    // 0x155c44: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_155c48:
    if (ctx->pc == 0x155C48u) {
        ctx->pc = 0x155C4Cu;
        goto label_155c4c;
    }
    ctx->pc = 0x155C44u;
    {
        const bool branch_taken_0x155c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155c44) {
            ctx->pc = 0x155C58u;
            goto label_155c58;
        }
    }
    ctx->pc = 0x155C4Cu;
label_155c4c:
    // 0x155c4c: 0x10000016  b           . + 4 + (0x16 << 2)
label_155c50:
    if (ctx->pc == 0x155C50u) {
        ctx->pc = 0x155C54u;
        goto label_155c54;
    }
    ctx->pc = 0x155C4Cu;
    {
        const bool branch_taken_0x155c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155c4c) {
            ctx->pc = 0x155CA8u;
            goto label_155ca8;
        }
    }
    ctx->pc = 0x155C54u;
label_155c54:
    // 0x155c54: 0x0  nop
    ctx->pc = 0x155c54u;
    // NOP
label_155c58:
    // 0x155c58: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x155c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_155c5c:
    // 0x155c5c: 0x40f809  jalr        $v0
label_155c60:
    if (ctx->pc == 0x155C60u) {
        ctx->pc = 0x155C60u;
            // 0x155c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x155C64u;
        goto label_155c64;
    }
    ctx->pc = 0x155C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155C64u);
        ctx->pc = 0x155C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155C5Cu;
            // 0x155c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x155C64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x155C64u; }
            if (ctx->pc != 0x155C64u) { return; }
        }
        }
    }
    ctx->pc = 0x155C64u;
label_155c64:
    // 0x155c64: 0x10000010  b           . + 4 + (0x10 << 2)
label_155c68:
    if (ctx->pc == 0x155C68u) {
        ctx->pc = 0x155C6Cu;
        goto label_155c6c;
    }
    ctx->pc = 0x155C64u;
    {
        const bool branch_taken_0x155c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155c64) {
            ctx->pc = 0x155CA8u;
            goto label_155ca8;
        }
    }
    ctx->pc = 0x155C6Cu;
label_155c6c:
    // 0x155c6c: 0x0  nop
    ctx->pc = 0x155c6cu;
    // NOP
label_155c70:
    // 0x155c70: 0xc04e550  jal         func_139540
label_155c74:
    if (ctx->pc == 0x155C74u) {
        ctx->pc = 0x155C74u;
            // 0x155c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x155C78u;
        goto label_155c78;
    }
    ctx->pc = 0x155C70u;
    SET_GPR_U32(ctx, 31, 0x155C78u);
    ctx->pc = 0x155C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155C70u;
            // 0x155c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C78u; }
        if (ctx->pc != 0x155C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C78u; }
        if (ctx->pc != 0x155C78u) { return; }
    }
    ctx->pc = 0x155C78u;
label_155c78:
    // 0x155c78: 0x1000000b  b           . + 4 + (0xB << 2)
label_155c7c:
    if (ctx->pc == 0x155C7Cu) {
        ctx->pc = 0x155C80u;
        goto label_155c80;
    }
    ctx->pc = 0x155C78u;
    {
        const bool branch_taken_0x155c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155c78) {
            ctx->pc = 0x155CA8u;
            goto label_155ca8;
        }
    }
    ctx->pc = 0x155C80u;
label_155c80:
    // 0x155c80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155c84:
    // 0x155c84: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x155c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_155c88:
    // 0x155c88: 0x40f809  jalr        $v0
label_155c8c:
    if (ctx->pc == 0x155C8Cu) {
        ctx->pc = 0x155C8Cu;
            // 0x155c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x155C90u;
        goto label_155c90;
    }
    ctx->pc = 0x155C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155C90u);
        ctx->pc = 0x155C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155C88u;
            // 0x155c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x155C90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x155C90u; }
            if (ctx->pc != 0x155C90u) { return; }
        }
        }
    }
    ctx->pc = 0x155C90u;
label_155c90:
    // 0x155c90: 0x10000005  b           . + 4 + (0x5 << 2)
label_155c94:
    if (ctx->pc == 0x155C94u) {
        ctx->pc = 0x155C98u;
        goto label_155c98;
    }
    ctx->pc = 0x155C90u;
    {
        const bool branch_taken_0x155c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155c90) {
            ctx->pc = 0x155CA8u;
            goto label_155ca8;
        }
    }
    ctx->pc = 0x155C98u;
label_155c98:
    // 0x155c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_155c9c:
    // 0x155c9c: 0xc04e550  jal         func_139540
label_155ca0:
    if (ctx->pc == 0x155CA0u) {
        ctx->pc = 0x155CA0u;
            // 0x155ca0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x155CA4u;
        goto label_155ca4;
    }
    ctx->pc = 0x155C9Cu;
    SET_GPR_U32(ctx, 31, 0x155CA4u);
    ctx->pc = 0x155CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155C9Cu;
            // 0x155ca0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CA4u; }
        if (ctx->pc != 0x155CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CA4u; }
        if (ctx->pc != 0x155CA4u) { return; }
    }
    ctx->pc = 0x155CA4u;
label_155ca4:
    // 0x155ca4: 0x0  nop
    ctx->pc = 0x155ca4u;
    // NOP
label_155ca8:
    // 0x155ca8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_155cac:
    // 0x155cac: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x155cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_155cb0:
    // 0x155cb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x155cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_155cb4:
    // 0x155cb4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x155cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_155cb8:
    // 0x155cb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_155cbc:
    // 0x155cbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_155cc0:
    if (ctx->pc == 0x155CC0u) {
        ctx->pc = 0x155CC4u;
        goto label_155cc4;
    }
    ctx->pc = 0x155CBCu;
    {
        const bool branch_taken_0x155cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155cbc) {
            ctx->pc = 0x155CE0u;
            goto label_155ce0;
        }
    }
    ctx->pc = 0x155CC4u;
label_155cc4:
    // 0x155cc4: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x155cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_155cc8:
    // 0x155cc8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x155cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_155ccc:
    // 0x155ccc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x155cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_155cd0:
    // 0x155cd0: 0xc054484  jal         func_151210
label_155cd4:
    if (ctx->pc == 0x155CD4u) {
        ctx->pc = 0x155CD4u;
            // 0x155cd4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x155CD8u;
        goto label_155cd8;
    }
    ctx->pc = 0x155CD0u;
    SET_GPR_U32(ctx, 31, 0x155CD8u);
    ctx->pc = 0x155CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155CD0u;
            // 0x155cd4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151210u;
    if (runtime->hasFunction(0x151210u)) {
        auto targetFn = runtime->lookupFunction(0x151210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CD8u; }
        if (ctx->pc != 0x155CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151210_0x151210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CD8u; }
        if (ctx->pc != 0x155CD8u) { return; }
    }
    ctx->pc = 0x155CD8u;
label_155cd8:
    // 0x155cd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_155cdc:
    if (ctx->pc == 0x155CDCu) {
        ctx->pc = 0x155CE0u;
        goto label_155ce0;
    }
    ctx->pc = 0x155CD8u;
    {
        const bool branch_taken_0x155cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155cd8) {
            ctx->pc = 0x155CE8u;
            goto label_155ce8;
        }
    }
    ctx->pc = 0x155CE0u;
label_155ce0:
    // 0x155ce0: 0xc053a0c  jal         func_14E830
label_155ce4:
    if (ctx->pc == 0x155CE4u) {
        ctx->pc = 0x155CE8u;
        goto label_155ce8;
    }
    ctx->pc = 0x155CE0u;
    SET_GPR_U32(ctx, 31, 0x155CE8u);
    ctx->pc = 0x14E830u;
    if (runtime->hasFunction(0x14E830u)) {
        auto targetFn = runtime->lookupFunction(0x14E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CE8u; }
        if (ctx->pc != 0x155CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E830_0x14e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CE8u; }
        if (ctx->pc != 0x155CE8u) { return; }
    }
    ctx->pc = 0x155CE8u;
label_155ce8:
    // 0x155ce8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x155ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_155cec:
    // 0x155cec: 0x0  nop
    ctx->pc = 0x155cecu;
    // NOP
label_155cf0:
    // 0x155cf0: 0x256182a  slt         $v1, $s2, $s6
    ctx->pc = 0x155cf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_155cf4:
    // 0x155cf4: 0x1460ff80  bnez        $v1, . + 4 + (-0x80 << 2)
label_155cf8:
    if (ctx->pc == 0x155CF8u) {
        ctx->pc = 0x155CFCu;
        goto label_155cfc;
    }
    ctx->pc = 0x155CF4u;
    {
        const bool branch_taken_0x155cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155cf4) {
            ctx->pc = 0x155AF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155af8;
        }
    }
    ctx->pc = 0x155CFCu;
label_155cfc:
    // 0x155cfc: 0x0  nop
    ctx->pc = 0x155cfcu;
    // NOP
label_155d00:
    // 0x155d00: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x155d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_155d04:
    // 0x155d04: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x155d04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_155d08:
    // 0x155d08: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x155d08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_155d0c:
    // 0x155d0c: 0x1460ff04  bnez        $v1, . + 4 + (-0xFC << 2)
label_155d10:
    if (ctx->pc == 0x155D10u) {
        ctx->pc = 0x155D10u;
            // 0x155d10: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x155D14u;
        goto label_155d14;
    }
    ctx->pc = 0x155D0Cu;
    {
        const bool branch_taken_0x155d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x155D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155D0Cu;
            // 0x155d10: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d0c) {
            ctx->pc = 0x155920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155920;
        }
    }
    ctx->pc = 0x155D14u;
label_155d14:
    // 0x155d14: 0x0  nop
    ctx->pc = 0x155d14u;
    // NOP
label_155d18:
    // 0x155d18: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x155d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_155d1c:
    // 0x155d1c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x155d1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_155d20:
    // 0x155d20: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x155d20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_155d24:
    // 0x155d24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x155d24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_155d28:
    // 0x155d28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x155d28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_155d2c:
    // 0x155d2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155d2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_155d30:
    // 0x155d30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_155d34:
    // 0x155d34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_155d38:
    // 0x155d38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155d3c:
    // 0x155d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_155d40:
    // 0x155d40: 0x3e00008  jr          $ra
label_155d44:
    if (ctx->pc == 0x155D44u) {
        ctx->pc = 0x155D44u;
            // 0x155d44: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x155D48u;
        goto label_155d48;
    }
    ctx->pc = 0x155D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155D40u;
            // 0x155d44: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155D48u;
label_155d48:
    // 0x155d48: 0x0  nop
    ctx->pc = 0x155d48u;
    // NOP
label_155d4c:
    // 0x155d4c: 0x0  nop
    ctx->pc = 0x155d4cu;
    // NOP
}
