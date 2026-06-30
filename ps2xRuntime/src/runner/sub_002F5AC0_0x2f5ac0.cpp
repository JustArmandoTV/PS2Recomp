#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5AC0
// Address: 0x2f5ac0 - 0x2f5cd0
void sub_002F5AC0_0x2f5ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5AC0_0x2f5ac0");
#endif

    switch (ctx->pc) {
        case 0x2f5ac0u: goto label_2f5ac0;
        case 0x2f5ac4u: goto label_2f5ac4;
        case 0x2f5ac8u: goto label_2f5ac8;
        case 0x2f5accu: goto label_2f5acc;
        case 0x2f5ad0u: goto label_2f5ad0;
        case 0x2f5ad4u: goto label_2f5ad4;
        case 0x2f5ad8u: goto label_2f5ad8;
        case 0x2f5adcu: goto label_2f5adc;
        case 0x2f5ae0u: goto label_2f5ae0;
        case 0x2f5ae4u: goto label_2f5ae4;
        case 0x2f5ae8u: goto label_2f5ae8;
        case 0x2f5aecu: goto label_2f5aec;
        case 0x2f5af0u: goto label_2f5af0;
        case 0x2f5af4u: goto label_2f5af4;
        case 0x2f5af8u: goto label_2f5af8;
        case 0x2f5afcu: goto label_2f5afc;
        case 0x2f5b00u: goto label_2f5b00;
        case 0x2f5b04u: goto label_2f5b04;
        case 0x2f5b08u: goto label_2f5b08;
        case 0x2f5b0cu: goto label_2f5b0c;
        case 0x2f5b10u: goto label_2f5b10;
        case 0x2f5b14u: goto label_2f5b14;
        case 0x2f5b18u: goto label_2f5b18;
        case 0x2f5b1cu: goto label_2f5b1c;
        case 0x2f5b20u: goto label_2f5b20;
        case 0x2f5b24u: goto label_2f5b24;
        case 0x2f5b28u: goto label_2f5b28;
        case 0x2f5b2cu: goto label_2f5b2c;
        case 0x2f5b30u: goto label_2f5b30;
        case 0x2f5b34u: goto label_2f5b34;
        case 0x2f5b38u: goto label_2f5b38;
        case 0x2f5b3cu: goto label_2f5b3c;
        case 0x2f5b40u: goto label_2f5b40;
        case 0x2f5b44u: goto label_2f5b44;
        case 0x2f5b48u: goto label_2f5b48;
        case 0x2f5b4cu: goto label_2f5b4c;
        case 0x2f5b50u: goto label_2f5b50;
        case 0x2f5b54u: goto label_2f5b54;
        case 0x2f5b58u: goto label_2f5b58;
        case 0x2f5b5cu: goto label_2f5b5c;
        case 0x2f5b60u: goto label_2f5b60;
        case 0x2f5b64u: goto label_2f5b64;
        case 0x2f5b68u: goto label_2f5b68;
        case 0x2f5b6cu: goto label_2f5b6c;
        case 0x2f5b70u: goto label_2f5b70;
        case 0x2f5b74u: goto label_2f5b74;
        case 0x2f5b78u: goto label_2f5b78;
        case 0x2f5b7cu: goto label_2f5b7c;
        case 0x2f5b80u: goto label_2f5b80;
        case 0x2f5b84u: goto label_2f5b84;
        case 0x2f5b88u: goto label_2f5b88;
        case 0x2f5b8cu: goto label_2f5b8c;
        case 0x2f5b90u: goto label_2f5b90;
        case 0x2f5b94u: goto label_2f5b94;
        case 0x2f5b98u: goto label_2f5b98;
        case 0x2f5b9cu: goto label_2f5b9c;
        case 0x2f5ba0u: goto label_2f5ba0;
        case 0x2f5ba4u: goto label_2f5ba4;
        case 0x2f5ba8u: goto label_2f5ba8;
        case 0x2f5bacu: goto label_2f5bac;
        case 0x2f5bb0u: goto label_2f5bb0;
        case 0x2f5bb4u: goto label_2f5bb4;
        case 0x2f5bb8u: goto label_2f5bb8;
        case 0x2f5bbcu: goto label_2f5bbc;
        case 0x2f5bc0u: goto label_2f5bc0;
        case 0x2f5bc4u: goto label_2f5bc4;
        case 0x2f5bc8u: goto label_2f5bc8;
        case 0x2f5bccu: goto label_2f5bcc;
        case 0x2f5bd0u: goto label_2f5bd0;
        case 0x2f5bd4u: goto label_2f5bd4;
        case 0x2f5bd8u: goto label_2f5bd8;
        case 0x2f5bdcu: goto label_2f5bdc;
        case 0x2f5be0u: goto label_2f5be0;
        case 0x2f5be4u: goto label_2f5be4;
        case 0x2f5be8u: goto label_2f5be8;
        case 0x2f5becu: goto label_2f5bec;
        case 0x2f5bf0u: goto label_2f5bf0;
        case 0x2f5bf4u: goto label_2f5bf4;
        case 0x2f5bf8u: goto label_2f5bf8;
        case 0x2f5bfcu: goto label_2f5bfc;
        case 0x2f5c00u: goto label_2f5c00;
        case 0x2f5c04u: goto label_2f5c04;
        case 0x2f5c08u: goto label_2f5c08;
        case 0x2f5c0cu: goto label_2f5c0c;
        case 0x2f5c10u: goto label_2f5c10;
        case 0x2f5c14u: goto label_2f5c14;
        case 0x2f5c18u: goto label_2f5c18;
        case 0x2f5c1cu: goto label_2f5c1c;
        case 0x2f5c20u: goto label_2f5c20;
        case 0x2f5c24u: goto label_2f5c24;
        case 0x2f5c28u: goto label_2f5c28;
        case 0x2f5c2cu: goto label_2f5c2c;
        case 0x2f5c30u: goto label_2f5c30;
        case 0x2f5c34u: goto label_2f5c34;
        case 0x2f5c38u: goto label_2f5c38;
        case 0x2f5c3cu: goto label_2f5c3c;
        case 0x2f5c40u: goto label_2f5c40;
        case 0x2f5c44u: goto label_2f5c44;
        case 0x2f5c48u: goto label_2f5c48;
        case 0x2f5c4cu: goto label_2f5c4c;
        case 0x2f5c50u: goto label_2f5c50;
        case 0x2f5c54u: goto label_2f5c54;
        case 0x2f5c58u: goto label_2f5c58;
        case 0x2f5c5cu: goto label_2f5c5c;
        case 0x2f5c60u: goto label_2f5c60;
        case 0x2f5c64u: goto label_2f5c64;
        case 0x2f5c68u: goto label_2f5c68;
        case 0x2f5c6cu: goto label_2f5c6c;
        case 0x2f5c70u: goto label_2f5c70;
        case 0x2f5c74u: goto label_2f5c74;
        case 0x2f5c78u: goto label_2f5c78;
        case 0x2f5c7cu: goto label_2f5c7c;
        case 0x2f5c80u: goto label_2f5c80;
        case 0x2f5c84u: goto label_2f5c84;
        case 0x2f5c88u: goto label_2f5c88;
        case 0x2f5c8cu: goto label_2f5c8c;
        case 0x2f5c90u: goto label_2f5c90;
        case 0x2f5c94u: goto label_2f5c94;
        case 0x2f5c98u: goto label_2f5c98;
        case 0x2f5c9cu: goto label_2f5c9c;
        case 0x2f5ca0u: goto label_2f5ca0;
        case 0x2f5ca4u: goto label_2f5ca4;
        case 0x2f5ca8u: goto label_2f5ca8;
        case 0x2f5cacu: goto label_2f5cac;
        case 0x2f5cb0u: goto label_2f5cb0;
        case 0x2f5cb4u: goto label_2f5cb4;
        case 0x2f5cb8u: goto label_2f5cb8;
        case 0x2f5cbcu: goto label_2f5cbc;
        case 0x2f5cc0u: goto label_2f5cc0;
        case 0x2f5cc4u: goto label_2f5cc4;
        case 0x2f5cc8u: goto label_2f5cc8;
        case 0x2f5cccu: goto label_2f5ccc;
        default: break;
    }

    ctx->pc = 0x2f5ac0u;

label_2f5ac0:
    // 0x2f5ac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f5ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f5ac4:
    // 0x2f5ac4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f5ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f5ac8:
    // 0x2f5ac8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f5ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f5acc:
    // 0x2f5acc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f5accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f5ad0:
    // 0x2f5ad0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f5ad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ad4:
    // 0x2f5ad4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f5ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f5ad8:
    // 0x2f5ad8: 0xb42021  addu        $a0, $a1, $s4
    ctx->pc = 0x2f5ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2f5adc:
    // 0x2f5adc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f5adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f5ae0:
    // 0x2f5ae0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f5ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f5ae4:
    // 0x2f5ae4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f5ae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f5ae8:
    // 0x2f5ae8: 0x90830018  lbu         $v1, 0x18($a0)
    ctx->pc = 0x2f5ae8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_2f5aec:
    // 0x2f5aec: 0x5060006e  beql        $v1, $zero, . + 4 + (0x6E << 2)
label_2f5af0:
    if (ctx->pc == 0x2F5AF0u) {
        ctx->pc = 0x2F5AF0u;
            // 0x2f5af0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2F5AF4u;
        goto label_2f5af4;
    }
    ctx->pc = 0x2F5AECu;
    {
        const bool branch_taken_0x2f5aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5aec) {
            ctx->pc = 0x2F5AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5AECu;
            // 0x2f5af0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5CA8u;
            goto label_2f5ca8;
        }
    }
    ctx->pc = 0x2F5AF4u;
label_2f5af4:
    // 0x2f5af4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2f5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2f5af8:
    // 0x2f5af8: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x2f5af8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
label_2f5afc:
    // 0x2f5afc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2f5afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2f5b00:
    // 0x2f5b00: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2f5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f5b04:
    // 0x2f5b04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f5b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f5b08:
    // 0x2f5b08: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f5b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f5b0c:
    // 0x2f5b0c: 0x320f809  jalr        $t9
label_2f5b10:
    if (ctx->pc == 0x2F5B10u) {
        ctx->pc = 0x2F5B14u;
        goto label_2f5b14;
    }
    ctx->pc = 0x2F5B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F5B14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F5B14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B14u; }
            if (ctx->pc != 0x2F5B14u) { return; }
        }
        }
    }
    ctx->pc = 0x2F5B14u;
label_2f5b14:
    // 0x2f5b14: 0xc0bd73c  jal         func_2F5CF0
label_2f5b18:
    if (ctx->pc == 0x2F5B18u) {
        ctx->pc = 0x2F5B18u;
            // 0x2f5b18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B1Cu;
        goto label_2f5b1c;
    }
    ctx->pc = 0x2F5B14u;
    SET_GPR_U32(ctx, 31, 0x2F5B1Cu);
    ctx->pc = 0x2F5B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B14u;
            // 0x2f5b18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B1Cu; }
        if (ctx->pc != 0x2F5B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B1Cu; }
        if (ctx->pc != 0x2F5B1Cu) { return; }
    }
    ctx->pc = 0x2F5B1Cu;
label_2f5b1c:
    // 0x2f5b1c: 0x8e900104  lw          $s0, 0x104($s4)
    ctx->pc = 0x2f5b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f5b20:
    // 0x2f5b20: 0x268400e8  addiu       $a0, $s4, 0xE8
    ctx->pc = 0x2f5b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 232));
label_2f5b24:
    // 0x2f5b24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5b28:
    // 0x2f5b28: 0xc04a576  jal         func_1295D8
label_2f5b2c:
    if (ctx->pc == 0x2F5B2Cu) {
        ctx->pc = 0x2F5B2Cu;
            // 0x2f5b2c: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x2F5B30u;
        goto label_2f5b30;
    }
    ctx->pc = 0x2F5B28u;
    SET_GPR_U32(ctx, 31, 0x2F5B30u);
    ctx->pc = 0x2F5B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B28u;
            // 0x2f5b2c: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B30u; }
        if (ctx->pc != 0x2F5B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B30u; }
        if (ctx->pc != 0x2F5B30u) { return; }
    }
    ctx->pc = 0x2F5B30u;
label_2f5b30:
    // 0x2f5b30: 0xc0775b8  jal         func_1DD6E0
label_2f5b34:
    if (ctx->pc == 0x2F5B34u) {
        ctx->pc = 0x2F5B34u;
            // 0x2f5b34: 0xae900104  sw          $s0, 0x104($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 16));
        ctx->pc = 0x2F5B38u;
        goto label_2f5b38;
    }
    ctx->pc = 0x2F5B30u;
    SET_GPR_U32(ctx, 31, 0x2F5B38u);
    ctx->pc = 0x2F5B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B30u;
            // 0x2f5b34: 0xae900104  sw          $s0, 0x104($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B38u; }
        if (ctx->pc != 0x2F5B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B38u; }
        if (ctx->pc != 0x2F5B38u) { return; }
    }
    ctx->pc = 0x2F5B38u;
label_2f5b38:
    // 0x2f5b38: 0xc0775b4  jal         func_1DD6D0
label_2f5b3c:
    if (ctx->pc == 0x2F5B3Cu) {
        ctx->pc = 0x2F5B3Cu;
            // 0x2f5b3c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2F5B40u;
        goto label_2f5b40;
    }
    ctx->pc = 0x2F5B38u;
    SET_GPR_U32(ctx, 31, 0x2F5B40u);
    ctx->pc = 0x2F5B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B38u;
            // 0x2f5b3c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B40u; }
        if (ctx->pc != 0x2F5B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B40u; }
        if (ctx->pc != 0x2F5B40u) { return; }
    }
    ctx->pc = 0x2F5B40u;
label_2f5b40:
    // 0x2f5b40: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x2f5b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_2f5b44:
    // 0x2f5b44: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f5b44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2f5b48:
    // 0x2f5b48: 0x8e900054  lw          $s0, 0x54($s4)
    ctx->pc = 0x2f5b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_2f5b4c:
    // 0x2f5b4c: 0xc077570  jal         func_1DD5C0
label_2f5b50:
    if (ctx->pc == 0x2F5B50u) {
        ctx->pc = 0x2F5B50u;
            // 0x2f5b50: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B54u;
        goto label_2f5b54;
    }
    ctx->pc = 0x2F5B4Cu;
    SET_GPR_U32(ctx, 31, 0x2F5B54u);
    ctx->pc = 0x2F5B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B4Cu;
            // 0x2f5b50: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B54u; }
        if (ctx->pc != 0x2F5B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B54u; }
        if (ctx->pc != 0x2F5B54u) { return; }
    }
    ctx->pc = 0x2F5B54u;
label_2f5b54:
    // 0x2f5b54: 0xc0bd738  jal         func_2F5CE0
label_2f5b58:
    if (ctx->pc == 0x2F5B58u) {
        ctx->pc = 0x2F5B58u;
            // 0x2f5b58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B5Cu;
        goto label_2f5b5c;
    }
    ctx->pc = 0x2F5B54u;
    SET_GPR_U32(ctx, 31, 0x2F5B5Cu);
    ctx->pc = 0x2F5B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B54u;
            // 0x2f5b58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE0u;
    if (runtime->hasFunction(0x2F5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B5Cu; }
        if (ctx->pc != 0x2F5B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CE0_0x2f5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B5Cu; }
        if (ctx->pc != 0x2F5B5Cu) { return; }
    }
    ctx->pc = 0x2F5B5Cu;
label_2f5b5c:
    // 0x2f5b5c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2f5b60:
    if (ctx->pc == 0x2F5B60u) {
        ctx->pc = 0x2F5B60u;
            // 0x2f5b60: 0x2602ffcf  addiu       $v0, $s0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967247));
        ctx->pc = 0x2F5B64u;
        goto label_2f5b64;
    }
    ctx->pc = 0x2F5B5Cu;
    {
        const bool branch_taken_0x2f5b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b5c) {
            ctx->pc = 0x2F5B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B5Cu;
            // 0x2f5b60: 0x2602ffcf  addiu       $v0, $s0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967247));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5B78u;
            goto label_2f5b78;
        }
    }
    ctx->pc = 0x2F5B64u;
label_2f5b64:
    // 0x2f5b64: 0xc0772ec  jal         func_1DCBB0
label_2f5b68:
    if (ctx->pc == 0x2F5B68u) {
        ctx->pc = 0x2F5B68u;
            // 0x2f5b68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B6Cu;
        goto label_2f5b6c;
    }
    ctx->pc = 0x2F5B64u;
    SET_GPR_U32(ctx, 31, 0x2F5B6Cu);
    ctx->pc = 0x2F5B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B64u;
            // 0x2f5b68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB0u;
    if (runtime->hasFunction(0x1DCBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B6Cu; }
        if (ctx->pc != 0x2F5B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBB0_0x1dcbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B6Cu; }
        if (ctx->pc != 0x2F5B6Cu) { return; }
    }
    ctx->pc = 0x2F5B6Cu;
label_2f5b6c:
    // 0x2f5b6c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2f5b70:
    if (ctx->pc == 0x2F5B70u) {
        ctx->pc = 0x2F5B70u;
            // 0x2f5b70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B74u;
        goto label_2f5b74;
    }
    ctx->pc = 0x2F5B6Cu;
    {
        const bool branch_taken_0x2f5b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b6c) {
            ctx->pc = 0x2F5B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5B6Cu;
            // 0x2f5b70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5B8Cu;
            goto label_2f5b8c;
        }
    }
    ctx->pc = 0x2F5B74u;
label_2f5b74:
    // 0x2f5b74: 0x2602ffcf  addiu       $v0, $s0, -0x31
    ctx->pc = 0x2f5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967247));
label_2f5b78:
    // 0x2f5b78: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2f5b78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f5b7c:
    // 0x2f5b7c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2f5b80:
    if (ctx->pc == 0x2F5B80u) {
        ctx->pc = 0x2F5B84u;
        goto label_2f5b84;
    }
    ctx->pc = 0x2F5B7Cu;
    {
        const bool branch_taken_0x2f5b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b7c) {
            ctx->pc = 0x2F5B88u;
            goto label_2f5b88;
        }
    }
    ctx->pc = 0x2F5B84u;
label_2f5b84:
    // 0x2f5b84: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x2f5b84u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2f5b88:
    // 0x2f5b88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f5b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f5b8c:
    // 0x2f5b8c: 0xc0bd734  jal         func_2F5CD0
label_2f5b90:
    if (ctx->pc == 0x2F5B90u) {
        ctx->pc = 0x2F5B94u;
        goto label_2f5b94;
    }
    ctx->pc = 0x2F5B8Cu;
    SET_GPR_U32(ctx, 31, 0x2F5B94u);
    ctx->pc = 0x2F5CD0u;
    if (runtime->hasFunction(0x2F5CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B94u; }
        if (ctx->pc != 0x2F5B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CD0_0x2f5cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5B94u; }
        if (ctx->pc != 0x2F5B94u) { return; }
    }
    ctx->pc = 0x2F5B94u;
label_2f5b94:
    // 0x2f5b94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f5b98:
    // 0x2f5b98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f5b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f5b9c:
    // 0x2f5b9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f5ba0:
    // 0x2f5ba0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f5ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5ba4:
    // 0x2f5ba4: 0xc0bd734  jal         func_2F5CD0
label_2f5ba8:
    if (ctx->pc == 0x2F5BA8u) {
        ctx->pc = 0x2F5BA8u;
            // 0x2f5ba8: 0xa2820108  sb          $v0, 0x108($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 264), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2F5BACu;
        goto label_2f5bac;
    }
    ctx->pc = 0x2F5BA4u;
    SET_GPR_U32(ctx, 31, 0x2F5BACu);
    ctx->pc = 0x2F5BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5BA4u;
            // 0x2f5ba8: 0xa2820108  sb          $v0, 0x108($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 264), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CD0u;
    if (runtime->hasFunction(0x2F5CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5BACu; }
        if (ctx->pc != 0x2F5BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CD0_0x2f5cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5BACu; }
        if (ctx->pc != 0x2F5BACu) { return; }
    }
    ctx->pc = 0x2F5BACu;
label_2f5bac:
    // 0x2f5bac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f5bb0:
    // 0x2f5bb0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2f5bb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f5bb4:
    // 0x2f5bb4: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
label_2f5bb8:
    if (ctx->pc == 0x2F5BB8u) {
        ctx->pc = 0x2F5BBCu;
        goto label_2f5bbc;
    }
    ctx->pc = 0x2F5BB4u;
    {
        const bool branch_taken_0x2f5bb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5bb4) {
            ctx->pc = 0x2F5C98u;
            goto label_2f5c98;
        }
    }
    ctx->pc = 0x2F5BBCu;
label_2f5bbc:
    // 0x2f5bbc: 0x26910004  addiu       $s1, $s4, 0x4
    ctx->pc = 0x2f5bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2f5bc0:
    // 0x2f5bc0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2f5bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f5bc4:
    // 0x2f5bc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f5bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f5bc8:
    // 0x2f5bc8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2f5bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2f5bcc:
    // 0x2f5bcc: 0x320f809  jalr        $t9
label_2f5bd0:
    if (ctx->pc == 0x2F5BD0u) {
        ctx->pc = 0x2F5BD4u;
        goto label_2f5bd4;
    }
    ctx->pc = 0x2F5BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F5BD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F5BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F5BD4u; }
            if (ctx->pc != 0x2F5BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F5BD4u;
label_2f5bd4:
    // 0x2f5bd4: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x2f5bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_2f5bd8:
    // 0x2f5bd8: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x2f5bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2f5bdc:
    // 0x2f5bdc: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x2f5bdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2f5be0:
    // 0x2f5be0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2f5be4:
    if (ctx->pc == 0x2F5BE4u) {
        ctx->pc = 0x2F5BE8u;
        goto label_2f5be8;
    }
    ctx->pc = 0x2F5BE0u;
    {
        const bool branch_taken_0x2f5be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5be0) {
            ctx->pc = 0x2F5C40u;
            goto label_2f5c40;
        }
    }
    ctx->pc = 0x2F5BE8u;
label_2f5be8:
    // 0x2f5be8: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x2f5be8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2f5bec:
    // 0x2f5bec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f5bf0:
    if (ctx->pc == 0x2F5BF0u) {
        ctx->pc = 0x2F5BF4u;
        goto label_2f5bf4;
    }
    ctx->pc = 0x2F5BECu;
    {
        const bool branch_taken_0x2f5bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5bec) {
            ctx->pc = 0x2F5C00u;
            goto label_2f5c00;
        }
    }
    ctx->pc = 0x2F5BF4u;
label_2f5bf4:
    // 0x2f5bf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f5bf8:
    // 0x2f5bf8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2f5bfc:
    if (ctx->pc == 0x2F5BFCu) {
        ctx->pc = 0x2F5BFCu;
            // 0x2f5bfc: 0xae2200e4  sw          $v0, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
        ctx->pc = 0x2F5C00u;
        goto label_2f5c00;
    }
    ctx->pc = 0x2F5BF8u;
    {
        const bool branch_taken_0x2f5bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5BF8u;
            // 0x2f5bfc: 0xae2200e4  sw          $v0, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5bf8) {
            ctx->pc = 0x2F5C78u;
            goto label_2f5c78;
        }
    }
    ctx->pc = 0x2F5C00u;
label_2f5c00:
    // 0x2f5c00: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
label_2f5c04:
    if (ctx->pc == 0x2F5C04u) {
        ctx->pc = 0x2F5C04u;
            // 0x2f5c04: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x2F5C08u;
        goto label_2f5c08;
    }
    ctx->pc = 0x2F5C00u;
    {
        const bool branch_taken_0x2f5c00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C00u;
            // 0x2f5c04: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c00) {
            ctx->pc = 0x2F5C78u;
            goto label_2f5c78;
        }
    }
    ctx->pc = 0x2F5C08u;
label_2f5c08:
    // 0x2f5c08: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2f5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2f5c0c:
    // 0x2f5c0c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_2f5c10:
    if (ctx->pc == 0x2F5C10u) {
        ctx->pc = 0x2F5C10u;
            // 0x2f5c10: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2F5C14u;
        goto label_2f5c14;
    }
    ctx->pc = 0x2F5C0Cu;
    {
        const bool branch_taken_0x2f5c0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C0Cu;
            // 0x2f5c10: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c0c) {
            ctx->pc = 0x2F5C30u;
            goto label_2f5c30;
        }
    }
    ctx->pc = 0x2F5C14u;
label_2f5c14:
    // 0x2f5c14: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2f5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2f5c18:
    // 0x2f5c18: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2f5c1c:
    if (ctx->pc == 0x2F5C1Cu) {
        ctx->pc = 0x2F5C20u;
        goto label_2f5c20;
    }
    ctx->pc = 0x2F5C18u;
    {
        const bool branch_taken_0x2f5c18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5c18) {
            ctx->pc = 0x2F5C28u;
            goto label_2f5c28;
        }
    }
    ctx->pc = 0x2F5C20u;
label_2f5c20:
    // 0x2f5c20: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f5c24:
    if (ctx->pc == 0x2F5C24u) {
        ctx->pc = 0x2F5C28u;
        goto label_2f5c28;
    }
    ctx->pc = 0x2F5C20u;
    {
        const bool branch_taken_0x2f5c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5c20) {
            ctx->pc = 0x2F5C38u;
            goto label_2f5c38;
        }
    }
    ctx->pc = 0x2F5C28u;
label_2f5c28:
    // 0x2f5c28: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f5c2c:
    if (ctx->pc == 0x2F5C2Cu) {
        ctx->pc = 0x2F5C2Cu;
            // 0x2f5c2c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2F5C30u;
        goto label_2f5c30;
    }
    ctx->pc = 0x2F5C28u;
    {
        const bool branch_taken_0x2f5c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C28u;
            // 0x2f5c2c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c28) {
            ctx->pc = 0x2F5C38u;
            goto label_2f5c38;
        }
    }
    ctx->pc = 0x2F5C30u;
label_2f5c30:
    // 0x2f5c30: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2f5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2f5c34:
    // 0x2f5c34: 0x0  nop
    ctx->pc = 0x2f5c34u;
    // NOP
label_2f5c38:
    // 0x2f5c38: 0x1000000f  b           . + 4 + (0xF << 2)
label_2f5c3c:
    if (ctx->pc == 0x2F5C3Cu) {
        ctx->pc = 0x2F5C3Cu;
            // 0x2f5c3c: 0xae2300f0  sw          $v1, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
        ctx->pc = 0x2F5C40u;
        goto label_2f5c40;
    }
    ctx->pc = 0x2F5C38u;
    {
        const bool branch_taken_0x2f5c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C38u;
            // 0x2f5c3c: 0xae2300f0  sw          $v1, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c38) {
            ctx->pc = 0x2F5C78u;
            goto label_2f5c78;
        }
    }
    ctx->pc = 0x2F5C40u;
label_2f5c40:
    // 0x2f5c40: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2f5c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5c44:
    // 0x2f5c44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5c48:
    // 0x2f5c48: 0x0  nop
    ctx->pc = 0x2f5c48u;
    // NOP
label_2f5c4c:
    // 0x2f5c4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f5c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5c50:
    // 0x2f5c50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2f5c54:
    if (ctx->pc == 0x2F5C54u) {
        ctx->pc = 0x2F5C58u;
        goto label_2f5c58;
    }
    ctx->pc = 0x2F5C50u;
    {
        const bool branch_taken_0x2f5c50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5c50) {
            ctx->pc = 0x2F5C68u;
            goto label_2f5c68;
        }
    }
    ctx->pc = 0x2F5C58u;
label_2f5c58:
    // 0x2f5c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5c5c:
    // 0x2f5c5c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f5c60:
    if (ctx->pc == 0x2F5C60u) {
        ctx->pc = 0x2F5C60u;
            // 0x2f5c60: 0xae2200e4  sw          $v0, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
        ctx->pc = 0x2F5C64u;
        goto label_2f5c64;
    }
    ctx->pc = 0x2F5C5Cu;
    {
        const bool branch_taken_0x2f5c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C5Cu;
            // 0x2f5c60: 0xae2200e4  sw          $v0, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c5c) {
            ctx->pc = 0x2F5C78u;
            goto label_2f5c78;
        }
    }
    ctx->pc = 0x2F5C64u;
label_2f5c64:
    // 0x2f5c64: 0x0  nop
    ctx->pc = 0x2f5c64u;
    // NOP
label_2f5c68:
    // 0x2f5c68: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x2f5c68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_2f5c6c:
    // 0x2f5c6c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2f5c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_2f5c70:
    // 0x2f5c70: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x2f5c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_2f5c74:
    // 0x2f5c74: 0x0  nop
    ctx->pc = 0x2f5c74u;
    // NOP
label_2f5c78:
    // 0x2f5c78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f5c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c7c:
    // 0x2f5c7c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2f5c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2f5c80:
    // 0x2f5c80: 0xc0bd734  jal         func_2F5CD0
label_2f5c84:
    if (ctx->pc == 0x2F5C84u) {
        ctx->pc = 0x2F5C84u;
            // 0x2f5c84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2F5C88u;
        goto label_2f5c88;
    }
    ctx->pc = 0x2F5C80u;
    SET_GPR_U32(ctx, 31, 0x2F5C88u);
    ctx->pc = 0x2F5C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C80u;
            // 0x2f5c84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CD0u;
    if (runtime->hasFunction(0x2F5CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5C88u; }
        if (ctx->pc != 0x2F5C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CD0_0x2f5cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5C88u; }
        if (ctx->pc != 0x2F5C88u) { return; }
    }
    ctx->pc = 0x2F5C88u;
label_2f5c88:
    // 0x2f5c88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f5c8c:
    // 0x2f5c8c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2f5c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f5c90:
    // 0x2f5c90: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
label_2f5c94:
    if (ctx->pc == 0x2F5C94u) {
        ctx->pc = 0x2F5C94u;
            // 0x2f5c94: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2F5C98u;
        goto label_2f5c98;
    }
    ctx->pc = 0x2F5C90u;
    {
        const bool branch_taken_0x2f5c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5c90) {
            ctx->pc = 0x2F5C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C90u;
            // 0x2f5c94: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5BC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5bc4;
        }
    }
    ctx->pc = 0x2F5C98u;
label_2f5c98:
    // 0x2f5c98: 0xc0be0b4  jal         func_2F82D0
label_2f5c9c:
    if (ctx->pc == 0x2F5C9Cu) {
        ctx->pc = 0x2F5C9Cu;
            // 0x2f5c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CA0u;
        goto label_2f5ca0;
    }
    ctx->pc = 0x2F5C98u;
    SET_GPR_U32(ctx, 31, 0x2F5CA0u);
    ctx->pc = 0x2F5C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5C98u;
            // 0x2f5c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F82D0u;
    if (runtime->hasFunction(0x2F82D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F82D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5CA0u; }
        if (ctx->pc != 0x2F5CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F82D0_0x2f82d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5CA0u; }
        if (ctx->pc != 0x2F5CA0u) { return; }
    }
    ctx->pc = 0x2F5CA0u;
label_2f5ca0:
    // 0x2f5ca0: 0xae820100  sw          $v0, 0x100($s4)
    ctx->pc = 0x2f5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 256), GPR_U32(ctx, 2));
label_2f5ca4:
    // 0x2f5ca4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f5ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f5ca8:
    // 0x2f5ca8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f5ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f5cac:
    // 0x2f5cac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f5cacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f5cb0:
    // 0x2f5cb0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f5cb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f5cb4:
    // 0x2f5cb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f5cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f5cb8:
    // 0x2f5cb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f5cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f5cbc:
    // 0x2f5cbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f5cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5cc0:
    // 0x2f5cc0: 0x3e00008  jr          $ra
label_2f5cc4:
    if (ctx->pc == 0x2F5CC4u) {
        ctx->pc = 0x2F5CC4u;
            // 0x2f5cc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2F5CC8u;
        goto label_2f5cc8;
    }
    ctx->pc = 0x2F5CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5CC0u;
            // 0x2f5cc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5CC8u;
label_2f5cc8:
    // 0x2f5cc8: 0x0  nop
    ctx->pc = 0x2f5cc8u;
    // NOP
label_2f5ccc:
    // 0x2f5ccc: 0x0  nop
    ctx->pc = 0x2f5cccu;
    // NOP
}
