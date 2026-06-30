#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C9C50
// Address: 0x3c9c50 - 0x3c9e50
void sub_003C9C50_0x3c9c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9C50_0x3c9c50");
#endif

    switch (ctx->pc) {
        case 0x3c9c50u: goto label_3c9c50;
        case 0x3c9c54u: goto label_3c9c54;
        case 0x3c9c58u: goto label_3c9c58;
        case 0x3c9c5cu: goto label_3c9c5c;
        case 0x3c9c60u: goto label_3c9c60;
        case 0x3c9c64u: goto label_3c9c64;
        case 0x3c9c68u: goto label_3c9c68;
        case 0x3c9c6cu: goto label_3c9c6c;
        case 0x3c9c70u: goto label_3c9c70;
        case 0x3c9c74u: goto label_3c9c74;
        case 0x3c9c78u: goto label_3c9c78;
        case 0x3c9c7cu: goto label_3c9c7c;
        case 0x3c9c80u: goto label_3c9c80;
        case 0x3c9c84u: goto label_3c9c84;
        case 0x3c9c88u: goto label_3c9c88;
        case 0x3c9c8cu: goto label_3c9c8c;
        case 0x3c9c90u: goto label_3c9c90;
        case 0x3c9c94u: goto label_3c9c94;
        case 0x3c9c98u: goto label_3c9c98;
        case 0x3c9c9cu: goto label_3c9c9c;
        case 0x3c9ca0u: goto label_3c9ca0;
        case 0x3c9ca4u: goto label_3c9ca4;
        case 0x3c9ca8u: goto label_3c9ca8;
        case 0x3c9cacu: goto label_3c9cac;
        case 0x3c9cb0u: goto label_3c9cb0;
        case 0x3c9cb4u: goto label_3c9cb4;
        case 0x3c9cb8u: goto label_3c9cb8;
        case 0x3c9cbcu: goto label_3c9cbc;
        case 0x3c9cc0u: goto label_3c9cc0;
        case 0x3c9cc4u: goto label_3c9cc4;
        case 0x3c9cc8u: goto label_3c9cc8;
        case 0x3c9cccu: goto label_3c9ccc;
        case 0x3c9cd0u: goto label_3c9cd0;
        case 0x3c9cd4u: goto label_3c9cd4;
        case 0x3c9cd8u: goto label_3c9cd8;
        case 0x3c9cdcu: goto label_3c9cdc;
        case 0x3c9ce0u: goto label_3c9ce0;
        case 0x3c9ce4u: goto label_3c9ce4;
        case 0x3c9ce8u: goto label_3c9ce8;
        case 0x3c9cecu: goto label_3c9cec;
        case 0x3c9cf0u: goto label_3c9cf0;
        case 0x3c9cf4u: goto label_3c9cf4;
        case 0x3c9cf8u: goto label_3c9cf8;
        case 0x3c9cfcu: goto label_3c9cfc;
        case 0x3c9d00u: goto label_3c9d00;
        case 0x3c9d04u: goto label_3c9d04;
        case 0x3c9d08u: goto label_3c9d08;
        case 0x3c9d0cu: goto label_3c9d0c;
        case 0x3c9d10u: goto label_3c9d10;
        case 0x3c9d14u: goto label_3c9d14;
        case 0x3c9d18u: goto label_3c9d18;
        case 0x3c9d1cu: goto label_3c9d1c;
        case 0x3c9d20u: goto label_3c9d20;
        case 0x3c9d24u: goto label_3c9d24;
        case 0x3c9d28u: goto label_3c9d28;
        case 0x3c9d2cu: goto label_3c9d2c;
        case 0x3c9d30u: goto label_3c9d30;
        case 0x3c9d34u: goto label_3c9d34;
        case 0x3c9d38u: goto label_3c9d38;
        case 0x3c9d3cu: goto label_3c9d3c;
        case 0x3c9d40u: goto label_3c9d40;
        case 0x3c9d44u: goto label_3c9d44;
        case 0x3c9d48u: goto label_3c9d48;
        case 0x3c9d4cu: goto label_3c9d4c;
        case 0x3c9d50u: goto label_3c9d50;
        case 0x3c9d54u: goto label_3c9d54;
        case 0x3c9d58u: goto label_3c9d58;
        case 0x3c9d5cu: goto label_3c9d5c;
        case 0x3c9d60u: goto label_3c9d60;
        case 0x3c9d64u: goto label_3c9d64;
        case 0x3c9d68u: goto label_3c9d68;
        case 0x3c9d6cu: goto label_3c9d6c;
        case 0x3c9d70u: goto label_3c9d70;
        case 0x3c9d74u: goto label_3c9d74;
        case 0x3c9d78u: goto label_3c9d78;
        case 0x3c9d7cu: goto label_3c9d7c;
        case 0x3c9d80u: goto label_3c9d80;
        case 0x3c9d84u: goto label_3c9d84;
        case 0x3c9d88u: goto label_3c9d88;
        case 0x3c9d8cu: goto label_3c9d8c;
        case 0x3c9d90u: goto label_3c9d90;
        case 0x3c9d94u: goto label_3c9d94;
        case 0x3c9d98u: goto label_3c9d98;
        case 0x3c9d9cu: goto label_3c9d9c;
        case 0x3c9da0u: goto label_3c9da0;
        case 0x3c9da4u: goto label_3c9da4;
        case 0x3c9da8u: goto label_3c9da8;
        case 0x3c9dacu: goto label_3c9dac;
        case 0x3c9db0u: goto label_3c9db0;
        case 0x3c9db4u: goto label_3c9db4;
        case 0x3c9db8u: goto label_3c9db8;
        case 0x3c9dbcu: goto label_3c9dbc;
        case 0x3c9dc0u: goto label_3c9dc0;
        case 0x3c9dc4u: goto label_3c9dc4;
        case 0x3c9dc8u: goto label_3c9dc8;
        case 0x3c9dccu: goto label_3c9dcc;
        case 0x3c9dd0u: goto label_3c9dd0;
        case 0x3c9dd4u: goto label_3c9dd4;
        case 0x3c9dd8u: goto label_3c9dd8;
        case 0x3c9ddcu: goto label_3c9ddc;
        case 0x3c9de0u: goto label_3c9de0;
        case 0x3c9de4u: goto label_3c9de4;
        case 0x3c9de8u: goto label_3c9de8;
        case 0x3c9decu: goto label_3c9dec;
        case 0x3c9df0u: goto label_3c9df0;
        case 0x3c9df4u: goto label_3c9df4;
        case 0x3c9df8u: goto label_3c9df8;
        case 0x3c9dfcu: goto label_3c9dfc;
        case 0x3c9e00u: goto label_3c9e00;
        case 0x3c9e04u: goto label_3c9e04;
        case 0x3c9e08u: goto label_3c9e08;
        case 0x3c9e0cu: goto label_3c9e0c;
        case 0x3c9e10u: goto label_3c9e10;
        case 0x3c9e14u: goto label_3c9e14;
        case 0x3c9e18u: goto label_3c9e18;
        case 0x3c9e1cu: goto label_3c9e1c;
        case 0x3c9e20u: goto label_3c9e20;
        case 0x3c9e24u: goto label_3c9e24;
        case 0x3c9e28u: goto label_3c9e28;
        case 0x3c9e2cu: goto label_3c9e2c;
        case 0x3c9e30u: goto label_3c9e30;
        case 0x3c9e34u: goto label_3c9e34;
        case 0x3c9e38u: goto label_3c9e38;
        case 0x3c9e3cu: goto label_3c9e3c;
        case 0x3c9e40u: goto label_3c9e40;
        case 0x3c9e44u: goto label_3c9e44;
        case 0x3c9e48u: goto label_3c9e48;
        case 0x3c9e4cu: goto label_3c9e4c;
        default: break;
    }

    ctx->pc = 0x3c9c50u;

label_3c9c50:
    // 0x3c9c50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9c54:
    // 0x3c9c54: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x3c9c54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_3c9c58:
    // 0x3c9c58: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x3c9c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3c9c5c:
    // 0x3c9c5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9c60:
    // 0x3c9c60: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x3c9c60u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3c9c64:
    // 0x3c9c64: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x3c9c64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_3c9c68:
    // 0x3c9c68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9c6c:
    // 0x3c9c6c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x3c9c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_3c9c70:
    // 0x3c9c70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9c74:
    // 0x3c9c74: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x3c9c74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3c9c78:
    // 0x3c9c78: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x3c9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_3c9c7c:
    // 0x3c9c7c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x3c9c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_3c9c80:
    // 0x3c9c80: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x3c9c80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3c9c84:
    // 0x3c9c84: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3c9c84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3c9c88:
    // 0x3c9c88: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x3c9c88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_3c9c8c:
    // 0x3c9c8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9c90:
    // 0x3c9c90: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x3c9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_3c9c94:
    // 0x3c9c94: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3c9c94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3c9c98:
    // 0x3c9c98: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x3c9c98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_3c9c9c:
    // 0x3c9c9c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3c9c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3c9ca0:
    // 0x3c9ca0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x3c9ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_3c9ca4:
    // 0x3c9ca4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x3c9ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_3c9ca8:
    // 0x3c9ca8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x3c9ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3c9cac:
    // 0x3c9cac: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x3c9cacu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_3c9cb0:
    // 0x3c9cb0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x3c9cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_3c9cb4:
    // 0x3c9cb4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3c9cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_3c9cb8:
    // 0x3c9cb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9cbc:
    // 0x3c9cbc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x3c9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_3c9cc0:
    // 0x3c9cc0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x3c9cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_3c9cc4:
    // 0x3c9cc4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x3c9cc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3c9cc8:
    // 0x3c9cc8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x3c9cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_3c9ccc:
    // 0x3c9ccc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x3c9cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_3c9cd0:
    // 0x3c9cd0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x3c9cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_3c9cd4:
    // 0x3c9cd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c9cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c9cd8:
    // 0x3c9cd8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x3c9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_3c9cdc:
    // 0x3c9cdc: 0x3e00008  jr          $ra
label_3c9ce0:
    if (ctx->pc == 0x3C9CE0u) {
        ctx->pc = 0x3C9CE0u;
            // 0x3c9ce0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x3C9CE4u;
        goto label_3c9ce4;
    }
    ctx->pc = 0x3C9CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9CDCu;
            // 0x3c9ce0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C9CE4u;
label_3c9ce4:
    // 0x3c9ce4: 0x0  nop
    ctx->pc = 0x3c9ce4u;
    // NOP
label_3c9ce8:
    // 0x3c9ce8: 0x0  nop
    ctx->pc = 0x3c9ce8u;
    // NOP
label_3c9cec:
    // 0x3c9cec: 0x0  nop
    ctx->pc = 0x3c9cecu;
    // NOP
label_3c9cf0:
    // 0x3c9cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c9cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c9cf4:
    // 0x3c9cf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c9cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c9cf8:
    // 0x3c9cf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c9cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c9cfc:
    // 0x3c9cfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c9cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3c9d00:
    // 0x3c9d00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c9d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c9d04:
    // 0x3c9d04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c9d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c9d08:
    // 0x3c9d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c9d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c9d0c:
    // 0x3c9d0c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3c9d0cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c9d10:
    // 0x3c9d10: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_3c9d14:
    if (ctx->pc == 0x3C9D14u) {
        ctx->pc = 0x3C9D14u;
            // 0x3c9d14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9D18u;
        goto label_3c9d18;
    }
    ctx->pc = 0x3C9D10u;
    {
        const bool branch_taken_0x3c9d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C9D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9D10u;
            // 0x3c9d14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9d10) {
            ctx->pc = 0x3C9D64u;
            goto label_3c9d64;
        }
    }
    ctx->pc = 0x3C9D18u;
label_3c9d18:
    // 0x3c9d18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c9d1c:
    // 0x3c9d1c: 0x50a3000e  beql        $a1, $v1, . + 4 + (0xE << 2)
label_3c9d20:
    if (ctx->pc == 0x3C9D20u) {
        ctx->pc = 0x3C9D20u;
            // 0x3c9d20: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C9D24u;
        goto label_3c9d24;
    }
    ctx->pc = 0x3C9D1Cu;
    {
        const bool branch_taken_0x3c9d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c9d1c) {
            ctx->pc = 0x3C9D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9D1Cu;
            // 0x3c9d20: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9D58u;
            goto label_3c9d58;
        }
    }
    ctx->pc = 0x3C9D24u;
label_3c9d24:
    // 0x3c9d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c9d28:
    // 0x3c9d28: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3c9d2c:
    if (ctx->pc == 0x3C9D2Cu) {
        ctx->pc = 0x3C9D2Cu;
            // 0x3c9d2c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x3C9D30u;
        goto label_3c9d30;
    }
    ctx->pc = 0x3C9D28u;
    {
        const bool branch_taken_0x3c9d28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c9d28) {
            ctx->pc = 0x3C9D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9D28u;
            // 0x3c9d2c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9D38u;
            goto label_3c9d38;
        }
    }
    ctx->pc = 0x3C9D30u;
label_3c9d30:
    // 0x3c9d30: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3c9d34:
    if (ctx->pc == 0x3C9D34u) {
        ctx->pc = 0x3C9D38u;
        goto label_3c9d38;
    }
    ctx->pc = 0x3C9D30u;
    {
        const bool branch_taken_0x3c9d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9d30) {
            ctx->pc = 0x3C9DB0u;
            goto label_3c9db0;
        }
    }
    ctx->pc = 0x3C9D38u;
label_3c9d38:
    // 0x3c9d38: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3c9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3c9d3c:
    // 0x3c9d3c: 0x8c63f670  lw          $v1, -0x990($v1)
    ctx->pc = 0x3c9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964848)));
label_3c9d40:
    // 0x3c9d40: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x3c9d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3c9d44:
    // 0x3c9d44: 0x602027  not         $a0, $v1
    ctx->pc = 0x3c9d44u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3c9d48:
    // 0x3c9d48: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x3c9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_3c9d4c:
    // 0x3c9d4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3c9d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3c9d50:
    // 0x3c9d50: 0x10000017  b           . + 4 + (0x17 << 2)
label_3c9d54:
    if (ctx->pc == 0x3C9D54u) {
        ctx->pc = 0x3C9D54u;
            // 0x3c9d54: 0xaca30090  sw          $v1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
        ctx->pc = 0x3C9D58u;
        goto label_3c9d58;
    }
    ctx->pc = 0x3C9D50u;
    {
        const bool branch_taken_0x3c9d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9D50u;
            // 0x3c9d54: 0xaca30090  sw          $v1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9d50) {
            ctx->pc = 0x3C9DB0u;
            goto label_3c9db0;
        }
    }
    ctx->pc = 0x3C9D58u;
label_3c9d58:
    // 0x3c9d58: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c9d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c9d5c:
    // 0x3c9d5c: 0x320f809  jalr        $t9
label_3c9d60:
    if (ctx->pc == 0x3C9D60u) {
        ctx->pc = 0x3C9D64u;
        goto label_3c9d64;
    }
    ctx->pc = 0x3C9D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C9D64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C9D64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C9D64u; }
            if (ctx->pc != 0x3C9D64u) { return; }
        }
        }
    }
    ctx->pc = 0x3C9D64u;
label_3c9d64:
    // 0x3c9d64: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x3c9d64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_3c9d68:
    // 0x3c9d68: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_3c9d6c:
    if (ctx->pc == 0x3C9D6Cu) {
        ctx->pc = 0x3C9D70u;
        goto label_3c9d70;
    }
    ctx->pc = 0x3C9D68u;
    {
        const bool branch_taken_0x3c9d68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9d68) {
            ctx->pc = 0x3C9DB0u;
            goto label_3c9db0;
        }
    }
    ctx->pc = 0x3C9D70u;
label_3c9d70:
    // 0x3c9d70: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c9d74:
    // 0x3c9d74: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c9d78:
    // 0x3c9d78: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c9d7c:
    // 0x3c9d7c: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x3c9d7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_3c9d80:
    // 0x3c9d80: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_3c9d84:
    if (ctx->pc == 0x3C9D84u) {
        ctx->pc = 0x3C9D88u;
        goto label_3c9d88;
    }
    ctx->pc = 0x3C9D80u;
    {
        const bool branch_taken_0x3c9d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9d80) {
            ctx->pc = 0x3C9DB0u;
            goto label_3c9db0;
        }
    }
    ctx->pc = 0x3C9D88u;
label_3c9d88:
    // 0x3c9d88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3c9d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9d8c:
    // 0x3c9d8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c9d8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9d90:
    // 0x3c9d90: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x3c9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3c9d94:
    // 0x3c9d94: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3c9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3c9d98:
    // 0x3c9d98: 0xc0e3658  jal         func_38D960
label_3c9d9c:
    if (ctx->pc == 0x3C9D9Cu) {
        ctx->pc = 0x3C9D9Cu;
            // 0x3c9d9c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3C9DA0u;
        goto label_3c9da0;
    }
    ctx->pc = 0x3C9D98u;
    SET_GPR_U32(ctx, 31, 0x3C9DA0u);
    ctx->pc = 0x3C9D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9D98u;
            // 0x3c9d9c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9DA0u; }
        if (ctx->pc != 0x3C9DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9DA0u; }
        if (ctx->pc != 0x3C9DA0u) { return; }
    }
    ctx->pc = 0x3C9DA0u;
label_3c9da0:
    // 0x3c9da0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3c9da0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3c9da4:
    // 0x3c9da4: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x3c9da4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3c9da8:
    // 0x3c9da8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3c9dac:
    if (ctx->pc == 0x3C9DACu) {
        ctx->pc = 0x3C9DACu;
            // 0x3c9dac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3C9DB0u;
        goto label_3c9db0;
    }
    ctx->pc = 0x3C9DA8u;
    {
        const bool branch_taken_0x3c9da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9DA8u;
            // 0x3c9dac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9da8) {
            ctx->pc = 0x3C9D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c9d90;
        }
    }
    ctx->pc = 0x3C9DB0u;
label_3c9db0:
    // 0x3c9db0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c9db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c9db4:
    // 0x3c9db4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c9db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c9db8:
    // 0x3c9db8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c9db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c9dbc:
    // 0x3c9dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c9dc0:
    // 0x3c9dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c9dc4:
    // 0x3c9dc4: 0x3e00008  jr          $ra
label_3c9dc8:
    if (ctx->pc == 0x3C9DC8u) {
        ctx->pc = 0x3C9DC8u;
            // 0x3c9dc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3C9DCCu;
        goto label_3c9dcc;
    }
    ctx->pc = 0x3C9DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9DC4u;
            // 0x3c9dc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C9DCCu;
label_3c9dcc:
    // 0x3c9dcc: 0x0  nop
    ctx->pc = 0x3c9dccu;
    // NOP
label_3c9dd0:
    // 0x3c9dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c9dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c9dd4:
    // 0x3c9dd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c9dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c9dd8:
    // 0x3c9dd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c9dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3c9ddc:
    // 0x3c9ddc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c9ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c9de0:
    // 0x3c9de0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c9de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c9de4:
    // 0x3c9de4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c9de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c9de8:
    // 0x3c9de8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x3c9de8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3c9dec:
    // 0x3c9dec: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_3c9df0:
    if (ctx->pc == 0x3C9DF0u) {
        ctx->pc = 0x3C9DF0u;
            // 0x3c9df0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9DF4u;
        goto label_3c9df4;
    }
    ctx->pc = 0x3C9DECu;
    {
        const bool branch_taken_0x3c9dec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9DECu;
            // 0x3c9df0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9dec) {
            ctx->pc = 0x3C9E28u;
            goto label_3c9e28;
        }
    }
    ctx->pc = 0x3C9DF4u;
label_3c9df4:
    // 0x3c9df4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3c9df4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9df8:
    // 0x3c9df8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c9df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9dfc:
    // 0x3c9dfc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3c9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3c9e00:
    // 0x3c9e00: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3c9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3c9e04:
    // 0x3c9e04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3c9e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c9e08:
    // 0x3c9e08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c9e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c9e0c:
    // 0x3c9e0c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3c9e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3c9e10:
    // 0x3c9e10: 0x320f809  jalr        $t9
label_3c9e14:
    if (ctx->pc == 0x3C9E14u) {
        ctx->pc = 0x3C9E18u;
        goto label_3c9e18;
    }
    ctx->pc = 0x3C9E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C9E18u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C9E18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C9E18u; }
            if (ctx->pc != 0x3C9E18u) { return; }
        }
        }
    }
    ctx->pc = 0x3C9E18u;
label_3c9e18:
    // 0x3c9e18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3c9e18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3c9e1c:
    // 0x3c9e1c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3c9e1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3c9e20:
    // 0x3c9e20: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3c9e24:
    if (ctx->pc == 0x3C9E24u) {
        ctx->pc = 0x3C9E24u;
            // 0x3c9e24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3C9E28u;
        goto label_3c9e28;
    }
    ctx->pc = 0x3C9E20u;
    {
        const bool branch_taken_0x3c9e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9E20u;
            // 0x3c9e24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9e20) {
            ctx->pc = 0x3C9DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c9dfc;
        }
    }
    ctx->pc = 0x3C9E28u;
label_3c9e28:
    // 0x3c9e28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c9e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c9e2c:
    // 0x3c9e2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c9e2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c9e30:
    // 0x3c9e30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c9e30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c9e34:
    // 0x3c9e34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c9e38:
    // 0x3c9e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c9e3c:
    // 0x3c9e3c: 0x3e00008  jr          $ra
label_3c9e40:
    if (ctx->pc == 0x3C9E40u) {
        ctx->pc = 0x3C9E40u;
            // 0x3c9e40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3C9E44u;
        goto label_3c9e44;
    }
    ctx->pc = 0x3C9E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9E3Cu;
            // 0x3c9e40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C9E44u;
label_3c9e44:
    // 0x3c9e44: 0x0  nop
    ctx->pc = 0x3c9e44u;
    // NOP
label_3c9e48:
    // 0x3c9e48: 0x0  nop
    ctx->pc = 0x3c9e48u;
    // NOP
label_3c9e4c:
    // 0x3c9e4c: 0x0  nop
    ctx->pc = 0x3c9e4cu;
    // NOP
}
