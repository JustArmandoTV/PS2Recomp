#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7B60
// Address: 0x1a7b60 - 0x1a7c08
void sub_001A7B60_0x1a7b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7B60_0x1a7b60");
#endif

    switch (ctx->pc) {
        case 0x1a7b60u: goto label_1a7b60;
        case 0x1a7b64u: goto label_1a7b64;
        case 0x1a7b68u: goto label_1a7b68;
        case 0x1a7b6cu: goto label_1a7b6c;
        case 0x1a7b70u: goto label_1a7b70;
        case 0x1a7b74u: goto label_1a7b74;
        case 0x1a7b78u: goto label_1a7b78;
        case 0x1a7b7cu: goto label_1a7b7c;
        case 0x1a7b80u: goto label_1a7b80;
        case 0x1a7b84u: goto label_1a7b84;
        case 0x1a7b88u: goto label_1a7b88;
        case 0x1a7b8cu: goto label_1a7b8c;
        case 0x1a7b90u: goto label_1a7b90;
        case 0x1a7b94u: goto label_1a7b94;
        case 0x1a7b98u: goto label_1a7b98;
        case 0x1a7b9cu: goto label_1a7b9c;
        case 0x1a7ba0u: goto label_1a7ba0;
        case 0x1a7ba4u: goto label_1a7ba4;
        case 0x1a7ba8u: goto label_1a7ba8;
        case 0x1a7bacu: goto label_1a7bac;
        case 0x1a7bb0u: goto label_1a7bb0;
        case 0x1a7bb4u: goto label_1a7bb4;
        case 0x1a7bb8u: goto label_1a7bb8;
        case 0x1a7bbcu: goto label_1a7bbc;
        case 0x1a7bc0u: goto label_1a7bc0;
        case 0x1a7bc4u: goto label_1a7bc4;
        case 0x1a7bc8u: goto label_1a7bc8;
        case 0x1a7bccu: goto label_1a7bcc;
        case 0x1a7bd0u: goto label_1a7bd0;
        case 0x1a7bd4u: goto label_1a7bd4;
        case 0x1a7bd8u: goto label_1a7bd8;
        case 0x1a7bdcu: goto label_1a7bdc;
        case 0x1a7be0u: goto label_1a7be0;
        case 0x1a7be4u: goto label_1a7be4;
        case 0x1a7be8u: goto label_1a7be8;
        case 0x1a7becu: goto label_1a7bec;
        case 0x1a7bf0u: goto label_1a7bf0;
        case 0x1a7bf4u: goto label_1a7bf4;
        case 0x1a7bf8u: goto label_1a7bf8;
        case 0x1a7bfcu: goto label_1a7bfc;
        case 0x1a7c00u: goto label_1a7c00;
        case 0x1a7c04u: goto label_1a7c04;
        default: break;
    }

    ctx->pc = 0x1a7b60u;

label_1a7b60:
    // 0x1a7b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a7b64:
    // 0x1a7b64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a7b68:
    // 0x1a7b68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b6c:
    // 0x1a7b6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a7b70:
    // 0x1a7b70: 0x26320078  addiu       $s2, $s1, 0x78
    ctx->pc = 0x1a7b70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_1a7b74:
    // 0x1a7b74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a7b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1a7b78:
    // 0x1a7b78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a7b78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b7c:
    // 0x1a7b7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a7b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1a7b80:
    // 0x1a7b80: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a7b80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b84:
    // 0x1a7b84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a7b88:
    // 0x1a7b88: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a7b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1a7b8c:
    // 0x1a7b8c: 0x8e220d2c  lw          $v0, 0xD2C($s1)
    ctx->pc = 0x1a7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3372)));
label_1a7b90:
    // 0x1a7b90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a7b94:
    if (ctx->pc == 0x1A7B94u) {
        ctx->pc = 0x1A7B94u;
            // 0x1a7b94: 0x8e240d30  lw          $a0, 0xD30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3376)));
        ctx->pc = 0x1A7B98u;
        goto label_1a7b98;
    }
    ctx->pc = 0x1A7B90u;
    {
        const bool branch_taken_0x1a7b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B90u;
            // 0x1a7b94: 0x8e240d30  lw          $a0, 0xD30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b90) {
            ctx->pc = 0x1A7BA0u;
            goto label_1a7ba0;
        }
    }
    ctx->pc = 0x1A7B98u;
label_1a7b98:
    // 0x1a7b98: 0x40f809  jalr        $v0
label_1a7b9c:
    if (ctx->pc == 0x1A7B9Cu) {
        ctx->pc = 0x1A7BA0u;
        goto label_1a7ba0;
    }
    ctx->pc = 0x1A7B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7BA0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7BA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BA0u; }
            if (ctx->pc != 0x1A7BA0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7BA0u;
label_1a7ba0:
    // 0x1a7ba0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a7ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a7ba4:
    // 0x1a7ba4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1a7ba8:
    if (ctx->pc == 0x1A7BA8u) {
        ctx->pc = 0x1A7BA8u;
            // 0x1a7ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BACu;
        goto label_1a7bac;
    }
    ctx->pc = 0x1A7BA4u;
    {
        const bool branch_taken_0x1a7ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BA4u;
            // 0x1a7ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ba4) {
            ctx->pc = 0x1A7BE8u;
            goto label_1a7be8;
        }
    }
    ctx->pc = 0x1A7BACu;
label_1a7bac:
    // 0x1a7bac: 0x2a620801  slti        $v0, $s3, 0x801
    ctx->pc = 0x1a7bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2049) ? 1 : 0);
label_1a7bb0:
    // 0x1a7bb0: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x1a7bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1a7bb4:
    // 0x1a7bb4: 0x262800b  movn        $s0, $s3, $v0
    ctx->pc = 0x1a7bb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_1a7bb8:
    // 0x1a7bb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a7bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a7bbc:
    // 0x1a7bbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a7bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7bc0:
    // 0x1a7bc0: 0xc064080  jal         func_190200
label_1a7bc4:
    if (ctx->pc == 0x1A7BC4u) {
        ctx->pc = 0x1A7BC4u;
            // 0x1a7bc4: 0x2624010c  addiu       $a0, $s1, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
        ctx->pc = 0x1A7BC8u;
        goto label_1a7bc8;
    }
    ctx->pc = 0x1A7BC0u;
    SET_GPR_U32(ctx, 31, 0x1A7BC8u);
    ctx->pc = 0x1A7BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BC0u;
            // 0x1a7bc4: 0x2624010c  addiu       $a0, $s1, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BC8u; }
        if (ctx->pc != 0x1A7BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BC8u; }
        if (ctx->pc != 0x1A7BC8u) { return; }
    }
    ctx->pc = 0x1A7BC8u;
label_1a7bc8:
    // 0x1a7bc8: 0xae500090  sw          $s0, 0x90($s2)
    ctx->pc = 0x1a7bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
label_1a7bcc:
    // 0x1a7bcc: 0xc069f74  jal         func_1A7DD0
label_1a7bd0:
    if (ctx->pc == 0x1A7BD0u) {
        ctx->pc = 0x1A7BD0u;
            // 0x1a7bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BD4u;
        goto label_1a7bd4;
    }
    ctx->pc = 0x1A7BCCu;
    SET_GPR_U32(ctx, 31, 0x1A7BD4u);
    ctx->pc = 0x1A7BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BCCu;
            // 0x1a7bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7DD0u;
    if (runtime->hasFunction(0x1A7DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1A7DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BD4u; }
        if (ctx->pc != 0x1A7BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7DD0_0x1a7dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BD4u; }
        if (ctx->pc != 0x1A7BD4u) { return; }
    }
    ctx->pc = 0x1A7BD4u;
label_1a7bd4:
    // 0x1a7bd4: 0xc06a0fc  jal         func_1A83F0
label_1a7bd8:
    if (ctx->pc == 0x1A7BD8u) {
        ctx->pc = 0x1A7BD8u;
            // 0x1a7bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BDCu;
        goto label_1a7bdc;
    }
    ctx->pc = 0x1A7BD4u;
    SET_GPR_U32(ctx, 31, 0x1A7BDCu);
    ctx->pc = 0x1A7BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BD4u;
            // 0x1a7bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83F0u;
    if (runtime->hasFunction(0x1A83F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A83F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BDCu; }
        if (ctx->pc != 0x1A7BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83F0_0x1a83f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BDCu; }
        if (ctx->pc != 0x1A7BDCu) { return; }
    }
    ctx->pc = 0x1A7BDCu;
label_1a7bdc:
    // 0x1a7bdc: 0xc069f02  jal         func_1A7C08
label_1a7be0:
    if (ctx->pc == 0x1A7BE0u) {
        ctx->pc = 0x1A7BE0u;
            // 0x1a7be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BE4u;
        goto label_1a7be4;
    }
    ctx->pc = 0x1A7BDCu;
    SET_GPR_U32(ctx, 31, 0x1A7BE4u);
    ctx->pc = 0x1A7BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BDCu;
            // 0x1a7be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7C08u;
    if (runtime->hasFunction(0x1A7C08u)) {
        auto targetFn = runtime->lookupFunction(0x1A7C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BE4u; }
        if (ctx->pc != 0x1A7BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7C08_0x1a7c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BE4u; }
        if (ctx->pc != 0x1A7BE4u) { return; }
    }
    ctx->pc = 0x1A7BE4u;
label_1a7be4:
    // 0x1a7be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7be8:
    // 0x1a7be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7bec:
    // 0x1a7bec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a7bf0:
    // 0x1a7bf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7bf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7bf4:
    // 0x1a7bf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a7bf8:
    // 0x1a7bf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a7bf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7bfc:
    // 0x1a7bfc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a7bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a7c00:
    // 0x1a7c00: 0x3e00008  jr          $ra
label_1a7c04:
    if (ctx->pc == 0x1A7C04u) {
        ctx->pc = 0x1A7C04u;
            // 0x1a7c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A7C08u;
        goto label_fallthrough_0x1a7c00;
    }
    ctx->pc = 0x1A7C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C00u;
            // 0x1a7c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a7c00:
    ctx->pc = 0x1A7C08u;
}
