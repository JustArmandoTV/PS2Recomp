#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C7B20
// Address: 0x2c7b20 - 0x2c7ca0
void sub_002C7B20_0x2c7b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7B20_0x2c7b20");
#endif

    switch (ctx->pc) {
        case 0x2c7b20u: goto label_2c7b20;
        case 0x2c7b24u: goto label_2c7b24;
        case 0x2c7b28u: goto label_2c7b28;
        case 0x2c7b2cu: goto label_2c7b2c;
        case 0x2c7b30u: goto label_2c7b30;
        case 0x2c7b34u: goto label_2c7b34;
        case 0x2c7b38u: goto label_2c7b38;
        case 0x2c7b3cu: goto label_2c7b3c;
        case 0x2c7b40u: goto label_2c7b40;
        case 0x2c7b44u: goto label_2c7b44;
        case 0x2c7b48u: goto label_2c7b48;
        case 0x2c7b4cu: goto label_2c7b4c;
        case 0x2c7b50u: goto label_2c7b50;
        case 0x2c7b54u: goto label_2c7b54;
        case 0x2c7b58u: goto label_2c7b58;
        case 0x2c7b5cu: goto label_2c7b5c;
        case 0x2c7b60u: goto label_2c7b60;
        case 0x2c7b64u: goto label_2c7b64;
        case 0x2c7b68u: goto label_2c7b68;
        case 0x2c7b6cu: goto label_2c7b6c;
        case 0x2c7b70u: goto label_2c7b70;
        case 0x2c7b74u: goto label_2c7b74;
        case 0x2c7b78u: goto label_2c7b78;
        case 0x2c7b7cu: goto label_2c7b7c;
        case 0x2c7b80u: goto label_2c7b80;
        case 0x2c7b84u: goto label_2c7b84;
        case 0x2c7b88u: goto label_2c7b88;
        case 0x2c7b8cu: goto label_2c7b8c;
        case 0x2c7b90u: goto label_2c7b90;
        case 0x2c7b94u: goto label_2c7b94;
        case 0x2c7b98u: goto label_2c7b98;
        case 0x2c7b9cu: goto label_2c7b9c;
        case 0x2c7ba0u: goto label_2c7ba0;
        case 0x2c7ba4u: goto label_2c7ba4;
        case 0x2c7ba8u: goto label_2c7ba8;
        case 0x2c7bacu: goto label_2c7bac;
        case 0x2c7bb0u: goto label_2c7bb0;
        case 0x2c7bb4u: goto label_2c7bb4;
        case 0x2c7bb8u: goto label_2c7bb8;
        case 0x2c7bbcu: goto label_2c7bbc;
        case 0x2c7bc0u: goto label_2c7bc0;
        case 0x2c7bc4u: goto label_2c7bc4;
        case 0x2c7bc8u: goto label_2c7bc8;
        case 0x2c7bccu: goto label_2c7bcc;
        case 0x2c7bd0u: goto label_2c7bd0;
        case 0x2c7bd4u: goto label_2c7bd4;
        case 0x2c7bd8u: goto label_2c7bd8;
        case 0x2c7bdcu: goto label_2c7bdc;
        case 0x2c7be0u: goto label_2c7be0;
        case 0x2c7be4u: goto label_2c7be4;
        case 0x2c7be8u: goto label_2c7be8;
        case 0x2c7becu: goto label_2c7bec;
        case 0x2c7bf0u: goto label_2c7bf0;
        case 0x2c7bf4u: goto label_2c7bf4;
        case 0x2c7bf8u: goto label_2c7bf8;
        case 0x2c7bfcu: goto label_2c7bfc;
        case 0x2c7c00u: goto label_2c7c00;
        case 0x2c7c04u: goto label_2c7c04;
        case 0x2c7c08u: goto label_2c7c08;
        case 0x2c7c0cu: goto label_2c7c0c;
        case 0x2c7c10u: goto label_2c7c10;
        case 0x2c7c14u: goto label_2c7c14;
        case 0x2c7c18u: goto label_2c7c18;
        case 0x2c7c1cu: goto label_2c7c1c;
        case 0x2c7c20u: goto label_2c7c20;
        case 0x2c7c24u: goto label_2c7c24;
        case 0x2c7c28u: goto label_2c7c28;
        case 0x2c7c2cu: goto label_2c7c2c;
        case 0x2c7c30u: goto label_2c7c30;
        case 0x2c7c34u: goto label_2c7c34;
        case 0x2c7c38u: goto label_2c7c38;
        case 0x2c7c3cu: goto label_2c7c3c;
        case 0x2c7c40u: goto label_2c7c40;
        case 0x2c7c44u: goto label_2c7c44;
        case 0x2c7c48u: goto label_2c7c48;
        case 0x2c7c4cu: goto label_2c7c4c;
        case 0x2c7c50u: goto label_2c7c50;
        case 0x2c7c54u: goto label_2c7c54;
        case 0x2c7c58u: goto label_2c7c58;
        case 0x2c7c5cu: goto label_2c7c5c;
        case 0x2c7c60u: goto label_2c7c60;
        case 0x2c7c64u: goto label_2c7c64;
        case 0x2c7c68u: goto label_2c7c68;
        case 0x2c7c6cu: goto label_2c7c6c;
        case 0x2c7c70u: goto label_2c7c70;
        case 0x2c7c74u: goto label_2c7c74;
        case 0x2c7c78u: goto label_2c7c78;
        case 0x2c7c7cu: goto label_2c7c7c;
        case 0x2c7c80u: goto label_2c7c80;
        case 0x2c7c84u: goto label_2c7c84;
        case 0x2c7c88u: goto label_2c7c88;
        case 0x2c7c8cu: goto label_2c7c8c;
        case 0x2c7c90u: goto label_2c7c90;
        case 0x2c7c94u: goto label_2c7c94;
        case 0x2c7c98u: goto label_2c7c98;
        case 0x2c7c9cu: goto label_2c7c9c;
        default: break;
    }

    ctx->pc = 0x2c7b20u;

label_2c7b20:
    // 0x2c7b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7b24:
    // 0x2c7b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c7b28:
    // 0x2c7b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c7b2c:
    // 0x2c7b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c7b30:
    // 0x2c7b30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b34:
    // 0x2c7b34: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_2c7b38:
    if (ctx->pc == 0x2C7B38u) {
        ctx->pc = 0x2C7B38u;
            // 0x2c7b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B3Cu;
        goto label_2c7b3c;
    }
    ctx->pc = 0x2C7B34u;
    {
        const bool branch_taken_0x2c7b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B34u;
            // 0x2c7b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b34) {
            ctx->pc = 0x2C7C7Cu;
            goto label_2c7c7c;
        }
    }
    ctx->pc = 0x2C7B3Cu;
label_2c7b3c:
    // 0x2c7b3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c7b40:
    // 0x2c7b40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c7b44:
    // 0x2c7b44: 0x24630890  addiu       $v1, $v1, 0x890
    ctx->pc = 0x2c7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
label_2c7b48:
    // 0x2c7b48: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c7b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c7b4c:
    // 0x2c7b4c: 0x244208c8  addiu       $v0, $v0, 0x8C8
    ctx->pc = 0x2c7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2248));
label_2c7b50:
    // 0x2c7b50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c7b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c7b54:
    // 0x2c7b54: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c7b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c7b58:
    // 0x2c7b58: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c7b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c7b5c:
    // 0x2c7b5c: 0xc0407c0  jal         func_101F00
label_2c7b60:
    if (ctx->pc == 0x2C7B60u) {
        ctx->pc = 0x2C7B60u;
            // 0x2c7b60: 0x24a57a90  addiu       $a1, $a1, 0x7A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31376));
        ctx->pc = 0x2C7B64u;
        goto label_2c7b64;
    }
    ctx->pc = 0x2C7B5Cu;
    SET_GPR_U32(ctx, 31, 0x2C7B64u);
    ctx->pc = 0x2C7B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B5Cu;
            // 0x2c7b60: 0x24a57a90  addiu       $a1, $a1, 0x7A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B64u; }
        if (ctx->pc != 0x2C7B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B64u; }
        if (ctx->pc != 0x2C7B64u) { return; }
    }
    ctx->pc = 0x2C7B64u;
label_2c7b64:
    // 0x2c7b64: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c7b68:
    // 0x2c7b68: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2c7b6c:
    if (ctx->pc == 0x2C7B6Cu) {
        ctx->pc = 0x2C7B6Cu;
            // 0x2c7b6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C7B70u;
        goto label_2c7b70;
    }
    ctx->pc = 0x2C7B68u;
    {
        const bool branch_taken_0x2c7b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b68) {
            ctx->pc = 0x2C7B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B68u;
            // 0x2c7b6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7B90u;
            goto label_2c7b90;
        }
    }
    ctx->pc = 0x2C7B70u;
label_2c7b70:
    // 0x2c7b70: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2c7b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2c7b74:
    // 0x2c7b74: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c7b78:
    if (ctx->pc == 0x2C7B78u) {
        ctx->pc = 0x2C7B78u;
            // 0x2c7b78: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2C7B7Cu;
        goto label_2c7b7c;
    }
    ctx->pc = 0x2C7B74u;
    {
        const bool branch_taken_0x2c7b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b74) {
            ctx->pc = 0x2C7B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B74u;
            // 0x2c7b78: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7B8Cu;
            goto label_2c7b8c;
        }
    }
    ctx->pc = 0x2C7B7Cu;
label_2c7b7c:
    // 0x2c7b7c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c7b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c7b80:
    // 0x2c7b80: 0xc0407c0  jal         func_101F00
label_2c7b84:
    if (ctx->pc == 0x2C7B84u) {
        ctx->pc = 0x2C7B84u;
            // 0x2c7b84: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->pc = 0x2C7B88u;
        goto label_2c7b88;
    }
    ctx->pc = 0x2C7B80u;
    SET_GPR_U32(ctx, 31, 0x2C7B88u);
    ctx->pc = 0x2C7B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B80u;
            // 0x2c7b84: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B88u; }
        if (ctx->pc != 0x2C7B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B88u; }
        if (ctx->pc != 0x2C7B88u) { return; }
    }
    ctx->pc = 0x2C7B88u;
label_2c7b88:
    // 0x2c7b88: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2c7b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2c7b8c:
    // 0x2c7b8c: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c7b90:
    // 0x2c7b90: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c7b94:
    if (ctx->pc == 0x2C7B94u) {
        ctx->pc = 0x2C7B94u;
            // 0x2c7b94: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C7B98u;
        goto label_2c7b98;
    }
    ctx->pc = 0x2C7B90u;
    {
        const bool branch_taken_0x2c7b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b90) {
            ctx->pc = 0x2C7B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B90u;
            // 0x2c7b94: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7BC0u;
            goto label_2c7bc0;
        }
    }
    ctx->pc = 0x2C7B98u;
label_2c7b98:
    // 0x2c7b98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c7b9c:
    if (ctx->pc == 0x2C7B9Cu) {
        ctx->pc = 0x2C7BA0u;
        goto label_2c7ba0;
    }
    ctx->pc = 0x2C7B98u;
    {
        const bool branch_taken_0x2c7b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b98) {
            ctx->pc = 0x2C7BBCu;
            goto label_2c7bbc;
        }
    }
    ctx->pc = 0x2C7BA0u;
label_2c7ba0:
    // 0x2c7ba0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c7ba4:
    if (ctx->pc == 0x2C7BA4u) {
        ctx->pc = 0x2C7BA8u;
        goto label_2c7ba8;
    }
    ctx->pc = 0x2C7BA0u;
    {
        const bool branch_taken_0x2c7ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ba0) {
            ctx->pc = 0x2C7BBCu;
            goto label_2c7bbc;
        }
    }
    ctx->pc = 0x2C7BA8u;
label_2c7ba8:
    // 0x2c7ba8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c7ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c7bac:
    // 0x2c7bac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c7bb0:
    if (ctx->pc == 0x2C7BB0u) {
        ctx->pc = 0x2C7BB4u;
        goto label_2c7bb4;
    }
    ctx->pc = 0x2C7BACu;
    {
        const bool branch_taken_0x2c7bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bac) {
            ctx->pc = 0x2C7BBCu;
            goto label_2c7bbc;
        }
    }
    ctx->pc = 0x2C7BB4u;
label_2c7bb4:
    // 0x2c7bb4: 0xc0400a8  jal         func_1002A0
label_2c7bb8:
    if (ctx->pc == 0x2C7BB8u) {
        ctx->pc = 0x2C7BBCu;
        goto label_2c7bbc;
    }
    ctx->pc = 0x2C7BB4u;
    SET_GPR_U32(ctx, 31, 0x2C7BBCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7BBCu; }
        if (ctx->pc != 0x2C7BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7BBCu; }
        if (ctx->pc != 0x2C7BBCu) { return; }
    }
    ctx->pc = 0x2C7BBCu;
label_2c7bbc:
    // 0x2c7bbc: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c7bc0:
    // 0x2c7bc0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c7bc4:
    if (ctx->pc == 0x2C7BC4u) {
        ctx->pc = 0x2C7BC4u;
            // 0x2c7bc4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C7BC8u;
        goto label_2c7bc8;
    }
    ctx->pc = 0x2C7BC0u;
    {
        const bool branch_taken_0x2c7bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bc0) {
            ctx->pc = 0x2C7BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7BC0u;
            // 0x2c7bc4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7BF0u;
            goto label_2c7bf0;
        }
    }
    ctx->pc = 0x2C7BC8u;
label_2c7bc8:
    // 0x2c7bc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c7bcc:
    if (ctx->pc == 0x2C7BCCu) {
        ctx->pc = 0x2C7BD0u;
        goto label_2c7bd0;
    }
    ctx->pc = 0x2C7BC8u;
    {
        const bool branch_taken_0x2c7bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bc8) {
            ctx->pc = 0x2C7BECu;
            goto label_2c7bec;
        }
    }
    ctx->pc = 0x2C7BD0u;
label_2c7bd0:
    // 0x2c7bd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c7bd4:
    if (ctx->pc == 0x2C7BD4u) {
        ctx->pc = 0x2C7BD8u;
        goto label_2c7bd8;
    }
    ctx->pc = 0x2C7BD0u;
    {
        const bool branch_taken_0x2c7bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bd0) {
            ctx->pc = 0x2C7BECu;
            goto label_2c7bec;
        }
    }
    ctx->pc = 0x2C7BD8u;
label_2c7bd8:
    // 0x2c7bd8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c7bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c7bdc:
    // 0x2c7bdc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c7be0:
    if (ctx->pc == 0x2C7BE0u) {
        ctx->pc = 0x2C7BE4u;
        goto label_2c7be4;
    }
    ctx->pc = 0x2C7BDCu;
    {
        const bool branch_taken_0x2c7bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bdc) {
            ctx->pc = 0x2C7BECu;
            goto label_2c7bec;
        }
    }
    ctx->pc = 0x2C7BE4u;
label_2c7be4:
    // 0x2c7be4: 0xc0400a8  jal         func_1002A0
label_2c7be8:
    if (ctx->pc == 0x2C7BE8u) {
        ctx->pc = 0x2C7BECu;
        goto label_2c7bec;
    }
    ctx->pc = 0x2C7BE4u;
    SET_GPR_U32(ctx, 31, 0x2C7BECu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7BECu; }
        if (ctx->pc != 0x2C7BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7BECu; }
        if (ctx->pc != 0x2C7BECu) { return; }
    }
    ctx->pc = 0x2C7BECu;
label_2c7bec:
    // 0x2c7bec: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c7becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c7bf0:
    // 0x2c7bf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c7bf4:
    if (ctx->pc == 0x2C7BF4u) {
        ctx->pc = 0x2C7BF8u;
        goto label_2c7bf8;
    }
    ctx->pc = 0x2C7BF0u;
    {
        const bool branch_taken_0x2c7bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bf0) {
            ctx->pc = 0x2C7C0Cu;
            goto label_2c7c0c;
        }
    }
    ctx->pc = 0x2C7BF8u;
label_2c7bf8:
    // 0x2c7bf8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c7bfc:
    // 0x2c7bfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c7c00:
    // 0x2c7c00: 0x24630880  addiu       $v1, $v1, 0x880
    ctx->pc = 0x2c7c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
label_2c7c04:
    // 0x2c7c04: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c7c08:
    // 0x2c7c08: 0xac400e00  sw          $zero, 0xE00($v0)
    ctx->pc = 0x2c7c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3584), GPR_U32(ctx, 0));
label_2c7c0c:
    // 0x2c7c0c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c7c10:
    if (ctx->pc == 0x2C7C10u) {
        ctx->pc = 0x2C7C10u;
            // 0x2c7c10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C7C14u;
        goto label_2c7c14;
    }
    ctx->pc = 0x2C7C0Cu;
    {
        const bool branch_taken_0x2c7c0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c0c) {
            ctx->pc = 0x2C7C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C0Cu;
            // 0x2c7c10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7C68u;
            goto label_2c7c68;
        }
    }
    ctx->pc = 0x2C7C14u;
label_2c7c14:
    // 0x2c7c14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c7c18:
    // 0x2c7c18: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c7c1c:
    // 0x2c7c1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c7c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c7c20:
    // 0x2c7c20: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c7c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c7c24:
    // 0x2c7c24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c7c28:
    if (ctx->pc == 0x2C7C28u) {
        ctx->pc = 0x2C7C28u;
            // 0x2c7c28: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C7C2Cu;
        goto label_2c7c2c;
    }
    ctx->pc = 0x2C7C24u;
    {
        const bool branch_taken_0x2c7c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c24) {
            ctx->pc = 0x2C7C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C24u;
            // 0x2c7c28: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7C40u;
            goto label_2c7c40;
        }
    }
    ctx->pc = 0x2C7C2Cu;
label_2c7c2c:
    // 0x2c7c2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c7c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c7c30:
    // 0x2c7c30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c7c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c7c34:
    // 0x2c7c34: 0x320f809  jalr        $t9
label_2c7c38:
    if (ctx->pc == 0x2C7C38u) {
        ctx->pc = 0x2C7C38u;
            // 0x2c7c38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C7C3Cu;
        goto label_2c7c3c;
    }
    ctx->pc = 0x2C7C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C7C3Cu);
        ctx->pc = 0x2C7C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C34u;
            // 0x2c7c38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C7C3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C7C3Cu; }
            if (ctx->pc != 0x2C7C3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C7C3Cu;
label_2c7c3c:
    // 0x2c7c3c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c7c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c7c40:
    // 0x2c7c40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c7c44:
    if (ctx->pc == 0x2C7C44u) {
        ctx->pc = 0x2C7C44u;
            // 0x2c7c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C48u;
        goto label_2c7c48;
    }
    ctx->pc = 0x2C7C40u;
    {
        const bool branch_taken_0x2c7c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c40) {
            ctx->pc = 0x2C7C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C40u;
            // 0x2c7c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7C5Cu;
            goto label_2c7c5c;
        }
    }
    ctx->pc = 0x2C7C48u;
label_2c7c48:
    // 0x2c7c48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c7c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c7c4c:
    // 0x2c7c4c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c7c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c7c50:
    // 0x2c7c50: 0x320f809  jalr        $t9
label_2c7c54:
    if (ctx->pc == 0x2C7C54u) {
        ctx->pc = 0x2C7C54u;
            // 0x2c7c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C7C58u;
        goto label_2c7c58;
    }
    ctx->pc = 0x2C7C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C7C58u);
        ctx->pc = 0x2C7C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C50u;
            // 0x2c7c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C7C58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C7C58u; }
            if (ctx->pc != 0x2C7C58u) { return; }
        }
        }
    }
    ctx->pc = 0x2C7C58u;
label_2c7c58:
    // 0x2c7c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c5c:
    // 0x2c7c5c: 0xc075bf8  jal         func_1D6FE0
label_2c7c60:
    if (ctx->pc == 0x2C7C60u) {
        ctx->pc = 0x2C7C60u;
            // 0x2c7c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C64u;
        goto label_2c7c64;
    }
    ctx->pc = 0x2C7C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C7C64u);
    ctx->pc = 0x2C7C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C5Cu;
            // 0x2c7c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7C64u; }
        if (ctx->pc != 0x2C7C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7C64u; }
        if (ctx->pc != 0x2C7C64u) { return; }
    }
    ctx->pc = 0x2C7C64u;
label_2c7c64:
    // 0x2c7c64: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c7c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c7c68:
    // 0x2c7c68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c7c68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c7c6c:
    // 0x2c7c6c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c7c70:
    if (ctx->pc == 0x2C7C70u) {
        ctx->pc = 0x2C7C70u;
            // 0x2c7c70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C74u;
        goto label_2c7c74;
    }
    ctx->pc = 0x2C7C6Cu;
    {
        const bool branch_taken_0x2c7c6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c7c6c) {
            ctx->pc = 0x2C7C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C6Cu;
            // 0x2c7c70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7C80u;
            goto label_2c7c80;
        }
    }
    ctx->pc = 0x2C7C74u;
label_2c7c74:
    // 0x2c7c74: 0xc0400a8  jal         func_1002A0
label_2c7c78:
    if (ctx->pc == 0x2C7C78u) {
        ctx->pc = 0x2C7C78u;
            // 0x2c7c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C7Cu;
        goto label_2c7c7c;
    }
    ctx->pc = 0x2C7C74u;
    SET_GPR_U32(ctx, 31, 0x2C7C7Cu);
    ctx->pc = 0x2C7C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C74u;
            // 0x2c7c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7C7Cu; }
        if (ctx->pc != 0x2C7C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7C7Cu; }
        if (ctx->pc != 0x2C7C7Cu) { return; }
    }
    ctx->pc = 0x2C7C7Cu;
label_2c7c7c:
    // 0x2c7c7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c7c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c80:
    // 0x2c7c80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7c84:
    // 0x2c7c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7c88:
    // 0x2c7c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7c8c:
    // 0x2c7c8c: 0x3e00008  jr          $ra
label_2c7c90:
    if (ctx->pc == 0x2C7C90u) {
        ctx->pc = 0x2C7C90u;
            // 0x2c7c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C7C94u;
        goto label_2c7c94;
    }
    ctx->pc = 0x2C7C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7C8Cu;
            // 0x2c7c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7C94u;
label_2c7c94:
    // 0x2c7c94: 0x0  nop
    ctx->pc = 0x2c7c94u;
    // NOP
label_2c7c98:
    // 0x2c7c98: 0x0  nop
    ctx->pc = 0x2c7c98u;
    // NOP
label_2c7c9c:
    // 0x2c7c9c: 0x0  nop
    ctx->pc = 0x2c7c9cu;
    // NOP
}
