#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182D28
// Address: 0x182d28 - 0x1833e0
void sub_00182D28_0x182d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182D28_0x182d28");
#endif

    switch (ctx->pc) {
        case 0x182d38u: goto label_182d38;
        case 0x182d68u: goto label_182d68;
        case 0x182dd0u: goto label_182dd0;
        case 0x182fc0u: goto label_182fc0;
        case 0x1830b8u: goto label_1830b8;
        case 0x183130u: goto label_183130;
        case 0x183138u: goto label_183138;
        case 0x183140u: goto label_183140;
        case 0x183148u: goto label_183148;
        case 0x183150u: goto label_183150;
        case 0x183160u: goto label_183160;
        case 0x183188u: goto label_183188;
        case 0x1831a0u: goto label_1831a0;
        case 0x1831d8u: goto label_1831d8;
        case 0x183208u: goto label_183208;
        case 0x18321cu: goto label_18321c;
        case 0x183220u: goto label_183220;
        case 0x18325cu: goto label_18325c;
        case 0x183274u: goto label_183274;
        case 0x1832acu: goto label_1832ac;
        case 0x1832c4u: goto label_1832c4;
        case 0x1832c8u: goto label_1832c8;
        case 0x1832f8u: goto label_1832f8;
        case 0x183348u: goto label_183348;
        case 0x183388u: goto label_183388;
        case 0x1833d0u: goto label_1833d0;
        default: break;
    }

    ctx->pc = 0x182d28u;

    // 0x182d28: 0x3e00008  jr          $ra
    ctx->pc = 0x182D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D28u;
            // 0x182d2c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182D30u;
    // 0x182d30: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x182D30u;
    {
        const bool branch_taken_0x182d30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x182d30) {
            ctx->pc = 0x182D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182D30u;
            // 0x182d34: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182D58u;
            goto label_182d58;
        }
    }
    ctx->pc = 0x182D38u;
label_182d38:
    // 0x182d38: 0x0  nop
    ctx->pc = 0x182d38u;
    // NOP
    // 0x182d3c: 0x0  nop
    ctx->pc = 0x182d3cu;
    // NOP
    // 0x182d40: 0x0  nop
    ctx->pc = 0x182d40u;
    // NOP
    // 0x182d44: 0x0  nop
    ctx->pc = 0x182d44u;
    // NOP
    // 0x182d48: 0x0  nop
    ctx->pc = 0x182d48u;
    // NOP
    // 0x182d4c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x182D4Cu;
    {
        const bool branch_taken_0x182d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d4c) {
            ctx->pc = 0x182D38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182d38;
        }
    }
    ctx->pc = 0x182D54u;
    // 0x182d54: 0x0  nop
    ctx->pc = 0x182d54u;
    // NOP
label_182d58:
    // 0x182d58: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x182D58u;
    {
        const bool branch_taken_0x182d58 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x182d58) {
            ctx->pc = 0x182D84u;
            goto label_182d84;
        }
    }
    ctx->pc = 0x182D60u;
    // 0x182d60: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x182d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x182d64: 0x0  nop
    ctx->pc = 0x182d64u;
    // NOP
label_182d68:
    // 0x182d68: 0x0  nop
    ctx->pc = 0x182d68u;
    // NOP
    // 0x182d6c: 0x0  nop
    ctx->pc = 0x182d6cu;
    // NOP
    // 0x182d70: 0x0  nop
    ctx->pc = 0x182d70u;
    // NOP
    // 0x182d74: 0x0  nop
    ctx->pc = 0x182d74u;
    // NOP
    // 0x182d78: 0x0  nop
    ctx->pc = 0x182d78u;
    // NOP
    // 0x182d7c: 0x54a0fffa  bnel        $a1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x182D7Cu;
    {
        const bool branch_taken_0x182d7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x182d7c) {
            ctx->pc = 0x182D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182D7Cu;
            // 0x182d80: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182D68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182d68;
        }
    }
    ctx->pc = 0x182D84u;
label_182d84:
    // 0x182d84: 0x3e00008  jr          $ra
    ctx->pc = 0x182D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182D8Cu;
    // 0x182d8c: 0x0  nop
    ctx->pc = 0x182d8cu;
    // NOP
    // 0x182d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182d94: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x182d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x182d98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x182d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182d9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x182d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182da0: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x182da0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x182da4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x182da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x182da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182dac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x182dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182db0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x182db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x182db4: 0x2452bf30  addiu       $s2, $v0, -0x40D0
    ctx->pc = 0x182db4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950704));
    // 0x182db8: 0x2467f330  addiu       $a3, $v1, -0xCD0
    ctx->pc = 0x182db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964016));
    // 0x182dbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x182dbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182dc0: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x182dc0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182dc4: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x182dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182dc8: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x182dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182dcc: 0x0  nop
    ctx->pc = 0x182dccu;
    // NOP
label_182dd0:
    // 0x182dd0: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x182dd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x182dd4: 0x545000af  bnel        $v0, $s0, . + 4 + (0xAF << 2)
    ctx->pc = 0x182DD4u;
    {
        const bool branch_taken_0x182dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x182dd4) {
            ctx->pc = 0x182DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182DD4u;
            // 0x182dd8: 0x27180001  addiu       $t8, $t8, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183094u;
            goto label_183094;
        }
    }
    ctx->pc = 0x182DDCu;
    // 0x182ddc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x182ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x182de0: 0x514800b0  beql        $t2, $t0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x182DE0u;
    {
        const bool branch_taken_0x182de0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x182de0) {
            ctx->pc = 0x182DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182DE0u;
            // 0x182de4: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1830A4u;
            goto label_1830a4;
        }
    }
    ctx->pc = 0x182DE8u;
    // 0x182de8: 0x80e3005b  lb          $v1, 0x5B($a3)
    ctx->pc = 0x182de8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x182dec: 0x80e2005a  lb          $v0, 0x5A($a3)
    ctx->pc = 0x182decu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 90)));
    // 0x182df0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x182DF0u;
    {
        const bool branch_taken_0x182df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182DF0u;
            // 0x182df4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182df0) {
            ctx->pc = 0x182E1Cu;
            goto label_182e1c;
        }
    }
    ctx->pc = 0x182DF8u;
    // 0x182df8: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x182df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x182dfc: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x182dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x182e00: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x182e00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x182e04: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x182e04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x182e08: 0x80e2005b  lb          $v0, 0x5B($a3)
    ctx->pc = 0x182e08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x182e0c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x182e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x182e10: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x182e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x182e14: 0x90e2005b  lbu         $v0, 0x5B($a3)
    ctx->pc = 0x182e14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x182e18: 0xa0e2005a  sb          $v0, 0x5A($a3)
    ctx->pc = 0x182e18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 90), (uint8_t)GPR_U32(ctx, 2));
label_182e1c:
    // 0x182e1c: 0x114800a0  beq         $t2, $t0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x182E1Cu;
    {
        const bool branch_taken_0x182e1c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x182E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E1Cu;
            // 0x182e20: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e1c) {
            ctx->pc = 0x1830A0u;
            goto label_1830a0;
        }
    }
    ctx->pc = 0x182E24u;
    // 0x182e24: 0x94e30050  lhu         $v1, 0x50($a3)
    ctx->pc = 0x182e24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x182e28: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x182E28u;
    {
        const bool branch_taken_0x182e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x182e28) {
            ctx->pc = 0x182E54u;
            goto label_182e54;
        }
    }
    ctx->pc = 0x182E30u;
    // 0x182e30: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x182e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x182e34: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x182e34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x182e38: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x182e38u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x182e3c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x182e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x182e40: 0x80e30050  lb          $v1, 0x50($a3)
    ctx->pc = 0x182e40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x182e44: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x182e44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x182e48: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x182e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x182e4c: 0x90e20050  lbu         $v0, 0x50($a3)
    ctx->pc = 0x182e4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x182e50: 0xa0e20051  sb          $v0, 0x51($a3)
    ctx->pc = 0x182e50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 81), (uint8_t)GPR_U32(ctx, 2));
label_182e54:
    // 0x182e54: 0x51480093  beql        $t2, $t0, . + 4 + (0x93 << 2)
    ctx->pc = 0x182E54u;
    {
        const bool branch_taken_0x182e54 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x182e54) {
            ctx->pc = 0x182E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182E54u;
            // 0x182e58: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1830A4u;
            goto label_1830a4;
        }
    }
    ctx->pc = 0x182E5Cu;
    // 0x182e5c: 0x80e30054  lb          $v1, 0x54($a3)
    ctx->pc = 0x182e5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x182e60: 0x80e20055  lb          $v0, 0x55($a3)
    ctx->pc = 0x182e60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 85)));
    // 0x182e64: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x182E64u;
    {
        const bool branch_taken_0x182e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E64u;
            // 0x182e68: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e64) {
            ctx->pc = 0x182E90u;
            goto label_182e90;
        }
    }
    ctx->pc = 0x182E6Cu;
    // 0x182e6c: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x182e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x182e70: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x182e70u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x182e74: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x182e74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x182e78: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x182e78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x182e7c: 0x80e20054  lb          $v0, 0x54($a3)
    ctx->pc = 0x182e7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x182e80: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x182e80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x182e84: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x182e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x182e88: 0x90e20054  lbu         $v0, 0x54($a3)
    ctx->pc = 0x182e88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x182e8c: 0xa0e20055  sb          $v0, 0x55($a3)
    ctx->pc = 0x182e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 85), (uint8_t)GPR_U32(ctx, 2));
label_182e90:
    // 0x182e90: 0x51480084  beql        $t2, $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x182E90u;
    {
        const bool branch_taken_0x182e90 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x182e90) {
            ctx->pc = 0x182E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182E90u;
            // 0x182e94: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1830A4u;
            goto label_1830a4;
        }
    }
    ctx->pc = 0x182E98u;
    // 0x182e98: 0x80e30056  lb          $v1, 0x56($a3)
    ctx->pc = 0x182e98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x182e9c: 0x80e20057  lb          $v0, 0x57($a3)
    ctx->pc = 0x182e9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 87)));
    // 0x182ea0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x182EA0u;
    {
        const bool branch_taken_0x182ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182EA0u;
            // 0x182ea4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ea0) {
            ctx->pc = 0x182ECCu;
            goto label_182ecc;
        }
    }
    ctx->pc = 0x182EA8u;
    // 0x182ea8: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x182ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x182eac: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x182eacu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x182eb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x182eb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x182eb4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x182eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x182eb8: 0x80e20056  lb          $v0, 0x56($a3)
    ctx->pc = 0x182eb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x182ebc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x182ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x182ec0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x182ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x182ec4: 0x90e20056  lbu         $v0, 0x56($a3)
    ctx->pc = 0x182ec4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x182ec8: 0xa0e20057  sb          $v0, 0x57($a3)
    ctx->pc = 0x182ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 87), (uint8_t)GPR_U32(ctx, 2));
label_182ecc:
    // 0x182ecc: 0x51480075  beql        $t2, $t0, . + 4 + (0x75 << 2)
    ctx->pc = 0x182ECCu;
    {
        const bool branch_taken_0x182ecc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x182ecc) {
            ctx->pc = 0x182ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182ECCu;
            // 0x182ed0: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1830A4u;
            goto label_1830a4;
        }
    }
    ctx->pc = 0x182ED4u;
    // 0x182ed4: 0x80e30052  lb          $v1, 0x52($a3)
    ctx->pc = 0x182ed4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x182ed8: 0x80e20053  lb          $v0, 0x53($a3)
    ctx->pc = 0x182ed8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 83)));
    // 0x182edc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x182EDCu;
    {
        const bool branch_taken_0x182edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182EDCu;
            // 0x182ee0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182edc) {
            ctx->pc = 0x182F08u;
            goto label_182f08;
        }
    }
    ctx->pc = 0x182EE4u;
    // 0x182ee4: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x182ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x182ee8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x182ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x182eec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x182eecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x182ef0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x182ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x182ef4: 0x80e20052  lb          $v0, 0x52($a3)
    ctx->pc = 0x182ef4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x182ef8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x182ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x182efc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x182efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x182f00: 0x90e20052  lbu         $v0, 0x52($a3)
    ctx->pc = 0x182f00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x182f04: 0xa0e20053  sb          $v0, 0x53($a3)
    ctx->pc = 0x182f04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 83), (uint8_t)GPR_U32(ctx, 2));
label_182f08:
    // 0x182f08: 0x51480066  beql        $t2, $t0, . + 4 + (0x66 << 2)
    ctx->pc = 0x182F08u;
    {
        const bool branch_taken_0x182f08 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x182f08) {
            ctx->pc = 0x182F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182F08u;
            // 0x182f0c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1830A4u;
            goto label_1830a4;
        }
    }
    ctx->pc = 0x182F10u;
    // 0x182f10: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x182f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x182f14: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x182f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x182f18: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x182F18u;
    {
        const bool branch_taken_0x182f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F18u;
            // 0x182f1c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f18) {
            ctx->pc = 0x182F40u;
            goto label_182f40;
        }
    }
    ctx->pc = 0x182F20u;
    // 0x182f20: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x182f20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x182f24: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x182f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x182f28: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x182f28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x182f2c: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x182f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x182f30: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x182f30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x182f34: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x182f34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
    // 0x182f38: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x182f38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x182f3c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x182f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_182f40:
    // 0x182f40: 0x51480058  beql        $t2, $t0, . + 4 + (0x58 << 2)
    ctx->pc = 0x182F40u;
    {
        const bool branch_taken_0x182f40 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x182f40) {
            ctx->pc = 0x182F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182F40u;
            // 0x182f44: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1830A4u;
            goto label_1830a4;
        }
    }
    ctx->pc = 0x182F48u;
    // 0x182f48: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x182f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x182f4c: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x182f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x182f50: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x182F50u;
    {
        const bool branch_taken_0x182f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F50u;
            // 0x182f54: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f50) {
            ctx->pc = 0x182F88u;
            goto label_182f88;
        }
    }
    ctx->pc = 0x182F58u;
    // 0x182f58: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x182f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x182f5c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x182f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x182f60: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x182f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x182f64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x182f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182f68: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x182f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x182f6c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x182f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x182f70: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x182f70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x182f74: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x182f74u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x182f78: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x182f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x182f7c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x182f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x182f80: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x182f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x182f84: 0xace2003c  sw          $v0, 0x3C($a3)
    ctx->pc = 0x182f84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 2));
label_182f88:
    // 0x182f88: 0x11480045  beq         $t2, $t0, . + 4 + (0x45 << 2)
    ctx->pc = 0x182F88u;
    {
        const bool branch_taken_0x182f88 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x182F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F88u;
            // 0x182f8c: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f88) {
            ctx->pc = 0x1830A0u;
            goto label_1830a0;
        }
    }
    ctx->pc = 0x182F90u;
    // 0x182f90: 0x51420044  beql        $t2, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x182F90u;
    {
        const bool branch_taken_0x182f90 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x182f90) {
            ctx->pc = 0x182F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182F90u;
            // 0x182f94: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1830A4u;
            goto label_1830a4;
        }
    }
    ctx->pc = 0x182F98u;
    // 0x182f98: 0x80e20052  lb          $v0, 0x52($a3)
    ctx->pc = 0x182f98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x182f9c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x182f9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fa0: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x182FA0u;
    {
        const bool branch_taken_0x182fa0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x182FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182FA0u;
            // 0x182fa4: 0x90e90052  lbu         $t1, 0x52($a3) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182fa0) {
            ctx->pc = 0x18301Cu;
            goto label_18301c;
        }
    }
    ctx->pc = 0x182FA8u;
    // 0x182fa8: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x182fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x182fac: 0x24ed0008  addiu       $t5, $a3, 0x8
    ctx->pc = 0x182facu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x182fb0: 0x4f2021  addu        $a0, $v0, $t7
    ctx->pc = 0x182fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x182fb4: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x182fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x182fb8: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x182fb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x182fbc: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x182fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_182fc0:
    // 0x182fc0: 0x1ab4021  addu        $t0, $t5, $t3
    ctx->pc = 0x182fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x182fc4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x182fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182fc8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x182fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x182fcc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x182FCCu;
    {
        const bool branch_taken_0x182fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182FCCu;
            // 0x182fd0: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182fcc) {
            ctx->pc = 0x183004u;
            goto label_183004;
        }
    }
    ctx->pc = 0x182FD4u;
    // 0x182fd4: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x182fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x182fd8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x182fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x182fdc: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x182fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x182fe0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x182fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x182fe4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x182fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182fe8: 0xa48e0000  sh          $t6, 0x0($a0)
    ctx->pc = 0x182fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x182fec: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x182fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x182ff0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x182ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x182ff4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x182ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x182ff8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x182ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182ffc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x182ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x183000: 0x90e90052  lbu         $t1, 0x52($a3)
    ctx->pc = 0x183000u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
label_183004:
    // 0x183004: 0x91600  sll         $v0, $t1, 24
    ctx->pc = 0x183004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x183008: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x183008u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x18300c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x18300cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x183010: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x183010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183014: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x183014u;
    {
        const bool branch_taken_0x183014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183014u;
            // 0x183018: 0xeb2821  addu        $a1, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183014) {
            ctx->pc = 0x182FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182fc0;
        }
    }
    ctx->pc = 0x18301Cu;
label_18301c:
    // 0x18301c: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x18301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x183020: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x183020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x183024: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x183024u;
    {
        const bool branch_taken_0x183024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x183028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183024u;
            // 0x183028: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183024) {
            ctx->pc = 0x18304Cu;
            goto label_18304c;
        }
    }
    ctx->pc = 0x18302Cu;
    // 0x18302c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x18302cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x183030: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x183030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x183034: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x183034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x183038: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x183038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x18303c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x18303cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x183040: 0xace30060  sw          $v1, 0x60($a3)
    ctx->pc = 0x183040u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 3));
    // 0x183044: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x183044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x183048: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x183048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_18304c:
    // 0x18304c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x18304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x183050: 0x51440014  beql        $t2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x183050u;
    {
        const bool branch_taken_0x183050 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x183050) {
            ctx->pc = 0x183054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183050u;
            // 0x183054: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1830A4u;
            goto label_1830a4;
        }
    }
    ctx->pc = 0x183058u;
    // 0x183058: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x183058u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x18305c: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x18305Cu;
    {
        const bool branch_taken_0x18305c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x18305c) {
            ctx->pc = 0x183088u;
            goto label_183088;
        }
    }
    ctx->pc = 0x183064u;
    // 0x183064: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x183064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x183068: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x183068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x18306c: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x18306cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x183070: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x183070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x183074: 0x80e30050  lb          $v1, 0x50($a3)
    ctx->pc = 0x183074u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x183078: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x183078u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x18307c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x18307cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x183080: 0x90e20050  lbu         $v0, 0x50($a3)
    ctx->pc = 0x183080u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x183084: 0xa0e20051  sb          $v0, 0x51($a3)
    ctx->pc = 0x183084u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 81), (uint8_t)GPR_U32(ctx, 2));
label_183088:
    // 0x183088: 0x51440006  beql        $t2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x183088u;
    {
        const bool branch_taken_0x183088 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x183088) {
            ctx->pc = 0x18308Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183088u;
            // 0x18308c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1830A4u;
            goto label_1830a4;
        }
    }
    ctx->pc = 0x183090u;
    // 0x183090: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x183090u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
label_183094:
    // 0x183094: 0x2b020010  slti        $v0, $t8, 0x10
    ctx->pc = 0x183094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x183098: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x183098u;
    {
        const bool branch_taken_0x183098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18309Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183098u;
            // 0x18309c: 0x24e70064  addiu       $a3, $a3, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183098) {
            ctx->pc = 0x182DD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182dd0;
        }
    }
    ctx->pc = 0x1830A0u;
label_1830a0:
    // 0x1830a0: 0xae2a0000  sw          $t2, 0x0($s1)
    ctx->pc = 0x1830a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
label_1830a4:
    // 0x1830a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1830a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1830a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1830a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1830ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1830acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1830b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1830B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1830B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1830B0u;
            // 0x1830b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1830B8u;
label_1830b8:
    // 0x1830b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1830b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1830bc: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1830bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1830c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1830c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1830c4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1830c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1830c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1830c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1830cc: 0x2442bf28  addiu       $v0, $v0, -0x40D8
    ctx->pc = 0x1830ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950696));
    // 0x1830d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1830d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1830d4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1830d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1830d8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1830d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1830dc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1830dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1830e0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1830e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1830e4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1830e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1830e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1830e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1830ec: 0x8c64ced8  lw          $a0, -0x3128($v1)
    ctx->pc = 0x1830ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954712)));
    // 0x1830f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1830f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1830f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1830f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1830f8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1830F8u;
    {
        const bool branch_taken_0x1830f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1830FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1830F8u;
            // 0x1830fc: 0x3c17005f  lui         $s7, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1830f8) {
            ctx->pc = 0x183114u;
            goto label_183114;
        }
    }
    ctx->pc = 0x183100u;
    // 0x183100: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183104: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
    // 0x183108: 0x18600094  blez        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x183108u;
    {
        const bool branch_taken_0x183108 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18310Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183108u;
            // 0x18310c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183108) {
            ctx->pc = 0x18335Cu;
            goto label_18335c;
        }
    }
    ctx->pc = 0x183110u;
    // 0x183110: 0x3c17005f  lui         $s7, 0x5F
    ctx->pc = 0x183110u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)95 << 16));
label_183114:
    // 0x183114: 0x8ee2cf1c  lw          $v0, -0x30E4($s7)
    ctx->pc = 0x183114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954780)));
    // 0x183118: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x183118u;
    {
        const bool branch_taken_0x183118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183118u;
            // 0x18311c: 0x26e3cf1c  addiu       $v1, $s7, -0x30E4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954780));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183118) {
            ctx->pc = 0x18334Cu;
            goto label_18334c;
        }
    }
    ctx->pc = 0x183120u;
    // 0x183120: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x183120u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x183124: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x183124u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x183128: 0xc061dca  jal         func_187728
    ctx->pc = 0x183128u;
    SET_GPR_U32(ctx, 31, 0x183130u);
    ctx->pc = 0x18312Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183128u;
            // 0x18312c: 0x2610f978  addiu       $s0, $s0, -0x688 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187728u;
    if (runtime->hasFunction(0x187728u)) {
        auto targetFn = runtime->lookupFunction(0x187728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183130u; }
        if (ctx->pc != 0x183130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187728_0x187728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183130u; }
        if (ctx->pc != 0x183130u) { return; }
    }
    ctx->pc = 0x183130u;
label_183130:
    // 0x183130: 0xc061e60  jal         func_187980
    ctx->pc = 0x183130u;
    SET_GPR_U32(ctx, 31, 0x183138u);
    ctx->pc = 0x183134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183130u;
            // 0x183134: 0x2671cf24  addiu       $s1, $s3, -0x30DC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954788));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187980u;
    if (runtime->hasFunction(0x187980u)) {
        auto targetFn = runtime->lookupFunction(0x187980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183138u; }
        if (ctx->pc != 0x183138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187980_0x187980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183138u; }
        if (ctx->pc != 0x183138u) { return; }
    }
    ctx->pc = 0x183138u;
label_183138:
    // 0x183138: 0xc05f182  jal         func_17C608
    ctx->pc = 0x183138u;
    SET_GPR_U32(ctx, 31, 0x183140u);
    ctx->pc = 0x18313Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183138u;
            // 0x18313c: 0x3c14005f  lui         $s4, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C608u;
    if (runtime->hasFunction(0x17C608u)) {
        auto targetFn = runtime->lookupFunction(0x17C608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183140u; }
        if (ctx->pc != 0x183140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C608_0x17c608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183140u; }
        if (ctx->pc != 0x183140u) { return; }
    }
    ctx->pc = 0x183140u;
label_183140:
    // 0x183140: 0xc060cf8  jal         func_1833E0
    ctx->pc = 0x183140u;
    SET_GPR_U32(ctx, 31, 0x183148u);
    ctx->pc = 0x183144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183140u;
            // 0x183144: 0x3c12005f  lui         $s2, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1833E0u;
    if (runtime->hasFunction(0x1833E0u)) {
        auto targetFn = runtime->lookupFunction(0x1833E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183148u; }
        if (ctx->pc != 0x183148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001833E0_0x1833e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183148u; }
        if (ctx->pc != 0x183148u) { return; }
    }
    ctx->pc = 0x183148u;
label_183148:
    // 0x183148: 0xc060a36  jal         func_1828D8
    ctx->pc = 0x183148u;
    SET_GPR_U32(ctx, 31, 0x183150u);
    ctx->pc = 0x1828D8u;
    if (runtime->hasFunction(0x1828D8u)) {
        auto targetFn = runtime->lookupFunction(0x1828D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183150u; }
        if (ctx->pc != 0x183150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001828D8_0x1828d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183150u; }
        if (ctx->pc != 0x183150u) { return; }
    }
    ctx->pc = 0x183150u;
label_183150:
    // 0x183150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183158: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x183158u;
    SET_GPR_U32(ctx, 31, 0x183160u);
    ctx->pc = 0x18315Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183158u;
            // 0x18315c: 0x240608d0  addiu       $a2, $zero, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183160u; }
        if (ctx->pc != 0x183160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183160u; }
        if (ctx->pc != 0x183160u) { return; }
    }
    ctx->pc = 0x183160u;
label_183160:
    // 0x183160: 0x24040880  addiu       $a0, $zero, 0x880
    ctx->pc = 0x183160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x183164: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x183164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x183168: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x183168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x18316c: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x18316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x183170: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x183170u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x183174: 0xae84f974  sw          $a0, -0x68C($s4)
    ctx->pc = 0x183174u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965620), GPR_U32(ctx, 4));
    // 0x183178: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x183178u;
    {
        const bool branch_taken_0x183178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18317Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183178u;
            // 0x18317c: 0xae50cf20  sw          $s0, -0x30E0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294954784), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183178) {
            ctx->pc = 0x1831C0u;
            goto label_1831c0;
        }
    }
    ctx->pc = 0x183180u;
    // 0x183180: 0xc045208  jal         func_114820
    ctx->pc = 0x183180u;
    SET_GPR_U32(ctx, 31, 0x183188u);
    ctx->pc = 0x183184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183180u;
            // 0x183184: 0x240408d0  addiu       $a0, $zero, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114820u;
    if (runtime->hasFunction(0x114820u)) {
        auto targetFn = runtime->lookupFunction(0x114820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183188u; }
        if (ctx->pc != 0x183188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114820_0x114820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183188u; }
        if (ctx->pc != 0x183188u) { return; }
    }
    ctx->pc = 0x183188u;
label_183188:
    // 0x183188: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x183188u;
    {
        const bool branch_taken_0x183188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183188u;
            // 0x18318c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183188) {
            ctx->pc = 0x1831C0u;
            goto label_1831c0;
        }
    }
    ctx->pc = 0x183190u;
    // 0x183190: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x183190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x183194: 0x240508d0  addiu       $a1, $zero, 0x8D0
    ctx->pc = 0x183194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x183198: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x183198u;
    SET_GPR_U32(ctx, 31, 0x1831A0u);
    ctx->pc = 0x18319Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183198u;
            // 0x18319c: 0x24847620  addiu       $a0, $a0, 0x7620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831A0u; }
        if (ctx->pc != 0x1831A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831A0u; }
        if (ctx->pc != 0x1831A0u) { return; }
    }
    ctx->pc = 0x1831A0u;
label_1831a0:
    // 0x1831a0: 0x0  nop
    ctx->pc = 0x1831a0u;
    // NOP
    // 0x1831a4: 0x0  nop
    ctx->pc = 0x1831a4u;
    // NOP
    // 0x1831a8: 0x0  nop
    ctx->pc = 0x1831a8u;
    // NOP
    // 0x1831ac: 0x0  nop
    ctx->pc = 0x1831acu;
    // NOP
    // 0x1831b0: 0x0  nop
    ctx->pc = 0x1831b0u;
    // NOP
    // 0x1831b4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1831B4u;
    {
        const bool branch_taken_0x1831b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1831b4) {
            ctx->pc = 0x1831A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1831a0;
        }
    }
    ctx->pc = 0x1831BCu;
    // 0x1831bc: 0x0  nop
    ctx->pc = 0x1831bcu;
    // NOP
label_1831c0:
    // 0x1831c0: 0x2670cf24  addiu       $s0, $s3, -0x30DC
    ctx->pc = 0x1831c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954788));
    // 0x1831c4: 0x3c160063  lui         $s6, 0x63
    ctx->pc = 0x1831c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)99 << 16));
    // 0x1831c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1831c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1831cc: 0x26c474e8  addiu       $a0, $s6, 0x74E8
    ctx->pc = 0x1831ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 29928));
    // 0x1831d0: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x1831D0u;
    SET_GPR_U32(ctx, 31, 0x1831D8u);
    ctx->pc = 0x1831D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1831D0u;
            // 0x1831d4: 0x240508d0  addiu       $a1, $zero, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831D8u; }
        if (ctx->pc != 0x1831D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831D8u; }
        if (ctx->pc != 0x1831D8u) { return; }
    }
    ctx->pc = 0x1831D8u;
label_1831d8:
    // 0x1831d8: 0x3c08005f  lui         $t0, 0x5F
    ctx->pc = 0x1831d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)95 << 16));
    // 0x1831dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1831dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1831e0: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x1831e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x1831e4: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1831e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1831e8: 0x8e45cf20  lw          $a1, -0x30E0($s2)
    ctx->pc = 0x1831e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954784)));
    // 0x1831ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1831ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1831f0: 0x8e87f974  lw          $a3, -0x68C($s4)
    ctx->pc = 0x1831f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965620)));
    // 0x1831f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1831f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1831f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1831f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1831fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1831fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183200: 0xc05f09e  jal         func_17C278
    ctx->pc = 0x183200u;
    SET_GPR_U32(ctx, 31, 0x183208u);
    ctx->pc = 0x183204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183200u;
            // 0x183204: 0xad02cf28  sw          $v0, -0x30D8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294954792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C278u;
    if (runtime->hasFunction(0x17C278u)) {
        auto targetFn = runtime->lookupFunction(0x17C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183208u; }
        if (ctx->pc != 0x183208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C278_0x17c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183208u; }
        if (ctx->pc != 0x183208u) { return; }
    }
    ctx->pc = 0x183208u;
label_183208:
    // 0x183208: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x183208u;
    {
        const bool branch_taken_0x183208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18320Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183208u;
            // 0x18320c: 0xae02f970  sw          $v0, -0x690($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294965616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183208) {
            ctx->pc = 0x183240u;
            goto label_183240;
        }
    }
    ctx->pc = 0x183210u;
    // 0x183210: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x183210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x183214: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x183214u;
    SET_GPR_U32(ctx, 31, 0x18321Cu);
    ctx->pc = 0x183218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183214u;
            // 0x183218: 0x24847668  addiu       $a0, $a0, 0x7668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18321Cu; }
        if (ctx->pc != 0x18321Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18321Cu; }
        if (ctx->pc != 0x18321Cu) { return; }
    }
    ctx->pc = 0x18321Cu;
label_18321c:
    // 0x18321c: 0x0  nop
    ctx->pc = 0x18321cu;
    // NOP
label_183220:
    // 0x183220: 0x0  nop
    ctx->pc = 0x183220u;
    // NOP
    // 0x183224: 0x0  nop
    ctx->pc = 0x183224u;
    // NOP
    // 0x183228: 0x0  nop
    ctx->pc = 0x183228u;
    // NOP
    // 0x18322c: 0x0  nop
    ctx->pc = 0x18322cu;
    // NOP
    // 0x183230: 0x0  nop
    ctx->pc = 0x183230u;
    // NOP
    // 0x183234: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x183234u;
    {
        const bool branch_taken_0x183234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183234) {
            ctx->pc = 0x183220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183220;
        }
    }
    ctx->pc = 0x18323Cu;
    // 0x18323c: 0x0  nop
    ctx->pc = 0x18323cu;
    // NOP
label_183240:
    // 0x183240: 0x2610f970  addiu       $s0, $s0, -0x690
    ctx->pc = 0x183240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965616));
    // 0x183244: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x183244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x183248: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18324c: 0x24a52d30  addiu       $a1, $a1, 0x2D30
    ctx->pc = 0x18324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11568));
    // 0x183250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183254: 0xc05f11e  jal         func_17C478
    ctx->pc = 0x183254u;
    SET_GPR_U32(ctx, 31, 0x18325Cu);
    ctx->pc = 0x183258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183254u;
            // 0x183258: 0x3c11005f  lui         $s1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C478u;
    if (runtime->hasFunction(0x17C478u)) {
        auto targetFn = runtime->lookupFunction(0x17C478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18325Cu; }
        if (ctx->pc != 0x18325Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C478_0x17c478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18325Cu; }
        if (ctx->pc != 0x18325Cu) { return; }
    }
    ctx->pc = 0x18325Cu;
label_18325c:
    // 0x18325c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x18325cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x183260: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183264: 0x24a52d90  addiu       $a1, $a1, 0x2D90
    ctx->pc = 0x183264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11664));
    // 0x183268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18326c: 0xc05f122  jal         func_17C488
    ctx->pc = 0x18326Cu;
    SET_GPR_U32(ctx, 31, 0x183274u);
    ctx->pc = 0x183270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18326Cu;
            // 0x183270: 0x2634ceec  addiu       $s4, $s1, -0x3114 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954732));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C488u;
    if (runtime->hasFunction(0x17C488u)) {
        auto targetFn = runtime->lookupFunction(0x17C488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183274u; }
        if (ctx->pc != 0x183274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C488_0x17c488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183274u; }
        if (ctx->pc != 0x183274u) { return; }
    }
    ctx->pc = 0x183274u;
label_183274:
    // 0x183274: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x183274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x183278: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x183278u;
    {
        const bool branch_taken_0x183278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18327Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183278u;
            // 0x18327c: 0x3c13005f  lui         $s3, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183278) {
            ctx->pc = 0x183300u;
            goto label_183300;
        }
    }
    ctx->pc = 0x183280u;
    // 0x183280: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183284: 0x3c15005f  lui         $s5, 0x5F
    ctx->pc = 0x183284u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
    // 0x183288: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
    // 0x18328c: 0x26b0cee8  addiu       $s0, $s5, -0x3118
    ctx->pc = 0x18328cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954728));
    // 0x183290: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x183290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183294: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x183294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x183298: 0xae63cef4  sw          $v1, -0x310C($s3)
    ctx->pc = 0x183298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294954740), GPR_U32(ctx, 3));
    // 0x18329c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x18329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1832a0: 0x0  nop
    ctx->pc = 0x1832a0u;
    // NOP
    // 0x1832a4: 0xc045208  jal         func_114820
    ctx->pc = 0x1832A4u;
    SET_GPR_U32(ctx, 31, 0x1832ACu);
    ctx->pc = 0x1832A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1832A4u;
            // 0x1832a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114820u;
    if (runtime->hasFunction(0x114820u)) {
        auto targetFn = runtime->lookupFunction(0x114820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832ACu; }
        if (ctx->pc != 0x1832ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114820_0x114820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832ACu; }
        if (ctx->pc != 0x1832ACu) { return; }
    }
    ctx->pc = 0x1832ACu;
label_1832ac:
    // 0x1832ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1832ACu;
    {
        const bool branch_taken_0x1832ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1832B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1832ACu;
            // 0x1832b0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1832ac) {
            ctx->pc = 0x1832E8u;
            goto label_1832e8;
        }
    }
    ctx->pc = 0x1832B4u;
    // 0x1832b4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1832b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1832b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1832b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1832bc: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x1832BCu;
    SET_GPR_U32(ctx, 31, 0x1832C4u);
    ctx->pc = 0x1832C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1832BCu;
            // 0x1832c0: 0x24847690  addiu       $a0, $a0, 0x7690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832C4u; }
        if (ctx->pc != 0x1832C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832C4u; }
        if (ctx->pc != 0x1832C4u) { return; }
    }
    ctx->pc = 0x1832C4u;
label_1832c4:
    // 0x1832c4: 0x0  nop
    ctx->pc = 0x1832c4u;
    // NOP
label_1832c8:
    // 0x1832c8: 0x0  nop
    ctx->pc = 0x1832c8u;
    // NOP
    // 0x1832cc: 0x0  nop
    ctx->pc = 0x1832ccu;
    // NOP
    // 0x1832d0: 0x0  nop
    ctx->pc = 0x1832d0u;
    // NOP
    // 0x1832d4: 0x0  nop
    ctx->pc = 0x1832d4u;
    // NOP
    // 0x1832d8: 0x0  nop
    ctx->pc = 0x1832d8u;
    // NOP
    // 0x1832dc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1832DCu;
    {
        const bool branch_taken_0x1832dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1832dc) {
            ctx->pc = 0x1832C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1832c8;
        }
    }
    ctx->pc = 0x1832E4u;
    // 0x1832e4: 0x0  nop
    ctx->pc = 0x1832e4u;
    // NOP
label_1832e8:
    // 0x1832e8: 0x8e45cee8  lw          $a1, -0x3118($s2)
    ctx->pc = 0x1832e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954728)));
    // 0x1832ec: 0x26c474e8  addiu       $a0, $s6, 0x74E8
    ctx->pc = 0x1832ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 29928));
    // 0x1832f0: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x1832F0u;
    SET_GPR_U32(ctx, 31, 0x1832F8u);
    ctx->pc = 0x1832F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1832F0u;
            // 0x1832f4: 0x8e26ceec  lw          $a2, -0x3114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954732)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832F8u; }
        if (ctx->pc != 0x1832F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832F8u; }
        if (ctx->pc != 0x1832F8u) { return; }
    }
    ctx->pc = 0x1832F8u;
label_1832f8:
    // 0x1832f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1832F8u;
    {
        const bool branch_taken_0x1832f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1832FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1832F8u;
            // 0x1832fc: 0x8e22ceec  lw          $v0, -0x3114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1832f8) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x183300u;
label_183300:
    // 0x183300: 0x3c15005f  lui         $s5, 0x5F
    ctx->pc = 0x183300u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
    // 0x183304: 0x8e22ceec  lw          $v0, -0x3114($s1)
    ctx->pc = 0x183304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954732)));
label_183308:
    // 0x183308: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x183308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x18330c: 0x8e65cef4  lw          $a1, -0x310C($s3)
    ctx->pc = 0x18330cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954740)));
    // 0x183310: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x183310u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
    // 0x183314: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x183314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x183318: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x183318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18331c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18331cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x183320: 0x8ea3cee8  lw          $v1, -0x3118($s5)
    ctx->pc = 0x183320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954728)));
    // 0x183324: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x183324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x183328: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x183328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18332c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x18332cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x183330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183334: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x183334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183338: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x183338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x18333c: 0xad22cef0  sw          $v0, -0x3110($t1)
    ctx->pc = 0x18333cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294954736), GPR_U32(ctx, 2));
    // 0x183340: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x183340u;
    SET_GPR_U32(ctx, 31, 0x183348u);
    ctx->pc = 0x183344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183340u;
            // 0x183344: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183348u; }
        if (ctx->pc != 0x183348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183348u; }
        if (ctx->pc != 0x183348u) { return; }
    }
    ctx->pc = 0x183348u;
label_183348:
    // 0x183348: 0x26e3cf1c  addiu       $v1, $s7, -0x30E4
    ctx->pc = 0x183348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954780));
label_18334c:
    // 0x18334c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183350: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x183350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x183354: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x183354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x183358: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x183358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18335c:
    // 0x18335c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x18335cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183360: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x183360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183364: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x183364u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183368: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x183368u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18336c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x18336cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x183370: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x183370u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183374: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x183374u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x183378: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x183378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18337c: 0x3e00008  jr          $ra
    ctx->pc = 0x18337Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18337Cu;
            // 0x183380: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183384u;
    // 0x183384: 0x0  nop
    ctx->pc = 0x183384u;
    // NOP
label_183388:
    // 0x183388: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x18338c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18338cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183390: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
    // 0x183394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183398: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x183398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18339c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x18339cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1833a0: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1833A0u;
    {
        const bool branch_taken_0x1833a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1833A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1833A0u;
            // 0x1833a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833a0) {
            ctx->pc = 0x1833B8u;
            goto label_1833b8;
        }
    }
    ctx->pc = 0x1833A8u;
    // 0x1833a8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1833a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1833ac: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x1833acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
    // 0x1833b0: 0x58600008  blezl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1833B0u;
    {
        const bool branch_taken_0x1833b0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1833b0) {
            ctx->pc = 0x1833B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1833B0u;
            // 0x1833b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1833D4u;
            goto label_1833d4;
        }
    }
    ctx->pc = 0x1833B8u;
label_1833b8:
    // 0x1833b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1833b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1833bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1833c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1833c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1833c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833c8: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x1833C8u;
    SET_GPR_U32(ctx, 31, 0x1833D0u);
    ctx->pc = 0x1833CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1833C8u;
            // 0x1833cc: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833D0u; }
        if (ctx->pc != 0x1833D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833D0u; }
        if (ctx->pc != 0x1833D0u) { return; }
    }
    ctx->pc = 0x1833D0u;
label_1833d0:
    // 0x1833d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1833d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1833d4:
    // 0x1833d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1833D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1833D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1833D4u;
            // 0x1833d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1833DCu;
    // 0x1833dc: 0x0  nop
    ctx->pc = 0x1833dcu;
    // NOP
}
