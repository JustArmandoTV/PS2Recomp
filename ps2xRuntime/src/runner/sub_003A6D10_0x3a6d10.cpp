#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A6D10
// Address: 0x3a6d10 - 0x3a6f30
void sub_003A6D10_0x3a6d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6D10_0x3a6d10");
#endif

    switch (ctx->pc) {
        case 0x3a6ee8u: goto label_3a6ee8;
        default: break;
    }

    ctx->pc = 0x3a6d10u;

    // 0x3a6d10: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3a6d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3a6d14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3a6d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a6d18: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3a6d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3a6d1c: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x3a6d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6d20: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3a6d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3a6d24: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3a6d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3a6d28: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x3a6d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6d2c: 0x8cc60110  lw          $a2, 0x110($a2)
    ctx->pc = 0x3a6d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
    // 0x3a6d30: 0x10c50042  beq         $a2, $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x3A6D30u;
    {
        const bool branch_taken_0x3a6d30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3A6D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6D30u;
            // 0x3a6d34: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6d30) {
            ctx->pc = 0x3A6E3Cu;
            goto label_3a6e3c;
        }
    }
    ctx->pc = 0x3A6D38u;
    // 0x3a6d38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a6d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6d3c: 0x10c5003f  beq         $a2, $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x3A6D3Cu;
    {
        const bool branch_taken_0x3a6d3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a6d3c) {
            ctx->pc = 0x3A6E3Cu;
            goto label_3a6e3c;
        }
    }
    ctx->pc = 0x3A6D44u;
    // 0x3a6d44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a6d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6d48: 0x10c5001c  beq         $a2, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A6D48u;
    {
        const bool branch_taken_0x3a6d48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a6d48) {
            ctx->pc = 0x3A6DBCu;
            goto label_3a6dbc;
        }
    }
    ctx->pc = 0x3A6D50u;
    // 0x3a6d50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a6d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6d54: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6D54u;
    {
        const bool branch_taken_0x3a6d54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a6d54) {
            ctx->pc = 0x3A6D64u;
            goto label_3a6d64;
        }
    }
    ctx->pc = 0x3A6D5Cu;
    // 0x3a6d5c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3A6D5Cu;
    {
        const bool branch_taken_0x3a6d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6D5Cu;
            // 0x3a6d60: 0xa0800004  sb          $zero, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6d5c) {
            ctx->pc = 0x3A6ED8u;
            goto label_3a6ed8;
        }
    }
    ctx->pc = 0x3A6D64u;
label_3a6d64:
    // 0x3a6d64: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3a6d64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3a6d68: 0x3c053d4c  lui         $a1, 0x3D4C
    ctx->pc = 0x3a6d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15692 << 16));
    // 0x3a6d6c: 0x24c676c0  addiu       $a2, $a2, 0x76C0
    ctx->pc = 0x3a6d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30400));
    // 0x3a6d70: 0x34a8cccd  ori         $t0, $a1, 0xCCCD
    ctx->pc = 0x3a6d70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x3a6d74: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x3a6d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x3a6d78: 0x3c073f40  lui         $a3, 0x3F40
    ctx->pc = 0x3a6d78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16192 << 16));
    // 0x3a6d7c: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x3a6d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6d80: 0x3c063dcc  lui         $a2, 0x3DCC
    ctx->pc = 0x3a6d80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15820 << 16));
    // 0x3a6d84: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x3a6d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x3a6d88: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3a6d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3a6d8c: 0x8d290080  lw          $t1, 0x80($t1)
    ctx->pc = 0x3a6d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x3a6d90: 0xa469000c  sh          $t1, 0xC($v1)
    ctx->pc = 0x3a6d90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x3a6d94: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x3a6d94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6d98: 0x8d290084  lw          $t1, 0x84($t1)
    ctx->pc = 0x3a6d98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 132)));
    // 0x3a6d9c: 0xa469000e  sh          $t1, 0xE($v1)
    ctx->pc = 0x3a6d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x3a6da0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3a6da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x3a6da4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x3a6da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x3a6da8: 0xac680020  sw          $t0, 0x20($v1)
    ctx->pc = 0x3a6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 8));
    // 0x3a6dac: 0xac670024  sw          $a3, 0x24($v1)
    ctx->pc = 0x3a6dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 7));
    // 0x3a6db0: 0xac660028  sw          $a2, 0x28($v1)
    ctx->pc = 0x3a6db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 6));
    // 0x3a6db4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3A6DB4u;
    {
        const bool branch_taken_0x3a6db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6DB4u;
            // 0x3a6db8: 0xac65002c  sw          $a1, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6db4) {
            ctx->pc = 0x3A6ED8u;
            goto label_3a6ed8;
        }
    }
    ctx->pc = 0x3A6DBCu;
label_3a6dbc:
    // 0x3a6dbc: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3a6dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3a6dc0: 0x3c053d4c  lui         $a1, 0x3D4C
    ctx->pc = 0x3a6dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15692 << 16));
    // 0x3a6dc4: 0x24c676f0  addiu       $a2, $a2, 0x76F0
    ctx->pc = 0x3a6dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30448));
    // 0x3a6dc8: 0x34a8cccd  ori         $t0, $a1, 0xCCCD
    ctx->pc = 0x3a6dc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x3a6dcc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x3a6dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x3a6dd0: 0x3c073f40  lui         $a3, 0x3F40
    ctx->pc = 0x3a6dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16192 << 16));
    // 0x3a6dd4: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x3a6dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a6dd8: 0x3c063dcc  lui         $a2, 0x3DCC
    ctx->pc = 0x3a6dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15820 << 16));
    // 0x3a6ddc: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x3a6ddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x3a6de0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3a6de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3a6de4: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x3a6de4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x3a6de8: 0xac690004  sw          $t1, 0x4($v1)
    ctx->pc = 0x3a6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 9));
    // 0x3a6dec: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x3a6decu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x3a6df0: 0xac690004  sw          $t1, 0x4($v1)
    ctx->pc = 0x3a6df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 9));
    // 0x3a6df4: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x3a6df4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6df8: 0x8d290080  lw          $t1, 0x80($t1)
    ctx->pc = 0x3a6df8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x3a6dfc: 0xa469000c  sh          $t1, 0xC($v1)
    ctx->pc = 0x3a6dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x3a6e00: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x3a6e00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6e04: 0x8d29007c  lw          $t1, 0x7C($t1)
    ctx->pc = 0x3a6e04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 124)));
    // 0x3a6e08: 0x2529005a  addiu       $t1, $t1, 0x5A
    ctx->pc = 0x3a6e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 90));
    // 0x3a6e0c: 0xa469000e  sh          $t1, 0xE($v1)
    ctx->pc = 0x3a6e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x3a6e10: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3a6e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x3a6e14: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x3a6e14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6e18: 0x8469000e  lh          $t1, 0xE($v1)
    ctx->pc = 0x3a6e18u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x3a6e1c: 0x8d4a0084  lw          $t2, 0x84($t2)
    ctx->pc = 0x3a6e1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x3a6e20: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x3a6e20u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3a6e24: 0xac690014  sw          $t1, 0x14($v1)
    ctx->pc = 0x3a6e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 9));
    // 0x3a6e28: 0xac680020  sw          $t0, 0x20($v1)
    ctx->pc = 0x3a6e28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 8));
    // 0x3a6e2c: 0xac670024  sw          $a3, 0x24($v1)
    ctx->pc = 0x3a6e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 7));
    // 0x3a6e30: 0xac660028  sw          $a2, 0x28($v1)
    ctx->pc = 0x3a6e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 6));
    // 0x3a6e34: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3A6E34u;
    {
        const bool branch_taken_0x3a6e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6E34u;
            // 0x3a6e38: 0xac65002c  sw          $a1, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6e34) {
            ctx->pc = 0x3A6ED8u;
            goto label_3a6ed8;
        }
    }
    ctx->pc = 0x3A6E3Cu;
label_3a6e3c:
    // 0x3a6e3c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3a6e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3a6e40: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x3a6e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x3a6e44: 0x24c67720  addiu       $a2, $a2, 0x7720
    ctx->pc = 0x3a6e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30496));
    // 0x3a6e48: 0x34a8d70a  ori         $t0, $a1, 0xD70A
    ctx->pc = 0x3a6e48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x3a6e4c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x3a6e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x3a6e50: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x3a6e50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x3a6e54: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x3a6e54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a6e58: 0x3c063dcc  lui         $a2, 0x3DCC
    ctx->pc = 0x3a6e58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15820 << 16));
    // 0x3a6e5c: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x3a6e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x3a6e60: 0x3c053f40  lui         $a1, 0x3F40
    ctx->pc = 0x3a6e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16192 << 16));
    // 0x3a6e64: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x3a6e64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x3a6e68: 0xac690004  sw          $t1, 0x4($v1)
    ctx->pc = 0x3a6e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 9));
    // 0x3a6e6c: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x3a6e6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x3a6e70: 0xac690004  sw          $t1, 0x4($v1)
    ctx->pc = 0x3a6e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 9));
    // 0x3a6e74: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x3a6e74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6e78: 0x8d2a0088  lw          $t2, 0x88($t1)
    ctx->pc = 0x3a6e78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 136)));
    // 0x3a6e7c: 0x91290090  lbu         $t1, 0x90($t1)
    ctx->pc = 0x3a6e7cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 144)));
    // 0x3a6e80: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x3a6e80u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3a6e84: 0xa469000c  sh          $t1, 0xC($v1)
    ctx->pc = 0x3a6e84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x3a6e88: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x3a6e88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6e8c: 0x8d29007c  lw          $t1, 0x7C($t1)
    ctx->pc = 0x3a6e8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 124)));
    // 0x3a6e90: 0x25290064  addiu       $t1, $t1, 0x64
    ctx->pc = 0x3a6e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 100));
    // 0x3a6e94: 0xa469000e  sh          $t1, 0xE($v1)
    ctx->pc = 0x3a6e94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x3a6e98: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x3a6e98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6e9c: 0x91290090  lbu         $t1, 0x90($t1)
    ctx->pc = 0x3a6e9cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 144)));
    // 0x3a6ea0: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x3a6ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x3a6ea4: 0xac690010  sw          $t1, 0x10($v1)
    ctx->pc = 0x3a6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 9));
    // 0x3a6ea8: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x3a6ea8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6eac: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x3a6eacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a6eb0: 0x846a000e  lh          $t2, 0xE($v1)
    ctx->pc = 0x3a6eb0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x3a6eb4: 0x8d6b0084  lw          $t3, 0x84($t3)
    ctx->pc = 0x3a6eb4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
    // 0x3a6eb8: 0x85290006  lh          $t1, 0x6($t1)
    ctx->pc = 0x3a6eb8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x3a6ebc: 0x16a5023  subu        $t2, $t3, $t2
    ctx->pc = 0x3a6ebcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x3a6ec0: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x3a6ec0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3a6ec4: 0xac690014  sw          $t1, 0x14($v1)
    ctx->pc = 0x3a6ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 9));
    // 0x3a6ec8: 0xac680020  sw          $t0, 0x20($v1)
    ctx->pc = 0x3a6ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 8));
    // 0x3a6ecc: 0xac670024  sw          $a3, 0x24($v1)
    ctx->pc = 0x3a6eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 7));
    // 0x3a6ed0: 0xac660028  sw          $a2, 0x28($v1)
    ctx->pc = 0x3a6ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 6));
    // 0x3a6ed4: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x3a6ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
label_3a6ed8:
    // 0x3a6ed8: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3a6ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x3a6edc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a6edcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ee0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a6ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ee4: 0x24c60e80  addiu       $a2, $a2, 0xE80
    ctx->pc = 0x3a6ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3712));
label_3a6ee8:
    // 0x3a6ee8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x3a6ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3a6eec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a6eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a6ef0: 0x80a50e3f  lb          $a1, 0xE3F($a1)
    ctx->pc = 0x3a6ef0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3647)));
    // 0x3a6ef4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3a6ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3a6ef8: 0xace50040  sw          $a1, 0x40($a3)
    ctx->pc = 0x3a6ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 5));
    // 0x3a6efc: 0xace5003c  sw          $a1, 0x3C($a3)
    ctx->pc = 0x3a6efcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 5));
    // 0x3a6f00: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x3a6f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6f04: 0xe4e00044  swc1        $f0, 0x44($a3)
    ctx->pc = 0x3a6f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 68), bits); }
    // 0x3a6f08: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3a6f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6f0c: 0x8ca50110  lw          $a1, 0x110($a1)
    ctx->pc = 0x3a6f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x3a6f10: 0x105282a  slt         $a1, $t0, $a1
    ctx->pc = 0x3a6f10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a6f14: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A6F14u;
    {
        const bool branch_taken_0x3a6f14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6F14u;
            // 0x3a6f18: 0x24e7000c  addiu       $a3, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f14) {
            ctx->pc = 0x3A6EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a6ee8;
        }
    }
    ctx->pc = 0x3A6F1Cu;
    // 0x3a6f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A6F24u;
    // 0x3a6f24: 0x0  nop
    ctx->pc = 0x3a6f24u;
    // NOP
    // 0x3a6f28: 0x0  nop
    ctx->pc = 0x3a6f28u;
    // NOP
    // 0x3a6f2c: 0x0  nop
    ctx->pc = 0x3a6f2cu;
    // NOP
}
