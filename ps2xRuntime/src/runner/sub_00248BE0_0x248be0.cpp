#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00248BE0
// Address: 0x248be0 - 0x248da0
void sub_00248BE0_0x248be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248BE0_0x248be0");
#endif

    switch (ctx->pc) {
        case 0x248be0u: goto label_248be0;
        case 0x248be4u: goto label_248be4;
        case 0x248be8u: goto label_248be8;
        case 0x248becu: goto label_248bec;
        case 0x248bf0u: goto label_248bf0;
        case 0x248bf4u: goto label_248bf4;
        case 0x248bf8u: goto label_248bf8;
        case 0x248bfcu: goto label_248bfc;
        case 0x248c00u: goto label_248c00;
        case 0x248c04u: goto label_248c04;
        case 0x248c08u: goto label_248c08;
        case 0x248c0cu: goto label_248c0c;
        case 0x248c10u: goto label_248c10;
        case 0x248c14u: goto label_248c14;
        case 0x248c18u: goto label_248c18;
        case 0x248c1cu: goto label_248c1c;
        case 0x248c20u: goto label_248c20;
        case 0x248c24u: goto label_248c24;
        case 0x248c28u: goto label_248c28;
        case 0x248c2cu: goto label_248c2c;
        case 0x248c30u: goto label_248c30;
        case 0x248c34u: goto label_248c34;
        case 0x248c38u: goto label_248c38;
        case 0x248c3cu: goto label_248c3c;
        case 0x248c40u: goto label_248c40;
        case 0x248c44u: goto label_248c44;
        case 0x248c48u: goto label_248c48;
        case 0x248c4cu: goto label_248c4c;
        case 0x248c50u: goto label_248c50;
        case 0x248c54u: goto label_248c54;
        case 0x248c58u: goto label_248c58;
        case 0x248c5cu: goto label_248c5c;
        case 0x248c60u: goto label_248c60;
        case 0x248c64u: goto label_248c64;
        case 0x248c68u: goto label_248c68;
        case 0x248c6cu: goto label_248c6c;
        case 0x248c70u: goto label_248c70;
        case 0x248c74u: goto label_248c74;
        case 0x248c78u: goto label_248c78;
        case 0x248c7cu: goto label_248c7c;
        case 0x248c80u: goto label_248c80;
        case 0x248c84u: goto label_248c84;
        case 0x248c88u: goto label_248c88;
        case 0x248c8cu: goto label_248c8c;
        case 0x248c90u: goto label_248c90;
        case 0x248c94u: goto label_248c94;
        case 0x248c98u: goto label_248c98;
        case 0x248c9cu: goto label_248c9c;
        case 0x248ca0u: goto label_248ca0;
        case 0x248ca4u: goto label_248ca4;
        case 0x248ca8u: goto label_248ca8;
        case 0x248cacu: goto label_248cac;
        case 0x248cb0u: goto label_248cb0;
        case 0x248cb4u: goto label_248cb4;
        case 0x248cb8u: goto label_248cb8;
        case 0x248cbcu: goto label_248cbc;
        case 0x248cc0u: goto label_248cc0;
        case 0x248cc4u: goto label_248cc4;
        case 0x248cc8u: goto label_248cc8;
        case 0x248cccu: goto label_248ccc;
        case 0x248cd0u: goto label_248cd0;
        case 0x248cd4u: goto label_248cd4;
        case 0x248cd8u: goto label_248cd8;
        case 0x248cdcu: goto label_248cdc;
        case 0x248ce0u: goto label_248ce0;
        case 0x248ce4u: goto label_248ce4;
        case 0x248ce8u: goto label_248ce8;
        case 0x248cecu: goto label_248cec;
        case 0x248cf0u: goto label_248cf0;
        case 0x248cf4u: goto label_248cf4;
        case 0x248cf8u: goto label_248cf8;
        case 0x248cfcu: goto label_248cfc;
        case 0x248d00u: goto label_248d00;
        case 0x248d04u: goto label_248d04;
        case 0x248d08u: goto label_248d08;
        case 0x248d0cu: goto label_248d0c;
        case 0x248d10u: goto label_248d10;
        case 0x248d14u: goto label_248d14;
        case 0x248d18u: goto label_248d18;
        case 0x248d1cu: goto label_248d1c;
        case 0x248d20u: goto label_248d20;
        case 0x248d24u: goto label_248d24;
        case 0x248d28u: goto label_248d28;
        case 0x248d2cu: goto label_248d2c;
        case 0x248d30u: goto label_248d30;
        case 0x248d34u: goto label_248d34;
        case 0x248d38u: goto label_248d38;
        case 0x248d3cu: goto label_248d3c;
        case 0x248d40u: goto label_248d40;
        case 0x248d44u: goto label_248d44;
        case 0x248d48u: goto label_248d48;
        case 0x248d4cu: goto label_248d4c;
        case 0x248d50u: goto label_248d50;
        case 0x248d54u: goto label_248d54;
        case 0x248d58u: goto label_248d58;
        case 0x248d5cu: goto label_248d5c;
        case 0x248d60u: goto label_248d60;
        case 0x248d64u: goto label_248d64;
        case 0x248d68u: goto label_248d68;
        case 0x248d6cu: goto label_248d6c;
        case 0x248d70u: goto label_248d70;
        case 0x248d74u: goto label_248d74;
        case 0x248d78u: goto label_248d78;
        case 0x248d7cu: goto label_248d7c;
        case 0x248d80u: goto label_248d80;
        case 0x248d84u: goto label_248d84;
        case 0x248d88u: goto label_248d88;
        case 0x248d8cu: goto label_248d8c;
        case 0x248d90u: goto label_248d90;
        case 0x248d94u: goto label_248d94;
        case 0x248d98u: goto label_248d98;
        case 0x248d9cu: goto label_248d9c;
        default: break;
    }

    ctx->pc = 0x248be0u;

label_248be0:
    // 0x248be0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x248be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_248be4:
    // 0x248be4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x248be4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_248be8:
    // 0x248be8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x248be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_248bec:
    // 0x248bec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x248becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_248bf0:
    // 0x248bf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x248bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_248bf4:
    // 0x248bf4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x248bf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248bf8:
    // 0x248bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x248bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_248bfc:
    // 0x248bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x248bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_248c00:
    // 0x248c00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_248c04:
    // 0x248c04: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x248c04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_248c08:
    // 0x248c08: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_248c0c:
    if (ctx->pc == 0x248C0Cu) {
        ctx->pc = 0x248C0Cu;
            // 0x248c0c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248C10u;
        goto label_248c10;
    }
    ctx->pc = 0x248C08u;
    {
        const bool branch_taken_0x248c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248C08u;
            // 0x248c0c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c08) {
            ctx->pc = 0x248CA0u;
            goto label_248ca0;
        }
    }
    ctx->pc = 0x248C10u;
label_248c10:
    // 0x248c10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x248c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_248c14:
    // 0x248c14: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_248c18:
    if (ctx->pc == 0x248C18u) {
        ctx->pc = 0x248C18u;
            // 0x248c18: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x248C1Cu;
        goto label_248c1c;
    }
    ctx->pc = 0x248C14u;
    {
        const bool branch_taken_0x248c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x248C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248C14u;
            // 0x248c18: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c14) {
            ctx->pc = 0x248C70u;
            goto label_248c70;
        }
    }
    ctx->pc = 0x248C1Cu;
label_248c1c:
    // 0x248c1c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_248c20:
    if (ctx->pc == 0x248C20u) {
        ctx->pc = 0x248C24u;
        goto label_248c24;
    }
    ctx->pc = 0x248C1Cu;
    {
        const bool branch_taken_0x248c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x248c1c) {
            ctx->pc = 0x248C38u;
            goto label_248c38;
        }
    }
    ctx->pc = 0x248C24u;
label_248c24:
    // 0x248c24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x248c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_248c28:
    // 0x248c28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_248c2c:
    if (ctx->pc == 0x248C2Cu) {
        ctx->pc = 0x248C30u;
        goto label_248c30;
    }
    ctx->pc = 0x248C28u;
    {
        const bool branch_taken_0x248c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x248c28) {
            ctx->pc = 0x248C38u;
            goto label_248c38;
        }
    }
    ctx->pc = 0x248C30u;
label_248c30:
    // 0x248c30: 0x1000001b  b           . + 4 + (0x1B << 2)
label_248c34:
    if (ctx->pc == 0x248C34u) {
        ctx->pc = 0x248C38u;
        goto label_248c38;
    }
    ctx->pc = 0x248C30u;
    {
        const bool branch_taken_0x248c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248c30) {
            ctx->pc = 0x248CA0u;
            goto label_248ca0;
        }
    }
    ctx->pc = 0x248C38u;
label_248c38:
    // 0x248c38: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x248c38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_248c3c:
    // 0x248c3c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x248c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_248c40:
    // 0x248c40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x248c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248c44:
    // 0x248c44: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x248c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_248c48:
    // 0x248c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248c4c:
    // 0x248c4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248c50:
    // 0x248c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248c54:
    // 0x248c54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248c58:
    // 0x248c58: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x248c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_248c5c:
    // 0x248c5c: 0x8c4216b4  lw          $v0, 0x16B4($v0)
    ctx->pc = 0x248c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5812)));
label_248c60:
    // 0x248c60: 0x40f809  jalr        $v0
label_248c64:
    if (ctx->pc == 0x248C64u) {
        ctx->pc = 0x248C64u;
            // 0x248c64: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x248C68u;
        goto label_248c68;
    }
    ctx->pc = 0x248C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248C68u);
        ctx->pc = 0x248C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248C60u;
            // 0x248c64: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x248C68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x248C68u; }
            if (ctx->pc != 0x248C68u) { return; }
        }
        }
    }
    ctx->pc = 0x248C68u;
label_248c68:
    // 0x248c68: 0x1000000d  b           . + 4 + (0xD << 2)
label_248c6c:
    if (ctx->pc == 0x248C6Cu) {
        ctx->pc = 0x248C70u;
        goto label_248c70;
    }
    ctx->pc = 0x248C68u;
    {
        const bool branch_taken_0x248c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248c68) {
            ctx->pc = 0x248CA0u;
            goto label_248ca0;
        }
    }
    ctx->pc = 0x248C70u;
label_248c70:
    // 0x248c70: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x248c70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_248c74:
    // 0x248c74: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x248c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_248c78:
    // 0x248c78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x248c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248c7c:
    // 0x248c7c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x248c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_248c80:
    // 0x248c80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248c84:
    // 0x248c84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248c88:
    // 0x248c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248c8c:
    // 0x248c8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248c90:
    // 0x248c90: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x248c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_248c94:
    // 0x248c94: 0x8c4216b4  lw          $v0, 0x16B4($v0)
    ctx->pc = 0x248c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5812)));
label_248c98:
    // 0x248c98: 0x40f809  jalr        $v0
label_248c9c:
    if (ctx->pc == 0x248C9Cu) {
        ctx->pc = 0x248C9Cu;
            // 0x248c9c: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x248CA0u;
        goto label_248ca0;
    }
    ctx->pc = 0x248C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248CA0u);
        ctx->pc = 0x248C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248C98u;
            // 0x248c9c: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x248CA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x248CA0u; }
            if (ctx->pc != 0x248CA0u) { return; }
        }
        }
    }
    ctx->pc = 0x248CA0u;
label_248ca0:
    // 0x248ca0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x248ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248ca4:
    // 0x248ca4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x248ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248ca8:
    // 0x248ca8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x248ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248cac:
    // 0x248cac: 0x0  nop
    ctx->pc = 0x248cacu;
    // NOP
label_248cb0:
    // 0x248cb0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x248cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_248cb4:
    // 0x248cb4: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x248cb4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_248cb8:
    // 0x248cb8: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x248cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_248cbc:
    // 0x248cbc: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x248cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_248cc0:
    // 0x248cc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x248cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_248cc4:
    // 0x248cc4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x248cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_248cc8:
    // 0x248cc8: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x248cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_248ccc:
    // 0x248ccc: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x248cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_248cd0:
    // 0x248cd0: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x248cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_248cd4:
    // 0x248cd4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x248cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_248cd8:
    // 0x248cd8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x248cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_248cdc:
    // 0x248cdc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x248cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_248ce0:
    // 0x248ce0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x248ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_248ce4:
    // 0x248ce4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x248ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_248ce8:
    // 0x248ce8: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x248ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_248cec:
    // 0x248cec: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x248cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_248cf0:
    // 0x248cf0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x248cf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_248cf4:
    // 0x248cf4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_248cf8:
    if (ctx->pc == 0x248CF8u) {
        ctx->pc = 0x248CFCu;
        goto label_248cfc;
    }
    ctx->pc = 0x248CF4u;
    {
        const bool branch_taken_0x248cf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x248cf4) {
            ctx->pc = 0x248D20u;
            goto label_248d20;
        }
    }
    ctx->pc = 0x248CFCu;
label_248cfc:
    // 0x248cfc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x248cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_248d00:
    // 0x248d00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x248d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_248d04:
    // 0x248d04: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x248d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_248d08:
    // 0x248d08: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x248d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_248d0c:
    // 0x248d0c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x248d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_248d10:
    // 0x248d10: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x248d10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_248d14:
    // 0x248d14: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x248d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_248d18:
    // 0x248d18: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x248d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_248d1c:
    // 0x248d1c: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x248d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
label_248d20:
    // 0x248d20: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x248d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_248d24:
    // 0x248d24: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x248d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_248d28:
    // 0x248d28: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x248d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_248d2c:
    // 0x248d2c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x248d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_248d30:
    // 0x248d30: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x248d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_248d34:
    // 0x248d34: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x248d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_248d38:
    // 0x248d38: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x248d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_248d3c:
    // 0x248d3c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_248d40:
    if (ctx->pc == 0x248D40u) {
        ctx->pc = 0x248D40u;
            // 0x248d40: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->pc = 0x248D44u;
        goto label_248d44;
    }
    ctx->pc = 0x248D3Cu;
    {
        const bool branch_taken_0x248d3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x248D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D3Cu;
            // 0x248d40: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d3c) {
            ctx->pc = 0x248D58u;
            goto label_248d58;
        }
    }
    ctx->pc = 0x248D44u;
label_248d44:
    // 0x248d44: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x248d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_248d48:
    // 0x248d48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248d4c:
    // 0x248d4c: 0xc0a72c0  jal         func_29CB00
label_248d50:
    if (ctx->pc == 0x248D50u) {
        ctx->pc = 0x248D50u;
            // 0x248d50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248D54u;
        goto label_248d54;
    }
    ctx->pc = 0x248D4Cu;
    SET_GPR_U32(ctx, 31, 0x248D54u);
    ctx->pc = 0x248D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248D4Cu;
            // 0x248d50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CB00u;
    if (runtime->hasFunction(0x29CB00u)) {
        auto targetFn = runtime->lookupFunction(0x29CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D54u; }
        if (ctx->pc != 0x248D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CB00_0x29cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D54u; }
        if (ctx->pc != 0x248D54u) { return; }
    }
    ctx->pc = 0x248D54u;
label_248d54:
    // 0x248d54: 0x0  nop
    ctx->pc = 0x248d54u;
    // NOP
label_248d58:
    // 0x248d58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x248d58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_248d5c:
    // 0x248d5c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x248d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_248d60:
    // 0x248d60: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x248d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_248d64:
    // 0x248d64: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_248d68:
    if (ctx->pc == 0x248D68u) {
        ctx->pc = 0x248D68u;
            // 0x248d68: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x248D6Cu;
        goto label_248d6c;
    }
    ctx->pc = 0x248D64u;
    {
        const bool branch_taken_0x248d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D64u;
            // 0x248d68: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d64) {
            ctx->pc = 0x248CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248cb0;
        }
    }
    ctx->pc = 0x248D6Cu;
label_248d6c:
    // 0x248d6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x248d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_248d70:
    // 0x248d70: 0xc092368  jal         func_248DA0
label_248d74:
    if (ctx->pc == 0x248D74u) {
        ctx->pc = 0x248D74u;
            // 0x248d74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248D78u;
        goto label_248d78;
    }
    ctx->pc = 0x248D70u;
    SET_GPR_U32(ctx, 31, 0x248D78u);
    ctx->pc = 0x248D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248D70u;
            // 0x248d74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x248DA0u;
    if (runtime->hasFunction(0x248DA0u)) {
        auto targetFn = runtime->lookupFunction(0x248DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D78u; }
        if (ctx->pc != 0x248D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00248DA0_0x248da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D78u; }
        if (ctx->pc != 0x248D78u) { return; }
    }
    ctx->pc = 0x248D78u;
label_248d78:
    // 0x248d78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x248d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_248d7c:
    // 0x248d7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x248d7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_248d80:
    // 0x248d80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x248d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_248d84:
    // 0x248d84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x248d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248d88:
    // 0x248d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x248d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_248d8c:
    // 0x248d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x248d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_248d90:
    // 0x248d90: 0x3e00008  jr          $ra
label_248d94:
    if (ctx->pc == 0x248D94u) {
        ctx->pc = 0x248D94u;
            // 0x248d94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x248D98u;
        goto label_248d98;
    }
    ctx->pc = 0x248D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D90u;
            // 0x248d94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x248D98u;
label_248d98:
    // 0x248d98: 0x0  nop
    ctx->pc = 0x248d98u;
    // NOP
label_248d9c:
    // 0x248d9c: 0x0  nop
    ctx->pc = 0x248d9cu;
    // NOP
}
