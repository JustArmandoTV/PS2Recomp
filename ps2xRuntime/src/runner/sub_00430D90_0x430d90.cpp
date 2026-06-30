#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00430D90
// Address: 0x430d90 - 0x430f60
void sub_00430D90_0x430d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430D90_0x430d90");
#endif

    switch (ctx->pc) {
        case 0x430d90u: goto label_430d90;
        case 0x430d94u: goto label_430d94;
        case 0x430d98u: goto label_430d98;
        case 0x430d9cu: goto label_430d9c;
        case 0x430da0u: goto label_430da0;
        case 0x430da4u: goto label_430da4;
        case 0x430da8u: goto label_430da8;
        case 0x430dacu: goto label_430dac;
        case 0x430db0u: goto label_430db0;
        case 0x430db4u: goto label_430db4;
        case 0x430db8u: goto label_430db8;
        case 0x430dbcu: goto label_430dbc;
        case 0x430dc0u: goto label_430dc0;
        case 0x430dc4u: goto label_430dc4;
        case 0x430dc8u: goto label_430dc8;
        case 0x430dccu: goto label_430dcc;
        case 0x430dd0u: goto label_430dd0;
        case 0x430dd4u: goto label_430dd4;
        case 0x430dd8u: goto label_430dd8;
        case 0x430ddcu: goto label_430ddc;
        case 0x430de0u: goto label_430de0;
        case 0x430de4u: goto label_430de4;
        case 0x430de8u: goto label_430de8;
        case 0x430decu: goto label_430dec;
        case 0x430df0u: goto label_430df0;
        case 0x430df4u: goto label_430df4;
        case 0x430df8u: goto label_430df8;
        case 0x430dfcu: goto label_430dfc;
        case 0x430e00u: goto label_430e00;
        case 0x430e04u: goto label_430e04;
        case 0x430e08u: goto label_430e08;
        case 0x430e0cu: goto label_430e0c;
        case 0x430e10u: goto label_430e10;
        case 0x430e14u: goto label_430e14;
        case 0x430e18u: goto label_430e18;
        case 0x430e1cu: goto label_430e1c;
        case 0x430e20u: goto label_430e20;
        case 0x430e24u: goto label_430e24;
        case 0x430e28u: goto label_430e28;
        case 0x430e2cu: goto label_430e2c;
        case 0x430e30u: goto label_430e30;
        case 0x430e34u: goto label_430e34;
        case 0x430e38u: goto label_430e38;
        case 0x430e3cu: goto label_430e3c;
        case 0x430e40u: goto label_430e40;
        case 0x430e44u: goto label_430e44;
        case 0x430e48u: goto label_430e48;
        case 0x430e4cu: goto label_430e4c;
        case 0x430e50u: goto label_430e50;
        case 0x430e54u: goto label_430e54;
        case 0x430e58u: goto label_430e58;
        case 0x430e5cu: goto label_430e5c;
        case 0x430e60u: goto label_430e60;
        case 0x430e64u: goto label_430e64;
        case 0x430e68u: goto label_430e68;
        case 0x430e6cu: goto label_430e6c;
        case 0x430e70u: goto label_430e70;
        case 0x430e74u: goto label_430e74;
        case 0x430e78u: goto label_430e78;
        case 0x430e7cu: goto label_430e7c;
        case 0x430e80u: goto label_430e80;
        case 0x430e84u: goto label_430e84;
        case 0x430e88u: goto label_430e88;
        case 0x430e8cu: goto label_430e8c;
        case 0x430e90u: goto label_430e90;
        case 0x430e94u: goto label_430e94;
        case 0x430e98u: goto label_430e98;
        case 0x430e9cu: goto label_430e9c;
        case 0x430ea0u: goto label_430ea0;
        case 0x430ea4u: goto label_430ea4;
        case 0x430ea8u: goto label_430ea8;
        case 0x430eacu: goto label_430eac;
        case 0x430eb0u: goto label_430eb0;
        case 0x430eb4u: goto label_430eb4;
        case 0x430eb8u: goto label_430eb8;
        case 0x430ebcu: goto label_430ebc;
        case 0x430ec0u: goto label_430ec0;
        case 0x430ec4u: goto label_430ec4;
        case 0x430ec8u: goto label_430ec8;
        case 0x430eccu: goto label_430ecc;
        case 0x430ed0u: goto label_430ed0;
        case 0x430ed4u: goto label_430ed4;
        case 0x430ed8u: goto label_430ed8;
        case 0x430edcu: goto label_430edc;
        case 0x430ee0u: goto label_430ee0;
        case 0x430ee4u: goto label_430ee4;
        case 0x430ee8u: goto label_430ee8;
        case 0x430eecu: goto label_430eec;
        case 0x430ef0u: goto label_430ef0;
        case 0x430ef4u: goto label_430ef4;
        case 0x430ef8u: goto label_430ef8;
        case 0x430efcu: goto label_430efc;
        case 0x430f00u: goto label_430f00;
        case 0x430f04u: goto label_430f04;
        case 0x430f08u: goto label_430f08;
        case 0x430f0cu: goto label_430f0c;
        case 0x430f10u: goto label_430f10;
        case 0x430f14u: goto label_430f14;
        case 0x430f18u: goto label_430f18;
        case 0x430f1cu: goto label_430f1c;
        case 0x430f20u: goto label_430f20;
        case 0x430f24u: goto label_430f24;
        case 0x430f28u: goto label_430f28;
        case 0x430f2cu: goto label_430f2c;
        case 0x430f30u: goto label_430f30;
        case 0x430f34u: goto label_430f34;
        case 0x430f38u: goto label_430f38;
        case 0x430f3cu: goto label_430f3c;
        case 0x430f40u: goto label_430f40;
        case 0x430f44u: goto label_430f44;
        case 0x430f48u: goto label_430f48;
        case 0x430f4cu: goto label_430f4c;
        case 0x430f50u: goto label_430f50;
        case 0x430f54u: goto label_430f54;
        case 0x430f58u: goto label_430f58;
        case 0x430f5cu: goto label_430f5c;
        default: break;
    }

    ctx->pc = 0x430d90u;

label_430d90:
    // 0x430d90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x430d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_430d94:
    // 0x430d94: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x430d94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_430d98:
    // 0x430d98: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x430d98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_430d9c:
    // 0x430d9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x430d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_430da0:
    // 0x430da0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x430da0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_430da4:
    // 0x430da4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x430da4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_430da8:
    // 0x430da8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x430da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_430dac:
    // 0x430dac: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x430dacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_430db0:
    // 0x430db0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x430db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_430db4:
    // 0x430db4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x430db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_430db8:
    // 0x430db8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x430db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_430dbc:
    // 0x430dbc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x430dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_430dc0:
    // 0x430dc0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x430dc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_430dc4:
    // 0x430dc4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x430dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_430dc8:
    // 0x430dc8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x430dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_430dcc:
    // 0x430dcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x430dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_430dd0:
    // 0x430dd0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x430dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_430dd4:
    // 0x430dd4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x430dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_430dd8:
    // 0x430dd8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x430dd8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_430ddc:
    // 0x430ddc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x430ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_430de0:
    // 0x430de0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x430de0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_430de4:
    // 0x430de4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x430de4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_430de8:
    // 0x430de8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x430de8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_430dec:
    // 0x430dec: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x430decu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_430df0:
    // 0x430df0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x430df0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_430df4:
    // 0x430df4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x430df4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_430df8:
    // 0x430df8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x430df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_430dfc:
    // 0x430dfc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x430dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_430e00:
    // 0x430e00: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x430e00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_430e04:
    // 0x430e04: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x430e04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_430e08:
    // 0x430e08: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x430e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_430e0c:
    // 0x430e0c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x430e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_430e10:
    // 0x430e10: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x430e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_430e14:
    // 0x430e14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x430e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_430e18:
    // 0x430e18: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x430e18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_430e1c:
    // 0x430e1c: 0x3e00008  jr          $ra
label_430e20:
    if (ctx->pc == 0x430E20u) {
        ctx->pc = 0x430E20u;
            // 0x430e20: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x430E24u;
        goto label_430e24;
    }
    ctx->pc = 0x430E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430E1Cu;
            // 0x430e20: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x430E24u;
label_430e24:
    // 0x430e24: 0x0  nop
    ctx->pc = 0x430e24u;
    // NOP
label_430e28:
    // 0x430e28: 0x0  nop
    ctx->pc = 0x430e28u;
    // NOP
label_430e2c:
    // 0x430e2c: 0x0  nop
    ctx->pc = 0x430e2cu;
    // NOP
label_430e30:
    // 0x430e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x430e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_430e34:
    // 0x430e34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x430e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_430e38:
    // 0x430e38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x430e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_430e3c:
    // 0x430e3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x430e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_430e40:
    // 0x430e40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x430e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_430e44:
    // 0x430e44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x430e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_430e48:
    // 0x430e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x430e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_430e4c:
    // 0x430e4c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x430e4cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_430e50:
    // 0x430e50: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_430e54:
    if (ctx->pc == 0x430E54u) {
        ctx->pc = 0x430E54u;
            // 0x430e54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430E58u;
        goto label_430e58;
    }
    ctx->pc = 0x430E50u;
    {
        const bool branch_taken_0x430e50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x430E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430E50u;
            // 0x430e54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e50) {
            ctx->pc = 0x430E84u;
            goto label_430e84;
        }
    }
    ctx->pc = 0x430E58u;
label_430e58:
    // 0x430e58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x430e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_430e5c:
    // 0x430e5c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_430e60:
    if (ctx->pc == 0x430E60u) {
        ctx->pc = 0x430E60u;
            // 0x430e60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x430E64u;
        goto label_430e64;
    }
    ctx->pc = 0x430E5Cu;
    {
        const bool branch_taken_0x430e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x430e5c) {
            ctx->pc = 0x430E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x430E5Cu;
            // 0x430e60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x430E78u;
            goto label_430e78;
        }
    }
    ctx->pc = 0x430E64u;
label_430e64:
    // 0x430e64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x430e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_430e68:
    // 0x430e68: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_430e6c:
    if (ctx->pc == 0x430E6Cu) {
        ctx->pc = 0x430E70u;
        goto label_430e70;
    }
    ctx->pc = 0x430E68u;
    {
        const bool branch_taken_0x430e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x430e68) {
            ctx->pc = 0x430EB8u;
            goto label_430eb8;
        }
    }
    ctx->pc = 0x430E70u;
label_430e70:
    // 0x430e70: 0x10000011  b           . + 4 + (0x11 << 2)
label_430e74:
    if (ctx->pc == 0x430E74u) {
        ctx->pc = 0x430E78u;
        goto label_430e78;
    }
    ctx->pc = 0x430E70u;
    {
        const bool branch_taken_0x430e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x430e70) {
            ctx->pc = 0x430EB8u;
            goto label_430eb8;
        }
    }
    ctx->pc = 0x430E78u;
label_430e78:
    // 0x430e78: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x430e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_430e7c:
    // 0x430e7c: 0x320f809  jalr        $t9
label_430e80:
    if (ctx->pc == 0x430E80u) {
        ctx->pc = 0x430E84u;
        goto label_430e84;
    }
    ctx->pc = 0x430E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x430E84u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x430E84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x430E84u; }
            if (ctx->pc != 0x430E84u) { return; }
        }
        }
    }
    ctx->pc = 0x430E84u;
label_430e84:
    // 0x430e84: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x430e84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_430e88:
    // 0x430e88: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_430e8c:
    if (ctx->pc == 0x430E8Cu) {
        ctx->pc = 0x430E90u;
        goto label_430e90;
    }
    ctx->pc = 0x430E88u;
    {
        const bool branch_taken_0x430e88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x430e88) {
            ctx->pc = 0x430EB8u;
            goto label_430eb8;
        }
    }
    ctx->pc = 0x430E90u;
label_430e90:
    // 0x430e90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x430e90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430e94:
    // 0x430e94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x430e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430e98:
    // 0x430e98: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x430e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_430e9c:
    // 0x430e9c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x430e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_430ea0:
    // 0x430ea0: 0xc0e3658  jal         func_38D960
label_430ea4:
    if (ctx->pc == 0x430EA4u) {
        ctx->pc = 0x430EA4u;
            // 0x430ea4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x430EA8u;
        goto label_430ea8;
    }
    ctx->pc = 0x430EA0u;
    SET_GPR_U32(ctx, 31, 0x430EA8u);
    ctx->pc = 0x430EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430EA0u;
            // 0x430ea4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430EA8u; }
        if (ctx->pc != 0x430EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430EA8u; }
        if (ctx->pc != 0x430EA8u) { return; }
    }
    ctx->pc = 0x430EA8u;
label_430ea8:
    // 0x430ea8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x430ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_430eac:
    // 0x430eac: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x430eacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_430eb0:
    // 0x430eb0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_430eb4:
    if (ctx->pc == 0x430EB4u) {
        ctx->pc = 0x430EB4u;
            // 0x430eb4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x430EB8u;
        goto label_430eb8;
    }
    ctx->pc = 0x430EB0u;
    {
        const bool branch_taken_0x430eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x430EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430EB0u;
            // 0x430eb4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430eb0) {
            ctx->pc = 0x430E98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_430e98;
        }
    }
    ctx->pc = 0x430EB8u;
label_430eb8:
    // 0x430eb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x430eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_430ebc:
    // 0x430ebc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x430ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_430ec0:
    // 0x430ec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x430ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_430ec4:
    // 0x430ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x430ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_430ec8:
    // 0x430ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x430ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_430ecc:
    // 0x430ecc: 0x3e00008  jr          $ra
label_430ed0:
    if (ctx->pc == 0x430ED0u) {
        ctx->pc = 0x430ED0u;
            // 0x430ed0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x430ED4u;
        goto label_430ed4;
    }
    ctx->pc = 0x430ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430ECCu;
            // 0x430ed0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x430ED4u;
label_430ed4:
    // 0x430ed4: 0x0  nop
    ctx->pc = 0x430ed4u;
    // NOP
label_430ed8:
    // 0x430ed8: 0x0  nop
    ctx->pc = 0x430ed8u;
    // NOP
label_430edc:
    // 0x430edc: 0x0  nop
    ctx->pc = 0x430edcu;
    // NOP
label_430ee0:
    // 0x430ee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x430ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_430ee4:
    // 0x430ee4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x430ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_430ee8:
    // 0x430ee8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x430ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_430eec:
    // 0x430eec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x430eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_430ef0:
    // 0x430ef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x430ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_430ef4:
    // 0x430ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x430ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_430ef8:
    // 0x430ef8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x430ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_430efc:
    // 0x430efc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_430f00:
    if (ctx->pc == 0x430F00u) {
        ctx->pc = 0x430F00u;
            // 0x430f00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430F04u;
        goto label_430f04;
    }
    ctx->pc = 0x430EFCu;
    {
        const bool branch_taken_0x430efc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x430F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430EFCu;
            // 0x430f00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430efc) {
            ctx->pc = 0x430F38u;
            goto label_430f38;
        }
    }
    ctx->pc = 0x430F04u;
label_430f04:
    // 0x430f04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x430f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430f08:
    // 0x430f08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x430f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430f0c:
    // 0x430f0c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x430f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_430f10:
    // 0x430f10: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x430f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_430f14:
    // 0x430f14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x430f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_430f18:
    // 0x430f18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x430f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_430f1c:
    // 0x430f1c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x430f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_430f20:
    // 0x430f20: 0x320f809  jalr        $t9
label_430f24:
    if (ctx->pc == 0x430F24u) {
        ctx->pc = 0x430F28u;
        goto label_430f28;
    }
    ctx->pc = 0x430F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x430F28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x430F28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x430F28u; }
            if (ctx->pc != 0x430F28u) { return; }
        }
        }
    }
    ctx->pc = 0x430F28u;
label_430f28:
    // 0x430f28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x430f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_430f2c:
    // 0x430f2c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x430f2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_430f30:
    // 0x430f30: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_430f34:
    if (ctx->pc == 0x430F34u) {
        ctx->pc = 0x430F34u;
            // 0x430f34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x430F38u;
        goto label_430f38;
    }
    ctx->pc = 0x430F30u;
    {
        const bool branch_taken_0x430f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x430F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430F30u;
            // 0x430f34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430f30) {
            ctx->pc = 0x430F0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_430f0c;
        }
    }
    ctx->pc = 0x430F38u;
label_430f38:
    // 0x430f38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x430f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_430f3c:
    // 0x430f3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x430f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_430f40:
    // 0x430f40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x430f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_430f44:
    // 0x430f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x430f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_430f48:
    // 0x430f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x430f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_430f4c:
    // 0x430f4c: 0x3e00008  jr          $ra
label_430f50:
    if (ctx->pc == 0x430F50u) {
        ctx->pc = 0x430F50u;
            // 0x430f50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x430F54u;
        goto label_430f54;
    }
    ctx->pc = 0x430F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430F4Cu;
            // 0x430f50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x430F54u;
label_430f54:
    // 0x430f54: 0x0  nop
    ctx->pc = 0x430f54u;
    // NOP
label_430f58:
    // 0x430f58: 0x0  nop
    ctx->pc = 0x430f58u;
    // NOP
label_430f5c:
    // 0x430f5c: 0x0  nop
    ctx->pc = 0x430f5cu;
    // NOP
}
