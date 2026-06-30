#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B9B50
// Address: 0x2b9b50 - 0x2b9cc0
void sub_002B9B50_0x2b9b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9B50_0x2b9b50");
#endif

    switch (ctx->pc) {
        case 0x2b9b50u: goto label_2b9b50;
        case 0x2b9b54u: goto label_2b9b54;
        case 0x2b9b58u: goto label_2b9b58;
        case 0x2b9b5cu: goto label_2b9b5c;
        case 0x2b9b60u: goto label_2b9b60;
        case 0x2b9b64u: goto label_2b9b64;
        case 0x2b9b68u: goto label_2b9b68;
        case 0x2b9b6cu: goto label_2b9b6c;
        case 0x2b9b70u: goto label_2b9b70;
        case 0x2b9b74u: goto label_2b9b74;
        case 0x2b9b78u: goto label_2b9b78;
        case 0x2b9b7cu: goto label_2b9b7c;
        case 0x2b9b80u: goto label_2b9b80;
        case 0x2b9b84u: goto label_2b9b84;
        case 0x2b9b88u: goto label_2b9b88;
        case 0x2b9b8cu: goto label_2b9b8c;
        case 0x2b9b90u: goto label_2b9b90;
        case 0x2b9b94u: goto label_2b9b94;
        case 0x2b9b98u: goto label_2b9b98;
        case 0x2b9b9cu: goto label_2b9b9c;
        case 0x2b9ba0u: goto label_2b9ba0;
        case 0x2b9ba4u: goto label_2b9ba4;
        case 0x2b9ba8u: goto label_2b9ba8;
        case 0x2b9bacu: goto label_2b9bac;
        case 0x2b9bb0u: goto label_2b9bb0;
        case 0x2b9bb4u: goto label_2b9bb4;
        case 0x2b9bb8u: goto label_2b9bb8;
        case 0x2b9bbcu: goto label_2b9bbc;
        case 0x2b9bc0u: goto label_2b9bc0;
        case 0x2b9bc4u: goto label_2b9bc4;
        case 0x2b9bc8u: goto label_2b9bc8;
        case 0x2b9bccu: goto label_2b9bcc;
        case 0x2b9bd0u: goto label_2b9bd0;
        case 0x2b9bd4u: goto label_2b9bd4;
        case 0x2b9bd8u: goto label_2b9bd8;
        case 0x2b9bdcu: goto label_2b9bdc;
        case 0x2b9be0u: goto label_2b9be0;
        case 0x2b9be4u: goto label_2b9be4;
        case 0x2b9be8u: goto label_2b9be8;
        case 0x2b9becu: goto label_2b9bec;
        case 0x2b9bf0u: goto label_2b9bf0;
        case 0x2b9bf4u: goto label_2b9bf4;
        case 0x2b9bf8u: goto label_2b9bf8;
        case 0x2b9bfcu: goto label_2b9bfc;
        case 0x2b9c00u: goto label_2b9c00;
        case 0x2b9c04u: goto label_2b9c04;
        case 0x2b9c08u: goto label_2b9c08;
        case 0x2b9c0cu: goto label_2b9c0c;
        case 0x2b9c10u: goto label_2b9c10;
        case 0x2b9c14u: goto label_2b9c14;
        case 0x2b9c18u: goto label_2b9c18;
        case 0x2b9c1cu: goto label_2b9c1c;
        case 0x2b9c20u: goto label_2b9c20;
        case 0x2b9c24u: goto label_2b9c24;
        case 0x2b9c28u: goto label_2b9c28;
        case 0x2b9c2cu: goto label_2b9c2c;
        case 0x2b9c30u: goto label_2b9c30;
        case 0x2b9c34u: goto label_2b9c34;
        case 0x2b9c38u: goto label_2b9c38;
        case 0x2b9c3cu: goto label_2b9c3c;
        case 0x2b9c40u: goto label_2b9c40;
        case 0x2b9c44u: goto label_2b9c44;
        case 0x2b9c48u: goto label_2b9c48;
        case 0x2b9c4cu: goto label_2b9c4c;
        case 0x2b9c50u: goto label_2b9c50;
        case 0x2b9c54u: goto label_2b9c54;
        case 0x2b9c58u: goto label_2b9c58;
        case 0x2b9c5cu: goto label_2b9c5c;
        case 0x2b9c60u: goto label_2b9c60;
        case 0x2b9c64u: goto label_2b9c64;
        case 0x2b9c68u: goto label_2b9c68;
        case 0x2b9c6cu: goto label_2b9c6c;
        case 0x2b9c70u: goto label_2b9c70;
        case 0x2b9c74u: goto label_2b9c74;
        case 0x2b9c78u: goto label_2b9c78;
        case 0x2b9c7cu: goto label_2b9c7c;
        case 0x2b9c80u: goto label_2b9c80;
        case 0x2b9c84u: goto label_2b9c84;
        case 0x2b9c88u: goto label_2b9c88;
        case 0x2b9c8cu: goto label_2b9c8c;
        case 0x2b9c90u: goto label_2b9c90;
        case 0x2b9c94u: goto label_2b9c94;
        case 0x2b9c98u: goto label_2b9c98;
        case 0x2b9c9cu: goto label_2b9c9c;
        case 0x2b9ca0u: goto label_2b9ca0;
        case 0x2b9ca4u: goto label_2b9ca4;
        case 0x2b9ca8u: goto label_2b9ca8;
        case 0x2b9cacu: goto label_2b9cac;
        case 0x2b9cb0u: goto label_2b9cb0;
        case 0x2b9cb4u: goto label_2b9cb4;
        case 0x2b9cb8u: goto label_2b9cb8;
        case 0x2b9cbcu: goto label_2b9cbc;
        default: break;
    }

    ctx->pc = 0x2b9b50u;

label_2b9b50:
    // 0x2b9b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b9b54:
    // 0x2b9b54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b9b58:
    // 0x2b9b58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b9b5c:
    // 0x2b9b5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b9b60:
    // 0x2b9b60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b64:
    // 0x2b9b64: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2b9b68:
    if (ctx->pc == 0x2B9B68u) {
        ctx->pc = 0x2B9B68u;
            // 0x2b9b68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B6Cu;
        goto label_2b9b6c;
    }
    ctx->pc = 0x2B9B64u;
    {
        const bool branch_taken_0x2b9b64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9B64u;
            // 0x2b9b68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b64) {
            ctx->pc = 0x2B9BA8u;
            goto label_2b9ba8;
        }
    }
    ctx->pc = 0x2B9B6Cu;
label_2b9b6c:
    // 0x2b9b6c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2b9b70:
    if (ctx->pc == 0x2B9B70u) {
        ctx->pc = 0x2B9B70u;
            // 0x2b9b70: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2B9B74u;
        goto label_2b9b74;
    }
    ctx->pc = 0x2B9B6Cu;
    {
        const bool branch_taken_0x2b9b6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b6c) {
            ctx->pc = 0x2B9B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9B6Cu;
            // 0x2b9b70: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9B94u;
            goto label_2b9b94;
        }
    }
    ctx->pc = 0x2B9B74u;
label_2b9b74:
    // 0x2b9b74: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2b9b78:
    if (ctx->pc == 0x2B9B78u) {
        ctx->pc = 0x2B9B7Cu;
        goto label_2b9b7c;
    }
    ctx->pc = 0x2B9B74u;
    {
        const bool branch_taken_0x2b9b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b74) {
            ctx->pc = 0x2B9B90u;
            goto label_2b9b90;
        }
    }
    ctx->pc = 0x2B9B7Cu;
label_2b9b7c:
    // 0x2b9b7c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2b9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2b9b80:
    // 0x2b9b80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b9b84:
    if (ctx->pc == 0x2B9B84u) {
        ctx->pc = 0x2B9B88u;
        goto label_2b9b88;
    }
    ctx->pc = 0x2B9B80u;
    {
        const bool branch_taken_0x2b9b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b80) {
            ctx->pc = 0x2B9B90u;
            goto label_2b9b90;
        }
    }
    ctx->pc = 0x2B9B88u;
label_2b9b88:
    // 0x2b9b88: 0xc0400a8  jal         func_1002A0
label_2b9b8c:
    if (ctx->pc == 0x2B9B8Cu) {
        ctx->pc = 0x2B9B90u;
        goto label_2b9b90;
    }
    ctx->pc = 0x2B9B88u;
    SET_GPR_U32(ctx, 31, 0x2B9B90u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9B90u; }
        if (ctx->pc != 0x2B9B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9B90u; }
        if (ctx->pc != 0x2B9B90u) { return; }
    }
    ctx->pc = 0x2B9B90u;
label_2b9b90:
    // 0x2b9b90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b9b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b9b94:
    // 0x2b9b94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b9b94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b9b98:
    // 0x2b9b98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2b9b9c:
    if (ctx->pc == 0x2B9B9Cu) {
        ctx->pc = 0x2B9B9Cu;
            // 0x2b9b9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BA0u;
        goto label_2b9ba0;
    }
    ctx->pc = 0x2B9B98u;
    {
        const bool branch_taken_0x2b9b98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b9b98) {
            ctx->pc = 0x2B9B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9B98u;
            // 0x2b9b9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9BACu;
            goto label_2b9bac;
        }
    }
    ctx->pc = 0x2B9BA0u;
label_2b9ba0:
    // 0x2b9ba0: 0xc0400a8  jal         func_1002A0
label_2b9ba4:
    if (ctx->pc == 0x2B9BA4u) {
        ctx->pc = 0x2B9BA4u;
            // 0x2b9ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BA8u;
        goto label_2b9ba8;
    }
    ctx->pc = 0x2B9BA0u;
    SET_GPR_U32(ctx, 31, 0x2B9BA8u);
    ctx->pc = 0x2B9BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9BA0u;
            // 0x2b9ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9BA8u; }
        if (ctx->pc != 0x2B9BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9BA8u; }
        if (ctx->pc != 0x2B9BA8u) { return; }
    }
    ctx->pc = 0x2B9BA8u;
label_2b9ba8:
    // 0x2b9ba8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b9ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9bac:
    // 0x2b9bac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9bb0:
    // 0x2b9bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9bb4:
    // 0x2b9bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9bb8:
    // 0x2b9bb8: 0x3e00008  jr          $ra
label_2b9bbc:
    if (ctx->pc == 0x2B9BBCu) {
        ctx->pc = 0x2B9BBCu;
            // 0x2b9bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B9BC0u;
        goto label_2b9bc0;
    }
    ctx->pc = 0x2B9BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9BB8u;
            // 0x2b9bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9BC0u;
label_2b9bc0:
    // 0x2b9bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b9bc4:
    // 0x2b9bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b9bc8:
    // 0x2b9bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b9bcc:
    // 0x2b9bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b9bd0:
    // 0x2b9bd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9bd4:
    // 0x2b9bd4: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2b9bd8:
    if (ctx->pc == 0x2B9BD8u) {
        ctx->pc = 0x2B9BD8u;
            // 0x2b9bd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BDCu;
        goto label_2b9bdc;
    }
    ctx->pc = 0x2B9BD4u;
    {
        const bool branch_taken_0x2b9bd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9BD4u;
            // 0x2b9bd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9bd4) {
            ctx->pc = 0x2B9C9Cu;
            goto label_2b9c9c;
        }
    }
    ctx->pc = 0x2B9BDCu;
label_2b9bdc:
    // 0x2b9bdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b9be0:
    // 0x2b9be0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b9be4:
    // 0x2b9be4: 0x24636670  addiu       $v1, $v1, 0x6670
    ctx->pc = 0x2b9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26224));
label_2b9be8:
    // 0x2b9be8: 0x244266b0  addiu       $v0, $v0, 0x66B0
    ctx->pc = 0x2b9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26288));
label_2b9bec:
    // 0x2b9bec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b9becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2b9bf0:
    // 0x2b9bf0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2b9bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2b9bf4:
    // 0x2b9bf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b9bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9bf8:
    // 0x2b9bf8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2b9bf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2b9bfc:
    // 0x2b9bfc: 0x320f809  jalr        $t9
label_2b9c00:
    if (ctx->pc == 0x2B9C00u) {
        ctx->pc = 0x2B9C04u;
        goto label_2b9c04;
    }
    ctx->pc = 0x2B9BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9C04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9C04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C04u; }
            if (ctx->pc != 0x2B9C04u) { return; }
        }
        }
    }
    ctx->pc = 0x2B9C04u;
label_2b9c04:
    // 0x2b9c04: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2b9c08:
    if (ctx->pc == 0x2B9C08u) {
        ctx->pc = 0x2B9C08u;
            // 0x2b9c08: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2B9C0Cu;
        goto label_2b9c0c;
    }
    ctx->pc = 0x2B9C04u;
    {
        const bool branch_taken_0x2b9c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c04) {
            ctx->pc = 0x2B9C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9C04u;
            // 0x2b9c08: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9C88u;
            goto label_2b9c88;
        }
    }
    ctx->pc = 0x2B9C0Cu;
label_2b9c0c:
    // 0x2b9c0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b9c10:
    // 0x2b9c10: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b9c14:
    // 0x2b9c14: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2b9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2b9c18:
    // 0x2b9c18: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2b9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2b9c1c:
    // 0x2b9c1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b9c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b9c20:
    // 0x2b9c20: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2b9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2b9c24:
    // 0x2b9c24: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b9c28:
    if (ctx->pc == 0x2B9C28u) {
        ctx->pc = 0x2B9C28u;
            // 0x2b9c28: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2B9C2Cu;
        goto label_2b9c2c;
    }
    ctx->pc = 0x2B9C24u;
    {
        const bool branch_taken_0x2b9c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9C24u;
            // 0x2b9c28: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c24) {
            ctx->pc = 0x2B9C60u;
            goto label_2b9c60;
        }
    }
    ctx->pc = 0x2B9C2Cu;
label_2b9c2c:
    // 0x2b9c2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b9c30:
    // 0x2b9c30: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2b9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2b9c34:
    // 0x2b9c34: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2b9c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2b9c38:
    // 0x2b9c38: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b9c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b9c3c:
    // 0x2b9c3c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2b9c40:
    if (ctx->pc == 0x2B9C40u) {
        ctx->pc = 0x2B9C44u;
        goto label_2b9c44;
    }
    ctx->pc = 0x2B9C3Cu;
    {
        const bool branch_taken_0x2b9c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c3c) {
            ctx->pc = 0x2B9C60u;
            goto label_2b9c60;
        }
    }
    ctx->pc = 0x2B9C44u;
label_2b9c44:
    // 0x2b9c44: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b9c48:
    if (ctx->pc == 0x2B9C48u) {
        ctx->pc = 0x2B9C48u;
            // 0x2b9c48: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2B9C4Cu;
        goto label_2b9c4c;
    }
    ctx->pc = 0x2B9C44u;
    {
        const bool branch_taken_0x2b9c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c44) {
            ctx->pc = 0x2B9C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9C44u;
            // 0x2b9c48: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9C60u;
            goto label_2b9c60;
        }
    }
    ctx->pc = 0x2B9C4Cu;
label_2b9c4c:
    // 0x2b9c4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b9c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9c50:
    // 0x2b9c50: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b9c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b9c54:
    // 0x2b9c54: 0x320f809  jalr        $t9
label_2b9c58:
    if (ctx->pc == 0x2B9C58u) {
        ctx->pc = 0x2B9C58u;
            // 0x2b9c58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9C5Cu;
        goto label_2b9c5c;
    }
    ctx->pc = 0x2B9C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9C5Cu);
        ctx->pc = 0x2B9C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9C54u;
            // 0x2b9c58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9C5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C5Cu; }
            if (ctx->pc != 0x2B9C5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2B9C5Cu;
label_2b9c5c:
    // 0x2b9c5c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2b9c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2b9c60:
    // 0x2b9c60: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2b9c64:
    if (ctx->pc == 0x2B9C64u) {
        ctx->pc = 0x2B9C68u;
        goto label_2b9c68;
    }
    ctx->pc = 0x2B9C60u;
    {
        const bool branch_taken_0x2b9c60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c60) {
            ctx->pc = 0x2B9C84u;
            goto label_2b9c84;
        }
    }
    ctx->pc = 0x2B9C68u;
label_2b9c68:
    // 0x2b9c68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b9c6c:
    // 0x2b9c6c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2b9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2b9c70:
    // 0x2b9c70: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2b9c74:
    if (ctx->pc == 0x2B9C74u) {
        ctx->pc = 0x2B9C74u;
            // 0x2b9c74: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B9C78u;
        goto label_2b9c78;
    }
    ctx->pc = 0x2B9C70u;
    {
        const bool branch_taken_0x2b9c70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9C70u;
            // 0x2b9c74: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c70) {
            ctx->pc = 0x2B9C84u;
            goto label_2b9c84;
        }
    }
    ctx->pc = 0x2B9C78u;
label_2b9c78:
    // 0x2b9c78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b9c7c:
    // 0x2b9c7c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2b9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2b9c80:
    // 0x2b9c80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b9c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b9c84:
    // 0x2b9c84: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b9c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b9c88:
    // 0x2b9c88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b9c88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b9c8c:
    // 0x2b9c8c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2b9c90:
    if (ctx->pc == 0x2B9C90u) {
        ctx->pc = 0x2B9C90u;
            // 0x2b9c90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C94u;
        goto label_2b9c94;
    }
    ctx->pc = 0x2B9C8Cu;
    {
        const bool branch_taken_0x2b9c8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b9c8c) {
            ctx->pc = 0x2B9C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9C8Cu;
            // 0x2b9c90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9CA0u;
            goto label_2b9ca0;
        }
    }
    ctx->pc = 0x2B9C94u;
label_2b9c94:
    // 0x2b9c94: 0xc0400a8  jal         func_1002A0
label_2b9c98:
    if (ctx->pc == 0x2B9C98u) {
        ctx->pc = 0x2B9C98u;
            // 0x2b9c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C9Cu;
        goto label_2b9c9c;
    }
    ctx->pc = 0x2B9C94u;
    SET_GPR_U32(ctx, 31, 0x2B9C9Cu);
    ctx->pc = 0x2B9C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9C94u;
            // 0x2b9c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C9Cu; }
        if (ctx->pc != 0x2B9C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C9Cu; }
        if (ctx->pc != 0x2B9C9Cu) { return; }
    }
    ctx->pc = 0x2B9C9Cu;
label_2b9c9c:
    // 0x2b9c9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b9c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ca0:
    // 0x2b9ca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9ca4:
    // 0x2b9ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9ca8:
    // 0x2b9ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9cac:
    // 0x2b9cac: 0x3e00008  jr          $ra
label_2b9cb0:
    if (ctx->pc == 0x2B9CB0u) {
        ctx->pc = 0x2B9CB0u;
            // 0x2b9cb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B9CB4u;
        goto label_2b9cb4;
    }
    ctx->pc = 0x2B9CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9CACu;
            // 0x2b9cb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9CB4u;
label_2b9cb4:
    // 0x2b9cb4: 0x0  nop
    ctx->pc = 0x2b9cb4u;
    // NOP
label_2b9cb8:
    // 0x2b9cb8: 0x0  nop
    ctx->pc = 0x2b9cb8u;
    // NOP
label_2b9cbc:
    // 0x2b9cbc: 0x0  nop
    ctx->pc = 0x2b9cbcu;
    // NOP
}
