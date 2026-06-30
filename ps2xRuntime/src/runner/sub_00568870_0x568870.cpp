#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00568870
// Address: 0x568870 - 0x568cd0
void sub_00568870_0x568870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00568870_0x568870");
#endif

    switch (ctx->pc) {
        case 0x568870u: goto label_568870;
        case 0x568874u: goto label_568874;
        case 0x568878u: goto label_568878;
        case 0x56887cu: goto label_56887c;
        case 0x568880u: goto label_568880;
        case 0x568884u: goto label_568884;
        case 0x568888u: goto label_568888;
        case 0x56888cu: goto label_56888c;
        case 0x568890u: goto label_568890;
        case 0x568894u: goto label_568894;
        case 0x568898u: goto label_568898;
        case 0x56889cu: goto label_56889c;
        case 0x5688a0u: goto label_5688a0;
        case 0x5688a4u: goto label_5688a4;
        case 0x5688a8u: goto label_5688a8;
        case 0x5688acu: goto label_5688ac;
        case 0x5688b0u: goto label_5688b0;
        case 0x5688b4u: goto label_5688b4;
        case 0x5688b8u: goto label_5688b8;
        case 0x5688bcu: goto label_5688bc;
        case 0x5688c0u: goto label_5688c0;
        case 0x5688c4u: goto label_5688c4;
        case 0x5688c8u: goto label_5688c8;
        case 0x5688ccu: goto label_5688cc;
        case 0x5688d0u: goto label_5688d0;
        case 0x5688d4u: goto label_5688d4;
        case 0x5688d8u: goto label_5688d8;
        case 0x5688dcu: goto label_5688dc;
        case 0x5688e0u: goto label_5688e0;
        case 0x5688e4u: goto label_5688e4;
        case 0x5688e8u: goto label_5688e8;
        case 0x5688ecu: goto label_5688ec;
        case 0x5688f0u: goto label_5688f0;
        case 0x5688f4u: goto label_5688f4;
        case 0x5688f8u: goto label_5688f8;
        case 0x5688fcu: goto label_5688fc;
        case 0x568900u: goto label_568900;
        case 0x568904u: goto label_568904;
        case 0x568908u: goto label_568908;
        case 0x56890cu: goto label_56890c;
        case 0x568910u: goto label_568910;
        case 0x568914u: goto label_568914;
        case 0x568918u: goto label_568918;
        case 0x56891cu: goto label_56891c;
        case 0x568920u: goto label_568920;
        case 0x568924u: goto label_568924;
        case 0x568928u: goto label_568928;
        case 0x56892cu: goto label_56892c;
        case 0x568930u: goto label_568930;
        case 0x568934u: goto label_568934;
        case 0x568938u: goto label_568938;
        case 0x56893cu: goto label_56893c;
        case 0x568940u: goto label_568940;
        case 0x568944u: goto label_568944;
        case 0x568948u: goto label_568948;
        case 0x56894cu: goto label_56894c;
        case 0x568950u: goto label_568950;
        case 0x568954u: goto label_568954;
        case 0x568958u: goto label_568958;
        case 0x56895cu: goto label_56895c;
        case 0x568960u: goto label_568960;
        case 0x568964u: goto label_568964;
        case 0x568968u: goto label_568968;
        case 0x56896cu: goto label_56896c;
        case 0x568970u: goto label_568970;
        case 0x568974u: goto label_568974;
        case 0x568978u: goto label_568978;
        case 0x56897cu: goto label_56897c;
        case 0x568980u: goto label_568980;
        case 0x568984u: goto label_568984;
        case 0x568988u: goto label_568988;
        case 0x56898cu: goto label_56898c;
        case 0x568990u: goto label_568990;
        case 0x568994u: goto label_568994;
        case 0x568998u: goto label_568998;
        case 0x56899cu: goto label_56899c;
        case 0x5689a0u: goto label_5689a0;
        case 0x5689a4u: goto label_5689a4;
        case 0x5689a8u: goto label_5689a8;
        case 0x5689acu: goto label_5689ac;
        case 0x5689b0u: goto label_5689b0;
        case 0x5689b4u: goto label_5689b4;
        case 0x5689b8u: goto label_5689b8;
        case 0x5689bcu: goto label_5689bc;
        case 0x5689c0u: goto label_5689c0;
        case 0x5689c4u: goto label_5689c4;
        case 0x5689c8u: goto label_5689c8;
        case 0x5689ccu: goto label_5689cc;
        case 0x5689d0u: goto label_5689d0;
        case 0x5689d4u: goto label_5689d4;
        case 0x5689d8u: goto label_5689d8;
        case 0x5689dcu: goto label_5689dc;
        case 0x5689e0u: goto label_5689e0;
        case 0x5689e4u: goto label_5689e4;
        case 0x5689e8u: goto label_5689e8;
        case 0x5689ecu: goto label_5689ec;
        case 0x5689f0u: goto label_5689f0;
        case 0x5689f4u: goto label_5689f4;
        case 0x5689f8u: goto label_5689f8;
        case 0x5689fcu: goto label_5689fc;
        case 0x568a00u: goto label_568a00;
        case 0x568a04u: goto label_568a04;
        case 0x568a08u: goto label_568a08;
        case 0x568a0cu: goto label_568a0c;
        case 0x568a10u: goto label_568a10;
        case 0x568a14u: goto label_568a14;
        case 0x568a18u: goto label_568a18;
        case 0x568a1cu: goto label_568a1c;
        case 0x568a20u: goto label_568a20;
        case 0x568a24u: goto label_568a24;
        case 0x568a28u: goto label_568a28;
        case 0x568a2cu: goto label_568a2c;
        case 0x568a30u: goto label_568a30;
        case 0x568a34u: goto label_568a34;
        case 0x568a38u: goto label_568a38;
        case 0x568a3cu: goto label_568a3c;
        case 0x568a40u: goto label_568a40;
        case 0x568a44u: goto label_568a44;
        case 0x568a48u: goto label_568a48;
        case 0x568a4cu: goto label_568a4c;
        case 0x568a50u: goto label_568a50;
        case 0x568a54u: goto label_568a54;
        case 0x568a58u: goto label_568a58;
        case 0x568a5cu: goto label_568a5c;
        case 0x568a60u: goto label_568a60;
        case 0x568a64u: goto label_568a64;
        case 0x568a68u: goto label_568a68;
        case 0x568a6cu: goto label_568a6c;
        case 0x568a70u: goto label_568a70;
        case 0x568a74u: goto label_568a74;
        case 0x568a78u: goto label_568a78;
        case 0x568a7cu: goto label_568a7c;
        case 0x568a80u: goto label_568a80;
        case 0x568a84u: goto label_568a84;
        case 0x568a88u: goto label_568a88;
        case 0x568a8cu: goto label_568a8c;
        case 0x568a90u: goto label_568a90;
        case 0x568a94u: goto label_568a94;
        case 0x568a98u: goto label_568a98;
        case 0x568a9cu: goto label_568a9c;
        case 0x568aa0u: goto label_568aa0;
        case 0x568aa4u: goto label_568aa4;
        case 0x568aa8u: goto label_568aa8;
        case 0x568aacu: goto label_568aac;
        case 0x568ab0u: goto label_568ab0;
        case 0x568ab4u: goto label_568ab4;
        case 0x568ab8u: goto label_568ab8;
        case 0x568abcu: goto label_568abc;
        case 0x568ac0u: goto label_568ac0;
        case 0x568ac4u: goto label_568ac4;
        case 0x568ac8u: goto label_568ac8;
        case 0x568accu: goto label_568acc;
        case 0x568ad0u: goto label_568ad0;
        case 0x568ad4u: goto label_568ad4;
        case 0x568ad8u: goto label_568ad8;
        case 0x568adcu: goto label_568adc;
        case 0x568ae0u: goto label_568ae0;
        case 0x568ae4u: goto label_568ae4;
        case 0x568ae8u: goto label_568ae8;
        case 0x568aecu: goto label_568aec;
        case 0x568af0u: goto label_568af0;
        case 0x568af4u: goto label_568af4;
        case 0x568af8u: goto label_568af8;
        case 0x568afcu: goto label_568afc;
        case 0x568b00u: goto label_568b00;
        case 0x568b04u: goto label_568b04;
        case 0x568b08u: goto label_568b08;
        case 0x568b0cu: goto label_568b0c;
        case 0x568b10u: goto label_568b10;
        case 0x568b14u: goto label_568b14;
        case 0x568b18u: goto label_568b18;
        case 0x568b1cu: goto label_568b1c;
        case 0x568b20u: goto label_568b20;
        case 0x568b24u: goto label_568b24;
        case 0x568b28u: goto label_568b28;
        case 0x568b2cu: goto label_568b2c;
        case 0x568b30u: goto label_568b30;
        case 0x568b34u: goto label_568b34;
        case 0x568b38u: goto label_568b38;
        case 0x568b3cu: goto label_568b3c;
        case 0x568b40u: goto label_568b40;
        case 0x568b44u: goto label_568b44;
        case 0x568b48u: goto label_568b48;
        case 0x568b4cu: goto label_568b4c;
        case 0x568b50u: goto label_568b50;
        case 0x568b54u: goto label_568b54;
        case 0x568b58u: goto label_568b58;
        case 0x568b5cu: goto label_568b5c;
        case 0x568b60u: goto label_568b60;
        case 0x568b64u: goto label_568b64;
        case 0x568b68u: goto label_568b68;
        case 0x568b6cu: goto label_568b6c;
        case 0x568b70u: goto label_568b70;
        case 0x568b74u: goto label_568b74;
        case 0x568b78u: goto label_568b78;
        case 0x568b7cu: goto label_568b7c;
        case 0x568b80u: goto label_568b80;
        case 0x568b84u: goto label_568b84;
        case 0x568b88u: goto label_568b88;
        case 0x568b8cu: goto label_568b8c;
        case 0x568b90u: goto label_568b90;
        case 0x568b94u: goto label_568b94;
        case 0x568b98u: goto label_568b98;
        case 0x568b9cu: goto label_568b9c;
        case 0x568ba0u: goto label_568ba0;
        case 0x568ba4u: goto label_568ba4;
        case 0x568ba8u: goto label_568ba8;
        case 0x568bacu: goto label_568bac;
        case 0x568bb0u: goto label_568bb0;
        case 0x568bb4u: goto label_568bb4;
        case 0x568bb8u: goto label_568bb8;
        case 0x568bbcu: goto label_568bbc;
        case 0x568bc0u: goto label_568bc0;
        case 0x568bc4u: goto label_568bc4;
        case 0x568bc8u: goto label_568bc8;
        case 0x568bccu: goto label_568bcc;
        case 0x568bd0u: goto label_568bd0;
        case 0x568bd4u: goto label_568bd4;
        case 0x568bd8u: goto label_568bd8;
        case 0x568bdcu: goto label_568bdc;
        case 0x568be0u: goto label_568be0;
        case 0x568be4u: goto label_568be4;
        case 0x568be8u: goto label_568be8;
        case 0x568becu: goto label_568bec;
        case 0x568bf0u: goto label_568bf0;
        case 0x568bf4u: goto label_568bf4;
        case 0x568bf8u: goto label_568bf8;
        case 0x568bfcu: goto label_568bfc;
        case 0x568c00u: goto label_568c00;
        case 0x568c04u: goto label_568c04;
        case 0x568c08u: goto label_568c08;
        case 0x568c0cu: goto label_568c0c;
        case 0x568c10u: goto label_568c10;
        case 0x568c14u: goto label_568c14;
        case 0x568c18u: goto label_568c18;
        case 0x568c1cu: goto label_568c1c;
        case 0x568c20u: goto label_568c20;
        case 0x568c24u: goto label_568c24;
        case 0x568c28u: goto label_568c28;
        case 0x568c2cu: goto label_568c2c;
        case 0x568c30u: goto label_568c30;
        case 0x568c34u: goto label_568c34;
        case 0x568c38u: goto label_568c38;
        case 0x568c3cu: goto label_568c3c;
        case 0x568c40u: goto label_568c40;
        case 0x568c44u: goto label_568c44;
        case 0x568c48u: goto label_568c48;
        case 0x568c4cu: goto label_568c4c;
        case 0x568c50u: goto label_568c50;
        case 0x568c54u: goto label_568c54;
        case 0x568c58u: goto label_568c58;
        case 0x568c5cu: goto label_568c5c;
        case 0x568c60u: goto label_568c60;
        case 0x568c64u: goto label_568c64;
        case 0x568c68u: goto label_568c68;
        case 0x568c6cu: goto label_568c6c;
        case 0x568c70u: goto label_568c70;
        case 0x568c74u: goto label_568c74;
        case 0x568c78u: goto label_568c78;
        case 0x568c7cu: goto label_568c7c;
        case 0x568c80u: goto label_568c80;
        case 0x568c84u: goto label_568c84;
        case 0x568c88u: goto label_568c88;
        case 0x568c8cu: goto label_568c8c;
        case 0x568c90u: goto label_568c90;
        case 0x568c94u: goto label_568c94;
        case 0x568c98u: goto label_568c98;
        case 0x568c9cu: goto label_568c9c;
        case 0x568ca0u: goto label_568ca0;
        case 0x568ca4u: goto label_568ca4;
        case 0x568ca8u: goto label_568ca8;
        case 0x568cacu: goto label_568cac;
        case 0x568cb0u: goto label_568cb0;
        case 0x568cb4u: goto label_568cb4;
        case 0x568cb8u: goto label_568cb8;
        case 0x568cbcu: goto label_568cbc;
        case 0x568cc0u: goto label_568cc0;
        case 0x568cc4u: goto label_568cc4;
        case 0x568cc8u: goto label_568cc8;
        case 0x568cccu: goto label_568ccc;
        default: break;
    }

    ctx->pc = 0x568870u;

label_568870:
    // 0x568870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x568870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_568874:
    // 0x568874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x568874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_568878:
    // 0x568878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x568878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_56887c:
    // 0x56887c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x56887cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_568880:
    // 0x568880: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x568880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_568884:
    // 0x568884: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_568888:
    if (ctx->pc == 0x568888u) {
        ctx->pc = 0x568888u;
            // 0x568888: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x56888Cu;
        goto label_56888c;
    }
    ctx->pc = 0x568884u;
    {
        const bool branch_taken_0x568884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x568884) {
            ctx->pc = 0x568888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568884u;
            // 0x568888: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5688A0u;
            goto label_5688a0;
        }
    }
    ctx->pc = 0x56888Cu;
label_56888c:
    // 0x56888c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x56888cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_568890:
    // 0x568890: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x568890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_568894:
    // 0x568894: 0x320f809  jalr        $t9
label_568898:
    if (ctx->pc == 0x568898u) {
        ctx->pc = 0x568898u;
            // 0x568898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x56889Cu;
        goto label_56889c;
    }
    ctx->pc = 0x568894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56889Cu);
        ctx->pc = 0x568898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568894u;
            // 0x568898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56889Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56889Cu; }
            if (ctx->pc != 0x56889Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56889Cu;
label_56889c:
    // 0x56889c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x56889cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_5688a0:
    // 0x5688a0: 0x8e040250  lw          $a0, 0x250($s0)
    ctx->pc = 0x5688a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_5688a4:
    // 0x5688a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5688a8:
    if (ctx->pc == 0x5688A8u) {
        ctx->pc = 0x5688A8u;
            // 0x5688a8: 0xae000250  sw          $zero, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
        ctx->pc = 0x5688ACu;
        goto label_5688ac;
    }
    ctx->pc = 0x5688A4u;
    {
        const bool branch_taken_0x5688a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5688a4) {
            ctx->pc = 0x5688A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5688A4u;
            // 0x5688a8: 0xae000250  sw          $zero, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5688C0u;
            goto label_5688c0;
        }
    }
    ctx->pc = 0x5688ACu;
label_5688ac:
    // 0x5688ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5688acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5688b0:
    // 0x5688b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5688b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5688b4:
    // 0x5688b4: 0x320f809  jalr        $t9
label_5688b8:
    if (ctx->pc == 0x5688B8u) {
        ctx->pc = 0x5688B8u;
            // 0x5688b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5688BCu;
        goto label_5688bc;
    }
    ctx->pc = 0x5688B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5688BCu);
        ctx->pc = 0x5688B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5688B4u;
            // 0x5688b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5688BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5688BCu; }
            if (ctx->pc != 0x5688BCu) { return; }
        }
        }
    }
    ctx->pc = 0x5688BCu;
label_5688bc:
    // 0x5688bc: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x5688bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_5688c0:
    // 0x5688c0: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x5688c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_5688c4:
    // 0x5688c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5688c8:
    if (ctx->pc == 0x5688C8u) {
        ctx->pc = 0x5688C8u;
            // 0x5688c8: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x5688CCu;
        goto label_5688cc;
    }
    ctx->pc = 0x5688C4u;
    {
        const bool branch_taken_0x5688c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5688c4) {
            ctx->pc = 0x5688C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5688C4u;
            // 0x5688c8: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5688E0u;
            goto label_5688e0;
        }
    }
    ctx->pc = 0x5688CCu;
label_5688cc:
    // 0x5688cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5688ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5688d0:
    // 0x5688d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5688d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5688d4:
    // 0x5688d4: 0x320f809  jalr        $t9
label_5688d8:
    if (ctx->pc == 0x5688D8u) {
        ctx->pc = 0x5688D8u;
            // 0x5688d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5688DCu;
        goto label_5688dc;
    }
    ctx->pc = 0x5688D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5688DCu);
        ctx->pc = 0x5688D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5688D4u;
            // 0x5688d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5688DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5688DCu; }
            if (ctx->pc != 0x5688DCu) { return; }
        }
        }
    }
    ctx->pc = 0x5688DCu;
label_5688dc:
    // 0x5688dc: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x5688dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_5688e0:
    // 0x5688e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5688e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5688e4:
    // 0x5688e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5688e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5688e8:
    // 0x5688e8: 0x3e00008  jr          $ra
label_5688ec:
    if (ctx->pc == 0x5688ECu) {
        ctx->pc = 0x5688ECu;
            // 0x5688ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5688F0u;
        goto label_5688f0;
    }
    ctx->pc = 0x5688E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5688ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5688E8u;
            // 0x5688ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5688F0u;
label_5688f0:
    // 0x5688f0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x5688f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_5688f4:
    // 0x5688f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5688f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5688f8:
    // 0x5688f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5688f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5688fc:
    // 0x5688fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5688fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_568900:
    // 0x568900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x568900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_568904:
    // 0x568904: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x568904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_568908:
    // 0x568908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x568908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56890c:
    // 0x56890c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_568910:
    // 0x568910: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x568910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_568914:
    // 0x568914: 0xc0892d0  jal         func_224B40
label_568918:
    if (ctx->pc == 0x568918u) {
        ctx->pc = 0x568918u;
            // 0x568918: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x56891Cu;
        goto label_56891c;
    }
    ctx->pc = 0x568914u;
    SET_GPR_U32(ctx, 31, 0x56891Cu);
    ctx->pc = 0x568918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568914u;
            // 0x568918: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56891Cu; }
        if (ctx->pc != 0x56891Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56891Cu; }
        if (ctx->pc != 0x56891Cu) { return; }
    }
    ctx->pc = 0x56891Cu;
label_56891c:
    // 0x56891c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x56891cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_568920:
    // 0x568920: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x568920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_568924:
    // 0x568924: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x568924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_568928:
    // 0x568928: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x568928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_56892c:
    // 0x56892c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x56892cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_568930:
    // 0x568930: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x568930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_568934:
    // 0x568934: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x568934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_568938:
    // 0x568938: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x568938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
label_56893c:
    // 0x56893c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x56893cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_568940:
    // 0x568940: 0xc0a7a88  jal         func_29EA20
label_568944:
    if (ctx->pc == 0x568944u) {
        ctx->pc = 0x568944u;
            // 0x568944: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x568948u;
        goto label_568948;
    }
    ctx->pc = 0x568940u;
    SET_GPR_U32(ctx, 31, 0x568948u);
    ctx->pc = 0x568944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568940u;
            // 0x568944: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568948u; }
        if (ctx->pc != 0x568948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568948u; }
        if (ctx->pc != 0x568948u) { return; }
    }
    ctx->pc = 0x568948u;
label_568948:
    // 0x568948: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x568948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_56894c:
    // 0x56894c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x56894cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_568950:
    // 0x568950: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_568954:
    if (ctx->pc == 0x568954u) {
        ctx->pc = 0x568954u;
            // 0x568954: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x568958u;
        goto label_568958;
    }
    ctx->pc = 0x568950u;
    {
        const bool branch_taken_0x568950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x568954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568950u;
            // 0x568954: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568950) {
            ctx->pc = 0x56896Cu;
            goto label_56896c;
        }
    }
    ctx->pc = 0x568958u;
label_568958:
    // 0x568958: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x568958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_56895c:
    // 0x56895c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x56895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_568960:
    // 0x568960: 0xc0804bc  jal         func_2012F0
label_568964:
    if (ctx->pc == 0x568964u) {
        ctx->pc = 0x568964u;
            // 0x568964: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x568968u;
        goto label_568968;
    }
    ctx->pc = 0x568960u;
    SET_GPR_U32(ctx, 31, 0x568968u);
    ctx->pc = 0x568964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568960u;
            // 0x568964: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568968u; }
        if (ctx->pc != 0x568968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568968u; }
        if (ctx->pc != 0x568968u) { return; }
    }
    ctx->pc = 0x568968u;
label_568968:
    // 0x568968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x568968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_56896c:
    // 0x56896c: 0xae640250  sw          $a0, 0x250($s3)
    ctx->pc = 0x56896cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 4));
label_568970:
    // 0x568970: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x568970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_568974:
    // 0x568974: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x568974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_568978:
    // 0x568978: 0xc0b6e68  jal         func_2DB9A0
label_56897c:
    if (ctx->pc == 0x56897Cu) {
        ctx->pc = 0x56897Cu;
            // 0x56897c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x568980u;
        goto label_568980;
    }
    ctx->pc = 0x568978u;
    SET_GPR_U32(ctx, 31, 0x568980u);
    ctx->pc = 0x56897Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568978u;
            // 0x56897c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568980u; }
        if (ctx->pc != 0x568980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568980u; }
        if (ctx->pc != 0x568980u) { return; }
    }
    ctx->pc = 0x568980u;
label_568980:
    // 0x568980: 0xc0b6dac  jal         func_2DB6B0
label_568984:
    if (ctx->pc == 0x568984u) {
        ctx->pc = 0x568984u;
            // 0x568984: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x568988u;
        goto label_568988;
    }
    ctx->pc = 0x568980u;
    SET_GPR_U32(ctx, 31, 0x568988u);
    ctx->pc = 0x568984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568980u;
            // 0x568984: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568988u; }
        if (ctx->pc != 0x568988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568988u; }
        if (ctx->pc != 0x568988u) { return; }
    }
    ctx->pc = 0x568988u;
label_568988:
    // 0x568988: 0xc0cac94  jal         func_32B250
label_56898c:
    if (ctx->pc == 0x56898Cu) {
        ctx->pc = 0x56898Cu;
            // 0x56898c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x568990u;
        goto label_568990;
    }
    ctx->pc = 0x568988u;
    SET_GPR_U32(ctx, 31, 0x568990u);
    ctx->pc = 0x56898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568988u;
            // 0x56898c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568990u; }
        if (ctx->pc != 0x568990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568990u; }
        if (ctx->pc != 0x568990u) { return; }
    }
    ctx->pc = 0x568990u;
label_568990:
    // 0x568990: 0xc0cac84  jal         func_32B210
label_568994:
    if (ctx->pc == 0x568994u) {
        ctx->pc = 0x568994u;
            // 0x568994: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x568998u;
        goto label_568998;
    }
    ctx->pc = 0x568990u;
    SET_GPR_U32(ctx, 31, 0x568998u);
    ctx->pc = 0x568994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568990u;
            // 0x568994: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568998u; }
        if (ctx->pc != 0x568998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568998u; }
        if (ctx->pc != 0x568998u) { return; }
    }
    ctx->pc = 0x568998u;
label_568998:
    // 0x568998: 0x8e630250  lw          $v1, 0x250($s3)
    ctx->pc = 0x568998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
label_56899c:
    // 0x56899c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x56899cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_5689a0:
    // 0x5689a0: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x5689a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5689a4:
    // 0x5689a4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x5689a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_5689a8:
    // 0x5689a8: 0xc0a5a68  jal         func_2969A0
label_5689ac:
    if (ctx->pc == 0x5689ACu) {
        ctx->pc = 0x5689ACu;
            // 0x5689ac: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x5689B0u;
        goto label_5689b0;
    }
    ctx->pc = 0x5689A8u;
    SET_GPR_U32(ctx, 31, 0x5689B0u);
    ctx->pc = 0x5689ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5689A8u;
            // 0x5689ac: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5689B0u; }
        if (ctx->pc != 0x5689B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5689B0u; }
        if (ctx->pc != 0x5689B0u) { return; }
    }
    ctx->pc = 0x5689B0u;
label_5689b0:
    // 0x5689b0: 0x8e630250  lw          $v1, 0x250($s3)
    ctx->pc = 0x5689b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
label_5689b4:
    // 0x5689b4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x5689b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_5689b8:
    // 0x5689b8: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x5689b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_5689bc:
    // 0x5689bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5689bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5689c0:
    // 0x5689c0: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x5689c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5689c4:
    // 0x5689c4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x5689c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_5689c8:
    // 0x5689c8: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x5689c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
label_5689cc:
    // 0x5689cc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x5689ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5689d0:
    // 0x5689d0: 0xc6680048  lwc1        $f8, 0x48($s3)
    ctx->pc = 0x5689d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_5689d4:
    // 0x5689d4: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x5689d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_5689d8:
    // 0x5689d8: 0xc6670044  lwc1        $f7, 0x44($s3)
    ctx->pc = 0x5689d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_5689dc:
    // 0x5689dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5689dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5689e0:
    // 0x5689e0: 0xc6660040  lwc1        $f6, 0x40($s3)
    ctx->pc = 0x5689e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_5689e4:
    // 0x5689e4: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x5689e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_5689e8:
    // 0x5689e8: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x5689e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5689ec:
    // 0x5689ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x5689ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5689f0:
    // 0x5689f0: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x5689f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_5689f4:
    // 0x5689f4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x5689f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_5689f8:
    // 0x5689f8: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x5689f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_5689fc:
    // 0x5689fc: 0xa3a40192  sb          $a0, 0x192($sp)
    ctx->pc = 0x5689fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 402), (uint8_t)GPR_U32(ctx, 4));
label_568a00:
    // 0x568a00: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x568a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_568a04:
    // 0x568a04: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x568a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_568a08:
    // 0x568a08: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x568a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568a0c:
    // 0x568a0c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x568a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_568a10:
    // 0x568a10: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x568a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_568a14:
    // 0x568a14: 0xafa90188  sw          $t1, 0x188($sp)
    ctx->pc = 0x568a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 9));
label_568a18:
    // 0x568a18: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x568a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_568a1c:
    // 0x568a1c: 0xa3a80190  sb          $t0, 0x190($sp)
    ctx->pc = 0x568a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 8));
label_568a20:
    // 0x568a20: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x568a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_568a24:
    // 0x568a24: 0xafa7018c  sw          $a3, 0x18C($sp)
    ctx->pc = 0x568a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 7));
label_568a28:
    // 0x568a28: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x568a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_568a2c:
    // 0x568a2c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x568a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_568a30:
    // 0x568a30: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x568a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_568a34:
    // 0x568a34: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x568a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_568a38:
    // 0x568a38: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x568a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568a3c:
    // 0x568a3c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x568a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_568a40:
    // 0x568a40: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x568a40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_568a44:
    // 0x568a44: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x568a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_568a48:
    // 0x568a48: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x568a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_568a4c:
    // 0x568a4c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x568a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_568a50:
    // 0x568a50: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x568a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568a54:
    // 0x568a54: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x568a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_568a58:
    // 0x568a58: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x568a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_568a5c:
    // 0x568a5c: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x568a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_568a60:
    // 0x568a60: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x568a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_568a64:
    // 0x568a64: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x568a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_568a68:
    // 0x568a68: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x568a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_568a6c:
    // 0x568a6c: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x568a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_568a70:
    // 0x568a70: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x568a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568a74:
    // 0x568a74: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x568a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_568a78:
    // 0x568a78: 0xe7a600f0  swc1        $f6, 0xF0($sp)
    ctx->pc = 0x568a78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_568a7c:
    // 0x568a7c: 0xe7a700f4  swc1        $f7, 0xF4($sp)
    ctx->pc = 0x568a7cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_568a80:
    // 0x568a80: 0xe7a800f8  swc1        $f8, 0xF8($sp)
    ctx->pc = 0x568a80u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_568a84:
    // 0x568a84: 0xe7a50130  swc1        $f5, 0x130($sp)
    ctx->pc = 0x568a84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_568a88:
    // 0x568a88: 0xe7a40134  swc1        $f4, 0x134($sp)
    ctx->pc = 0x568a88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_568a8c:
    // 0x568a8c: 0xe7a30138  swc1        $f3, 0x138($sp)
    ctx->pc = 0x568a8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_568a90:
    // 0x568a90: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x568a90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_568a94:
    // 0x568a94: 0xe7a1016c  swc1        $f1, 0x16C($sp)
    ctx->pc = 0x568a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_568a98:
    // 0x568a98: 0xc0a7a88  jal         func_29EA20
label_568a9c:
    if (ctx->pc == 0x568A9Cu) {
        ctx->pc = 0x568A9Cu;
            // 0x568a9c: 0xe7a00170  swc1        $f0, 0x170($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->pc = 0x568AA0u;
        goto label_568aa0;
    }
    ctx->pc = 0x568A98u;
    SET_GPR_U32(ctx, 31, 0x568AA0u);
    ctx->pc = 0x568A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568A98u;
            // 0x568a9c: 0xe7a00170  swc1        $f0, 0x170($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568AA0u; }
        if (ctx->pc != 0x568AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568AA0u; }
        if (ctx->pc != 0x568AA0u) { return; }
    }
    ctx->pc = 0x568AA0u;
label_568aa0:
    // 0x568aa0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x568aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_568aa4:
    // 0x568aa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x568aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_568aa8:
    // 0x568aa8: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
label_568aac:
    if (ctx->pc == 0x568AACu) {
        ctx->pc = 0x568AACu;
            // 0x568aac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x568AB0u;
        goto label_568ab0;
    }
    ctx->pc = 0x568AA8u;
    {
        const bool branch_taken_0x568aa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x568AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568AA8u;
            // 0x568aac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568aa8) {
            ctx->pc = 0x568B04u;
            goto label_568b04;
        }
    }
    ctx->pc = 0x568AB0u;
label_568ab0:
    // 0x568ab0: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_568ab4:
    if (ctx->pc == 0x568AB4u) {
        ctx->pc = 0x568AB4u;
            // 0x568ab4: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568AB8u;
        goto label_568ab8;
    }
    ctx->pc = 0x568AB0u;
    {
        const bool branch_taken_0x568ab0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x568AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568AB0u;
            // 0x568ab4: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568ab0) {
            ctx->pc = 0x568ABCu;
            goto label_568abc;
        }
    }
    ctx->pc = 0x568AB8u;
label_568ab8:
    // 0x568ab8: 0x26710030  addiu       $s1, $s3, 0x30
    ctx->pc = 0x568ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_568abc:
    // 0x568abc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x568abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_568ac0:
    // 0x568ac0: 0xc088ef4  jal         func_223BD0
label_568ac4:
    if (ctx->pc == 0x568AC4u) {
        ctx->pc = 0x568AC4u;
            // 0x568ac4: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x568AC8u;
        goto label_568ac8;
    }
    ctx->pc = 0x568AC0u;
    SET_GPR_U32(ctx, 31, 0x568AC8u);
    ctx->pc = 0x568AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568AC0u;
            // 0x568ac4: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568AC8u; }
        if (ctx->pc != 0x568AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568AC8u; }
        if (ctx->pc != 0x568AC8u) { return; }
    }
    ctx->pc = 0x568AC8u;
label_568ac8:
    // 0x568ac8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x568ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_568acc:
    // 0x568acc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x568accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_568ad0:
    // 0x568ad0: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x568ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_568ad4:
    // 0x568ad4: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x568ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_568ad8:
    // 0x568ad8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x568ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_568adc:
    // 0x568adc: 0xae400200  sw          $zero, 0x200($s2)
    ctx->pc = 0x568adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 0));
label_568ae0:
    // 0x568ae0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x568ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_568ae4:
    // 0x568ae4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x568ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_568ae8:
    // 0x568ae8: 0xae400210  sw          $zero, 0x210($s2)
    ctx->pc = 0x568ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 0));
label_568aec:
    // 0x568aec: 0xae400214  sw          $zero, 0x214($s2)
    ctx->pc = 0x568aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 0));
label_568af0:
    // 0x568af0: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x568af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_568af4:
    // 0x568af4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x568af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_568af8:
    // 0x568af8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x568af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_568afc:
    // 0x568afc: 0xc088b38  jal         func_222CE0
label_568b00:
    if (ctx->pc == 0x568B00u) {
        ctx->pc = 0x568B00u;
            // 0x568b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568B04u;
        goto label_568b04;
    }
    ctx->pc = 0x568AFCu;
    SET_GPR_U32(ctx, 31, 0x568B04u);
    ctx->pc = 0x568B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568AFCu;
            // 0x568b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568B04u; }
        if (ctx->pc != 0x568B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568B04u; }
        if (ctx->pc != 0x568B04u) { return; }
    }
    ctx->pc = 0x568B04u;
label_568b04:
    // 0x568b04: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x568b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_568b08:
    // 0x568b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x568b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_568b0c:
    // 0x568b0c: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x568b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_568b10:
    // 0x568b10: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x568b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_568b14:
    // 0x568b14: 0xae420200  sw          $v0, 0x200($s2)
    ctx->pc = 0x568b14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 2));
label_568b18:
    // 0x568b18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x568b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_568b1c:
    // 0x568b1c: 0xc08914c  jal         func_224530
label_568b20:
    if (ctx->pc == 0x568B20u) {
        ctx->pc = 0x568B20u;
            // 0x568b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568B24u;
        goto label_568b24;
    }
    ctx->pc = 0x568B1Cu;
    SET_GPR_U32(ctx, 31, 0x568B24u);
    ctx->pc = 0x568B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568B1Cu;
            // 0x568b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568B24u; }
        if (ctx->pc != 0x568B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568B24u; }
        if (ctx->pc != 0x568B24u) { return; }
    }
    ctx->pc = 0x568B24u;
label_568b24:
    // 0x568b24: 0xc6620048  lwc1        $f2, 0x48($s3)
    ctx->pc = 0x568b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_568b28:
    // 0x568b28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x568b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_568b2c:
    // 0x568b2c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x568b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568b30:
    // 0x568b30: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x568b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_568b34:
    // 0x568b34: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x568b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_568b38:
    // 0x568b38: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x568b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_568b3c:
    // 0x568b3c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x568b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_568b40:
    // 0x568b40: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x568b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_568b44:
    // 0x568b44: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x568b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_568b48:
    // 0x568b48: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x568b48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_568b4c:
    // 0x568b4c: 0xc663005c  lwc1        $f3, 0x5C($s3)
    ctx->pc = 0x568b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_568b50:
    // 0x568b50: 0xc6620058  lwc1        $f2, 0x58($s3)
    ctx->pc = 0x568b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_568b54:
    // 0x568b54: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x568b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568b58:
    // 0x568b58: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x568b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_568b5c:
    // 0x568b5c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x568b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_568b60:
    // 0x568b60: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x568b60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_568b64:
    // 0x568b64: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x568b64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_568b68:
    // 0x568b68: 0xc0892b0  jal         func_224AC0
label_568b6c:
    if (ctx->pc == 0x568B6Cu) {
        ctx->pc = 0x568B6Cu;
            // 0x568b6c: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x568B70u;
        goto label_568b70;
    }
    ctx->pc = 0x568B68u;
    SET_GPR_U32(ctx, 31, 0x568B70u);
    ctx->pc = 0x568B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568B68u;
            // 0x568b6c: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568B70u; }
        if (ctx->pc != 0x568B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568B70u; }
        if (ctx->pc != 0x568B70u) { return; }
    }
    ctx->pc = 0x568B70u;
label_568b70:
    // 0x568b70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x568b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_568b74:
    // 0x568b74: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x568b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_568b78:
    // 0x568b78: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x568b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_568b7c:
    // 0x568b7c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x568b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_568b80:
    // 0x568b80: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x568b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_568b84:
    // 0x568b84: 0xc0891d8  jal         func_224760
label_568b88:
    if (ctx->pc == 0x568B88u) {
        ctx->pc = 0x568B88u;
            // 0x568b88: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x568B8Cu;
        goto label_568b8c;
    }
    ctx->pc = 0x568B84u;
    SET_GPR_U32(ctx, 31, 0x568B8Cu);
    ctx->pc = 0x568B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568B84u;
            // 0x568b88: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568B8Cu; }
        if (ctx->pc != 0x568B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568B8Cu; }
        if (ctx->pc != 0x568B8Cu) { return; }
    }
    ctx->pc = 0x568B8Cu;
label_568b8c:
    // 0x568b8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x568b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_568b90:
    // 0x568b90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x568b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_568b94:
    // 0x568b94: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x568b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_568b98:
    // 0x568b98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x568b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_568b9c:
    // 0x568b9c: 0xc08c164  jal         func_230590
label_568ba0:
    if (ctx->pc == 0x568BA0u) {
        ctx->pc = 0x568BA0u;
            // 0x568ba0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x568BA4u;
        goto label_568ba4;
    }
    ctx->pc = 0x568B9Cu;
    SET_GPR_U32(ctx, 31, 0x568BA4u);
    ctx->pc = 0x568BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568B9Cu;
            // 0x568ba0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568BA4u; }
        if (ctx->pc != 0x568BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568BA4u; }
        if (ctx->pc != 0x568BA4u) { return; }
    }
    ctx->pc = 0x568BA4u;
label_568ba4:
    // 0x568ba4: 0xae720080  sw          $s2, 0x80($s3)
    ctx->pc = 0x568ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 18));
label_568ba8:
    // 0x568ba8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x568ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_568bac:
    // 0x568bac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x568bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_568bb0:
    // 0x568bb0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x568bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_568bb4:
    // 0x568bb4: 0xc0a7a88  jal         func_29EA20
label_568bb8:
    if (ctx->pc == 0x568BB8u) {
        ctx->pc = 0x568BB8u;
            // 0x568bb8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x568BBCu;
        goto label_568bbc;
    }
    ctx->pc = 0x568BB4u;
    SET_GPR_U32(ctx, 31, 0x568BBCu);
    ctx->pc = 0x568BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568BB4u;
            // 0x568bb8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568BBCu; }
        if (ctx->pc != 0x568BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568BBCu; }
        if (ctx->pc != 0x568BBCu) { return; }
    }
    ctx->pc = 0x568BBCu;
label_568bbc:
    // 0x568bbc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x568bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_568bc0:
    // 0x568bc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x568bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_568bc4:
    // 0x568bc4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_568bc8:
    if (ctx->pc == 0x568BC8u) {
        ctx->pc = 0x568BC8u;
            // 0x568bc8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x568BCCu;
        goto label_568bcc;
    }
    ctx->pc = 0x568BC4u;
    {
        const bool branch_taken_0x568bc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x568BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568BC4u;
            // 0x568bc8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568bc4) {
            ctx->pc = 0x568BE8u;
            goto label_568be8;
        }
    }
    ctx->pc = 0x568BCCu;
label_568bcc:
    // 0x568bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x568bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_568bd0:
    // 0x568bd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x568bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_568bd4:
    // 0x568bd4: 0xc0869d0  jal         func_21A740
label_568bd8:
    if (ctx->pc == 0x568BD8u) {
        ctx->pc = 0x568BD8u;
            // 0x568bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568BDCu;
        goto label_568bdc;
    }
    ctx->pc = 0x568BD4u;
    SET_GPR_U32(ctx, 31, 0x568BDCu);
    ctx->pc = 0x568BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568BD4u;
            // 0x568bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568BDCu; }
        if (ctx->pc != 0x568BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568BDCu; }
        if (ctx->pc != 0x568BDCu) { return; }
    }
    ctx->pc = 0x568BDCu;
label_568bdc:
    // 0x568bdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x568bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_568be0:
    // 0x568be0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x568be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_568be4:
    // 0x568be4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x568be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_568be8:
    // 0x568be8: 0xae510210  sw          $s1, 0x210($s2)
    ctx->pc = 0x568be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 17));
label_568bec:
    // 0x568bec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x568becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_568bf0:
    // 0x568bf0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x568bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_568bf4:
    // 0x568bf4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x568bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_568bf8:
    // 0x568bf8: 0xc08c650  jal         func_231940
label_568bfc:
    if (ctx->pc == 0x568BFCu) {
        ctx->pc = 0x568BFCu;
            // 0x568bfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568C00u;
        goto label_568c00;
    }
    ctx->pc = 0x568BF8u;
    SET_GPR_U32(ctx, 31, 0x568C00u);
    ctx->pc = 0x568BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568BF8u;
            // 0x568bfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568C00u; }
        if (ctx->pc != 0x568C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568C00u; }
        if (ctx->pc != 0x568C00u) { return; }
    }
    ctx->pc = 0x568C00u;
label_568c00:
    // 0x568c00: 0x92040ce4  lbu         $a0, 0xCE4($s0)
    ctx->pc = 0x568c00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3300)));
label_568c04:
    // 0x568c04: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x568c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_568c08:
    // 0x568c08: 0x5083001d  beql        $a0, $v1, . + 4 + (0x1D << 2)
label_568c0c:
    if (ctx->pc == 0x568C0Cu) {
        ctx->pc = 0x568C0Cu;
            // 0x568c0c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x568C10u;
        goto label_568c10;
    }
    ctx->pc = 0x568C08u;
    {
        const bool branch_taken_0x568c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x568c08) {
            ctx->pc = 0x568C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568C08u;
            // 0x568c0c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x568C80u;
            goto label_568c80;
        }
    }
    ctx->pc = 0x568C10u;
label_568c10:
    // 0x568c10: 0xc040180  jal         func_100600
label_568c14:
    if (ctx->pc == 0x568C14u) {
        ctx->pc = 0x568C14u;
            // 0x568c14: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x568C18u;
        goto label_568c18;
    }
    ctx->pc = 0x568C10u;
    SET_GPR_U32(ctx, 31, 0x568C18u);
    ctx->pc = 0x568C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568C10u;
            // 0x568c14: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568C18u; }
        if (ctx->pc != 0x568C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568C18u; }
        if (ctx->pc != 0x568C18u) { return; }
    }
    ctx->pc = 0x568C18u;
label_568c18:
    // 0x568c18: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_568c1c:
    if (ctx->pc == 0x568C1Cu) {
        ctx->pc = 0x568C1Cu;
            // 0x568c1c: 0xae6200d0  sw          $v0, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x568C20u;
        goto label_568c20;
    }
    ctx->pc = 0x568C18u;
    {
        const bool branch_taken_0x568c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x568c18) {
            ctx->pc = 0x568C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568C18u;
            // 0x568c1c: 0xae6200d0  sw          $v0, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x568C68u;
            goto label_568c68;
        }
    }
    ctx->pc = 0x568C20u;
label_568c20:
    // 0x568c20: 0x8e660080  lw          $a2, 0x80($s3)
    ctx->pc = 0x568c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_568c24:
    // 0x568c24: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x568c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_568c28:
    // 0x568c28: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x568c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_568c2c:
    // 0x568c2c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x568c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_568c30:
    // 0x568c30: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x568c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_568c34:
    // 0x568c34: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x568c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_568c38:
    // 0x568c38: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x568c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_568c3c:
    // 0x568c3c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x568c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_568c40:
    // 0x568c40: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x568c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_568c44:
    // 0x568c44: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x568c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_568c48:
    // 0x568c48: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x568c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_568c4c:
    // 0x568c4c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x568c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_568c50:
    // 0x568c50: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x568c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_568c54:
    // 0x568c54: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x568c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_568c58:
    // 0x568c58: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x568c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_568c5c:
    // 0x568c5c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x568c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_568c60:
    // 0x568c60: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x568c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_568c64:
    // 0x568c64: 0xae6200d0  sw          $v0, 0xD0($s3)
    ctx->pc = 0x568c64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
label_568c68:
    // 0x568c68: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x568c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_568c6c:
    // 0x568c6c: 0x8e6400e0  lw          $a0, 0xE0($s3)
    ctx->pc = 0x568c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_568c70:
    // 0x568c70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x568c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_568c74:
    // 0x568c74: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x568c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_568c78:
    // 0x568c78: 0xae6300e0  sw          $v1, 0xE0($s3)
    ctx->pc = 0x568c78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 3));
label_568c7c:
    // 0x568c7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x568c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_568c80:
    // 0x568c80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x568c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_568c84:
    // 0x568c84: 0xa2640094  sb          $a0, 0x94($s3)
    ctx->pc = 0x568c84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 4));
label_568c88:
    // 0x568c88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x568c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_568c8c:
    // 0x568c8c: 0xa2600095  sb          $zero, 0x95($s3)
    ctx->pc = 0x568c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 149), (uint8_t)GPR_U32(ctx, 0));
label_568c90:
    // 0x568c90: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x568c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_568c94:
    // 0x568c94: 0xa2630096  sb          $v1, 0x96($s3)
    ctx->pc = 0x568c94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 150), (uint8_t)GPR_U32(ctx, 3));
label_568c98:
    // 0x568c98: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x568c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_568c9c:
    // 0x568c9c: 0xa2660097  sb          $a2, 0x97($s3)
    ctx->pc = 0x568c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 151), (uint8_t)GPR_U32(ctx, 6));
label_568ca0:
    // 0x568ca0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x568ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_568ca4:
    // 0x568ca4: 0xae6600bc  sw          $a2, 0xBC($s3)
    ctx->pc = 0x568ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 6));
label_568ca8:
    // 0x568ca8: 0xae6500a0  sw          $a1, 0xA0($s3)
    ctx->pc = 0x568ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 5));
label_568cac:
    // 0x568cac: 0xae6400a8  sw          $a0, 0xA8($s3)
    ctx->pc = 0x568cacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 4));
label_568cb0:
    // 0x568cb0: 0xae6300b0  sw          $v1, 0xB0($s3)
    ctx->pc = 0x568cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 3));
label_568cb4:
    // 0x568cb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x568cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_568cb8:
    // 0x568cb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x568cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_568cbc:
    // 0x568cbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x568cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_568cc0:
    // 0x568cc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x568cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_568cc4:
    // 0x568cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x568cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_568cc8:
    // 0x568cc8: 0x3e00008  jr          $ra
label_568ccc:
    if (ctx->pc == 0x568CCCu) {
        ctx->pc = 0x568CCCu;
            // 0x568ccc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x568CD0u;
        goto label_fallthrough_0x568cc8;
    }
    ctx->pc = 0x568CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x568CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568CC8u;
            // 0x568ccc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x568cc8:
    ctx->pc = 0x568CD0u;
}
