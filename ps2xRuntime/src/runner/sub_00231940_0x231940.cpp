#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231940
// Address: 0x231940 - 0x231b70
void sub_00231940_0x231940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231940_0x231940");
#endif

    switch (ctx->pc) {
        case 0x231940u: goto label_231940;
        case 0x231944u: goto label_231944;
        case 0x231948u: goto label_231948;
        case 0x23194cu: goto label_23194c;
        case 0x231950u: goto label_231950;
        case 0x231954u: goto label_231954;
        case 0x231958u: goto label_231958;
        case 0x23195cu: goto label_23195c;
        case 0x231960u: goto label_231960;
        case 0x231964u: goto label_231964;
        case 0x231968u: goto label_231968;
        case 0x23196cu: goto label_23196c;
        case 0x231970u: goto label_231970;
        case 0x231974u: goto label_231974;
        case 0x231978u: goto label_231978;
        case 0x23197cu: goto label_23197c;
        case 0x231980u: goto label_231980;
        case 0x231984u: goto label_231984;
        case 0x231988u: goto label_231988;
        case 0x23198cu: goto label_23198c;
        case 0x231990u: goto label_231990;
        case 0x231994u: goto label_231994;
        case 0x231998u: goto label_231998;
        case 0x23199cu: goto label_23199c;
        case 0x2319a0u: goto label_2319a0;
        case 0x2319a4u: goto label_2319a4;
        case 0x2319a8u: goto label_2319a8;
        case 0x2319acu: goto label_2319ac;
        case 0x2319b0u: goto label_2319b0;
        case 0x2319b4u: goto label_2319b4;
        case 0x2319b8u: goto label_2319b8;
        case 0x2319bcu: goto label_2319bc;
        case 0x2319c0u: goto label_2319c0;
        case 0x2319c4u: goto label_2319c4;
        case 0x2319c8u: goto label_2319c8;
        case 0x2319ccu: goto label_2319cc;
        case 0x2319d0u: goto label_2319d0;
        case 0x2319d4u: goto label_2319d4;
        case 0x2319d8u: goto label_2319d8;
        case 0x2319dcu: goto label_2319dc;
        case 0x2319e0u: goto label_2319e0;
        case 0x2319e4u: goto label_2319e4;
        case 0x2319e8u: goto label_2319e8;
        case 0x2319ecu: goto label_2319ec;
        case 0x2319f0u: goto label_2319f0;
        case 0x2319f4u: goto label_2319f4;
        case 0x2319f8u: goto label_2319f8;
        case 0x2319fcu: goto label_2319fc;
        case 0x231a00u: goto label_231a00;
        case 0x231a04u: goto label_231a04;
        case 0x231a08u: goto label_231a08;
        case 0x231a0cu: goto label_231a0c;
        case 0x231a10u: goto label_231a10;
        case 0x231a14u: goto label_231a14;
        case 0x231a18u: goto label_231a18;
        case 0x231a1cu: goto label_231a1c;
        case 0x231a20u: goto label_231a20;
        case 0x231a24u: goto label_231a24;
        case 0x231a28u: goto label_231a28;
        case 0x231a2cu: goto label_231a2c;
        case 0x231a30u: goto label_231a30;
        case 0x231a34u: goto label_231a34;
        case 0x231a38u: goto label_231a38;
        case 0x231a3cu: goto label_231a3c;
        case 0x231a40u: goto label_231a40;
        case 0x231a44u: goto label_231a44;
        case 0x231a48u: goto label_231a48;
        case 0x231a4cu: goto label_231a4c;
        case 0x231a50u: goto label_231a50;
        case 0x231a54u: goto label_231a54;
        case 0x231a58u: goto label_231a58;
        case 0x231a5cu: goto label_231a5c;
        case 0x231a60u: goto label_231a60;
        case 0x231a64u: goto label_231a64;
        case 0x231a68u: goto label_231a68;
        case 0x231a6cu: goto label_231a6c;
        case 0x231a70u: goto label_231a70;
        case 0x231a74u: goto label_231a74;
        case 0x231a78u: goto label_231a78;
        case 0x231a7cu: goto label_231a7c;
        case 0x231a80u: goto label_231a80;
        case 0x231a84u: goto label_231a84;
        case 0x231a88u: goto label_231a88;
        case 0x231a8cu: goto label_231a8c;
        case 0x231a90u: goto label_231a90;
        case 0x231a94u: goto label_231a94;
        case 0x231a98u: goto label_231a98;
        case 0x231a9cu: goto label_231a9c;
        case 0x231aa0u: goto label_231aa0;
        case 0x231aa4u: goto label_231aa4;
        case 0x231aa8u: goto label_231aa8;
        case 0x231aacu: goto label_231aac;
        case 0x231ab0u: goto label_231ab0;
        case 0x231ab4u: goto label_231ab4;
        case 0x231ab8u: goto label_231ab8;
        case 0x231abcu: goto label_231abc;
        case 0x231ac0u: goto label_231ac0;
        case 0x231ac4u: goto label_231ac4;
        case 0x231ac8u: goto label_231ac8;
        case 0x231accu: goto label_231acc;
        case 0x231ad0u: goto label_231ad0;
        case 0x231ad4u: goto label_231ad4;
        case 0x231ad8u: goto label_231ad8;
        case 0x231adcu: goto label_231adc;
        case 0x231ae0u: goto label_231ae0;
        case 0x231ae4u: goto label_231ae4;
        case 0x231ae8u: goto label_231ae8;
        case 0x231aecu: goto label_231aec;
        case 0x231af0u: goto label_231af0;
        case 0x231af4u: goto label_231af4;
        case 0x231af8u: goto label_231af8;
        case 0x231afcu: goto label_231afc;
        case 0x231b00u: goto label_231b00;
        case 0x231b04u: goto label_231b04;
        case 0x231b08u: goto label_231b08;
        case 0x231b0cu: goto label_231b0c;
        case 0x231b10u: goto label_231b10;
        case 0x231b14u: goto label_231b14;
        case 0x231b18u: goto label_231b18;
        case 0x231b1cu: goto label_231b1c;
        case 0x231b20u: goto label_231b20;
        case 0x231b24u: goto label_231b24;
        case 0x231b28u: goto label_231b28;
        case 0x231b2cu: goto label_231b2c;
        case 0x231b30u: goto label_231b30;
        case 0x231b34u: goto label_231b34;
        case 0x231b38u: goto label_231b38;
        case 0x231b3cu: goto label_231b3c;
        case 0x231b40u: goto label_231b40;
        case 0x231b44u: goto label_231b44;
        case 0x231b48u: goto label_231b48;
        case 0x231b4cu: goto label_231b4c;
        case 0x231b50u: goto label_231b50;
        case 0x231b54u: goto label_231b54;
        case 0x231b58u: goto label_231b58;
        case 0x231b5cu: goto label_231b5c;
        case 0x231b60u: goto label_231b60;
        case 0x231b64u: goto label_231b64;
        case 0x231b68u: goto label_231b68;
        case 0x231b6cu: goto label_231b6c;
        default: break;
    }

    ctx->pc = 0x231940u;

label_231940:
    // 0x231940: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x231940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_231944:
    // 0x231944: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x231944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_231948:
    // 0x231948: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x231948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_23194c:
    // 0x23194c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_231950:
    // 0x231950: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x231950u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231954:
    // 0x231954: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x231954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_231958:
    // 0x231958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x231958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23195c:
    // 0x23195c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_231960:
    // 0x231960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x231960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_231964:
    // 0x231964: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x231964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_231968:
    // 0x231968: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23196c:
    if (ctx->pc == 0x23196Cu) {
        ctx->pc = 0x23196Cu;
            // 0x23196c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231970u;
        goto label_231970;
    }
    ctx->pc = 0x231968u;
    {
        const bool branch_taken_0x231968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23196Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231968u;
            // 0x23196c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231968) {
            ctx->pc = 0x23198Cu;
            goto label_23198c;
        }
    }
    ctx->pc = 0x231970u;
label_231970:
    // 0x231970: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x231970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_231974:
    // 0x231974: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x231974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_231978:
    // 0x231978: 0xa3a20098  sb          $v0, 0x98($sp)
    ctx->pc = 0x231978u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 2));
label_23197c:
    // 0x23197c: 0xc08d1cc  jal         func_234730
label_231980:
    if (ctx->pc == 0x231980u) {
        ctx->pc = 0x231980u;
            // 0x231980: 0xafb4009c  sw          $s4, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 20));
        ctx->pc = 0x231984u;
        goto label_231984;
    }
    ctx->pc = 0x23197Cu;
    SET_GPR_U32(ctx, 31, 0x231984u);
    ctx->pc = 0x231980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23197Cu;
            // 0x231980: 0xafb4009c  sw          $s4, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231984u; }
        if (ctx->pc != 0x231984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231984u; }
        if (ctx->pc != 0x231984u) { return; }
    }
    ctx->pc = 0x231984u;
label_231984:
    // 0x231984: 0x10000071  b           . + 4 + (0x71 << 2)
label_231988:
    if (ctx->pc == 0x231988u) {
        ctx->pc = 0x231988u;
            // 0x231988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23198Cu;
        goto label_23198c;
    }
    ctx->pc = 0x231984u;
    {
        const bool branch_taken_0x231984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231984u;
            // 0x231988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231984) {
            ctx->pc = 0x231B4Cu;
            goto label_231b4c;
        }
    }
    ctx->pc = 0x23198Cu;
label_23198c:
    // 0x23198c: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x23198cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_231990:
    // 0x231990: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_231994:
    if (ctx->pc == 0x231994u) {
        ctx->pc = 0x231994u;
            // 0x231994: 0x8ea60084  lw          $a2, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->pc = 0x231998u;
        goto label_231998;
    }
    ctx->pc = 0x231990u;
    {
        const bool branch_taken_0x231990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231990) {
            ctx->pc = 0x231994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231990u;
            // 0x231994: 0x8ea60084  lw          $a2, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2319A8u;
            goto label_2319a8;
        }
    }
    ctx->pc = 0x231998u;
label_231998:
    // 0x231998: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x231998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_23199c:
    // 0x23199c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2319a0:
    // 0x2319a0: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x2319a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
label_2319a4:
    // 0x2319a4: 0x8ea60084  lw          $a2, 0x84($s5)
    ctx->pc = 0x2319a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_2319a8:
    // 0x2319a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2319a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2319ac:
    // 0x2319ac: 0x27a3007c  addiu       $v1, $sp, 0x7C
    ctx->pc = 0x2319acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_2319b0:
    // 0x2319b0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2319b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_2319b4:
    // 0x2319b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2319b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2319b8:
    // 0x2319b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2319b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2319bc:
    // 0x2319bc: 0xaea60084  sw          $a2, 0x84($s5)
    ctx->pc = 0x2319bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 6));
label_2319c0:
    // 0x2319c0: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x2319c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_2319c4:
    // 0x2319c4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2319c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_2319c8:
    // 0x2319c8: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2319c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_2319cc:
    // 0x2319cc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2319ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2319d0:
    // 0x2319d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2319d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2319d4:
    // 0x2319d4: 0x320f809  jalr        $t9
label_2319d8:
    if (ctx->pc == 0x2319D8u) {
        ctx->pc = 0x2319D8u;
            // 0x2319d8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2319DCu;
        goto label_2319dc;
    }
    ctx->pc = 0x2319D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2319DCu);
        ctx->pc = 0x2319D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2319D4u;
            // 0x2319d8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2319DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2319DCu; }
            if (ctx->pc != 0x2319DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2319DCu;
label_2319dc:
    // 0x2319dc: 0xae950008  sw          $s5, 0x8($s4)
    ctx->pc = 0x2319dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 21));
label_2319e0:
    // 0x2319e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2319e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2319e4:
    // 0x2319e4: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x2319e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2319e8:
    // 0x2319e8: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
label_2319ec:
    if (ctx->pc == 0x2319ECu) {
        ctx->pc = 0x2319ECu;
            // 0x2319ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2319F0u;
        goto label_2319f0;
    }
    ctx->pc = 0x2319E8u;
    {
        const bool branch_taken_0x2319e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2319ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2319E8u;
            // 0x2319ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319e8) {
            ctx->pc = 0x231AB8u;
            goto label_231ab8;
        }
    }
    ctx->pc = 0x2319F0u;
label_2319f0:
    // 0x2319f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2319f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2319f4:
    // 0x2319f4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2319f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2319f8:
    // 0x2319f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2319f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2319fc:
    // 0x2319fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2319fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_231a00:
    // 0x231a00: 0x944301ec  lhu         $v1, 0x1EC($v0)
    ctx->pc = 0x231a00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 492)));
label_231a04:
    // 0x231a04: 0x245001e8  addiu       $s0, $v0, 0x1E8
    ctx->pc = 0x231a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 488));
label_231a08:
    // 0x231a08: 0x944201ee  lhu         $v0, 0x1EE($v0)
    ctx->pc = 0x231a08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 494)));
label_231a0c:
    // 0x231a0c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x231a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_231a10:
    // 0x231a10: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_231a14:
    if (ctx->pc == 0x231A14u) {
        ctx->pc = 0x231A18u;
        goto label_231a18;
    }
    ctx->pc = 0x231A10u;
    {
        const bool branch_taken_0x231a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x231a10) {
            ctx->pc = 0x231A28u;
            goto label_231a28;
        }
    }
    ctx->pc = 0x231A18u;
label_231a18:
    // 0x231a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231a1c:
    // 0x231a1c: 0xc0a7668  jal         func_29D9A0
label_231a20:
    if (ctx->pc == 0x231A20u) {
        ctx->pc = 0x231A20u;
            // 0x231a20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x231A24u;
        goto label_231a24;
    }
    ctx->pc = 0x231A1Cu;
    SET_GPR_U32(ctx, 31, 0x231A24u);
    ctx->pc = 0x231A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231A1Cu;
            // 0x231a20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D9A0u;
    if (runtime->hasFunction(0x29D9A0u)) {
        auto targetFn = runtime->lookupFunction(0x29D9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A24u; }
        if (ctx->pc != 0x231A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D9A0_0x29d9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A24u; }
        if (ctx->pc != 0x231A24u) { return; }
    }
    ctx->pc = 0x231A24u;
label_231a24:
    // 0x231a24: 0x0  nop
    ctx->pc = 0x231a24u;
    // NOP
label_231a28:
    // 0x231a28: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x231a28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_231a2c:
    // 0x231a2c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x231a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_231a30:
    // 0x231a30: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x231a30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_231a34:
    // 0x231a34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_231a38:
    // 0x231a38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x231a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_231a3c:
    // 0x231a3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_231a40:
    // 0x231a40: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x231a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_231a44:
    // 0x231a44: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x231a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_231a48:
    // 0x231a48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x231a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_231a4c:
    // 0x231a4c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x231a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_231a50:
    // 0x231a50: 0x8cc40094  lw          $a0, 0x94($a2)
    ctx->pc = 0x231a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
label_231a54:
    // 0x231a54: 0x94820020  lhu         $v0, 0x20($a0)
    ctx->pc = 0x231a54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
label_231a58:
    // 0x231a58: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x231a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
label_231a5c:
    // 0x231a5c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x231a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_231a60:
    // 0x231a60: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_231a64:
    if (ctx->pc == 0x231A64u) {
        ctx->pc = 0x231A68u;
        goto label_231a68;
    }
    ctx->pc = 0x231A60u;
    {
        const bool branch_taken_0x231a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231a60) {
            ctx->pc = 0x231AA0u;
            goto label_231aa0;
        }
    }
    ctx->pc = 0x231A68u;
label_231a68:
    // 0x231a68: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_231a6c:
    if (ctx->pc == 0x231A6Cu) {
        ctx->pc = 0x231A70u;
        goto label_231a70;
    }
    ctx->pc = 0x231A68u;
    {
        const bool branch_taken_0x231a68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x231a68) {
            ctx->pc = 0x231A88u;
            goto label_231a88;
        }
    }
    ctx->pc = 0x231A70u;
label_231a70:
    // 0x231a70: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x231a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_231a74:
    // 0x231a74: 0xc08b788  jal         func_22DE20
label_231a78:
    if (ctx->pc == 0x231A78u) {
        ctx->pc = 0x231A78u;
            // 0x231a78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231A7Cu;
        goto label_231a7c;
    }
    ctx->pc = 0x231A74u;
    SET_GPR_U32(ctx, 31, 0x231A7Cu);
    ctx->pc = 0x231A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231A74u;
            // 0x231a78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DE20u;
    if (runtime->hasFunction(0x22DE20u)) {
        auto targetFn = runtime->lookupFunction(0x22DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A7Cu; }
        if (ctx->pc != 0x231A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DE20_0x22de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A7Cu; }
        if (ctx->pc != 0x231A7Cu) { return; }
    }
    ctx->pc = 0x231A7Cu;
label_231a7c:
    // 0x231a7c: 0x10000008  b           . + 4 + (0x8 << 2)
label_231a80:
    if (ctx->pc == 0x231A80u) {
        ctx->pc = 0x231A84u;
        goto label_231a84;
    }
    ctx->pc = 0x231A7Cu;
    {
        const bool branch_taken_0x231a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231a7c) {
            ctx->pc = 0x231AA0u;
            goto label_231aa0;
        }
    }
    ctx->pc = 0x231A84u;
label_231a84:
    // 0x231a84: 0x0  nop
    ctx->pc = 0x231a84u;
    // NOP
label_231a88:
    // 0x231a88: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x231a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_231a8c:
    // 0x231a8c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_231a90:
    if (ctx->pc == 0x231A90u) {
        ctx->pc = 0x231A94u;
        goto label_231a94;
    }
    ctx->pc = 0x231A8Cu;
    {
        const bool branch_taken_0x231a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x231a8c) {
            ctx->pc = 0x231AA0u;
            goto label_231aa0;
        }
    }
    ctx->pc = 0x231A94u;
label_231a94:
    // 0x231a94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x231a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_231a98:
    // 0x231a98: 0xc090168  jal         func_2405A0
label_231a9c:
    if (ctx->pc == 0x231A9Cu) {
        ctx->pc = 0x231A9Cu;
            // 0x231a9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231AA0u;
        goto label_231aa0;
    }
    ctx->pc = 0x231A98u;
    SET_GPR_U32(ctx, 31, 0x231AA0u);
    ctx->pc = 0x231A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231A98u;
            // 0x231a9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2405A0u;
    if (runtime->hasFunction(0x2405A0u)) {
        auto targetFn = runtime->lookupFunction(0x2405A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231AA0u; }
        if (ctx->pc != 0x231AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002405A0_0x2405a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231AA0u; }
        if (ctx->pc != 0x231AA0u) { return; }
    }
    ctx->pc = 0x231AA0u;
label_231aa0:
    // 0x231aa0: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x231aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_231aa4:
    // 0x231aa4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x231aa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_231aa8:
    // 0x231aa8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x231aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_231aac:
    // 0x231aac: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_231ab0:
    if (ctx->pc == 0x231AB0u) {
        ctx->pc = 0x231AB0u;
            // 0x231ab0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x231AB4u;
        goto label_231ab4;
    }
    ctx->pc = 0x231AACu;
    {
        const bool branch_taken_0x231aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231AACu;
            // 0x231ab0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231aac) {
            ctx->pc = 0x2319F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2319f4;
        }
    }
    ctx->pc = 0x231AB4u;
label_231ab4:
    // 0x231ab4: 0x0  nop
    ctx->pc = 0x231ab4u;
    // NOP
label_231ab8:
    // 0x231ab8: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
label_231abc:
    if (ctx->pc == 0x231ABCu) {
        ctx->pc = 0x231ABCu;
            // 0x231abc: 0x8ea20084  lw          $v0, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->pc = 0x231AC0u;
        goto label_231ac0;
    }
    ctx->pc = 0x231AB8u;
    {
        const bool branch_taken_0x231ab8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x231ab8) {
            ctx->pc = 0x231ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231AB8u;
            // 0x231abc: 0x8ea20084  lw          $v0, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231AD8u;
            goto label_231ad8;
        }
    }
    ctx->pc = 0x231AC0u;
label_231ac0:
    // 0x231ac0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x231ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_231ac4:
    // 0x231ac4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_231ac8:
    // 0x231ac8: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x231ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_231acc:
    // 0x231acc: 0xc08b788  jal         func_22DE20
label_231ad0:
    if (ctx->pc == 0x231AD0u) {
        ctx->pc = 0x231AD0u;
            // 0x231ad0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231AD4u;
        goto label_231ad4;
    }
    ctx->pc = 0x231ACCu;
    SET_GPR_U32(ctx, 31, 0x231AD4u);
    ctx->pc = 0x231AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231ACCu;
            // 0x231ad0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DE20u;
    if (runtime->hasFunction(0x22DE20u)) {
        auto targetFn = runtime->lookupFunction(0x22DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231AD4u; }
        if (ctx->pc != 0x231AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DE20_0x22de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231AD4u; }
        if (ctx->pc != 0x231AD4u) { return; }
    }
    ctx->pc = 0x231AD4u;
label_231ad4:
    // 0x231ad4: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x231ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_231ad8:
    // 0x231ad8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x231ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_231adc:
    // 0x231adc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_231ae0:
    if (ctx->pc == 0x231AE0u) {
        ctx->pc = 0x231AE0u;
            // 0x231ae0: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x231AE4u;
        goto label_231ae4;
    }
    ctx->pc = 0x231ADCu;
    {
        const bool branch_taken_0x231adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231ADCu;
            // 0x231ae0: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231adc) {
            ctx->pc = 0x231B04u;
            goto label_231b04;
        }
    }
    ctx->pc = 0x231AE4u;
label_231ae4:
    // 0x231ae4: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x231ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_231ae8:
    // 0x231ae8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_231aec:
    if (ctx->pc == 0x231AECu) {
        ctx->pc = 0x231AECu;
            // 0x231aec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231AF0u;
        goto label_231af0;
    }
    ctx->pc = 0x231AE8u;
    {
        const bool branch_taken_0x231ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231ae8) {
            ctx->pc = 0x231AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231AE8u;
            // 0x231aec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231B08u;
            goto label_231b08;
        }
    }
    ctx->pc = 0x231AF0u;
label_231af0:
    // 0x231af0: 0x82a2008c  lb          $v0, 0x8C($s5)
    ctx->pc = 0x231af0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 140)));
label_231af4:
    // 0x231af4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_231af8:
    if (ctx->pc == 0x231AF8u) {
        ctx->pc = 0x231AFCu;
        goto label_231afc;
    }
    ctx->pc = 0x231AF4u;
    {
        const bool branch_taken_0x231af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231af4) {
            ctx->pc = 0x231B04u;
            goto label_231b04;
        }
    }
    ctx->pc = 0x231AFCu;
label_231afc:
    // 0x231afc: 0xc08d1c4  jal         func_234710
label_231b00:
    if (ctx->pc == 0x231B00u) {
        ctx->pc = 0x231B00u;
            // 0x231b00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231B04u;
        goto label_231b04;
    }
    ctx->pc = 0x231AFCu;
    SET_GPR_U32(ctx, 31, 0x231B04u);
    ctx->pc = 0x231B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231AFCu;
            // 0x231b00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B04u; }
        if (ctx->pc != 0x231B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B04u; }
        if (ctx->pc != 0x231B04u) { return; }
    }
    ctx->pc = 0x231B04u;
label_231b04:
    // 0x231b04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x231b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_231b08:
    // 0x231b08: 0xc08e38c  jal         func_238E30
label_231b0c:
    if (ctx->pc == 0x231B0Cu) {
        ctx->pc = 0x231B0Cu;
            // 0x231b0c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231B10u;
        goto label_231b10;
    }
    ctx->pc = 0x231B08u;
    SET_GPR_U32(ctx, 31, 0x231B10u);
    ctx->pc = 0x231B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231B08u;
            // 0x231b0c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238E30u;
    if (runtime->hasFunction(0x238E30u)) {
        auto targetFn = runtime->lookupFunction(0x238E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B10u; }
        if (ctx->pc != 0x231B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238E30_0x238e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B10u; }
        if (ctx->pc != 0x231B10u) { return; }
    }
    ctx->pc = 0x231B10u;
label_231b10:
    // 0x231b10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x231b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_231b14:
    // 0x231b14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x231b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_231b18:
    // 0x231b18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x231b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_231b1c:
    // 0x231b1c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_231b20:
    if (ctx->pc == 0x231B20u) {
        ctx->pc = 0x231B20u;
            // 0x231b20: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231B24u;
        goto label_231b24;
    }
    ctx->pc = 0x231B1Cu;
    {
        const bool branch_taken_0x231b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231b1c) {
            ctx->pc = 0x231B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231B1Cu;
            // 0x231b20: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231B4Cu;
            goto label_231b4c;
        }
    }
    ctx->pc = 0x231B24u;
label_231b24:
    // 0x231b24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x231b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_231b28:
    // 0x231b28: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x231b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_231b2c:
    // 0x231b2c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x231b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_231b30:
    // 0x231b30: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x231b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_231b34:
    // 0x231b34: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x231b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_231b38:
    // 0x231b38: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x231b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_231b3c:
    // 0x231b3c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x231b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_231b40:
    // 0x231b40: 0xc0a7ab4  jal         func_29EAD0
label_231b44:
    if (ctx->pc == 0x231B44u) {
        ctx->pc = 0x231B44u;
            // 0x231b44: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x231B48u;
        goto label_231b48;
    }
    ctx->pc = 0x231B40u;
    SET_GPR_U32(ctx, 31, 0x231B48u);
    ctx->pc = 0x231B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231B40u;
            // 0x231b44: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B48u; }
        if (ctx->pc != 0x231B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B48u; }
        if (ctx->pc != 0x231B48u) { return; }
    }
    ctx->pc = 0x231B48u;
label_231b48:
    // 0x231b48: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x231b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231b4c:
    // 0x231b4c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x231b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_231b50:
    // 0x231b50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x231b50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_231b54:
    // 0x231b54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x231b54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_231b58:
    // 0x231b58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x231b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_231b5c:
    // 0x231b5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x231b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_231b60:
    // 0x231b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x231b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_231b64:
    // 0x231b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x231b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_231b68:
    // 0x231b68: 0x3e00008  jr          $ra
label_231b6c:
    if (ctx->pc == 0x231B6Cu) {
        ctx->pc = 0x231B6Cu;
            // 0x231b6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x231B70u;
        goto label_fallthrough_0x231b68;
    }
    ctx->pc = 0x231B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B68u;
            // 0x231b6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x231b68:
    ctx->pc = 0x231B70u;
}
