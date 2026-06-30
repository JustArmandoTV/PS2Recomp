#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00179B88
// Address: 0x179b88 - 0x179d48
void sub_00179B88_0x179b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179B88_0x179b88");
#endif

    switch (ctx->pc) {
        case 0x179b88u: goto label_179b88;
        case 0x179b8cu: goto label_179b8c;
        case 0x179b90u: goto label_179b90;
        case 0x179b94u: goto label_179b94;
        case 0x179b98u: goto label_179b98;
        case 0x179b9cu: goto label_179b9c;
        case 0x179ba0u: goto label_179ba0;
        case 0x179ba4u: goto label_179ba4;
        case 0x179ba8u: goto label_179ba8;
        case 0x179bacu: goto label_179bac;
        case 0x179bb0u: goto label_179bb0;
        case 0x179bb4u: goto label_179bb4;
        case 0x179bb8u: goto label_179bb8;
        case 0x179bbcu: goto label_179bbc;
        case 0x179bc0u: goto label_179bc0;
        case 0x179bc4u: goto label_179bc4;
        case 0x179bc8u: goto label_179bc8;
        case 0x179bccu: goto label_179bcc;
        case 0x179bd0u: goto label_179bd0;
        case 0x179bd4u: goto label_179bd4;
        case 0x179bd8u: goto label_179bd8;
        case 0x179bdcu: goto label_179bdc;
        case 0x179be0u: goto label_179be0;
        case 0x179be4u: goto label_179be4;
        case 0x179be8u: goto label_179be8;
        case 0x179becu: goto label_179bec;
        case 0x179bf0u: goto label_179bf0;
        case 0x179bf4u: goto label_179bf4;
        case 0x179bf8u: goto label_179bf8;
        case 0x179bfcu: goto label_179bfc;
        case 0x179c00u: goto label_179c00;
        case 0x179c04u: goto label_179c04;
        case 0x179c08u: goto label_179c08;
        case 0x179c0cu: goto label_179c0c;
        case 0x179c10u: goto label_179c10;
        case 0x179c14u: goto label_179c14;
        case 0x179c18u: goto label_179c18;
        case 0x179c1cu: goto label_179c1c;
        case 0x179c20u: goto label_179c20;
        case 0x179c24u: goto label_179c24;
        case 0x179c28u: goto label_179c28;
        case 0x179c2cu: goto label_179c2c;
        case 0x179c30u: goto label_179c30;
        case 0x179c34u: goto label_179c34;
        case 0x179c38u: goto label_179c38;
        case 0x179c3cu: goto label_179c3c;
        case 0x179c40u: goto label_179c40;
        case 0x179c44u: goto label_179c44;
        case 0x179c48u: goto label_179c48;
        case 0x179c4cu: goto label_179c4c;
        case 0x179c50u: goto label_179c50;
        case 0x179c54u: goto label_179c54;
        case 0x179c58u: goto label_179c58;
        case 0x179c5cu: goto label_179c5c;
        case 0x179c60u: goto label_179c60;
        case 0x179c64u: goto label_179c64;
        case 0x179c68u: goto label_179c68;
        case 0x179c6cu: goto label_179c6c;
        case 0x179c70u: goto label_179c70;
        case 0x179c74u: goto label_179c74;
        case 0x179c78u: goto label_179c78;
        case 0x179c7cu: goto label_179c7c;
        case 0x179c80u: goto label_179c80;
        case 0x179c84u: goto label_179c84;
        case 0x179c88u: goto label_179c88;
        case 0x179c8cu: goto label_179c8c;
        case 0x179c90u: goto label_179c90;
        case 0x179c94u: goto label_179c94;
        case 0x179c98u: goto label_179c98;
        case 0x179c9cu: goto label_179c9c;
        case 0x179ca0u: goto label_179ca0;
        case 0x179ca4u: goto label_179ca4;
        case 0x179ca8u: goto label_179ca8;
        case 0x179cacu: goto label_179cac;
        case 0x179cb0u: goto label_179cb0;
        case 0x179cb4u: goto label_179cb4;
        case 0x179cb8u: goto label_179cb8;
        case 0x179cbcu: goto label_179cbc;
        case 0x179cc0u: goto label_179cc0;
        case 0x179cc4u: goto label_179cc4;
        case 0x179cc8u: goto label_179cc8;
        case 0x179cccu: goto label_179ccc;
        case 0x179cd0u: goto label_179cd0;
        case 0x179cd4u: goto label_179cd4;
        case 0x179cd8u: goto label_179cd8;
        case 0x179cdcu: goto label_179cdc;
        case 0x179ce0u: goto label_179ce0;
        case 0x179ce4u: goto label_179ce4;
        case 0x179ce8u: goto label_179ce8;
        case 0x179cecu: goto label_179cec;
        case 0x179cf0u: goto label_179cf0;
        case 0x179cf4u: goto label_179cf4;
        case 0x179cf8u: goto label_179cf8;
        case 0x179cfcu: goto label_179cfc;
        case 0x179d00u: goto label_179d00;
        case 0x179d04u: goto label_179d04;
        case 0x179d08u: goto label_179d08;
        case 0x179d0cu: goto label_179d0c;
        case 0x179d10u: goto label_179d10;
        case 0x179d14u: goto label_179d14;
        case 0x179d18u: goto label_179d18;
        case 0x179d1cu: goto label_179d1c;
        case 0x179d20u: goto label_179d20;
        case 0x179d24u: goto label_179d24;
        case 0x179d28u: goto label_179d28;
        case 0x179d2cu: goto label_179d2c;
        case 0x179d30u: goto label_179d30;
        case 0x179d34u: goto label_179d34;
        case 0x179d38u: goto label_179d38;
        case 0x179d3cu: goto label_179d3c;
        case 0x179d40u: goto label_179d40;
        case 0x179d44u: goto label_179d44;
        default: break;
    }

    ctx->pc = 0x179b88u;

label_179b88:
    // 0x179b88: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_179b8c:
    if (ctx->pc == 0x179B8Cu) {
        ctx->pc = 0x179B8Cu;
            // 0x179b8c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x179B90u;
        goto label_179b90;
    }
    ctx->pc = 0x179B88u;
    {
        const bool branch_taken_0x179b88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179B88u;
            // 0x179b8c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b88) {
            ctx->pc = 0x179BA0u;
            goto label_179ba0;
        }
    }
    ctx->pc = 0x179B90u;
label_179b90:
    // 0x179b90: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x179b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_179b94:
    // 0x179b94: 0xac40437c  sw          $zero, 0x437C($v0)
    ctx->pc = 0x179b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17276), GPR_U32(ctx, 0));
label_179b98:
    // 0x179b98: 0x3e00008  jr          $ra
label_179b9c:
    if (ctx->pc == 0x179B9Cu) {
        ctx->pc = 0x179B9Cu;
            // 0x179b9c: 0xac604380  sw          $zero, 0x4380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17280), GPR_U32(ctx, 0));
        ctx->pc = 0x179BA0u;
        goto label_179ba0;
    }
    ctx->pc = 0x179B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179B98u;
            // 0x179b9c: 0xac604380  sw          $zero, 0x4380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179BA0u;
label_179ba0:
    // 0x179ba0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x179ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_179ba4:
    // 0x179ba4: 0xac44437c  sw          $a0, 0x437C($v0)
    ctx->pc = 0x179ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17276), GPR_U32(ctx, 4));
label_179ba8:
    // 0x179ba8: 0x3e00008  jr          $ra
label_179bac:
    if (ctx->pc == 0x179BACu) {
        ctx->pc = 0x179BACu;
            // 0x179bac: 0xac654380  sw          $a1, 0x4380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17280), GPR_U32(ctx, 5));
        ctx->pc = 0x179BB0u;
        goto label_179bb0;
    }
    ctx->pc = 0x179BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179BA8u;
            // 0x179bac: 0xac654380  sw          $a1, 0x4380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17280), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179BB0u;
label_179bb0:
    // 0x179bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_179bb4:
    // 0x179bb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x179bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_179bb8:
    // 0x179bb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x179bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179bbc:
    // 0x179bbc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_179bc0:
    if (ctx->pc == 0x179BC0u) {
        ctx->pc = 0x179BC0u;
            // 0x179bc0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x179BC4u;
        goto label_179bc4;
    }
    ctx->pc = 0x179BBCu;
    {
        const bool branch_taken_0x179bbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179BBCu;
            // 0x179bc0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bbc) {
            ctx->pc = 0x179BD8u;
            goto label_179bd8;
        }
    }
    ctx->pc = 0x179BC4u;
label_179bc4:
    // 0x179bc4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179bc8:
    // 0x179bc8: 0xc05e0a6  jal         func_178298
label_179bcc:
    if (ctx->pc == 0x179BCCu) {
        ctx->pc = 0x179BCCu;
            // 0x179bcc: 0x24845468  addiu       $a0, $a0, 0x5468 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21608));
        ctx->pc = 0x179BD0u;
        goto label_179bd0;
    }
    ctx->pc = 0x179BC8u;
    SET_GPR_U32(ctx, 31, 0x179BD0u);
    ctx->pc = 0x179BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179BC8u;
            // 0x179bcc: 0x24845468  addiu       $a0, $a0, 0x5468 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BD0u; }
        if (ctx->pc != 0x179BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BD0u; }
        if (ctx->pc != 0x179BD0u) { return; }
    }
    ctx->pc = 0x179BD0u;
label_179bd0:
    // 0x179bd0: 0x1000000c  b           . + 4 + (0xC << 2)
label_179bd4:
    if (ctx->pc == 0x179BD4u) {
        ctx->pc = 0x179BD4u;
            // 0x179bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179BD8u;
        goto label_179bd8;
    }
    ctx->pc = 0x179BD0u;
    {
        const bool branch_taken_0x179bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179BD0u;
            // 0x179bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bd0) {
            ctx->pc = 0x179C04u;
            goto label_179c04;
        }
    }
    ctx->pc = 0x179BD8u;
label_179bd8:
    // 0x179bd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x179bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_179bdc:
    // 0x179bdc: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x179bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_179be0:
    // 0x179be0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_179be4:
    if (ctx->pc == 0x179BE4u) {
        ctx->pc = 0x179BE4u;
            // 0x179be4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x179BE8u;
        goto label_179be8;
    }
    ctx->pc = 0x179BE0u;
    {
        const bool branch_taken_0x179be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179be0) {
            ctx->pc = 0x179BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179BE0u;
            // 0x179be4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179BF8u;
            goto label_179bf8;
        }
    }
    ctx->pc = 0x179BE8u;
label_179be8:
    // 0x179be8: 0x40f809  jalr        $v0
label_179bec:
    if (ctx->pc == 0x179BECu) {
        ctx->pc = 0x179BECu;
            // 0x179bec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x179BF0u;
        goto label_179bf0;
    }
    ctx->pc = 0x179BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179BF0u);
        ctx->pc = 0x179BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179BE8u;
            // 0x179bec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179BF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179BF0u; }
            if (ctx->pc != 0x179BF0u) { return; }
        }
        }
    }
    ctx->pc = 0x179BF0u;
label_179bf0:
    // 0x179bf0: 0x10000003  b           . + 4 + (0x3 << 2)
label_179bf4:
    if (ctx->pc == 0x179BF4u) {
        ctx->pc = 0x179BF4u;
            // 0x179bf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179BF8u;
        goto label_179bf8;
    }
    ctx->pc = 0x179BF0u;
    {
        const bool branch_taken_0x179bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179BF0u;
            // 0x179bf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bf0) {
            ctx->pc = 0x179C00u;
            goto label_179c00;
        }
    }
    ctx->pc = 0x179BF8u;
label_179bf8:
    // 0x179bf8: 0xc05e0a6  jal         func_178298
label_179bfc:
    if (ctx->pc == 0x179BFCu) {
        ctx->pc = 0x179BFCu;
            // 0x179bfc: 0x24845488  addiu       $a0, $a0, 0x5488 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21640));
        ctx->pc = 0x179C00u;
        goto label_179c00;
    }
    ctx->pc = 0x179BF8u;
    SET_GPR_U32(ctx, 31, 0x179C00u);
    ctx->pc = 0x179BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179BF8u;
            // 0x179bfc: 0x24845488  addiu       $a0, $a0, 0x5488 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C00u; }
        if (ctx->pc != 0x179C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C00u; }
        if (ctx->pc != 0x179C00u) { return; }
    }
    ctx->pc = 0x179C00u;
label_179c00:
    // 0x179c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x179c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179c04:
    // 0x179c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179c08:
    // 0x179c08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x179c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_179c0c:
    // 0x179c0c: 0x3e00008  jr          $ra
label_179c10:
    if (ctx->pc == 0x179C10u) {
        ctx->pc = 0x179C10u;
            // 0x179c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x179C14u;
        goto label_179c14;
    }
    ctx->pc = 0x179C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179C0Cu;
            // 0x179c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179C14u;
label_179c14:
    // 0x179c14: 0x0  nop
    ctx->pc = 0x179c14u;
    // NOP
label_179c18:
    // 0x179c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_179c1c:
    // 0x179c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x179c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_179c20:
    // 0x179c20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x179c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179c24:
    // 0x179c24: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_179c28:
    if (ctx->pc == 0x179C28u) {
        ctx->pc = 0x179C28u;
            // 0x179c28: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x179C2Cu;
        goto label_179c2c;
    }
    ctx->pc = 0x179C24u;
    {
        const bool branch_taken_0x179c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179C24u;
            // 0x179c28: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c24) {
            ctx->pc = 0x179C40u;
            goto label_179c40;
        }
    }
    ctx->pc = 0x179C2Cu;
label_179c2c:
    // 0x179c2c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179c30:
    // 0x179c30: 0xc05e0a6  jal         func_178298
label_179c34:
    if (ctx->pc == 0x179C34u) {
        ctx->pc = 0x179C34u;
            // 0x179c34: 0x248454a8  addiu       $a0, $a0, 0x54A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21672));
        ctx->pc = 0x179C38u;
        goto label_179c38;
    }
    ctx->pc = 0x179C30u;
    SET_GPR_U32(ctx, 31, 0x179C38u);
    ctx->pc = 0x179C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179C30u;
            // 0x179c34: 0x248454a8  addiu       $a0, $a0, 0x54A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C38u; }
        if (ctx->pc != 0x179C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C38u; }
        if (ctx->pc != 0x179C38u) { return; }
    }
    ctx->pc = 0x179C38u;
label_179c38:
    // 0x179c38: 0x1000000c  b           . + 4 + (0xC << 2)
label_179c3c:
    if (ctx->pc == 0x179C3Cu) {
        ctx->pc = 0x179C3Cu;
            // 0x179c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179C40u;
        goto label_179c40;
    }
    ctx->pc = 0x179C38u;
    {
        const bool branch_taken_0x179c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179C38u;
            // 0x179c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c38) {
            ctx->pc = 0x179C6Cu;
            goto label_179c6c;
        }
    }
    ctx->pc = 0x179C40u;
label_179c40:
    // 0x179c40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x179c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_179c44:
    // 0x179c44: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x179c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_179c48:
    // 0x179c48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_179c4c:
    if (ctx->pc == 0x179C4Cu) {
        ctx->pc = 0x179C4Cu;
            // 0x179c4c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x179C50u;
        goto label_179c50;
    }
    ctx->pc = 0x179C48u;
    {
        const bool branch_taken_0x179c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c48) {
            ctx->pc = 0x179C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179C48u;
            // 0x179c4c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179C60u;
            goto label_179c60;
        }
    }
    ctx->pc = 0x179C50u;
label_179c50:
    // 0x179c50: 0x40f809  jalr        $v0
label_179c54:
    if (ctx->pc == 0x179C54u) {
        ctx->pc = 0x179C54u;
            // 0x179c54: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x179C58u;
        goto label_179c58;
    }
    ctx->pc = 0x179C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179C58u);
        ctx->pc = 0x179C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179C50u;
            // 0x179c54: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179C58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179C58u; }
            if (ctx->pc != 0x179C58u) { return; }
        }
        }
    }
    ctx->pc = 0x179C58u;
label_179c58:
    // 0x179c58: 0x10000003  b           . + 4 + (0x3 << 2)
label_179c5c:
    if (ctx->pc == 0x179C5Cu) {
        ctx->pc = 0x179C5Cu;
            // 0x179c5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179C60u;
        goto label_179c60;
    }
    ctx->pc = 0x179C58u;
    {
        const bool branch_taken_0x179c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179C58u;
            // 0x179c5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c58) {
            ctx->pc = 0x179C68u;
            goto label_179c68;
        }
    }
    ctx->pc = 0x179C60u;
label_179c60:
    // 0x179c60: 0xc05e0a6  jal         func_178298
label_179c64:
    if (ctx->pc == 0x179C64u) {
        ctx->pc = 0x179C64u;
            // 0x179c64: 0x248454c8  addiu       $a0, $a0, 0x54C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21704));
        ctx->pc = 0x179C68u;
        goto label_179c68;
    }
    ctx->pc = 0x179C60u;
    SET_GPR_U32(ctx, 31, 0x179C68u);
    ctx->pc = 0x179C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179C60u;
            // 0x179c64: 0x248454c8  addiu       $a0, $a0, 0x54C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C68u; }
        if (ctx->pc != 0x179C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C68u; }
        if (ctx->pc != 0x179C68u) { return; }
    }
    ctx->pc = 0x179C68u;
label_179c68:
    // 0x179c68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x179c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179c6c:
    // 0x179c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179c70:
    // 0x179c70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x179c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_179c74:
    // 0x179c74: 0x3e00008  jr          $ra
label_179c78:
    if (ctx->pc == 0x179C78u) {
        ctx->pc = 0x179C78u;
            // 0x179c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x179C7Cu;
        goto label_179c7c;
    }
    ctx->pc = 0x179C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179C74u;
            // 0x179c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179C7Cu;
label_179c7c:
    // 0x179c7c: 0x0  nop
    ctx->pc = 0x179c7cu;
    // NOP
label_179c80:
    // 0x179c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_179c84:
    // 0x179c84: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x179c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_179c88:
    // 0x179c88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x179c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179c8c:
    // 0x179c8c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x179c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_179c90:
    // 0x179c90: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_179c94:
    if (ctx->pc == 0x179C94u) {
        ctx->pc = 0x179C94u;
            // 0x179c94: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->pc = 0x179C98u;
        goto label_179c98;
    }
    ctx->pc = 0x179C90u;
    {
        const bool branch_taken_0x179c90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179C90u;
            // 0x179c94: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c90) {
            ctx->pc = 0x179CA8u;
            goto label_179ca8;
        }
    }
    ctx->pc = 0x179C98u;
label_179c98:
    // 0x179c98: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179c9c:
    // 0x179c9c: 0x10000011  b           . + 4 + (0x11 << 2)
label_179ca0:
    if (ctx->pc == 0x179CA0u) {
        ctx->pc = 0x179CA0u;
            // 0x179ca0: 0x248454e8  addiu       $a0, $a0, 0x54E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21736));
        ctx->pc = 0x179CA4u;
        goto label_179ca4;
    }
    ctx->pc = 0x179C9Cu;
    {
        const bool branch_taken_0x179c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179C9Cu;
            // 0x179ca0: 0x248454e8  addiu       $a0, $a0, 0x54E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c9c) {
            ctx->pc = 0x179CE4u;
            goto label_179ce4;
        }
    }
    ctx->pc = 0x179CA4u;
label_179ca4:
    // 0x179ca4: 0x0  nop
    ctx->pc = 0x179ca4u;
    // NOP
label_179ca8:
    // 0x179ca8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_179cac:
    if (ctx->pc == 0x179CACu) {
        ctx->pc = 0x179CB0u;
        goto label_179cb0;
    }
    ctx->pc = 0x179CA8u;
    {
        const bool branch_taken_0x179ca8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x179ca8) {
            ctx->pc = 0x179CC0u;
            goto label_179cc0;
        }
    }
    ctx->pc = 0x179CB0u;
label_179cb0:
    // 0x179cb0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179cb4:
    // 0x179cb4: 0x1000000b  b           . + 4 + (0xB << 2)
label_179cb8:
    if (ctx->pc == 0x179CB8u) {
        ctx->pc = 0x179CB8u;
            // 0x179cb8: 0x24845510  addiu       $a0, $a0, 0x5510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21776));
        ctx->pc = 0x179CBCu;
        goto label_179cbc;
    }
    ctx->pc = 0x179CB4u;
    {
        const bool branch_taken_0x179cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179CB4u;
            // 0x179cb8: 0x24845510  addiu       $a0, $a0, 0x5510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cb4) {
            ctx->pc = 0x179CE4u;
            goto label_179ce4;
        }
    }
    ctx->pc = 0x179CBCu;
label_179cbc:
    // 0x179cbc: 0x0  nop
    ctx->pc = 0x179cbcu;
    // NOP
label_179cc0:
    // 0x179cc0: 0xc05e158  jal         func_178560
label_179cc4:
    if (ctx->pc == 0x179CC4u) {
        ctx->pc = 0x179CC8u;
        goto label_179cc8;
    }
    ctx->pc = 0x179CC0u;
    SET_GPR_U32(ctx, 31, 0x179CC8u);
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179CC8u; }
        if (ctx->pc != 0x179CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179CC8u; }
        if (ctx->pc != 0x179CC8u) { return; }
    }
    ctx->pc = 0x179CC8u;
label_179cc8:
    // 0x179cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179ccc:
    // 0x179ccc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x179cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179cd0:
    // 0x179cd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179cd4:
    // 0x179cd4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_179cd8:
    if (ctx->pc == 0x179CD8u) {
        ctx->pc = 0x179CD8u;
            // 0x179cd8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x179CDCu;
        goto label_179cdc;
    }
    ctx->pc = 0x179CD4u;
    {
        const bool branch_taken_0x179cd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x179CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179CD4u;
            // 0x179cd8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cd4) {
            ctx->pc = 0x179CF8u;
            goto label_179cf8;
        }
    }
    ctx->pc = 0x179CDCu;
label_179cdc:
    // 0x179cdc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179ce0:
    // 0x179ce0: 0x24845540  addiu       $a0, $a0, 0x5540
    ctx->pc = 0x179ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21824));
label_179ce4:
    // 0x179ce4: 0xc05e0a6  jal         func_178298
label_179ce8:
    if (ctx->pc == 0x179CE8u) {
        ctx->pc = 0x179CECu;
        goto label_179cec;
    }
    ctx->pc = 0x179CE4u;
    SET_GPR_U32(ctx, 31, 0x179CECu);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179CECu; }
        if (ctx->pc != 0x179CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179CECu; }
        if (ctx->pc != 0x179CECu) { return; }
    }
    ctx->pc = 0x179CECu;
label_179cec:
    // 0x179cec: 0x1000000e  b           . + 4 + (0xE << 2)
label_179cf0:
    if (ctx->pc == 0x179CF0u) {
        ctx->pc = 0x179CF0u;
            // 0x179cf0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x179CF4u;
        goto label_179cf4;
    }
    ctx->pc = 0x179CECu;
    {
        const bool branch_taken_0x179cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179CECu;
            // 0x179cf0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cec) {
            ctx->pc = 0x179D28u;
            goto label_179d28;
        }
    }
    ctx->pc = 0x179CF4u;
label_179cf4:
    // 0x179cf4: 0x0  nop
    ctx->pc = 0x179cf4u;
    // NOP
label_179cf8:
    // 0x179cf8: 0xc04a576  jal         func_1295D8
label_179cfc:
    if (ctx->pc == 0x179CFCu) {
        ctx->pc = 0x179D00u;
        goto label_179d00;
    }
    ctx->pc = 0x179CF8u;
    SET_GPR_U32(ctx, 31, 0x179D00u);
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179D00u; }
        if (ctx->pc != 0x179D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179D00u; }
        if (ctx->pc != 0x179D00u) { return; }
    }
    ctx->pc = 0x179D00u;
label_179d00:
    // 0x179d00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x179d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_179d04:
    // 0x179d04: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x179d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_179d08:
    // 0x179d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179d0c:
    // 0x179d0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x179d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179d10:
    // 0x179d10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179d14:
    // 0x179d14: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x179d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_179d18:
    // 0x179d18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_179d1c:
    if (ctx->pc == 0x179D1Cu) {
        ctx->pc = 0x179D1Cu;
            // 0x179d1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179D20u;
        goto label_179d20;
    }
    ctx->pc = 0x179D18u;
    {
        const bool branch_taken_0x179d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179D18u;
            // 0x179d1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d18) {
            ctx->pc = 0x179D28u;
            goto label_179d28;
        }
    }
    ctx->pc = 0x179D20u;
label_179d20:
    // 0x179d20: 0x60f809  jalr        $v1
label_179d24:
    if (ctx->pc == 0x179D24u) {
        ctx->pc = 0x179D28u;
        goto label_179d28;
    }
    ctx->pc = 0x179D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x179D28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x179D28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179D28u; }
            if (ctx->pc != 0x179D28u) { return; }
        }
        }
    }
    ctx->pc = 0x179D28u;
label_179d28:
    // 0x179d28: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x179d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_179d2c:
    // 0x179d2c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x179d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_179d30:
    // 0x179d30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x179d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_179d34:
    // 0x179d34: 0x3e00008  jr          $ra
label_179d38:
    if (ctx->pc == 0x179D38u) {
        ctx->pc = 0x179D38u;
            // 0x179d38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x179D3Cu;
        goto label_179d3c;
    }
    ctx->pc = 0x179D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179D34u;
            // 0x179d38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179D3Cu;
label_179d3c:
    // 0x179d3c: 0x0  nop
    ctx->pc = 0x179d3cu;
    // NOP
label_179d40:
    // 0x179d40: 0x3e00008  jr          $ra
label_179d44:
    if (ctx->pc == 0x179D44u) {
        ctx->pc = 0x179D44u;
            // 0x179d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179D48u;
        goto label_fallthrough_0x179d40;
    }
    ctx->pc = 0x179D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179D40u;
            // 0x179d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x179d40:
    ctx->pc = 0x179D48u;
}
