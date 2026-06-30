#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0B30
// Address: 0x2c0b30 - 0x2c0c90
void sub_002C0B30_0x2c0b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0B30_0x2c0b30");
#endif

    switch (ctx->pc) {
        case 0x2c0b30u: goto label_2c0b30;
        case 0x2c0b34u: goto label_2c0b34;
        case 0x2c0b38u: goto label_2c0b38;
        case 0x2c0b3cu: goto label_2c0b3c;
        case 0x2c0b40u: goto label_2c0b40;
        case 0x2c0b44u: goto label_2c0b44;
        case 0x2c0b48u: goto label_2c0b48;
        case 0x2c0b4cu: goto label_2c0b4c;
        case 0x2c0b50u: goto label_2c0b50;
        case 0x2c0b54u: goto label_2c0b54;
        case 0x2c0b58u: goto label_2c0b58;
        case 0x2c0b5cu: goto label_2c0b5c;
        case 0x2c0b60u: goto label_2c0b60;
        case 0x2c0b64u: goto label_2c0b64;
        case 0x2c0b68u: goto label_2c0b68;
        case 0x2c0b6cu: goto label_2c0b6c;
        case 0x2c0b70u: goto label_2c0b70;
        case 0x2c0b74u: goto label_2c0b74;
        case 0x2c0b78u: goto label_2c0b78;
        case 0x2c0b7cu: goto label_2c0b7c;
        case 0x2c0b80u: goto label_2c0b80;
        case 0x2c0b84u: goto label_2c0b84;
        case 0x2c0b88u: goto label_2c0b88;
        case 0x2c0b8cu: goto label_2c0b8c;
        case 0x2c0b90u: goto label_2c0b90;
        case 0x2c0b94u: goto label_2c0b94;
        case 0x2c0b98u: goto label_2c0b98;
        case 0x2c0b9cu: goto label_2c0b9c;
        case 0x2c0ba0u: goto label_2c0ba0;
        case 0x2c0ba4u: goto label_2c0ba4;
        case 0x2c0ba8u: goto label_2c0ba8;
        case 0x2c0bacu: goto label_2c0bac;
        case 0x2c0bb0u: goto label_2c0bb0;
        case 0x2c0bb4u: goto label_2c0bb4;
        case 0x2c0bb8u: goto label_2c0bb8;
        case 0x2c0bbcu: goto label_2c0bbc;
        case 0x2c0bc0u: goto label_2c0bc0;
        case 0x2c0bc4u: goto label_2c0bc4;
        case 0x2c0bc8u: goto label_2c0bc8;
        case 0x2c0bccu: goto label_2c0bcc;
        case 0x2c0bd0u: goto label_2c0bd0;
        case 0x2c0bd4u: goto label_2c0bd4;
        case 0x2c0bd8u: goto label_2c0bd8;
        case 0x2c0bdcu: goto label_2c0bdc;
        case 0x2c0be0u: goto label_2c0be0;
        case 0x2c0be4u: goto label_2c0be4;
        case 0x2c0be8u: goto label_2c0be8;
        case 0x2c0becu: goto label_2c0bec;
        case 0x2c0bf0u: goto label_2c0bf0;
        case 0x2c0bf4u: goto label_2c0bf4;
        case 0x2c0bf8u: goto label_2c0bf8;
        case 0x2c0bfcu: goto label_2c0bfc;
        case 0x2c0c00u: goto label_2c0c00;
        case 0x2c0c04u: goto label_2c0c04;
        case 0x2c0c08u: goto label_2c0c08;
        case 0x2c0c0cu: goto label_2c0c0c;
        case 0x2c0c10u: goto label_2c0c10;
        case 0x2c0c14u: goto label_2c0c14;
        case 0x2c0c18u: goto label_2c0c18;
        case 0x2c0c1cu: goto label_2c0c1c;
        case 0x2c0c20u: goto label_2c0c20;
        case 0x2c0c24u: goto label_2c0c24;
        case 0x2c0c28u: goto label_2c0c28;
        case 0x2c0c2cu: goto label_2c0c2c;
        case 0x2c0c30u: goto label_2c0c30;
        case 0x2c0c34u: goto label_2c0c34;
        case 0x2c0c38u: goto label_2c0c38;
        case 0x2c0c3cu: goto label_2c0c3c;
        case 0x2c0c40u: goto label_2c0c40;
        case 0x2c0c44u: goto label_2c0c44;
        case 0x2c0c48u: goto label_2c0c48;
        case 0x2c0c4cu: goto label_2c0c4c;
        case 0x2c0c50u: goto label_2c0c50;
        case 0x2c0c54u: goto label_2c0c54;
        case 0x2c0c58u: goto label_2c0c58;
        case 0x2c0c5cu: goto label_2c0c5c;
        case 0x2c0c60u: goto label_2c0c60;
        case 0x2c0c64u: goto label_2c0c64;
        case 0x2c0c68u: goto label_2c0c68;
        case 0x2c0c6cu: goto label_2c0c6c;
        case 0x2c0c70u: goto label_2c0c70;
        case 0x2c0c74u: goto label_2c0c74;
        case 0x2c0c78u: goto label_2c0c78;
        case 0x2c0c7cu: goto label_2c0c7c;
        case 0x2c0c80u: goto label_2c0c80;
        case 0x2c0c84u: goto label_2c0c84;
        case 0x2c0c88u: goto label_2c0c88;
        case 0x2c0c8cu: goto label_2c0c8c;
        default: break;
    }

    ctx->pc = 0x2c0b30u;

label_2c0b30:
    // 0x2c0b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c0b34:
    // 0x2c0b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c0b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c0b38:
    // 0x2c0b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c0b3c:
    // 0x2c0b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c0b40:
    // 0x2c0b40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c0b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b44:
    // 0x2c0b44: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c0b48:
    if (ctx->pc == 0x2C0B48u) {
        ctx->pc = 0x2C0B48u;
            // 0x2c0b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B4Cu;
        goto label_2c0b4c;
    }
    ctx->pc = 0x2C0B44u;
    {
        const bool branch_taken_0x2c0b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B44u;
            // 0x2c0b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b44) {
            ctx->pc = 0x2C0C78u;
            goto label_2c0c78;
        }
    }
    ctx->pc = 0x2C0B4Cu;
label_2c0b4c:
    // 0x2c0b4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c0b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c0b50:
    // 0x2c0b50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0b54:
    // 0x2c0b54: 0x246317c0  addiu       $v1, $v1, 0x17C0
    ctx->pc = 0x2c0b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6080));
label_2c0b58:
    // 0x2c0b58: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c0b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c0b5c:
    // 0x2c0b5c: 0x244217f8  addiu       $v0, $v0, 0x17F8
    ctx->pc = 0x2c0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6136));
label_2c0b60:
    // 0x2c0b60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c0b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c0b64:
    // 0x2c0b64: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c0b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c0b68:
    // 0x2c0b68: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c0b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c0b6c:
    // 0x2c0b6c: 0xc0407c0  jal         func_101F00
label_2c0b70:
    if (ctx->pc == 0x2C0B70u) {
        ctx->pc = 0x2C0B70u;
            // 0x2c0b70: 0x24a50a20  addiu       $a1, $a1, 0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2592));
        ctx->pc = 0x2C0B74u;
        goto label_2c0b74;
    }
    ctx->pc = 0x2C0B6Cu;
    SET_GPR_U32(ctx, 31, 0x2C0B74u);
    ctx->pc = 0x2C0B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B6Cu;
            // 0x2c0b70: 0x24a50a20  addiu       $a1, $a1, 0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B74u; }
        if (ctx->pc != 0x2C0B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B74u; }
        if (ctx->pc != 0x2C0B74u) { return; }
    }
    ctx->pc = 0x2C0B74u;
label_2c0b74:
    // 0x2c0b74: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c0b78:
    // 0x2c0b78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c0b7c:
    if (ctx->pc == 0x2C0B7Cu) {
        ctx->pc = 0x2C0B7Cu;
            // 0x2c0b7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C0B80u;
        goto label_2c0b80;
    }
    ctx->pc = 0x2C0B78u;
    {
        const bool branch_taken_0x2c0b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0b78) {
            ctx->pc = 0x2C0B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B78u;
            // 0x2c0b7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0B8Cu;
            goto label_2c0b8c;
        }
    }
    ctx->pc = 0x2C0B80u;
label_2c0b80:
    // 0x2c0b80: 0xc07507c  jal         func_1D41F0
label_2c0b84:
    if (ctx->pc == 0x2C0B84u) {
        ctx->pc = 0x2C0B84u;
            // 0x2c0b84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C0B88u;
        goto label_2c0b88;
    }
    ctx->pc = 0x2C0B80u;
    SET_GPR_U32(ctx, 31, 0x2C0B88u);
    ctx->pc = 0x2C0B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B80u;
            // 0x2c0b84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B88u; }
        if (ctx->pc != 0x2C0B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B88u; }
        if (ctx->pc != 0x2C0B88u) { return; }
    }
    ctx->pc = 0x2C0B88u;
label_2c0b88:
    // 0x2c0b88: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c0b8c:
    // 0x2c0b8c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c0b90:
    if (ctx->pc == 0x2C0B90u) {
        ctx->pc = 0x2C0B90u;
            // 0x2c0b90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C0B94u;
        goto label_2c0b94;
    }
    ctx->pc = 0x2C0B8Cu;
    {
        const bool branch_taken_0x2c0b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0b8c) {
            ctx->pc = 0x2C0B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B8Cu;
            // 0x2c0b90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0BBCu;
            goto label_2c0bbc;
        }
    }
    ctx->pc = 0x2C0B94u;
label_2c0b94:
    // 0x2c0b94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c0b98:
    if (ctx->pc == 0x2C0B98u) {
        ctx->pc = 0x2C0B9Cu;
        goto label_2c0b9c;
    }
    ctx->pc = 0x2C0B94u;
    {
        const bool branch_taken_0x2c0b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0b94) {
            ctx->pc = 0x2C0BB8u;
            goto label_2c0bb8;
        }
    }
    ctx->pc = 0x2C0B9Cu;
label_2c0b9c:
    // 0x2c0b9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c0ba0:
    if (ctx->pc == 0x2C0BA0u) {
        ctx->pc = 0x2C0BA4u;
        goto label_2c0ba4;
    }
    ctx->pc = 0x2C0B9Cu;
    {
        const bool branch_taken_0x2c0b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0b9c) {
            ctx->pc = 0x2C0BB8u;
            goto label_2c0bb8;
        }
    }
    ctx->pc = 0x2C0BA4u;
label_2c0ba4:
    // 0x2c0ba4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c0ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c0ba8:
    // 0x2c0ba8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c0bac:
    if (ctx->pc == 0x2C0BACu) {
        ctx->pc = 0x2C0BB0u;
        goto label_2c0bb0;
    }
    ctx->pc = 0x2C0BA8u;
    {
        const bool branch_taken_0x2c0ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0ba8) {
            ctx->pc = 0x2C0BB8u;
            goto label_2c0bb8;
        }
    }
    ctx->pc = 0x2C0BB0u;
label_2c0bb0:
    // 0x2c0bb0: 0xc0400a8  jal         func_1002A0
label_2c0bb4:
    if (ctx->pc == 0x2C0BB4u) {
        ctx->pc = 0x2C0BB8u;
        goto label_2c0bb8;
    }
    ctx->pc = 0x2C0BB0u;
    SET_GPR_U32(ctx, 31, 0x2C0BB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BB8u; }
        if (ctx->pc != 0x2C0BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BB8u; }
        if (ctx->pc != 0x2C0BB8u) { return; }
    }
    ctx->pc = 0x2C0BB8u;
label_2c0bb8:
    // 0x2c0bb8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c0bbc:
    // 0x2c0bbc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c0bc0:
    if (ctx->pc == 0x2C0BC0u) {
        ctx->pc = 0x2C0BC0u;
            // 0x2c0bc0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C0BC4u;
        goto label_2c0bc4;
    }
    ctx->pc = 0x2C0BBCu;
    {
        const bool branch_taken_0x2c0bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0bbc) {
            ctx->pc = 0x2C0BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0BBCu;
            // 0x2c0bc0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0BECu;
            goto label_2c0bec;
        }
    }
    ctx->pc = 0x2C0BC4u;
label_2c0bc4:
    // 0x2c0bc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c0bc8:
    if (ctx->pc == 0x2C0BC8u) {
        ctx->pc = 0x2C0BCCu;
        goto label_2c0bcc;
    }
    ctx->pc = 0x2C0BC4u;
    {
        const bool branch_taken_0x2c0bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0bc4) {
            ctx->pc = 0x2C0BE8u;
            goto label_2c0be8;
        }
    }
    ctx->pc = 0x2C0BCCu;
label_2c0bcc:
    // 0x2c0bcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c0bd0:
    if (ctx->pc == 0x2C0BD0u) {
        ctx->pc = 0x2C0BD4u;
        goto label_2c0bd4;
    }
    ctx->pc = 0x2C0BCCu;
    {
        const bool branch_taken_0x2c0bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0bcc) {
            ctx->pc = 0x2C0BE8u;
            goto label_2c0be8;
        }
    }
    ctx->pc = 0x2C0BD4u;
label_2c0bd4:
    // 0x2c0bd4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c0bd8:
    // 0x2c0bd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c0bdc:
    if (ctx->pc == 0x2C0BDCu) {
        ctx->pc = 0x2C0BE0u;
        goto label_2c0be0;
    }
    ctx->pc = 0x2C0BD8u;
    {
        const bool branch_taken_0x2c0bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0bd8) {
            ctx->pc = 0x2C0BE8u;
            goto label_2c0be8;
        }
    }
    ctx->pc = 0x2C0BE0u;
label_2c0be0:
    // 0x2c0be0: 0xc0400a8  jal         func_1002A0
label_2c0be4:
    if (ctx->pc == 0x2C0BE4u) {
        ctx->pc = 0x2C0BE8u;
        goto label_2c0be8;
    }
    ctx->pc = 0x2C0BE0u;
    SET_GPR_U32(ctx, 31, 0x2C0BE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BE8u; }
        if (ctx->pc != 0x2C0BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BE8u; }
        if (ctx->pc != 0x2C0BE8u) { return; }
    }
    ctx->pc = 0x2C0BE8u;
label_2c0be8:
    // 0x2c0be8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c0bec:
    // 0x2c0bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c0bf0:
    if (ctx->pc == 0x2C0BF0u) {
        ctx->pc = 0x2C0BF4u;
        goto label_2c0bf4;
    }
    ctx->pc = 0x2C0BECu;
    {
        const bool branch_taken_0x2c0bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0bec) {
            ctx->pc = 0x2C0C08u;
            goto label_2c0c08;
        }
    }
    ctx->pc = 0x2C0BF4u;
label_2c0bf4:
    // 0x2c0bf4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c0bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c0bf8:
    // 0x2c0bf8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c0bfc:
    // 0x2c0bfc: 0x246317a8  addiu       $v1, $v1, 0x17A8
    ctx->pc = 0x2c0bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6056));
label_2c0c00:
    // 0x2c0c00: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c0c04:
    // 0x2c0c04: 0xac400d70  sw          $zero, 0xD70($v0)
    ctx->pc = 0x2c0c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3440), GPR_U32(ctx, 0));
label_2c0c08:
    // 0x2c0c08: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c0c0c:
    if (ctx->pc == 0x2C0C0Cu) {
        ctx->pc = 0x2C0C0Cu;
            // 0x2c0c0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C0C10u;
        goto label_2c0c10;
    }
    ctx->pc = 0x2C0C08u;
    {
        const bool branch_taken_0x2c0c08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0c08) {
            ctx->pc = 0x2C0C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C08u;
            // 0x2c0c0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0C64u;
            goto label_2c0c64;
        }
    }
    ctx->pc = 0x2C0C10u;
label_2c0c10:
    // 0x2c0c10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0c14:
    // 0x2c0c14: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c0c18:
    // 0x2c0c18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c0c1c:
    // 0x2c0c1c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c0c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c0c20:
    // 0x2c0c20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c0c24:
    if (ctx->pc == 0x2C0C24u) {
        ctx->pc = 0x2C0C24u;
            // 0x2c0c24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C0C28u;
        goto label_2c0c28;
    }
    ctx->pc = 0x2C0C20u;
    {
        const bool branch_taken_0x2c0c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0c20) {
            ctx->pc = 0x2C0C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C20u;
            // 0x2c0c24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0C3Cu;
            goto label_2c0c3c;
        }
    }
    ctx->pc = 0x2C0C28u;
label_2c0c28:
    // 0x2c0c28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c0c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c0c2c:
    // 0x2c0c2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c0c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c0c30:
    // 0x2c0c30: 0x320f809  jalr        $t9
label_2c0c34:
    if (ctx->pc == 0x2C0C34u) {
        ctx->pc = 0x2C0C34u;
            // 0x2c0c34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C0C38u;
        goto label_2c0c38;
    }
    ctx->pc = 0x2C0C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C0C38u);
        ctx->pc = 0x2C0C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C30u;
            // 0x2c0c34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C0C38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C38u; }
            if (ctx->pc != 0x2C0C38u) { return; }
        }
        }
    }
    ctx->pc = 0x2C0C38u;
label_2c0c38:
    // 0x2c0c38: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c0c3c:
    // 0x2c0c3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c0c40:
    if (ctx->pc == 0x2C0C40u) {
        ctx->pc = 0x2C0C40u;
            // 0x2c0c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C44u;
        goto label_2c0c44;
    }
    ctx->pc = 0x2C0C3Cu;
    {
        const bool branch_taken_0x2c0c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0c3c) {
            ctx->pc = 0x2C0C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C3Cu;
            // 0x2c0c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0C58u;
            goto label_2c0c58;
        }
    }
    ctx->pc = 0x2C0C44u;
label_2c0c44:
    // 0x2c0c44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c0c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c0c48:
    // 0x2c0c48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c0c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c0c4c:
    // 0x2c0c4c: 0x320f809  jalr        $t9
label_2c0c50:
    if (ctx->pc == 0x2C0C50u) {
        ctx->pc = 0x2C0C50u;
            // 0x2c0c50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C0C54u;
        goto label_2c0c54;
    }
    ctx->pc = 0x2C0C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C0C54u);
        ctx->pc = 0x2C0C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C4Cu;
            // 0x2c0c50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C0C54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C54u; }
            if (ctx->pc != 0x2C0C54u) { return; }
        }
        }
    }
    ctx->pc = 0x2C0C54u;
label_2c0c54:
    // 0x2c0c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0c58:
    // 0x2c0c58: 0xc075bf8  jal         func_1D6FE0
label_2c0c5c:
    if (ctx->pc == 0x2C0C5Cu) {
        ctx->pc = 0x2C0C5Cu;
            // 0x2c0c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C60u;
        goto label_2c0c60;
    }
    ctx->pc = 0x2C0C58u;
    SET_GPR_U32(ctx, 31, 0x2C0C60u);
    ctx->pc = 0x2C0C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C58u;
            // 0x2c0c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C60u; }
        if (ctx->pc != 0x2C0C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C60u; }
        if (ctx->pc != 0x2C0C60u) { return; }
    }
    ctx->pc = 0x2C0C60u;
label_2c0c60:
    // 0x2c0c60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c0c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c0c64:
    // 0x2c0c64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c0c64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c0c68:
    // 0x2c0c68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c0c6c:
    if (ctx->pc == 0x2C0C6Cu) {
        ctx->pc = 0x2C0C6Cu;
            // 0x2c0c6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C70u;
        goto label_2c0c70;
    }
    ctx->pc = 0x2C0C68u;
    {
        const bool branch_taken_0x2c0c68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c0c68) {
            ctx->pc = 0x2C0C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C68u;
            // 0x2c0c6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0C7Cu;
            goto label_2c0c7c;
        }
    }
    ctx->pc = 0x2C0C70u;
label_2c0c70:
    // 0x2c0c70: 0xc0400a8  jal         func_1002A0
label_2c0c74:
    if (ctx->pc == 0x2C0C74u) {
        ctx->pc = 0x2C0C74u;
            // 0x2c0c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C78u;
        goto label_2c0c78;
    }
    ctx->pc = 0x2C0C70u;
    SET_GPR_U32(ctx, 31, 0x2C0C78u);
    ctx->pc = 0x2C0C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C70u;
            // 0x2c0c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C78u; }
        if (ctx->pc != 0x2C0C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C78u; }
        if (ctx->pc != 0x2C0C78u) { return; }
    }
    ctx->pc = 0x2C0C78u;
label_2c0c78:
    // 0x2c0c78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c0c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0c7c:
    // 0x2c0c7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c0c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c0c80:
    // 0x2c0c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0c84:
    // 0x2c0c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c0c88:
    // 0x2c0c88: 0x3e00008  jr          $ra
label_2c0c8c:
    if (ctx->pc == 0x2C0C8Cu) {
        ctx->pc = 0x2C0C8Cu;
            // 0x2c0c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C0C90u;
        goto label_fallthrough_0x2c0c88;
    }
    ctx->pc = 0x2C0C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C88u;
            // 0x2c0c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c0c88:
    ctx->pc = 0x2C0C90u;
}
