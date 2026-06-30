#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A320
// Address: 0x13a320 - 0x13a3f0
void sub_0013A320_0x13a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A320_0x13a320");
#endif

    ctx->pc = 0x13a320u;

    // 0x13a320: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x13a320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a324: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x13A324u;
    {
        const bool branch_taken_0x13a324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a324) {
            ctx->pc = 0x13A3E4u;
            goto label_13a3e4;
        }
    }
    ctx->pc = 0x13A32Cu;
    // 0x13a32c: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x13a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x13a330: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x13a330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x13a334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a338: 0x24e74fd0  addiu       $a3, $a3, 0x4FD0
    ctx->pc = 0x13a338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20432));
    // 0x13a33c: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x13a33cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13a340: 0x30a6013f  andi        $a2, $a1, 0x13F
    ctx->pc = 0x13a340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)319);
    // 0x13a344: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13a344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13a348: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13a348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13a34c: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13A34Cu;
    {
        const bool branch_taken_0x13a34c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x13A350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A34Cu;
            // 0x13a350: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a34c) {
            ctx->pc = 0x13A3C0u;
            goto label_13a3c0;
        }
    }
    ctx->pc = 0x13A354u;
    // 0x13a354: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13a354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13a358: 0x50c3001a  beql        $a2, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x13A358u;
    {
        const bool branch_taken_0x13a358 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a358) {
            ctx->pc = 0x13A35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A358u;
            // 0x13a35c: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A3C4u;
            goto label_13a3c4;
        }
    }
    ctx->pc = 0x13A360u;
    // 0x13a360: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x13a360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13a364: 0x50c30014  beql        $a2, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13A364u;
    {
        const bool branch_taken_0x13a364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a364) {
            ctx->pc = 0x13A368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A364u;
            // 0x13a368: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A3B8u;
            goto label_13a3b8;
        }
    }
    ctx->pc = 0x13A36Cu;
    // 0x13a36c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13a370: 0x50c3000f  beql        $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x13A370u;
    {
        const bool branch_taken_0x13a370 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a370) {
            ctx->pc = 0x13A374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A370u;
            // 0x13a374: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A3B0u;
            goto label_13a3b0;
        }
    }
    ctx->pc = 0x13A378u;
    // 0x13a378: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13a378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13a37c: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x13A37Cu;
    {
        const bool branch_taken_0x13a37c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a37c) {
            ctx->pc = 0x13A3ACu;
            goto label_13a3ac;
        }
    }
    ctx->pc = 0x13A384u;
    // 0x13a384: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13a384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a388: 0x50c30006  beql        $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A388u;
    {
        const bool branch_taken_0x13a388 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a388) {
            ctx->pc = 0x13A38Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A388u;
            // 0x13a38c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A3A4u;
            goto label_13a3a4;
        }
    }
    ctx->pc = 0x13A390u;
    // 0x13a390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13a390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a394: 0x50c3000b  beql        $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x13A394u;
    {
        const bool branch_taken_0x13a394 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a394) {
            ctx->pc = 0x13A398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A394u;
            // 0x13a398: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A3C4u;
            goto label_13a3c4;
        }
    }
    ctx->pc = 0x13A39Cu;
    // 0x13a39c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13A39Cu;
    {
        const bool branch_taken_0x13a39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A39Cu;
            // 0x13a3a0: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a39c) {
            ctx->pc = 0x13A3C8u;
            goto label_13a3c8;
        }
    }
    ctx->pc = 0x13A3A4u;
label_13a3a4:
    // 0x13a3a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13A3A4u;
    {
        const bool branch_taken_0x13a3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3A4u;
            // 0x13a3a8: 0xace30008  sw          $v1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3a4) {
            ctx->pc = 0x13A3C4u;
            goto label_13a3c4;
        }
    }
    ctx->pc = 0x13A3ACu;
label_13a3ac:
    // 0x13a3ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13a3b0:
    // 0x13a3b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13A3B0u;
    {
        const bool branch_taken_0x13a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3B0u;
            // 0x13a3b4: 0xace30008  sw          $v1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3b0) {
            ctx->pc = 0x13A3C4u;
            goto label_13a3c4;
        }
    }
    ctx->pc = 0x13A3B8u;
label_13a3b8:
    // 0x13a3b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13A3B8u;
    {
        const bool branch_taken_0x13a3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3B8u;
            // 0x13a3bc: 0xace30008  sw          $v1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3b8) {
            ctx->pc = 0x13A3C4u;
            goto label_13a3c4;
        }
    }
    ctx->pc = 0x13A3C0u;
label_13a3c0:
    // 0x13a3c0: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x13a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_13a3c4:
    // 0x13a3c4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x13a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_13a3c8:
    // 0x13a3c8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A3C8u;
    {
        const bool branch_taken_0x13a3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a3c8) {
            ctx->pc = 0x13A3E4u;
            goto label_13a3e4;
        }
    }
    ctx->pc = 0x13A3D0u;
    // 0x13a3d0: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x13a3d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a3d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A3D4u;
    {
        const bool branch_taken_0x13a3d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a3d4) {
            ctx->pc = 0x13A3E4u;
            goto label_13a3e4;
        }
    }
    ctx->pc = 0x13A3DCu;
    // 0x13a3dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a3e0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x13a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_13a3e4:
    // 0x13a3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A3ECu;
    // 0x13a3ec: 0x0  nop
    ctx->pc = 0x13a3ecu;
    // NOP
}
