#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5B20
// Address: 0x2b5b20 - 0x2b5c50
void sub_002B5B20_0x2b5b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5B20_0x2b5b20");
#endif

    switch (ctx->pc) {
        case 0x2b5b20u: goto label_2b5b20;
        case 0x2b5b24u: goto label_2b5b24;
        case 0x2b5b28u: goto label_2b5b28;
        case 0x2b5b2cu: goto label_2b5b2c;
        case 0x2b5b30u: goto label_2b5b30;
        case 0x2b5b34u: goto label_2b5b34;
        case 0x2b5b38u: goto label_2b5b38;
        case 0x2b5b3cu: goto label_2b5b3c;
        case 0x2b5b40u: goto label_2b5b40;
        case 0x2b5b44u: goto label_2b5b44;
        case 0x2b5b48u: goto label_2b5b48;
        case 0x2b5b4cu: goto label_2b5b4c;
        case 0x2b5b50u: goto label_2b5b50;
        case 0x2b5b54u: goto label_2b5b54;
        case 0x2b5b58u: goto label_2b5b58;
        case 0x2b5b5cu: goto label_2b5b5c;
        case 0x2b5b60u: goto label_2b5b60;
        case 0x2b5b64u: goto label_2b5b64;
        case 0x2b5b68u: goto label_2b5b68;
        case 0x2b5b6cu: goto label_2b5b6c;
        case 0x2b5b70u: goto label_2b5b70;
        case 0x2b5b74u: goto label_2b5b74;
        case 0x2b5b78u: goto label_2b5b78;
        case 0x2b5b7cu: goto label_2b5b7c;
        case 0x2b5b80u: goto label_2b5b80;
        case 0x2b5b84u: goto label_2b5b84;
        case 0x2b5b88u: goto label_2b5b88;
        case 0x2b5b8cu: goto label_2b5b8c;
        case 0x2b5b90u: goto label_2b5b90;
        case 0x2b5b94u: goto label_2b5b94;
        case 0x2b5b98u: goto label_2b5b98;
        case 0x2b5b9cu: goto label_2b5b9c;
        case 0x2b5ba0u: goto label_2b5ba0;
        case 0x2b5ba4u: goto label_2b5ba4;
        case 0x2b5ba8u: goto label_2b5ba8;
        case 0x2b5bacu: goto label_2b5bac;
        case 0x2b5bb0u: goto label_2b5bb0;
        case 0x2b5bb4u: goto label_2b5bb4;
        case 0x2b5bb8u: goto label_2b5bb8;
        case 0x2b5bbcu: goto label_2b5bbc;
        case 0x2b5bc0u: goto label_2b5bc0;
        case 0x2b5bc4u: goto label_2b5bc4;
        case 0x2b5bc8u: goto label_2b5bc8;
        case 0x2b5bccu: goto label_2b5bcc;
        case 0x2b5bd0u: goto label_2b5bd0;
        case 0x2b5bd4u: goto label_2b5bd4;
        case 0x2b5bd8u: goto label_2b5bd8;
        case 0x2b5bdcu: goto label_2b5bdc;
        case 0x2b5be0u: goto label_2b5be0;
        case 0x2b5be4u: goto label_2b5be4;
        case 0x2b5be8u: goto label_2b5be8;
        case 0x2b5becu: goto label_2b5bec;
        case 0x2b5bf0u: goto label_2b5bf0;
        case 0x2b5bf4u: goto label_2b5bf4;
        case 0x2b5bf8u: goto label_2b5bf8;
        case 0x2b5bfcu: goto label_2b5bfc;
        case 0x2b5c00u: goto label_2b5c00;
        case 0x2b5c04u: goto label_2b5c04;
        case 0x2b5c08u: goto label_2b5c08;
        case 0x2b5c0cu: goto label_2b5c0c;
        case 0x2b5c10u: goto label_2b5c10;
        case 0x2b5c14u: goto label_2b5c14;
        case 0x2b5c18u: goto label_2b5c18;
        case 0x2b5c1cu: goto label_2b5c1c;
        case 0x2b5c20u: goto label_2b5c20;
        case 0x2b5c24u: goto label_2b5c24;
        case 0x2b5c28u: goto label_2b5c28;
        case 0x2b5c2cu: goto label_2b5c2c;
        case 0x2b5c30u: goto label_2b5c30;
        case 0x2b5c34u: goto label_2b5c34;
        case 0x2b5c38u: goto label_2b5c38;
        case 0x2b5c3cu: goto label_2b5c3c;
        case 0x2b5c40u: goto label_2b5c40;
        case 0x2b5c44u: goto label_2b5c44;
        case 0x2b5c48u: goto label_2b5c48;
        case 0x2b5c4cu: goto label_2b5c4c;
        default: break;
    }

    ctx->pc = 0x2b5b20u;

label_2b5b20:
    // 0x2b5b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b5b24:
    // 0x2b5b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b5b28:
    // 0x2b5b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b5b2c:
    // 0x2b5b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b5b30:
    // 0x2b5b30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b5b34:
    // 0x2b5b34: 0x1220003e  beqz        $s1, . + 4 + (0x3E << 2)
label_2b5b38:
    if (ctx->pc == 0x2B5B38u) {
        ctx->pc = 0x2B5B38u;
            // 0x2b5b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B3Cu;
        goto label_2b5b3c;
    }
    ctx->pc = 0x2B5B34u;
    {
        const bool branch_taken_0x2b5b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B34u;
            // 0x2b5b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b34) {
            ctx->pc = 0x2B5C30u;
            goto label_2b5c30;
        }
    }
    ctx->pc = 0x2B5B3Cu;
label_2b5b3c:
    // 0x2b5b3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b5b40:
    // 0x2b5b40: 0x24422e80  addiu       $v0, $v0, 0x2E80
    ctx->pc = 0x2b5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
label_2b5b44:
    // 0x2b5b44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b5b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b5b48:
    // 0x2b5b48: 0x8e24012c  lw          $a0, 0x12C($s1)
    ctx->pc = 0x2b5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_2b5b4c:
    // 0x2b5b4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b5b50:
    if (ctx->pc == 0x2B5B50u) {
        ctx->pc = 0x2B5B50u;
            // 0x2b5b50: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x2B5B54u;
        goto label_2b5b54;
    }
    ctx->pc = 0x2B5B4Cu;
    {
        const bool branch_taken_0x2b5b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b4c) {
            ctx->pc = 0x2B5B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B4Cu;
            // 0x2b5b50: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5B68u;
            goto label_2b5b68;
        }
    }
    ctx->pc = 0x2B5B54u;
label_2b5b54:
    // 0x2b5b54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b5b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b5b58:
    // 0x2b5b58: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b5b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b5b5c:
    // 0x2b5b5c: 0x320f809  jalr        $t9
label_2b5b60:
    if (ctx->pc == 0x2B5B60u) {
        ctx->pc = 0x2B5B60u;
            // 0x2b5b60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B5B64u;
        goto label_2b5b64;
    }
    ctx->pc = 0x2B5B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B5B64u);
        ctx->pc = 0x2B5B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B5Cu;
            // 0x2b5b60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B5B64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B64u; }
            if (ctx->pc != 0x2B5B64u) { return; }
        }
        }
    }
    ctx->pc = 0x2B5B64u;
label_2b5b64:
    // 0x2b5b64: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x2b5b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2b5b68:
    // 0x2b5b68: 0xc074a08  jal         func_1D2820
label_2b5b6c:
    if (ctx->pc == 0x2B5B6Cu) {
        ctx->pc = 0x2B5B70u;
        goto label_2b5b70;
    }
    ctx->pc = 0x2B5B68u;
    SET_GPR_U32(ctx, 31, 0x2B5B70u);
    ctx->pc = 0x1D2820u;
    if (runtime->hasFunction(0x1D2820u)) {
        auto targetFn = runtime->lookupFunction(0x1D2820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B70u; }
        if (ctx->pc != 0x2B5B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2820_0x1d2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B70u; }
        if (ctx->pc != 0x2B5B70u) { return; }
    }
    ctx->pc = 0x2B5B70u;
label_2b5b70:
    // 0x2b5b70: 0x26240130  addiu       $a0, $s1, 0x130
    ctx->pc = 0x2b5b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_2b5b74:
    // 0x2b5b74: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
label_2b5b78:
    if (ctx->pc == 0x2B5B78u) {
        ctx->pc = 0x2B5B78u;
            // 0x2b5b78: 0x262200d0  addiu       $v0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->pc = 0x2B5B7Cu;
        goto label_2b5b7c;
    }
    ctx->pc = 0x2B5B74u;
    {
        const bool branch_taken_0x2b5b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b74) {
            ctx->pc = 0x2B5B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B74u;
            // 0x2b5b78: 0x262200d0  addiu       $v0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5BB8u;
            goto label_2b5bb8;
        }
    }
    ctx->pc = 0x2B5B7Cu;
label_2b5b7c:
    // 0x2b5b7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b5b80:
    // 0x2b5b80: 0x24422a30  addiu       $v0, $v0, 0x2A30
    ctx->pc = 0x2b5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
label_2b5b84:
    // 0x2b5b84: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2b5b88:
    if (ctx->pc == 0x2B5B88u) {
        ctx->pc = 0x2B5B88u;
            // 0x2b5b88: 0xae220130  sw          $v0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5B8Cu;
        goto label_2b5b8c;
    }
    ctx->pc = 0x2B5B84u;
    {
        const bool branch_taken_0x2b5b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B84u;
            // 0x2b5b88: 0xae220130  sw          $v0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b84) {
            ctx->pc = 0x2B5BB4u;
            goto label_2b5bb4;
        }
    }
    ctx->pc = 0x2B5B8Cu;
label_2b5b8c:
    // 0x2b5b8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b5b90:
    // 0x2b5b90: 0x24422a20  addiu       $v0, $v0, 0x2A20
    ctx->pc = 0x2b5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10784));
label_2b5b94:
    // 0x2b5b94: 0xc0c6064  jal         func_318190
label_2b5b98:
    if (ctx->pc == 0x2B5B98u) {
        ctx->pc = 0x2B5B98u;
            // 0x2b5b98: 0xae220130  sw          $v0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5B9Cu;
        goto label_2b5b9c;
    }
    ctx->pc = 0x2B5B94u;
    SET_GPR_U32(ctx, 31, 0x2B5B9Cu);
    ctx->pc = 0x2B5B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B94u;
            // 0x2b5b98: 0xae220130  sw          $v0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318190u;
    if (runtime->hasFunction(0x318190u)) {
        auto targetFn = runtime->lookupFunction(0x318190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B9Cu; }
        if (ctx->pc != 0x2B5B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318190_0x318190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B9Cu; }
        if (ctx->pc != 0x2B5B9Cu) { return; }
    }
    ctx->pc = 0x2B5B9Cu;
label_2b5b9c:
    // 0x2b5b9c: 0x26220130  addiu       $v0, $s1, 0x130
    ctx->pc = 0x2b5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_2b5ba0:
    // 0x2b5ba0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b5ba4:
    if (ctx->pc == 0x2B5BA4u) {
        ctx->pc = 0x2B5BA8u;
        goto label_2b5ba8;
    }
    ctx->pc = 0x2B5BA0u;
    {
        const bool branch_taken_0x2b5ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ba0) {
            ctx->pc = 0x2B5BB4u;
            goto label_2b5bb4;
        }
    }
    ctx->pc = 0x2B5BA8u;
label_2b5ba8:
    // 0x2b5ba8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b5bac:
    // 0x2b5bac: 0x24422a10  addiu       $v0, $v0, 0x2A10
    ctx->pc = 0x2b5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
label_2b5bb0:
    // 0x2b5bb0: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x2b5bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
label_2b5bb4:
    // 0x2b5bb4: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x2b5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_2b5bb8:
    // 0x2b5bb8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2b5bbc:
    if (ctx->pc == 0x2B5BBCu) {
        ctx->pc = 0x2B5BBCu;
            // 0x2b5bbc: 0x26220074  addiu       $v0, $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
        ctx->pc = 0x2B5BC0u;
        goto label_2b5bc0;
    }
    ctx->pc = 0x2B5BB8u;
    {
        const bool branch_taken_0x2b5bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5bb8) {
            ctx->pc = 0x2B5BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5BB8u;
            // 0x2b5bbc: 0x26220074  addiu       $v0, $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5BD0u;
            goto label_2b5bd0;
        }
    }
    ctx->pc = 0x2B5BC0u;
label_2b5bc0:
    // 0x2b5bc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b5bc4:
    // 0x2b5bc4: 0x24422a40  addiu       $v0, $v0, 0x2A40
    ctx->pc = 0x2b5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10816));
label_2b5bc8:
    // 0x2b5bc8: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x2b5bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_2b5bcc:
    // 0x2b5bcc: 0x26220074  addiu       $v0, $s1, 0x74
    ctx->pc = 0x2b5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_2b5bd0:
    // 0x2b5bd0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2b5bd4:
    if (ctx->pc == 0x2B5BD4u) {
        ctx->pc = 0x2B5BD4u;
            // 0x2b5bd4: 0x26220054  addiu       $v0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->pc = 0x2B5BD8u;
        goto label_2b5bd8;
    }
    ctx->pc = 0x2B5BD0u;
    {
        const bool branch_taken_0x2b5bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5bd0) {
            ctx->pc = 0x2B5BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5BD0u;
            // 0x2b5bd4: 0x26220054  addiu       $v0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5BE8u;
            goto label_2b5be8;
        }
    }
    ctx->pc = 0x2B5BD8u;
label_2b5bd8:
    // 0x2b5bd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b5bdc:
    // 0x2b5bdc: 0x24422a40  addiu       $v0, $v0, 0x2A40
    ctx->pc = 0x2b5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10816));
label_2b5be0:
    // 0x2b5be0: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x2b5be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_2b5be4:
    // 0x2b5be4: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x2b5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_2b5be8:
    // 0x2b5be8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b5bec:
    if (ctx->pc == 0x2B5BECu) {
        ctx->pc = 0x2B5BF0u;
        goto label_2b5bf0;
    }
    ctx->pc = 0x2B5BE8u;
    {
        const bool branch_taken_0x2b5be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5be8) {
            ctx->pc = 0x2B5BF8u;
            goto label_2b5bf8;
        }
    }
    ctx->pc = 0x2B5BF0u;
label_2b5bf0:
    // 0x2b5bf0: 0xc07507c  jal         func_1D41F0
label_2b5bf4:
    if (ctx->pc == 0x2B5BF4u) {
        ctx->pc = 0x2B5BF4u;
            // 0x2b5bf4: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x2B5BF8u;
        goto label_2b5bf8;
    }
    ctx->pc = 0x2B5BF0u;
    SET_GPR_U32(ctx, 31, 0x2B5BF8u);
    ctx->pc = 0x2B5BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5BF0u;
            // 0x2b5bf4: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5BF8u; }
        if (ctx->pc != 0x2B5BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5BF8u; }
        if (ctx->pc != 0x2B5BF8u) { return; }
    }
    ctx->pc = 0x2B5BF8u;
label_2b5bf8:
    // 0x2b5bf8: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_2b5bfc:
    if (ctx->pc == 0x2B5BFCu) {
        ctx->pc = 0x2B5BFCu;
            // 0x2b5bfc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2B5C00u;
        goto label_2b5c00;
    }
    ctx->pc = 0x2B5BF8u;
    {
        const bool branch_taken_0x2b5bf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5bf8) {
            ctx->pc = 0x2B5BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5BF8u;
            // 0x2b5bfc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5C1Cu;
            goto label_2b5c1c;
        }
    }
    ctx->pc = 0x2B5C00u;
label_2b5c00:
    // 0x2b5c00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b5c04:
    // 0x2b5c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c08:
    // 0x2b5c08: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2b5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2b5c0c:
    // 0x2b5c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b5c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c10:
    // 0x2b5c10: 0xc057a68  jal         func_15E9A0
label_2b5c14:
    if (ctx->pc == 0x2B5C14u) {
        ctx->pc = 0x2B5C14u;
            // 0x2b5c14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5C18u;
        goto label_2b5c18;
    }
    ctx->pc = 0x2B5C10u;
    SET_GPR_U32(ctx, 31, 0x2B5C18u);
    ctx->pc = 0x2B5C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C10u;
            // 0x2b5c14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5C18u; }
        if (ctx->pc != 0x2B5C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5C18u; }
        if (ctx->pc != 0x2B5C18u) { return; }
    }
    ctx->pc = 0x2B5C18u;
label_2b5c18:
    // 0x2b5c18: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b5c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b5c1c:
    // 0x2b5c1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b5c1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b5c20:
    // 0x2b5c20: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2b5c24:
    if (ctx->pc == 0x2B5C24u) {
        ctx->pc = 0x2B5C24u;
            // 0x2b5c24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C28u;
        goto label_2b5c28;
    }
    ctx->pc = 0x2B5C20u;
    {
        const bool branch_taken_0x2b5c20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5c20) {
            ctx->pc = 0x2B5C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C20u;
            // 0x2b5c24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5C34u;
            goto label_2b5c34;
        }
    }
    ctx->pc = 0x2B5C28u;
label_2b5c28:
    // 0x2b5c28: 0xc0400a8  jal         func_1002A0
label_2b5c2c:
    if (ctx->pc == 0x2B5C2Cu) {
        ctx->pc = 0x2B5C2Cu;
            // 0x2b5c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C30u;
        goto label_2b5c30;
    }
    ctx->pc = 0x2B5C28u;
    SET_GPR_U32(ctx, 31, 0x2B5C30u);
    ctx->pc = 0x2B5C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C28u;
            // 0x2b5c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5C30u; }
        if (ctx->pc != 0x2B5C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5C30u; }
        if (ctx->pc != 0x2B5C30u) { return; }
    }
    ctx->pc = 0x2B5C30u;
label_2b5c30:
    // 0x2b5c30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b5c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c34:
    // 0x2b5c34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b5c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b5c38:
    // 0x2b5c38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b5c3c:
    // 0x2b5c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b5c40:
    // 0x2b5c40: 0x3e00008  jr          $ra
label_2b5c44:
    if (ctx->pc == 0x2B5C44u) {
        ctx->pc = 0x2B5C44u;
            // 0x2b5c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B5C48u;
        goto label_2b5c48;
    }
    ctx->pc = 0x2B5C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C40u;
            // 0x2b5c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5C48u;
label_2b5c48:
    // 0x2b5c48: 0x0  nop
    ctx->pc = 0x2b5c48u;
    // NOP
label_2b5c4c:
    // 0x2b5c4c: 0x0  nop
    ctx->pc = 0x2b5c4cu;
    // NOP
}
