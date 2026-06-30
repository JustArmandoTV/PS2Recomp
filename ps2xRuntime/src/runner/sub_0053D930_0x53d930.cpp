#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053D930
// Address: 0x53d930 - 0x53db30
void sub_0053D930_0x53d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053D930_0x53d930");
#endif

    switch (ctx->pc) {
        case 0x53d930u: goto label_53d930;
        case 0x53d934u: goto label_53d934;
        case 0x53d938u: goto label_53d938;
        case 0x53d93cu: goto label_53d93c;
        case 0x53d940u: goto label_53d940;
        case 0x53d944u: goto label_53d944;
        case 0x53d948u: goto label_53d948;
        case 0x53d94cu: goto label_53d94c;
        case 0x53d950u: goto label_53d950;
        case 0x53d954u: goto label_53d954;
        case 0x53d958u: goto label_53d958;
        case 0x53d95cu: goto label_53d95c;
        case 0x53d960u: goto label_53d960;
        case 0x53d964u: goto label_53d964;
        case 0x53d968u: goto label_53d968;
        case 0x53d96cu: goto label_53d96c;
        case 0x53d970u: goto label_53d970;
        case 0x53d974u: goto label_53d974;
        case 0x53d978u: goto label_53d978;
        case 0x53d97cu: goto label_53d97c;
        case 0x53d980u: goto label_53d980;
        case 0x53d984u: goto label_53d984;
        case 0x53d988u: goto label_53d988;
        case 0x53d98cu: goto label_53d98c;
        case 0x53d990u: goto label_53d990;
        case 0x53d994u: goto label_53d994;
        case 0x53d998u: goto label_53d998;
        case 0x53d99cu: goto label_53d99c;
        case 0x53d9a0u: goto label_53d9a0;
        case 0x53d9a4u: goto label_53d9a4;
        case 0x53d9a8u: goto label_53d9a8;
        case 0x53d9acu: goto label_53d9ac;
        case 0x53d9b0u: goto label_53d9b0;
        case 0x53d9b4u: goto label_53d9b4;
        case 0x53d9b8u: goto label_53d9b8;
        case 0x53d9bcu: goto label_53d9bc;
        case 0x53d9c0u: goto label_53d9c0;
        case 0x53d9c4u: goto label_53d9c4;
        case 0x53d9c8u: goto label_53d9c8;
        case 0x53d9ccu: goto label_53d9cc;
        case 0x53d9d0u: goto label_53d9d0;
        case 0x53d9d4u: goto label_53d9d4;
        case 0x53d9d8u: goto label_53d9d8;
        case 0x53d9dcu: goto label_53d9dc;
        case 0x53d9e0u: goto label_53d9e0;
        case 0x53d9e4u: goto label_53d9e4;
        case 0x53d9e8u: goto label_53d9e8;
        case 0x53d9ecu: goto label_53d9ec;
        case 0x53d9f0u: goto label_53d9f0;
        case 0x53d9f4u: goto label_53d9f4;
        case 0x53d9f8u: goto label_53d9f8;
        case 0x53d9fcu: goto label_53d9fc;
        case 0x53da00u: goto label_53da00;
        case 0x53da04u: goto label_53da04;
        case 0x53da08u: goto label_53da08;
        case 0x53da0cu: goto label_53da0c;
        case 0x53da10u: goto label_53da10;
        case 0x53da14u: goto label_53da14;
        case 0x53da18u: goto label_53da18;
        case 0x53da1cu: goto label_53da1c;
        case 0x53da20u: goto label_53da20;
        case 0x53da24u: goto label_53da24;
        case 0x53da28u: goto label_53da28;
        case 0x53da2cu: goto label_53da2c;
        case 0x53da30u: goto label_53da30;
        case 0x53da34u: goto label_53da34;
        case 0x53da38u: goto label_53da38;
        case 0x53da3cu: goto label_53da3c;
        case 0x53da40u: goto label_53da40;
        case 0x53da44u: goto label_53da44;
        case 0x53da48u: goto label_53da48;
        case 0x53da4cu: goto label_53da4c;
        case 0x53da50u: goto label_53da50;
        case 0x53da54u: goto label_53da54;
        case 0x53da58u: goto label_53da58;
        case 0x53da5cu: goto label_53da5c;
        case 0x53da60u: goto label_53da60;
        case 0x53da64u: goto label_53da64;
        case 0x53da68u: goto label_53da68;
        case 0x53da6cu: goto label_53da6c;
        case 0x53da70u: goto label_53da70;
        case 0x53da74u: goto label_53da74;
        case 0x53da78u: goto label_53da78;
        case 0x53da7cu: goto label_53da7c;
        case 0x53da80u: goto label_53da80;
        case 0x53da84u: goto label_53da84;
        case 0x53da88u: goto label_53da88;
        case 0x53da8cu: goto label_53da8c;
        case 0x53da90u: goto label_53da90;
        case 0x53da94u: goto label_53da94;
        case 0x53da98u: goto label_53da98;
        case 0x53da9cu: goto label_53da9c;
        case 0x53daa0u: goto label_53daa0;
        case 0x53daa4u: goto label_53daa4;
        case 0x53daa8u: goto label_53daa8;
        case 0x53daacu: goto label_53daac;
        case 0x53dab0u: goto label_53dab0;
        case 0x53dab4u: goto label_53dab4;
        case 0x53dab8u: goto label_53dab8;
        case 0x53dabcu: goto label_53dabc;
        case 0x53dac0u: goto label_53dac0;
        case 0x53dac4u: goto label_53dac4;
        case 0x53dac8u: goto label_53dac8;
        case 0x53daccu: goto label_53dacc;
        case 0x53dad0u: goto label_53dad0;
        case 0x53dad4u: goto label_53dad4;
        case 0x53dad8u: goto label_53dad8;
        case 0x53dadcu: goto label_53dadc;
        case 0x53dae0u: goto label_53dae0;
        case 0x53dae4u: goto label_53dae4;
        case 0x53dae8u: goto label_53dae8;
        case 0x53daecu: goto label_53daec;
        case 0x53daf0u: goto label_53daf0;
        case 0x53daf4u: goto label_53daf4;
        case 0x53daf8u: goto label_53daf8;
        case 0x53dafcu: goto label_53dafc;
        case 0x53db00u: goto label_53db00;
        case 0x53db04u: goto label_53db04;
        case 0x53db08u: goto label_53db08;
        case 0x53db0cu: goto label_53db0c;
        case 0x53db10u: goto label_53db10;
        case 0x53db14u: goto label_53db14;
        case 0x53db18u: goto label_53db18;
        case 0x53db1cu: goto label_53db1c;
        case 0x53db20u: goto label_53db20;
        case 0x53db24u: goto label_53db24;
        case 0x53db28u: goto label_53db28;
        case 0x53db2cu: goto label_53db2c;
        default: break;
    }

    ctx->pc = 0x53d930u;

label_53d930:
    // 0x53d930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x53d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_53d934:
    // 0x53d934: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53d934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53d938:
    // 0x53d938: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x53d938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_53d93c:
    // 0x53d93c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x53d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_53d940:
    // 0x53d940: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x53d940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_53d944:
    // 0x53d944: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53d944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_53d948:
    // 0x53d948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53d948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53d94c:
    // 0x53d94c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x53d94cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53d950:
    // 0x53d950: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53d950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53d954:
    // 0x53d954: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x53d954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_53d958:
    // 0x53d958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53d95c:
    // 0x53d95c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x53d95cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_53d960:
    // 0x53d960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53d960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53d964:
    // 0x53d964: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x53d964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_53d968:
    // 0x53d968: 0x8c553e28  lw          $s5, 0x3E28($v0)
    ctx->pc = 0x53d968u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_53d96c:
    // 0x53d96c: 0xac85006c  sw          $a1, 0x6C($a0)
    ctx->pc = 0x53d96cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
label_53d970:
    // 0x53d970: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x53d970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
label_53d974:
    // 0x53d974: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x53d974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
label_53d978:
    // 0x53d978: 0xac830070  sw          $v1, 0x70($a0)
    ctx->pc = 0x53d978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
label_53d97c:
    // 0x53d97c: 0xa080009f  sb          $zero, 0x9F($a0)
    ctx->pc = 0x53d97cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 159), (uint8_t)GPR_U32(ctx, 0));
label_53d980:
    // 0x53d980: 0xa080009e  sb          $zero, 0x9E($a0)
    ctx->pc = 0x53d980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 158), (uint8_t)GPR_U32(ctx, 0));
label_53d984:
    // 0x53d984: 0xa080009d  sb          $zero, 0x9D($a0)
    ctx->pc = 0x53d984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 157), (uint8_t)GPR_U32(ctx, 0));
label_53d988:
    // 0x53d988: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x53d988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
label_53d98c:
    // 0x53d98c: 0xac930078  sw          $s3, 0x78($a0)
    ctx->pc = 0x53d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 19));
label_53d990:
    // 0x53d990: 0xa08000a0  sb          $zero, 0xA0($a0)
    ctx->pc = 0x53d990u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 0));
label_53d994:
    // 0x53d994: 0xa080009c  sb          $zero, 0x9C($a0)
    ctx->pc = 0x53d994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 156), (uint8_t)GPR_U32(ctx, 0));
label_53d998:
    // 0x53d998: 0xac920094  sw          $s2, 0x94($a0)
    ctx->pc = 0x53d998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 18));
label_53d99c:
    // 0x53d99c: 0xac910098  sw          $s1, 0x98($a0)
    ctx->pc = 0x53d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 17));
label_53d9a0:
    // 0x53d9a0: 0x8c840090  lw          $a0, 0x90($a0)
    ctx->pc = 0x53d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_53d9a4:
    // 0x53d9a4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_53d9a8:
    if (ctx->pc == 0x53D9A8u) {
        ctx->pc = 0x53D9A8u;
            // 0x53d9a8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D9ACu;
        goto label_53d9ac;
    }
    ctx->pc = 0x53D9A4u;
    {
        const bool branch_taken_0x53d9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D9A4u;
            // 0x53d9a8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d9a4) {
            ctx->pc = 0x53D9BCu;
            goto label_53d9bc;
        }
    }
    ctx->pc = 0x53D9ACu;
label_53d9ac:
    // 0x53d9ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d9acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d9b0:
    // 0x53d9b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x53d9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_53d9b4:
    // 0x53d9b4: 0x320f809  jalr        $t9
label_53d9b8:
    if (ctx->pc == 0x53D9B8u) {
        ctx->pc = 0x53D9B8u;
            // 0x53d9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53D9BCu;
        goto label_53d9bc;
    }
    ctx->pc = 0x53D9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D9BCu);
        ctx->pc = 0x53D9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D9B4u;
            // 0x53d9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D9BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D9BCu; }
            if (ctx->pc != 0x53D9BCu) { return; }
        }
        }
    }
    ctx->pc = 0x53D9BCu;
label_53d9bc:
    // 0x53d9bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x53d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53d9c0:
    // 0x53d9c0: 0x5262001b  beql        $s3, $v0, . + 4 + (0x1B << 2)
label_53d9c4:
    if (ctx->pc == 0x53D9C4u) {
        ctx->pc = 0x53D9C4u;
            // 0x53d9c4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x53D9C8u;
        goto label_53d9c8;
    }
    ctx->pc = 0x53D9C0u;
    {
        const bool branch_taken_0x53d9c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x53d9c0) {
            ctx->pc = 0x53D9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D9C0u;
            // 0x53d9c4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53DA30u;
            goto label_53da30;
        }
    }
    ctx->pc = 0x53D9C8u;
label_53d9c8:
    // 0x53d9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53d9cc:
    // 0x53d9cc: 0x5262000e  beql        $s3, $v0, . + 4 + (0xE << 2)
label_53d9d0:
    if (ctx->pc == 0x53D9D0u) {
        ctx->pc = 0x53D9D0u;
            // 0x53d9d0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x53D9D4u;
        goto label_53d9d4;
    }
    ctx->pc = 0x53D9CCu;
    {
        const bool branch_taken_0x53d9cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x53d9cc) {
            ctx->pc = 0x53D9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D9CCu;
            // 0x53d9d0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53DA08u;
            goto label_53da08;
        }
    }
    ctx->pc = 0x53D9D4u;
label_53d9d4:
    // 0x53d9d4: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
label_53d9d8:
    if (ctx->pc == 0x53D9D8u) {
        ctx->pc = 0x53D9D8u;
            // 0x53d9d8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x53D9DCu;
        goto label_53d9dc;
    }
    ctx->pc = 0x53D9D4u;
    {
        const bool branch_taken_0x53d9d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d9d4) {
            ctx->pc = 0x53D9D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D9D4u;
            // 0x53d9d8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D9E4u;
            goto label_53d9e4;
        }
    }
    ctx->pc = 0x53D9DCu;
label_53d9dc:
    // 0x53d9dc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_53d9e0:
    if (ctx->pc == 0x53D9E0u) {
        ctx->pc = 0x53D9E0u;
            // 0x53d9e0: 0x8e840090  lw          $a0, 0x90($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
        ctx->pc = 0x53D9E4u;
        goto label_53d9e4;
    }
    ctx->pc = 0x53D9DCu;
    {
        const bool branch_taken_0x53d9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D9DCu;
            // 0x53d9e0: 0x8e840090  lw          $a0, 0x90($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d9dc) {
            ctx->pc = 0x53DA58u;
            goto label_53da58;
        }
    }
    ctx->pc = 0x53D9E4u;
label_53d9e4:
    // 0x53d9e4: 0xc040180  jal         func_100600
label_53d9e8:
    if (ctx->pc == 0x53D9E8u) {
        ctx->pc = 0x53D9ECu;
        goto label_53d9ec;
    }
    ctx->pc = 0x53D9E4u;
    SET_GPR_U32(ctx, 31, 0x53D9ECu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53D9ECu; }
        if (ctx->pc != 0x53D9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53D9ECu; }
        if (ctx->pc != 0x53D9ECu) { return; }
    }
    ctx->pc = 0x53D9ECu;
label_53d9ec:
    // 0x53d9ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_53d9f0:
    if (ctx->pc == 0x53D9F0u) {
        ctx->pc = 0x53D9F0u;
            // 0x53d9f0: 0xae820090  sw          $v0, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
        ctx->pc = 0x53D9F4u;
        goto label_53d9f4;
    }
    ctx->pc = 0x53D9ECu;
    {
        const bool branch_taken_0x53d9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d9ec) {
            ctx->pc = 0x53D9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D9ECu;
            // 0x53d9f0: 0xae820090  sw          $v0, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53DA00u;
            goto label_53da00;
        }
    }
    ctx->pc = 0x53D9F4u;
label_53d9f4:
    // 0x53d9f4: 0xc151c64  jal         func_547190
label_53d9f8:
    if (ctx->pc == 0x53D9F8u) {
        ctx->pc = 0x53D9F8u;
            // 0x53d9f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D9FCu;
        goto label_53d9fc;
    }
    ctx->pc = 0x53D9F4u;
    SET_GPR_U32(ctx, 31, 0x53D9FCu);
    ctx->pc = 0x53D9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53D9F4u;
            // 0x53d9f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x547190u;
    if (runtime->hasFunction(0x547190u)) {
        auto targetFn = runtime->lookupFunction(0x547190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53D9FCu; }
        if (ctx->pc != 0x53D9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00547190_0x547190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53D9FCu; }
        if (ctx->pc != 0x53D9FCu) { return; }
    }
    ctx->pc = 0x53D9FCu;
label_53d9fc:
    // 0x53d9fc: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x53d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
label_53da00:
    // 0x53da00: 0x10000014  b           . + 4 + (0x14 << 2)
label_53da04:
    if (ctx->pc == 0x53DA04u) {
        ctx->pc = 0x53DA04u;
            // 0x53da04: 0xa280009f  sb          $zero, 0x9F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 159), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x53DA08u;
        goto label_53da08;
    }
    ctx->pc = 0x53DA00u;
    {
        const bool branch_taken_0x53da00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53DA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DA00u;
            // 0x53da04: 0xa280009f  sb          $zero, 0x9F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 159), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53da00) {
            ctx->pc = 0x53DA54u;
            goto label_53da54;
        }
    }
    ctx->pc = 0x53DA08u;
label_53da08:
    // 0x53da08: 0xc040180  jal         func_100600
label_53da0c:
    if (ctx->pc == 0x53DA0Cu) {
        ctx->pc = 0x53DA10u;
        goto label_53da10;
    }
    ctx->pc = 0x53DA08u;
    SET_GPR_U32(ctx, 31, 0x53DA10u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DA10u; }
        if (ctx->pc != 0x53DA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DA10u; }
        if (ctx->pc != 0x53DA10u) { return; }
    }
    ctx->pc = 0x53DA10u;
label_53da10:
    // 0x53da10: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_53da14:
    if (ctx->pc == 0x53DA14u) {
        ctx->pc = 0x53DA14u;
            // 0x53da14: 0xae820090  sw          $v0, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
        ctx->pc = 0x53DA18u;
        goto label_53da18;
    }
    ctx->pc = 0x53DA10u;
    {
        const bool branch_taken_0x53da10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53da10) {
            ctx->pc = 0x53DA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53DA10u;
            // 0x53da14: 0xae820090  sw          $v0, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53DA24u;
            goto label_53da24;
        }
    }
    ctx->pc = 0x53DA18u;
label_53da18:
    // 0x53da18: 0xc151c44  jal         func_547110
label_53da1c:
    if (ctx->pc == 0x53DA1Cu) {
        ctx->pc = 0x53DA1Cu;
            // 0x53da1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53DA20u;
        goto label_53da20;
    }
    ctx->pc = 0x53DA18u;
    SET_GPR_U32(ctx, 31, 0x53DA20u);
    ctx->pc = 0x53DA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DA18u;
            // 0x53da1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x547110u;
    if (runtime->hasFunction(0x547110u)) {
        auto targetFn = runtime->lookupFunction(0x547110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DA20u; }
        if (ctx->pc != 0x53DA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00547110_0x547110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DA20u; }
        if (ctx->pc != 0x53DA20u) { return; }
    }
    ctx->pc = 0x53DA20u;
label_53da20:
    // 0x53da20: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x53da20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
label_53da24:
    // 0x53da24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53da28:
    // 0x53da28: 0x1000000a  b           . + 4 + (0xA << 2)
label_53da2c:
    if (ctx->pc == 0x53DA2Cu) {
        ctx->pc = 0x53DA2Cu;
            // 0x53da2c: 0xa282009f  sb          $v0, 0x9F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 159), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x53DA30u;
        goto label_53da30;
    }
    ctx->pc = 0x53DA28u;
    {
        const bool branch_taken_0x53da28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53DA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DA28u;
            // 0x53da2c: 0xa282009f  sb          $v0, 0x9F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 159), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53da28) {
            ctx->pc = 0x53DA54u;
            goto label_53da54;
        }
    }
    ctx->pc = 0x53DA30u;
label_53da30:
    // 0x53da30: 0xc040180  jal         func_100600
label_53da34:
    if (ctx->pc == 0x53DA34u) {
        ctx->pc = 0x53DA38u;
        goto label_53da38;
    }
    ctx->pc = 0x53DA30u;
    SET_GPR_U32(ctx, 31, 0x53DA38u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DA38u; }
        if (ctx->pc != 0x53DA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DA38u; }
        if (ctx->pc != 0x53DA38u) { return; }
    }
    ctx->pc = 0x53DA38u;
label_53da38:
    // 0x53da38: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_53da3c:
    if (ctx->pc == 0x53DA3Cu) {
        ctx->pc = 0x53DA3Cu;
            // 0x53da3c: 0xae820090  sw          $v0, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
        ctx->pc = 0x53DA40u;
        goto label_53da40;
    }
    ctx->pc = 0x53DA38u;
    {
        const bool branch_taken_0x53da38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53da38) {
            ctx->pc = 0x53DA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53DA38u;
            // 0x53da3c: 0xae820090  sw          $v0, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53DA4Cu;
            goto label_53da4c;
        }
    }
    ctx->pc = 0x53DA40u;
label_53da40:
    // 0x53da40: 0xc151c1c  jal         func_547070
label_53da44:
    if (ctx->pc == 0x53DA44u) {
        ctx->pc = 0x53DA44u;
            // 0x53da44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53DA48u;
        goto label_53da48;
    }
    ctx->pc = 0x53DA40u;
    SET_GPR_U32(ctx, 31, 0x53DA48u);
    ctx->pc = 0x53DA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DA40u;
            // 0x53da44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x547070u;
    if (runtime->hasFunction(0x547070u)) {
        auto targetFn = runtime->lookupFunction(0x547070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DA48u; }
        if (ctx->pc != 0x53DA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00547070_0x547070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DA48u; }
        if (ctx->pc != 0x53DA48u) { return; }
    }
    ctx->pc = 0x53DA48u;
label_53da48:
    // 0x53da48: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x53da48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
label_53da4c:
    // 0x53da4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53da50:
    // 0x53da50: 0xa282009f  sb          $v0, 0x9F($s4)
    ctx->pc = 0x53da50u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 159), (uint8_t)GPR_U32(ctx, 2));
label_53da54:
    // 0x53da54: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x53da54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
label_53da58:
    // 0x53da58: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x53da58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_53da5c:
    // 0x53da5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53da5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53da60:
    // 0x53da60: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x53da60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_53da64:
    // 0x53da64: 0x320f809  jalr        $t9
label_53da68:
    if (ctx->pc == 0x53DA68u) {
        ctx->pc = 0x53DA68u;
            // 0x53da68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53DA6Cu;
        goto label_53da6c;
    }
    ctx->pc = 0x53DA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53DA6Cu);
        ctx->pc = 0x53DA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DA64u;
            // 0x53da68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53DA6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53DA6Cu; }
            if (ctx->pc != 0x53DA6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53DA6Cu;
label_53da6c:
    // 0x53da6c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x53da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
label_53da70:
    // 0x53da70: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x53da70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_53da74:
    // 0x53da74: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x53da74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_53da78:
    // 0x53da78: 0xc04b156  jal         func_12C558
label_53da7c:
    if (ctx->pc == 0x53DA7Cu) {
        ctx->pc = 0x53DA7Cu;
            // 0x53da7c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x53DA80u;
        goto label_53da80;
    }
    ctx->pc = 0x53DA78u;
    SET_GPR_U32(ctx, 31, 0x53DA80u);
    ctx->pc = 0x53DA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DA78u;
            // 0x53da7c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DA80u; }
        if (ctx->pc != 0x53DA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DA80u; }
        if (ctx->pc != 0x53DA80u) { return; }
    }
    ctx->pc = 0x53DA80u;
label_53da80:
    // 0x53da80: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53da80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53da84:
    // 0x53da84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53da84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53da88:
    // 0x53da88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53da88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53da8c:
    // 0x53da8c: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x53da8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_53da90:
    // 0x53da90: 0x320f809  jalr        $t9
label_53da94:
    if (ctx->pc == 0x53DA94u) {
        ctx->pc = 0x53DA94u;
            // 0x53da94: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x53DA98u;
        goto label_53da98;
    }
    ctx->pc = 0x53DA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53DA98u);
        ctx->pc = 0x53DA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DA90u;
            // 0x53da94: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53DA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53DA98u; }
            if (ctx->pc != 0x53DA98u) { return; }
        }
        }
    }
    ctx->pc = 0x53DA98u;
label_53da98:
    // 0x53da98: 0x8e840080  lw          $a0, 0x80($s4)
    ctx->pc = 0x53da98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_53da9c:
    // 0x53da9c: 0xc159658  jal         func_565960
label_53daa0:
    if (ctx->pc == 0x53DAA0u) {
        ctx->pc = 0x53DAA0u;
            // 0x53daa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53DAA4u;
        goto label_53daa4;
    }
    ctx->pc = 0x53DA9Cu;
    SET_GPR_U32(ctx, 31, 0x53DAA4u);
    ctx->pc = 0x53DAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DA9Cu;
            // 0x53daa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565960u;
    if (runtime->hasFunction(0x565960u)) {
        auto targetFn = runtime->lookupFunction(0x565960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DAA4u; }
        if (ctx->pc != 0x53DAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565960_0x565960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DAA4u; }
        if (ctx->pc != 0x53DAA4u) { return; }
    }
    ctx->pc = 0x53DAA4u;
label_53daa4:
    // 0x53daa4: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x53daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
label_53daa8:
    // 0x53daa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x53daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_53daac:
    // 0x53daac: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x53daacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
label_53dab0:
    // 0x53dab0: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x53dab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
label_53dab4:
    // 0x53dab4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53dab8:
    // 0x53dab8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53dab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53dabc:
    // 0x53dabc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x53dabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_53dac0:
    // 0x53dac0: 0x320f809  jalr        $t9
label_53dac4:
    if (ctx->pc == 0x53DAC4u) {
        ctx->pc = 0x53DAC4u;
            // 0x53dac4: 0x8c550e68  lw          $s5, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->pc = 0x53DAC8u;
        goto label_53dac8;
    }
    ctx->pc = 0x53DAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53DAC8u);
        ctx->pc = 0x53DAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DAC0u;
            // 0x53dac4: 0x8c550e68  lw          $s5, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53DAC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53DAC8u; }
            if (ctx->pc != 0x53DAC8u) { return; }
        }
        }
    }
    ctx->pc = 0x53DAC8u;
label_53dac8:
    // 0x53dac8: 0xaea203cc  sw          $v0, 0x3CC($s5)
    ctx->pc = 0x53dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 972), GPR_U32(ctx, 2));
label_53dacc:
    // 0x53dacc: 0xaea203d0  sw          $v0, 0x3D0($s5)
    ctx->pc = 0x53daccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 976), GPR_U32(ctx, 2));
label_53dad0:
    // 0x53dad0: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_53dad4:
    if (ctx->pc == 0x53DAD4u) {
        ctx->pc = 0x53DAD4u;
            // 0x53dad4: 0xaea003d8  sw          $zero, 0x3D8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 984), GPR_U32(ctx, 0));
        ctx->pc = 0x53DAD8u;
        goto label_53dad8;
    }
    ctx->pc = 0x53DAD0u;
    {
        const bool branch_taken_0x53dad0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x53DAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DAD0u;
            // 0x53dad4: 0xaea003d8  sw          $zero, 0x3D8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53dad0) {
            ctx->pc = 0x53DAE4u;
            goto label_53dae4;
        }
    }
    ctx->pc = 0x53DAD8u;
label_53dad8:
    // 0x53dad8: 0xaea003d4  sw          $zero, 0x3D4($s5)
    ctx->pc = 0x53dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 980), GPR_U32(ctx, 0));
label_53dadc:
    // 0x53dadc: 0x10000006  b           . + 4 + (0x6 << 2)
label_53dae0:
    if (ctx->pc == 0x53DAE0u) {
        ctx->pc = 0x53DAE0u;
            // 0x53dae0: 0xaeb203dc  sw          $s2, 0x3DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 988), GPR_U32(ctx, 18));
        ctx->pc = 0x53DAE4u;
        goto label_53dae4;
    }
    ctx->pc = 0x53DADCu;
    {
        const bool branch_taken_0x53dadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53DAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DADCu;
            // 0x53dae0: 0xaeb203dc  sw          $s2, 0x3DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 988), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53dadc) {
            ctx->pc = 0x53DAF8u;
            goto label_53daf8;
        }
    }
    ctx->pc = 0x53DAE4u;
label_53dae4:
    // 0x53dae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53dae8:
    // 0x53dae8: 0x56620004  bnel        $s3, $v0, . + 4 + (0x4 << 2)
label_53daec:
    if (ctx->pc == 0x53DAECu) {
        ctx->pc = 0x53DAECu;
            // 0x53daec: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x53DAF0u;
        goto label_53daf0;
    }
    ctx->pc = 0x53DAE8u;
    {
        const bool branch_taken_0x53dae8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x53dae8) {
            ctx->pc = 0x53DAECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53DAE8u;
            // 0x53daec: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53DAFCu;
            goto label_53dafc;
        }
    }
    ctx->pc = 0x53DAF0u;
label_53daf0:
    // 0x53daf0: 0xaea203d4  sw          $v0, 0x3D4($s5)
    ctx->pc = 0x53daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 980), GPR_U32(ctx, 2));
label_53daf4:
    // 0x53daf4: 0xaeb103dc  sw          $s1, 0x3DC($s5)
    ctx->pc = 0x53daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 988), GPR_U32(ctx, 17));
label_53daf8:
    // 0x53daf8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53daf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53dafc:
    // 0x53dafc: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x53dafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_53db00:
    // 0x53db00: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53db00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53db04:
    // 0x53db04: 0x320f809  jalr        $t9
label_53db08:
    if (ctx->pc == 0x53DB08u) {
        ctx->pc = 0x53DB08u;
            // 0x53db08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53DB0Cu;
        goto label_53db0c;
    }
    ctx->pc = 0x53DB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53DB0Cu);
        ctx->pc = 0x53DB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DB04u;
            // 0x53db08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53DB0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53DB0Cu; }
            if (ctx->pc != 0x53DB0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53DB0Cu;
label_53db0c:
    // 0x53db0c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x53db0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_53db10:
    // 0x53db10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x53db10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_53db14:
    // 0x53db14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x53db14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53db18:
    // 0x53db18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53db18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53db1c:
    // 0x53db1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53db1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53db20:
    // 0x53db20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53db20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53db24:
    // 0x53db24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53db24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53db28:
    // 0x53db28: 0x3e00008  jr          $ra
label_53db2c:
    if (ctx->pc == 0x53DB2Cu) {
        ctx->pc = 0x53DB2Cu;
            // 0x53db2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x53DB30u;
        goto label_fallthrough_0x53db28;
    }
    ctx->pc = 0x53DB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53DB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DB28u;
            // 0x53db2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x53db28:
    ctx->pc = 0x53DB30u;
}
