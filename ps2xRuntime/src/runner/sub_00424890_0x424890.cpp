#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00424890
// Address: 0x424890 - 0x424bf0
void sub_00424890_0x424890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424890_0x424890");
#endif

    switch (ctx->pc) {
        case 0x424890u: goto label_424890;
        case 0x424894u: goto label_424894;
        case 0x424898u: goto label_424898;
        case 0x42489cu: goto label_42489c;
        case 0x4248a0u: goto label_4248a0;
        case 0x4248a4u: goto label_4248a4;
        case 0x4248a8u: goto label_4248a8;
        case 0x4248acu: goto label_4248ac;
        case 0x4248b0u: goto label_4248b0;
        case 0x4248b4u: goto label_4248b4;
        case 0x4248b8u: goto label_4248b8;
        case 0x4248bcu: goto label_4248bc;
        case 0x4248c0u: goto label_4248c0;
        case 0x4248c4u: goto label_4248c4;
        case 0x4248c8u: goto label_4248c8;
        case 0x4248ccu: goto label_4248cc;
        case 0x4248d0u: goto label_4248d0;
        case 0x4248d4u: goto label_4248d4;
        case 0x4248d8u: goto label_4248d8;
        case 0x4248dcu: goto label_4248dc;
        case 0x4248e0u: goto label_4248e0;
        case 0x4248e4u: goto label_4248e4;
        case 0x4248e8u: goto label_4248e8;
        case 0x4248ecu: goto label_4248ec;
        case 0x4248f0u: goto label_4248f0;
        case 0x4248f4u: goto label_4248f4;
        case 0x4248f8u: goto label_4248f8;
        case 0x4248fcu: goto label_4248fc;
        case 0x424900u: goto label_424900;
        case 0x424904u: goto label_424904;
        case 0x424908u: goto label_424908;
        case 0x42490cu: goto label_42490c;
        case 0x424910u: goto label_424910;
        case 0x424914u: goto label_424914;
        case 0x424918u: goto label_424918;
        case 0x42491cu: goto label_42491c;
        case 0x424920u: goto label_424920;
        case 0x424924u: goto label_424924;
        case 0x424928u: goto label_424928;
        case 0x42492cu: goto label_42492c;
        case 0x424930u: goto label_424930;
        case 0x424934u: goto label_424934;
        case 0x424938u: goto label_424938;
        case 0x42493cu: goto label_42493c;
        case 0x424940u: goto label_424940;
        case 0x424944u: goto label_424944;
        case 0x424948u: goto label_424948;
        case 0x42494cu: goto label_42494c;
        case 0x424950u: goto label_424950;
        case 0x424954u: goto label_424954;
        case 0x424958u: goto label_424958;
        case 0x42495cu: goto label_42495c;
        case 0x424960u: goto label_424960;
        case 0x424964u: goto label_424964;
        case 0x424968u: goto label_424968;
        case 0x42496cu: goto label_42496c;
        case 0x424970u: goto label_424970;
        case 0x424974u: goto label_424974;
        case 0x424978u: goto label_424978;
        case 0x42497cu: goto label_42497c;
        case 0x424980u: goto label_424980;
        case 0x424984u: goto label_424984;
        case 0x424988u: goto label_424988;
        case 0x42498cu: goto label_42498c;
        case 0x424990u: goto label_424990;
        case 0x424994u: goto label_424994;
        case 0x424998u: goto label_424998;
        case 0x42499cu: goto label_42499c;
        case 0x4249a0u: goto label_4249a0;
        case 0x4249a4u: goto label_4249a4;
        case 0x4249a8u: goto label_4249a8;
        case 0x4249acu: goto label_4249ac;
        case 0x4249b0u: goto label_4249b0;
        case 0x4249b4u: goto label_4249b4;
        case 0x4249b8u: goto label_4249b8;
        case 0x4249bcu: goto label_4249bc;
        case 0x4249c0u: goto label_4249c0;
        case 0x4249c4u: goto label_4249c4;
        case 0x4249c8u: goto label_4249c8;
        case 0x4249ccu: goto label_4249cc;
        case 0x4249d0u: goto label_4249d0;
        case 0x4249d4u: goto label_4249d4;
        case 0x4249d8u: goto label_4249d8;
        case 0x4249dcu: goto label_4249dc;
        case 0x4249e0u: goto label_4249e0;
        case 0x4249e4u: goto label_4249e4;
        case 0x4249e8u: goto label_4249e8;
        case 0x4249ecu: goto label_4249ec;
        case 0x4249f0u: goto label_4249f0;
        case 0x4249f4u: goto label_4249f4;
        case 0x4249f8u: goto label_4249f8;
        case 0x4249fcu: goto label_4249fc;
        case 0x424a00u: goto label_424a00;
        case 0x424a04u: goto label_424a04;
        case 0x424a08u: goto label_424a08;
        case 0x424a0cu: goto label_424a0c;
        case 0x424a10u: goto label_424a10;
        case 0x424a14u: goto label_424a14;
        case 0x424a18u: goto label_424a18;
        case 0x424a1cu: goto label_424a1c;
        case 0x424a20u: goto label_424a20;
        case 0x424a24u: goto label_424a24;
        case 0x424a28u: goto label_424a28;
        case 0x424a2cu: goto label_424a2c;
        case 0x424a30u: goto label_424a30;
        case 0x424a34u: goto label_424a34;
        case 0x424a38u: goto label_424a38;
        case 0x424a3cu: goto label_424a3c;
        case 0x424a40u: goto label_424a40;
        case 0x424a44u: goto label_424a44;
        case 0x424a48u: goto label_424a48;
        case 0x424a4cu: goto label_424a4c;
        case 0x424a50u: goto label_424a50;
        case 0x424a54u: goto label_424a54;
        case 0x424a58u: goto label_424a58;
        case 0x424a5cu: goto label_424a5c;
        case 0x424a60u: goto label_424a60;
        case 0x424a64u: goto label_424a64;
        case 0x424a68u: goto label_424a68;
        case 0x424a6cu: goto label_424a6c;
        case 0x424a70u: goto label_424a70;
        case 0x424a74u: goto label_424a74;
        case 0x424a78u: goto label_424a78;
        case 0x424a7cu: goto label_424a7c;
        case 0x424a80u: goto label_424a80;
        case 0x424a84u: goto label_424a84;
        case 0x424a88u: goto label_424a88;
        case 0x424a8cu: goto label_424a8c;
        case 0x424a90u: goto label_424a90;
        case 0x424a94u: goto label_424a94;
        case 0x424a98u: goto label_424a98;
        case 0x424a9cu: goto label_424a9c;
        case 0x424aa0u: goto label_424aa0;
        case 0x424aa4u: goto label_424aa4;
        case 0x424aa8u: goto label_424aa8;
        case 0x424aacu: goto label_424aac;
        case 0x424ab0u: goto label_424ab0;
        case 0x424ab4u: goto label_424ab4;
        case 0x424ab8u: goto label_424ab8;
        case 0x424abcu: goto label_424abc;
        case 0x424ac0u: goto label_424ac0;
        case 0x424ac4u: goto label_424ac4;
        case 0x424ac8u: goto label_424ac8;
        case 0x424accu: goto label_424acc;
        case 0x424ad0u: goto label_424ad0;
        case 0x424ad4u: goto label_424ad4;
        case 0x424ad8u: goto label_424ad8;
        case 0x424adcu: goto label_424adc;
        case 0x424ae0u: goto label_424ae0;
        case 0x424ae4u: goto label_424ae4;
        case 0x424ae8u: goto label_424ae8;
        case 0x424aecu: goto label_424aec;
        case 0x424af0u: goto label_424af0;
        case 0x424af4u: goto label_424af4;
        case 0x424af8u: goto label_424af8;
        case 0x424afcu: goto label_424afc;
        case 0x424b00u: goto label_424b00;
        case 0x424b04u: goto label_424b04;
        case 0x424b08u: goto label_424b08;
        case 0x424b0cu: goto label_424b0c;
        case 0x424b10u: goto label_424b10;
        case 0x424b14u: goto label_424b14;
        case 0x424b18u: goto label_424b18;
        case 0x424b1cu: goto label_424b1c;
        case 0x424b20u: goto label_424b20;
        case 0x424b24u: goto label_424b24;
        case 0x424b28u: goto label_424b28;
        case 0x424b2cu: goto label_424b2c;
        case 0x424b30u: goto label_424b30;
        case 0x424b34u: goto label_424b34;
        case 0x424b38u: goto label_424b38;
        case 0x424b3cu: goto label_424b3c;
        case 0x424b40u: goto label_424b40;
        case 0x424b44u: goto label_424b44;
        case 0x424b48u: goto label_424b48;
        case 0x424b4cu: goto label_424b4c;
        case 0x424b50u: goto label_424b50;
        case 0x424b54u: goto label_424b54;
        case 0x424b58u: goto label_424b58;
        case 0x424b5cu: goto label_424b5c;
        case 0x424b60u: goto label_424b60;
        case 0x424b64u: goto label_424b64;
        case 0x424b68u: goto label_424b68;
        case 0x424b6cu: goto label_424b6c;
        case 0x424b70u: goto label_424b70;
        case 0x424b74u: goto label_424b74;
        case 0x424b78u: goto label_424b78;
        case 0x424b7cu: goto label_424b7c;
        case 0x424b80u: goto label_424b80;
        case 0x424b84u: goto label_424b84;
        case 0x424b88u: goto label_424b88;
        case 0x424b8cu: goto label_424b8c;
        case 0x424b90u: goto label_424b90;
        case 0x424b94u: goto label_424b94;
        case 0x424b98u: goto label_424b98;
        case 0x424b9cu: goto label_424b9c;
        case 0x424ba0u: goto label_424ba0;
        case 0x424ba4u: goto label_424ba4;
        case 0x424ba8u: goto label_424ba8;
        case 0x424bacu: goto label_424bac;
        case 0x424bb0u: goto label_424bb0;
        case 0x424bb4u: goto label_424bb4;
        case 0x424bb8u: goto label_424bb8;
        case 0x424bbcu: goto label_424bbc;
        case 0x424bc0u: goto label_424bc0;
        case 0x424bc4u: goto label_424bc4;
        case 0x424bc8u: goto label_424bc8;
        case 0x424bccu: goto label_424bcc;
        case 0x424bd0u: goto label_424bd0;
        case 0x424bd4u: goto label_424bd4;
        case 0x424bd8u: goto label_424bd8;
        case 0x424bdcu: goto label_424bdc;
        case 0x424be0u: goto label_424be0;
        case 0x424be4u: goto label_424be4;
        case 0x424be8u: goto label_424be8;
        case 0x424becu: goto label_424bec;
        default: break;
    }

    ctx->pc = 0x424890u;

label_424890:
    // 0x424890: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x424890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_424894:
    // 0x424894: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x424894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_424898:
    // 0x424898: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x424898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_42489c:
    // 0x42489c: 0x27a20078  addiu       $v0, $sp, 0x78
    ctx->pc = 0x42489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_4248a0:
    // 0x4248a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4248a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4248a4:
    // 0x4248a4: 0x2463dfa0  addiu       $v1, $v1, -0x2060
    ctx->pc = 0x4248a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959008));
label_4248a8:
    // 0x4248a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4248a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4248ac:
    // 0x4248ac: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x4248acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_4248b0:
    // 0x4248b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4248b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4248b4:
    // 0x4248b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4248b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4248b8:
    // 0x4248b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4248b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4248bc:
    // 0x4248bc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4248bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4248c0:
    // 0x4248c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4248c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4248c4:
    // 0x4248c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4248c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4248c8:
    // 0x4248c8: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x4248c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_4248cc:
    // 0x4248cc: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x4248ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_4248d0:
    // 0x4248d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4248d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4248d4:
    // 0x4248d4: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x4248d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_4248d8:
    // 0x4248d8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4248d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_4248dc:
    // 0x4248dc: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x4248dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_4248e0:
    // 0x4248e0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x4248e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_4248e4:
    // 0x4248e4: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x4248e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
label_4248e8:
    // 0x4248e8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4248e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4248ec:
    // 0x4248ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4248ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4248f0:
    // 0x4248f0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4248f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4248f4:
    // 0x4248f4: 0x320f809  jalr        $t9
label_4248f8:
    if (ctx->pc == 0x4248F8u) {
        ctx->pc = 0x4248F8u;
            // 0x4248f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4248FCu;
        goto label_4248fc;
    }
    ctx->pc = 0x4248F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4248FCu);
        ctx->pc = 0x4248F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4248F4u;
            // 0x4248f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4248FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4248FCu; }
            if (ctx->pc != 0x4248FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4248FCu;
label_4248fc:
    // 0x4248fc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x4248fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_424900:
    // 0x424900: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_424904:
    if (ctx->pc == 0x424904u) {
        ctx->pc = 0x424904u;
            // 0x424904: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424908u;
        goto label_424908;
    }
    ctx->pc = 0x424900u;
    {
        const bool branch_taken_0x424900 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x424904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424900u;
            // 0x424904: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424900) {
            ctx->pc = 0x424990u;
            goto label_424990;
        }
    }
    ctx->pc = 0x424908u;
label_424908:
    // 0x424908: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x424908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42490c:
    // 0x42490c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x42490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_424910:
    // 0x424910: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x424910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_424914:
    // 0x424914: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x424914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_424918:
    // 0x424918: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x424918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_42491c:
    // 0x42491c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x42491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_424920:
    // 0x424920: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_424924:
    if (ctx->pc == 0x424924u) {
        ctx->pc = 0x424924u;
            // 0x424924: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424928u;
        goto label_424928;
    }
    ctx->pc = 0x424920u;
    {
        const bool branch_taken_0x424920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424920) {
            ctx->pc = 0x424924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424920u;
            // 0x424924: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42492Cu;
            goto label_42492c;
        }
    }
    ctx->pc = 0x424928u;
label_424928:
    // 0x424928: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x424928u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_42492c:
    // 0x42492c: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
label_424930:
    if (ctx->pc == 0x424930u) {
        ctx->pc = 0x424934u;
        goto label_424934;
    }
    ctx->pc = 0x42492Cu;
    {
        const bool branch_taken_0x42492c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x42492c) {
            ctx->pc = 0x424978u;
            goto label_424978;
        }
    }
    ctx->pc = 0x424934u;
label_424934:
    // 0x424934: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x424934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_424938:
    // 0x424938: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x424938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_42493c:
    // 0x42493c: 0x320f809  jalr        $t9
label_424940:
    if (ctx->pc == 0x424940u) {
        ctx->pc = 0x424940u;
            // 0x424940: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424944u;
        goto label_424944;
    }
    ctx->pc = 0x42493Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x424944u);
        ctx->pc = 0x424940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42493Cu;
            // 0x424940: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x424944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x424944u; }
            if (ctx->pc != 0x424944u) { return; }
        }
        }
    }
    ctx->pc = 0x424944u;
label_424944:
    // 0x424944: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x424944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_424948:
    // 0x424948: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_42494c:
    if (ctx->pc == 0x42494Cu) {
        ctx->pc = 0x424950u;
        goto label_424950;
    }
    ctx->pc = 0x424948u;
    {
        const bool branch_taken_0x424948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x424948) {
            ctx->pc = 0x424978u;
            goto label_424978;
        }
    }
    ctx->pc = 0x424950u;
label_424950:
    // 0x424950: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x424950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_424954:
    // 0x424954: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x424954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_424958:
    // 0x424958: 0x320f809  jalr        $t9
label_42495c:
    if (ctx->pc == 0x42495Cu) {
        ctx->pc = 0x42495Cu;
            // 0x42495c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424960u;
        goto label_424960;
    }
    ctx->pc = 0x424958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x424960u);
        ctx->pc = 0x42495Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424958u;
            // 0x42495c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x424960u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x424960u; }
            if (ctx->pc != 0x424960u) { return; }
        }
        }
    }
    ctx->pc = 0x424960u;
label_424960:
    // 0x424960: 0x24036d6a  addiu       $v1, $zero, 0x6D6A
    ctx->pc = 0x424960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28010));
label_424964:
    // 0x424964: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_424968:
    if (ctx->pc == 0x424968u) {
        ctx->pc = 0x42496Cu;
        goto label_42496c;
    }
    ctx->pc = 0x424964u;
    {
        const bool branch_taken_0x424964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x424964) {
            ctx->pc = 0x424978u;
            goto label_424978;
        }
    }
    ctx->pc = 0x42496Cu;
label_42496c:
    // 0x42496c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x42496cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424970:
    // 0x424970: 0xa2720008  sb          $s2, 0x8($s3)
    ctx->pc = 0x424970u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 18));
label_424974:
    // 0x424974: 0x0  nop
    ctx->pc = 0x424974u;
    // NOP
label_424978:
    // 0x424978: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x424978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_42497c:
    // 0x42497c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x42497cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_424980:
    // 0x424980: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x424980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_424984:
    // 0x424984: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_424988:
    if (ctx->pc == 0x424988u) {
        ctx->pc = 0x424988u;
            // 0x424988: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x42498Cu;
        goto label_42498c;
    }
    ctx->pc = 0x424984u;
    {
        const bool branch_taken_0x424984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424984u;
            // 0x424988: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424984) {
            ctx->pc = 0x42490Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42490c;
        }
    }
    ctx->pc = 0x42498Cu;
label_42498c:
    // 0x42498c: 0x0  nop
    ctx->pc = 0x42498cu;
    // NOP
label_424990:
    // 0x424990: 0x16400039  bnez        $s2, . + 4 + (0x39 << 2)
label_424994:
    if (ctx->pc == 0x424994u) {
        ctx->pc = 0x424998u;
        goto label_424998;
    }
    ctx->pc = 0x424990u;
    {
        const bool branch_taken_0x424990 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x424990) {
            ctx->pc = 0x424A78u;
            goto label_424a78;
        }
    }
    ctx->pc = 0x424998u;
label_424998:
    // 0x424998: 0x92620008  lbu         $v0, 0x8($s3)
    ctx->pc = 0x424998u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_42499c:
    // 0x42499c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_4249a0:
    if (ctx->pc == 0x4249A0u) {
        ctx->pc = 0x4249A4u;
        goto label_4249a4;
    }
    ctx->pc = 0x42499Cu;
    {
        const bool branch_taken_0x42499c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42499c) {
            ctx->pc = 0x424A78u;
            goto label_424a78;
        }
    }
    ctx->pc = 0x4249A4u;
label_4249a4:
    // 0x4249a4: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x4249a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4249a8:
    // 0x4249a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4249a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4249ac:
    // 0x4249ac: 0xc0e32a4  jal         func_38CA90
label_4249b0:
    if (ctx->pc == 0x4249B0u) {
        ctx->pc = 0x4249B0u;
            // 0x4249b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4249B4u;
        goto label_4249b4;
    }
    ctx->pc = 0x4249ACu;
    SET_GPR_U32(ctx, 31, 0x4249B4u);
    ctx->pc = 0x4249B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4249ACu;
            // 0x4249b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4249B4u; }
        if (ctx->pc != 0x4249B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4249B4u; }
        if (ctx->pc != 0x4249B4u) { return; }
    }
    ctx->pc = 0x4249B4u;
label_4249b4:
    // 0x4249b4: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4249b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4249b8:
    // 0x4249b8: 0xc0e082c  jal         func_3820B0
label_4249bc:
    if (ctx->pc == 0x4249BCu) {
        ctx->pc = 0x4249BCu;
            // 0x4249bc: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x4249C0u;
        goto label_4249c0;
    }
    ctx->pc = 0x4249B8u;
    SET_GPR_U32(ctx, 31, 0x4249C0u);
    ctx->pc = 0x4249BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4249B8u;
            // 0x4249bc: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4249C0u; }
        if (ctx->pc != 0x4249C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4249C0u; }
        if (ctx->pc != 0x4249C0u) { return; }
    }
    ctx->pc = 0x4249C0u;
label_4249c0:
    // 0x4249c0: 0xc0e0828  jal         func_3820A0
label_4249c4:
    if (ctx->pc == 0x4249C4u) {
        ctx->pc = 0x4249C4u;
            // 0x4249c4: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4249C8u;
        goto label_4249c8;
    }
    ctx->pc = 0x4249C0u;
    SET_GPR_U32(ctx, 31, 0x4249C8u);
    ctx->pc = 0x4249C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4249C0u;
            // 0x4249c4: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4249C8u; }
        if (ctx->pc != 0x4249C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4249C8u; }
        if (ctx->pc != 0x4249C8u) { return; }
    }
    ctx->pc = 0x4249C8u;
label_4249c8:
    // 0x4249c8: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x4249c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4249cc:
    // 0x4249cc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_4249d0:
    if (ctx->pc == 0x4249D0u) {
        ctx->pc = 0x4249D0u;
            // 0x4249d0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4249D4u;
        goto label_4249d4;
    }
    ctx->pc = 0x4249CCu;
    {
        const bool branch_taken_0x4249cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4249cc) {
            ctx->pc = 0x4249D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4249CCu;
            // 0x4249d0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424A04u;
            goto label_424a04;
        }
    }
    ctx->pc = 0x4249D4u;
label_4249d4:
    // 0x4249d4: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x4249d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4249d8:
    // 0x4249d8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4249d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4249dc:
    // 0x4249dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4249e0:
    if (ctx->pc == 0x4249E0u) {
        ctx->pc = 0x4249E4u;
        goto label_4249e4;
    }
    ctx->pc = 0x4249DCu;
    {
        const bool branch_taken_0x4249dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4249dc) {
            ctx->pc = 0x424A00u;
            goto label_424a00;
        }
    }
    ctx->pc = 0x4249E4u;
label_4249e4:
    // 0x4249e4: 0xc0dc408  jal         func_371020
label_4249e8:
    if (ctx->pc == 0x4249E8u) {
        ctx->pc = 0x4249E8u;
            // 0x4249e8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4249ECu;
        goto label_4249ec;
    }
    ctx->pc = 0x4249E4u;
    SET_GPR_U32(ctx, 31, 0x4249ECu);
    ctx->pc = 0x4249E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4249E4u;
            // 0x4249e8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4249ECu; }
        if (ctx->pc != 0x4249ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4249ECu; }
        if (ctx->pc != 0x4249ECu) { return; }
    }
    ctx->pc = 0x4249ECu;
label_4249ec:
    // 0x4249ec: 0xc0e0824  jal         func_382090
label_4249f0:
    if (ctx->pc == 0x4249F0u) {
        ctx->pc = 0x4249F0u;
            // 0x4249f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4249F4u;
        goto label_4249f4;
    }
    ctx->pc = 0x4249ECu;
    SET_GPR_U32(ctx, 31, 0x4249F4u);
    ctx->pc = 0x4249F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4249ECu;
            // 0x4249f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4249F4u; }
        if (ctx->pc != 0x4249F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4249F4u; }
        if (ctx->pc != 0x4249F4u) { return; }
    }
    ctx->pc = 0x4249F4u;
label_4249f4:
    // 0x4249f4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4249f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4249f8:
    // 0x4249f8: 0xc0e081c  jal         func_382070
label_4249fc:
    if (ctx->pc == 0x4249FCu) {
        ctx->pc = 0x4249FCu;
            // 0x4249fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424A00u;
        goto label_424a00;
    }
    ctx->pc = 0x4249F8u;
    SET_GPR_U32(ctx, 31, 0x424A00u);
    ctx->pc = 0x4249FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4249F8u;
            // 0x4249fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A00u; }
        if (ctx->pc != 0x424A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A00u; }
        if (ctx->pc != 0x424A00u) { return; }
    }
    ctx->pc = 0x424A00u;
label_424a00:
    // 0x424a00: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x424a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_424a04:
    // 0x424a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x424a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424a08:
    // 0x424a08: 0xc0e080c  jal         func_382030
label_424a0c:
    if (ctx->pc == 0x424A0Cu) {
        ctx->pc = 0x424A0Cu;
            // 0x424a0c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x424A10u;
        goto label_424a10;
    }
    ctx->pc = 0x424A08u;
    SET_GPR_U32(ctx, 31, 0x424A10u);
    ctx->pc = 0x424A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424A08u;
            // 0x424a0c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A10u; }
        if (ctx->pc != 0x424A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A10u; }
        if (ctx->pc != 0x424A10u) { return; }
    }
    ctx->pc = 0x424A10u;
label_424a10:
    // 0x424a10: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x424a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_424a14:
    // 0x424a14: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x424a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_424a18:
    // 0x424a18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x424a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424a1c:
    // 0x424a1c: 0xc08914c  jal         func_224530
label_424a20:
    if (ctx->pc == 0x424A20u) {
        ctx->pc = 0x424A20u;
            // 0x424a20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424A24u;
        goto label_424a24;
    }
    ctx->pc = 0x424A1Cu;
    SET_GPR_U32(ctx, 31, 0x424A24u);
    ctx->pc = 0x424A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424A1Cu;
            // 0x424a20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A24u; }
        if (ctx->pc != 0x424A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A24u; }
        if (ctx->pc != 0x424A24u) { return; }
    }
    ctx->pc = 0x424A24u;
label_424a24:
    // 0x424a24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x424a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_424a28:
    // 0x424a28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x424a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_424a2c:
    // 0x424a2c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x424a2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_424a30:
    // 0x424a30: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x424a30u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_424a34:
    // 0x424a34: 0xc0b6df0  jal         func_2DB7C0
label_424a38:
    if (ctx->pc == 0x424A38u) {
        ctx->pc = 0x424A38u;
            // 0x424a38: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x424A3Cu;
        goto label_424a3c;
    }
    ctx->pc = 0x424A34u;
    SET_GPR_U32(ctx, 31, 0x424A3Cu);
    ctx->pc = 0x424A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424A34u;
            // 0x424a38: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A3Cu; }
        if (ctx->pc != 0x424A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A3Cu; }
        if (ctx->pc != 0x424A3Cu) { return; }
    }
    ctx->pc = 0x424A3Cu;
label_424a3c:
    // 0x424a3c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x424a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_424a40:
    // 0x424a40: 0xc0e07f8  jal         func_381FE0
label_424a44:
    if (ctx->pc == 0x424A44u) {
        ctx->pc = 0x424A44u;
            // 0x424a44: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x424A48u;
        goto label_424a48;
    }
    ctx->pc = 0x424A40u;
    SET_GPR_U32(ctx, 31, 0x424A48u);
    ctx->pc = 0x424A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424A40u;
            // 0x424a44: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A48u; }
        if (ctx->pc != 0x424A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A48u; }
        if (ctx->pc != 0x424A48u) { return; }
    }
    ctx->pc = 0x424A48u;
label_424a48:
    // 0x424a48: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x424a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_424a4c:
    // 0x424a4c: 0xc0dc3f4  jal         func_370FD0
label_424a50:
    if (ctx->pc == 0x424A50u) {
        ctx->pc = 0x424A50u;
            // 0x424a50: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x424A54u;
        goto label_424a54;
    }
    ctx->pc = 0x424A4Cu;
    SET_GPR_U32(ctx, 31, 0x424A54u);
    ctx->pc = 0x424A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424A4Cu;
            // 0x424a50: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A54u; }
        if (ctx->pc != 0x424A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A54u; }
        if (ctx->pc != 0x424A54u) { return; }
    }
    ctx->pc = 0x424A54u;
label_424a54:
    // 0x424a54: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x424a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_424a58:
    // 0x424a58: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x424a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_424a5c:
    // 0x424a5c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_424a60:
    if (ctx->pc == 0x424A60u) {
        ctx->pc = 0x424A60u;
            // 0x424a60: 0xa2600008  sb          $zero, 0x8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x424A64u;
        goto label_424a64;
    }
    ctx->pc = 0x424A5Cu;
    {
        const bool branch_taken_0x424a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424a5c) {
            ctx->pc = 0x424A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424A5Cu;
            // 0x424a60: 0xa2600008  sb          $zero, 0x8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424A78u;
            goto label_424a78;
        }
    }
    ctx->pc = 0x424A64u;
label_424a64:
    // 0x424a64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x424a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_424a68:
    // 0x424a68: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x424a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_424a6c:
    // 0x424a6c: 0x320f809  jalr        $t9
label_424a70:
    if (ctx->pc == 0x424A70u) {
        ctx->pc = 0x424A70u;
            // 0x424a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424A74u;
        goto label_424a74;
    }
    ctx->pc = 0x424A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x424A74u);
        ctx->pc = 0x424A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424A6Cu;
            // 0x424a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x424A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x424A74u; }
            if (ctx->pc != 0x424A74u) { return; }
        }
        }
    }
    ctx->pc = 0x424A74u;
label_424a74:
    // 0x424a74: 0xa2600008  sb          $zero, 0x8($s3)
    ctx->pc = 0x424a74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
label_424a78:
    // 0x424a78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x424a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_424a7c:
    // 0x424a7c: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x424a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_424a80:
    // 0x424a80: 0x2442dfa0  addiu       $v0, $v0, -0x2060
    ctx->pc = 0x424a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959008));
label_424a84:
    // 0x424a84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x424a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_424a88:
    // 0x424a88: 0xc07f7a4  jal         func_1FDE90
label_424a8c:
    if (ctx->pc == 0x424A8Cu) {
        ctx->pc = 0x424A8Cu;
            // 0x424a8c: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x424A90u;
        goto label_424a90;
    }
    ctx->pc = 0x424A88u;
    SET_GPR_U32(ctx, 31, 0x424A90u);
    ctx->pc = 0x424A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424A88u;
            // 0x424a8c: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDE90u;
    if (runtime->hasFunction(0x1FDE90u)) {
        auto targetFn = runtime->lookupFunction(0x1FDE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A90u; }
        if (ctx->pc != 0x424A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDE90_0x1fde90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A90u; }
        if (ctx->pc != 0x424A90u) { return; }
    }
    ctx->pc = 0x424A90u;
label_424a90:
    // 0x424a90: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x424a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_424a94:
    // 0x424a94: 0xc0793f4  jal         func_1E4FD0
label_424a98:
    if (ctx->pc == 0x424A98u) {
        ctx->pc = 0x424A98u;
            // 0x424a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424A9Cu;
        goto label_424a9c;
    }
    ctx->pc = 0x424A94u;
    SET_GPR_U32(ctx, 31, 0x424A9Cu);
    ctx->pc = 0x424A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424A94u;
            // 0x424a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4FD0u;
    if (runtime->hasFunction(0x1E4FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1E4FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A9Cu; }
        if (ctx->pc != 0x424A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4FD0_0x1e4fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424A9Cu; }
        if (ctx->pc != 0x424A9Cu) { return; }
    }
    ctx->pc = 0x424A9Cu;
label_424a9c:
    // 0x424a9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x424a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_424aa0:
    // 0x424aa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x424aa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_424aa4:
    // 0x424aa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x424aa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_424aa8:
    // 0x424aa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x424aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_424aac:
    // 0x424aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x424aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_424ab0:
    // 0x424ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x424ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_424ab4:
    // 0x424ab4: 0x3e00008  jr          $ra
label_424ab8:
    if (ctx->pc == 0x424AB8u) {
        ctx->pc = 0x424AB8u;
            // 0x424ab8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x424ABCu;
        goto label_424abc;
    }
    ctx->pc = 0x424AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424AB4u;
            // 0x424ab8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424ABCu;
label_424abc:
    // 0x424abc: 0x0  nop
    ctx->pc = 0x424abcu;
    // NOP
label_424ac0:
    // 0x424ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x424ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_424ac4:
    // 0x424ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x424ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_424ac8:
    // 0x424ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x424ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_424acc:
    // 0x424acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x424accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_424ad0:
    // 0x424ad0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_424ad4:
    if (ctx->pc == 0x424AD4u) {
        ctx->pc = 0x424AD4u;
            // 0x424ad4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424AD8u;
        goto label_424ad8;
    }
    ctx->pc = 0x424AD0u;
    {
        const bool branch_taken_0x424ad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x424ad0) {
            ctx->pc = 0x424AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424AD0u;
            // 0x424ad4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424B10u;
            goto label_424b10;
        }
    }
    ctx->pc = 0x424AD8u;
label_424ad8:
    // 0x424ad8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x424ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_424adc:
    // 0x424adc: 0x2442bc00  addiu       $v0, $v0, -0x4400
    ctx->pc = 0x424adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949888));
label_424ae0:
    // 0x424ae0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_424ae4:
    if (ctx->pc == 0x424AE4u) {
        ctx->pc = 0x424AE4u;
            // 0x424ae4: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x424AE8u;
        goto label_424ae8;
    }
    ctx->pc = 0x424AE0u;
    {
        const bool branch_taken_0x424ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x424AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424AE0u;
            // 0x424ae4: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424ae0) {
            ctx->pc = 0x424AF4u;
            goto label_424af4;
        }
    }
    ctx->pc = 0x424AE8u;
label_424ae8:
    // 0x424ae8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x424ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_424aec:
    // 0x424aec: 0x244221e0  addiu       $v0, $v0, 0x21E0
    ctx->pc = 0x424aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8672));
label_424af0:
    // 0x424af0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x424af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_424af4:
    // 0x424af4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x424af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_424af8:
    // 0x424af8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x424af8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_424afc:
    // 0x424afc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_424b00:
    if (ctx->pc == 0x424B00u) {
        ctx->pc = 0x424B04u;
        goto label_424b04;
    }
    ctx->pc = 0x424AFCu;
    {
        const bool branch_taken_0x424afc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x424afc) {
            ctx->pc = 0x424B0Cu;
            goto label_424b0c;
        }
    }
    ctx->pc = 0x424B04u;
label_424b04:
    // 0x424b04: 0xc0400a8  jal         func_1002A0
label_424b08:
    if (ctx->pc == 0x424B08u) {
        ctx->pc = 0x424B08u;
            // 0x424b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424B0Cu;
        goto label_424b0c;
    }
    ctx->pc = 0x424B04u;
    SET_GPR_U32(ctx, 31, 0x424B0Cu);
    ctx->pc = 0x424B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424B04u;
            // 0x424b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424B0Cu; }
        if (ctx->pc != 0x424B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424B0Cu; }
        if (ctx->pc != 0x424B0Cu) { return; }
    }
    ctx->pc = 0x424B0Cu;
label_424b0c:
    // 0x424b0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x424b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_424b10:
    // 0x424b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x424b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_424b14:
    // 0x424b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x424b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_424b18:
    // 0x424b18: 0x3e00008  jr          $ra
label_424b1c:
    if (ctx->pc == 0x424B1Cu) {
        ctx->pc = 0x424B1Cu;
            // 0x424b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x424B20u;
        goto label_424b20;
    }
    ctx->pc = 0x424B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424B18u;
            // 0x424b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424B20u;
label_424b20:
    // 0x424b20: 0x3e00008  jr          $ra
label_424b24:
    if (ctx->pc == 0x424B24u) {
        ctx->pc = 0x424B24u;
            // 0x424b24: 0x24026d6a  addiu       $v0, $zero, 0x6D6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28010));
        ctx->pc = 0x424B28u;
        goto label_424b28;
    }
    ctx->pc = 0x424B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424B20u;
            // 0x424b24: 0x24026d6a  addiu       $v0, $zero, 0x6D6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424B28u;
label_424b28:
    // 0x424b28: 0x0  nop
    ctx->pc = 0x424b28u;
    // NOP
label_424b2c:
    // 0x424b2c: 0x0  nop
    ctx->pc = 0x424b2cu;
    // NOP
label_424b30:
    // 0x424b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x424b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_424b34:
    // 0x424b34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x424b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424b38:
    // 0x424b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x424b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_424b3c:
    // 0x424b3c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x424b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_424b40:
    // 0x424b40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x424b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_424b44:
    // 0x424b44: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x424b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_424b48:
    // 0x424b48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x424b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_424b4c:
    // 0x424b4c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x424b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_424b50:
    // 0x424b50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x424b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_424b54:
    // 0x424b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x424b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_424b58:
    // 0x424b58: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x424b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_424b5c:
    // 0x424b5c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x424b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424b60:
    // 0x424b60: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x424b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_424b64:
    // 0x424b64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x424b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_424b68:
    // 0x424b68: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x424b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_424b6c:
    // 0x424b6c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x424b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_424b70:
    // 0x424b70: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x424b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_424b74:
    // 0x424b74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x424b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_424b78:
    // 0x424b78: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x424b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_424b7c:
    // 0x424b7c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x424b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_424b80:
    // 0x424b80: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x424b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_424b84:
    // 0x424b84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x424b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_424b88:
    // 0x424b88: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x424b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_424b8c:
    // 0x424b8c: 0xc0a997c  jal         func_2A65F0
label_424b90:
    if (ctx->pc == 0x424B90u) {
        ctx->pc = 0x424B90u;
            // 0x424b90: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x424B94u;
        goto label_424b94;
    }
    ctx->pc = 0x424B8Cu;
    SET_GPR_U32(ctx, 31, 0x424B94u);
    ctx->pc = 0x424B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424B8Cu;
            // 0x424b90: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424B94u; }
        if (ctx->pc != 0x424B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424B94u; }
        if (ctx->pc != 0x424B94u) { return; }
    }
    ctx->pc = 0x424B94u;
label_424b94:
    // 0x424b94: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x424b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_424b98:
    // 0x424b98: 0xc0d879c  jal         func_361E70
label_424b9c:
    if (ctx->pc == 0x424B9Cu) {
        ctx->pc = 0x424B9Cu;
            // 0x424b9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424BA0u;
        goto label_424ba0;
    }
    ctx->pc = 0x424B98u;
    SET_GPR_U32(ctx, 31, 0x424BA0u);
    ctx->pc = 0x424B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424B98u;
            // 0x424b9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424BA0u; }
        if (ctx->pc != 0x424BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424BA0u; }
        if (ctx->pc != 0x424BA0u) { return; }
    }
    ctx->pc = 0x424BA0u;
label_424ba0:
    // 0x424ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x424ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_424ba4:
    // 0x424ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x424ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_424ba8:
    // 0x424ba8: 0x3e00008  jr          $ra
label_424bac:
    if (ctx->pc == 0x424BACu) {
        ctx->pc = 0x424BACu;
            // 0x424bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x424BB0u;
        goto label_424bb0;
    }
    ctx->pc = 0x424BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424BA8u;
            // 0x424bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424BB0u;
label_424bb0:
    // 0x424bb0: 0x81082d0  j           func_420B40
label_424bb4:
    if (ctx->pc == 0x424BB4u) {
        ctx->pc = 0x424BB4u;
            // 0x424bb4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x424BB8u;
        goto label_424bb8;
    }
    ctx->pc = 0x424BB0u;
    ctx->pc = 0x424BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424BB0u;
            // 0x424bb4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x420B40u;
    {
        auto targetFn = runtime->lookupFunction(0x420B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x424BB8u;
label_424bb8:
    // 0x424bb8: 0x0  nop
    ctx->pc = 0x424bb8u;
    // NOP
label_424bbc:
    // 0x424bbc: 0x0  nop
    ctx->pc = 0x424bbcu;
    // NOP
label_424bc0:
    // 0x424bc0: 0x8108858  j           func_422160
label_424bc4:
    if (ctx->pc == 0x424BC4u) {
        ctx->pc = 0x424BC4u;
            // 0x424bc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x424BC8u;
        goto label_424bc8;
    }
    ctx->pc = 0x424BC0u;
    ctx->pc = 0x424BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424BC0u;
            // 0x424bc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x422160u;
    {
        auto targetFn = runtime->lookupFunction(0x422160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x424BC8u;
label_424bc8:
    // 0x424bc8: 0x0  nop
    ctx->pc = 0x424bc8u;
    // NOP
label_424bcc:
    // 0x424bcc: 0x0  nop
    ctx->pc = 0x424bccu;
    // NOP
label_424bd0:
    // 0x424bd0: 0x8108208  j           func_420820
label_424bd4:
    if (ctx->pc == 0x424BD4u) {
        ctx->pc = 0x424BD4u;
            // 0x424bd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x424BD8u;
        goto label_424bd8;
    }
    ctx->pc = 0x424BD0u;
    ctx->pc = 0x424BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424BD0u;
            // 0x424bd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x420820u;
    {
        auto targetFn = runtime->lookupFunction(0x420820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x424BD8u;
label_424bd8:
    // 0x424bd8: 0x0  nop
    ctx->pc = 0x424bd8u;
    // NOP
label_424bdc:
    // 0x424bdc: 0x0  nop
    ctx->pc = 0x424bdcu;
    // NOP
label_424be0:
    // 0x424be0: 0x3e00008  jr          $ra
label_424be4:
    if (ctx->pc == 0x424BE4u) {
        ctx->pc = 0x424BE4u;
            // 0x424be4: 0x24023aca  addiu       $v0, $zero, 0x3ACA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15050));
        ctx->pc = 0x424BE8u;
        goto label_424be8;
    }
    ctx->pc = 0x424BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424BE0u;
            // 0x424be4: 0x24023aca  addiu       $v0, $zero, 0x3ACA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424BE8u;
label_424be8:
    // 0x424be8: 0x0  nop
    ctx->pc = 0x424be8u;
    // NOP
label_424bec:
    // 0x424bec: 0x0  nop
    ctx->pc = 0x424becu;
    // NOP
}
