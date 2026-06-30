#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018EE68
// Address: 0x18ee68 - 0x18f3d0
void sub_0018EE68_0x18ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EE68_0x18ee68");
#endif

    ctx->pc = 0x18ee68u;

    // 0x18ee68: 0x248b0180  addiu       $t3, $a0, 0x180
    ctx->pc = 0x18ee68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x18ee6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ee70: 0x8d62043c  lw          $v0, 0x43C($t3)
    ctx->pc = 0x18ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1084)));
    // 0x18ee74: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x18ee74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee78: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x18ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x18ee7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ee80: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x18ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x18ee84: 0xad62043c  sw          $v0, 0x43C($t3)
    ctx->pc = 0x18ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1084), GPR_U32(ctx, 2));
    // 0x18ee88: 0xad6004a4  sw          $zero, 0x4A4($t3)
    ctx->pc = 0x18ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1188), GPR_U32(ctx, 0));
    // 0x18ee8c: 0xad6004a8  sw          $zero, 0x4A8($t3)
    ctx->pc = 0x18ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 0));
    // 0x18ee90: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EE90u;
    {
        const bool branch_taken_0x18ee90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE90u;
            // 0x18ee94: 0xad6004ac  sw          $zero, 0x4AC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee90) {
            ctx->pc = 0x18EEA4u;
            goto label_18eea4;
        }
    }
    ctx->pc = 0x18EE98u;
    // 0x18ee98: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18ee9c: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EE9Cu;
    {
        const bool branch_taken_0x18ee9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ee9c) {
            ctx->pc = 0x18EEA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE9Cu;
            // 0x18eea0: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18EEB4u;
            goto label_18eeb4;
        }
    }
    ctx->pc = 0x18EEA4u;
label_18eea4:
    // 0x18eea4: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x18eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x18eea8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EEA8u;
    {
        const bool branch_taken_0x18eea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EEA8u;
            // 0x18eeac: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eea8) {
            ctx->pc = 0x18EEC0u;
            goto label_18eec0;
        }
    }
    ctx->pc = 0x18EEB0u;
    // 0x18eeb0: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x18eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_18eeb4:
    // 0x18eeb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18eeb8: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x18eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x18eebc: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x18eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_18eec0:
    // 0x18eec0: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x18eec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x18eec4: 0x1881823  subu        $v1, $t4, $t0
    ctx->pc = 0x18eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x18eec8: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x18eec8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18eecc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18eeccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18eed0: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x18eed0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18eed4: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x18eed4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18eed8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18eed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18eedc: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x18eedcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18eee0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18eee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18eee4: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x18eee4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18eee8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18eee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18eeec: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18eeecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18eef0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18eef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18eef4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18eef4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18eef8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18eef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18eefc: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x18eefcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x18ef00: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18ef00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18ef04: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x18ef04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x18ef08: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18ef08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18ef0c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18ef0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18ef10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18ef10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18ef14: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x18ef14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x18ef18: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18ef18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18ef1c: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x18ef1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x18ef20: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18ef20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18ef24: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18ef24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18ef28: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x18ef28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x18ef2c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18ef2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18ef30: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x18ef30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x18ef34: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18ef34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18ef38: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18ef38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18ef3c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18EF3Cu;
    {
        const bool branch_taken_0x18ef3c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF3Cu;
            // 0x18ef40: 0x1494804  sllv        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 10) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef3c) {
            ctx->pc = 0x18EF60u;
            goto label_18ef60;
        }
    }
    ctx->pc = 0x18EF44u;
    // 0x18ef44: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x18ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x18ef48: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18ef4c: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x18ef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18ef50: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18ef50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18ef54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EF54u;
    {
        const bool branch_taken_0x18ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF54u;
            // 0x18ef58: 0xad6200b8  sw          $v0, 0xB8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef54) {
            ctx->pc = 0x18EF68u;
            goto label_18ef68;
        }
    }
    ctx->pc = 0x18EF5Cu;
    // 0x18ef5c: 0x0  nop
    ctx->pc = 0x18ef5cu;
    // NOP
label_18ef60:
    // 0x18ef60: 0xad6900b8  sw          $t1, 0xB8($t3)
    ctx->pc = 0x18ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 184), GPR_U32(ctx, 9));
    // 0x18ef64: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18ef64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18ef68:
    // 0x18ef68: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18ef68u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18ef6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18ef6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18ef70: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18ef70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18ef74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18ef74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18ef78: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18ef78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18ef7c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18ef7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18ef80: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18ef80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18ef84: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x18ef84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18ef88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18ef88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18ef8c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18ef8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18ef90: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x18ef90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18ef94: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18ef94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18ef98: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18ef98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18ef9c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18ef9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18efa0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18EFA0u;
    {
        const bool branch_taken_0x18efa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EFA0u;
            // 0x18efa4: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efa0) {
            ctx->pc = 0x18F018u;
            goto label_18f018;
        }
    }
    ctx->pc = 0x18EFA8u;
    // 0x18efa8: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x18efa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x18efac: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18EFACu;
    {
        const bool branch_taken_0x18efac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EFACu;
            // 0x18efb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efac) {
            ctx->pc = 0x18EFD0u;
            goto label_18efd0;
        }
    }
    ctx->pc = 0x18EFB4u;
    // 0x18efb4: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18efb8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18efbc: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18efbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18efc0: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x18efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18efc4: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18efc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18efc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EFC8u;
    {
        const bool branch_taken_0x18efc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EFC8u;
            // 0x18efcc: 0xad6300bc  sw          $v1, 0xBC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efc8) {
            ctx->pc = 0x18EFDCu;
            goto label_18efdc;
        }
    }
    ctx->pc = 0x18EFD0u;
label_18efd0:
    // 0x18efd0: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x18efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18efd4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18efd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18efd8: 0xad6200bc  sw          $v0, 0xBC($t3)
    ctx->pc = 0x18efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 2));
label_18efdc:
    // 0x18efdc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18efe0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18efe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18efe4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18efe4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18efe8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18efe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18efec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18efecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18eff0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18eff0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18eff4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18eff4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18eff8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18eff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18effc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18effcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f000: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f000u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f004: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f008: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f00c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f00cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f010: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F010u;
    {
        const bool branch_taken_0x18f010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F010u;
            // 0x18f014: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f010) {
            ctx->pc = 0x18F028u;
            goto label_18f028;
        }
    }
    ctx->pc = 0x18F018u;
label_18f018:
    // 0x18f018: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x18f018u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f01c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x18f01cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x18f020: 0xad6200bc  sw          $v0, 0xBC($t3)
    ctx->pc = 0x18f020u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 2));
    // 0x18f024: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18f024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_18f028:
    // 0x18f028: 0x2942001b  slti        $v0, $t2, 0x1B
    ctx->pc = 0x18f028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x18f02c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18F02Cu;
    {
        const bool branch_taken_0x18f02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F02Cu;
            // 0x18f030: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f02c) {
            ctx->pc = 0x18F0A8u;
            goto label_18f0a8;
        }
    }
    ctx->pc = 0x18F034u;
    // 0x18f034: 0x254affe5  addiu       $t2, $t2, -0x1B
    ctx->pc = 0x18f034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967269));
    // 0x18f038: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x18F038u;
    {
        const bool branch_taken_0x18f038 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F038u;
            // 0x18f03c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f038) {
            ctx->pc = 0x18F060u;
            goto label_18f060;
        }
    }
    ctx->pc = 0x18F040u;
    // 0x18f040: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f044: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f044u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f048: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f048u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f04c: 0x91ec2  srl         $v1, $t1, 27
    ctx->pc = 0x18f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
    // 0x18f050: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f050u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f054: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F054u;
    {
        const bool branch_taken_0x18f054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F054u;
            // 0x18f058: 0xad6300c0  sw          $v1, 0xC0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f054) {
            ctx->pc = 0x18F06Cu;
            goto label_18f06c;
        }
    }
    ctx->pc = 0x18F05Cu;
    // 0x18f05c: 0x0  nop
    ctx->pc = 0x18f05cu;
    // NOP
label_18f060:
    // 0x18f060: 0x916c2  srl         $v0, $t1, 27
    ctx->pc = 0x18f060u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
    // 0x18f064: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f068: 0xad6200c0  sw          $v0, 0xC0($t3)
    ctx->pc = 0x18f068u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 2));
label_18f06c:
    // 0x18f06c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f06cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f070: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f074: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f074u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f078: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f07c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f07cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f080: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f080u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f084: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f084u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f088: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f08c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f08cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f090: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f090u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f094: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f098: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f09c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f09cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f0a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F0A0u;
    {
        const bool branch_taken_0x18f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F0A0u;
            // 0x18f0a4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0a0) {
            ctx->pc = 0x18F0B4u;
            goto label_18f0b4;
        }
    }
    ctx->pc = 0x18F0A8u;
label_18f0a8:
    // 0x18f0a8: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x18f0a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x18f0ac: 0xad6200c0  sw          $v0, 0xC0($t3)
    ctx->pc = 0x18f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 2));
    // 0x18f0b0: 0x254a0005  addiu       $t2, $t2, 0x5
    ctx->pc = 0x18f0b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5));
label_18f0b4:
    // 0x18f0b4: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x18f0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x18f0b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F0B8u;
    {
        const bool branch_taken_0x18f0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F0B8u;
            // 0x18f0bc: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0b8) {
            ctx->pc = 0x18F130u;
            goto label_18f130;
        }
    }
    ctx->pc = 0x18F0C0u;
    // 0x18f0c0: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x18f0c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x18f0c4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F0C4u;
    {
        const bool branch_taken_0x18f0c4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F0C4u;
            // 0x18f0c8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0c4) {
            ctx->pc = 0x18F0E8u;
            goto label_18f0e8;
        }
    }
    ctx->pc = 0x18F0CCu;
    // 0x18f0cc: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f0d0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f0d4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f0d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f0d8: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x18f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x18f0dc: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f0dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f0e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F0E0u;
    {
        const bool branch_taken_0x18f0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F0E0u;
            // 0x18f0e4: 0xad6300c4  sw          $v1, 0xC4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0e0) {
            ctx->pc = 0x18F0F4u;
            goto label_18f0f4;
        }
    }
    ctx->pc = 0x18F0E8u;
label_18f0e8:
    // 0x18f0e8: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x18f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x18f0ec: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f0ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f0f0: 0xad6200c4  sw          $v0, 0xC4($t3)
    ctx->pc = 0x18f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 2));
label_18f0f4:
    // 0x18f0f4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f0f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f0f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f0fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f0fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f100: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f104: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f104u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f108: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f108u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f10c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f10cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f110: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f114: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f114u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f118: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f118u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f11c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f11cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f120: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f124: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f124u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f128: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F128u;
    {
        const bool branch_taken_0x18f128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F128u;
            // 0x18f12c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f128) {
            ctx->pc = 0x18F13Cu;
            goto label_18f13c;
        }
    }
    ctx->pc = 0x18F130u;
label_18f130:
    // 0x18f130: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x18f130u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x18f134: 0xad6200c4  sw          $v0, 0xC4($t3)
    ctx->pc = 0x18f134u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 2));
    // 0x18f138: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x18f138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_18f13c:
    // 0x18f13c: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x18f13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18f140: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F140u;
    {
        const bool branch_taken_0x18f140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F140u;
            // 0x18f144: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f140) {
            ctx->pc = 0x18F1B8u;
            goto label_18f1b8;
        }
    }
    ctx->pc = 0x18F148u;
    // 0x18f148: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x18f148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x18f14c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F14Cu;
    {
        const bool branch_taken_0x18f14c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F14Cu;
            // 0x18f150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f14c) {
            ctx->pc = 0x18F170u;
            goto label_18f170;
        }
    }
    ctx->pc = 0x18F154u;
    // 0x18f154: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f154u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f158: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f158u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f15c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f15cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f160: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x18f160u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f164: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f164u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F168u;
    {
        const bool branch_taken_0x18f168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F168u;
            // 0x18f16c: 0xad630018  sw          $v1, 0x18($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f168) {
            ctx->pc = 0x18F17Cu;
            goto label_18f17c;
        }
    }
    ctx->pc = 0x18F170u;
label_18f170:
    // 0x18f170: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x18f170u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f174: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f174u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f178: 0xad620018  sw          $v0, 0x18($t3)
    ctx->pc = 0x18f178u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 2));
label_18f17c:
    // 0x18f17c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f17cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f180: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f184: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f184u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f188: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f18c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f18cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f190: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f190u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f194: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f194u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f198: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f19c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f19cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f1a0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f1a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f1a4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f1a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f1a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f1a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f1ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f1acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f1b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F1B0u;
    {
        const bool branch_taken_0x18f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1B0u;
            // 0x18f1b4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1b0) {
            ctx->pc = 0x18F1C4u;
            goto label_18f1c4;
        }
    }
    ctx->pc = 0x18F1B8u;
label_18f1b8:
    // 0x18f1b8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x18f1b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x18f1bc: 0xad620018  sw          $v0, 0x18($t3)
    ctx->pc = 0x18f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 2));
    // 0x18f1c0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18f1c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_18f1c4:
    // 0x18f1c4: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x18f1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x18f1c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F1C8u;
    {
        const bool branch_taken_0x18f1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1C8u;
            // 0x18f1cc: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1c8) {
            ctx->pc = 0x18F240u;
            goto label_18f240;
        }
    }
    ctx->pc = 0x18F1D0u;
    // 0x18f1d0: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x18f1d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x18f1d4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F1D4u;
    {
        const bool branch_taken_0x18f1d4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1D4u;
            // 0x18f1d8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1d4) {
            ctx->pc = 0x18F1F8u;
            goto label_18f1f8;
        }
    }
    ctx->pc = 0x18F1DCu;
    // 0x18f1dc: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f1e0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f1e4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f1e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f1e8: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x18f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x18f1ec: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f1ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f1f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F1F0u;
    {
        const bool branch_taken_0x18f1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1F0u;
            // 0x18f1f4: 0xad6300c8  sw          $v1, 0xC8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1f0) {
            ctx->pc = 0x18F204u;
            goto label_18f204;
        }
    }
    ctx->pc = 0x18F1F8u;
label_18f1f8:
    // 0x18f1f8: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x18f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x18f1fc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f1fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f200: 0xad6200c8  sw          $v0, 0xC8($t3)
    ctx->pc = 0x18f200u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 2));
label_18f204:
    // 0x18f204: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f204u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f208: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f20c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f20cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f210: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f214: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f214u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f218: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f218u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f21c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f21cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f220: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f224: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f224u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f228: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f228u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f22c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f22cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f230: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f234: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f234u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f238: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F238u;
    {
        const bool branch_taken_0x18f238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F238u;
            // 0x18f23c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f238) {
            ctx->pc = 0x18F24Cu;
            goto label_18f24c;
        }
    }
    ctx->pc = 0x18F240u;
label_18f240:
    // 0x18f240: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x18f240u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x18f244: 0xad6200c8  sw          $v0, 0xC8($t3)
    ctx->pc = 0x18f244u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 2));
    // 0x18f248: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x18f248u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_18f24c:
    // 0x18f24c: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x18f24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x18f250: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F250u;
    {
        const bool branch_taken_0x18f250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F250u;
            // 0x18f254: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f250) {
            ctx->pc = 0x18F2C8u;
            goto label_18f2c8;
        }
    }
    ctx->pc = 0x18F258u;
    // 0x18f258: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x18f258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x18f25c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F25Cu;
    {
        const bool branch_taken_0x18f25c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F25Cu;
            // 0x18f260: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f25c) {
            ctx->pc = 0x18F280u;
            goto label_18f280;
        }
    }
    ctx->pc = 0x18F264u;
    // 0x18f264: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f268: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f268u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f26c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f26cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f270: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x18f270u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x18f274: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f274u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f278: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F278u;
    {
        const bool branch_taken_0x18f278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F278u;
            // 0x18f27c: 0xad6300cc  sw          $v1, 0xCC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f278) {
            ctx->pc = 0x18F28Cu;
            goto label_18f28c;
        }
    }
    ctx->pc = 0x18F280u;
label_18f280:
    // 0x18f280: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x18f280u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x18f284: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f288: 0xad6200cc  sw          $v0, 0xCC($t3)
    ctx->pc = 0x18f288u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 2));
label_18f28c:
    // 0x18f28c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f28cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f290: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f294: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f294u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f298: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f29c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f29cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f2a0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f2a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f2a4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f2a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f2a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f2ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f2acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f2b0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f2b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f2b4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f2b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f2b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f2bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f2c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F2C0u;
    {
        const bool branch_taken_0x18f2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2C0u;
            // 0x18f2c4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2c0) {
            ctx->pc = 0x18F2D4u;
            goto label_18f2d4;
        }
    }
    ctx->pc = 0x18F2C8u;
label_18f2c8:
    // 0x18f2c8: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x18f2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x18f2cc: 0xad6200cc  sw          $v0, 0xCC($t3)
    ctx->pc = 0x18f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 2));
    // 0x18f2d0: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x18f2d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_18f2d4:
    // 0x18f2d4: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x18f2d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18f2d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F2D8u;
    {
        const bool branch_taken_0x18f2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2D8u;
            // 0x18f2dc: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2d8) {
            ctx->pc = 0x18F350u;
            goto label_18f350;
        }
    }
    ctx->pc = 0x18F2E0u;
    // 0x18f2e0: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x18f2e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x18f2e4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F2E4u;
    {
        const bool branch_taken_0x18f2e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2E4u;
            // 0x18f2e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2e4) {
            ctx->pc = 0x18F308u;
            goto label_18f308;
        }
    }
    ctx->pc = 0x18F2ECu;
    // 0x18f2ec: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f2f0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f2f4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f2f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f2f8: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x18f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f2fc: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x18f2fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x18f300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F300u;
    {
        const bool branch_taken_0x18f300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F300u;
            // 0x18f304: 0xad6300d0  sw          $v1, 0xD0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f300) {
            ctx->pc = 0x18F314u;
            goto label_18f314;
        }
    }
    ctx->pc = 0x18F308u;
label_18f308:
    // 0x18f308: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x18f308u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f30c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x18f30cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f310: 0xad6200d0  sw          $v0, 0xD0($t3)
    ctx->pc = 0x18f310u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 2));
label_18f314:
    // 0x18f314: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x18f314u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f318: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f31c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f31cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f320: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f324: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f328: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x18f328u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f32c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18f32cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18f330: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f334: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f334u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f338: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x18f338u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f33c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18f33cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18f340: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18f340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18f344: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18f344u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18f348: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F348u;
    {
        const bool branch_taken_0x18f348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F348u;
            // 0x18f34c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f348) {
            ctx->pc = 0x18F35Cu;
            goto label_18f35c;
        }
    }
    ctx->pc = 0x18F350u;
label_18f350:
    // 0x18f350: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x18f350u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x18f354: 0xad6200d0  sw          $v0, 0xD0($t3)
    ctx->pc = 0x18f354u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 2));
    // 0x18f358: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18f358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_18f35c:
    // 0x18f35c: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x18f35cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18f360: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x18F360u;
    {
        const bool branch_taken_0x18f360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f360) {
            ctx->pc = 0x18F364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F360u;
            // 0x18f364: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F3A0u;
            goto label_18f3a0;
        }
    }
    ctx->pc = 0x18F368u;
    // 0x18f368: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x18f368u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x18f36c: 0x51400008  beql        $t2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F36Cu;
    {
        const bool branch_taken_0x18f36c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f36c) {
            ctx->pc = 0x18F370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F36Cu;
            // 0x18f370: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F390u;
            goto label_18f390;
        }
    }
    ctx->pc = 0x18F374u;
    // 0x18f374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f378: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x18f378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18f37c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18f380: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18f380u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18f384: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x18f384u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18f388: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18F388u;
    {
        const bool branch_taken_0x18f388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F388u;
            // 0x18f38c: 0xad6300d4  sw          $v1, 0xD4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f388) {
            ctx->pc = 0x18F394u;
            goto label_18f394;
        }
    }
    ctx->pc = 0x18F390u;
label_18f390:
    // 0x18f390: 0xad6200d4  sw          $v0, 0xD4($t3)
    ctx->pc = 0x18f390u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 2));
label_18f394:
    // 0x18f394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F394u;
    {
        const bool branch_taken_0x18f394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F394u;
            // 0x18f398: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f394) {
            ctx->pc = 0x18F3A8u;
            goto label_18f3a8;
        }
    }
    ctx->pc = 0x18F39Cu;
    // 0x18f39c: 0x0  nop
    ctx->pc = 0x18f39cu;
    // NOP
label_18f3a0:
    // 0x18f3a0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18f3a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x18f3a4: 0xad6200d4  sw          $v0, 0xD4($t3)
    ctx->pc = 0x18f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 2));
label_18f3a8:
    // 0x18f3a8: 0x10c1823  subu        $v1, $t0, $t4
    ctx->pc = 0x18f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x18f3ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18f3b0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x18f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18f3b4: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x18f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x18f3b8: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x18f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x18f3bc: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x18f3bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x18f3c0: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x18f3c0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x18f3c4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x18f3c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x18f3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x18F3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3C8u;
            // 0x18f3cc: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F3D0u;
}
