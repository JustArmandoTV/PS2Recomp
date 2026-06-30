#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188B40
// Address: 0x188b40 - 0x188bd8
void sub_00188B40_0x188b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188B40_0x188b40");
#endif

    switch (ctx->pc) {
        case 0x188b40u: goto label_188b40;
        case 0x188b44u: goto label_188b44;
        case 0x188b48u: goto label_188b48;
        case 0x188b4cu: goto label_188b4c;
        case 0x188b50u: goto label_188b50;
        case 0x188b54u: goto label_188b54;
        case 0x188b58u: goto label_188b58;
        case 0x188b5cu: goto label_188b5c;
        case 0x188b60u: goto label_188b60;
        case 0x188b64u: goto label_188b64;
        case 0x188b68u: goto label_188b68;
        case 0x188b6cu: goto label_188b6c;
        case 0x188b70u: goto label_188b70;
        case 0x188b74u: goto label_188b74;
        case 0x188b78u: goto label_188b78;
        case 0x188b7cu: goto label_188b7c;
        case 0x188b80u: goto label_188b80;
        case 0x188b84u: goto label_188b84;
        case 0x188b88u: goto label_188b88;
        case 0x188b8cu: goto label_188b8c;
        case 0x188b90u: goto label_188b90;
        case 0x188b94u: goto label_188b94;
        case 0x188b98u: goto label_188b98;
        case 0x188b9cu: goto label_188b9c;
        case 0x188ba0u: goto label_188ba0;
        case 0x188ba4u: goto label_188ba4;
        case 0x188ba8u: goto label_188ba8;
        case 0x188bacu: goto label_188bac;
        case 0x188bb0u: goto label_188bb0;
        case 0x188bb4u: goto label_188bb4;
        case 0x188bb8u: goto label_188bb8;
        case 0x188bbcu: goto label_188bbc;
        case 0x188bc0u: goto label_188bc0;
        case 0x188bc4u: goto label_188bc4;
        case 0x188bc8u: goto label_188bc8;
        case 0x188bccu: goto label_188bcc;
        case 0x188bd0u: goto label_188bd0;
        case 0x188bd4u: goto label_188bd4;
        default: break;
    }

    ctx->pc = 0x188b40u;

label_188b40:
    // 0x188b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_188b44:
    // 0x188b44: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x188b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_188b48:
    // 0x188b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_188b4c:
    // 0x188b4c: 0x2442fe40  addiu       $v0, $v0, -0x1C0
    ctx->pc = 0x188b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
label_188b50:
    // 0x188b50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188b54:
    // 0x188b54: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_188b58:
    if (ctx->pc == 0x188B58u) {
        ctx->pc = 0x188B58u;
            // 0x188b58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x188B5Cu;
        goto label_188b5c;
    }
    ctx->pc = 0x188B54u;
    {
        const bool branch_taken_0x188b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b54) {
            ctx->pc = 0x188B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188B54u;
            // 0x188b58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188B68u;
            goto label_188b68;
        }
    }
    ctx->pc = 0x188B5Cu;
label_188b5c:
    // 0x188b5c: 0x60f809  jalr        $v1
label_188b60:
    if (ctx->pc == 0x188B60u) {
        ctx->pc = 0x188B60u;
            // 0x188b60: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x188B64u;
        goto label_188b64;
    }
    ctx->pc = 0x188B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188B64u);
        ctx->pc = 0x188B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B5Cu;
            // 0x188b60: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x188B64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x188B64u; }
            if (ctx->pc != 0x188B64u) { return; }
        }
        }
    }
    ctx->pc = 0x188B64u;
label_188b64:
    // 0x188b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188b68:
    // 0x188b68: 0x3e00008  jr          $ra
label_188b6c:
    if (ctx->pc == 0x188B6Cu) {
        ctx->pc = 0x188B6Cu;
            // 0x188b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x188B70u;
        goto label_188b70;
    }
    ctx->pc = 0x188B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B68u;
            // 0x188b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188B70u;
label_188b70:
    // 0x188b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_188b74:
    // 0x188b74: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x188b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_188b78:
    // 0x188b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_188b7c:
    // 0x188b7c: 0x2442fe48  addiu       $v0, $v0, -0x1B8
    ctx->pc = 0x188b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966856));
label_188b80:
    // 0x188b80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188b84:
    // 0x188b84: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_188b88:
    if (ctx->pc == 0x188B88u) {
        ctx->pc = 0x188B88u;
            // 0x188b88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x188B8Cu;
        goto label_188b8c;
    }
    ctx->pc = 0x188B84u;
    {
        const bool branch_taken_0x188b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b84) {
            ctx->pc = 0x188B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188B84u;
            // 0x188b88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188B98u;
            goto label_188b98;
        }
    }
    ctx->pc = 0x188B8Cu;
label_188b8c:
    // 0x188b8c: 0x60f809  jalr        $v1
label_188b90:
    if (ctx->pc == 0x188B90u) {
        ctx->pc = 0x188B90u;
            // 0x188b90: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x188B94u;
        goto label_188b94;
    }
    ctx->pc = 0x188B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188B94u);
        ctx->pc = 0x188B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B8Cu;
            // 0x188b90: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x188B94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x188B94u; }
            if (ctx->pc != 0x188B94u) { return; }
        }
        }
    }
    ctx->pc = 0x188B94u;
label_188b94:
    // 0x188b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188b98:
    // 0x188b98: 0x3e00008  jr          $ra
label_188b9c:
    if (ctx->pc == 0x188B9Cu) {
        ctx->pc = 0x188B9Cu;
            // 0x188b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x188BA0u;
        goto label_188ba0;
    }
    ctx->pc = 0x188B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B98u;
            // 0x188b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188BA0u;
label_188ba0:
    // 0x188ba0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x188ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_188ba4:
    // 0x188ba4: 0x3e00008  jr          $ra
label_188ba8:
    if (ctx->pc == 0x188BA8u) {
        ctx->pc = 0x188BA8u;
            // 0x188ba8: 0x2442fba0  addiu       $v0, $v0, -0x460 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966176));
        ctx->pc = 0x188BACu;
        goto label_188bac;
    }
    ctx->pc = 0x188BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BA4u;
            // 0x188ba8: 0x2442fba0  addiu       $v0, $v0, -0x460 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188BACu;
label_188bac:
    // 0x188bac: 0x0  nop
    ctx->pc = 0x188bacu;
    // NOP
label_188bb0:
    // 0x188bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_188bb4:
    // 0x188bb4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x188bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_188bb8:
    // 0x188bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_188bbc:
    // 0x188bbc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x188bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_188bc0:
    // 0x188bc0: 0x2463fe50  addiu       $v1, $v1, -0x1B0
    ctx->pc = 0x188bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966864));
label_188bc4:
    // 0x188bc4: 0x24428108  addiu       $v0, $v0, -0x7EF8
    ctx->pc = 0x188bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934792));
label_188bc8:
    // 0x188bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188bcc:
    // 0x188bcc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x188bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_188bd0:
    // 0x188bd0: 0x8062308  j           func_188C20
label_188bd4:
    if (ctx->pc == 0x188BD4u) {
        ctx->pc = 0x188BD4u;
            // 0x188bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x188BD8u;
        goto label_fallthrough_0x188bd0;
    }
    ctx->pc = 0x188BD0u;
    ctx->pc = 0x188BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188BD0u;
            // 0x188bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188C20u;
    {
        auto targetFn = runtime->lookupFunction(0x188C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
label_fallthrough_0x188bd0:
    ctx->pc = 0x188BD8u;
}
