#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C9AF0
// Address: 0x2c9af0 - 0x2c9c60
void sub_002C9AF0_0x2c9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9AF0_0x2c9af0");
#endif

    switch (ctx->pc) {
        case 0x2c9af0u: goto label_2c9af0;
        case 0x2c9af4u: goto label_2c9af4;
        case 0x2c9af8u: goto label_2c9af8;
        case 0x2c9afcu: goto label_2c9afc;
        case 0x2c9b00u: goto label_2c9b00;
        case 0x2c9b04u: goto label_2c9b04;
        case 0x2c9b08u: goto label_2c9b08;
        case 0x2c9b0cu: goto label_2c9b0c;
        case 0x2c9b10u: goto label_2c9b10;
        case 0x2c9b14u: goto label_2c9b14;
        case 0x2c9b18u: goto label_2c9b18;
        case 0x2c9b1cu: goto label_2c9b1c;
        case 0x2c9b20u: goto label_2c9b20;
        case 0x2c9b24u: goto label_2c9b24;
        case 0x2c9b28u: goto label_2c9b28;
        case 0x2c9b2cu: goto label_2c9b2c;
        case 0x2c9b30u: goto label_2c9b30;
        case 0x2c9b34u: goto label_2c9b34;
        case 0x2c9b38u: goto label_2c9b38;
        case 0x2c9b3cu: goto label_2c9b3c;
        case 0x2c9b40u: goto label_2c9b40;
        case 0x2c9b44u: goto label_2c9b44;
        case 0x2c9b48u: goto label_2c9b48;
        case 0x2c9b4cu: goto label_2c9b4c;
        case 0x2c9b50u: goto label_2c9b50;
        case 0x2c9b54u: goto label_2c9b54;
        case 0x2c9b58u: goto label_2c9b58;
        case 0x2c9b5cu: goto label_2c9b5c;
        case 0x2c9b60u: goto label_2c9b60;
        case 0x2c9b64u: goto label_2c9b64;
        case 0x2c9b68u: goto label_2c9b68;
        case 0x2c9b6cu: goto label_2c9b6c;
        case 0x2c9b70u: goto label_2c9b70;
        case 0x2c9b74u: goto label_2c9b74;
        case 0x2c9b78u: goto label_2c9b78;
        case 0x2c9b7cu: goto label_2c9b7c;
        case 0x2c9b80u: goto label_2c9b80;
        case 0x2c9b84u: goto label_2c9b84;
        case 0x2c9b88u: goto label_2c9b88;
        case 0x2c9b8cu: goto label_2c9b8c;
        case 0x2c9b90u: goto label_2c9b90;
        case 0x2c9b94u: goto label_2c9b94;
        case 0x2c9b98u: goto label_2c9b98;
        case 0x2c9b9cu: goto label_2c9b9c;
        case 0x2c9ba0u: goto label_2c9ba0;
        case 0x2c9ba4u: goto label_2c9ba4;
        case 0x2c9ba8u: goto label_2c9ba8;
        case 0x2c9bacu: goto label_2c9bac;
        case 0x2c9bb0u: goto label_2c9bb0;
        case 0x2c9bb4u: goto label_2c9bb4;
        case 0x2c9bb8u: goto label_2c9bb8;
        case 0x2c9bbcu: goto label_2c9bbc;
        case 0x2c9bc0u: goto label_2c9bc0;
        case 0x2c9bc4u: goto label_2c9bc4;
        case 0x2c9bc8u: goto label_2c9bc8;
        case 0x2c9bccu: goto label_2c9bcc;
        case 0x2c9bd0u: goto label_2c9bd0;
        case 0x2c9bd4u: goto label_2c9bd4;
        case 0x2c9bd8u: goto label_2c9bd8;
        case 0x2c9bdcu: goto label_2c9bdc;
        case 0x2c9be0u: goto label_2c9be0;
        case 0x2c9be4u: goto label_2c9be4;
        case 0x2c9be8u: goto label_2c9be8;
        case 0x2c9becu: goto label_2c9bec;
        case 0x2c9bf0u: goto label_2c9bf0;
        case 0x2c9bf4u: goto label_2c9bf4;
        case 0x2c9bf8u: goto label_2c9bf8;
        case 0x2c9bfcu: goto label_2c9bfc;
        case 0x2c9c00u: goto label_2c9c00;
        case 0x2c9c04u: goto label_2c9c04;
        case 0x2c9c08u: goto label_2c9c08;
        case 0x2c9c0cu: goto label_2c9c0c;
        case 0x2c9c10u: goto label_2c9c10;
        case 0x2c9c14u: goto label_2c9c14;
        case 0x2c9c18u: goto label_2c9c18;
        case 0x2c9c1cu: goto label_2c9c1c;
        case 0x2c9c20u: goto label_2c9c20;
        case 0x2c9c24u: goto label_2c9c24;
        case 0x2c9c28u: goto label_2c9c28;
        case 0x2c9c2cu: goto label_2c9c2c;
        case 0x2c9c30u: goto label_2c9c30;
        case 0x2c9c34u: goto label_2c9c34;
        case 0x2c9c38u: goto label_2c9c38;
        case 0x2c9c3cu: goto label_2c9c3c;
        case 0x2c9c40u: goto label_2c9c40;
        case 0x2c9c44u: goto label_2c9c44;
        case 0x2c9c48u: goto label_2c9c48;
        case 0x2c9c4cu: goto label_2c9c4c;
        case 0x2c9c50u: goto label_2c9c50;
        case 0x2c9c54u: goto label_2c9c54;
        case 0x2c9c58u: goto label_2c9c58;
        case 0x2c9c5cu: goto label_2c9c5c;
        default: break;
    }

    ctx->pc = 0x2c9af0u;

label_2c9af0:
    // 0x2c9af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c9af4:
    // 0x2c9af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c9af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c9af8:
    // 0x2c9af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c9afc:
    // 0x2c9afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c9b00:
    // 0x2c9b00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c9b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9b04:
    // 0x2c9b04: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c9b08:
    if (ctx->pc == 0x2C9B08u) {
        ctx->pc = 0x2C9B08u;
            // 0x2c9b08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B0Cu;
        goto label_2c9b0c;
    }
    ctx->pc = 0x2C9B04u;
    {
        const bool branch_taken_0x2c9b04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9B04u;
            // 0x2c9b08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b04) {
            ctx->pc = 0x2C9B48u;
            goto label_2c9b48;
        }
    }
    ctx->pc = 0x2C9B0Cu;
label_2c9b0c:
    // 0x2c9b0c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c9b10:
    if (ctx->pc == 0x2C9B10u) {
        ctx->pc = 0x2C9B10u;
            // 0x2c9b10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C9B14u;
        goto label_2c9b14;
    }
    ctx->pc = 0x2C9B0Cu;
    {
        const bool branch_taken_0x2c9b0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9b0c) {
            ctx->pc = 0x2C9B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9B0Cu;
            // 0x2c9b10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9B34u;
            goto label_2c9b34;
        }
    }
    ctx->pc = 0x2C9B14u;
label_2c9b14:
    // 0x2c9b14: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2c9b18:
    if (ctx->pc == 0x2C9B18u) {
        ctx->pc = 0x2C9B1Cu;
        goto label_2c9b1c;
    }
    ctx->pc = 0x2C9B14u;
    {
        const bool branch_taken_0x2c9b14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9b14) {
            ctx->pc = 0x2C9B30u;
            goto label_2c9b30;
        }
    }
    ctx->pc = 0x2C9B1Cu;
label_2c9b1c:
    // 0x2c9b1c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c9b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c9b20:
    // 0x2c9b20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c9b24:
    if (ctx->pc == 0x2C9B24u) {
        ctx->pc = 0x2C9B28u;
        goto label_2c9b28;
    }
    ctx->pc = 0x2C9B20u;
    {
        const bool branch_taken_0x2c9b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9b20) {
            ctx->pc = 0x2C9B30u;
            goto label_2c9b30;
        }
    }
    ctx->pc = 0x2C9B28u;
label_2c9b28:
    // 0x2c9b28: 0xc0400a8  jal         func_1002A0
label_2c9b2c:
    if (ctx->pc == 0x2C9B2Cu) {
        ctx->pc = 0x2C9B30u;
        goto label_2c9b30;
    }
    ctx->pc = 0x2C9B28u;
    SET_GPR_U32(ctx, 31, 0x2C9B30u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9B30u; }
        if (ctx->pc != 0x2C9B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9B30u; }
        if (ctx->pc != 0x2C9B30u) { return; }
    }
    ctx->pc = 0x2C9B30u;
label_2c9b30:
    // 0x2c9b30: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c9b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c9b34:
    // 0x2c9b34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c9b34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c9b38:
    // 0x2c9b38: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c9b3c:
    if (ctx->pc == 0x2C9B3Cu) {
        ctx->pc = 0x2C9B3Cu;
            // 0x2c9b3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B40u;
        goto label_2c9b40;
    }
    ctx->pc = 0x2C9B38u;
    {
        const bool branch_taken_0x2c9b38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c9b38) {
            ctx->pc = 0x2C9B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9B38u;
            // 0x2c9b3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9B4Cu;
            goto label_2c9b4c;
        }
    }
    ctx->pc = 0x2C9B40u;
label_2c9b40:
    // 0x2c9b40: 0xc0400a8  jal         func_1002A0
label_2c9b44:
    if (ctx->pc == 0x2C9B44u) {
        ctx->pc = 0x2C9B44u;
            // 0x2c9b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B48u;
        goto label_2c9b48;
    }
    ctx->pc = 0x2C9B40u;
    SET_GPR_U32(ctx, 31, 0x2C9B48u);
    ctx->pc = 0x2C9B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9B40u;
            // 0x2c9b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9B48u; }
        if (ctx->pc != 0x2C9B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9B48u; }
        if (ctx->pc != 0x2C9B48u) { return; }
    }
    ctx->pc = 0x2C9B48u;
label_2c9b48:
    // 0x2c9b48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c9b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9b4c:
    // 0x2c9b4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c9b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c9b50:
    // 0x2c9b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9b54:
    // 0x2c9b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9b58:
    // 0x2c9b58: 0x3e00008  jr          $ra
label_2c9b5c:
    if (ctx->pc == 0x2C9B5Cu) {
        ctx->pc = 0x2C9B5Cu;
            // 0x2c9b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C9B60u;
        goto label_2c9b60;
    }
    ctx->pc = 0x2C9B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9B58u;
            // 0x2c9b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9B60u;
label_2c9b60:
    // 0x2c9b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c9b64:
    // 0x2c9b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c9b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c9b68:
    // 0x2c9b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c9b6c:
    // 0x2c9b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c9b70:
    // 0x2c9b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9b74:
    // 0x2c9b74: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_2c9b78:
    if (ctx->pc == 0x2C9B78u) {
        ctx->pc = 0x2C9B78u;
            // 0x2c9b78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B7Cu;
        goto label_2c9b7c;
    }
    ctx->pc = 0x2C9B74u;
    {
        const bool branch_taken_0x2c9b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9B74u;
            // 0x2c9b78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b74) {
            ctx->pc = 0x2C9C3Cu;
            goto label_2c9c3c;
        }
    }
    ctx->pc = 0x2C9B7Cu;
label_2c9b7c:
    // 0x2c9b7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c9b80:
    // 0x2c9b80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c9b84:
    // 0x2c9b84: 0x246360c0  addiu       $v1, $v1, 0x60C0
    ctx->pc = 0x2c9b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24768));
label_2c9b88:
    // 0x2c9b88: 0x24426100  addiu       $v0, $v0, 0x6100
    ctx->pc = 0x2c9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24832));
label_2c9b8c:
    // 0x2c9b8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c9b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c9b90:
    // 0x2c9b90: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c9b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c9b94:
    // 0x2c9b94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c9b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c9b98:
    // 0x2c9b98: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c9b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c9b9c:
    // 0x2c9b9c: 0x320f809  jalr        $t9
label_2c9ba0:
    if (ctx->pc == 0x2C9BA0u) {
        ctx->pc = 0x2C9BA4u;
        goto label_2c9ba4;
    }
    ctx->pc = 0x2C9B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9BA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9BA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9BA4u; }
            if (ctx->pc != 0x2C9BA4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9BA4u;
label_2c9ba4:
    // 0x2c9ba4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_2c9ba8:
    if (ctx->pc == 0x2C9BA8u) {
        ctx->pc = 0x2C9BA8u;
            // 0x2c9ba8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2C9BACu;
        goto label_2c9bac;
    }
    ctx->pc = 0x2C9BA4u;
    {
        const bool branch_taken_0x2c9ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ba4) {
            ctx->pc = 0x2C9BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9BA4u;
            // 0x2c9ba8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9C28u;
            goto label_2c9c28;
        }
    }
    ctx->pc = 0x2C9BACu;
label_2c9bac:
    // 0x2c9bac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c9bb0:
    // 0x2c9bb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c9bb4:
    // 0x2c9bb4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2c9bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_2c9bb8:
    // 0x2c9bb8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2c9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_2c9bbc:
    // 0x2c9bbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c9bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c9bc0:
    // 0x2c9bc0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c9bc4:
    // 0x2c9bc4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2c9bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_2c9bc8:
    // 0x2c9bc8: 0xc0aecc4  jal         func_2BB310
label_2c9bcc:
    if (ctx->pc == 0x2C9BCCu) {
        ctx->pc = 0x2C9BCCu;
            // 0x2c9bcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C9BD0u;
        goto label_2c9bd0;
    }
    ctx->pc = 0x2C9BC8u;
    SET_GPR_U32(ctx, 31, 0x2C9BD0u);
    ctx->pc = 0x2C9BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9BC8u;
            // 0x2c9bcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9BD0u; }
        if (ctx->pc != 0x2C9BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9BD0u; }
        if (ctx->pc != 0x2C9BD0u) { return; }
    }
    ctx->pc = 0x2C9BD0u;
label_2c9bd0:
    // 0x2c9bd0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c9bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_2c9bd4:
    // 0x2c9bd4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x2c9bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2c9bd8:
    // 0x2c9bd8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c9bdc:
    if (ctx->pc == 0x2C9BDCu) {
        ctx->pc = 0x2C9BDCu;
            // 0x2c9bdc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x2C9BE0u;
        goto label_2c9be0;
    }
    ctx->pc = 0x2C9BD8u;
    {
        const bool branch_taken_0x2c9bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9bd8) {
            ctx->pc = 0x2C9BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9BD8u;
            // 0x2c9bdc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9BF4u;
            goto label_2c9bf4;
        }
    }
    ctx->pc = 0x2C9BE0u;
label_2c9be0:
    // 0x2c9be0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x2c9be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2c9be4:
    // 0x2c9be4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c9be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c9be8:
    // 0x2c9be8: 0x320f809  jalr        $t9
label_2c9bec:
    if (ctx->pc == 0x2C9BECu) {
        ctx->pc = 0x2C9BECu;
            // 0x2c9bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C9BF0u;
        goto label_2c9bf0;
    }
    ctx->pc = 0x2C9BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9BF0u);
        ctx->pc = 0x2C9BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9BE8u;
            // 0x2c9bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9BF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9BF0u; }
            if (ctx->pc != 0x2C9BF0u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9BF0u;
label_2c9bf0:
    // 0x2c9bf0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c9bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2c9bf4:
    // 0x2c9bf4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c9bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c9bf8:
    // 0x2c9bf8: 0xc0aec9c  jal         func_2BB270
label_2c9bfc:
    if (ctx->pc == 0x2C9BFCu) {
        ctx->pc = 0x2C9BFCu;
            // 0x2c9bfc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x2C9C00u;
        goto label_2c9c00;
    }
    ctx->pc = 0x2C9BF8u;
    SET_GPR_U32(ctx, 31, 0x2C9C00u);
    ctx->pc = 0x2C9BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9BF8u;
            // 0x2c9bfc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C00u; }
        if (ctx->pc != 0x2C9C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C00u; }
        if (ctx->pc != 0x2C9C00u) { return; }
    }
    ctx->pc = 0x2C9C00u;
label_2c9c00:
    // 0x2c9c00: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c9c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2c9c04:
    // 0x2c9c04: 0xc0aec88  jal         func_2BB220
label_2c9c08:
    if (ctx->pc == 0x2C9C08u) {
        ctx->pc = 0x2C9C08u;
            // 0x2c9c08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C9C0Cu;
        goto label_2c9c0c;
    }
    ctx->pc = 0x2C9C04u;
    SET_GPR_U32(ctx, 31, 0x2C9C0Cu);
    ctx->pc = 0x2C9C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C04u;
            // 0x2c9c08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C0Cu; }
        if (ctx->pc != 0x2C9C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C0Cu; }
        if (ctx->pc != 0x2C9C0Cu) { return; }
    }
    ctx->pc = 0x2C9C0Cu;
label_2c9c0c:
    // 0x2c9c0c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2c9c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2c9c10:
    // 0x2c9c10: 0xc0aec0c  jal         func_2BB030
label_2c9c14:
    if (ctx->pc == 0x2C9C14u) {
        ctx->pc = 0x2C9C14u;
            // 0x2c9c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C18u;
        goto label_2c9c18;
    }
    ctx->pc = 0x2C9C10u;
    SET_GPR_U32(ctx, 31, 0x2C9C18u);
    ctx->pc = 0x2C9C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C10u;
            // 0x2c9c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C18u; }
        if (ctx->pc != 0x2C9C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C18u; }
        if (ctx->pc != 0x2C9C18u) { return; }
    }
    ctx->pc = 0x2C9C18u;
label_2c9c18:
    // 0x2c9c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c1c:
    // 0x2c9c1c: 0xc0aeaa8  jal         func_2BAAA0
label_2c9c20:
    if (ctx->pc == 0x2C9C20u) {
        ctx->pc = 0x2C9C20u;
            // 0x2c9c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C24u;
        goto label_2c9c24;
    }
    ctx->pc = 0x2C9C1Cu;
    SET_GPR_U32(ctx, 31, 0x2C9C24u);
    ctx->pc = 0x2C9C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C1Cu;
            // 0x2c9c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C24u; }
        if (ctx->pc != 0x2C9C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C24u; }
        if (ctx->pc != 0x2C9C24u) { return; }
    }
    ctx->pc = 0x2C9C24u;
label_2c9c24:
    // 0x2c9c24: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c9c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c9c28:
    // 0x2c9c28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c9c28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c9c2c:
    // 0x2c9c2c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c9c30:
    if (ctx->pc == 0x2C9C30u) {
        ctx->pc = 0x2C9C30u;
            // 0x2c9c30: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C34u;
        goto label_2c9c34;
    }
    ctx->pc = 0x2C9C2Cu;
    {
        const bool branch_taken_0x2c9c2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c9c2c) {
            ctx->pc = 0x2C9C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C2Cu;
            // 0x2c9c30: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9C40u;
            goto label_2c9c40;
        }
    }
    ctx->pc = 0x2C9C34u;
label_2c9c34:
    // 0x2c9c34: 0xc0400a8  jal         func_1002A0
label_2c9c38:
    if (ctx->pc == 0x2C9C38u) {
        ctx->pc = 0x2C9C38u;
            // 0x2c9c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C3Cu;
        goto label_2c9c3c;
    }
    ctx->pc = 0x2C9C34u;
    SET_GPR_U32(ctx, 31, 0x2C9C3Cu);
    ctx->pc = 0x2C9C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C34u;
            // 0x2c9c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C3Cu; }
        if (ctx->pc != 0x2C9C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C3Cu; }
        if (ctx->pc != 0x2C9C3Cu) { return; }
    }
    ctx->pc = 0x2C9C3Cu;
label_2c9c3c:
    // 0x2c9c3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c40:
    // 0x2c9c40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c9c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c9c44:
    // 0x2c9c44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9c48:
    // 0x2c9c48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9c4c:
    // 0x2c9c4c: 0x3e00008  jr          $ra
label_2c9c50:
    if (ctx->pc == 0x2C9C50u) {
        ctx->pc = 0x2C9C50u;
            // 0x2c9c50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C9C54u;
        goto label_2c9c54;
    }
    ctx->pc = 0x2C9C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C4Cu;
            // 0x2c9c50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9C54u;
label_2c9c54:
    // 0x2c9c54: 0x0  nop
    ctx->pc = 0x2c9c54u;
    // NOP
label_2c9c58:
    // 0x2c9c58: 0x0  nop
    ctx->pc = 0x2c9c58u;
    // NOP
label_2c9c5c:
    // 0x2c9c5c: 0x0  nop
    ctx->pc = 0x2c9c5cu;
    // NOP
}
