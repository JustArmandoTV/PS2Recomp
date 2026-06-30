#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00260FD0
// Address: 0x260fd0 - 0x261280
void sub_00260FD0_0x260fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260FD0_0x260fd0");
#endif

    switch (ctx->pc) {
        case 0x260ff0u: goto label_260ff0;
        case 0x261110u: goto label_261110;
        default: break;
    }

    ctx->pc = 0x260fd0u;

    // 0x260fd0: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x260fd0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x260fd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x260fd8: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x260fd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x260fdc: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x260FDCu;
    {
        const bool branch_taken_0x260fdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260FDCu;
            // 0x260fe0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fdc) {
            ctx->pc = 0x2610C8u;
            goto label_2610c8;
        }
    }
    ctx->pc = 0x260FE4u;
    // 0x260fe4: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x260fe4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x260fe8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x260fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260fec: 0x0  nop
    ctx->pc = 0x260fecu;
    // NOP
label_260ff0:
    // 0x260ff0: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x260ff0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x260ff4: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x260FF4u;
    {
        const bool branch_taken_0x260ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x260FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260FF4u;
            // 0x260ff8: 0x24e90004  addiu       $t1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ff4) {
            ctx->pc = 0x2610B8u;
            goto label_2610b8;
        }
    }
    ctx->pc = 0x260FFCu;
    // 0x260ffc: 0x90a80009  lbu         $t0, 0x9($a1)
    ctx->pc = 0x260ffcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x261000: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x261000u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x261004: 0x1502002c  bne         $t0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x261004u;
    {
        const bool branch_taken_0x261004 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x261004) {
            ctx->pc = 0x2610B8u;
            goto label_2610b8;
        }
    }
    ctx->pc = 0x26100Cu;
    // 0x26100c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x26100cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x261010: 0x912b0004  lbu         $t3, 0x4($t1)
    ctx->pc = 0x261010u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x261014: 0x94ac0000  lhu         $t4, 0x0($a1)
    ctx->pc = 0x261014u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x261018: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x261018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x26101c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x261020: 0xb58c3  sra         $t3, $t3, 3
    ctx->pc = 0x261020u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 3));
    // 0x261024: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x261024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x261028: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x261028u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x26102c: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x26102cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x261030: 0x956b0000  lhu         $t3, 0x0($t3)
    ctx->pc = 0x261030u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x261034: 0x158b0020  bne         $t4, $t3, . + 4 + (0x20 << 2)
    ctx->pc = 0x261034u;
    {
        const bool branch_taken_0x261034 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 11));
        ctx->pc = 0x261038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261034u;
            // 0x261038: 0x684021  addu        $t0, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261034) {
            ctx->pc = 0x2610B8u;
            goto label_2610b8;
        }
    }
    ctx->pc = 0x26103Cu;
    // 0x26103c: 0x912b0005  lbu         $t3, 0x5($t1)
    ctx->pc = 0x26103cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x261040: 0x94ac0002  lhu         $t4, 0x2($a1)
    ctx->pc = 0x261040u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x261044: 0xb58c3  sra         $t3, $t3, 3
    ctx->pc = 0x261044u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 3));
    // 0x261048: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x261048u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x26104c: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x26104cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x261050: 0x956b0000  lhu         $t3, 0x0($t3)
    ctx->pc = 0x261050u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x261054: 0x158b0018  bne         $t4, $t3, . + 4 + (0x18 << 2)
    ctx->pc = 0x261054u;
    {
        const bool branch_taken_0x261054 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 11));
        ctx->pc = 0x261058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261054u;
            // 0x261058: 0x29010003  slti        $at, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261054) {
            ctx->pc = 0x2610B8u;
            goto label_2610b8;
        }
    }
    ctx->pc = 0x26105Cu;
    // 0x26105c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x26105Cu;
    {
        const bool branch_taken_0x26105c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26105c) {
            ctx->pc = 0x261088u;
            goto label_261088;
        }
    }
    ctx->pc = 0x261064u;
    // 0x261064: 0x912b0006  lbu         $t3, 0x6($t1)
    ctx->pc = 0x261064u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x261068: 0x94ac0004  lhu         $t4, 0x4($a1)
    ctx->pc = 0x261068u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26106c: 0xb58c3  sra         $t3, $t3, 3
    ctx->pc = 0x26106cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 3));
    // 0x261070: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x261070u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x261074: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x261074u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x261078: 0x956b0000  lhu         $t3, 0x0($t3)
    ctx->pc = 0x261078u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x26107c: 0x158b000e  bne         $t4, $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x26107Cu;
    {
        const bool branch_taken_0x26107c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 11));
        if (branch_taken_0x26107c) {
            ctx->pc = 0x2610B8u;
            goto label_2610b8;
        }
    }
    ctx->pc = 0x261084u;
    // 0x261084: 0x0  nop
    ctx->pc = 0x261084u;
    // NOP
label_261088:
    // 0x261088: 0x29010004  slti        $at, $t0, 0x4
    ctx->pc = 0x261088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26108c: 0x14200050  bnez        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x26108Cu;
    {
        const bool branch_taken_0x26108c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26108c) {
            ctx->pc = 0x2611D0u;
            goto label_2611d0;
        }
    }
    ctx->pc = 0x261094u;
    // 0x261094: 0x91280007  lbu         $t0, 0x7($t1)
    ctx->pc = 0x261094u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
    // 0x261098: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x261098u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
    // 0x26109c: 0x94a90006  lhu         $t1, 0x6($a1)
    ctx->pc = 0x26109cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2610a0: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2610a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2610a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2610a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2610a8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2610a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2610ac: 0x11220048  beq         $t1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2610ACu;
    {
        const bool branch_taken_0x2610ac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x2610ac) {
            ctx->pc = 0x2611D0u;
            goto label_2611d0;
        }
    }
    ctx->pc = 0x2610B4u;
    // 0x2610b4: 0x0  nop
    ctx->pc = 0x2610b4u;
    // NOP
label_2610b8:
    // 0x2610b8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2610b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2610bc: 0x146102b  sltu        $v0, $t2, $a2
    ctx->pc = 0x2610bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2610c0: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2610C0u;
    {
        const bool branch_taken_0x2610c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2610C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2610C0u;
            // 0x2610c4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610c0) {
            ctx->pc = 0x260FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_260ff0;
        }
    }
    ctx->pc = 0x2610C8u;
label_2610c8:
    // 0x2610c8: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x2610c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2610cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2610ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2610d0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2610D0u;
    {
        const bool branch_taken_0x2610d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2610d0) {
            ctx->pc = 0x2610E8u;
            goto label_2610e8;
        }
    }
    ctx->pc = 0x2610D8u;
    // 0x2610d8: 0x90a20009  lbu         $v0, 0x9($a1)
    ctx->pc = 0x2610d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2610dc: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2610DCu;
    {
        const bool branch_taken_0x2610dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2610dc) {
            ctx->pc = 0x2611C8u;
            goto label_2611c8;
        }
    }
    ctx->pc = 0x2610E4u;
    // 0x2610e4: 0x0  nop
    ctx->pc = 0x2610e4u;
    // NOP
label_2610e8:
    // 0x2610e8: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x2610e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2610ec: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x2610ECu;
    {
        const bool branch_taken_0x2610ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2610ECu;
            // 0x2610f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610ec) {
            ctx->pc = 0x2611C8u;
            goto label_2611c8;
        }
    }
    ctx->pc = 0x2610F4u;
    // 0x2610f4: 0x90a70008  lbu         $a3, 0x8($a1)
    ctx->pc = 0x2610f4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2610f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2610f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2610fc: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x2610fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x261100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261104: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x261104u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x261108: 0xa96821  addu        $t5, $a1, $t1
    ctx->pc = 0x261108u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x26110c: 0x0  nop
    ctx->pc = 0x26110cu;
    // NOP
label_261110:
    // 0x261110: 0x14e20013  bne         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x261110u;
    {
        const bool branch_taken_0x261110 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x261114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261110u;
            // 0x261114: 0x25090004  addiu       $t1, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261110) {
            ctx->pc = 0x261160u;
            goto label_261160;
        }
    }
    ctx->pc = 0x261118u;
    // 0x261118: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x261118u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x26111c: 0x15420010  bne         $t2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26111Cu;
    {
        const bool branch_taken_0x26111c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x26111c) {
            ctx->pc = 0x261160u;
            goto label_261160;
        }
    }
    ctx->pc = 0x261124u;
    // 0x261124: 0x908b0002  lbu         $t3, 0x2($a0)
    ctx->pc = 0x261124u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x261128: 0x912a0004  lbu         $t2, 0x4($t1)
    ctx->pc = 0x261128u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x26112c: 0x94ac0000  lhu         $t4, 0x0($a1)
    ctx->pc = 0x26112cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x261130: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x261130u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x261134: 0xa50c3  sra         $t2, $t2, 3
    ctx->pc = 0x261134u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 3));
    // 0x261138: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x261138u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x26113c: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x26113cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x261140: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x261140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x261144: 0x954a0004  lhu         $t2, 0x4($t2)
    ctx->pc = 0x261144u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x261148: 0x158a0005  bne         $t4, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x261148u;
    {
        const bool branch_taken_0x261148 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x261148) {
            ctx->pc = 0x261160u;
            goto label_261160;
        }
    }
    ctx->pc = 0x261150u;
    // 0x261150: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x261150u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x261154: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x261154u;
    {
        const bool branch_taken_0x261154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261154u;
            // 0x261158: 0xa1200001  sb          $zero, 0x1($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261154) {
            ctx->pc = 0x2611C8u;
            goto label_2611c8;
        }
    }
    ctx->pc = 0x26115Cu;
    // 0x26115c: 0x0  nop
    ctx->pc = 0x26115cu;
    // NOP
label_261160:
    // 0x261160: 0x90aa0009  lbu         $t2, 0x9($a1)
    ctx->pc = 0x261160u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x261164: 0x15420014  bne         $t2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x261164u;
    {
        const bool branch_taken_0x261164 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x261164) {
            ctx->pc = 0x2611B8u;
            goto label_2611b8;
        }
    }
    ctx->pc = 0x26116Cu;
    // 0x26116c: 0x912a0001  lbu         $t2, 0x1($t1)
    ctx->pc = 0x26116cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x261170: 0x15420011  bne         $t2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x261170u;
    {
        const bool branch_taken_0x261170 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x261170) {
            ctx->pc = 0x2611B8u;
            goto label_2611b8;
        }
    }
    ctx->pc = 0x261178u;
    // 0x261178: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x261178u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x26117c: 0x908b0002  lbu         $t3, 0x2($a0)
    ctx->pc = 0x26117cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x261180: 0x95ac0000  lhu         $t4, 0x0($t5)
    ctx->pc = 0x261180u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x261184: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x261184u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x261188: 0x914a0004  lbu         $t2, 0x4($t2)
    ctx->pc = 0x261188u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x26118c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x26118cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x261190: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x261190u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x261194: 0xa50c3  sra         $t2, $t2, 3
    ctx->pc = 0x261194u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 3));
    // 0x261198: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x261198u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x26119c: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x26119cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2611a0: 0x954a0004  lhu         $t2, 0x4($t2)
    ctx->pc = 0x2611a0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2611a4: 0x158a0004  bne         $t4, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2611A4u;
    {
        const bool branch_taken_0x2611a4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x2611a4) {
            ctx->pc = 0x2611B8u;
            goto label_2611b8;
        }
    }
    ctx->pc = 0x2611ACu;
    // 0x2611ac: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x2611acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2611b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2611B0u;
    {
        const bool branch_taken_0x2611b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2611B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2611B0u;
            // 0x2611b4: 0xa1200001  sb          $zero, 0x1($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611b0) {
            ctx->pc = 0x2611C8u;
            goto label_2611c8;
        }
    }
    ctx->pc = 0x2611B8u;
label_2611b8:
    // 0x2611b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2611b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2611bc: 0x66482b  sltu        $t1, $v1, $a2
    ctx->pc = 0x2611bcu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2611c0: 0x1520ffd3  bnez        $t1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2611C0u;
    {
        const bool branch_taken_0x2611c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2611C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2611C0u;
            // 0x2611c4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611c0) {
            ctx->pc = 0x261110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261110;
        }
    }
    ctx->pc = 0x2611C8u;
label_2611c8:
    // 0x2611c8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2611C8u;
    {
        const bool branch_taken_0x2611c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2611CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2611C8u;
            // 0x2611cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611c8) {
            ctx->pc = 0x261270u;
            goto label_261270;
        }
    }
    ctx->pc = 0x2611D0u;
label_2611d0:
    // 0x2611d0: 0x11400025  beqz        $t2, . + 4 + (0x25 << 2)
    ctx->pc = 0x2611D0u;
    {
        const bool branch_taken_0x2611d0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2611D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2611D0u;
            // 0x2611d4: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611d0) {
            ctx->pc = 0x261268u;
            goto label_261268;
        }
    }
    ctx->pc = 0x2611D8u;
    // 0x2611d8: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x2611d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2611dc: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x2611dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2611e0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2611e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2611e4: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x2611e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2611e8: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2611e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2611ec: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2611ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2611f0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2611f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2611f4: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x2611f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2611f8: 0xa1030004  sb          $v1, 0x4($t0)
    ctx->pc = 0x2611f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2611fc: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x2611fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x261200: 0xa1030005  sb          $v1, 0x5($t0)
    ctx->pc = 0x261200u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x261204: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x261204u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x261208: 0xa5030006  sh          $v1, 0x6($t0)
    ctx->pc = 0x261208u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x26120c: 0x90870008  lbu         $a3, 0x8($a0)
    ctx->pc = 0x26120cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x261210: 0x90860009  lbu         $a2, 0x9($a0)
    ctx->pc = 0x261210u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x261214: 0x9085000a  lbu         $a1, 0xA($a0)
    ctx->pc = 0x261214u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x261218: 0x9083000b  lbu         $v1, 0xB($a0)
    ctx->pc = 0x261218u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x26121c: 0xa1070008  sb          $a3, 0x8($t0)
    ctx->pc = 0x26121cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x261220: 0xa1060009  sb          $a2, 0x9($t0)
    ctx->pc = 0x261220u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x261224: 0xa105000a  sb          $a1, 0xA($t0)
    ctx->pc = 0x261224u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x261228: 0xa103000b  sb          $v1, 0xB($t0)
    ctx->pc = 0x261228u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x26122c: 0x93a30008  lbu         $v1, 0x8($sp)
    ctx->pc = 0x26122cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x261230: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x261230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x261234: 0x93a30009  lbu         $v1, 0x9($sp)
    ctx->pc = 0x261234u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    // 0x261238: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x261238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x26123c: 0x97a3000a  lhu         $v1, 0xA($sp)
    ctx->pc = 0x26123cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x261240: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x261240u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x261244: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x261244u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261248: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x261248u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x26124c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x26124cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x261250: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x261250u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x261254: 0xa0860008  sb          $a2, 0x8($a0)
    ctx->pc = 0x261254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x261258: 0xa0850009  sb          $a1, 0x9($a0)
    ctx->pc = 0x261258u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x26125c: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x26125cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x261260: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x261260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x261264: 0x0  nop
    ctx->pc = 0x261264u;
    // NOP
label_261268:
    // 0x261268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26126c: 0x0  nop
    ctx->pc = 0x26126cu;
    // NOP
label_261270:
    // 0x261270: 0x3e00008  jr          $ra
    ctx->pc = 0x261270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261270u;
            // 0x261274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261278u;
    // 0x261278: 0x0  nop
    ctx->pc = 0x261278u;
    // NOP
    // 0x26127c: 0x0  nop
    ctx->pc = 0x26127cu;
    // NOP
}
