#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005519A0
// Address: 0x5519a0 - 0x551cf0
void sub_005519A0_0x5519a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005519A0_0x5519a0");
#endif

    switch (ctx->pc) {
        case 0x5519a0u: goto label_5519a0;
        case 0x5519a4u: goto label_5519a4;
        case 0x5519a8u: goto label_5519a8;
        case 0x5519acu: goto label_5519ac;
        case 0x5519b0u: goto label_5519b0;
        case 0x5519b4u: goto label_5519b4;
        case 0x5519b8u: goto label_5519b8;
        case 0x5519bcu: goto label_5519bc;
        case 0x5519c0u: goto label_5519c0;
        case 0x5519c4u: goto label_5519c4;
        case 0x5519c8u: goto label_5519c8;
        case 0x5519ccu: goto label_5519cc;
        case 0x5519d0u: goto label_5519d0;
        case 0x5519d4u: goto label_5519d4;
        case 0x5519d8u: goto label_5519d8;
        case 0x5519dcu: goto label_5519dc;
        case 0x5519e0u: goto label_5519e0;
        case 0x5519e4u: goto label_5519e4;
        case 0x5519e8u: goto label_5519e8;
        case 0x5519ecu: goto label_5519ec;
        case 0x5519f0u: goto label_5519f0;
        case 0x5519f4u: goto label_5519f4;
        case 0x5519f8u: goto label_5519f8;
        case 0x5519fcu: goto label_5519fc;
        case 0x551a00u: goto label_551a00;
        case 0x551a04u: goto label_551a04;
        case 0x551a08u: goto label_551a08;
        case 0x551a0cu: goto label_551a0c;
        case 0x551a10u: goto label_551a10;
        case 0x551a14u: goto label_551a14;
        case 0x551a18u: goto label_551a18;
        case 0x551a1cu: goto label_551a1c;
        case 0x551a20u: goto label_551a20;
        case 0x551a24u: goto label_551a24;
        case 0x551a28u: goto label_551a28;
        case 0x551a2cu: goto label_551a2c;
        case 0x551a30u: goto label_551a30;
        case 0x551a34u: goto label_551a34;
        case 0x551a38u: goto label_551a38;
        case 0x551a3cu: goto label_551a3c;
        case 0x551a40u: goto label_551a40;
        case 0x551a44u: goto label_551a44;
        case 0x551a48u: goto label_551a48;
        case 0x551a4cu: goto label_551a4c;
        case 0x551a50u: goto label_551a50;
        case 0x551a54u: goto label_551a54;
        case 0x551a58u: goto label_551a58;
        case 0x551a5cu: goto label_551a5c;
        case 0x551a60u: goto label_551a60;
        case 0x551a64u: goto label_551a64;
        case 0x551a68u: goto label_551a68;
        case 0x551a6cu: goto label_551a6c;
        case 0x551a70u: goto label_551a70;
        case 0x551a74u: goto label_551a74;
        case 0x551a78u: goto label_551a78;
        case 0x551a7cu: goto label_551a7c;
        case 0x551a80u: goto label_551a80;
        case 0x551a84u: goto label_551a84;
        case 0x551a88u: goto label_551a88;
        case 0x551a8cu: goto label_551a8c;
        case 0x551a90u: goto label_551a90;
        case 0x551a94u: goto label_551a94;
        case 0x551a98u: goto label_551a98;
        case 0x551a9cu: goto label_551a9c;
        case 0x551aa0u: goto label_551aa0;
        case 0x551aa4u: goto label_551aa4;
        case 0x551aa8u: goto label_551aa8;
        case 0x551aacu: goto label_551aac;
        case 0x551ab0u: goto label_551ab0;
        case 0x551ab4u: goto label_551ab4;
        case 0x551ab8u: goto label_551ab8;
        case 0x551abcu: goto label_551abc;
        case 0x551ac0u: goto label_551ac0;
        case 0x551ac4u: goto label_551ac4;
        case 0x551ac8u: goto label_551ac8;
        case 0x551accu: goto label_551acc;
        case 0x551ad0u: goto label_551ad0;
        case 0x551ad4u: goto label_551ad4;
        case 0x551ad8u: goto label_551ad8;
        case 0x551adcu: goto label_551adc;
        case 0x551ae0u: goto label_551ae0;
        case 0x551ae4u: goto label_551ae4;
        case 0x551ae8u: goto label_551ae8;
        case 0x551aecu: goto label_551aec;
        case 0x551af0u: goto label_551af0;
        case 0x551af4u: goto label_551af4;
        case 0x551af8u: goto label_551af8;
        case 0x551afcu: goto label_551afc;
        case 0x551b00u: goto label_551b00;
        case 0x551b04u: goto label_551b04;
        case 0x551b08u: goto label_551b08;
        case 0x551b0cu: goto label_551b0c;
        case 0x551b10u: goto label_551b10;
        case 0x551b14u: goto label_551b14;
        case 0x551b18u: goto label_551b18;
        case 0x551b1cu: goto label_551b1c;
        case 0x551b20u: goto label_551b20;
        case 0x551b24u: goto label_551b24;
        case 0x551b28u: goto label_551b28;
        case 0x551b2cu: goto label_551b2c;
        case 0x551b30u: goto label_551b30;
        case 0x551b34u: goto label_551b34;
        case 0x551b38u: goto label_551b38;
        case 0x551b3cu: goto label_551b3c;
        case 0x551b40u: goto label_551b40;
        case 0x551b44u: goto label_551b44;
        case 0x551b48u: goto label_551b48;
        case 0x551b4cu: goto label_551b4c;
        case 0x551b50u: goto label_551b50;
        case 0x551b54u: goto label_551b54;
        case 0x551b58u: goto label_551b58;
        case 0x551b5cu: goto label_551b5c;
        case 0x551b60u: goto label_551b60;
        case 0x551b64u: goto label_551b64;
        case 0x551b68u: goto label_551b68;
        case 0x551b6cu: goto label_551b6c;
        case 0x551b70u: goto label_551b70;
        case 0x551b74u: goto label_551b74;
        case 0x551b78u: goto label_551b78;
        case 0x551b7cu: goto label_551b7c;
        case 0x551b80u: goto label_551b80;
        case 0x551b84u: goto label_551b84;
        case 0x551b88u: goto label_551b88;
        case 0x551b8cu: goto label_551b8c;
        case 0x551b90u: goto label_551b90;
        case 0x551b94u: goto label_551b94;
        case 0x551b98u: goto label_551b98;
        case 0x551b9cu: goto label_551b9c;
        case 0x551ba0u: goto label_551ba0;
        case 0x551ba4u: goto label_551ba4;
        case 0x551ba8u: goto label_551ba8;
        case 0x551bacu: goto label_551bac;
        case 0x551bb0u: goto label_551bb0;
        case 0x551bb4u: goto label_551bb4;
        case 0x551bb8u: goto label_551bb8;
        case 0x551bbcu: goto label_551bbc;
        case 0x551bc0u: goto label_551bc0;
        case 0x551bc4u: goto label_551bc4;
        case 0x551bc8u: goto label_551bc8;
        case 0x551bccu: goto label_551bcc;
        case 0x551bd0u: goto label_551bd0;
        case 0x551bd4u: goto label_551bd4;
        case 0x551bd8u: goto label_551bd8;
        case 0x551bdcu: goto label_551bdc;
        case 0x551be0u: goto label_551be0;
        case 0x551be4u: goto label_551be4;
        case 0x551be8u: goto label_551be8;
        case 0x551becu: goto label_551bec;
        case 0x551bf0u: goto label_551bf0;
        case 0x551bf4u: goto label_551bf4;
        case 0x551bf8u: goto label_551bf8;
        case 0x551bfcu: goto label_551bfc;
        case 0x551c00u: goto label_551c00;
        case 0x551c04u: goto label_551c04;
        case 0x551c08u: goto label_551c08;
        case 0x551c0cu: goto label_551c0c;
        case 0x551c10u: goto label_551c10;
        case 0x551c14u: goto label_551c14;
        case 0x551c18u: goto label_551c18;
        case 0x551c1cu: goto label_551c1c;
        case 0x551c20u: goto label_551c20;
        case 0x551c24u: goto label_551c24;
        case 0x551c28u: goto label_551c28;
        case 0x551c2cu: goto label_551c2c;
        case 0x551c30u: goto label_551c30;
        case 0x551c34u: goto label_551c34;
        case 0x551c38u: goto label_551c38;
        case 0x551c3cu: goto label_551c3c;
        case 0x551c40u: goto label_551c40;
        case 0x551c44u: goto label_551c44;
        case 0x551c48u: goto label_551c48;
        case 0x551c4cu: goto label_551c4c;
        case 0x551c50u: goto label_551c50;
        case 0x551c54u: goto label_551c54;
        case 0x551c58u: goto label_551c58;
        case 0x551c5cu: goto label_551c5c;
        case 0x551c60u: goto label_551c60;
        case 0x551c64u: goto label_551c64;
        case 0x551c68u: goto label_551c68;
        case 0x551c6cu: goto label_551c6c;
        case 0x551c70u: goto label_551c70;
        case 0x551c74u: goto label_551c74;
        case 0x551c78u: goto label_551c78;
        case 0x551c7cu: goto label_551c7c;
        case 0x551c80u: goto label_551c80;
        case 0x551c84u: goto label_551c84;
        case 0x551c88u: goto label_551c88;
        case 0x551c8cu: goto label_551c8c;
        case 0x551c90u: goto label_551c90;
        case 0x551c94u: goto label_551c94;
        case 0x551c98u: goto label_551c98;
        case 0x551c9cu: goto label_551c9c;
        case 0x551ca0u: goto label_551ca0;
        case 0x551ca4u: goto label_551ca4;
        case 0x551ca8u: goto label_551ca8;
        case 0x551cacu: goto label_551cac;
        case 0x551cb0u: goto label_551cb0;
        case 0x551cb4u: goto label_551cb4;
        case 0x551cb8u: goto label_551cb8;
        case 0x551cbcu: goto label_551cbc;
        case 0x551cc0u: goto label_551cc0;
        case 0x551cc4u: goto label_551cc4;
        case 0x551cc8u: goto label_551cc8;
        case 0x551cccu: goto label_551ccc;
        case 0x551cd0u: goto label_551cd0;
        case 0x551cd4u: goto label_551cd4;
        case 0x551cd8u: goto label_551cd8;
        case 0x551cdcu: goto label_551cdc;
        case 0x551ce0u: goto label_551ce0;
        case 0x551ce4u: goto label_551ce4;
        case 0x551ce8u: goto label_551ce8;
        case 0x551cecu: goto label_551cec;
        default: break;
    }

    ctx->pc = 0x5519a0u;

label_5519a0:
    // 0x5519a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x5519a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_5519a4:
    // 0x5519a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5519a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5519a8:
    // 0x5519a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x5519a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_5519ac:
    // 0x5519ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x5519acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_5519b0:
    // 0x5519b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5519b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5519b4:
    // 0x5519b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x5519b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5519b8:
    // 0x5519b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5519b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5519bc:
    // 0x5519bc: 0x24140029  addiu       $s4, $zero, 0x29
    ctx->pc = 0x5519bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_5519c0:
    // 0x5519c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5519c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5519c4:
    // 0x5519c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5519c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5519c8:
    // 0x5519c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5519c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5519cc:
    // 0x5519cc: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x5519ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_5519d0:
    // 0x5519d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5519d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5519d4:
    // 0x5519d4: 0x3c1100be  lui         $s1, 0xBE
    ctx->pc = 0x5519d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)190 << 16));
label_5519d8:
    // 0x5519d8: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x5519d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_5519dc:
    // 0x5519dc: 0x2652ea20  addiu       $s2, $s2, -0x15E0
    ctx->pc = 0x5519dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961696));
label_5519e0:
    // 0x5519e0: 0x2631b710  addiu       $s1, $s1, -0x48F0
    ctx->pc = 0x5519e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948624));
label_5519e4:
    // 0x5519e4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x5519e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_5519e8:
    // 0x5519e8: 0xa4800060  sh          $zero, 0x60($a0)
    ctx->pc = 0x5519e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 0));
label_5519ec:
    // 0x5519ec: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x5519ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5519f0:
    // 0x5519f0: 0xc0b90e0  jal         func_2E4380
label_5519f4:
    if (ctx->pc == 0x5519F4u) {
        ctx->pc = 0x5519F4u;
            // 0x5519f4: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x5519F8u;
        goto label_5519f8;
    }
    ctx->pc = 0x5519F0u;
    SET_GPR_U32(ctx, 31, 0x5519F8u);
    ctx->pc = 0x5519F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5519F0u;
            // 0x5519f4: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5519F8u; }
        if (ctx->pc != 0x5519F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5519F8u; }
        if (ctx->pc != 0x5519F8u) { return; }
    }
    ctx->pc = 0x5519F8u;
label_5519f8:
    // 0x5519f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_5519fc:
    if (ctx->pc == 0x5519FCu) {
        ctx->pc = 0x551A00u;
        goto label_551a00;
    }
    ctx->pc = 0x5519F8u;
    {
        const bool branch_taken_0x5519f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5519f8) {
            ctx->pc = 0x551A10u;
            goto label_551a10;
        }
    }
    ctx->pc = 0x551A00u;
label_551a00:
    // 0x551a00: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x551a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_551a04:
    // 0x551a04: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x551a04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
label_551a08:
    // 0x551a08: 0x10000005  b           . + 4 + (0x5 << 2)
label_551a0c:
    if (ctx->pc == 0x551A0Cu) {
        ctx->pc = 0x551A0Cu;
            // 0x551a0c: 0x14a43f  dsra32      $s4, $s4, 16 (Delay Slot)
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
        ctx->pc = 0x551A10u;
        goto label_551a10;
    }
    ctx->pc = 0x551A08u;
    {
        const bool branch_taken_0x551a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551A08u;
            // 0x551a0c: 0x14a43f  dsra32      $s4, $s4, 16 (Delay Slot)
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551a08) {
            ctx->pc = 0x551A20u;
            goto label_551a20;
        }
    }
    ctx->pc = 0x551A10u;
label_551a10:
    // 0x551a10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x551a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_551a14:
    // 0x551a14: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x551a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_551a18:
    // 0x551a18: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x551a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_551a1c:
    // 0x551a1c: 0x0  nop
    ctx->pc = 0x551a1cu;
    // NOP
label_551a20:
    // 0x551a20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x551a20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_551a24:
    // 0x551a24: 0x2a630029  slti        $v1, $s3, 0x29
    ctx->pc = 0x551a24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)41) ? 1 : 0);
label_551a28:
    // 0x551a28: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_551a2c:
    if (ctx->pc == 0x551A2Cu) {
        ctx->pc = 0x551A2Cu;
            // 0x551a2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x551A30u;
        goto label_551a30;
    }
    ctx->pc = 0x551A28u;
    {
        const bool branch_taken_0x551a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x551A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551A28u;
            // 0x551a2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551a28) {
            ctx->pc = 0x5519ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5519ec;
        }
    }
    ctx->pc = 0x551A30u;
label_551a30:
    // 0x551a30: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x551a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
label_551a34:
    // 0x551a34: 0xa6b40060  sh          $s4, 0x60($s5)
    ctx->pc = 0x551a34u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 96), (uint16_t)GPR_U32(ctx, 20));
label_551a38:
    // 0x551a38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x551a38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_551a3c:
    // 0x551a3c: 0x82a4005c  lb          $a0, 0x5C($s5)
    ctx->pc = 0x551a3cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
label_551a40:
    // 0x551a40: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x551a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_551a44:
    // 0x551a44: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x551a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_551a48:
    // 0x551a48: 0x8c65da98  lw          $a1, -0x2568($v1)
    ctx->pc = 0x551a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957720)));
label_551a4c:
    // 0x551a4c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x551a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_551a50:
    // 0x551a50: 0x8c63da98  lw          $v1, -0x2568($v1)
    ctx->pc = 0x551a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957720)));
label_551a54:
    // 0x551a54: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x551a54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_551a58:
    // 0x551a58: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_551a5c:
    if (ctx->pc == 0x551A5Cu) {
        ctx->pc = 0x551A5Cu;
            // 0x551a5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551A60u;
        goto label_551a60;
    }
    ctx->pc = 0x551A58u;
    {
        const bool branch_taken_0x551a58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x551a58) {
            ctx->pc = 0x551A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551A58u;
            // 0x551a5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551A60u;
            goto label_551a60;
        }
    }
    ctx->pc = 0x551A60u;
label_551a60:
    // 0x551a60: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x551a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
label_551a64:
    // 0x551a64: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x551a64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_551a68:
    // 0x551a68: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x551a68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_551a6c:
    // 0x551a6c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_551a70:
    if (ctx->pc == 0x551A70u) {
        ctx->pc = 0x551A70u;
            // 0x551a70: 0xa2a5005c  sb          $a1, 0x5C($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 92), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x551A74u;
        goto label_551a74;
    }
    ctx->pc = 0x551A6Cu;
    {
        const bool branch_taken_0x551a6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x551A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551A6Cu;
            // 0x551a70: 0xa2a5005c  sb          $a1, 0x5C($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 92), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551a6c) {
            ctx->pc = 0x551A7Cu;
            goto label_551a7c;
        }
    }
    ctx->pc = 0x551A74u;
label_551a74:
    // 0x551a74: 0x10000003  b           . + 4 + (0x3 << 2)
label_551a78:
    if (ctx->pc == 0x551A78u) {
        ctx->pc = 0x551A78u;
            // 0x551a78: 0xa2a6005c  sb          $a2, 0x5C($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 92), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x551A7Cu;
        goto label_551a7c;
    }
    ctx->pc = 0x551A74u;
    {
        const bool branch_taken_0x551a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551A74u;
            // 0x551a78: 0xa2a6005c  sb          $a2, 0x5C($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 92), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551a74) {
            ctx->pc = 0x551A84u;
            goto label_551a84;
        }
    }
    ctx->pc = 0x551A7Cu;
label_551a7c:
    // 0x551a7c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x551a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_551a80:
    // 0x551a80: 0xa2a6005c  sb          $a2, 0x5C($s5)
    ctx->pc = 0x551a80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 92), (uint8_t)GPR_U32(ctx, 6));
label_551a84:
    // 0x551a84: 0x62e3c  dsll32      $a1, $a2, 24
    ctx->pc = 0x551a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 24));
label_551a88:
    // 0x551a88: 0x86a4005e  lh          $a0, 0x5E($s5)
    ctx->pc = 0x551a88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 94)));
label_551a8c:
    // 0x551a8c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x551a8cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_551a90:
    // 0x551a90: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x551a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_551a94:
    // 0x551a94: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x551a94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_551a98:
    // 0x551a98: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_551a9c:
    if (ctx->pc == 0x551A9Cu) {
        ctx->pc = 0x551A9Cu;
            // 0x551a9c: 0xa4082a  slt         $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->pc = 0x551AA0u;
        goto label_551aa0;
    }
    ctx->pc = 0x551A98u;
    {
        const bool branch_taken_0x551a98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x551a98) {
            ctx->pc = 0x551A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551A98u;
            // 0x551a9c: 0xa4082a  slt         $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x551AACu;
            goto label_551aac;
        }
    }
    ctx->pc = 0x551AA0u;
label_551aa0:
    // 0x551aa0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x551aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_551aa4:
    // 0x551aa4: 0x10000005  b           . + 4 + (0x5 << 2)
label_551aa8:
    if (ctx->pc == 0x551AA8u) {
        ctx->pc = 0x551AA8u;
            // 0x551aa8: 0xa6a3005e  sh          $v1, 0x5E($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 94), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x551AACu;
        goto label_551aac;
    }
    ctx->pc = 0x551AA4u;
    {
        const bool branch_taken_0x551aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551AA4u;
            // 0x551aa8: 0xa6a3005e  sh          $v1, 0x5E($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 94), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551aa4) {
            ctx->pc = 0x551ABCu;
            goto label_551abc;
        }
    }
    ctx->pc = 0x551AACu;
label_551aac:
    // 0x551aac: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_551ab0:
    if (ctx->pc == 0x551AB0u) {
        ctx->pc = 0x551AB0u;
            // 0x551ab0: 0x86a3005e  lh          $v1, 0x5E($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 94)));
        ctx->pc = 0x551AB4u;
        goto label_551ab4;
    }
    ctx->pc = 0x551AACu;
    {
        const bool branch_taken_0x551aac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x551aac) {
            ctx->pc = 0x551AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551AACu;
            // 0x551ab0: 0x86a3005e  lh          $v1, 0x5E($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 94)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551AC0u;
            goto label_551ac0;
        }
    }
    ctx->pc = 0x551AB4u;
label_551ab4:
    // 0x551ab4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x551ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_551ab8:
    // 0x551ab8: 0xa6a3005e  sh          $v1, 0x5E($s5)
    ctx->pc = 0x551ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 94), (uint16_t)GPR_U32(ctx, 3));
label_551abc:
    // 0x551abc: 0x86a3005e  lh          $v1, 0x5E($s5)
    ctx->pc = 0x551abcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 94)));
label_551ac0:
    // 0x551ac0: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
label_551ac4:
    if (ctx->pc == 0x551AC4u) {
        ctx->pc = 0x551AC4u;
            // 0x551ac4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x551AC8u;
        goto label_551ac8;
    }
    ctx->pc = 0x551AC0u;
    {
        const bool branch_taken_0x551ac0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x551ac0) {
            ctx->pc = 0x551AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551AC0u;
            // 0x551ac4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551AD0u;
            goto label_551ad0;
        }
    }
    ctx->pc = 0x551AC8u;
label_551ac8:
    // 0x551ac8: 0xa6a0005e  sh          $zero, 0x5E($s5)
    ctx->pc = 0x551ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 94), (uint16_t)GPR_U32(ctx, 0));
label_551acc:
    // 0x551acc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x551accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_551ad0:
    // 0x551ad0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x551ad0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_551ad4:
    // 0x551ad4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x551ad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_551ad8:
    // 0x551ad8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x551ad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_551adc:
    // 0x551adc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x551adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_551ae0:
    // 0x551ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x551ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_551ae4:
    // 0x551ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x551ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_551ae8:
    // 0x551ae8: 0x3e00008  jr          $ra
label_551aec:
    if (ctx->pc == 0x551AECu) {
        ctx->pc = 0x551AECu;
            // 0x551aec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x551AF0u;
        goto label_551af0;
    }
    ctx->pc = 0x551AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x551AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551AE8u;
            // 0x551aec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x551AF0u;
label_551af0:
    // 0x551af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x551af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_551af4:
    // 0x551af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x551af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_551af8:
    // 0x551af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x551af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_551afc:
    // 0x551afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x551afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_551b00:
    // 0x551b00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x551b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_551b04:
    // 0x551b04: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_551b08:
    if (ctx->pc == 0x551B08u) {
        ctx->pc = 0x551B08u;
            // 0x551b08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551B0Cu;
        goto label_551b0c;
    }
    ctx->pc = 0x551B04u;
    {
        const bool branch_taken_0x551b04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x551B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551B04u;
            // 0x551b08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551b04) {
            ctx->pc = 0x551B48u;
            goto label_551b48;
        }
    }
    ctx->pc = 0x551B0Cu;
label_551b0c:
    // 0x551b0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x551b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_551b10:
    // 0x551b10: 0x24427a00  addiu       $v0, $v0, 0x7A00
    ctx->pc = 0x551b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31232));
label_551b14:
    // 0x551b14: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_551b18:
    if (ctx->pc == 0x551B18u) {
        ctx->pc = 0x551B18u;
            // 0x551b18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x551B1Cu;
        goto label_551b1c;
    }
    ctx->pc = 0x551B14u;
    {
        const bool branch_taken_0x551b14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x551B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551B14u;
            // 0x551b18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551b14) {
            ctx->pc = 0x551B30u;
            goto label_551b30;
        }
    }
    ctx->pc = 0x551B1Cu;
label_551b1c:
    // 0x551b1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x551b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_551b20:
    // 0x551b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x551b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_551b24:
    // 0x551b24: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x551b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_551b28:
    // 0x551b28: 0xc057a68  jal         func_15E9A0
label_551b2c:
    if (ctx->pc == 0x551B2Cu) {
        ctx->pc = 0x551B2Cu;
            // 0x551b2c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x551B30u;
        goto label_551b30;
    }
    ctx->pc = 0x551B28u;
    SET_GPR_U32(ctx, 31, 0x551B30u);
    ctx->pc = 0x551B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551B28u;
            // 0x551b2c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551B30u; }
        if (ctx->pc != 0x551B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551B30u; }
        if (ctx->pc != 0x551B30u) { return; }
    }
    ctx->pc = 0x551B30u;
label_551b30:
    // 0x551b30: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x551b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_551b34:
    // 0x551b34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x551b34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_551b38:
    // 0x551b38: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_551b3c:
    if (ctx->pc == 0x551B3Cu) {
        ctx->pc = 0x551B3Cu;
            // 0x551b3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551B40u;
        goto label_551b40;
    }
    ctx->pc = 0x551B38u;
    {
        const bool branch_taken_0x551b38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x551b38) {
            ctx->pc = 0x551B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551B38u;
            // 0x551b3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551B4Cu;
            goto label_551b4c;
        }
    }
    ctx->pc = 0x551B40u;
label_551b40:
    // 0x551b40: 0xc0400a8  jal         func_1002A0
label_551b44:
    if (ctx->pc == 0x551B44u) {
        ctx->pc = 0x551B44u;
            // 0x551b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551B48u;
        goto label_551b48;
    }
    ctx->pc = 0x551B40u;
    SET_GPR_U32(ctx, 31, 0x551B48u);
    ctx->pc = 0x551B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551B40u;
            // 0x551b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551B48u; }
        if (ctx->pc != 0x551B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551B48u; }
        if (ctx->pc != 0x551B48u) { return; }
    }
    ctx->pc = 0x551B48u;
label_551b48:
    // 0x551b48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x551b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_551b4c:
    // 0x551b4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x551b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_551b50:
    // 0x551b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x551b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_551b54:
    // 0x551b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x551b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_551b58:
    // 0x551b58: 0x3e00008  jr          $ra
label_551b5c:
    if (ctx->pc == 0x551B5Cu) {
        ctx->pc = 0x551B5Cu;
            // 0x551b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x551B60u;
        goto label_551b60;
    }
    ctx->pc = 0x551B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x551B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551B58u;
            // 0x551b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x551B60u;
label_551b60:
    // 0x551b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x551b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_551b64:
    // 0x551b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x551b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_551b68:
    // 0x551b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x551b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_551b6c:
    // 0x551b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x551b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_551b70:
    // 0x551b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x551b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_551b74:
    // 0x551b74: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x551b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_551b78:
    // 0x551b78: 0xc0c9a58  jal         func_326960
label_551b7c:
    if (ctx->pc == 0x551B7Cu) {
        ctx->pc = 0x551B7Cu;
            // 0x551b7c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x551B80u;
        goto label_551b80;
    }
    ctx->pc = 0x551B78u;
    SET_GPR_U32(ctx, 31, 0x551B80u);
    ctx->pc = 0x551B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551B78u;
            // 0x551b7c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551B80u; }
        if (ctx->pc != 0x551B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551B80u; }
        if (ctx->pc != 0x551B80u) { return; }
    }
    ctx->pc = 0x551B80u;
label_551b80:
    // 0x551b80: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x551b80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_551b84:
    // 0x551b84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x551b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_551b88:
    // 0x551b88: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_551b8c:
    if (ctx->pc == 0x551B8Cu) {
        ctx->pc = 0x551B8Cu;
            // 0x551b8c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x551B90u;
        goto label_551b90;
    }
    ctx->pc = 0x551B88u;
    {
        const bool branch_taken_0x551b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x551b88) {
            ctx->pc = 0x551B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551B88u;
            // 0x551b8c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551B98u;
            goto label_551b98;
        }
    }
    ctx->pc = 0x551B90u;
label_551b90:
    // 0x551b90: 0x10000050  b           . + 4 + (0x50 << 2)
label_551b94:
    if (ctx->pc == 0x551B94u) {
        ctx->pc = 0x551B94u;
            // 0x551b94: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x551B98u;
        goto label_551b98;
    }
    ctx->pc = 0x551B90u;
    {
        const bool branch_taken_0x551b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551B90u;
            // 0x551b94: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551b90) {
            ctx->pc = 0x551CD4u;
            goto label_551cd4;
        }
    }
    ctx->pc = 0x551B98u;
label_551b98:
    // 0x551b98: 0xc0c917c  jal         func_3245F0
label_551b9c:
    if (ctx->pc == 0x551B9Cu) {
        ctx->pc = 0x551B9Cu;
            // 0x551b9c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x551BA0u;
        goto label_551ba0;
    }
    ctx->pc = 0x551B98u;
    SET_GPR_U32(ctx, 31, 0x551BA0u);
    ctx->pc = 0x551B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551B98u;
            // 0x551b9c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3245F0u;
    if (runtime->hasFunction(0x3245F0u)) {
        auto targetFn = runtime->lookupFunction(0x3245F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BA0u; }
        if (ctx->pc != 0x551BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245F0_0x3245f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BA0u; }
        if (ctx->pc != 0x551BA0u) { return; }
    }
    ctx->pc = 0x551BA0u;
label_551ba0:
    // 0x551ba0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_551ba4:
    if (ctx->pc == 0x551BA4u) {
        ctx->pc = 0x551BA4u;
            // 0x551ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551BA8u;
        goto label_551ba8;
    }
    ctx->pc = 0x551BA0u;
    {
        const bool branch_taken_0x551ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x551ba0) {
            ctx->pc = 0x551BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551BA0u;
            // 0x551ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551BCCu;
            goto label_551bcc;
        }
    }
    ctx->pc = 0x551BA8u;
label_551ba8:
    // 0x551ba8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x551ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_551bac:
    // 0x551bac: 0xc0c9190  jal         func_324640
label_551bb0:
    if (ctx->pc == 0x551BB0u) {
        ctx->pc = 0x551BB0u;
            // 0x551bb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x551BB4u;
        goto label_551bb4;
    }
    ctx->pc = 0x551BACu;
    SET_GPR_U32(ctx, 31, 0x551BB4u);
    ctx->pc = 0x551BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551BACu;
            // 0x551bb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BB4u; }
        if (ctx->pc != 0x551BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BB4u; }
        if (ctx->pc != 0x551BB4u) { return; }
    }
    ctx->pc = 0x551BB4u;
label_551bb4:
    // 0x551bb4: 0xc0c9c84  jal         func_327210
label_551bb8:
    if (ctx->pc == 0x551BB8u) {
        ctx->pc = 0x551BB8u;
            // 0x551bb8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x551BBCu;
        goto label_551bbc;
    }
    ctx->pc = 0x551BB4u;
    SET_GPR_U32(ctx, 31, 0x551BBCu);
    ctx->pc = 0x551BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551BB4u;
            // 0x551bb8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BBCu; }
        if (ctx->pc != 0x551BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BBCu; }
        if (ctx->pc != 0x551BBCu) { return; }
    }
    ctx->pc = 0x551BBCu;
label_551bbc:
    // 0x551bbc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x551bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_551bc0:
    // 0x551bc0: 0xc0c9190  jal         func_324640
label_551bc4:
    if (ctx->pc == 0x551BC4u) {
        ctx->pc = 0x551BC4u;
            // 0x551bc4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x551BC8u;
        goto label_551bc8;
    }
    ctx->pc = 0x551BC0u;
    SET_GPR_U32(ctx, 31, 0x551BC8u);
    ctx->pc = 0x551BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551BC0u;
            // 0x551bc4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BC8u; }
        if (ctx->pc != 0x551BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BC8u; }
        if (ctx->pc != 0x551BC8u) { return; }
    }
    ctx->pc = 0x551BC8u;
label_551bc8:
    // 0x551bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x551bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_551bcc:
    // 0x551bcc: 0xc15473c  jal         func_551CF0
label_551bd0:
    if (ctx->pc == 0x551BD0u) {
        ctx->pc = 0x551BD4u;
        goto label_551bd4;
    }
    ctx->pc = 0x551BCCu;
    SET_GPR_U32(ctx, 31, 0x551BD4u);
    ctx->pc = 0x551CF0u;
    if (runtime->hasFunction(0x551CF0u)) {
        auto targetFn = runtime->lookupFunction(0x551CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BD4u; }
        if (ctx->pc != 0x551BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00551CF0_0x551cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BD4u; }
        if (ctx->pc != 0x551BD4u) { return; }
    }
    ctx->pc = 0x551BD4u;
label_551bd4:
    // 0x551bd4: 0xc155514  jal         func_555450
label_551bd8:
    if (ctx->pc == 0x551BD8u) {
        ctx->pc = 0x551BD8u;
            // 0x551bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551BDCu;
        goto label_551bdc;
    }
    ctx->pc = 0x551BD4u;
    SET_GPR_U32(ctx, 31, 0x551BDCu);
    ctx->pc = 0x551BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551BD4u;
            // 0x551bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x555450u;
    if (runtime->hasFunction(0x555450u)) {
        auto targetFn = runtime->lookupFunction(0x555450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BDCu; }
        if (ctx->pc != 0x551BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00555450_0x555450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BDCu; }
        if (ctx->pc != 0x551BDCu) { return; }
    }
    ctx->pc = 0x551BDCu;
label_551bdc:
    // 0x551bdc: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x551bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_551be0:
    // 0x551be0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x551be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551be4:
    // 0x551be4: 0x0  nop
    ctx->pc = 0x551be4u;
    // NOP
label_551be8:
    // 0x551be8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x551be8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_551bec:
    // 0x551bec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_551bf0:
    if (ctx->pc == 0x551BF0u) {
        ctx->pc = 0x551BF4u;
        goto label_551bf4;
    }
    ctx->pc = 0x551BECu;
    {
        const bool branch_taken_0x551bec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x551bec) {
            ctx->pc = 0x551C04u;
            goto label_551c04;
        }
    }
    ctx->pc = 0x551BF4u;
label_551bf4:
    // 0x551bf4: 0xc0c85f8  jal         func_3217E0
label_551bf8:
    if (ctx->pc == 0x551BF8u) {
        ctx->pc = 0x551BF8u;
            // 0x551bf8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x551BFCu;
        goto label_551bfc;
    }
    ctx->pc = 0x551BF4u;
    SET_GPR_U32(ctx, 31, 0x551BFCu);
    ctx->pc = 0x551BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551BF4u;
            // 0x551bf8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3217E0u;
    if (runtime->hasFunction(0x3217E0u)) {
        auto targetFn = runtime->lookupFunction(0x3217E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BFCu; }
        if (ctx->pc != 0x551BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003217E0_0x3217e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551BFCu; }
        if (ctx->pc != 0x551BFCu) { return; }
    }
    ctx->pc = 0x551BFCu;
label_551bfc:
    // 0x551bfc: 0x10000007  b           . + 4 + (0x7 << 2)
label_551c00:
    if (ctx->pc == 0x551C00u) {
        ctx->pc = 0x551C00u;
            // 0x551c00: 0x9203005c  lbu         $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x551C04u;
        goto label_551c04;
    }
    ctx->pc = 0x551BFCu;
    {
        const bool branch_taken_0x551bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551BFCu;
            // 0x551c00: 0x9203005c  lbu         $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551bfc) {
            ctx->pc = 0x551C1Cu;
            goto label_551c1c;
        }
    }
    ctx->pc = 0x551C04u;
label_551c04:
    // 0x551c04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x551c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_551c08:
    // 0x551c08: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x551c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_551c0c:
    // 0x551c0c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x551c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_551c10:
    // 0x551c10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x551c10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_551c14:
    // 0x551c14: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x551c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_551c18:
    // 0x551c18: 0x9203005c  lbu         $v1, 0x5C($s0)
    ctx->pc = 0x551c18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_551c1c:
    // 0x551c1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_551c20:
    if (ctx->pc == 0x551C20u) {
        ctx->pc = 0x551C24u;
        goto label_551c24;
    }
    ctx->pc = 0x551C1Cu;
    {
        const bool branch_taken_0x551c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x551c1c) {
            ctx->pc = 0x551C30u;
            goto label_551c30;
        }
    }
    ctx->pc = 0x551C24u;
label_551c24:
    // 0x551c24: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x551c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_551c28:
    // 0x551c28: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_551c2c:
    if (ctx->pc == 0x551C2Cu) {
        ctx->pc = 0x551C30u;
        goto label_551c30;
    }
    ctx->pc = 0x551C28u;
    {
        const bool branch_taken_0x551c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x551c28) {
            ctx->pc = 0x551CD0u;
            goto label_551cd0;
        }
    }
    ctx->pc = 0x551C30u;
label_551c30:
    // 0x551c30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x551c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_551c34:
    // 0x551c34: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x551c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_551c38:
    // 0x551c38: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x551c38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_551c3c:
    // 0x551c3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_551c40:
    if (ctx->pc == 0x551C40u) {
        ctx->pc = 0x551C40u;
            // 0x551c40: 0x24110061  addiu       $s1, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->pc = 0x551C44u;
        goto label_551c44;
    }
    ctx->pc = 0x551C3Cu;
    {
        const bool branch_taken_0x551c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x551C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551C3Cu;
            // 0x551c40: 0x24110061  addiu       $s1, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551c3c) {
            ctx->pc = 0x551C50u;
            goto label_551c50;
        }
    }
    ctx->pc = 0x551C44u;
label_551c44:
    // 0x551c44: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x551c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_551c48:
    // 0x551c48: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x551c48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_551c4c:
    // 0x551c4c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x551c4cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_551c50:
    // 0x551c50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x551c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_551c54:
    // 0x551c54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x551c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_551c58:
    // 0x551c58: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x551c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_551c5c:
    // 0x551c5c: 0x8c590008  lw          $t9, 0x8($v0)
    ctx->pc = 0x551c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_551c60:
    // 0x551c60: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x551c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_551c64:
    // 0x551c64: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x551c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_551c68:
    // 0x551c68: 0x320f809  jalr        $t9
label_551c6c:
    if (ctx->pc == 0x551C6Cu) {
        ctx->pc = 0x551C6Cu;
            // 0x551c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551C70u;
        goto label_551c70;
    }
    ctx->pc = 0x551C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551C70u);
        ctx->pc = 0x551C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551C68u;
            // 0x551c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551C70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551C70u; }
            if (ctx->pc != 0x551C70u) { return; }
        }
        }
    }
    ctx->pc = 0x551C70u;
label_551c70:
    // 0x551c70: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x551c70u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551c74:
    // 0x551c74: 0x3c02439a  lui         $v0, 0x439A
    ctx->pc = 0x551c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17306 << 16));
label_551c78:
    // 0x551c78: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x551c78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_551c7c:
    // 0x551c7c: 0x34488000  ori         $t0, $v0, 0x8000
    ctx->pc = 0x551c7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_551c80:
    // 0x551c80: 0x3c094354  lui         $t1, 0x4354
    ctx->pc = 0x551c80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17236 << 16));
label_551c84:
    // 0x551c84: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x551c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_551c88:
    // 0x551c88: 0x3c024413  lui         $v0, 0x4413
    ctx->pc = 0x551c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17427 << 16));
label_551c8c:
    // 0x551c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x551c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_551c90:
    // 0x551c90: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x551c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_551c94:
    // 0x551c94: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x551c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_551c98:
    // 0x551c98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x551c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_551c9c:
    // 0x551c9c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x551c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_551ca0:
    // 0x551ca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x551ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_551ca4:
    // 0x551ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x551ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_551ca8:
    // 0x551ca8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x551ca8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551cac:
    // 0x551cac: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x551cacu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_551cb0:
    // 0x551cb0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x551cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_551cb4:
    // 0x551cb4: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x551cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_551cb8:
    // 0x551cb8: 0x320f809  jalr        $t9
label_551cbc:
    if (ctx->pc == 0x551CBCu) {
        ctx->pc = 0x551CBCu;
            // 0x551cbc: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x551CC0u;
        goto label_551cc0;
    }
    ctx->pc = 0x551CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551CC0u);
        ctx->pc = 0x551CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551CB8u;
            // 0x551cbc: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551CC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551CC0u; }
            if (ctx->pc != 0x551CC0u) { return; }
        }
        }
    }
    ctx->pc = 0x551CC0u;
label_551cc0:
    // 0x551cc0: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x551cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_551cc4:
    // 0x551cc4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x551cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_551cc8:
    // 0x551cc8: 0x320f809  jalr        $t9
label_551ccc:
    if (ctx->pc == 0x551CCCu) {
        ctx->pc = 0x551CCCu;
            // 0x551ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551CD0u;
        goto label_551cd0;
    }
    ctx->pc = 0x551CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551CD0u);
        ctx->pc = 0x551CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551CC8u;
            // 0x551ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551CD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551CD0u; }
            if (ctx->pc != 0x551CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x551CD0u;
label_551cd0:
    // 0x551cd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x551cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_551cd4:
    // 0x551cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x551cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_551cd8:
    // 0x551cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x551cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_551cdc:
    // 0x551cdc: 0x3e00008  jr          $ra
label_551ce0:
    if (ctx->pc == 0x551CE0u) {
        ctx->pc = 0x551CE0u;
            // 0x551ce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x551CE4u;
        goto label_551ce4;
    }
    ctx->pc = 0x551CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x551CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551CDCu;
            // 0x551ce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x551CE4u;
label_551ce4:
    // 0x551ce4: 0x0  nop
    ctx->pc = 0x551ce4u;
    // NOP
label_551ce8:
    // 0x551ce8: 0x0  nop
    ctx->pc = 0x551ce8u;
    // NOP
label_551cec:
    // 0x551cec: 0x0  nop
    ctx->pc = 0x551cecu;
    // NOP
}
