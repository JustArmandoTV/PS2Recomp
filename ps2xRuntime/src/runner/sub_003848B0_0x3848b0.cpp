#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003848B0
// Address: 0x3848b0 - 0x384ac0
void sub_003848B0_0x3848b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003848B0_0x3848b0");
#endif

    switch (ctx->pc) {
        case 0x3848b0u: goto label_3848b0;
        case 0x3848b4u: goto label_3848b4;
        case 0x3848b8u: goto label_3848b8;
        case 0x3848bcu: goto label_3848bc;
        case 0x3848c0u: goto label_3848c0;
        case 0x3848c4u: goto label_3848c4;
        case 0x3848c8u: goto label_3848c8;
        case 0x3848ccu: goto label_3848cc;
        case 0x3848d0u: goto label_3848d0;
        case 0x3848d4u: goto label_3848d4;
        case 0x3848d8u: goto label_3848d8;
        case 0x3848dcu: goto label_3848dc;
        case 0x3848e0u: goto label_3848e0;
        case 0x3848e4u: goto label_3848e4;
        case 0x3848e8u: goto label_3848e8;
        case 0x3848ecu: goto label_3848ec;
        case 0x3848f0u: goto label_3848f0;
        case 0x3848f4u: goto label_3848f4;
        case 0x3848f8u: goto label_3848f8;
        case 0x3848fcu: goto label_3848fc;
        case 0x384900u: goto label_384900;
        case 0x384904u: goto label_384904;
        case 0x384908u: goto label_384908;
        case 0x38490cu: goto label_38490c;
        case 0x384910u: goto label_384910;
        case 0x384914u: goto label_384914;
        case 0x384918u: goto label_384918;
        case 0x38491cu: goto label_38491c;
        case 0x384920u: goto label_384920;
        case 0x384924u: goto label_384924;
        case 0x384928u: goto label_384928;
        case 0x38492cu: goto label_38492c;
        case 0x384930u: goto label_384930;
        case 0x384934u: goto label_384934;
        case 0x384938u: goto label_384938;
        case 0x38493cu: goto label_38493c;
        case 0x384940u: goto label_384940;
        case 0x384944u: goto label_384944;
        case 0x384948u: goto label_384948;
        case 0x38494cu: goto label_38494c;
        case 0x384950u: goto label_384950;
        case 0x384954u: goto label_384954;
        case 0x384958u: goto label_384958;
        case 0x38495cu: goto label_38495c;
        case 0x384960u: goto label_384960;
        case 0x384964u: goto label_384964;
        case 0x384968u: goto label_384968;
        case 0x38496cu: goto label_38496c;
        case 0x384970u: goto label_384970;
        case 0x384974u: goto label_384974;
        case 0x384978u: goto label_384978;
        case 0x38497cu: goto label_38497c;
        case 0x384980u: goto label_384980;
        case 0x384984u: goto label_384984;
        case 0x384988u: goto label_384988;
        case 0x38498cu: goto label_38498c;
        case 0x384990u: goto label_384990;
        case 0x384994u: goto label_384994;
        case 0x384998u: goto label_384998;
        case 0x38499cu: goto label_38499c;
        case 0x3849a0u: goto label_3849a0;
        case 0x3849a4u: goto label_3849a4;
        case 0x3849a8u: goto label_3849a8;
        case 0x3849acu: goto label_3849ac;
        case 0x3849b0u: goto label_3849b0;
        case 0x3849b4u: goto label_3849b4;
        case 0x3849b8u: goto label_3849b8;
        case 0x3849bcu: goto label_3849bc;
        case 0x3849c0u: goto label_3849c0;
        case 0x3849c4u: goto label_3849c4;
        case 0x3849c8u: goto label_3849c8;
        case 0x3849ccu: goto label_3849cc;
        case 0x3849d0u: goto label_3849d0;
        case 0x3849d4u: goto label_3849d4;
        case 0x3849d8u: goto label_3849d8;
        case 0x3849dcu: goto label_3849dc;
        case 0x3849e0u: goto label_3849e0;
        case 0x3849e4u: goto label_3849e4;
        case 0x3849e8u: goto label_3849e8;
        case 0x3849ecu: goto label_3849ec;
        case 0x3849f0u: goto label_3849f0;
        case 0x3849f4u: goto label_3849f4;
        case 0x3849f8u: goto label_3849f8;
        case 0x3849fcu: goto label_3849fc;
        case 0x384a00u: goto label_384a00;
        case 0x384a04u: goto label_384a04;
        case 0x384a08u: goto label_384a08;
        case 0x384a0cu: goto label_384a0c;
        case 0x384a10u: goto label_384a10;
        case 0x384a14u: goto label_384a14;
        case 0x384a18u: goto label_384a18;
        case 0x384a1cu: goto label_384a1c;
        case 0x384a20u: goto label_384a20;
        case 0x384a24u: goto label_384a24;
        case 0x384a28u: goto label_384a28;
        case 0x384a2cu: goto label_384a2c;
        case 0x384a30u: goto label_384a30;
        case 0x384a34u: goto label_384a34;
        case 0x384a38u: goto label_384a38;
        case 0x384a3cu: goto label_384a3c;
        case 0x384a40u: goto label_384a40;
        case 0x384a44u: goto label_384a44;
        case 0x384a48u: goto label_384a48;
        case 0x384a4cu: goto label_384a4c;
        case 0x384a50u: goto label_384a50;
        case 0x384a54u: goto label_384a54;
        case 0x384a58u: goto label_384a58;
        case 0x384a5cu: goto label_384a5c;
        case 0x384a60u: goto label_384a60;
        case 0x384a64u: goto label_384a64;
        case 0x384a68u: goto label_384a68;
        case 0x384a6cu: goto label_384a6c;
        case 0x384a70u: goto label_384a70;
        case 0x384a74u: goto label_384a74;
        case 0x384a78u: goto label_384a78;
        case 0x384a7cu: goto label_384a7c;
        case 0x384a80u: goto label_384a80;
        case 0x384a84u: goto label_384a84;
        case 0x384a88u: goto label_384a88;
        case 0x384a8cu: goto label_384a8c;
        case 0x384a90u: goto label_384a90;
        case 0x384a94u: goto label_384a94;
        case 0x384a98u: goto label_384a98;
        case 0x384a9cu: goto label_384a9c;
        case 0x384aa0u: goto label_384aa0;
        case 0x384aa4u: goto label_384aa4;
        case 0x384aa8u: goto label_384aa8;
        case 0x384aacu: goto label_384aac;
        case 0x384ab0u: goto label_384ab0;
        case 0x384ab4u: goto label_384ab4;
        case 0x384ab8u: goto label_384ab8;
        case 0x384abcu: goto label_384abc;
        default: break;
    }

    ctx->pc = 0x3848b0u;

label_3848b0:
    // 0x3848b0: 0x3e00008  jr          $ra
label_3848b4:
    if (ctx->pc == 0x3848B4u) {
        ctx->pc = 0x3848B4u;
            // 0x3848b4: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x3848B8u;
        goto label_3848b8;
    }
    ctx->pc = 0x3848B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3848B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3848B0u;
            // 0x3848b4: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3848B8u;
label_3848b8:
    // 0x3848b8: 0x0  nop
    ctx->pc = 0x3848b8u;
    // NOP
label_3848bc:
    // 0x3848bc: 0x0  nop
    ctx->pc = 0x3848bcu;
    // NOP
label_3848c0:
    // 0x3848c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3848c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3848c4:
    // 0x3848c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3848c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3848c8:
    // 0x3848c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3848c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3848cc:
    // 0x3848cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3848ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3848d0:
    // 0x3848d0: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3848d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3848d4:
    // 0x3848d4: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_3848d8:
    if (ctx->pc == 0x3848D8u) {
        ctx->pc = 0x3848D8u;
            // 0x3848d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3848DCu;
        goto label_3848dc;
    }
    ctx->pc = 0x3848D4u;
    {
        const bool branch_taken_0x3848d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3848D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3848D4u;
            // 0x3848d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3848d4) {
            ctx->pc = 0x3849C0u;
            goto label_3849c0;
        }
    }
    ctx->pc = 0x3848DCu;
label_3848dc:
    // 0x3848dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3848dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3848e0:
    // 0x3848e0: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x3848e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_3848e4:
    // 0x3848e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3848e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3848e8:
    // 0x3848e8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3848e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3848ec:
    // 0x3848ec: 0x320f809  jalr        $t9
label_3848f0:
    if (ctx->pc == 0x3848F0u) {
        ctx->pc = 0x3848F0u;
            // 0x3848f0: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x3848F4u;
        goto label_3848f4;
    }
    ctx->pc = 0x3848ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3848F4u);
        ctx->pc = 0x3848F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3848ECu;
            // 0x3848f0: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3848F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3848F4u; }
            if (ctx->pc != 0x3848F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3848F4u;
label_3848f4:
    // 0x3848f4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x3848f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3848f8:
    // 0x3848f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3848f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3848fc:
    // 0x3848fc: 0xc075128  jal         func_1D44A0
label_384900:
    if (ctx->pc == 0x384900u) {
        ctx->pc = 0x384900u;
            // 0x384900: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384904u;
        goto label_384904;
    }
    ctx->pc = 0x3848FCu;
    SET_GPR_U32(ctx, 31, 0x384904u);
    ctx->pc = 0x384900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3848FCu;
            // 0x384900: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384904u; }
        if (ctx->pc != 0x384904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384904u; }
        if (ctx->pc != 0x384904u) { return; }
    }
    ctx->pc = 0x384904u;
label_384904:
    // 0x384904: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x384904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_384908:
    // 0x384908: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x384908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38490c:
    // 0x38490c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x38490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_384910:
    // 0x384910: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x384910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_384914:
    // 0x384914: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x384914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_384918:
    // 0x384918: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_38491c:
    if (ctx->pc == 0x38491Cu) {
        ctx->pc = 0x38491Cu;
            // 0x38491c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x384920u;
        goto label_384920;
    }
    ctx->pc = 0x384918u;
    {
        const bool branch_taken_0x384918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x384918) {
            ctx->pc = 0x38491Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384918u;
            // 0x38491c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38492Cu;
            goto label_38492c;
        }
    }
    ctx->pc = 0x384920u;
label_384920:
    // 0x384920: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x384920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_384924:
    // 0x384924: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x384924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_384928:
    // 0x384928: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x384928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38492c:
    // 0x38492c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38492cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_384930:
    // 0x384930: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x384930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_384934:
    // 0x384934: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x384934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_384938:
    // 0x384938: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x384938u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_38493c:
    // 0x38493c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_384940:
    if (ctx->pc == 0x384940u) {
        ctx->pc = 0x384940u;
            // 0x384940: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x384944u;
        goto label_384944;
    }
    ctx->pc = 0x38493Cu;
    {
        const bool branch_taken_0x38493c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38493c) {
            ctx->pc = 0x384940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38493Cu;
            // 0x384940: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384950u;
            goto label_384950;
        }
    }
    ctx->pc = 0x384944u;
label_384944:
    // 0x384944: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x384944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_384948:
    // 0x384948: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x384948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_38494c:
    // 0x38494c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38494cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_384950:
    // 0x384950: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x384950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_384954:
    // 0x384954: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x384954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_384958:
    // 0x384958: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x384958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_38495c:
    // 0x38495c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x38495cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_384960:
    // 0x384960: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_384964:
    if (ctx->pc == 0x384964u) {
        ctx->pc = 0x384964u;
            // 0x384964: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x384968u;
        goto label_384968;
    }
    ctx->pc = 0x384960u;
    {
        const bool branch_taken_0x384960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x384960) {
            ctx->pc = 0x384964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384960u;
            // 0x384964: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384974u;
            goto label_384974;
        }
    }
    ctx->pc = 0x384968u;
label_384968:
    // 0x384968: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x384968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38496c:
    // 0x38496c: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x38496cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_384970:
    // 0x384970: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x384970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_384974:
    // 0x384974: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x384974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_384978:
    // 0x384978: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x384978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_38497c:
    // 0x38497c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x38497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_384980:
    // 0x384980: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x384980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_384984:
    // 0x384984: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x384984u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_384988:
    // 0x384988: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_38498c:
    if (ctx->pc == 0x38498Cu) {
        ctx->pc = 0x38498Cu;
            // 0x38498c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x384990u;
        goto label_384990;
    }
    ctx->pc = 0x384988u;
    {
        const bool branch_taken_0x384988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x384988) {
            ctx->pc = 0x38498Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384988u;
            // 0x38498c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38499Cu;
            goto label_38499c;
        }
    }
    ctx->pc = 0x384990u;
label_384990:
    // 0x384990: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x384990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_384994:
    // 0x384994: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x384994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_384998:
    // 0x384998: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x384998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38499c:
    // 0x38499c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38499cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3849a0:
    // 0x3849a0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3849a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3849a4:
    // 0x3849a4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3849a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3849a8:
    // 0x3849a8: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x3849a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3849ac:
    // 0x3849ac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3849acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3849b0:
    // 0x3849b0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3849b4:
    if (ctx->pc == 0x3849B4u) {
        ctx->pc = 0x3849B4u;
            // 0x3849b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3849B8u;
        goto label_3849b8;
    }
    ctx->pc = 0x3849B0u;
    {
        const bool branch_taken_0x3849b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3849b0) {
            ctx->pc = 0x3849B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3849B0u;
            // 0x3849b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3849C4u;
            goto label_3849c4;
        }
    }
    ctx->pc = 0x3849B8u;
label_3849b8:
    // 0x3849b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3849b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3849bc:
    // 0x3849bc: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3849bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3849c0:
    // 0x3849c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3849c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3849c4:
    // 0x3849c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3849c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3849c8:
    // 0x3849c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3849c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3849cc:
    // 0x3849cc: 0x3e00008  jr          $ra
label_3849d0:
    if (ctx->pc == 0x3849D0u) {
        ctx->pc = 0x3849D0u;
            // 0x3849d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3849D4u;
        goto label_3849d4;
    }
    ctx->pc = 0x3849CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3849D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3849CCu;
            // 0x3849d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3849D4u;
label_3849d4:
    // 0x3849d4: 0x0  nop
    ctx->pc = 0x3849d4u;
    // NOP
label_3849d8:
    // 0x3849d8: 0x0  nop
    ctx->pc = 0x3849d8u;
    // NOP
label_3849dc:
    // 0x3849dc: 0x0  nop
    ctx->pc = 0x3849dcu;
    // NOP
label_3849e0:
    // 0x3849e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3849e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3849e4:
    // 0x3849e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3849e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3849e8:
    // 0x3849e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3849e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3849ec:
    // 0x3849ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3849ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3849f0:
    // 0x3849f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3849f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3849f4:
    // 0x3849f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3849f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3849f8:
    // 0x3849f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3849f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3849fc:
    // 0x3849fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3849fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_384a00:
    // 0x384a00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x384a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_384a04:
    // 0x384a04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x384a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_384a08:
    // 0x384a08: 0x8c960070  lw          $s6, 0x70($a0)
    ctx->pc = 0x384a08u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_384a0c:
    // 0x384a0c: 0x12c00020  beqz        $s6, . + 4 + (0x20 << 2)
label_384a10:
    if (ctx->pc == 0x384A10u) {
        ctx->pc = 0x384A10u;
            // 0x384a10: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384A14u;
        goto label_384a14;
    }
    ctx->pc = 0x384A0Cu;
    {
        const bool branch_taken_0x384a0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x384A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384A0Cu;
            // 0x384a10: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a0c) {
            ctx->pc = 0x384A90u;
            goto label_384a90;
        }
    }
    ctx->pc = 0x384A14u;
label_384a14:
    // 0x384a14: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x384a14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384a18:
    // 0x384a18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x384a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384a1c:
    // 0x384a1c: 0x8ee20074  lw          $v0, 0x74($s7)
    ctx->pc = 0x384a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 116)));
label_384a20:
    // 0x384a20: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x384a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384a24:
    // 0x384a24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x384a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_384a28:
    // 0x384a28: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x384a28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_384a2c:
    // 0x384a2c: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x384a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_384a30:
    // 0x384a30: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x384a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_384a34:
    // 0x384a34: 0x8e300068  lw          $s0, 0x68($s1)
    ctx->pc = 0x384a34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_384a38:
    // 0x384a38: 0x8e330054  lw          $s3, 0x54($s1)
    ctx->pc = 0x384a38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_384a3c:
    // 0x384a3c: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x384a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_384a40:
    // 0x384a40: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x384a40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_384a44:
    // 0x384a44: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x384a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_384a48:
    // 0x384a48: 0x320f809  jalr        $t9
label_384a4c:
    if (ctx->pc == 0x384A4Cu) {
        ctx->pc = 0x384A4Cu;
            // 0x384a4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384A50u;
        goto label_384a50;
    }
    ctx->pc = 0x384A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x384A50u);
        ctx->pc = 0x384A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384A48u;
            // 0x384a4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x384A50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x384A50u; }
            if (ctx->pc != 0x384A50u) { return; }
        }
        }
    }
    ctx->pc = 0x384A50u;
label_384a50:
    // 0x384a50: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x384a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_384a54:
    // 0x384a54: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x384a54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_384a58:
    // 0x384a58: 0x290182b  sltu        $v1, $s4, $s0
    ctx->pc = 0x384a58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_384a5c:
    // 0x384a5c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x384a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_384a60:
    // 0x384a60: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x384a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
label_384a64:
    // 0x384a64: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x384a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_384a68:
    // 0x384a68: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x384a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_384a6c:
    // 0x384a6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x384a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_384a70:
    // 0x384a70: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x384a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_384a74:
    // 0x384a74: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_384a78:
    if (ctx->pc == 0x384A78u) {
        ctx->pc = 0x384A78u;
            // 0x384a78: 0x267303b0  addiu       $s3, $s3, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
        ctx->pc = 0x384A7Cu;
        goto label_384a7c;
    }
    ctx->pc = 0x384A74u;
    {
        const bool branch_taken_0x384a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x384A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384A74u;
            // 0x384a78: 0x267303b0  addiu       $s3, $s3, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a74) {
            ctx->pc = 0x384A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_384a40;
        }
    }
    ctx->pc = 0x384A7Cu;
label_384a7c:
    // 0x384a7c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x384a7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_384a80:
    // 0x384a80: 0x2b6182b  sltu        $v1, $s5, $s6
    ctx->pc = 0x384a80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_384a84:
    // 0x384a84: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_384a88:
    if (ctx->pc == 0x384A88u) {
        ctx->pc = 0x384A88u;
            // 0x384a88: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x384A8Cu;
        goto label_384a8c;
    }
    ctx->pc = 0x384A84u;
    {
        const bool branch_taken_0x384a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x384A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384A84u;
            // 0x384a88: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a84) {
            ctx->pc = 0x384A1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_384a1c;
        }
    }
    ctx->pc = 0x384A8Cu;
label_384a8c:
    // 0x384a8c: 0x0  nop
    ctx->pc = 0x384a8cu;
    // NOP
label_384a90:
    // 0x384a90: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x384a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_384a94:
    // 0x384a94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x384a94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_384a98:
    // 0x384a98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x384a98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_384a9c:
    // 0x384a9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x384a9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_384aa0:
    // 0x384aa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x384aa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_384aa4:
    // 0x384aa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x384aa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_384aa8:
    // 0x384aa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x384aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_384aac:
    // 0x384aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x384aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384ab0:
    // 0x384ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x384ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_384ab4:
    // 0x384ab4: 0x3e00008  jr          $ra
label_384ab8:
    if (ctx->pc == 0x384AB8u) {
        ctx->pc = 0x384AB8u;
            // 0x384ab8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x384ABCu;
        goto label_384abc;
    }
    ctx->pc = 0x384AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384AB4u;
            // 0x384ab8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384ABCu;
label_384abc:
    // 0x384abc: 0x0  nop
    ctx->pc = 0x384abcu;
    // NOP
}
