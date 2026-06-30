#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3CC0
// Address: 0x1d3cc0 - 0x1d3f00
void sub_001D3CC0_0x1d3cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3CC0_0x1d3cc0");
#endif

    switch (ctx->pc) {
        case 0x1d3d5cu: goto label_1d3d5c;
        case 0x1d3e40u: goto label_1d3e40;
        case 0x1d3e88u: goto label_1d3e88;
        default: break;
    }

    ctx->pc = 0x1d3cc0u;

    // 0x1d3cc0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3CC0u;
    {
        const bool branch_taken_0x1d3cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3cc0) {
            ctx->pc = 0x1D3CD0u;
            goto label_1d3cd0;
        }
    }
    ctx->pc = 0x1D3CC8u;
    // 0x1d3cc8: 0x10a0008b  beqz        $a1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1D3CC8u;
    {
        const bool branch_taken_0x1d3cc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3cc8) {
            ctx->pc = 0x1D3EF8u;
            goto label_1d3ef8;
        }
    }
    ctx->pc = 0x1D3CD0u;
label_1d3cd0:
    // 0x1d3cd0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3CD0u;
    {
        const bool branch_taken_0x1d3cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3cd0) {
            ctx->pc = 0x1D3CDCu;
            goto label_1d3cdc;
        }
    }
    ctx->pc = 0x1D3CD8u;
    // 0x1d3cd8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d3cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1d3cdc:
    // 0x1d3cdc: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3CDCu;
    {
        const bool branch_taken_0x1d3cdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3cdc) {
            ctx->pc = 0x1D3CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3CDCu;
            // 0x1d3ce0: 0x8cc70000  lw          $a3, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3CECu;
            goto label_1d3cec;
        }
    }
    ctx->pc = 0x1D3CE4u;
    // 0x1d3ce4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1d3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1d3ce8: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d3cec:
    // 0x1d3cec: 0x3c034649  lui         $v1, 0x4649
    ctx->pc = 0x1d3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17993 << 16));
    // 0x1d3cf0: 0x3463534e  ori         $v1, $v1, 0x534E
    ctx->pc = 0x1d3cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x1d3cf4: 0x14e30080  bne         $a3, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x1D3CF4u;
    {
        const bool branch_taken_0x1d3cf4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d3cf4) {
            ctx->pc = 0x1D3EF8u;
            goto label_1d3ef8;
        }
    }
    ctx->pc = 0x1D3CFCu;
    // 0x1d3cfc: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x1d3cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1d3d00: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d3d00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d04: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1d3d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1d3d08: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x1d3d08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d3d0c: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x1d3d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d3d10: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d3d14: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x1d3d14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d18: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1d3d18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d3d1c: 0x18e00052  blez        $a3, . + 4 + (0x52 << 2)
    ctx->pc = 0x1D3D1Cu;
    {
        const bool branch_taken_0x1d3d1c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1D3D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D1Cu;
            // 0x1d3d20: 0x246a0010  addiu       $t2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d1c) {
            ctx->pc = 0x1D3E68u;
            goto label_1d3e68;
        }
    }
    ctx->pc = 0x1D3D24u;
    // 0x1d3d24: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x1d3d24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d3d28: 0x14200041  bnez        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x1D3D28u;
    {
        const bool branch_taken_0x1d3d28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D28u;
            // 0x1d3d2c: 0x24e6fff8  addiu       $a2, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d28) {
            ctx->pc = 0x1D3E30u;
            goto label_1d3e30;
        }
    }
    ctx->pc = 0x1D3D30u;
    // 0x1d3d30: 0x4e00007  bltz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3D30u;
    {
        const bool branch_taken_0x1d3d30 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1D3D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D30u;
            // 0x1d3d34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d30) {
            ctx->pc = 0x1D3D50u;
            goto label_1d3d50;
        }
    }
    ctx->pc = 0x1D3D38u;
    // 0x1d3d38: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1d3d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1d3d3c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1d3d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1d3d40: 0xe1082a  slt         $at, $a3, $at
    ctx->pc = 0x1d3d40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d3d44: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3D44u;
    {
        const bool branch_taken_0x1d3d44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d44) {
            ctx->pc = 0x1D3D50u;
            goto label_1d3d50;
        }
    }
    ctx->pc = 0x1D3D4Cu;
    // 0x1d3d4c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1d3d4cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d3d50:
    // 0x1d3d50: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1D3D50u;
    {
        const bool branch_taken_0x1d3d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d50) {
            ctx->pc = 0x1D3E30u;
            goto label_1d3e30;
        }
    }
    ctx->pc = 0x1D3D58u;
    // 0x1d3d58: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d3d5c:
    // 0x1d3d5c: 0x8d4e0000  lw          $t6, 0x0($t2)
    ctx->pc = 0x1d3d5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d3d60: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1d3d60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x1d3d64: 0x166682a  slt         $t5, $t3, $a2
    ctx->pc = 0x1d3d64u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d3d68: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3d68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d3d6c: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d3d6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3d70: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3d70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3d74: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d3d74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3d78: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d3d7c: 0x8d4e0004  lw          $t6, 0x4($t2)
    ctx->pc = 0x1d3d7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1d3d80: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3d80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d3d84: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d3d84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3d88: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3d88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3d8c: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d3d8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3d90: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3d90u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d3d94: 0x8d4e0008  lw          $t6, 0x8($t2)
    ctx->pc = 0x1d3d94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1d3d98: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3d98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d3d9c: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d3d9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3da0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3da0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3da4: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d3da4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3da8: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3da8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d3dac: 0x8d4e000c  lw          $t6, 0xC($t2)
    ctx->pc = 0x1d3dacu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1d3db0: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3db0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d3db4: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d3db4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3db8: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3db8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3dbc: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d3dbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3dc0: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d3dc4: 0x8d4e0010  lw          $t6, 0x10($t2)
    ctx->pc = 0x1d3dc4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x1d3dc8: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3dc8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d3dcc: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d3dccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3dd0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3dd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3dd4: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d3dd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3dd8: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d3ddc: 0x8d4e0014  lw          $t6, 0x14($t2)
    ctx->pc = 0x1d3ddcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x1d3de0: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3de0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d3de4: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d3de4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3de8: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3de8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3dec: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d3decu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3df0: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3df0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d3df4: 0x8d4e0018  lw          $t6, 0x18($t2)
    ctx->pc = 0x1d3df4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x1d3df8: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3df8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d3dfc: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d3dfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3e00: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3e00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3e04: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d3e04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3e08: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d3e0c: 0x8d4e001c  lw          $t6, 0x1C($t2)
    ctx->pc = 0x1d3e0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x1d3e10: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3e10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d3e14: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x1d3e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x1d3e18: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d3e18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3e1c: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3e1cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3e20: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d3e20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3e24: 0x15a0ffcd  bnez        $t5, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1D3E24u;
    {
        const bool branch_taken_0x1d3e24 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E24u;
            // 0x1d3e28: 0xadee0000  sw          $t6, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e24) {
            ctx->pc = 0x1D3D5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3d5c;
        }
    }
    ctx->pc = 0x1D3E2Cu;
    // 0x1d3e2c: 0x0  nop
    ctx->pc = 0x1d3e2cu;
    // NOP
label_1d3e30:
    // 0x1d3e30: 0x167082a  slt         $at, $t3, $a3
    ctx->pc = 0x1d3e30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d3e34: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3E34u;
    {
        const bool branch_taken_0x1d3e34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e34) {
            ctx->pc = 0x1D3E68u;
            goto label_1d3e68;
        }
    }
    ctx->pc = 0x1D3E3Cu;
    // 0x1d3e3c: 0x240efffc  addiu       $t6, $zero, -0x4
    ctx->pc = 0x1d3e3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d3e40:
    // 0x1d3e40: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x1d3e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d3e44: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1d3e44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1d3e48: 0x167182a  slt         $v1, $t3, $a3
    ctx->pc = 0x1d3e48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d3e4c: 0xce3024  and         $a2, $a2, $t6
    ctx->pc = 0x1d3e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 14));
    // 0x1d3e50: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1d3e50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1d3e54: 0x1066821  addu        $t5, $t0, $a2
    ctx->pc = 0x1d3e54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1d3e58: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x1d3e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1d3e5c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1d3e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1d3e60: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D3E60u;
    {
        const bool branch_taken_0x1d3e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E60u;
            // 0x1d3e64: 0xada60000  sw          $a2, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e60) {
            ctx->pc = 0x1D3E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3e40;
        }
    }
    ctx->pc = 0x1D3E68u;
label_1d3e68:
    // 0x1d3e68: 0x19200023  blez        $t1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D3E68u;
    {
        const bool branch_taken_0x1d3e68 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1D3E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E68u;
            // 0x1d3e6c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e68) {
            ctx->pc = 0x1D3EF8u;
            goto label_1d3ef8;
        }
    }
    ctx->pc = 0x1D3E70u;
    // 0x1d3e70: 0x3c03444e  lui         $v1, 0x444E
    ctx->pc = 0x1d3e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17486 << 16));
    // 0x1d3e74: 0x3c06424f  lui         $a2, 0x424F
    ctx->pc = 0x1d3e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16975 << 16));
    // 0x1d3e78: 0x3467454e  ori         $a3, $v1, 0x454E
    ctx->pc = 0x1d3e78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17742);
    // 0x1d3e7c: 0x34ca534e  ori         $t2, $a2, 0x534E
    ctx->pc = 0x1d3e7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21326);
    // 0x1d3e80: 0x3c034c54  lui         $v1, 0x4C54
    ctx->pc = 0x1d3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19540 << 16));
    // 0x1d3e84: 0x346b534e  ori         $t3, $v1, 0x534E
    ctx->pc = 0x1d3e84u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
label_1d3e88:
    // 0x1d3e88: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1d3e8c: 0x146b0008  bne         $v1, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3E8Cu;
    {
        const bool branch_taken_0x1d3e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        if (branch_taken_0x1d3e8c) {
            ctx->pc = 0x1D3EB0u;
            goto label_1d3eb0;
        }
    }
    ctx->pc = 0x1D3E94u;
    // 0x1d3e94: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3E94u;
    {
        const bool branch_taken_0x1d3e94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e94) {
            ctx->pc = 0x1D3EE0u;
            goto label_1d3ee0;
        }
    }
    ctx->pc = 0x1D3E9Cu;
    // 0x1d3e9c: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x1d3e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1d3ea0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1d3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1d3ea4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D3EA4u;
    {
        const bool branch_taken_0x1d3ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EA4u;
            // 0x1d3ea8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ea4) {
            ctx->pc = 0x1D3EE0u;
            goto label_1d3ee0;
        }
    }
    ctx->pc = 0x1D3EACu;
    // 0x1d3eac: 0x0  nop
    ctx->pc = 0x1d3eacu;
    // NOP
label_1d3eb0:
    // 0x1d3eb0: 0x146a0008  bne         $v1, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3EB0u;
    {
        const bool branch_taken_0x1d3eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x1d3eb0) {
            ctx->pc = 0x1D3ED4u;
            goto label_1d3ed4;
        }
    }
    ctx->pc = 0x1D3EB8u;
    // 0x1d3eb8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D3EB8u;
    {
        const bool branch_taken_0x1d3eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3eb8) {
            ctx->pc = 0x1D3EF8u;
            goto label_1d3ef8;
        }
    }
    ctx->pc = 0x1D3EC0u;
    // 0x1d3ec0: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x1d3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1d3ec4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1d3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1d3ec8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d3ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d3ecc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D3ECCu;
    {
        const bool branch_taken_0x1d3ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ecc) {
            ctx->pc = 0x1D3EF8u;
            goto label_1d3ef8;
        }
    }
    ctx->pc = 0x1D3ED4u;
label_1d3ed4:
    // 0x1d3ed4: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3ED4u;
    {
        const bool branch_taken_0x1d3ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1d3ed4) {
            ctx->pc = 0x1D3EF8u;
            goto label_1d3ef8;
        }
    }
    ctx->pc = 0x1D3EDCu;
    // 0x1d3edc: 0x0  nop
    ctx->pc = 0x1d3edcu;
    // NOP
label_1d3ee0:
    // 0x1d3ee0: 0x8d860004  lw          $a2, 0x4($t4)
    ctx->pc = 0x1d3ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1d3ee4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1d3ee4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1d3ee8: 0x1a9182a  slt         $v1, $t5, $t1
    ctx->pc = 0x1d3ee8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1d3eec: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1d3eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1d3ef0: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D3EF0u;
    {
        const bool branch_taken_0x1d3ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EF0u;
            // 0x1d3ef4: 0x24cc0008  addiu       $t4, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ef0) {
            ctx->pc = 0x1D3E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3e88;
        }
    }
    ctx->pc = 0x1D3EF8u;
label_1d3ef8:
    // 0x1d3ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3F00u;
}
