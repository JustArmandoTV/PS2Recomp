#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025FAB0
// Address: 0x25fab0 - 0x25fc90
void sub_0025FAB0_0x25fab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FAB0_0x25fab0");
#endif

    switch (ctx->pc) {
        case 0x25fae0u: goto label_25fae0;
        case 0x25fb98u: goto label_25fb98;
        case 0x25fc10u: goto label_25fc10;
        default: break;
    }

    ctx->pc = 0x25fab0u;

    // 0x25fab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25fab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25fab4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x25fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x25fab8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x25fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x25fabc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x25fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x25fac0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x25fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x25fac4: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x25fac4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25fac8: 0x7082b  sltu        $at, $zero, $a3
    ctx->pc = 0x25fac8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x25facc: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x25FACCu;
    {
        const bool branch_taken_0x25facc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FACCu;
            // 0x25fad0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25facc) {
            ctx->pc = 0x25FB58u;
            goto label_25fb58;
        }
    }
    ctx->pc = 0x25FAD4u;
    // 0x25fad4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x25fad4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fad8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x25fad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fadc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25fae0:
    // 0x25fae0: 0x91490004  lbu         $t1, 0x4($t2)
    ctx->pc = 0x25fae0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x25fae4: 0x91470005  lbu         $a3, 0x5($t2)
    ctx->pc = 0x25fae4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
    // 0x25fae8: 0x254b0004  addiu       $t3, $t2, 0x4
    ctx->pc = 0x25fae8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x25faec: 0x91450008  lbu         $a1, 0x8($t2)
    ctx->pc = 0x25faecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x25faf0: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x25faf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x25faf4: 0x53903  sra         $a3, $a1, 4
    ctx->pc = 0x25faf4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 4));
    // 0x25faf8: 0xfd3821  addu        $a3, $a3, $sp
    ctx->pc = 0x25faf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x25fafc: 0x29250003  slti        $a1, $t1, 0x3
    ctx->pc = 0x25fafcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25fb00: 0xa0e80040  sb          $t0, 0x40($a3)
    ctx->pc = 0x25fb00u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x25fb04: 0x91470009  lbu         $a3, 0x9($t2)
    ctx->pc = 0x25fb04u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 9)));
    // 0x25fb08: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x25fb08u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x25fb0c: 0xfd3821  addu        $a3, $a3, $sp
    ctx->pc = 0x25fb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x25fb10: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FB10u;
    {
        const bool branch_taken_0x25fb10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB10u;
            // 0x25fb14: 0xa0e80040  sb          $t0, 0x40($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 64), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb10) {
            ctx->pc = 0x25FB28u;
            goto label_25fb28;
        }
    }
    ctx->pc = 0x25FB18u;
    // 0x25fb18: 0x91650006  lbu         $a1, 0x6($t3)
    ctx->pc = 0x25fb18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x25fb1c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x25fb1cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x25fb20: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x25fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x25fb24: 0xa0a80040  sb          $t0, 0x40($a1)
    ctx->pc = 0x25fb24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 64), (uint8_t)GPR_U32(ctx, 8));
label_25fb28:
    // 0x25fb28: 0x15260005  bne         $t1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FB28u;
    {
        const bool branch_taken_0x25fb28 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        if (branch_taken_0x25fb28) {
            ctx->pc = 0x25FB40u;
            goto label_25fb40;
        }
    }
    ctx->pc = 0x25FB30u;
    // 0x25fb30: 0x91650007  lbu         $a1, 0x7($t3)
    ctx->pc = 0x25fb30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 7)));
    // 0x25fb34: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x25fb34u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x25fb38: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x25fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x25fb3c: 0xa0a80040  sb          $t0, 0x40($a1)
    ctx->pc = 0x25fb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 64), (uint8_t)GPR_U32(ctx, 8));
label_25fb40:
    // 0x25fb40: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x25fb40u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25fb44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25fb48: 0x67282b  sltu        $a1, $v1, $a3
    ctx->pc = 0x25fb48u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x25fb4c: 0x14a0ffe4  bnez        $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x25FB4Cu;
    {
        const bool branch_taken_0x25fb4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB4Cu;
            // 0x25fb50: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb4c) {
            ctx->pc = 0x25FAE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25fae0;
        }
    }
    ctx->pc = 0x25FB54u;
    // 0x25fb54: 0x0  nop
    ctx->pc = 0x25fb54u;
    // NOP
label_25fb58:
    // 0x25fb58: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x25fb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x25fb5c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25fb60: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x25fb60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25fb64: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x25fb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25fb68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25fb68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb6c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x25fb6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x25fb70: 0x24cc0004  addiu       $t4, $a2, 0x4
    ctx->pc = 0x25fb70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x25fb74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25fb74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb78: 0xa35821  addu        $t3, $a1, $v1
    ctx->pc = 0x25fb78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25fb7c: 0xb082a  slt         $at, $zero, $t3
    ctx->pc = 0x25fb7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x25fb80: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x25FB80u;
    {
        const bool branch_taken_0x25fb80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB80u;
            // 0x25fb84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb80) {
            ctx->pc = 0x25FBD8u;
            goto label_25fbd8;
        }
    }
    ctx->pc = 0x25FB88u;
    // 0x25fb88: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x25fb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x25fb8c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25fb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25fb90: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x25fb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb94: 0x0  nop
    ctx->pc = 0x25fb94u;
    // NOP
label_25fb98:
    // 0x25fb98: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x25fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x25fb9c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x25fb9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25fba0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FBA0u;
    {
        const bool branch_taken_0x25fba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fba0) {
            ctx->pc = 0x25FBC0u;
            goto label_25fbc0;
        }
    }
    ctx->pc = 0x25FBA8u;
    // 0x25fba8: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x25fba8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x25fbac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x25fbacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x25fbb0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x25fbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x25fbb4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x25fbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25fbb8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x25fbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x25fbbc: 0x0  nop
    ctx->pc = 0x25fbbcu;
    // NOP
label_25fbc0:
    // 0x25fbc0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x25fbc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x25fbc4: 0x14b182a  slt         $v1, $t2, $t3
    ctx->pc = 0x25fbc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x25fbc8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x25fbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x25fbcc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25fbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25fbd0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x25FBD0u;
    {
        const bool branch_taken_0x25fbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FBD0u;
            // 0x25fbd4: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbd0) {
            ctx->pc = 0x25FB98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25fb98;
        }
    }
    ctx->pc = 0x25FBD8u;
label_25fbd8:
    // 0x25fbd8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x25fbd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25fbdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25fbe0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x25fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x25fbe4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fbe8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x25fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x25fbec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x25fbecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x25fbf0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x25fbf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25fbf4: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x25fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x25fbf8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x25fbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x25fbfc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x25fbfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25fc00: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x25fc00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25fc04: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x25FC04u;
    {
        const bool branch_taken_0x25fc04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC04u;
            // 0x25fc08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc04) {
            ctx->pc = 0x25FC88u;
            goto label_25fc88;
        }
    }
    ctx->pc = 0x25FC0Cu;
    // 0x25fc0c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x25fc0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25fc10:
    // 0x25fc10: 0x90660008  lbu         $a2, 0x8($v1)
    ctx->pc = 0x25fc10u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25fc14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25fc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25fc18: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x25fc18u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x25fc1c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x25fc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25fc20: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x25fc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x25fc24: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x25fc24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25fc28: 0xa0660008  sb          $a2, 0x8($v1)
    ctx->pc = 0x25fc28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x25fc2c: 0x90660009  lbu         $a2, 0x9($v1)
    ctx->pc = 0x25fc2cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x25fc30: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x25fc30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x25fc34: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x25fc34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25fc38: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x25fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x25fc3c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x25fc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25fc40: 0xa0660009  sb          $a2, 0x9($v1)
    ctx->pc = 0x25fc40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x25fc44: 0x9066000a  lbu         $a2, 0xA($v1)
    ctx->pc = 0x25fc44u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x25fc48: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x25fc48u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x25fc4c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x25fc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25fc50: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x25fc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x25fc54: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x25fc54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25fc58: 0xa066000a  sb          $a2, 0xA($v1)
    ctx->pc = 0x25fc58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x25fc5c: 0x9066000b  lbu         $a2, 0xB($v1)
    ctx->pc = 0x25fc5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x25fc60: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x25fc60u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x25fc64: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x25fc64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25fc68: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x25fc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x25fc6c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x25fc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25fc70: 0xa066000b  sb          $a2, 0xB($v1)
    ctx->pc = 0x25fc70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 6));
    // 0x25fc74: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x25fc74u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25fc78: 0xa6302b  sltu        $a2, $a1, $a2
    ctx->pc = 0x25fc78u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x25fc7c: 0x14c0ffe4  bnez        $a2, . + 4 + (-0x1C << 2)
    ctx->pc = 0x25FC7Cu;
    {
        const bool branch_taken_0x25fc7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC7Cu;
            // 0x25fc80: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc7c) {
            ctx->pc = 0x25FC10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25fc10;
        }
    }
    ctx->pc = 0x25FC84u;
    // 0x25fc84: 0x0  nop
    ctx->pc = 0x25fc84u;
    // NOP
label_25fc88:
    // 0x25fc88: 0x3e00008  jr          $ra
    ctx->pc = 0x25FC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC88u;
            // 0x25fc8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FC90u;
}
