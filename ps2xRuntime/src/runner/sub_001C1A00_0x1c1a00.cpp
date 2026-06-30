#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1A00
// Address: 0x1c1a00 - 0x1c1bd0
void sub_001C1A00_0x1c1a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1A00_0x1c1a00");
#endif

    switch (ctx->pc) {
        case 0x1c1a00u: goto label_1c1a00;
        case 0x1c1a04u: goto label_1c1a04;
        case 0x1c1a08u: goto label_1c1a08;
        case 0x1c1a0cu: goto label_1c1a0c;
        case 0x1c1a10u: goto label_1c1a10;
        case 0x1c1a14u: goto label_1c1a14;
        case 0x1c1a18u: goto label_1c1a18;
        case 0x1c1a1cu: goto label_1c1a1c;
        case 0x1c1a20u: goto label_1c1a20;
        case 0x1c1a24u: goto label_1c1a24;
        case 0x1c1a28u: goto label_1c1a28;
        case 0x1c1a2cu: goto label_1c1a2c;
        case 0x1c1a30u: goto label_1c1a30;
        case 0x1c1a34u: goto label_1c1a34;
        case 0x1c1a38u: goto label_1c1a38;
        case 0x1c1a3cu: goto label_1c1a3c;
        case 0x1c1a40u: goto label_1c1a40;
        case 0x1c1a44u: goto label_1c1a44;
        case 0x1c1a48u: goto label_1c1a48;
        case 0x1c1a4cu: goto label_1c1a4c;
        case 0x1c1a50u: goto label_1c1a50;
        case 0x1c1a54u: goto label_1c1a54;
        case 0x1c1a58u: goto label_1c1a58;
        case 0x1c1a5cu: goto label_1c1a5c;
        case 0x1c1a60u: goto label_1c1a60;
        case 0x1c1a64u: goto label_1c1a64;
        case 0x1c1a68u: goto label_1c1a68;
        case 0x1c1a6cu: goto label_1c1a6c;
        case 0x1c1a70u: goto label_1c1a70;
        case 0x1c1a74u: goto label_1c1a74;
        case 0x1c1a78u: goto label_1c1a78;
        case 0x1c1a7cu: goto label_1c1a7c;
        case 0x1c1a80u: goto label_1c1a80;
        case 0x1c1a84u: goto label_1c1a84;
        case 0x1c1a88u: goto label_1c1a88;
        case 0x1c1a8cu: goto label_1c1a8c;
        case 0x1c1a90u: goto label_1c1a90;
        case 0x1c1a94u: goto label_1c1a94;
        case 0x1c1a98u: goto label_1c1a98;
        case 0x1c1a9cu: goto label_1c1a9c;
        case 0x1c1aa0u: goto label_1c1aa0;
        case 0x1c1aa4u: goto label_1c1aa4;
        case 0x1c1aa8u: goto label_1c1aa8;
        case 0x1c1aacu: goto label_1c1aac;
        case 0x1c1ab0u: goto label_1c1ab0;
        case 0x1c1ab4u: goto label_1c1ab4;
        case 0x1c1ab8u: goto label_1c1ab8;
        case 0x1c1abcu: goto label_1c1abc;
        case 0x1c1ac0u: goto label_1c1ac0;
        case 0x1c1ac4u: goto label_1c1ac4;
        case 0x1c1ac8u: goto label_1c1ac8;
        case 0x1c1accu: goto label_1c1acc;
        case 0x1c1ad0u: goto label_1c1ad0;
        case 0x1c1ad4u: goto label_1c1ad4;
        case 0x1c1ad8u: goto label_1c1ad8;
        case 0x1c1adcu: goto label_1c1adc;
        case 0x1c1ae0u: goto label_1c1ae0;
        case 0x1c1ae4u: goto label_1c1ae4;
        case 0x1c1ae8u: goto label_1c1ae8;
        case 0x1c1aecu: goto label_1c1aec;
        case 0x1c1af0u: goto label_1c1af0;
        case 0x1c1af4u: goto label_1c1af4;
        case 0x1c1af8u: goto label_1c1af8;
        case 0x1c1afcu: goto label_1c1afc;
        case 0x1c1b00u: goto label_1c1b00;
        case 0x1c1b04u: goto label_1c1b04;
        case 0x1c1b08u: goto label_1c1b08;
        case 0x1c1b0cu: goto label_1c1b0c;
        case 0x1c1b10u: goto label_1c1b10;
        case 0x1c1b14u: goto label_1c1b14;
        case 0x1c1b18u: goto label_1c1b18;
        case 0x1c1b1cu: goto label_1c1b1c;
        case 0x1c1b20u: goto label_1c1b20;
        case 0x1c1b24u: goto label_1c1b24;
        case 0x1c1b28u: goto label_1c1b28;
        case 0x1c1b2cu: goto label_1c1b2c;
        case 0x1c1b30u: goto label_1c1b30;
        case 0x1c1b34u: goto label_1c1b34;
        case 0x1c1b38u: goto label_1c1b38;
        case 0x1c1b3cu: goto label_1c1b3c;
        case 0x1c1b40u: goto label_1c1b40;
        case 0x1c1b44u: goto label_1c1b44;
        case 0x1c1b48u: goto label_1c1b48;
        case 0x1c1b4cu: goto label_1c1b4c;
        case 0x1c1b50u: goto label_1c1b50;
        case 0x1c1b54u: goto label_1c1b54;
        case 0x1c1b58u: goto label_1c1b58;
        case 0x1c1b5cu: goto label_1c1b5c;
        case 0x1c1b60u: goto label_1c1b60;
        case 0x1c1b64u: goto label_1c1b64;
        case 0x1c1b68u: goto label_1c1b68;
        case 0x1c1b6cu: goto label_1c1b6c;
        case 0x1c1b70u: goto label_1c1b70;
        case 0x1c1b74u: goto label_1c1b74;
        case 0x1c1b78u: goto label_1c1b78;
        case 0x1c1b7cu: goto label_1c1b7c;
        case 0x1c1b80u: goto label_1c1b80;
        case 0x1c1b84u: goto label_1c1b84;
        case 0x1c1b88u: goto label_1c1b88;
        case 0x1c1b8cu: goto label_1c1b8c;
        case 0x1c1b90u: goto label_1c1b90;
        case 0x1c1b94u: goto label_1c1b94;
        case 0x1c1b98u: goto label_1c1b98;
        case 0x1c1b9cu: goto label_1c1b9c;
        case 0x1c1ba0u: goto label_1c1ba0;
        case 0x1c1ba4u: goto label_1c1ba4;
        case 0x1c1ba8u: goto label_1c1ba8;
        case 0x1c1bacu: goto label_1c1bac;
        case 0x1c1bb0u: goto label_1c1bb0;
        case 0x1c1bb4u: goto label_1c1bb4;
        case 0x1c1bb8u: goto label_1c1bb8;
        case 0x1c1bbcu: goto label_1c1bbc;
        case 0x1c1bc0u: goto label_1c1bc0;
        case 0x1c1bc4u: goto label_1c1bc4;
        case 0x1c1bc8u: goto label_1c1bc8;
        case 0x1c1bccu: goto label_1c1bcc;
        default: break;
    }

    ctx->pc = 0x1c1a00u;

label_1c1a00:
    // 0x1c1a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1a04:
    // 0x1c1a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1a08:
    // 0x1c1a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a0c:
    // 0x1c1a0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1a10:
    // 0x1c1a10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1a14:
    // 0x1c1a14: 0xc071236  jal         func_1C48D8
label_1c1a18:
    if (ctx->pc == 0x1C1A18u) {
        ctx->pc = 0x1C1A18u;
            // 0x1c1a18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A1Cu;
        goto label_1c1a1c;
    }
    ctx->pc = 0x1C1A14u;
    SET_GPR_U32(ctx, 31, 0x1C1A1Cu);
    ctx->pc = 0x1C1A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A14u;
            // 0x1c1a18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A1Cu; }
        if (ctx->pc != 0x1C1A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A1Cu; }
        if (ctx->pc != 0x1C1A1Cu) { return; }
    }
    ctx->pc = 0x1C1A1Cu;
label_1c1a1c:
    // 0x1c1a1c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1a20:
    // 0x1c1a20: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1a20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1a24:
    // 0x1c1a24: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1a28:
    // 0x1c1a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a2c:
    // 0x1c1a2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a30:
    // 0x1c1a30: 0x24c6b9f0  addiu       $a2, $a2, -0x4610
    ctx->pc = 0x1c1a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949360));
label_1c1a34:
    // 0x1c1a34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a38:
    // 0x1c1a38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c1a3c:
    if (ctx->pc == 0x1C1A3Cu) {
        ctx->pc = 0x1C1A3Cu;
            // 0x1c1a3c: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1A40u;
        goto label_1c1a40;
    }
    ctx->pc = 0x1C1A38u;
    {
        const bool branch_taken_0x1c1a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A38u;
            // 0x1c1a3c: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a38) {
            ctx->pc = 0x1C1A58u;
            goto label_1c1a58;
        }
    }
    ctx->pc = 0x1C1A40u;
label_1c1a40:
    // 0x1c1a40: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1c1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1c1a44:
    // 0x1c1a44: 0x40f809  jalr        $v0
label_1c1a48:
    if (ctx->pc == 0x1C1A48u) {
        ctx->pc = 0x1C1A4Cu;
        goto label_1c1a4c;
    }
    ctx->pc = 0x1C1A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1A4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1A4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A4Cu; }
            if (ctx->pc != 0x1C1A4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C1A4Cu;
label_1c1a4c:
    // 0x1c1a4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c1a50:
    if (ctx->pc == 0x1C1A50u) {
        ctx->pc = 0x1C1A50u;
            // 0x1c1a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C1A54u;
        goto label_1c1a54;
    }
    ctx->pc = 0x1C1A4Cu;
    {
        const bool branch_taken_0x1c1a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A4Cu;
            // 0x1c1a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a4c) {
            ctx->pc = 0x1C1A6Cu;
            goto label_1c1a6c;
        }
    }
    ctx->pc = 0x1C1A54u;
label_1c1a54:
    // 0x1c1a54: 0x0  nop
    ctx->pc = 0x1c1a54u;
    // NOP
label_1c1a58:
    // 0x1c1a58: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1a5c:
    // 0x1c1a5c: 0x24050168  addiu       $a1, $zero, 0x168
    ctx->pc = 0x1c1a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1c1a60:
    // 0x1c1a60: 0xc0711fe  jal         func_1C47F8
label_1c1a64:
    if (ctx->pc == 0x1C1A64u) {
        ctx->pc = 0x1C1A64u;
            // 0x1c1a64: 0x2484b948  addiu       $a0, $a0, -0x46B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
        ctx->pc = 0x1C1A68u;
        goto label_1c1a68;
    }
    ctx->pc = 0x1C1A60u;
    SET_GPR_U32(ctx, 31, 0x1C1A68u);
    ctx->pc = 0x1C1A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A60u;
            // 0x1c1a64: 0x2484b948  addiu       $a0, $a0, -0x46B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A68u; }
        if (ctx->pc != 0x1C1A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A68u; }
        if (ctx->pc != 0x1C1A68u) { return; }
    }
    ctx->pc = 0x1C1A68u;
label_1c1a68:
    // 0x1c1a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1a6c:
    // 0x1c1a6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1a70:
    // 0x1c1a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1a74:
    // 0x1c1a74: 0x3e00008  jr          $ra
label_1c1a78:
    if (ctx->pc == 0x1C1A78u) {
        ctx->pc = 0x1C1A78u;
            // 0x1c1a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1A7Cu;
        goto label_1c1a7c;
    }
    ctx->pc = 0x1C1A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A74u;
            // 0x1c1a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1A7Cu;
label_1c1a7c:
    // 0x1c1a7c: 0x0  nop
    ctx->pc = 0x1c1a7cu;
    // NOP
label_1c1a80:
    // 0x1c1a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1a84:
    // 0x1c1a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c1a88:
    // 0x1c1a88: 0xc071236  jal         func_1C48D8
label_1c1a8c:
    if (ctx->pc == 0x1C1A8Cu) {
        ctx->pc = 0x1C1A90u;
        goto label_1c1a90;
    }
    ctx->pc = 0x1C1A88u;
    SET_GPR_U32(ctx, 31, 0x1C1A90u);
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A90u; }
        if (ctx->pc != 0x1C1A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A90u; }
        if (ctx->pc != 0x1C1A90u) { return; }
    }
    ctx->pc = 0x1C1A90u;
label_1c1a90:
    // 0x1c1a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1a94:
    // 0x1c1a94: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1c1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1c1a98:
    // 0x1c1a98: 0x3e00008  jr          $ra
label_1c1a9c:
    if (ctx->pc == 0x1C1A9Cu) {
        ctx->pc = 0x1C1A9Cu;
            // 0x1c1a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1AA0u;
        goto label_1c1aa0;
    }
    ctx->pc = 0x1C1A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A98u;
            // 0x1c1a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1AA0u;
label_1c1aa0:
    // 0x1c1aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1aa4:
    // 0x1c1aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1aa8:
    // 0x1c1aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1aac:
    // 0x1c1aac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1ab0:
    // 0x1c1ab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1ab4:
    // 0x1c1ab4: 0xc071236  jal         func_1C48D8
label_1c1ab8:
    if (ctx->pc == 0x1C1AB8u) {
        ctx->pc = 0x1C1AB8u;
            // 0x1c1ab8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1ABCu;
        goto label_1c1abc;
    }
    ctx->pc = 0x1C1AB4u;
    SET_GPR_U32(ctx, 31, 0x1C1ABCu);
    ctx->pc = 0x1C1AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AB4u;
            // 0x1c1ab8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1ABCu; }
        if (ctx->pc != 0x1C1ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1ABCu; }
        if (ctx->pc != 0x1C1ABCu) { return; }
    }
    ctx->pc = 0x1C1ABCu;
label_1c1abc:
    // 0x1c1abc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1ac0:
    // 0x1c1ac0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1ac4:
    // 0x1c1ac4: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1ac8:
    // 0x1c1ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1acc:
    // 0x1c1acc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ad0:
    // 0x1c1ad0: 0x24c6ba08  addiu       $a2, $a2, -0x45F8
    ctx->pc = 0x1c1ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949384));
label_1c1ad4:
    // 0x1c1ad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ad8:
    // 0x1c1ad8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c1adc:
    if (ctx->pc == 0x1C1ADCu) {
        ctx->pc = 0x1C1ADCu;
            // 0x1c1adc: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1AE0u;
        goto label_1c1ae0;
    }
    ctx->pc = 0x1C1AD8u;
    {
        const bool branch_taken_0x1c1ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AD8u;
            // 0x1c1adc: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ad8) {
            ctx->pc = 0x1C1B00u;
            goto label_1c1b00;
        }
    }
    ctx->pc = 0x1C1AE0u;
label_1c1ae0:
    // 0x1c1ae0: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1c1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1c1ae4:
    // 0x1c1ae4: 0x40f809  jalr        $v0
label_1c1ae8:
    if (ctx->pc == 0x1C1AE8u) {
        ctx->pc = 0x1C1AECu;
        goto label_1c1aec;
    }
    ctx->pc = 0x1C1AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1AECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1AECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1AECu; }
            if (ctx->pc != 0x1C1AECu) { return; }
        }
        }
    }
    ctx->pc = 0x1C1AECu;
label_1c1aec:
    // 0x1c1aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1af0:
    // 0x1c1af0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1af4:
    // 0x1c1af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1af8:
    // 0x1c1af8: 0x3e00008  jr          $ra
label_1c1afc:
    if (ctx->pc == 0x1C1AFCu) {
        ctx->pc = 0x1C1AFCu;
            // 0x1c1afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1B00u;
        goto label_1c1b00;
    }
    ctx->pc = 0x1C1AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AF8u;
            // 0x1c1afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1B00u;
label_1c1b00:
    // 0x1c1b00: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1b04:
    // 0x1c1b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1b08:
    // 0x1c1b08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1b0c:
    // 0x1c1b0c: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1b10:
    // 0x1c1b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1b14:
    // 0x1c1b14: 0x24050183  addiu       $a1, $zero, 0x183
    ctx->pc = 0x1c1b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
label_1c1b18:
    // 0x1c1b18: 0x80711fe  j           func_1C47F8
label_1c1b1c:
    if (ctx->pc == 0x1C1B1Cu) {
        ctx->pc = 0x1C1B1Cu;
            // 0x1c1b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1B20u;
        goto label_1c1b20;
    }
    ctx->pc = 0x1C1B18u;
    ctx->pc = 0x1C1B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B18u;
            // 0x1c1b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1B20u;
label_1c1b20:
    // 0x1c1b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1b24:
    // 0x1c1b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1b28:
    // 0x1c1b28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b2c:
    // 0x1c1b2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1b30:
    // 0x1c1b30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b34:
    // 0x1c1b34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c1b38:
    // 0x1c1b38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1c1b3c:
    // 0x1c1b3c: 0xc071236  jal         func_1C48D8
label_1c1b40:
    if (ctx->pc == 0x1C1B40u) {
        ctx->pc = 0x1C1B40u;
            // 0x1c1b40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B44u;
        goto label_1c1b44;
    }
    ctx->pc = 0x1C1B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B44u);
    ctx->pc = 0x1C1B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B3Cu;
            // 0x1c1b40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B44u; }
        if (ctx->pc != 0x1C1B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B44u; }
        if (ctx->pc != 0x1C1B44u) { return; }
    }
    ctx->pc = 0x1C1B44u;
label_1c1b44:
    // 0x1c1b44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1b48:
    // 0x1c1b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b4c:
    // 0x1c1b4c: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1b50:
    // 0x1c1b50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b54:
    // 0x1c1b54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c1b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b58:
    // 0x1c1b58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b5c:
    // 0x1c1b5c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1c1b60:
    if (ctx->pc == 0x1C1B60u) {
        ctx->pc = 0x1C1B60u;
            // 0x1c1b60: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1B64u;
        goto label_1c1b64;
    }
    ctx->pc = 0x1C1B5Cu;
    {
        const bool branch_taken_0x1c1b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B5Cu;
            // 0x1c1b60: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b5c) {
            ctx->pc = 0x1C1BA0u;
            goto label_1c1ba0;
        }
    }
    ctx->pc = 0x1C1B64u;
label_1c1b64:
    // 0x1c1b64: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1c1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1c1b68:
    // 0x1c1b68: 0x40f809  jalr        $v0
label_1c1b6c:
    if (ctx->pc == 0x1C1B6Cu) {
        ctx->pc = 0x1C1B70u;
        goto label_1c1b70;
    }
    ctx->pc = 0x1C1B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1B70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B70u; }
            if (ctx->pc != 0x1C1B70u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1B70u;
label_1c1b70:
    // 0x1c1b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b74:
    // 0x1c1b74: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1c1b78:
    if (ctx->pc == 0x1C1B78u) {
        ctx->pc = 0x1C1B78u;
            // 0x1c1b78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B7Cu;
        goto label_1c1b7c;
    }
    ctx->pc = 0x1C1B74u;
    {
        const bool branch_taken_0x1c1b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B74u;
            // 0x1c1b78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b74) {
            ctx->pc = 0x1C1B88u;
            goto label_1c1b88;
        }
    }
    ctx->pc = 0x1C1B7Cu;
label_1c1b7c:
    // 0x1c1b7c: 0xc0704e4  jal         func_1C1390
label_1c1b80:
    if (ctx->pc == 0x1C1B80u) {
        ctx->pc = 0x1C1B84u;
        goto label_1c1b84;
    }
    ctx->pc = 0x1C1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B84u);
    ctx->pc = 0x1C1390u;
    if (runtime->hasFunction(0x1C1390u)) {
        auto targetFn = runtime->lookupFunction(0x1C1390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B84u; }
        if (ctx->pc != 0x1C1B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1390_0x1c1390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B84u; }
        if (ctx->pc != 0x1C1B84u) { return; }
    }
    ctx->pc = 0x1C1B84u;
label_1c1b84:
    // 0x1c1b84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c1b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b88:
    // 0x1c1b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1b8c:
    // 0x1c1b8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1b90:
    // 0x1c1b90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1b94:
    // 0x1c1b94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c1b98:
    // 0x1c1b98: 0x3e00008  jr          $ra
label_1c1b9c:
    if (ctx->pc == 0x1C1B9Cu) {
        ctx->pc = 0x1C1B9Cu;
            // 0x1c1b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1BA0u;
        goto label_1c1ba0;
    }
    ctx->pc = 0x1C1B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B98u;
            // 0x1c1b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1BA0u;
label_1c1ba0:
    // 0x1c1ba0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1ba4:
    // 0x1c1ba4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1ba8:
    // 0x1c1ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1bac:
    // 0x1c1bac: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1bb0:
    // 0x1c1bb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1bb4:
    // 0x1c1bb4: 0x24c6ba20  addiu       $a2, $a2, -0x45E0
    ctx->pc = 0x1c1bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949408));
label_1c1bb8:
    // 0x1c1bb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1bb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1bbc:
    // 0x1c1bbc: 0x24050199  addiu       $a1, $zero, 0x199
    ctx->pc = 0x1c1bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
label_1c1bc0:
    // 0x1c1bc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c1bc4:
    // 0x1c1bc4: 0x80711fe  j           func_1C47F8
label_1c1bc8:
    if (ctx->pc == 0x1C1BC8u) {
        ctx->pc = 0x1C1BC8u;
            // 0x1c1bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1BCCu;
        goto label_1c1bcc;
    }
    ctx->pc = 0x1C1BC4u;
    ctx->pc = 0x1C1BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1BC4u;
            // 0x1c1bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1BCCu;
label_1c1bcc:
    // 0x1c1bcc: 0x0  nop
    ctx->pc = 0x1c1bccu;
    // NOP
}
