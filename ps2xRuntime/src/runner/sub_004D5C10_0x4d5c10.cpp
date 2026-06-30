#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D5C10
// Address: 0x4d5c10 - 0x4d5d40
void sub_004D5C10_0x4d5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D5C10_0x4d5c10");
#endif

    switch (ctx->pc) {
        case 0x4d5c10u: goto label_4d5c10;
        case 0x4d5c14u: goto label_4d5c14;
        case 0x4d5c18u: goto label_4d5c18;
        case 0x4d5c1cu: goto label_4d5c1c;
        case 0x4d5c20u: goto label_4d5c20;
        case 0x4d5c24u: goto label_4d5c24;
        case 0x4d5c28u: goto label_4d5c28;
        case 0x4d5c2cu: goto label_4d5c2c;
        case 0x4d5c30u: goto label_4d5c30;
        case 0x4d5c34u: goto label_4d5c34;
        case 0x4d5c38u: goto label_4d5c38;
        case 0x4d5c3cu: goto label_4d5c3c;
        case 0x4d5c40u: goto label_4d5c40;
        case 0x4d5c44u: goto label_4d5c44;
        case 0x4d5c48u: goto label_4d5c48;
        case 0x4d5c4cu: goto label_4d5c4c;
        case 0x4d5c50u: goto label_4d5c50;
        case 0x4d5c54u: goto label_4d5c54;
        case 0x4d5c58u: goto label_4d5c58;
        case 0x4d5c5cu: goto label_4d5c5c;
        case 0x4d5c60u: goto label_4d5c60;
        case 0x4d5c64u: goto label_4d5c64;
        case 0x4d5c68u: goto label_4d5c68;
        case 0x4d5c6cu: goto label_4d5c6c;
        case 0x4d5c70u: goto label_4d5c70;
        case 0x4d5c74u: goto label_4d5c74;
        case 0x4d5c78u: goto label_4d5c78;
        case 0x4d5c7cu: goto label_4d5c7c;
        case 0x4d5c80u: goto label_4d5c80;
        case 0x4d5c84u: goto label_4d5c84;
        case 0x4d5c88u: goto label_4d5c88;
        case 0x4d5c8cu: goto label_4d5c8c;
        case 0x4d5c90u: goto label_4d5c90;
        case 0x4d5c94u: goto label_4d5c94;
        case 0x4d5c98u: goto label_4d5c98;
        case 0x4d5c9cu: goto label_4d5c9c;
        case 0x4d5ca0u: goto label_4d5ca0;
        case 0x4d5ca4u: goto label_4d5ca4;
        case 0x4d5ca8u: goto label_4d5ca8;
        case 0x4d5cacu: goto label_4d5cac;
        case 0x4d5cb0u: goto label_4d5cb0;
        case 0x4d5cb4u: goto label_4d5cb4;
        case 0x4d5cb8u: goto label_4d5cb8;
        case 0x4d5cbcu: goto label_4d5cbc;
        case 0x4d5cc0u: goto label_4d5cc0;
        case 0x4d5cc4u: goto label_4d5cc4;
        case 0x4d5cc8u: goto label_4d5cc8;
        case 0x4d5cccu: goto label_4d5ccc;
        case 0x4d5cd0u: goto label_4d5cd0;
        case 0x4d5cd4u: goto label_4d5cd4;
        case 0x4d5cd8u: goto label_4d5cd8;
        case 0x4d5cdcu: goto label_4d5cdc;
        case 0x4d5ce0u: goto label_4d5ce0;
        case 0x4d5ce4u: goto label_4d5ce4;
        case 0x4d5ce8u: goto label_4d5ce8;
        case 0x4d5cecu: goto label_4d5cec;
        case 0x4d5cf0u: goto label_4d5cf0;
        case 0x4d5cf4u: goto label_4d5cf4;
        case 0x4d5cf8u: goto label_4d5cf8;
        case 0x4d5cfcu: goto label_4d5cfc;
        case 0x4d5d00u: goto label_4d5d00;
        case 0x4d5d04u: goto label_4d5d04;
        case 0x4d5d08u: goto label_4d5d08;
        case 0x4d5d0cu: goto label_4d5d0c;
        case 0x4d5d10u: goto label_4d5d10;
        case 0x4d5d14u: goto label_4d5d14;
        case 0x4d5d18u: goto label_4d5d18;
        case 0x4d5d1cu: goto label_4d5d1c;
        case 0x4d5d20u: goto label_4d5d20;
        case 0x4d5d24u: goto label_4d5d24;
        case 0x4d5d28u: goto label_4d5d28;
        case 0x4d5d2cu: goto label_4d5d2c;
        case 0x4d5d30u: goto label_4d5d30;
        case 0x4d5d34u: goto label_4d5d34;
        case 0x4d5d38u: goto label_4d5d38;
        case 0x4d5d3cu: goto label_4d5d3c;
        default: break;
    }

    ctx->pc = 0x4d5c10u;

label_4d5c10:
    // 0x4d5c10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5c14:
    // 0x4d5c14: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4d5c14u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4d5c18:
    // 0x4d5c18: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4d5c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d5c1c:
    // 0x4d5c1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5c20:
    // 0x4d5c20: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4d5c20u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4d5c24:
    // 0x4d5c24: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4d5c24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4d5c28:
    // 0x4d5c28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5c2c:
    // 0x4d5c2c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4d5c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4d5c30:
    // 0x4d5c30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5c34:
    // 0x4d5c34: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4d5c34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4d5c38:
    // 0x4d5c38: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4d5c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4d5c3c:
    // 0x4d5c3c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4d5c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4d5c40:
    // 0x4d5c40: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4d5c40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4d5c44:
    // 0x4d5c44: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4d5c44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4d5c48:
    // 0x4d5c48: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4d5c48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4d5c4c:
    // 0x4d5c4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5c50:
    // 0x4d5c50: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4d5c50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4d5c54:
    // 0x4d5c54: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4d5c54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4d5c58:
    // 0x4d5c58: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4d5c58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4d5c5c:
    // 0x4d5c5c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4d5c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4d5c60:
    // 0x4d5c60: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4d5c60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4d5c64:
    // 0x4d5c64: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4d5c64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4d5c68:
    // 0x4d5c68: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4d5c68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4d5c6c:
    // 0x4d5c6c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4d5c6cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4d5c70:
    // 0x4d5c70: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4d5c70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4d5c74:
    // 0x4d5c74: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4d5c74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4d5c78:
    // 0x4d5c78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5c7c:
    // 0x4d5c7c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4d5c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4d5c80:
    // 0x4d5c80: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4d5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4d5c84:
    // 0x4d5c84: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4d5c84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d5c88:
    // 0x4d5c88: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4d5c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4d5c8c:
    // 0x4d5c8c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4d5c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4d5c90:
    // 0x4d5c90: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4d5c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4d5c94:
    // 0x4d5c94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4d5c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4d5c98:
    // 0x4d5c98: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4d5c98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4d5c9c:
    // 0x4d5c9c: 0x3e00008  jr          $ra
label_4d5ca0:
    if (ctx->pc == 0x4D5CA0u) {
        ctx->pc = 0x4D5CA0u;
            // 0x4d5ca0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4D5CA4u;
        goto label_4d5ca4;
    }
    ctx->pc = 0x4D5C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5C9Cu;
            // 0x4d5ca0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5CA4u;
label_4d5ca4:
    // 0x4d5ca4: 0x0  nop
    ctx->pc = 0x4d5ca4u;
    // NOP
label_4d5ca8:
    // 0x4d5ca8: 0x0  nop
    ctx->pc = 0x4d5ca8u;
    // NOP
label_4d5cac:
    // 0x4d5cac: 0x0  nop
    ctx->pc = 0x4d5cacu;
    // NOP
label_4d5cb0:
    // 0x4d5cb0: 0x3e00008  jr          $ra
label_4d5cb4:
    if (ctx->pc == 0x4D5CB4u) {
        ctx->pc = 0x4D5CB8u;
        goto label_4d5cb8;
    }
    ctx->pc = 0x4D5CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5CB8u;
label_4d5cb8:
    // 0x4d5cb8: 0x0  nop
    ctx->pc = 0x4d5cb8u;
    // NOP
label_4d5cbc:
    // 0x4d5cbc: 0x0  nop
    ctx->pc = 0x4d5cbcu;
    // NOP
label_4d5cc0:
    // 0x4d5cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d5cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d5cc4:
    // 0x4d5cc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d5cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d5cc8:
    // 0x4d5cc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d5cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d5ccc:
    // 0x4d5ccc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d5cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d5cd0:
    // 0x4d5cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d5cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d5cd4:
    // 0x4d5cd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d5cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d5cd8:
    // 0x4d5cd8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4d5cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d5cdc:
    // 0x4d5cdc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4d5ce0:
    if (ctx->pc == 0x4D5CE0u) {
        ctx->pc = 0x4D5CE0u;
            // 0x4d5ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5CE4u;
        goto label_4d5ce4;
    }
    ctx->pc = 0x4D5CDCu;
    {
        const bool branch_taken_0x4d5cdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5CDCu;
            // 0x4d5ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5cdc) {
            ctx->pc = 0x4D5D18u;
            goto label_4d5d18;
        }
    }
    ctx->pc = 0x4D5CE4u;
label_4d5ce4:
    // 0x4d5ce4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d5ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d5ce8:
    // 0x4d5ce8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d5ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d5cec:
    // 0x4d5cec: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4d5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4d5cf0:
    // 0x4d5cf0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4d5cf4:
    // 0x4d5cf4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d5cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d5cf8:
    // 0x4d5cf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d5cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d5cfc:
    // 0x4d5cfc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4d5cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4d5d00:
    // 0x4d5d00: 0x320f809  jalr        $t9
label_4d5d04:
    if (ctx->pc == 0x4D5D04u) {
        ctx->pc = 0x4D5D08u;
        goto label_4d5d08;
    }
    ctx->pc = 0x4D5D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D5D08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D5D08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D5D08u; }
            if (ctx->pc != 0x4D5D08u) { return; }
        }
        }
    }
    ctx->pc = 0x4D5D08u;
label_4d5d08:
    // 0x4d5d08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4d5d08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4d5d0c:
    // 0x4d5d0c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4d5d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4d5d10:
    // 0x4d5d10: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4d5d14:
    if (ctx->pc == 0x4D5D14u) {
        ctx->pc = 0x4D5D14u;
            // 0x4d5d14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4D5D18u;
        goto label_4d5d18;
    }
    ctx->pc = 0x4D5D10u;
    {
        const bool branch_taken_0x4d5d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D5D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5D10u;
            // 0x4d5d14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5d10) {
            ctx->pc = 0x4D5CECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d5cec;
        }
    }
    ctx->pc = 0x4D5D18u;
label_4d5d18:
    // 0x4d5d18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d5d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d5d1c:
    // 0x4d5d1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d5d1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d5d20:
    // 0x4d5d20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d5d20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d5d24:
    // 0x4d5d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d5d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d5d28:
    // 0x4d5d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d5d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d5d2c:
    // 0x4d5d2c: 0x3e00008  jr          $ra
label_4d5d30:
    if (ctx->pc == 0x4D5D30u) {
        ctx->pc = 0x4D5D30u;
            // 0x4d5d30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D5D34u;
        goto label_4d5d34;
    }
    ctx->pc = 0x4D5D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5D2Cu;
            // 0x4d5d30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5D34u;
label_4d5d34:
    // 0x4d5d34: 0x0  nop
    ctx->pc = 0x4d5d34u;
    // NOP
label_4d5d38:
    // 0x4d5d38: 0x0  nop
    ctx->pc = 0x4d5d38u;
    // NOP
label_4d5d3c:
    // 0x4d5d3c: 0x0  nop
    ctx->pc = 0x4d5d3cu;
    // NOP
}
