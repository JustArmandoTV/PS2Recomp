#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8C70
// Address: 0x1d8c70 - 0x1d8ce0
void sub_001D8C70_0x1d8c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8C70_0x1d8c70");
#endif

    switch (ctx->pc) {
        case 0x1d8c70u: goto label_1d8c70;
        case 0x1d8c74u: goto label_1d8c74;
        case 0x1d8c78u: goto label_1d8c78;
        case 0x1d8c7cu: goto label_1d8c7c;
        case 0x1d8c80u: goto label_1d8c80;
        case 0x1d8c84u: goto label_1d8c84;
        case 0x1d8c88u: goto label_1d8c88;
        case 0x1d8c8cu: goto label_1d8c8c;
        case 0x1d8c90u: goto label_1d8c90;
        case 0x1d8c94u: goto label_1d8c94;
        case 0x1d8c98u: goto label_1d8c98;
        case 0x1d8c9cu: goto label_1d8c9c;
        case 0x1d8ca0u: goto label_1d8ca0;
        case 0x1d8ca4u: goto label_1d8ca4;
        case 0x1d8ca8u: goto label_1d8ca8;
        case 0x1d8cacu: goto label_1d8cac;
        case 0x1d8cb0u: goto label_1d8cb0;
        case 0x1d8cb4u: goto label_1d8cb4;
        case 0x1d8cb8u: goto label_1d8cb8;
        case 0x1d8cbcu: goto label_1d8cbc;
        case 0x1d8cc0u: goto label_1d8cc0;
        case 0x1d8cc4u: goto label_1d8cc4;
        case 0x1d8cc8u: goto label_1d8cc8;
        case 0x1d8cccu: goto label_1d8ccc;
        case 0x1d8cd0u: goto label_1d8cd0;
        case 0x1d8cd4u: goto label_1d8cd4;
        case 0x1d8cd8u: goto label_1d8cd8;
        case 0x1d8cdcu: goto label_1d8cdc;
        default: break;
    }

    ctx->pc = 0x1d8c70u;

label_1d8c70:
    // 0x1d8c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d8c74:
    // 0x1d8c74: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d8c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d8c78:
    // 0x1d8c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d8c7c:
    // 0x1d8c7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d8c80:
    // 0x1d8c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d8c84:
    // 0x1d8c84: 0x8c830d9c  lw          $v1, 0xD9C($a0)
    ctx->pc = 0x1d8c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
label_1d8c88:
    // 0x1d8c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c8c:
    // 0x1d8c8c: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x1d8c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1d8c90:
    // 0x1d8c90: 0xac820d9c  sw          $v0, 0xD9C($a0)
    ctx->pc = 0x1d8c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3484), GPR_U32(ctx, 2));
label_1d8c94:
    // 0x1d8c94: 0xac800de4  sw          $zero, 0xDE4($a0)
    ctx->pc = 0x1d8c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3556), GPR_U32(ctx, 0));
label_1d8c98:
    // 0x1d8c98: 0xac800de8  sw          $zero, 0xDE8($a0)
    ctx->pc = 0x1d8c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3560), GPR_U32(ctx, 0));
label_1d8c9c:
    // 0x1d8c9c: 0xac850e40  sw          $a1, 0xE40($a0)
    ctx->pc = 0x1d8c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3648), GPR_U32(ctx, 5));
label_1d8ca0:
    // 0x1d8ca0: 0xac860e44  sw          $a2, 0xE44($a0)
    ctx->pc = 0x1d8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3652), GPR_U32(ctx, 6));
label_1d8ca4:
    // 0x1d8ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ca8:
    // 0x1d8ca8: 0x8c840d70  lw          $a0, 0xD70($a0)
    ctx->pc = 0x1d8ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_1d8cac:
    // 0x1d8cac: 0xc0bdf9c  jal         func_2F7E70
label_1d8cb0:
    if (ctx->pc == 0x1D8CB0u) {
        ctx->pc = 0x1D8CB0u;
            // 0x1d8cb0: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1D8CB4u;
        goto label_1d8cb4;
    }
    ctx->pc = 0x1D8CACu;
    SET_GPR_U32(ctx, 31, 0x1D8CB4u);
    ctx->pc = 0x1D8CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CACu;
            // 0x1d8cb0: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CB4u; }
        if (ctx->pc != 0x1D8CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CB4u; }
        if (ctx->pc != 0x1D8CB4u) { return; }
    }
    ctx->pc = 0x1D8CB4u;
label_1d8cb4:
    // 0x1d8cb4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1d8cb8:
    if (ctx->pc == 0x1D8CB8u) {
        ctx->pc = 0x1D8CB8u;
            // 0x1d8cb8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1D8CBCu;
        goto label_1d8cbc;
    }
    ctx->pc = 0x1D8CB4u;
    {
        const bool branch_taken_0x1d8cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8cb4) {
            ctx->pc = 0x1D8CB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CB4u;
            // 0x1d8cb8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8CD4u;
            goto label_1d8cd4;
        }
    }
    ctx->pc = 0x1D8CBCu;
label_1d8cbc:
    // 0x1d8cbc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1d8cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d8cc0:
    // 0x1d8cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d8cc4:
    // 0x1d8cc4: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x1d8cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_1d8cc8:
    // 0x1d8cc8: 0x320f809  jalr        $t9
label_1d8ccc:
    if (ctx->pc == 0x1D8CCCu) {
        ctx->pc = 0x1D8CCCu;
            // 0x1d8ccc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1D8CD0u;
        goto label_1d8cd0;
    }
    ctx->pc = 0x1D8CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D8CD0u);
        ctx->pc = 0x1D8CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CC8u;
            // 0x1d8ccc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D8CD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CD0u; }
            if (ctx->pc != 0x1D8CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D8CD0u;
label_1d8cd0:
    // 0x1d8cd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8cd4:
    // 0x1d8cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8cd8:
    // 0x1d8cd8: 0x3e00008  jr          $ra
label_1d8cdc:
    if (ctx->pc == 0x1D8CDCu) {
        ctx->pc = 0x1D8CDCu;
            // 0x1d8cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D8CE0u;
        goto label_fallthrough_0x1d8cd8;
    }
    ctx->pc = 0x1D8CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CD8u;
            // 0x1d8cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d8cd8:
    ctx->pc = 0x1D8CE0u;
}
