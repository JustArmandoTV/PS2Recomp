#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C19E0
// Address: 0x2c19e0 - 0x2c1c60
void sub_002C19E0_0x2c19e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C19E0_0x2c19e0");
#endif

    switch (ctx->pc) {
        case 0x2c19e0u: goto label_2c19e0;
        case 0x2c19e4u: goto label_2c19e4;
        case 0x2c19e8u: goto label_2c19e8;
        case 0x2c19ecu: goto label_2c19ec;
        case 0x2c19f0u: goto label_2c19f0;
        case 0x2c19f4u: goto label_2c19f4;
        case 0x2c19f8u: goto label_2c19f8;
        case 0x2c19fcu: goto label_2c19fc;
        case 0x2c1a00u: goto label_2c1a00;
        case 0x2c1a04u: goto label_2c1a04;
        case 0x2c1a08u: goto label_2c1a08;
        case 0x2c1a0cu: goto label_2c1a0c;
        case 0x2c1a10u: goto label_2c1a10;
        case 0x2c1a14u: goto label_2c1a14;
        case 0x2c1a18u: goto label_2c1a18;
        case 0x2c1a1cu: goto label_2c1a1c;
        case 0x2c1a20u: goto label_2c1a20;
        case 0x2c1a24u: goto label_2c1a24;
        case 0x2c1a28u: goto label_2c1a28;
        case 0x2c1a2cu: goto label_2c1a2c;
        case 0x2c1a30u: goto label_2c1a30;
        case 0x2c1a34u: goto label_2c1a34;
        case 0x2c1a38u: goto label_2c1a38;
        case 0x2c1a3cu: goto label_2c1a3c;
        case 0x2c1a40u: goto label_2c1a40;
        case 0x2c1a44u: goto label_2c1a44;
        case 0x2c1a48u: goto label_2c1a48;
        case 0x2c1a4cu: goto label_2c1a4c;
        case 0x2c1a50u: goto label_2c1a50;
        case 0x2c1a54u: goto label_2c1a54;
        case 0x2c1a58u: goto label_2c1a58;
        case 0x2c1a5cu: goto label_2c1a5c;
        case 0x2c1a60u: goto label_2c1a60;
        case 0x2c1a64u: goto label_2c1a64;
        case 0x2c1a68u: goto label_2c1a68;
        case 0x2c1a6cu: goto label_2c1a6c;
        case 0x2c1a70u: goto label_2c1a70;
        case 0x2c1a74u: goto label_2c1a74;
        case 0x2c1a78u: goto label_2c1a78;
        case 0x2c1a7cu: goto label_2c1a7c;
        case 0x2c1a80u: goto label_2c1a80;
        case 0x2c1a84u: goto label_2c1a84;
        case 0x2c1a88u: goto label_2c1a88;
        case 0x2c1a8cu: goto label_2c1a8c;
        case 0x2c1a90u: goto label_2c1a90;
        case 0x2c1a94u: goto label_2c1a94;
        case 0x2c1a98u: goto label_2c1a98;
        case 0x2c1a9cu: goto label_2c1a9c;
        case 0x2c1aa0u: goto label_2c1aa0;
        case 0x2c1aa4u: goto label_2c1aa4;
        case 0x2c1aa8u: goto label_2c1aa8;
        case 0x2c1aacu: goto label_2c1aac;
        case 0x2c1ab0u: goto label_2c1ab0;
        case 0x2c1ab4u: goto label_2c1ab4;
        case 0x2c1ab8u: goto label_2c1ab8;
        case 0x2c1abcu: goto label_2c1abc;
        case 0x2c1ac0u: goto label_2c1ac0;
        case 0x2c1ac4u: goto label_2c1ac4;
        case 0x2c1ac8u: goto label_2c1ac8;
        case 0x2c1accu: goto label_2c1acc;
        case 0x2c1ad0u: goto label_2c1ad0;
        case 0x2c1ad4u: goto label_2c1ad4;
        case 0x2c1ad8u: goto label_2c1ad8;
        case 0x2c1adcu: goto label_2c1adc;
        case 0x2c1ae0u: goto label_2c1ae0;
        case 0x2c1ae4u: goto label_2c1ae4;
        case 0x2c1ae8u: goto label_2c1ae8;
        case 0x2c1aecu: goto label_2c1aec;
        case 0x2c1af0u: goto label_2c1af0;
        case 0x2c1af4u: goto label_2c1af4;
        case 0x2c1af8u: goto label_2c1af8;
        case 0x2c1afcu: goto label_2c1afc;
        case 0x2c1b00u: goto label_2c1b00;
        case 0x2c1b04u: goto label_2c1b04;
        case 0x2c1b08u: goto label_2c1b08;
        case 0x2c1b0cu: goto label_2c1b0c;
        case 0x2c1b10u: goto label_2c1b10;
        case 0x2c1b14u: goto label_2c1b14;
        case 0x2c1b18u: goto label_2c1b18;
        case 0x2c1b1cu: goto label_2c1b1c;
        case 0x2c1b20u: goto label_2c1b20;
        case 0x2c1b24u: goto label_2c1b24;
        case 0x2c1b28u: goto label_2c1b28;
        case 0x2c1b2cu: goto label_2c1b2c;
        case 0x2c1b30u: goto label_2c1b30;
        case 0x2c1b34u: goto label_2c1b34;
        case 0x2c1b38u: goto label_2c1b38;
        case 0x2c1b3cu: goto label_2c1b3c;
        case 0x2c1b40u: goto label_2c1b40;
        case 0x2c1b44u: goto label_2c1b44;
        case 0x2c1b48u: goto label_2c1b48;
        case 0x2c1b4cu: goto label_2c1b4c;
        case 0x2c1b50u: goto label_2c1b50;
        case 0x2c1b54u: goto label_2c1b54;
        case 0x2c1b58u: goto label_2c1b58;
        case 0x2c1b5cu: goto label_2c1b5c;
        case 0x2c1b60u: goto label_2c1b60;
        case 0x2c1b64u: goto label_2c1b64;
        case 0x2c1b68u: goto label_2c1b68;
        case 0x2c1b6cu: goto label_2c1b6c;
        case 0x2c1b70u: goto label_2c1b70;
        case 0x2c1b74u: goto label_2c1b74;
        case 0x2c1b78u: goto label_2c1b78;
        case 0x2c1b7cu: goto label_2c1b7c;
        case 0x2c1b80u: goto label_2c1b80;
        case 0x2c1b84u: goto label_2c1b84;
        case 0x2c1b88u: goto label_2c1b88;
        case 0x2c1b8cu: goto label_2c1b8c;
        case 0x2c1b90u: goto label_2c1b90;
        case 0x2c1b94u: goto label_2c1b94;
        case 0x2c1b98u: goto label_2c1b98;
        case 0x2c1b9cu: goto label_2c1b9c;
        case 0x2c1ba0u: goto label_2c1ba0;
        case 0x2c1ba4u: goto label_2c1ba4;
        case 0x2c1ba8u: goto label_2c1ba8;
        case 0x2c1bacu: goto label_2c1bac;
        case 0x2c1bb0u: goto label_2c1bb0;
        case 0x2c1bb4u: goto label_2c1bb4;
        case 0x2c1bb8u: goto label_2c1bb8;
        case 0x2c1bbcu: goto label_2c1bbc;
        case 0x2c1bc0u: goto label_2c1bc0;
        case 0x2c1bc4u: goto label_2c1bc4;
        case 0x2c1bc8u: goto label_2c1bc8;
        case 0x2c1bccu: goto label_2c1bcc;
        case 0x2c1bd0u: goto label_2c1bd0;
        case 0x2c1bd4u: goto label_2c1bd4;
        case 0x2c1bd8u: goto label_2c1bd8;
        case 0x2c1bdcu: goto label_2c1bdc;
        case 0x2c1be0u: goto label_2c1be0;
        case 0x2c1be4u: goto label_2c1be4;
        case 0x2c1be8u: goto label_2c1be8;
        case 0x2c1becu: goto label_2c1bec;
        case 0x2c1bf0u: goto label_2c1bf0;
        case 0x2c1bf4u: goto label_2c1bf4;
        case 0x2c1bf8u: goto label_2c1bf8;
        case 0x2c1bfcu: goto label_2c1bfc;
        case 0x2c1c00u: goto label_2c1c00;
        case 0x2c1c04u: goto label_2c1c04;
        case 0x2c1c08u: goto label_2c1c08;
        case 0x2c1c0cu: goto label_2c1c0c;
        case 0x2c1c10u: goto label_2c1c10;
        case 0x2c1c14u: goto label_2c1c14;
        case 0x2c1c18u: goto label_2c1c18;
        case 0x2c1c1cu: goto label_2c1c1c;
        case 0x2c1c20u: goto label_2c1c20;
        case 0x2c1c24u: goto label_2c1c24;
        case 0x2c1c28u: goto label_2c1c28;
        case 0x2c1c2cu: goto label_2c1c2c;
        case 0x2c1c30u: goto label_2c1c30;
        case 0x2c1c34u: goto label_2c1c34;
        case 0x2c1c38u: goto label_2c1c38;
        case 0x2c1c3cu: goto label_2c1c3c;
        case 0x2c1c40u: goto label_2c1c40;
        case 0x2c1c44u: goto label_2c1c44;
        case 0x2c1c48u: goto label_2c1c48;
        case 0x2c1c4cu: goto label_2c1c4c;
        case 0x2c1c50u: goto label_2c1c50;
        case 0x2c1c54u: goto label_2c1c54;
        case 0x2c1c58u: goto label_2c1c58;
        case 0x2c1c5cu: goto label_2c1c5c;
        default: break;
    }

    ctx->pc = 0x2c19e0u;

label_2c19e0:
    // 0x2c19e0: 0x80788fc  j           func_1E23F0
label_2c19e4:
    if (ctx->pc == 0x2C19E4u) {
        ctx->pc = 0x2C19E8u;
        goto label_2c19e8;
    }
    ctx->pc = 0x2C19E0u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C19E8u;
label_2c19e8:
    // 0x2c19e8: 0x0  nop
    ctx->pc = 0x2c19e8u;
    // NOP
label_2c19ec:
    // 0x2c19ec: 0x0  nop
    ctx->pc = 0x2c19ecu;
    // NOP
label_2c19f0:
    // 0x2c19f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c19f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c19f4:
    // 0x2c19f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c19f8:
    // 0x2c19f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c19f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c19fc:
    // 0x2c19fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c19fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c1a00:
    // 0x2c1a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c1a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a04:
    // 0x2c1a04: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_2c1a08:
    if (ctx->pc == 0x2C1A08u) {
        ctx->pc = 0x2C1A08u;
            // 0x2c1a08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A0Cu;
        goto label_2c1a0c;
    }
    ctx->pc = 0x2C1A04u;
    {
        const bool branch_taken_0x2c1a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A04u;
            // 0x2c1a08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a04) {
            ctx->pc = 0x2C1AB8u;
            goto label_2c1ab8;
        }
    }
    ctx->pc = 0x2C1A0Cu;
label_2c1a0c:
    // 0x2c1a0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1a10:
    // 0x2c1a10: 0x24421660  addiu       $v0, $v0, 0x1660
    ctx->pc = 0x2c1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5728));
label_2c1a14:
    // 0x2c1a14: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c1a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c1a18:
    // 0x2c1a18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c1a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c1a1c:
    // 0x2c1a1c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c1a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c1a20:
    // 0x2c1a20: 0x320f809  jalr        $t9
label_2c1a24:
    if (ctx->pc == 0x2C1A24u) {
        ctx->pc = 0x2C1A28u;
        goto label_2c1a28;
    }
    ctx->pc = 0x2C1A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C1A28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1A28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A28u; }
            if (ctx->pc != 0x2C1A28u) { return; }
        }
        }
    }
    ctx->pc = 0x2C1A28u;
label_2c1a28:
    // 0x2c1a28: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2c1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2c1a2c:
    // 0x2c1a2c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_2c1a30:
    if (ctx->pc == 0x2C1A30u) {
        ctx->pc = 0x2C1A34u;
        goto label_2c1a34;
    }
    ctx->pc = 0x2C1A2Cu;
    {
        const bool branch_taken_0x2c1a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a2c) {
            ctx->pc = 0x2C1A7Cu;
            goto label_2c1a7c;
        }
    }
    ctx->pc = 0x2C1A34u;
label_2c1a34:
    // 0x2c1a34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c1a38:
    // 0x2c1a38: 0x2442cd90  addiu       $v0, $v0, -0x3270
    ctx->pc = 0x2c1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954384));
label_2c1a3c:
    // 0x2c1a3c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2c1a40:
    if (ctx->pc == 0x2C1A40u) {
        ctx->pc = 0x2C1A40u;
            // 0x2c1a40: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2C1A44u;
        goto label_2c1a44;
    }
    ctx->pc = 0x2C1A3Cu;
    {
        const bool branch_taken_0x2c1a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A3Cu;
            // 0x2c1a40: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a3c) {
            ctx->pc = 0x2C1A7Cu;
            goto label_2c1a7c;
        }
    }
    ctx->pc = 0x2C1A44u;
label_2c1a44:
    // 0x2c1a44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1a48:
    // 0x2c1a48: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2c1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2c1a4c:
    // 0x2c1a4c: 0xc0d37dc  jal         func_34DF70
label_2c1a50:
    if (ctx->pc == 0x2C1A50u) {
        ctx->pc = 0x2C1A50u;
            // 0x2c1a50: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2C1A54u;
        goto label_2c1a54;
    }
    ctx->pc = 0x2C1A4Cu;
    SET_GPR_U32(ctx, 31, 0x2C1A54u);
    ctx->pc = 0x2C1A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A4Cu;
            // 0x2c1a50: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A54u; }
        if (ctx->pc != 0x2C1A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A54u; }
        if (ctx->pc != 0x2C1A54u) { return; }
    }
    ctx->pc = 0x2C1A54u;
label_2c1a54:
    // 0x2c1a54: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x2c1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2c1a58:
    // 0x2c1a58: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2c1a5c:
    if (ctx->pc == 0x2C1A5Cu) {
        ctx->pc = 0x2C1A60u;
        goto label_2c1a60;
    }
    ctx->pc = 0x2C1A58u;
    {
        const bool branch_taken_0x2c1a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a58) {
            ctx->pc = 0x2C1A7Cu;
            goto label_2c1a7c;
        }
    }
    ctx->pc = 0x2C1A60u;
label_2c1a60:
    // 0x2c1a60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1a64:
    // 0x2c1a64: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2c1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2c1a68:
    // 0x2c1a68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c1a6c:
    if (ctx->pc == 0x2C1A6Cu) {
        ctx->pc = 0x2C1A6Cu;
            // 0x2c1a6c: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2C1A70u;
        goto label_2c1a70;
    }
    ctx->pc = 0x2C1A68u;
    {
        const bool branch_taken_0x2c1a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A68u;
            // 0x2c1a6c: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a68) {
            ctx->pc = 0x2C1A7Cu;
            goto label_2c1a7c;
        }
    }
    ctx->pc = 0x2C1A70u;
label_2c1a70:
    // 0x2c1a70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1a74:
    // 0x2c1a74: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c1a78:
    // 0x2c1a78: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2c1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_2c1a7c:
    // 0x2c1a7c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c1a80:
    if (ctx->pc == 0x2C1A80u) {
        ctx->pc = 0x2C1A80u;
            // 0x2c1a80: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C1A84u;
        goto label_2c1a84;
    }
    ctx->pc = 0x2C1A7Cu;
    {
        const bool branch_taken_0x2c1a7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a7c) {
            ctx->pc = 0x2C1A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A7Cu;
            // 0x2c1a80: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1AA4u;
            goto label_2c1aa4;
        }
    }
    ctx->pc = 0x2C1A84u;
label_2c1a84:
    // 0x2c1a84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1a88:
    // 0x2c1a88: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c1a8c:
    // 0x2c1a8c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c1a90:
    if (ctx->pc == 0x2C1A90u) {
        ctx->pc = 0x2C1A90u;
            // 0x2c1a90: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C1A94u;
        goto label_2c1a94;
    }
    ctx->pc = 0x2C1A8Cu;
    {
        const bool branch_taken_0x2c1a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A8Cu;
            // 0x2c1a90: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a8c) {
            ctx->pc = 0x2C1AA0u;
            goto label_2c1aa0;
        }
    }
    ctx->pc = 0x2C1A94u;
label_2c1a94:
    // 0x2c1a94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1a98:
    // 0x2c1a98: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c1a9c:
    // 0x2c1a9c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c1a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c1aa0:
    // 0x2c1aa0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c1aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c1aa4:
    // 0x2c1aa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c1aa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c1aa8:
    // 0x2c1aa8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c1aac:
    if (ctx->pc == 0x2C1AACu) {
        ctx->pc = 0x2C1AACu;
            // 0x2c1aac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1AB0u;
        goto label_2c1ab0;
    }
    ctx->pc = 0x2C1AA8u;
    {
        const bool branch_taken_0x2c1aa8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c1aa8) {
            ctx->pc = 0x2C1AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1AA8u;
            // 0x2c1aac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1ABCu;
            goto label_2c1abc;
        }
    }
    ctx->pc = 0x2C1AB0u;
label_2c1ab0:
    // 0x2c1ab0: 0xc0400a8  jal         func_1002A0
label_2c1ab4:
    if (ctx->pc == 0x2C1AB4u) {
        ctx->pc = 0x2C1AB4u;
            // 0x2c1ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1AB8u;
        goto label_2c1ab8;
    }
    ctx->pc = 0x2C1AB0u;
    SET_GPR_U32(ctx, 31, 0x2C1AB8u);
    ctx->pc = 0x2C1AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1AB0u;
            // 0x2c1ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1AB8u; }
        if (ctx->pc != 0x2C1AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1AB8u; }
        if (ctx->pc != 0x2C1AB8u) { return; }
    }
    ctx->pc = 0x2C1AB8u;
label_2c1ab8:
    // 0x2c1ab8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c1ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1abc:
    // 0x2c1abc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c1abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c1ac0:
    // 0x2c1ac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1ac4:
    // 0x2c1ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c1ac8:
    // 0x2c1ac8: 0x3e00008  jr          $ra
label_2c1acc:
    if (ctx->pc == 0x2C1ACCu) {
        ctx->pc = 0x2C1ACCu;
            // 0x2c1acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C1AD0u;
        goto label_2c1ad0;
    }
    ctx->pc = 0x2C1AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1AC8u;
            // 0x2c1acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1AD0u;
label_2c1ad0:
    // 0x2c1ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c1ad4:
    // 0x2c1ad4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1ad8:
    // 0x2c1ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c1ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c1adc:
    // 0x2c1adc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c1adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c1ae0:
    // 0x2c1ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c1ae4:
    // 0x2c1ae4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c1ae8:
    // 0x2c1ae8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c1aec:
    // 0x2c1aec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2c1af0:
    // 0x2c1af0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c1af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_2c1af4:
    // 0x2c1af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1af8:
    // 0x2c1af8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2c1afc:
    // 0x2c1afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c1afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c1b00:
    // 0x2c1b00: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c1b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2c1b04:
    // 0x2c1b04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c1b04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c1b08:
    // 0x2c1b08: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2c1b0c:
    // 0x2c1b0c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c1b0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2c1b10:
    // 0x2c1b10: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c1b10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_2c1b14:
    // 0x2c1b14: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c1b14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_2c1b18:
    // 0x2c1b18: 0xc04cbd8  jal         func_132F60
label_2c1b1c:
    if (ctx->pc == 0x2C1B1Cu) {
        ctx->pc = 0x2C1B1Cu;
            // 0x2c1b1c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2C1B20u;
        goto label_2c1b20;
    }
    ctx->pc = 0x2C1B18u;
    SET_GPR_U32(ctx, 31, 0x2C1B20u);
    ctx->pc = 0x2C1B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B18u;
            // 0x2c1b1c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B20u; }
        if (ctx->pc != 0x2C1B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B20u; }
        if (ctx->pc != 0x2C1B20u) { return; }
    }
    ctx->pc = 0x2C1B20u;
label_2c1b20:
    // 0x2c1b20: 0xc04c968  jal         func_1325A0
label_2c1b24:
    if (ctx->pc == 0x2C1B24u) {
        ctx->pc = 0x2C1B24u;
            // 0x2c1b24: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2C1B28u;
        goto label_2c1b28;
    }
    ctx->pc = 0x2C1B20u;
    SET_GPR_U32(ctx, 31, 0x2C1B28u);
    ctx->pc = 0x2C1B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B20u;
            // 0x2c1b24: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B28u; }
        if (ctx->pc != 0x2C1B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B28u; }
        if (ctx->pc != 0x2C1B28u) { return; }
    }
    ctx->pc = 0x2C1B28u;
label_2c1b28:
    // 0x2c1b28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c1b2c:
    // 0x2c1b2c: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x2c1b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
label_2c1b30:
    // 0x2c1b30: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2c1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2c1b34:
    // 0x2c1b34: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x2c1b34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_2c1b38:
    // 0x2c1b38: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2c1b38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_2c1b3c:
    // 0x2c1b3c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2c1b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_2c1b40:
    // 0x2c1b40: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2c1b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_2c1b44:
    // 0x2c1b44: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2c1b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2c1b48:
    // 0x2c1b48: 0x8c4a0788  lw          $t2, 0x788($v0)
    ctx->pc = 0x2c1b48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_2c1b4c:
    // 0x2c1b4c: 0x2529c560  addiu       $t1, $t1, -0x3AA0
    ctx->pc = 0x2c1b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952288));
label_2c1b50:
    // 0x2c1b50: 0x25081660  addiu       $t0, $t0, 0x1660
    ctx->pc = 0x2c1b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5728));
label_2c1b54:
    // 0x2c1b54: 0x24e7cfe0  addiu       $a3, $a3, -0x3020
    ctx->pc = 0x2c1b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
label_2c1b58:
    // 0x2c1b58: 0x24c624a0  addiu       $a2, $a2, 0x24A0
    ctx->pc = 0x2c1b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9376));
label_2c1b5c:
    // 0x2c1b5c: 0x24a52460  addiu       $a1, $a1, 0x2460
    ctx->pc = 0x2c1b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9312));
label_2c1b60:
    // 0x2c1b60: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2c1b60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_2c1b64:
    // 0x2c1b64: 0x2484cd90  addiu       $a0, $a0, -0x3270
    ctx->pc = 0x2c1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954384));
label_2c1b68:
    // 0x2c1b68: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x2c1b68u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2c1b6c:
    // 0x2c1b6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c1b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2c1b70:
    // 0x2c1b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c1b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c1b74:
    // 0x2c1b74: 0xa209004d  sb          $t1, 0x4D($s0)
    ctx->pc = 0x2c1b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 9));
label_2c1b78:
    // 0x2c1b78: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2c1b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_2c1b7c:
    // 0x2c1b7c: 0xae070050  sw          $a3, 0x50($s0)
    ctx->pc = 0x2c1b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 7));
label_2c1b80:
    // 0x2c1b80: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x2c1b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
label_2c1b84:
    // 0x2c1b84: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x2c1b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
label_2c1b88:
    // 0x2c1b88: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2c1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_2c1b8c:
    // 0x2c1b8c: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x2c1b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
label_2c1b90:
    // 0x2c1b90: 0xae100058  sw          $s0, 0x58($s0)
    ctx->pc = 0x2c1b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 16));
label_2c1b94:
    // 0x2c1b94: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2c1b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_2c1b98:
    // 0x2c1b98: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2c1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_2c1b9c:
    // 0x2c1b9c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2c1b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_2c1ba0:
    // 0x2c1ba0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2c1ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_2c1ba4:
    // 0x2c1ba4: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x2c1ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_2c1ba8:
    // 0x2c1ba8: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2c1ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_2c1bac:
    // 0x2c1bac: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2c1bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_2c1bb0:
    // 0x2c1bb0: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2c1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_2c1bb4:
    // 0x2c1bb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c1bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1bb8:
    // 0x2c1bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c1bbc:
    // 0x2c1bbc: 0x3e00008  jr          $ra
label_2c1bc0:
    if (ctx->pc == 0x2C1BC0u) {
        ctx->pc = 0x2C1BC0u;
            // 0x2c1bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C1BC4u;
        goto label_2c1bc4;
    }
    ctx->pc = 0x2C1BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BBCu;
            // 0x2c1bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1BC4u;
label_2c1bc4:
    // 0x2c1bc4: 0x0  nop
    ctx->pc = 0x2c1bc4u;
    // NOP
label_2c1bc8:
    // 0x2c1bc8: 0x0  nop
    ctx->pc = 0x2c1bc8u;
    // NOP
label_2c1bcc:
    // 0x2c1bcc: 0x0  nop
    ctx->pc = 0x2c1bccu;
    // NOP
label_2c1bd0:
    // 0x2c1bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c1bd4:
    // 0x2c1bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c1bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c1bd8:
    // 0x2c1bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c1bdc:
    // 0x2c1bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c1be0:
    // 0x2c1be0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c1be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c1be4:
    // 0x2c1be4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_2c1be8:
    if (ctx->pc == 0x2C1BE8u) {
        ctx->pc = 0x2C1BE8u;
            // 0x2c1be8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BECu;
        goto label_2c1bec;
    }
    ctx->pc = 0x2C1BE4u;
    {
        const bool branch_taken_0x2c1be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BE4u;
            // 0x2c1be8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1be4) {
            ctx->pc = 0x2C1C48u;
            goto label_2c1c48;
        }
    }
    ctx->pc = 0x2C1BECu;
label_2c1bec:
    // 0x2c1bec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c1becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c1bf0:
    // 0x2c1bf0: 0x2442cd90  addiu       $v0, $v0, -0x3270
    ctx->pc = 0x2c1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954384));
label_2c1bf4:
    // 0x2c1bf4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2c1bf8:
    if (ctx->pc == 0x2C1BF8u) {
        ctx->pc = 0x2C1BF8u;
            // 0x2c1bf8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C1BFCu;
        goto label_2c1bfc;
    }
    ctx->pc = 0x2C1BF4u;
    {
        const bool branch_taken_0x2c1bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BF4u;
            // 0x2c1bf8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bf4) {
            ctx->pc = 0x2C1C30u;
            goto label_2c1c30;
        }
    }
    ctx->pc = 0x2C1BFCu;
label_2c1bfc:
    // 0x2c1bfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1c00:
    // 0x2c1c00: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2c1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2c1c04:
    // 0x2c1c04: 0xc0d37dc  jal         func_34DF70
label_2c1c08:
    if (ctx->pc == 0x2C1C08u) {
        ctx->pc = 0x2C1C08u;
            // 0x2c1c08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C1C0Cu;
        goto label_2c1c0c;
    }
    ctx->pc = 0x2C1C04u;
    SET_GPR_U32(ctx, 31, 0x2C1C0Cu);
    ctx->pc = 0x2C1C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C04u;
            // 0x2c1c08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C0Cu; }
        if (ctx->pc != 0x2C1C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C0Cu; }
        if (ctx->pc != 0x2C1C0Cu) { return; }
    }
    ctx->pc = 0x2C1C0Cu;
label_2c1c0c:
    // 0x2c1c0c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_2c1c10:
    if (ctx->pc == 0x2C1C10u) {
        ctx->pc = 0x2C1C10u;
            // 0x2c1c10: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2C1C14u;
        goto label_2c1c14;
    }
    ctx->pc = 0x2C1C0Cu;
    {
        const bool branch_taken_0x2c1c0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1c0c) {
            ctx->pc = 0x2C1C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C0Cu;
            // 0x2c1c10: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1C34u;
            goto label_2c1c34;
        }
    }
    ctx->pc = 0x2C1C14u;
label_2c1c14:
    // 0x2c1c14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1c18:
    // 0x2c1c18: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2c1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2c1c1c:
    // 0x2c1c1c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2c1c20:
    if (ctx->pc == 0x2C1C20u) {
        ctx->pc = 0x2C1C20u;
            // 0x2c1c20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C1C24u;
        goto label_2c1c24;
    }
    ctx->pc = 0x2C1C1Cu;
    {
        const bool branch_taken_0x2c1c1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C1Cu;
            // 0x2c1c20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c1c) {
            ctx->pc = 0x2C1C30u;
            goto label_2c1c30;
        }
    }
    ctx->pc = 0x2C1C24u;
label_2c1c24:
    // 0x2c1c24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1c28:
    // 0x2c1c28: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c1c2c:
    // 0x2c1c2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c1c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c1c30:
    // 0x2c1c30: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c1c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c1c34:
    // 0x2c1c34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c1c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c1c38:
    // 0x2c1c38: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c1c3c:
    if (ctx->pc == 0x2C1C3Cu) {
        ctx->pc = 0x2C1C3Cu;
            // 0x2c1c3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C40u;
        goto label_2c1c40;
    }
    ctx->pc = 0x2C1C38u;
    {
        const bool branch_taken_0x2c1c38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c1c38) {
            ctx->pc = 0x2C1C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C38u;
            // 0x2c1c3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1C4Cu;
            goto label_2c1c4c;
        }
    }
    ctx->pc = 0x2C1C40u;
label_2c1c40:
    // 0x2c1c40: 0xc0400a8  jal         func_1002A0
label_2c1c44:
    if (ctx->pc == 0x2C1C44u) {
        ctx->pc = 0x2C1C44u;
            // 0x2c1c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C48u;
        goto label_2c1c48;
    }
    ctx->pc = 0x2C1C40u;
    SET_GPR_U32(ctx, 31, 0x2C1C48u);
    ctx->pc = 0x2C1C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C40u;
            // 0x2c1c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C48u; }
        if (ctx->pc != 0x2C1C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C48u; }
        if (ctx->pc != 0x2C1C48u) { return; }
    }
    ctx->pc = 0x2C1C48u;
label_2c1c48:
    // 0x2c1c48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c1c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c4c:
    // 0x2c1c4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c1c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c1c50:
    // 0x2c1c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1c54:
    // 0x2c1c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c1c58:
    // 0x2c1c58: 0x3e00008  jr          $ra
label_2c1c5c:
    if (ctx->pc == 0x2C1C5Cu) {
        ctx->pc = 0x2C1C5Cu;
            // 0x2c1c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C1C60u;
        goto label_fallthrough_0x2c1c58;
    }
    ctx->pc = 0x2C1C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C58u;
            // 0x2c1c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c1c58:
    ctx->pc = 0x2C1C60u;
}
