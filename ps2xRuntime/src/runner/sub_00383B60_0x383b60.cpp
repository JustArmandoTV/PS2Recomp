#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00383B60
// Address: 0x383b60 - 0x383c30
void sub_00383B60_0x383b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383B60_0x383b60");
#endif

    switch (ctx->pc) {
        case 0x383b60u: goto label_383b60;
        case 0x383b64u: goto label_383b64;
        case 0x383b68u: goto label_383b68;
        case 0x383b6cu: goto label_383b6c;
        case 0x383b70u: goto label_383b70;
        case 0x383b74u: goto label_383b74;
        case 0x383b78u: goto label_383b78;
        case 0x383b7cu: goto label_383b7c;
        case 0x383b80u: goto label_383b80;
        case 0x383b84u: goto label_383b84;
        case 0x383b88u: goto label_383b88;
        case 0x383b8cu: goto label_383b8c;
        case 0x383b90u: goto label_383b90;
        case 0x383b94u: goto label_383b94;
        case 0x383b98u: goto label_383b98;
        case 0x383b9cu: goto label_383b9c;
        case 0x383ba0u: goto label_383ba0;
        case 0x383ba4u: goto label_383ba4;
        case 0x383ba8u: goto label_383ba8;
        case 0x383bacu: goto label_383bac;
        case 0x383bb0u: goto label_383bb0;
        case 0x383bb4u: goto label_383bb4;
        case 0x383bb8u: goto label_383bb8;
        case 0x383bbcu: goto label_383bbc;
        case 0x383bc0u: goto label_383bc0;
        case 0x383bc4u: goto label_383bc4;
        case 0x383bc8u: goto label_383bc8;
        case 0x383bccu: goto label_383bcc;
        case 0x383bd0u: goto label_383bd0;
        case 0x383bd4u: goto label_383bd4;
        case 0x383bd8u: goto label_383bd8;
        case 0x383bdcu: goto label_383bdc;
        case 0x383be0u: goto label_383be0;
        case 0x383be4u: goto label_383be4;
        case 0x383be8u: goto label_383be8;
        case 0x383becu: goto label_383bec;
        case 0x383bf0u: goto label_383bf0;
        case 0x383bf4u: goto label_383bf4;
        case 0x383bf8u: goto label_383bf8;
        case 0x383bfcu: goto label_383bfc;
        case 0x383c00u: goto label_383c00;
        case 0x383c04u: goto label_383c04;
        case 0x383c08u: goto label_383c08;
        case 0x383c0cu: goto label_383c0c;
        case 0x383c10u: goto label_383c10;
        case 0x383c14u: goto label_383c14;
        case 0x383c18u: goto label_383c18;
        case 0x383c1cu: goto label_383c1c;
        case 0x383c20u: goto label_383c20;
        case 0x383c24u: goto label_383c24;
        case 0x383c28u: goto label_383c28;
        case 0x383c2cu: goto label_383c2c;
        default: break;
    }

    ctx->pc = 0x383b60u;

label_383b60:
    // 0x383b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x383b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_383b64:
    // 0x383b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x383b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383b68:
    // 0x383b68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x383b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_383b6c:
    // 0x383b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_383b70:
    // 0x383b70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x383b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_383b74:
    // 0x383b74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x383b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383b78:
    // 0x383b78: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x383b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_383b7c:
    // 0x383b7c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_383b80:
    if (ctx->pc == 0x383B80u) {
        ctx->pc = 0x383B80u;
            // 0x383b80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383B84u;
        goto label_383b84;
    }
    ctx->pc = 0x383B7Cu;
    {
        const bool branch_taken_0x383b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x383B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383B7Cu;
            // 0x383b80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b7c) {
            ctx->pc = 0x383BE8u;
            goto label_383be8;
        }
    }
    ctx->pc = 0x383B84u;
label_383b84:
    // 0x383b84: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x383b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_383b88:
    // 0x383b88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x383b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_383b8c:
    // 0x383b8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x383b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_383b90:
    // 0x383b90: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
label_383b94:
    if (ctx->pc == 0x383B94u) {
        ctx->pc = 0x383B94u;
            // 0x383b94: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x383B98u;
        goto label_383b98;
    }
    ctx->pc = 0x383B90u;
    {
        const bool branch_taken_0x383b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x383b90) {
            ctx->pc = 0x383B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383B90u;
            // 0x383b94: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383BDCu;
            goto label_383bdc;
        }
    }
    ctx->pc = 0x383B98u;
label_383b98:
    // 0x383b98: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x383b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_383b9c:
    // 0x383b9c: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x383b9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_383ba0:
    // 0x383ba0: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
label_383ba4:
    if (ctx->pc == 0x383BA4u) {
        ctx->pc = 0x383BA4u;
            // 0x383ba4: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->pc = 0x383BA8u;
        goto label_383ba8;
    }
    ctx->pc = 0x383BA0u;
    {
        const bool branch_taken_0x383ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x383ba0) {
            ctx->pc = 0x383BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383BA0u;
            // 0x383ba4: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383BD0u;
            goto label_383bd0;
        }
    }
    ctx->pc = 0x383BA8u;
label_383ba8:
    // 0x383ba8: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x383ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_383bac:
    // 0x383bac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x383bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_383bb0:
    // 0x383bb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x383bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_383bb4:
    // 0x383bb4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x383bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_383bb8:
    // 0x383bb8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x383bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_383bbc:
    // 0x383bbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x383bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_383bc0:
    // 0x383bc0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x383bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_383bc4:
    // 0x383bc4: 0xc04a508  jal         func_129420
label_383bc8:
    if (ctx->pc == 0x383BC8u) {
        ctx->pc = 0x383BC8u;
            // 0x383bc8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x383BCCu;
        goto label_383bcc;
    }
    ctx->pc = 0x383BC4u;
    SET_GPR_U32(ctx, 31, 0x383BCCu);
    ctx->pc = 0x383BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383BC4u;
            // 0x383bc8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383BCCu; }
        if (ctx->pc != 0x383BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383BCCu; }
        if (ctx->pc != 0x383BCCu) { return; }
    }
    ctx->pc = 0x383BCCu;
label_383bcc:
    // 0x383bcc: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x383bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_383bd0:
    // 0x383bd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x383bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_383bd4:
    // 0x383bd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_383bd8:
    if (ctx->pc == 0x383BD8u) {
        ctx->pc = 0x383BD8u;
            // 0x383bd8: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x383BDCu;
        goto label_383bdc;
    }
    ctx->pc = 0x383BD4u;
    {
        const bool branch_taken_0x383bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383BD4u;
            // 0x383bd8: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383bd4) {
            ctx->pc = 0x383BE8u;
            goto label_383be8;
        }
    }
    ctx->pc = 0x383BDCu;
label_383bdc:
    // 0x383bdc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x383bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_383be0:
    // 0x383be0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_383be4:
    if (ctx->pc == 0x383BE4u) {
        ctx->pc = 0x383BE4u;
            // 0x383be4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x383BE8u;
        goto label_383be8;
    }
    ctx->pc = 0x383BE0u;
    {
        const bool branch_taken_0x383be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383BE0u;
            // 0x383be4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383be0) {
            ctx->pc = 0x383B8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_383b8c;
        }
    }
    ctx->pc = 0x383BE8u;
label_383be8:
    // 0x383be8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x383be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_383bec:
    // 0x383bec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x383becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_383bf0:
    // 0x383bf0: 0x320f809  jalr        $t9
label_383bf4:
    if (ctx->pc == 0x383BF4u) {
        ctx->pc = 0x383BF4u;
            // 0x383bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383BF8u;
        goto label_383bf8;
    }
    ctx->pc = 0x383BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x383BF8u);
        ctx->pc = 0x383BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383BF0u;
            // 0x383bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x383BF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x383BF8u; }
            if (ctx->pc != 0x383BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x383BF8u;
label_383bf8:
    // 0x383bf8: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x383bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_383bfc:
    // 0x383bfc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x383bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_383c00:
    // 0x383c00: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x383c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_383c04:
    // 0x383c04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x383c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_383c08:
    // 0x383c08: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x383c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_383c0c:
    // 0x383c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x383c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_383c10:
    // 0x383c10: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x383c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_383c14:
    // 0x383c14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x383c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_383c18:
    // 0x383c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x383c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_383c1c:
    // 0x383c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x383c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_383c20:
    // 0x383c20: 0x3e00008  jr          $ra
label_383c24:
    if (ctx->pc == 0x383C24u) {
        ctx->pc = 0x383C24u;
            // 0x383c24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x383C28u;
        goto label_383c28;
    }
    ctx->pc = 0x383C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383C20u;
            // 0x383c24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x383C28u;
label_383c28:
    // 0x383c28: 0x0  nop
    ctx->pc = 0x383c28u;
    // NOP
label_383c2c:
    // 0x383c2c: 0x0  nop
    ctx->pc = 0x383c2cu;
    // NOP
}
