#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A2A40
// Address: 0x4a2a40 - 0x4a2c90
void sub_004A2A40_0x4a2a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2A40_0x4a2a40");
#endif

    switch (ctx->pc) {
        case 0x4a2a40u: goto label_4a2a40;
        case 0x4a2a44u: goto label_4a2a44;
        case 0x4a2a48u: goto label_4a2a48;
        case 0x4a2a4cu: goto label_4a2a4c;
        case 0x4a2a50u: goto label_4a2a50;
        case 0x4a2a54u: goto label_4a2a54;
        case 0x4a2a58u: goto label_4a2a58;
        case 0x4a2a5cu: goto label_4a2a5c;
        case 0x4a2a60u: goto label_4a2a60;
        case 0x4a2a64u: goto label_4a2a64;
        case 0x4a2a68u: goto label_4a2a68;
        case 0x4a2a6cu: goto label_4a2a6c;
        case 0x4a2a70u: goto label_4a2a70;
        case 0x4a2a74u: goto label_4a2a74;
        case 0x4a2a78u: goto label_4a2a78;
        case 0x4a2a7cu: goto label_4a2a7c;
        case 0x4a2a80u: goto label_4a2a80;
        case 0x4a2a84u: goto label_4a2a84;
        case 0x4a2a88u: goto label_4a2a88;
        case 0x4a2a8cu: goto label_4a2a8c;
        case 0x4a2a90u: goto label_4a2a90;
        case 0x4a2a94u: goto label_4a2a94;
        case 0x4a2a98u: goto label_4a2a98;
        case 0x4a2a9cu: goto label_4a2a9c;
        case 0x4a2aa0u: goto label_4a2aa0;
        case 0x4a2aa4u: goto label_4a2aa4;
        case 0x4a2aa8u: goto label_4a2aa8;
        case 0x4a2aacu: goto label_4a2aac;
        case 0x4a2ab0u: goto label_4a2ab0;
        case 0x4a2ab4u: goto label_4a2ab4;
        case 0x4a2ab8u: goto label_4a2ab8;
        case 0x4a2abcu: goto label_4a2abc;
        case 0x4a2ac0u: goto label_4a2ac0;
        case 0x4a2ac4u: goto label_4a2ac4;
        case 0x4a2ac8u: goto label_4a2ac8;
        case 0x4a2accu: goto label_4a2acc;
        case 0x4a2ad0u: goto label_4a2ad0;
        case 0x4a2ad4u: goto label_4a2ad4;
        case 0x4a2ad8u: goto label_4a2ad8;
        case 0x4a2adcu: goto label_4a2adc;
        case 0x4a2ae0u: goto label_4a2ae0;
        case 0x4a2ae4u: goto label_4a2ae4;
        case 0x4a2ae8u: goto label_4a2ae8;
        case 0x4a2aecu: goto label_4a2aec;
        case 0x4a2af0u: goto label_4a2af0;
        case 0x4a2af4u: goto label_4a2af4;
        case 0x4a2af8u: goto label_4a2af8;
        case 0x4a2afcu: goto label_4a2afc;
        case 0x4a2b00u: goto label_4a2b00;
        case 0x4a2b04u: goto label_4a2b04;
        case 0x4a2b08u: goto label_4a2b08;
        case 0x4a2b0cu: goto label_4a2b0c;
        case 0x4a2b10u: goto label_4a2b10;
        case 0x4a2b14u: goto label_4a2b14;
        case 0x4a2b18u: goto label_4a2b18;
        case 0x4a2b1cu: goto label_4a2b1c;
        case 0x4a2b20u: goto label_4a2b20;
        case 0x4a2b24u: goto label_4a2b24;
        case 0x4a2b28u: goto label_4a2b28;
        case 0x4a2b2cu: goto label_4a2b2c;
        case 0x4a2b30u: goto label_4a2b30;
        case 0x4a2b34u: goto label_4a2b34;
        case 0x4a2b38u: goto label_4a2b38;
        case 0x4a2b3cu: goto label_4a2b3c;
        case 0x4a2b40u: goto label_4a2b40;
        case 0x4a2b44u: goto label_4a2b44;
        case 0x4a2b48u: goto label_4a2b48;
        case 0x4a2b4cu: goto label_4a2b4c;
        case 0x4a2b50u: goto label_4a2b50;
        case 0x4a2b54u: goto label_4a2b54;
        case 0x4a2b58u: goto label_4a2b58;
        case 0x4a2b5cu: goto label_4a2b5c;
        case 0x4a2b60u: goto label_4a2b60;
        case 0x4a2b64u: goto label_4a2b64;
        case 0x4a2b68u: goto label_4a2b68;
        case 0x4a2b6cu: goto label_4a2b6c;
        case 0x4a2b70u: goto label_4a2b70;
        case 0x4a2b74u: goto label_4a2b74;
        case 0x4a2b78u: goto label_4a2b78;
        case 0x4a2b7cu: goto label_4a2b7c;
        case 0x4a2b80u: goto label_4a2b80;
        case 0x4a2b84u: goto label_4a2b84;
        case 0x4a2b88u: goto label_4a2b88;
        case 0x4a2b8cu: goto label_4a2b8c;
        case 0x4a2b90u: goto label_4a2b90;
        case 0x4a2b94u: goto label_4a2b94;
        case 0x4a2b98u: goto label_4a2b98;
        case 0x4a2b9cu: goto label_4a2b9c;
        case 0x4a2ba0u: goto label_4a2ba0;
        case 0x4a2ba4u: goto label_4a2ba4;
        case 0x4a2ba8u: goto label_4a2ba8;
        case 0x4a2bacu: goto label_4a2bac;
        case 0x4a2bb0u: goto label_4a2bb0;
        case 0x4a2bb4u: goto label_4a2bb4;
        case 0x4a2bb8u: goto label_4a2bb8;
        case 0x4a2bbcu: goto label_4a2bbc;
        case 0x4a2bc0u: goto label_4a2bc0;
        case 0x4a2bc4u: goto label_4a2bc4;
        case 0x4a2bc8u: goto label_4a2bc8;
        case 0x4a2bccu: goto label_4a2bcc;
        case 0x4a2bd0u: goto label_4a2bd0;
        case 0x4a2bd4u: goto label_4a2bd4;
        case 0x4a2bd8u: goto label_4a2bd8;
        case 0x4a2bdcu: goto label_4a2bdc;
        case 0x4a2be0u: goto label_4a2be0;
        case 0x4a2be4u: goto label_4a2be4;
        case 0x4a2be8u: goto label_4a2be8;
        case 0x4a2becu: goto label_4a2bec;
        case 0x4a2bf0u: goto label_4a2bf0;
        case 0x4a2bf4u: goto label_4a2bf4;
        case 0x4a2bf8u: goto label_4a2bf8;
        case 0x4a2bfcu: goto label_4a2bfc;
        case 0x4a2c00u: goto label_4a2c00;
        case 0x4a2c04u: goto label_4a2c04;
        case 0x4a2c08u: goto label_4a2c08;
        case 0x4a2c0cu: goto label_4a2c0c;
        case 0x4a2c10u: goto label_4a2c10;
        case 0x4a2c14u: goto label_4a2c14;
        case 0x4a2c18u: goto label_4a2c18;
        case 0x4a2c1cu: goto label_4a2c1c;
        case 0x4a2c20u: goto label_4a2c20;
        case 0x4a2c24u: goto label_4a2c24;
        case 0x4a2c28u: goto label_4a2c28;
        case 0x4a2c2cu: goto label_4a2c2c;
        case 0x4a2c30u: goto label_4a2c30;
        case 0x4a2c34u: goto label_4a2c34;
        case 0x4a2c38u: goto label_4a2c38;
        case 0x4a2c3cu: goto label_4a2c3c;
        case 0x4a2c40u: goto label_4a2c40;
        case 0x4a2c44u: goto label_4a2c44;
        case 0x4a2c48u: goto label_4a2c48;
        case 0x4a2c4cu: goto label_4a2c4c;
        case 0x4a2c50u: goto label_4a2c50;
        case 0x4a2c54u: goto label_4a2c54;
        case 0x4a2c58u: goto label_4a2c58;
        case 0x4a2c5cu: goto label_4a2c5c;
        case 0x4a2c60u: goto label_4a2c60;
        case 0x4a2c64u: goto label_4a2c64;
        case 0x4a2c68u: goto label_4a2c68;
        case 0x4a2c6cu: goto label_4a2c6c;
        case 0x4a2c70u: goto label_4a2c70;
        case 0x4a2c74u: goto label_4a2c74;
        case 0x4a2c78u: goto label_4a2c78;
        case 0x4a2c7cu: goto label_4a2c7c;
        case 0x4a2c80u: goto label_4a2c80;
        case 0x4a2c84u: goto label_4a2c84;
        case 0x4a2c88u: goto label_4a2c88;
        case 0x4a2c8cu: goto label_4a2c8c;
        default: break;
    }

    ctx->pc = 0x4a2a40u;

label_4a2a40:
    // 0x4a2a40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4a2a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4a2a44:
    // 0x4a2a44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a2a48:
    // 0x4a2a48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4a2a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4a2a4c:
    // 0x4a2a4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4a2a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4a2a50:
    // 0x4a2a50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4a2a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4a2a54:
    // 0x4a2a54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4a2a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4a2a58:
    // 0x4a2a58: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x4a2a58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a2a5c:
    // 0x4a2a5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a2a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4a2a60:
    // 0x4a2a60: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4a2a60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a2a64:
    // 0x4a2a64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a2a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a2a68:
    // 0x4a2a68: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a2a68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a2a6c:
    // 0x4a2a6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a2a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a2a70:
    // 0x4a2a70: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4a2a70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a2a74:
    // 0x4a2a74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a2a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a2a78:
    // 0x4a2a78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4a2a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a2a7c:
    // 0x4a2a7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a2a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a2a80:
    // 0x4a2a80: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4a2a80u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4a2a84:
    // 0x4a2a84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a2a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a2a88:
    // 0x4a2a88: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x4a2a88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_4a2a8c:
    // 0x4a2a8c: 0x8c5389e0  lw          $s3, -0x7620($v0)
    ctx->pc = 0x4a2a8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a2a90:
    // 0x4a2a90: 0x2652a6e0  addiu       $s2, $s2, -0x5920
    ctx->pc = 0x4a2a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944480));
label_4a2a94:
    // 0x4a2a94: 0x909e0070  lbu         $fp, 0x70($a0)
    ctx->pc = 0x4a2a94u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
label_4a2a98:
    // 0x4a2a98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a2a9c:
    // 0x4a2a9c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4a2a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4a2aa0:
    // 0x4a2aa0: 0xc0506ac  jal         func_141AB0
label_4a2aa4:
    if (ctx->pc == 0x4A2AA4u) {
        ctx->pc = 0x4A2AA4u;
            // 0x4a2aa4: 0x2631210c  addiu       $s1, $s1, 0x210C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8460));
        ctx->pc = 0x4A2AA8u;
        goto label_4a2aa8;
    }
    ctx->pc = 0x4A2AA0u;
    SET_GPR_U32(ctx, 31, 0x4A2AA8u);
    ctx->pc = 0x4A2AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2AA0u;
            // 0x4a2aa4: 0x2631210c  addiu       $s1, $s1, 0x210C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8460));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2AA8u; }
        if (ctx->pc != 0x4A2AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2AA8u; }
        if (ctx->pc != 0x4A2AA8u) { return; }
    }
    ctx->pc = 0x4A2AA8u;
label_4a2aa8:
    // 0x4a2aa8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4a2aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a2aac:
    // 0x4a2aac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a2aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a2ab0:
    // 0x4a2ab0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a2ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a2ab4:
    // 0x4a2ab4: 0x320f809  jalr        $t9
label_4a2ab8:
    if (ctx->pc == 0x4A2AB8u) {
        ctx->pc = 0x4A2AB8u;
            // 0x4a2ab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A2ABCu;
        goto label_4a2abc;
    }
    ctx->pc = 0x4A2AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A2ABCu);
        ctx->pc = 0x4A2AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2AB4u;
            // 0x4a2ab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A2ABCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A2ABCu; }
            if (ctx->pc != 0x4A2ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x4A2ABCu;
label_4a2abc:
    // 0x4a2abc: 0x2a810003  slti        $at, $s4, 0x3
    ctx->pc = 0x4a2abcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_4a2ac0:
    // 0x4a2ac0: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_4a2ac4:
    if (ctx->pc == 0x4A2AC4u) {
        ctx->pc = 0x4A2AC4u;
            // 0x4a2ac4: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x4A2AC8u;
        goto label_4a2ac8;
    }
    ctx->pc = 0x4A2AC0u;
    {
        const bool branch_taken_0x4a2ac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2ac0) {
            ctx->pc = 0x4A2AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2AC0u;
            // 0x4a2ac4: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A2AD8u;
            goto label_4a2ad8;
        }
    }
    ctx->pc = 0x4A2AC8u;
label_4a2ac8:
    // 0x4a2ac8: 0x2682000a  addiu       $v0, $s4, 0xA
    ctx->pc = 0x4a2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 10));
label_4a2acc:
    // 0x4a2acc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a2accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4a2ad0:
    // 0x4a2ad0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a2ad4:
    if (ctx->pc == 0x4A2AD4u) {
        ctx->pc = 0x4A2AD4u;
            // 0x4a2ad4: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x4A2AD8u;
        goto label_4a2ad8;
    }
    ctx->pc = 0x4A2AD0u;
    {
        const bool branch_taken_0x4a2ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2AD0u;
            // 0x4a2ad4: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ad0) {
            ctx->pc = 0x4A2AE0u;
            goto label_4a2ae0;
        }
    }
    ctx->pc = 0x4A2AD8u;
label_4a2ad8:
    // 0x4a2ad8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4a2adc:
    // 0x4a2adc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4a2adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4a2ae0:
    // 0x4a2ae0: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4a2ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a2ae4:
    // 0x4a2ae4: 0xc6a4007c  lwc1        $f4, 0x7C($s5)
    ctx->pc = 0x4a2ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4a2ae8:
    // 0x4a2ae8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x4a2ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a2aec:
    // 0x4a2aec: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x4a2aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_4a2af0:
    // 0x4a2af0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4a2af4:
    // 0x4a2af4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a2af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a2af8:
    // 0x4a2af8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a2af8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2afc:
    // 0x4a2afc: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x4a2afcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a2b00:
    // 0x4a2b00: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a2b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a2b04:
    // 0x4a2b04: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4a2b08:
    // 0x4a2b08: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4a2b08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4a2b0c:
    // 0x4a2b0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a2b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a2b10:
    // 0x4a2b10: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4a2b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a2b14:
    // 0x4a2b14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a2b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2b18:
    // 0x4a2b18: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x4a2b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4a2b1c:
    // 0x4a2b1c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4a2b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4a2b20:
    // 0x4a2b20: 0x0  nop
    ctx->pc = 0x4a2b20u;
    // NOP
label_4a2b24:
    // 0x4a2b24: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x4a2b24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4a2b28:
    // 0x4a2b28: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a2b2c:
    // 0x4a2b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a2b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2b30:
    // 0x4a2b30: 0x0  nop
    ctx->pc = 0x4a2b30u;
    // NOP
label_4a2b34:
    // 0x4a2b34: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a2b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a2b38:
    // 0x4a2b38: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x4a2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a2b3c:
    // 0x4a2b3c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4a2b3cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2b40:
    // 0x4a2b40: 0x0  nop
    ctx->pc = 0x4a2b40u;
    // NOP
label_4a2b44:
    // 0x4a2b44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a2b48:
    // 0x4a2b48: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4a2b48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4a2b4c:
    // 0x4a2b4c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x4a2b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_4a2b50:
    // 0x4a2b50: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x4a2b50u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4a2b54:
    // 0x4a2b54: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x4a2b54u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4a2b58:
    // 0x4a2b58: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x4a2b58u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2b5c:
    // 0x4a2b5c: 0x0  nop
    ctx->pc = 0x4a2b5cu;
    // NOP
label_4a2b60:
    // 0x4a2b60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a2b64:
    // 0x4a2b64: 0x46020341  sub.s       $f13, $f0, $f2
    ctx->pc = 0x4a2b64u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_4a2b68:
    // 0x4a2b68: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a2b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a2b6c:
    // 0x4a2b6c: 0xc0bc284  jal         func_2F0A10
label_4a2b70:
    if (ctx->pc == 0x4A2B70u) {
        ctx->pc = 0x4A2B70u;
            // 0x4a2b70: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x4A2B74u;
        goto label_4a2b74;
    }
    ctx->pc = 0x4A2B6Cu;
    SET_GPR_U32(ctx, 31, 0x4A2B74u);
    ctx->pc = 0x4A2B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2B6Cu;
            // 0x4a2b70: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2B74u; }
        if (ctx->pc != 0x4A2B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2B74u; }
        if (ctx->pc != 0x4A2B74u) { return; }
    }
    ctx->pc = 0x4A2B74u;
label_4a2b74:
    // 0x4a2b74: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4a2b74u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2b78:
    // 0x4a2b78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4a2b7c:
    // 0x4a2b7c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4a2b7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4a2b80:
    // 0x4a2b80: 0x2a810003  slti        $at, $s4, 0x3
    ctx->pc = 0x4a2b80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_4a2b84:
    // 0x4a2b84: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4a2b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a2b88:
    // 0x4a2b88: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x4a2b88u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2b8c:
    // 0x4a2b8c: 0xc6a6007c  lwc1        $f6, 0x7C($s5)
    ctx->pc = 0x4a2b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4a2b90:
    // 0x4a2b90: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x4a2b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4a2b94:
    // 0x4a2b94: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x4a2b94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4a2b98:
    // 0x4a2b98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a2b9c:
    // 0x4a2b9c: 0x460628c2  mul.s       $f3, $f5, $f6
    ctx->pc = 0x4a2b9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_4a2ba0:
    // 0x4a2ba0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4a2ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4a2ba4:
    // 0x4a2ba4: 0x0  nop
    ctx->pc = 0x4a2ba4u;
    // NOP
label_4a2ba8:
    // 0x4a2ba8: 0x460320dc  madd.s      $f3, $f4, $f3
    ctx->pc = 0x4a2ba8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_4a2bac:
    // 0x4a2bac: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x4a2bacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4a2bb0:
    // 0x4a2bb0: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2bb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a2bb4:
    // 0x4a2bb4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x4a2bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a2bb8:
    // 0x4a2bb8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a2bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4a2bbc:
    // 0x4a2bbc: 0x46060802  mul.s       $f0, $f1, $f6
    ctx->pc = 0x4a2bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_4a2bc0:
    // 0x4a2bc0: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x4a2bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_4a2bc4:
    // 0x4a2bc4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2bc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a2bc8:
    // 0x4a2bc8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x4a2bc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_4a2bcc:
    // 0x4a2bcc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4a2bd0:
    if (ctx->pc == 0x4A2BD0u) {
        ctx->pc = 0x4A2BD0u;
            // 0x4a2bd0: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->pc = 0x4A2BD4u;
        goto label_4a2bd4;
    }
    ctx->pc = 0x4A2BCCu;
    {
        const bool branch_taken_0x4a2bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2bcc) {
            ctx->pc = 0x4A2BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2BCCu;
            // 0x4a2bd0: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A2BE0u;
            goto label_4a2be0;
        }
    }
    ctx->pc = 0x4A2BD4u;
label_4a2bd4:
    // 0x4a2bd4: 0x2682000d  addiu       $v0, $s4, 0xD
    ctx->pc = 0x4a2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 13));
label_4a2bd8:
    // 0x4a2bd8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4a2bdc:
    // 0x4a2bdc: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x4a2bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4a2be0:
    // 0x4a2be0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a2be0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2be4:
    // 0x4a2be4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a2be8:
    // 0x4a2be8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4a2be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4a2bec:
    // 0x4a2bec: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4a2becu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a2bf0:
    // 0x4a2bf0: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4a2bf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4a2bf4:
    // 0x4a2bf4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4a2bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a2bf8:
    // 0x4a2bf8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a2bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a2bfc:
    // 0x4a2bfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a2bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2c00:
    // 0x4a2c00: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4a2c00u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2c04:
    // 0x4a2c04: 0x0  nop
    ctx->pc = 0x4a2c04u;
    // NOP
label_4a2c08:
    // 0x4a2c08: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4a2c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4a2c0c:
    // 0x4a2c0c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a2c0cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2c10:
    // 0x4a2c10: 0x0  nop
    ctx->pc = 0x4a2c10u;
    // NOP
label_4a2c14:
    // 0x4a2c14: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a2c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a2c18:
    // 0x4a2c18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a2c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2c1c:
    // 0x4a2c1c: 0x0  nop
    ctx->pc = 0x4a2c1cu;
    // NOP
label_4a2c20:
    // 0x4a2c20: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a2c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a2c24:
    // 0x4a2c24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a2c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2c28:
    // 0x4a2c28: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x4a2c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a2c2c:
    // 0x4a2c2c: 0x460f0018  adda.s      $f0, $f15
    ctx->pc = 0x4a2c2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
label_4a2c30:
    // 0x4a2c30: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a2c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a2c34:
    // 0x4a2c34: 0x46060b5d  msub.s      $f13, $f1, $f6
    ctx->pc = 0x4a2c34u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
label_4a2c38:
    // 0x4a2c38: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x4a2c38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_4a2c3c:
    // 0x4a2c3c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4a2c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a2c40:
    // 0x4a2c40: 0xc0bc284  jal         func_2F0A10
label_4a2c44:
    if (ctx->pc == 0x4A2C44u) {
        ctx->pc = 0x4A2C44u;
            // 0x4a2c44: 0x4606039c  madd.s      $f14, $f0, $f6 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
        ctx->pc = 0x4A2C48u;
        goto label_4a2c48;
    }
    ctx->pc = 0x4A2C40u;
    SET_GPR_U32(ctx, 31, 0x4A2C48u);
    ctx->pc = 0x4A2C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2C40u;
            // 0x4a2c44: 0x4606039c  madd.s      $f14, $f0, $f6 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2C48u; }
        if (ctx->pc != 0x4A2C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2C48u; }
        if (ctx->pc != 0x4A2C48u) { return; }
    }
    ctx->pc = 0x4A2C48u;
label_4a2c48:
    // 0x4a2c48: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4a2c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a2c4c:
    // 0x4a2c4c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a2c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a2c50:
    // 0x4a2c50: 0x320f809  jalr        $t9
label_4a2c54:
    if (ctx->pc == 0x4A2C54u) {
        ctx->pc = 0x4A2C54u;
            // 0x4a2c54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A2C58u;
        goto label_4a2c58;
    }
    ctx->pc = 0x4A2C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A2C58u);
        ctx->pc = 0x4A2C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2C50u;
            // 0x4a2c54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A2C58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A2C58u; }
            if (ctx->pc != 0x4A2C58u) { return; }
        }
        }
    }
    ctx->pc = 0x4A2C58u;
label_4a2c58:
    // 0x4a2c58: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4a2c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4a2c5c:
    // 0x4a2c5c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4a2c5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a2c60:
    // 0x4a2c60: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4a2c60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a2c64:
    // 0x4a2c64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4a2c64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a2c68:
    // 0x4a2c68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a2c68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a2c6c:
    // 0x4a2c6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a2c6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a2c70:
    // 0x4a2c70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a2c70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a2c74:
    // 0x4a2c74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a2c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a2c78:
    // 0x4a2c78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a2c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a2c7c:
    // 0x4a2c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a2c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a2c80:
    // 0x4a2c80: 0x3e00008  jr          $ra
label_4a2c84:
    if (ctx->pc == 0x4A2C84u) {
        ctx->pc = 0x4A2C84u;
            // 0x4a2c84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4A2C88u;
        goto label_4a2c88;
    }
    ctx->pc = 0x4A2C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2C80u;
            // 0x4a2c84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A2C88u;
label_4a2c88:
    // 0x4a2c88: 0x0  nop
    ctx->pc = 0x4a2c88u;
    // NOP
label_4a2c8c:
    // 0x4a2c8c: 0x0  nop
    ctx->pc = 0x4a2c8cu;
    // NOP
}
