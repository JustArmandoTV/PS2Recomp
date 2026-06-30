#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178C80
// Address: 0x178c80 - 0x178cf8
void sub_00178C80_0x178c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178C80_0x178c80");
#endif

    switch (ctx->pc) {
        case 0x178c80u: goto label_178c80;
        case 0x178c84u: goto label_178c84;
        case 0x178c88u: goto label_178c88;
        case 0x178c8cu: goto label_178c8c;
        case 0x178c90u: goto label_178c90;
        case 0x178c94u: goto label_178c94;
        case 0x178c98u: goto label_178c98;
        case 0x178c9cu: goto label_178c9c;
        case 0x178ca0u: goto label_178ca0;
        case 0x178ca4u: goto label_178ca4;
        case 0x178ca8u: goto label_178ca8;
        case 0x178cacu: goto label_178cac;
        case 0x178cb0u: goto label_178cb0;
        case 0x178cb4u: goto label_178cb4;
        case 0x178cb8u: goto label_178cb8;
        case 0x178cbcu: goto label_178cbc;
        case 0x178cc0u: goto label_178cc0;
        case 0x178cc4u: goto label_178cc4;
        case 0x178cc8u: goto label_178cc8;
        case 0x178cccu: goto label_178ccc;
        case 0x178cd0u: goto label_178cd0;
        case 0x178cd4u: goto label_178cd4;
        case 0x178cd8u: goto label_178cd8;
        case 0x178cdcu: goto label_178cdc;
        case 0x178ce0u: goto label_178ce0;
        case 0x178ce4u: goto label_178ce4;
        case 0x178ce8u: goto label_178ce8;
        case 0x178cecu: goto label_178cec;
        case 0x178cf0u: goto label_178cf0;
        case 0x178cf4u: goto label_178cf4;
        default: break;
    }

    ctx->pc = 0x178c80u;

label_178c80:
    // 0x178c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178c84:
    // 0x178c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178c88:
    // 0x178c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_178c8c:
    // 0x178c8c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_178c90:
    if (ctx->pc == 0x178C90u) {
        ctx->pc = 0x178C90u;
            // 0x178c90: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x178C94u;
        goto label_178c94;
    }
    ctx->pc = 0x178C8Cu;
    {
        const bool branch_taken_0x178c8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x178C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178C8Cu;
            // 0x178c90: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c8c) {
            ctx->pc = 0x178CB0u;
            goto label_178cb0;
        }
    }
    ctx->pc = 0x178C94u;
label_178c94:
    // 0x178c94: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178c98:
    // 0x178c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178c9c:
    // 0x178c9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_178ca0:
    // 0x178ca0: 0x24844cd8  addiu       $a0, $a0, 0x4CD8
    ctx->pc = 0x178ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19672));
label_178ca4:
    // 0x178ca4: 0x805e0a6  j           func_178298
label_178ca8:
    if (ctx->pc == 0x178CA8u) {
        ctx->pc = 0x178CA8u;
            // 0x178ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178CACu;
        goto label_178cac;
    }
    ctx->pc = 0x178CA4u;
    ctx->pc = 0x178CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178CA4u;
            // 0x178ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x178CACu;
label_178cac:
    // 0x178cac: 0x0  nop
    ctx->pc = 0x178cacu;
    // NOP
label_178cb0:
    // 0x178cb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x178cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_178cb4:
    // 0x178cb4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x178cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_178cb8:
    // 0x178cb8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_178cbc:
    if (ctx->pc == 0x178CBCu) {
        ctx->pc = 0x178CBCu;
            // 0x178cbc: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x178CC0u;
        goto label_178cc0;
    }
    ctx->pc = 0x178CB8u;
    {
        const bool branch_taken_0x178cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178cb8) {
            ctx->pc = 0x178CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178CB8u;
            // 0x178cbc: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178CE0u;
            goto label_178ce0;
        }
    }
    ctx->pc = 0x178CC0u;
label_178cc0:
    // 0x178cc0: 0x40f809  jalr        $v0
label_178cc4:
    if (ctx->pc == 0x178CC4u) {
        ctx->pc = 0x178CC4u;
            // 0x178cc4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x178CC8u;
        goto label_178cc8;
    }
    ctx->pc = 0x178CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178CC8u);
        ctx->pc = 0x178CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178CC0u;
            // 0x178cc4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178CC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178CC8u; }
            if (ctx->pc != 0x178CC8u) { return; }
        }
        }
    }
    ctx->pc = 0x178CC8u;
label_178cc8:
    // 0x178cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178ccc:
    // 0x178ccc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_178cd0:
    // 0x178cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178cd4:
    // 0x178cd4: 0x805e2b0  j           func_178AC0
label_178cd8:
    if (ctx->pc == 0x178CD8u) {
        ctx->pc = 0x178CD8u;
            // 0x178cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178CDCu;
        goto label_178cdc;
    }
    ctx->pc = 0x178CD4u;
    ctx->pc = 0x178CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178CD4u;
            // 0x178cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AC0u;
    if (runtime->hasFunction(0x178AC0u)) {
        auto targetFn = runtime->lookupFunction(0x178AC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178AC0_0x178ac0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x178CDCu;
label_178cdc:
    // 0x178cdc: 0x0  nop
    ctx->pc = 0x178cdcu;
    // NOP
label_178ce0:
    // 0x178ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178ce4:
    // 0x178ce4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_178ce8:
    // 0x178ce8: 0x24844cf8  addiu       $a0, $a0, 0x4CF8
    ctx->pc = 0x178ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19704));
label_178cec:
    // 0x178cec: 0x805e0a6  j           func_178298
label_178cf0:
    if (ctx->pc == 0x178CF0u) {
        ctx->pc = 0x178CF0u;
            // 0x178cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178CF4u;
        goto label_178cf4;
    }
    ctx->pc = 0x178CECu;
    ctx->pc = 0x178CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178CECu;
            // 0x178cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x178CF4u;
label_178cf4:
    // 0x178cf4: 0x0  nop
    ctx->pc = 0x178cf4u;
    // NOP
}
